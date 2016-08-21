# Created by: Yuri Iozzelli <y.iozzelli@gmail.com>

PORTNAME=	behavioral-model	#TODO: meaningful name
PORTVERSION=	1.2.0
CATEGORIES=	net

MAINTAINER=	dummy@FreeBSD.org
COMMENT=	This is the second version of the P4 software switch	#TODO:meaningful comment

LICENSE=	APACHE20

USE_GITHUB=	yes
GH_ACCOUNT=	p4lang

LIB_DEPENDS=	libJudy.so:${PORTSDIR}/devel/judy \
		libgmp.so:${PORTSDIR}/math/gmp \
		libpcap.so.1:${PORTSDIR}/net/libpcap \
		libboost_system.so:${PORTSDIR}/devel/boost-libs \
		libboost_program_options.so:${PORTSDIR}/devel/boost-libs \
		libboost_filesystem.so:${PORTSDIR}/devel/boost-libs \
		libboost_thread.so:${PORTSDIR}/devel/boost-libs \
		libevent.so:${PORTSDIR}/devel/libevent2 \
		libthrift.so:${PORTSDIR}/devel/thrift-cpp \
		libnanomsg.so:${PORTSDIR}/net/nanomsg

BUILD_DEPENDS=	flex:${PORTSDIR}/textproc/flex \
		bison:${PORTSDIR}/devel/bison \
		pkg-config:${PORTSDIR}/devel/pkgconf \
		clang++:${PORTSDIR}/lang/clang \
		clang:${PORTSDIR}/lang/clang \
		thrift:${PORTSDIR}/devel/thrift

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nnpy>0:${PORTSDIR}/net/py-nnpy \
		${PYTHON_PKGNAMEPREFIX}thrift>0:${PORTSDIR}/devel/py-thrift

USES=		autoreconf libtool pkgconfig python shebangfix
SHEBANG_FILES=	tools/get_version.sh
USE_LDCONFIG=   yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-logging-macros \
		--disable-elogger \
		'CXXFLAGS=-I/usr/local/include -O3'\
		'CFLAGS=-I/usr/local/include -O3'\
		'LDFLAGS=-L/usr/local/lib' 'CC=clang'\
	        'CXX=clang++'

LDFLAGS+=	-lpthread

.include <bsd.port.mk>
