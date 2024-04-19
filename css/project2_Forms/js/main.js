$('.owl-carousel').owlCarousel({
    loop:true,
    margin:10,
    nav:true,
    autoplay: true,
    autoplayTimeout: 3000,
    autoplayHoverPause: true,
    // animateOut: 'fadeOut',
    // animateOut: 'animate__slideOutDown',
    // animateIn: 'animate__flipInX',
    animateIn: 'animate__backInDown',
    animateOut: 'animate__backOutLeft',
    dots: false,
    navText: ['<i class="fa-solid fa-square-caret-left"></i>', '<i class="fa-solid fa-square-caret-right"></i>'],
    responsive:{
        0:{
            items:1
        }
    }
})