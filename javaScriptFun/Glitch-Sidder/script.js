// set images
var images = [
	 "https://bloximages.chicago2.vip.townnews.com/mankatofreepress.com/content/tncms/assets/v3/editorial/5/8e/58e483b4-6881-11e5-8f30-0718665e18a4/560da24a24bd1.image.jpg?crop=1387%2C780%2C0%2C331&resize=1387%2C780&order=crop%2Cresize",
	
	"http://hmongouachon.com/_demos/rgbShiftSlider/02-portrait-large.jpg",
	
	"http://hmongouachon.com/_demos/rgbShiftSlider/04-portrait-large.jpg",
	
	"http://hmongouachon.com/_demos/rgbShiftSlider/05-portrait-large.jpg",
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