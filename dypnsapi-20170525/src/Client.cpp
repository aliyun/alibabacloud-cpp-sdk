#include <darabonba/Core.hpp>
#include <alibabacloud/Dypnsapi20170525.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Dypnsapi20170525::Models;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{

AlibabaCloud::Dypnsapi20170525::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("dypnsapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Verifies SMS verification codes.
 *
 * @param request CheckSmsVerifyCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckSmsVerifyCodeResponse
 */
CheckSmsVerifyCodeResponse Client::checkSmsVerifyCodeWithOptions(const CheckSmsVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaseAuthPolicy()) {
    query["CaseAuthPolicy"] = request.caseAuthPolicy();
  }

  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.countryCode();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.schemeName();
  }

  if (!!request.hasVerifyCode()) {
    query["VerifyCode"] = request.verifyCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckSmsVerifyCode"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckSmsVerifyCodeResponse>();
}

/**
 * @summary Verifies SMS verification codes.
 *
 * @param request CheckSmsVerifyCodeRequest
 * @return CheckSmsVerifyCodeResponse
 */
CheckSmsVerifyCodeResponse Client::checkSmsVerifyCode(const CheckSmsVerifyCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkSmsVerifyCodeWithOptions(request, runtime);
}

/**
 * @summary Creates a code for a converged communication authentication service.
 *
 * @param request CreateSchemeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchemeConfigResponse
 */
CreateSchemeConfigResponse Client::createSchemeConfigWithOptions(const CreateSchemeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidPackageName()) {
    query["AndroidPackageName"] = request.androidPackageName();
  }

  if (!!request.hasAndroidPackageSign()) {
    query["AndroidPackageSign"] = request.androidPackageSign();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasH5Origin()) {
    query["H5Origin"] = request.h5Origin();
  }

  if (!!request.hasH5Url()) {
    query["H5Url"] = request.h5Url();
  }

  if (!!request.hasIosBundleId()) {
    query["IosBundleId"] = request.iosBundleId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.schemeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSchemeConfig"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSchemeConfigResponse>();
}

/**
 * @summary Creates a code for a converged communication authentication service.
 *
 * @param request CreateSchemeConfigRequest
 * @return CreateSchemeConfigResponse
 */
CreateSchemeConfigResponse Client::createSchemeConfig(const CreateSchemeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSchemeConfigWithOptions(request, runtime);
}

/**
 * @summary Creates a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVerifySchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVerifySchemeResponse
 */
CreateVerifySchemeResponse Client::createVerifySchemeWithOptions(const CreateVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.authType();
  }

  if (!!request.hasBundleId()) {
    query["BundleId"] = request.bundleId();
  }

  if (!!request.hasCmApiCode()) {
    query["CmApiCode"] = request.cmApiCode();
  }

  if (!!request.hasCtApiCode()) {
    query["CtApiCode"] = request.ctApiCode();
  }

  if (!!request.hasCuApiCode()) {
    query["CuApiCode"] = request.cuApiCode();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasHmAppIdentifier()) {
    query["HmAppIdentifier"] = request.hmAppIdentifier();
  }

  if (!!request.hasHmPackageName()) {
    query["HmPackageName"] = request.hmPackageName();
  }

  if (!!request.hasHmSignName()) {
    query["HmSignName"] = request.hmSignName();
  }

  if (!!request.hasIpWhiteList()) {
    query["IpWhiteList"] = request.ipWhiteList();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.origin();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.osType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPackName()) {
    query["PackName"] = request.packName();
  }

  if (!!request.hasPackSign()) {
    query["PackSign"] = request.packSign();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.sceneType();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.schemeName();
  }

  if (!!request.hasSmsSignName()) {
    query["SmsSignName"] = request.smsSignName();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVerifyScheme"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVerifySchemeResponse>();
}

/**
 * @summary Creates a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateVerifySchemeRequest
 * @return CreateVerifySchemeResponse
 */
CreateVerifySchemeResponse Client::createVerifyScheme(const CreateVerifySchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVerifySchemeWithOptions(request, runtime);
}

/**
 * @summary Deletes a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVerifySchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVerifySchemeResponse
 */
DeleteVerifySchemeResponse Client::deleteVerifySchemeWithOptions(const DeleteVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.customerId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemeCode()) {
    query["SchemeCode"] = request.schemeCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteVerifyScheme"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVerifySchemeResponse>();
}

/**
 * @summary Deletes a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteVerifySchemeRequest
 * @return DeleteVerifySchemeResponse
 */
