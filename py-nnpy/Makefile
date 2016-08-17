PORTNAME=	nnpy
PORTVERSION=	1.2
CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dummy@FreeBSD.org
COMMENT=	cffi-based Python bindings for nanomsg

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>0:${PORTSDIR}/devel/py-cffi \
		nanomsg>0:${PORTSDIR}/net/nanomsg
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	nanomsg

.include <bsd.port.mk>
