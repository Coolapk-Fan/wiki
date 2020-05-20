
    var pathname = window.location.pathname;
    if (pathname.indexOf('/apk/com.coolapk.market') == 0) {
        document.getElementById('navbar-market').classList.add('header-active');
    } else if (pathname.indexOf('/apk') == 0) {
            document.getElementById('navbar-apk').classList.add('header-active');
    } else if (pathname.indexOf('/game') == 0) {
        document.getElementById('navbar-game').classList.add('header-active');
    } else if (pathname.indexOf('/about/contact') == 0) {
        document.getElementById('navbar-contact').classList.add('header-active');
    } else if (pathname.indexOf('/about/about') == 0) {
        document.getElementById('navbar-about').classList.add('header-active');
    } else if (pathname.indexOf('/feed') == 0) {

    } else {
        document.getElementById('navbar-homepage').classList.add('header-active');
    }
