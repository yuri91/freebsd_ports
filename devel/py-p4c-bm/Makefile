PORTNAME=	p4c-bm
PORTVERSION=	1.1.0
CATEGORIES=	devel python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dummy@FreeBSD.org
COMMENT=	Generates the JSON configuration for p4-bmv2

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}yaml>0:${PORTSDIR}/devel/py-p4-hlir \
		${PYTHON_PKGNAMEPREFIX}Tenjin>0:${PORTSDIR}/devel/py-Tenjin \
		${PYTHON_PKGNAMEPREFIX}wheel>0:${PORTSDIR}/devel/py-wheel
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python
USE_PYTHON=	distutils autoplist

USE_GITHUB=	yes
GH_ACCOUNT=	p4lang

.include <bsd.port.mk>
