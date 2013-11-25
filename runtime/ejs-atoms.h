// empty things
EJS_ATOM2(,empty)
EJS_ATOM2([],empty_array)
EJS_ATOM2({},empty_object)

EJS_ATOM2(/,slash)

// common properties/methods
EJS_ATOM(__proto__)
EJS_ATOM(constructor)
EJS_ATOM(length)
EJS_ATOM(prototype)
EJS_ATOM(message)
EJS_ATOM(name)

EJS_ATOM(object)
EJS_ATOM(function)
EJS_ATOM(string)
EJS_ATOM(symbol)
EJS_ATOM(boolean)
EJS_ATOM(number)


EJS_ATOM(Empty)

EJS_ATOM(null)
EJS_ATOM(undefined)
EJS_ATOM(NaN)

EJS_ATOM(true)
EJS_ATOM(false)

EJS_ATOM(toJSON)

EJS_ATOM(byteOffset)
EJS_ATOM(byteLength)
EJS_ATOM(buffer)

// property descriptors
EJS_ATOM(value)
EJS_ATOM(writable)
EJS_ATOM(configurable)
EJS_ATOM(enumerable)
EJS_ATOM(get)
EJS_ATOM(set)

// class names
EJS_ATOM(Array)
EJS_ATOM(Boolean)
EJS_ATOM(Date)
EJS_ATOM(Function)
EJS_ATOM(JSON)
EJS_ATOM(Math)
EJS_ATOM(Number)
EJS_ATOM(Object)
EJS_ATOM(RegExp)
EJS_ATOM(String)

EJS_ATOM(XMLHttpRequest)

EJS_ATOM(ArrayBuffer)
EJS_ATOM(Int8Array)
EJS_ATOM(Uint8Array)
EJS_ATOM(Uint8ClampedArray)
EJS_ATOM(Int16Array)
EJS_ATOM(Uint16Array)
EJS_ATOM(Int32Array)
EJS_ATOM(Uint32Array)
EJS_ATOM(Float32Array)
EJS_ATOM(Float64Array)
EJS_ATOM(BYTES_PER_ELEMENT)

// error types
EJS_ATOM(Error)
EJS_ATOM(EvalError)
EJS_ATOM(RangeError)
EJS_ATOM(ReferenceError)
EJS_ATOM(SyntaxError)
EJS_ATOM(TypeError)
EJS_ATOM(URIError)

EJS_ATOM(console)
EJS_ATOM(require)
EJS_ATOM(exports)

// our ejs-specific stuff
EJS_ATOM(__ejs)
EJS_ATOM(GC)

EJS_ATOM(argv)
EJS_ATOM(process)

// Object method/property names
EJS_ATOM(getPrototypeOf)
EJS_ATOM(getOwnPropertyDescriptor)
EJS_ATOM(getOwnPropertyNames)
EJS_ATOM(create)
EJS_ATOM(defineProperty)
EJS_ATOM(defineProperties)
EJS_ATOM(seal)
EJS_ATOM(freeze)
EJS_ATOM(preventExtensions)
EJS_ATOM(isSealed)
EJS_ATOM(isFrozen)
EJS_ATOM(isExtensible)
EJS_ATOM(keys)
EJS_ATOM(toString)
EJS_ATOM(toLocaleString)
EJS_ATOM(valueOf)
EJS_ATOM(hasOwnProperty)
EJS_ATOM(isPrototypeOf)
EJS_ATOM(propertyIsEnumerable)


// Math method/property names
EJS_ATOM(abs)
EJS_ATOM(acos)
EJS_ATOM(asin)
EJS_ATOM(atan)
EJS_ATOM(atan2)
EJS_ATOM(ceil)
EJS_ATOM(cos)
EJS_ATOM(exp)
EJS_ATOM(floor)
EJS_ATOM(log)
EJS_ATOM(max)
EJS_ATOM(min)
EJS_ATOM(pow)
EJS_ATOM(random)
EJS_ATOM(round)
EJS_ATOM(sin)
EJS_ATOM(sqrt)
EJS_ATOM(tan)
EJS_ATOM(PI)