DeleteVerifySchemeResponse Client::deleteVerifyScheme(const DeleteVerifySchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVerifySchemeWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVerifySchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeVerifySchemeResponse
 */
DescribeVerifySchemeResponse Client::describeVerifySchemeWithOptions(const DescribeVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.customerId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemeCode()) {
    query["SchemeCode"] = request.schemeCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeVerifyScheme"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeVerifySchemeResponse>();
}

/**
 * @summary Queries the details of a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeVerifySchemeRequest
 * @return DescribeVerifySchemeResponse
 */
DescribeVerifySchemeResponse Client::describeVerifyScheme(const DescribeVerifySchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeVerifySchemeWithOptions(request, runtime);
}

/**
 * @summary Obtains the authorization token used for the authentication of the phone number verification for HTML5 pages. You can obtain AccessToken and JwtToken after a successful call.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetAuthTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthTokenResponse
 */
GetAuthTokenResponse Client::getAuthTokenWithOptions(const GetAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasCmApiCode()) {
    query["CmApiCode"] = request.cmApiCode();
  }

  if (!!request.hasCtApiCode()) {
    query["CtApiCode"] = request.ctApiCode();
  }

  if (!!request.hasCuApiCode()) {
    query["CuApiCode"] = request.cuApiCode();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.origin();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  if (!!request.hasVersion()) {
    query["Version"] = request.version();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthToken"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthTokenResponse>();
}

/**
 * @summary Obtains the authorization token used for the authentication of the phone number verification for HTML5 pages. You can obtain AccessToken and JwtToken after a successful call.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetAuthTokenRequest
 * @return GetAuthTokenResponse
 */
GetAuthTokenResponse Client::getAuthToken(const GetAuthTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthTokenWithOptions(request, runtime);
}

/**
 * @summary Obtains the URL for the Alipay account authorization.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account and obtain an Alibaba Cloud AccessKey pair. For more information, see [Process of communication authorization](https://help.aliyun.com/document_detail/196922.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetAuthorizationUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAuthorizationUrlResponse
 */
GetAuthorizationUrlResponse Client::getAuthorizationUrlWithOptions(const GetAuthorizationUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNo()) {
    query["PhoneNo"] = request.phoneNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemeId()) {
    query["SchemeId"] = request.schemeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAuthorizationUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAuthorizationUrlResponse>();
}

/**
 * @summary Obtains the URL for the Alipay account authorization.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account and obtain an Alibaba Cloud AccessKey pair. For more information, see [Process of communication authorization](https://help.aliyun.com/document_detail/196922.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetAuthorizationUrlRequest
 * @return GetAuthorizationUrlResponse
 */
GetAuthorizationUrlResponse Client::getAuthorizationUrl(const GetAuthorizationUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAuthorizationUrlWithOptions(request, runtime);
}

/**
 * @summary Obtains the verification results by using the token that is obtained from the client SDKs.
 *
 * @param request GetFusionAuthTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFusionAuthTokenResponse
 */
GetFusionAuthTokenResponse Client::getFusionAuthTokenWithOptions(const GetFusionAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleId()) {
    query["BundleId"] = request.bundleId();
  }

  if (!!request.hasDurationSeconds()) {
    query["DurationSeconds"] = request.durationSeconds();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPackageName()) {
    query["PackageName"] = request.packageName();
  }

  if (!!request.hasPackageSign()) {
    query["PackageSign"] = request.packageSign();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.platform();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSchemeCode()) {
    query["SchemeCode"] = request.schemeCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFusionAuthToken"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFusionAuthTokenResponse>();
}

/**
 * @summary Obtains the verification results by using the token that is obtained from the client SDKs.
 *
 * @param request GetFusionAuthTokenRequest
 * @return GetFusionAuthTokenResponse
 */
GetFusionAuthTokenResponse Client::getFusionAuthToken(const GetFusionAuthTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFusionAuthTokenWithOptions(request, runtime);
}

/**
 * @summary Obtains a phone number for one-click logon.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
 * >  This operation is applicable only to one-click logon or registration. You can call this operation only after you confirm the authorization on the authorization page provided by the SDK for one-click logon. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetMobileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMobileResponse
 */
GetMobileResponse Client::getMobileWithOptions(const GetMobileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessToken()) {
    query["AccessToken"] = request.accessToken();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMobile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMobileResponse>();
}

/**
 * @summary Obtains a phone number for one-click logon.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
 * >  This operation is applicable only to one-click logon or registration. You can call this operation only after you confirm the authorization on the authorization page provided by the SDK for one-click logon. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetMobileRequest
 * @return GetMobileResponse
 */
GetMobileResponse Client::getMobile(const GetMobileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMobileWithOptions(request, runtime);
}

/**
 * @summary Obtains a phone number for one-click logon. This operation is exclusive to HTML5 pages.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
 * >  This operation is applicable only to one-click logon or registration in HTML5 pages. You can call this operation only after you confirm the authorization on the authorization page provided by the JavaScript SDK. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetPhoneWithTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPhoneWithTokenResponse
 */
GetPhoneWithTokenResponse Client::getPhoneWithTokenWithOptions(const GetPhoneWithTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSpToken()) {
    query["SpToken"] = request.spToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPhoneWithToken"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPhoneWithTokenResponse>();
}

/**
 * @summary Obtains a phone number for one-click logon. This operation is exclusive to HTML5 pages.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
 * >  This operation is applicable only to one-click logon or registration in HTML5 pages. You can call this operation only after you confirm the authorization on the authorization page provided by the JavaScript SDK. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetPhoneWithTokenRequest
 * @return GetPhoneWithTokenResponse
 */
GetPhoneWithTokenResponse Client::getPhoneWithToken(const GetPhoneWithTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getPhoneWithTokenWithOptions(request, runtime);
}

/**
 * @summary Obtains the authorization token for an SMS verification code.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetSmsAuthTokensRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmsAuthTokensResponse
 */
GetSmsAuthTokensResponse Client::getSmsAuthTokensWithOptions(const GetSmsAuthTokensRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBundleId()) {
    query["BundleId"] = request.bundleId();
  }

  if (!!request.hasExpire()) {
    query["Expire"] = request.expire();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.osType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPackageName()) {
    query["PackageName"] = request.packageName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSmsCodeExpire()) {
    query["SmsCodeExpire"] = request.smsCodeExpire();
  }

  if (!!request.hasSmsTemplateCode()) {
    query["SmsTemplateCode"] = request.smsTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmsAuthTokens"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmsAuthTokensResponse>();
}

/**
 * @summary Obtains the authorization token for an SMS verification code.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetSmsAuthTokensRequest
 * @return GetSmsAuthTokensResponse
 */
GetSmsAuthTokensResponse Client::getSmsAuthTokens(const GetSmsAuthTokensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsAuthTokensWithOptions(request, runtime);
}

/**
 * @summary Queries the fees generated by a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryGateVerifyBillingPublicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGateVerifyBillingPublicResponse
 */
QueryGateVerifyBillingPublicResponse Client::queryGateVerifyBillingPublicWithOptions(const QueryGateVerifyBillingPublicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.authenticationType();
  }

  if (!!request.hasMonth()) {
    query["Month"] = request.month();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGateVerifyBillingPublic"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGateVerifyBillingPublicResponse>();
}

/**
 * @summary Queries the fees generated by a verification service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryGateVerifyBillingPublicRequest
 * @return QueryGateVerifyBillingPublicResponse
 */
QueryGateVerifyBillingPublicResponse Client::queryGateVerifyBillingPublic(const QueryGateVerifyBillingPublicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGateVerifyBillingPublicWithOptions(request, runtime);
}

/**
 * @summary Queries the calls of Phone Number Verification Service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryGateVerifyStatisticPublicRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGateVerifyStatisticPublicResponse
 */
QueryGateVerifyStatisticPublicResponse Client::queryGateVerifyStatisticPublicWithOptions(const QueryGateVerifyStatisticPublicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.authenticationType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.osType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.sceneCode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGateVerifyStatisticPublic"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGateVerifyStatisticPublicResponse>();
}

/**
 * @summary Queries the calls of Phone Number Verification Service.
 *
 * @description ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryGateVerifyStatisticPublicRequest
 * @return QueryGateVerifyStatisticPublicResponse
 */
QueryGateVerifyStatisticPublicResponse Client::queryGateVerifyStatisticPublic(const QueryGateVerifyStatisticPublicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGateVerifyStatisticPublicWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI QuerySendDetails is deprecated
 *
 * @summary Queries the delivery status of the SMS verification code. You can query only the delivery status of the SMS verification code that is sent by calling corresponding API operations.
 *
 * @param request QuerySendDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySendDetailsResponse
 */
QuerySendDetailsResponse Client::querySendDetailsWithOptions(const QuerySendDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSendDate()) {
    query["SendDate"] = request.sendDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySendDetails"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySendDetailsResponse>();
}

/**
 * @deprecated OpenAPI QuerySendDetails is deprecated
 *
 * @summary Queries the delivery status of the SMS verification code. You can query only the delivery status of the SMS verification code that is sent by calling corresponding API operations.
 *
 * @param request QuerySendDetailsRequest
 * @return QuerySendDetailsResponse
 */
QuerySendDetailsResponse Client::querySendDetails(const QuerySendDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySendDetailsWithOptions(request, runtime);
}

/**
 * @summary Sends SMS verification codes.
 *
 * @param request SendSmsVerifyCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendSmsVerifyCodeResponse
 */
SendSmsVerifyCodeResponse Client::sendSmsVerifyCodeWithOptions(const SendSmsVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRetry()) {
    query["AutoRetry"] = request.autoRetry();
  }

  if (!!request.hasCodeLength()) {
    query["CodeLength"] = request.codeLength();
  }

  if (!!request.hasCodeType()) {
    query["CodeType"] = request.codeType();
  }

  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.countryCode();
  }

  if (!!request.hasDuplicatePolicy()) {
    query["DuplicatePolicy"] = request.duplicatePolicy();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasReturnVerifyCode()) {
    query["ReturnVerifyCode"] = request.returnVerifyCode();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.schemeName();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSmsUpExtendCode()) {
    query["SmsUpExtendCode"] = request.smsUpExtendCode();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.templateParam();
  }

  if (!!request.hasValidTime()) {
    query["ValidTime"] = request.validTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendSmsVerifyCode"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendSmsVerifyCodeResponse>();
}

/**
 * @summary Sends SMS verification codes.
 *
 * @param request SendSmsVerifyCodeRequest
 * @return SendSmsVerifyCodeResponse
 */
SendSmsVerifyCodeResponse Client::sendSmsVerifyCode(const SendSmsVerifyCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendSmsVerifyCodeWithOptions(request, runtime);
}

/**
 * @summary Verifies the phone number that you use.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
 * >  This operation is applicable to only the verification of thephone number that you use. To obtain a phone number for one-click logon, call [GetMobile](https://help.aliyun.com/document_detail/189865.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifyMobileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyMobileResponse
 */
VerifyMobileResponse Client::verifyMobileWithOptions(const VerifyMobileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessCode()) {
    query["AccessCode"] = request.accessCode();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyMobile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyMobileResponse>();
}

/**
 * @summary Verifies the phone number that you use.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
 * >  This operation is applicable to only the verification of thephone number that you use. To obtain a phone number for one-click logon, call [GetMobile](https://help.aliyun.com/document_detail/189865.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifyMobileRequest
 * @return VerifyMobileResponse
 */
VerifyMobileResponse Client::verifyMobile(const VerifyMobileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyMobileWithOptions(request, runtime);
}

/**
 * @summary Verifies the phone number used in HTML5 pages.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifyPhoneWithTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyPhoneWithTokenResponse
 */
VerifyPhoneWithTokenResponse Client::verifyPhoneWithTokenWithOptions(const VerifyPhoneWithTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSpToken()) {
    query["SpToken"] = request.spToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyPhoneWithToken"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyPhoneWithTokenResponse>();
}

/**
 * @summary Verifies the phone number used in HTML5 pages.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifyPhoneWithTokenRequest
 * @return VerifyPhoneWithTokenResponse
 */
VerifyPhoneWithTokenResponse Client::verifyPhoneWithToken(const VerifyPhoneWithTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyPhoneWithTokenWithOptions(request, runtime);
}

/**
 * @summary Verifies SMS verification codes.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifySmsCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifySmsCodeResponse
 */
VerifySmsCodeResponse Client::verifySmsCodeWithOptions(const VerifySmsCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasSmsCode()) {
    query["SmsCode"] = request.smsCode();
  }

  if (!!request.hasSmsToken()) {
    query["SmsToken"] = request.smsToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifySmsCode"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifySmsCodeResponse>();
}

/**
 * @summary Verifies SMS verification codes.
 *
 * @description ### [](#)Preparations
 * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
 * ### [](#qps)QPS limits
 * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifySmsCodeRequest
 * @return VerifySmsCodeResponse
 */
VerifySmsCodeResponse Client::verifySmsCode(const VerifySmsCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifySmsCodeWithOptions(request, runtime);
}

/**
 * @summary Obtains the verification results by using the verification token that is obtained by using the authentication token.
 *
 * @param request VerifyWithFusionAuthTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyWithFusionAuthTokenResponse
 */
VerifyWithFusionAuthTokenResponse Client::verifyWithFusionAuthTokenWithOptions(const VerifyWithFusionAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasVerifyToken()) {
    query["VerifyToken"] = request.verifyToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyWithFusionAuthToken"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyWithFusionAuthTokenResponse>();
}

/**
 * @summary Obtains the verification results by using the verification token that is obtained by using the authentication token.
 *
 * @param request VerifyWithFusionAuthTokenRequest
 * @return VerifyWithFusionAuthTokenResponse
 */
VerifyWithFusionAuthTokenResponse Client::verifyWithFusionAuthToken(const VerifyWithFusionAuthTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyWithFusionAuthTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525