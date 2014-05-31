import { NSObject } from 'foundation';
import { NSScrollView, NSTextField, NSTableView, NSTableColumn, NSButton, NSBezelStyle, NSWindow, NSApplicationDelegate, NSApplication } from 'appkit';
import { override, instanceSelector, outlet, sig } from 'objc';

let AppDelegate = NSObject.extendClass("AppDelegate", () => ({

    didFinishLaunching: function() {
	let window = this.window;
	let contentView = window.contentView;
	let contentBounds = contentView.bounds;

	window.title = "Hello OSX, Love Pirouette";

	// newWith$Stuff = ctor + call initWith$Stuff
	let button        = NSButton.newWithFrame({ x: 100, y: contentBounds.height - 50,
						    width: 200, height: 50 });
	button.bezelStyle = NSBezelStyle.RoundedBezelStyle;
	button.title      = "Fetch Headlines";

	let tabledata = [];

	let scrollView = NSScrollView.newWithFrame({ x: 10, y: 10, width: contentBounds.width - 20, height: contentBounds.height - 180 });
	scrollView.hasVerticalScroller = true;
	let table = NSTableView.newWithFrame(scrollView.contentView.bounds);
	let tablecolumn = NSTableColumn.newWithIdentifier("column");
	tablecolumn.width = contentBounds.width - 20;

	table.addTableColumn(tablecolumn);

	table.dataSource = {
	    numberOfRows: () => tabledata.length
	};

	table.delegate = {
	    viewFor: function (tv, column, row) { // needs to be function() to get dynamic 'this' below
		const viewid = "StoryView";
		let result = tv.makeViewWithIdentifier(viewid, this);
		
		if (!result)
		    result = NSTextField.newWithFrame({ x: 0, y: 0, width: 100, height: 15 });

		result.stringValue = tabledata[row].data.title;
		result.identifier = viewid;

		return result;
	    }
	};

	button.clicked = () => {
	    this.xmlhttp = new XMLHttpRequest();
	    this.xmlhttp.open('GET', 'http://www.reddit.com/r/programming/top.json', true);
	    this.xmlhttp.onreadystatechange = () => {
		if (this.xmlhttp.readyState === 4) {
		    tabledata = JSON.parse(this.xmlhttp.responseText).data.children;
		    table.reloadData();
		}
	    };
	    this.xmlhttp.send();
	};

	contentView.addSubview(button);
	scrollView.documentView = table;
	contentView.addSubview(scrollView);
    },

    /* XXX we shouldn't need this (the outlet below should be enough), but without the selector
       explicitly registered the outlet doesn't get set for some reason... */
    setWindow: instanceSelector("setWindow:")
	       .returns(sig.Void)
               .params([ NSWindow ])
               .impl(function (v) { this.window = v; }),
    window: outlet (NSWindow)
}), [
    /* protocols this type conforms to */
    NSApplicationDelegate
]);

NSApplication.main(process.argv);