// Array method names
EJS_ATOM(isArray)
EJS_ATOM(push)
EJS_ATOM(pop)
EJS_ATOM(shift)
EJS_ATOM(unshift)
EJS_ATOM(concat)
EJS_ATOM(slice)
EJS_ATOM(splice)
EJS_ATOM(indexOf)
EJS_ATOM(join)
EJS_ATOM(forEach)
EJS_ATOM(map)
EJS_ATOM(every)
EJS_ATOM(some)
EJS_ATOM(reduce)
EJS_ATOM(reduceRight)

// global functions
EJS_ATOM(isNaN)
EJS_ATOM(isFinite)
EJS_ATOM(parseInt)
EJS_ATOM(parseFloat)
EJS_ATOM(decodeURI)
EJS_ATOM(decodeURIComponent)
EJS_ATOM(encodeURI)
EJS_ATOM(encodeURIComponent)

// JSON functions
EJS_ATOM(parse)
EJS_ATOM(stringify)

// String functions
EJS_ATOM(charAt)
EJS_ATOM(charCodeAt)
//EJS_ATOM(concat)
//EJS_ATOM(indexOf)
EJS_ATOM(lastIndexOf)
EJS_ATOM(localeCompare)
EJS_ATOM(match)
EJS_ATOM(replace)
EJS_ATOM(search)
//EJS_ATOM(slice)
EJS_ATOM(split)
EJS_ATOM(substr)
EJS_ATOM(substring)
EJS_ATOM(toLocaleLowerCase)
EJS_ATOM(toLocaleUpperCase)
EJS_ATOM(toLowerCase)
//EJS_ATOM(toString)
EJS_ATOM(toUpperCase)
EJS_ATOM(trim)
//EJS_ATOM(valueOf)
EJS_ATOM(fromCharCode)

// Number functions
//EJS_ATOM(valueOf)
//EJS_ATOM(toString)

// Boolean functions
//EJS_ATOM(valueOf)
//EJS_ATOM(toString)

// Regexp functions and properties
EJS_ATOM(exec)
//EJS_ATOM(match)
EJS_ATOM(test)
//EJS_ATOM(toString)
EJS_ATOM(source)
EJS_ATOM(global)
EJS_ATOM(lastIndex)
EJS_ATOM(multiline)
EJS_ATOM(ignoreCase)

// Date functions
//EJS_ATOM(toString)
EJS_ATOM(getTime)
EJS_ATOM(getTimezoneOffset)

// Function functions
//EJS_ATOM(toString)
EJS_ATOM(apply)
EJS_ATOM(call)
EJS_ATOM(bind)


// ArrayBuffer functions
//EJS_ATOM(slice)

// console functions
//EJS_ATOM(log)
EJS_ATOM(warn)

// gc functions
EJS_ATOM(collect)
EJS_ATOM(dumpAllocationStats)

// process functions/properties
EJS_ATOM(exit)
EJS_ATOM(chdir)
EJS_ATOM(cwd)
EJS_ATOM(env)

// XMLHttpRequest functions
EJS_ATOM(open)
EJS_ATOM(send)
EJS_ATOM(setRequestHeader)
EJS_ATOM(abort)
EJS_ATOM(getResponseHeader)
EJS_ATOM(getAllResponseHeaders)

// XMLHttpRequest properties
EJS_ATOM(readyState)
EJS_ATOM(status)
EJS_ATOM(statusText)
EJS_ATOM(responseText)
EJS_ATOM(responseXML)
EJS_ATOM(onreadystatechange)

EJS_ATOM(eval)

