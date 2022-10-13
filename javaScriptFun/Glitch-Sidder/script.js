// set images
var images = [
	"images/kool2.jpg",
	"images/kool1.jpg",
	"images/kool3.webp",
	"images/kool4.jpg",
	"images/kool6.jpg",
  ]
  // instanciate slider
  var rbgShiftSlider = new rbgShiftSlider({
	nav : true,
	navElement: '.scene-nav',
	slideImages: images,
	stageWidth: 1920,
	stageHeight: 1080,
	displacementImage: 'http://hmongouachon.com/_demos/rgbShiftSlider/displace-circle.png',
	fullScreen: true,
	transitionDuration: 0.35, // must be 0.1 > transitionGhostDuration
	transitionGhostDuration : 0.25,
	transitionFilterIntensity: 350,
	transitionSpriteIntensity: 2,
	mouseDispIntensity: 3,
	interactive : true,
	autoPlay : true,
	autoPlaySpeed : 15000,
  });