// es6
EJS_ATOM(Map)
EJS_ATOM(clear)
EJS_ATOM(delete)
EJS_ATOM(entries)
EJS_ATOM(has)
EJS_ATOM(values)
EJS_ATOM(Proxy)
//EJS_ATOM(create)
EJS_ATOM(createFunction)

// some numbers
EJS_ATOM2(0,0)
EJS_ATOM2(1,1)
EJS_ATOM2(2,2)
EJS_ATOM2(3,3)
EJS_ATOM2(4,4)
EJS_ATOM2(5,5)
EJS_ATOM2(6,6)
EJS_ATOM2(7,7)
EJS_ATOM2(8,8)
EJS_ATOM2(9,9)
EJS_ATOM2(10,10)
EJS_ATOM2(11,11)
EJS_ATOM2(12,12)
EJS_ATOM2(13,13)
EJS_ATOM2(14,14)
EJS_ATOM2(15,15)
EJS_ATOM2(16,16)
EJS_ATOM2(17,17)
EJS_ATOM2(18,18)
EJS_ATOM2(19,19)
EJS_ATOM2(20,20)
EJS_ATOM2(21,21)
EJS_ATOM2(22,22)
EJS_ATOM2(23,23)
EJS_ATOM2(24,24)
EJS_ATOM2(25,25)
EJS_ATOM2(26,26)
EJS_ATOM2(27,27)
EJS_ATOM2(28,28)
EJS_ATOM2(29,29)
EJS_ATOM2(30,30)
EJS_ATOM2(31,31)
EJS_ATOM2(32,32)
EJS_ATOM2(33,33)
EJS_ATOM2(34,34)
EJS_ATOM2(35,35)
EJS_ATOM2(36,36)
EJS_ATOM2(37,37)
EJS_ATOM2(38,38)
EJS_ATOM2(39,39)
EJS_ATOM2(40,40)
EJS_ATOM2(41,41)
EJS_ATOM2(42,42)
EJS_ATOM2(43,43)
EJS_ATOM2(44,44)
EJS_ATOM2(45,45)
EJS_ATOM2(46,46)
EJS_ATOM2(47,47)
EJS_ATOM2(48,48)
EJS_ATOM2(49,49)
EJS_ATOM2(50,50)
EJS_ATOM2(51,51)
EJS_ATOM2(52,52)
EJS_ATOM2(53,53)
EJS_ATOM2(54,54)
EJS_ATOM2(55,55)
EJS_ATOM2(56,56)
EJS_ATOM2(57,57)
EJS_ATOM2(58,58)
EJS_ATOM2(59,59)
EJS_ATOM2(60,60)
EJS_ATOM2(61,61)
EJS_ATOM2(62,62)
EJS_ATOM2(63,63)
EJS_ATOM2(64,64)
EJS_ATOM2(65,65)
EJS_ATOM2(66,66)
EJS_ATOM2(67,67)
EJS_ATOM2(68,68)
EJS_ATOM2(69,69)
EJS_ATOM2(70,70)
EJS_ATOM2(71,71)
EJS_ATOM2(72,72)
EJS_ATOM2(73,73)
EJS_ATOM2(74,74)
EJS_ATOM2(75,75)
EJS_ATOM2(76,76)
EJS_ATOM2(77,77)
EJS_ATOM2(78,78)
EJS_ATOM2(79,79)
EJS_ATOM2(80,80)
EJS_ATOM2(81,81)
EJS_ATOM2(82,82)
EJS_ATOM2(83,83)
EJS_ATOM2(84,84)
EJS_ATOM2(85,85)
EJS_ATOM2(86,86)
EJS_ATOM2(87,87)
EJS_ATOM2(88,88)
EJS_ATOM2(89,89)
EJS_ATOM2(90,90)
EJS_ATOM2(91,91)
EJS_ATOM2(92,92)
EJS_ATOM2(93,93)
EJS_ATOM2(94,94)
EJS_ATOM2(95,95)
EJS_ATOM2(96,96)
EJS_ATOM2(97,97)
EJS_ATOM2(98,98)
EJS_ATOM2(99,99)
EJS_ATOM2(100,100)
EJS_ATOM2(101,101)
EJS_ATOM2(102,102)
EJS_ATOM2(103,103)
EJS_ATOM2(104,104)
EJS_ATOM2(105,105)
EJS_ATOM2(106,106)
EJS_ATOM2(107,107)
EJS_ATOM2(108,108)
EJS_ATOM2(109,109)
EJS_ATOM2(110,110)
EJS_ATOM2(111,111)
EJS_ATOM2(112,112)
EJS_ATOM2(113,113)
EJS_ATOM2(114,114)
EJS_ATOM2(115,115)
EJS_ATOM2(116,116)
EJS_ATOM2(117,117)
EJS_ATOM2(118,118)
EJS_ATOM2(119,119)
EJS_ATOM2(120,120)
EJS_ATOM2(121,121)
EJS_ATOM2(122,122)
EJS_ATOM2(123,123)
EJS_ATOM2(124,124)
EJS_ATOM2(125,125)
EJS_ATOM2(126,126)
EJS_ATOM2(127,127)
EJS_ATOM2(128,128)
EJS_ATOM2(129,129)
EJS_ATOM2(130,130)
EJS_ATOM2(131,131)
EJS_ATOM2(132,132)
EJS_ATOM2(133,133)
EJS_ATOM2(134,134)
EJS_ATOM2(135,135)
EJS_ATOM2(136,136)
EJS_ATOM2(137,137)
EJS_ATOM2(138,138)
EJS_ATOM2(139,139)
EJS_ATOM2(140,140)
EJS_ATOM2(141,141)
EJS_ATOM2(142,142)
EJS_ATOM2(143,143)
EJS_ATOM2(144,144)
EJS_ATOM2(145,145)
EJS_ATOM2(146,146)
EJS_ATOM2(147,147)
EJS_ATOM2(148,148)
EJS_ATOM2(149,149)
EJS_ATOM2(150,150)
EJS_ATOM2(151,151)
EJS_ATOM2(152,152)
EJS_ATOM2(153,153)
EJS_ATOM2(154,154)
EJS_ATOM2(155,155)
EJS_ATOM2(156,156)
EJS_ATOM2(157,157)
EJS_ATOM2(158,158)
EJS_ATOM2(159,159)
EJS_ATOM2(160,160)
EJS_ATOM2(161,161)
EJS_ATOM2(162,162)
EJS_ATOM2(163,163)
EJS_ATOM2(164,164)
EJS_ATOM2(165,165)
EJS_ATOM2(166,166)
EJS_ATOM2(167,167)
EJS_ATOM2(168,168)
EJS_ATOM2(169,169)
EJS_ATOM2(170,170)
EJS_ATOM2(171,171)
EJS_ATOM2(172,172)
EJS_ATOM2(173,173)
EJS_ATOM2(174,174)
EJS_ATOM2(175,175)
EJS_ATOM2(176,176)
EJS_ATOM2(177,177)
EJS_ATOM2(178,178)
EJS_ATOM2(179,179)
EJS_ATOM2(180,180)
EJS_ATOM2(181,181)
EJS_ATOM2(182,182)
EJS_ATOM2(183,183)
EJS_ATOM2(184,184)
EJS_ATOM2(185,185)
EJS_ATOM2(186,186)
EJS_ATOM2(187,187)
EJS_ATOM2(188,188)
EJS_ATOM2(189,189)
EJS_ATOM2(190,190)
EJS_ATOM2(191,191)
EJS_ATOM2(192,192)
EJS_ATOM2(193,193)
EJS_ATOM2(194,194)
EJS_ATOM2(195,195)
EJS_ATOM2(196,196)
EJS_ATOM2(197,197)
EJS_ATOM2(198,198)
EJS_ATOM2(199,199)
EJS_ATOM2(200,200)
