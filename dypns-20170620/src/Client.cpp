#include <darabonba/Core.hpp>
#include <alibabacloud/Dypns20170620.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::Dypns20170620::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Dypns20170620
{

AlibabaCloud::Dypns20170620::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("dypns", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 配置认证方案APP信息
 *
 * @param request ConfigVerifySceneAppInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfigVerifySceneAppInfoResponse
 */
ConfigVerifySceneAppInfoResponse Client::configVerifySceneAppInfoWithOptions(const ConfigVerifySceneAppInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCM()) {
    query["CM"] = request.getCM();
  }

  if (!!request.hasCT()) {
    query["CT"] = request.getCT();
  }

  if (!!request.hasCU()) {
    query["CU"] = request.getCU();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasIpWhitelist()) {
    query["IpWhitelist"] = request.getIpWhitelist();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConfigVerifySceneAppInfo"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfigVerifySceneAppInfoResponse>();
}

/**
 * @summary 配置认证方案APP信息
 *
 * @param request ConfigVerifySceneAppInfoRequest
 * @return ConfigVerifySceneAppInfoResponse
 */
ConfigVerifySceneAppInfoResponse Client::configVerifySceneAppInfo(const ConfigVerifySceneAppInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return configVerifySceneAppInfoWithOptions(request, runtime);
}

/**
 * @param request CopySchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopySchemeResponse
 */
CopySchemeResponse Client::copySchemeWithOptions(const CopySchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSchemeId()) {
    query["SchemeId"] = request.getSchemeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyScheme"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopySchemeResponse>();
}

/**
 * @param request CopySchemeRequest
 * @return CopySchemeResponse
 */
CopySchemeResponse Client::copyScheme(const CopySchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copySchemeWithOptions(request, runtime);
}

/**
 * @summary 复制号码认证方案信息
 *
 * @param request CopyVerifySchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CopyVerifySchemeResponse
 */
CopyVerifySchemeResponse Client::copyVerifySchemeWithOptions(const CopyVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCmApiCode()) {
    query["CmApiCode"] = request.getCmApiCode();
  }

  if (!!request.hasCmNewFlag()) {
    query["CmNewFlag"] = request.getCmNewFlag();
  }

  if (!!request.hasCtApiCode()) {
    query["CtApiCode"] = request.getCtApiCode();
  }

  if (!!request.hasCtNewFlag()) {
    query["CtNewFlag"] = request.getCtNewFlag();
  }

  if (!!request.hasCuApiCode()) {
    query["CuApiCode"] = request.getCuApiCode();
  }

  if (!!request.hasCuNewFlag()) {
    query["CuNewFlag"] = request.getCuNewFlag();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasModelSceneCode()) {
    query["ModelSceneCode"] = request.getModelSceneCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CopyVerifyScheme"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CopyVerifySchemeResponse>();
}

/**
 * @summary 复制号码认证方案信息
 *
 * @param request CopyVerifySchemeRequest
 * @return CopyVerifySchemeResponse
 */
CopyVerifySchemeResponse Client::copyVerifyScheme(const CopyVerifySchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return copyVerifySchemeWithOptions(request, runtime);
}

/**
 * @summary 创建短信认证2.0http回执测试
 *
 * @param request CreateDypnsSmsVerifyCallBackTestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDypnsSmsVerifyCallBackTestResponse
 */
CreateDypnsSmsVerifyCallBackTestResponse Client::createDypnsSmsVerifyCallBackTestWithOptions(const CreateDypnsSmsVerifyCallBackTestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasMethod()) {
    query["Method"] = request.getMethod();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDypnsSmsVerifyCallBackTest"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDypnsSmsVerifyCallBackTestResponse>();
}

/**
 * @summary 创建短信认证2.0http回执测试
 *
 * @param request CreateDypnsSmsVerifyCallBackTestRequest
 * @return CreateDypnsSmsVerifyCallBackTestResponse
 */
CreateDypnsSmsVerifyCallBackTestResponse Client::createDypnsSmsVerifyCallBackTest(const CreateDypnsSmsVerifyCallBackTestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDypnsSmsVerifyCallBackTestWithOptions(request, runtime);
}

/**
 * @summary 创建短信认证2.0http回执url
 *
 * @param request CreateDypnsSmsVerifyMessageCallBackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDypnsSmsVerifyMessageCallBackResponse
 */
CreateDypnsSmsVerifyMessageCallBackResponse Client::createDypnsSmsVerifyMessageCallBackWithOptions(const CreateDypnsSmsVerifyMessageCallBackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDypnsSmsVerifyMessageCallBack"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDypnsSmsVerifyMessageCallBackResponse>();
}

/**
 * @summary 创建短信认证2.0http回执url
 *
 * @param request CreateDypnsSmsVerifyMessageCallBackRequest
 * @return CreateDypnsSmsVerifyMessageCallBackResponse
 */
CreateDypnsSmsVerifyMessageCallBackResponse Client::createDypnsSmsVerifyMessageCallBack(const CreateDypnsSmsVerifyMessageCallBackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDypnsSmsVerifyMessageCallBackWithOptions(request, runtime);
}

/**
 * @summary 创建短信认证2.0mns回执队列
 *
 * @param request CreateDypnsSmsVerifyMessageQueueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDypnsSmsVerifyMessageQueueResponse
 */
CreateDypnsSmsVerifyMessageQueueResponse Client::createDypnsSmsVerifyMessageQueueWithOptions(const CreateDypnsSmsVerifyMessageQueueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueryQueueTypes()) {
    query["QueryQueueTypes"] = request.getQueryQueueTypes();
  }

  if (!!request.hasQueueType()) {
    query["QueueType"] = request.getQueueType();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDypnsSmsVerifyMessageQueue"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDypnsSmsVerifyMessageQueueResponse>();
}

/**
 * @summary 创建短信认证2.0mns回执队列
 *
 * @param request CreateDypnsSmsVerifyMessageQueueRequest
 * @return CreateDypnsSmsVerifyMessageQueueResponse
 */
CreateDypnsSmsVerifyMessageQueueResponse Client::createDypnsSmsVerifyMessageQueue(const CreateDypnsSmsVerifyMessageQueueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDypnsSmsVerifyMessageQueueWithOptions(request, runtime);
}

/**
 * @param request CreateFileByBizRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFileByBizResponse
 */
CreateFileByBizResponse Client::createFileByBizWithOptions(const CreateFileByBizRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasFileType()) {
    query["FileType"] = request.getFileType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSaveOssFileName()) {
    query["SaveOssFileName"] = request.getSaveOssFileName();
  }

  if (!!request.hasUserViewFileName()) {
    query["UserViewFileName"] = request.getUserViewFileName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFileByBiz"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFileByBizResponse>();
}

/**
 * @param request CreateFileByBizRequest
 * @return CreateFileByBizResponse
 */
CreateFileByBizResponse Client::createFileByBiz(const CreateFileByBizRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFileByBizWithOptions(request, runtime);
}

/**
 * @param request CreateGateVerifyExportLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGateVerifyExportLogResponse
 */
CreateGateVerifyExportLogResponse Client::createGateVerifyExportLogWithOptions(const CreateGateVerifyExportLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.getAuthenticationType();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQueryMonth()) {
    query["QueryMonth"] = request.getQueryMonth();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGateVerifyExportLog"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGateVerifyExportLogResponse>();
}

/**
 * @param request CreateGateVerifyExportLogRequest
 * @return CreateGateVerifyExportLogResponse
 */
CreateGateVerifyExportLogResponse Client::createGateVerifyExportLog(const CreateGateVerifyExportLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGateVerifyExportLogWithOptions(request, runtime);
}

/**
 * @summary 创建图形认证方案号
 *
 * @param request CreateGraphicAuthSchemeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGraphicAuthSchemeConfigResponse
 */
CreateGraphicAuthSchemeConfigResponse Client::createGraphicAuthSchemeConfigWithOptions(const CreateGraphicAuthSchemeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.getSchemeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateGraphicAuthSchemeConfig"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGraphicAuthSchemeConfigResponse>();
}

/**
 * @summary 创建图形认证方案号
 *
 * @param request CreateGraphicAuthSchemeConfigRequest
 * @return CreateGraphicAuthSchemeConfigResponse
 */
CreateGraphicAuthSchemeConfigResponse Client::createGraphicAuthSchemeConfig(const CreateGraphicAuthSchemeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createGraphicAuthSchemeConfigWithOptions(request, runtime);
}

/**
 * @summary 创建产品
 *
 * @param request CreateProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProductWithOptions(const CreateProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasProdId()) {
    query["ProdId"] = request.getProdId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProduct"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProductResponse>();
}

/**
 * @summary 创建产品
 *
 * @param request CreateProductRequest
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProduct(const CreateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProductWithOptions(request, runtime);
}

/**
 * @summary 融合认证-新增方案
 *
 * @param request CreateSchemeConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSchemeConfigResponse
 */
CreateSchemeConfigResponse Client::createSchemeConfigWithOptions(const CreateSchemeConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAndroidPackageName()) {
    query["AndroidPackageName"] = request.getAndroidPackageName();
  }

  if (!!request.hasAndroidPackageSign()) {
    query["AndroidPackageSign"] = request.getAndroidPackageSign();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasH5Origin()) {
    query["H5Origin"] = request.getH5Origin();
  }

  if (!!request.hasH5Url()) {
    query["H5Url"] = request.getH5Url();
  }

  if (!!request.hasIosBundleId()) {
    query["IosBundleId"] = request.getIosBundleId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlatform()) {
    query["Platform"] = request.getPlatform();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.getSchemeName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSchemeConfig"},
    {"version" , "2017-06-20"},
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
 * @summary 融合认证-新增方案
 *
 * @param request CreateSchemeConfigRequest
 * @return CreateSchemeConfigResponse
 */
CreateSchemeConfigResponse Client::createSchemeConfig(const CreateSchemeConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSchemeConfigWithOptions(request, runtime);
}

/**
 * @param request CreateSmsSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsSignResponse
 */
CreateSmsSignResponse Client::createSmsSignWithOptions(const CreateSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppUrl()) {
    query["AppUrl"] = request.getAppUrl();
  }

  if (!!request.hasBusinessLicenseCert()) {
    query["BusinessLicenseCert"] = request.getBusinessLicenseCert();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasExtendMessage()) {
    query["ExtendMessage"] = request.getExtendMessage();
  }

  if (!!request.hasOldSmsSignName()) {
    query["OldSmsSignName"] = request.getOldSmsSignName();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOrganizationCodeCert()) {
    query["OrganizationCodeCert"] = request.getOrganizationCodeCert();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmsSignName()) {
    query["SmsSignName"] = request.getSmsSignName();
  }

  if (!!request.hasSmsSignRemark()) {
    query["SmsSignRemark"] = request.getSmsSignRemark();
  }

  if (!!request.hasSmsSignSource()) {
    query["SmsSignSource"] = request.getSmsSignSource();
  }

  if (!!request.hasTaxRegistrationCert()) {
    query["TaxRegistrationCert"] = request.getTaxRegistrationCert();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsSign"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsSignResponse>();
}

/**
 * @param request CreateSmsSignRequest
 * @return CreateSmsSignResponse
 */
CreateSmsSignResponse Client::createSmsSign(const CreateSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsSignWithOptions(request, runtime);
}

/**
 * @param request CreateSmsTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsTemplateResponse
 */
CreateSmsTemplateResponse Client::createSmsTemplateWithOptions(const CreateSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizUrl()) {
    query["BizUrl"] = request.getBizUrl();
  }

  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmsTemplateContent()) {
    query["SmsTemplateContent"] = request.getSmsTemplateContent();
  }

  if (!!request.hasSmsTemplateName()) {
    query["SmsTemplateName"] = request.getSmsTemplateName();
  }

  if (!!request.hasSmsTemplateRule()) {
    query["SmsTemplateRule"] = request.getSmsTemplateRule();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsTemplate"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsTemplateResponse>();
}

/**
 * @param request CreateSmsTemplateRequest
 * @return CreateSmsTemplateResponse
 */
CreateSmsTemplateResponse Client::createSmsTemplate(const CreateSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 创建短信认证用量统计记录导出任务
 *
 * @param request CreateSmsVerifyStatisticRecordsExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsVerifyStatisticRecordsExportTaskResponse
 */
CreateSmsVerifyStatisticRecordsExportTaskResponse Client::createSmsVerifyStatisticRecordsExportTaskWithOptions(const CreateSmsVerifyStatisticRecordsExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFromDate()) {
    query["FromDate"] = request.getFromDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.getSchemeName();
  }

  if (!!request.hasToDate()) {
    query["ToDate"] = request.getToDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsVerifyStatisticRecordsExportTask"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsVerifyStatisticRecordsExportTaskResponse>();
}

/**
 * @summary 创建短信认证用量统计记录导出任务
 *
 * @param request CreateSmsVerifyStatisticRecordsExportTaskRequest
 * @return CreateSmsVerifyStatisticRecordsExportTaskResponse
 */
CreateSmsVerifyStatisticRecordsExportTaskResponse Client::createSmsVerifyStatisticRecordsExportTask(const CreateSmsVerifyStatisticRecordsExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsVerifyStatisticRecordsExportTaskWithOptions(request, runtime);
}

/**
 * @summary 创建认证方案
 *
 * @param request CreateVerifySchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVerifySchemeResponse
 */
CreateVerifySchemeResponse Client::createVerifySchemeWithOptions(const CreateVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasBundleId()) {
    query["BundleId"] = request.getBundleId();
  }

  if (!!request.hasCmApiCode()) {
    query["CmApiCode"] = request.getCmApiCode();
  }

  if (!!request.hasCtApiCode()) {
    query["CtApiCode"] = request.getCtApiCode();
  }

  if (!!request.hasCuApiCode()) {
    query["CuApiCode"] = request.getCuApiCode();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.getEmail();
  }

  if (!!request.hasHmAppIdentifier()) {
    query["HmAppIdentifier"] = request.getHmAppIdentifier();
  }

  if (!!request.hasHmPackageName()) {
    query["HmPackageName"] = request.getHmPackageName();
  }

  if (!!request.hasHmSignName()) {
    query["HmSignName"] = request.getHmSignName();
  }

  if (!!request.hasIpWhiteList()) {
    query["IpWhiteList"] = request.getIpWhiteList();
  }

  if (!!request.hasOrigin()) {
    query["Origin"] = request.getOrigin();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPackName()) {
    query["PackName"] = request.getPackName();
  }

  if (!!request.hasPackSign()) {
    query["PackSign"] = request.getPackSign();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSceneType()) {
    query["SceneType"] = request.getSceneType();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.getSchemeName();
  }

  if (!!request.hasSmsSignName()) {
    query["SmsSignName"] = request.getSmsSignName();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateVerifyScheme"},
    {"version" , "2017-06-20"},
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
 * @summary 创建认证方案
 *
 * @param request CreateVerifySchemeRequest
 * @return CreateVerifySchemeResponse
 */
CreateVerifySchemeResponse Client::createVerifyScheme(const CreateVerifySchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVerifySchemeWithOptions(request, runtime);
}

/**
 * @summary 创建短信认证导出任务
 *
 * @param request CreatetVerifySmsExportTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatetVerifySmsExportTaskResponse
 */
CreatetVerifySmsExportTaskResponse Client::createtVerifySmsExportTaskWithOptions(const CreatetVerifySmsExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSchemeName()) {
    query["SchemeName"] = request.getSchemeName();
  }

  if (!!request.hasSendStatus()) {
    query["SendStatus"] = request.getSendStatus();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreatetVerifySmsExportTask"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatetVerifySmsExportTaskResponse>();
}

/**
 * @summary 创建短信认证导出任务
 *
 * @param request CreatetVerifySmsExportTaskRequest
 * @return CreatetVerifySmsExportTaskResponse
 */
CreatetVerifySmsExportTaskResponse Client::createtVerifySmsExportTask(const CreatetVerifySmsExportTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createtVerifySmsExportTaskWithOptions(request, runtime);
}

/**
 * @param request DeleteSceneRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSceneResponse
 */
DeleteSceneResponse Client::deleteSceneWithOptions(const DeleteSceneRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScene"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSceneResponse>();
}

/**
 * @param request DeleteSceneRequest
 * @return DeleteSceneResponse
 */
DeleteSceneResponse Client::deleteScene(const DeleteSceneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSceneWithOptions(request, runtime);
}

/**
 * @param request DeleteSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSchemeResponse
 */
DeleteSchemeResponse Client::deleteSchemeWithOptions(const DeleteSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSchemeId()) {
    query["SchemeId"] = request.getSchemeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheme"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSchemeResponse>();
}

/**
 * @param request DeleteSchemeRequest
 * @return DeleteSchemeResponse
 */
DeleteSchemeResponse Client::deleteScheme(const DeleteSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSchemeWithOptions(request, runtime);
}

/**
 * @param request GetDownLoadFileUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDownLoadFileUrlResponse
 */
GetDownLoadFileUrlResponse Client::getDownLoadFileUrlWithOptions(const GetDownLoadFileUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAcctId()) {
    query["AcctId"] = request.getAcctId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDownLoadFileUrl"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDownLoadFileUrlResponse>();
}

/**
 * @param request GetDownLoadFileUrlRequest
 * @return GetDownLoadFileUrlResponse
 */
GetDownLoadFileUrlResponse Client::getDownLoadFileUrl(const GetDownLoadFileUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDownLoadFileUrlWithOptions(request, runtime);
}

/**
 * @param request GetEnterpriseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnterpriseInfoResponse
 */
GetEnterpriseInfoResponse Client::getEnterpriseInfoWithOptions(const GetEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEnterpriseInfo"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEnterpriseInfoResponse>();
}

/**
 * @param request GetEnterpriseInfoRequest
 * @return GetEnterpriseInfoResponse
 */
GetEnterpriseInfoResponse Client::getEnterpriseInfo(const GetEnterpriseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEnterpriseInfoWithOptions(request, runtime);
}

/**
 * @param request GetOpenSubProductStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOpenSubProductStatusResponse
 */
GetOpenSubProductStatusResponse Client::getOpenSubProductStatusWithOptions(const GetOpenSubProductStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.getProductCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOpenSubProductStatus"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOpenSubProductStatusResponse>();
}

/**
 * @param request GetOpenSubProductStatusRequest
 * @return GetOpenSubProductStatusResponse
 */
GetOpenSubProductStatusResponse Client::getOpenSubProductStatus(const GetOpenSubProductStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOpenSubProductStatusWithOptions(request, runtime);
}

/**
 * @param request GetOssUploadForEnterpriseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssUploadForEnterpriseResponse
 */
GetOssUploadForEnterpriseResponse Client::getOssUploadForEnterpriseWithOptions(const GetOssUploadForEnterpriseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssUploadForEnterprise"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssUploadForEnterpriseResponse>();
}

/**
 * @param request GetOssUploadForEnterpriseRequest
 * @return GetOssUploadForEnterpriseResponse
 */
GetOssUploadForEnterpriseResponse Client::getOssUploadForEnterprise(const GetOssUploadForEnterpriseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssUploadForEnterpriseWithOptions(request, runtime);
}

/**
 * @param request GetOssUploadSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOssUploadSignResponse
 */
GetOssUploadSignResponse Client::getOssUploadSignWithOptions(const GetOssUploadSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOssUploadSign"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOssUploadSignResponse>();
}

/**
 * @param request GetOssUploadSignRequest
 * @return GetOssUploadSignResponse
 */
GetOssUploadSignResponse Client::getOssUploadSign(const GetOssUploadSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOssUploadSignWithOptions(request, runtime);
}

/**
 * @param request GetSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSchemeResponse
 */
GetSchemeResponse Client::getSchemeWithOptions(const GetSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSchemeId()) {
    query["SchemeId"] = request.getSchemeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheme"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSchemeResponse>();
}

/**
 * @param request GetSchemeRequest
 * @return GetSchemeResponse
 */
GetSchemeResponse Client::getScheme(const GetSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSchemeWithOptions(request, runtime);
}

/**
 * @param request GetSmsCodeLimitConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmsCodeLimitConfigResponse
 */
GetSmsCodeLimitConfigResponse Client::getSmsCodeLimitConfigWithOptions(const GetSmsCodeLimitConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmsCodeLimitConfig"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmsCodeLimitConfigResponse>();
}

/**
 * @param request GetSmsCodeLimitConfigRequest
 * @return GetSmsCodeLimitConfigResponse
 */
GetSmsCodeLimitConfigResponse Client::getSmsCodeLimitConfig(const GetSmsCodeLimitConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsCodeLimitConfigWithOptions(request, runtime);
}

/**
 * @param request GetSmsSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmsSignResponse
 */
GetSmsSignResponse Client::getSmsSignWithOptions(const GetSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSmsSignName()) {
    query["SmsSignName"] = request.getSmsSignName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmsSign"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmsSignResponse>();
}

/**
 * @param request GetSmsSignRequest
 * @return GetSmsSignResponse
 */
GetSmsSignResponse Client::getSmsSign(const GetSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsSignWithOptions(request, runtime);
}

/**
 * @param request ListAuditPassEnterpriseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuditPassEnterpriseInfoResponse
 */
ListAuditPassEnterpriseInfoResponse Client::listAuditPassEnterpriseInfoWithOptions(const ListAuditPassEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuditPassEnterpriseInfo"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuditPassEnterpriseInfoResponse>();
}

/**
 * @param request ListAuditPassEnterpriseInfoRequest
 * @return ListAuditPassEnterpriseInfoResponse
 */
ListAuditPassEnterpriseInfoResponse Client::listAuditPassEnterpriseInfo(const ListAuditPassEnterpriseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAuditPassEnterpriseInfoWithOptions(request, runtime);
}

/**
 * @param request ListCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertificateResponse
 */
ListCertificateResponse Client::listCertificateWithOptions(const ListCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessType()) {
    query["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNo()) {
    query["PhoneNo"] = request.getPhoneNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCertificate"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCertificateResponse>();
}

/**
 * @param request ListCertificateRequest
 * @return ListCertificateResponse
 */
ListCertificateResponse Client::listCertificate(const ListCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertificateWithOptions(request, runtime);
}

/**
 * @param request ListEnterpriseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterpriseInfoResponse
 */
ListEnterpriseInfoResponse Client::listEnterpriseInfoWithOptions(const ListEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnterpriseInfo"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterpriseInfoResponse>();
}

/**
 * @param request ListEnterpriseInfoRequest
 * @return ListEnterpriseInfoResponse
 */
ListEnterpriseInfoResponse Client::listEnterpriseInfo(const ListEnterpriseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEnterpriseInfoWithOptions(request, runtime);
}

/**
 * @param request ListSchemeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSchemeResponse
 */
ListSchemeResponse Client::listSchemeWithOptions(const ListSchemeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSearchKey()) {
    query["SearchKey"] = request.getSearchKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheme"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSchemeResponse>();
}

/**
 * @param request ListSchemeRequest
 * @return ListSchemeResponse
 */
ListSchemeResponse Client::listScheme(const ListSchemeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSchemeWithOptions(request, runtime);
}

/**
 * @param request ListSmsSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmsSignResponse
 */
ListSmsSignResponse Client::listSmsSignWithOptions(const ListSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasQuerySmsSign()) {
    query["QuerySmsSign"] = request.getQuerySmsSign();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmsSign"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmsSignResponse>();
}

/**
 * @param request ListSmsSignRequest
 * @return ListSmsSignResponse
 */
ListSmsSignResponse Client::listSmsSign(const ListSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmsSignWithOptions(request, runtime);
}

/**
 * @param request ListSmsTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSmsTemplateResponse
 */
ListSmsTemplateResponse Client::listSmsTemplateWithOptions(const ListSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomerId()) {
    query["CustomerId"] = request.getCustomerId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasQueryTemplate()) {
    query["QueryTemplate"] = request.getQueryTemplate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSmsTemplate"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSmsTemplateResponse>();
}

/**
 * @param request ListSmsTemplateRequest
 * @return ListSmsTemplateResponse
 */
ListSmsTemplateResponse Client::listSmsTemplate(const ListSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSmsTemplateWithOptions(request, runtime);
}

/**
 * @param request OpenCommonProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenCommonProductResponse
 */
OpenCommonProductResponse Client::openCommonProductWithOptions(const OpenCommonProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenCommonProduct"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenCommonProductResponse>();
}

/**
 * @param request OpenCommonProductRequest
 * @return OpenCommonProductResponse
 */
OpenCommonProductResponse Client::openCommonProduct(const OpenCommonProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return openCommonProductWithOptions(request, runtime);
}

/**
 * @param request QueryCommonBillingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCommonBillingResponse
 */
QueryCommonBillingResponse Client::queryCommonBillingWithOptions(const QueryCommonBillingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMonth()) {
    query["Month"] = request.getMonth();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCommonBilling"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCommonBillingResponse>();
}

/**
 * @param request QueryCommonBillingRequest
 * @return QueryCommonBillingResponse
 */
QueryCommonBillingResponse Client::queryCommonBilling(const QueryCommonBillingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCommonBillingWithOptions(request, runtime);
}

/**
 * @summary 查询客户信息
 *
 * @param request QueryCommonCustInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCommonCustInfoResponse
 */
QueryCommonCustInfoResponse Client::queryCommonCustInfoWithOptions(const QueryCommonCustInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCommonCustInfo"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCommonCustInfoResponse>();
}

/**
 * @summary 查询客户信息
 *
 * @param request QueryCommonCustInfoRequest
 * @return QueryCommonCustInfoResponse
 */
QueryCommonCustInfoResponse Client::queryCommonCustInfo(const QueryCommonCustInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCommonCustInfoWithOptions(request, runtime);
}

/**
 * @param request QueryCommonStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCommonStatisticResponse
 */
QueryCommonStatisticResponse Client::queryCommonStatisticWithOptions(const QueryCommonStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCommonStatistic"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCommonStatisticResponse>();
}

/**
 * @param request QueryCommonStatisticRequest
 * @return QueryCommonStatisticResponse
 */
QueryCommonStatisticResponse Client::queryCommonStatistic(const QueryCommonStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCommonStatisticWithOptions(request, runtime);
}

/**
 * @param request QueryCommonStatisticPreviewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryCommonStatisticPreviewResponse
 */
QueryCommonStatisticPreviewResponse Client::queryCommonStatisticPreviewWithOptions(const QueryCommonStatisticPreviewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasProductType()) {
    query["ProductType"] = request.getProductType();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCommonStatisticPreview"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCommonStatisticPreviewResponse>();
}

/**
 * @param request QueryCommonStatisticPreviewRequest
 * @return QueryCommonStatisticPreviewResponse
 */
QueryCommonStatisticPreviewResponse Client::queryCommonStatisticPreview(const QueryCommonStatisticPreviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCommonStatisticPreviewWithOptions(request, runtime);
}

/**
 * @param request QueryDayuMigrateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDayuMigrateStatusResponse
 */
QueryDayuMigrateStatusResponse Client::queryDayuMigrateStatusWithOptions(const QueryDayuMigrateStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDayuMigrateStatus"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDayuMigrateStatusResponse>();
}

/**
 * @param request QueryDayuMigrateStatusRequest
 * @return QueryDayuMigrateStatusResponse
 */
QueryDayuMigrateStatusResponse Client::queryDayuMigrateStatus(const QueryDayuMigrateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDayuMigrateStatusWithOptions(request, runtime);
}

/**
 * @param request QueryDictDataItemRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDictDataItemResponse
 */
QueryDictDataItemResponse Client::queryDictDataItemWithOptions(const QueryDictDataItemRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClassifyItemCode()) {
    query["ClassifyItemCode"] = request.getClassifyItemCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDictDataItem"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDictDataItemResponse>();
}

/**
 * @param request QueryDictDataItemRequest
 * @return QueryDictDataItemResponse
 */
QueryDictDataItemResponse Client::queryDictDataItem(const QueryDictDataItemRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDictDataItemWithOptions(request, runtime);
}

/**
 * @param request QueryGateVerifyBillingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGateVerifyBillingResponse
 */
QueryGateVerifyBillingResponse Client::queryGateVerifyBillingWithOptions(const QueryGateVerifyBillingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.getAuthenticationType();
  }

  if (!!request.hasMonth()) {
    query["Month"] = request.getMonth();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGateVerifyBilling"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGateVerifyBillingResponse>();
}

/**
 * @param request QueryGateVerifyBillingRequest
 * @return QueryGateVerifyBillingResponse
 */
QueryGateVerifyBillingResponse Client::queryGateVerifyBilling(const QueryGateVerifyBillingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGateVerifyBillingWithOptions(request, runtime);
}

/**
 * @param request QueryGateVerifyRecordListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGateVerifyRecordListResponse
 */
QueryGateVerifyRecordListResponse Client::queryGateVerifyRecordListWithOptions(const QueryGateVerifyRecordListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.getAuthenticationType();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNum()) {
    query["PhoneNum"] = request.getPhoneNum();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasQueryDate()) {
    query["QueryDate"] = request.getQueryDate();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGateVerifyRecordList"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGateVerifyRecordListResponse>();
}

/**
 * @param request QueryGateVerifyRecordListRequest
 * @return QueryGateVerifyRecordListResponse
 */
QueryGateVerifyRecordListResponse Client::queryGateVerifyRecordList(const QueryGateVerifyRecordListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGateVerifyRecordListWithOptions(request, runtime);
}

/**
 * @param request QueryGateVerifyStatisticRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryGateVerifyStatisticResponse
 */
QueryGateVerifyStatisticResponse Client::queryGateVerifyStatisticWithOptions(const QueryGateVerifyStatisticRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthenticationType()) {
    query["AuthenticationType"] = request.getAuthenticationType();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasOsType()) {
    query["OsType"] = request.getOsType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSceneCode()) {
    query["SceneCode"] = request.getSceneCode();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryGateVerifyStatistic"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryGateVerifyStatisticResponse>();
}

/**
 * @param request QueryGateVerifyStatisticRequest
 * @return QueryGateVerifyStatisticResponse
 */
QueryGateVerifyStatisticResponse Client::queryGateVerifyStatistic(const QueryGateVerifyStatisticRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryGateVerifyStatisticWithOptions(request, runtime);
}

/**
 * @param request QueryPnsConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPnsConfigResponse
 */
QueryPnsConfigResponse Client::queryPnsConfigWithOptions(const QueryPnsConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPnsConfig"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPnsConfigResponse>();
}

/**
 * @param request QueryPnsConfigRequest
 * @return QueryPnsConfigResponse
 */
QueryPnsConfigResponse Client::queryPnsConfig(const QueryPnsConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPnsConfigWithOptions(request, runtime);
}

/**
 * @param request QueryPnsPackageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPnsPackageDetailResponse
 */
QueryPnsPackageDetailResponse Client::queryPnsPackageDetailWithOptions(const QueryPnsPackageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPnsPackageDetail"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPnsPackageDetailResponse>();
}

/**
 * @param request QueryPnsPackageDetailRequest
 * @return QueryPnsPackageDetailResponse
 */
QueryPnsPackageDetailResponse Client::queryPnsPackageDetail(const QueryPnsPackageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPnsPackageDetailWithOptions(request, runtime);
}

/**
 * @param request QueryPnsPackageListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPnsPackageListResponse
 */
QueryPnsPackageListResponse Client::queryPnsPackageListWithOptions(const QueryPnsPackageListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBillCycle()) {
    query["BillCycle"] = request.getBillCycle();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPnsPackageList"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPnsPackageListResponse>();
}

/**
 * @param request QueryPnsPackageListRequest
 * @return QueryPnsPackageListResponse
 */
QueryPnsPackageListResponse Client::queryPnsPackageList(const QueryPnsPackageListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPnsPackageListWithOptions(request, runtime);
}

/**
 * @param request QueryPnsPackageStatisticsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPnsPackageStatisticsResponse
 */
QueryPnsPackageStatisticsResponse Client::queryPnsPackageStatisticsWithOptions(const QueryPnsPackageStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPnsPackageStatistics"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPnsPackageStatisticsResponse>();
}

/**
 * @param request QueryPnsPackageStatisticsRequest
 * @return QueryPnsPackageStatisticsResponse
 */
QueryPnsPackageStatisticsResponse Client::queryPnsPackageStatistics(const QueryPnsPackageStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPnsPackageStatisticsWithOptions(request, runtime);
}

/**
 * @param request QuerySceneListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySceneListResponse
 */
QuerySceneListResponse Client::querySceneListWithOptions(const QuerySceneListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySceneList"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySceneListResponse>();
}

/**
 * @param request QuerySceneListRequest
 * @return QuerySceneListResponse
 */
QuerySceneListResponse Client::querySceneList(const QuerySceneListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySceneListWithOptions(request, runtime);
}

/**
 * @param request QuerySdkVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySdkVersionResponse
 */
QuerySdkVersionResponse Client::querySdkVersionWithOptions(const QuerySdkVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasCustomerId()) {
    query["customerId"] = request.getCustomerId();
  }

  if (!!request.hasProdCode()) {
    query["prodCode"] = request.getProdCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySdkVersion"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySdkVersionResponse>();
}

/**
 * @param request QuerySdkVersionRequest
 * @return QuerySdkVersionResponse
 */
QuerySdkVersionResponse Client::querySdkVersion(const QuerySdkVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySdkVersionWithOptions(request, runtime);
}

/**
 * @param request QueryTagStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTagStatusResponse
 */
QueryTagStatusResponse Client::queryTagStatusWithOptions(const QueryTagStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAttrKey()) {
    query["AttrKey"] = request.getAttrKey();
  }

  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTagStatus"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTagStatusResponse>();
}

/**
 * @param request QueryTagStatusRequest
 * @return QueryTagStatusResponse
 */
QueryTagStatusResponse Client::queryTagStatus(const QueryTagStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagStatusWithOptions(request, runtime);
}

/**
 * @param request RemoveGateVerifyExportLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveGateVerifyExportLogResponse
 */
RemoveGateVerifyExportLogResponse Client::removeGateVerifyExportLogWithOptions(const RemoveGateVerifyExportLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveGateVerifyExportLog"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveGateVerifyExportLogResponse>();
}

/**
 * @param request RemoveGateVerifyExportLogRequest
 * @return RemoveGateVerifyExportLogResponse
 */
RemoveGateVerifyExportLogResponse Client::removeGateVerifyExportLog(const RemoveGateVerifyExportLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeGateVerifyExportLogWithOptions(request, runtime);
}

/**
 * @param request SubmitEnterpriseInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitEnterpriseInfoResponse
 */
SubmitEnterpriseInfoResponse Client::submitEnterpriseInfoWithOptions(const SubmitEnterpriseInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBusinessLicenseAddress()) {
    query["BusinessLicenseAddress"] = request.getBusinessLicenseAddress();
  }

  if (!!request.hasBusinessLicensePicture()) {
    query["BusinessLicensePicture"] = request.getBusinessLicensePicture();
  }

  if (!!request.hasEnterpriseId()) {
    query["EnterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasEnterpriseName()) {
    query["EnterpriseName"] = request.getEnterpriseName();
  }

  if (!!request.hasLegalPersonCertNumber()) {
    query["LegalPersonCertNumber"] = request.getLegalPersonCertNumber();
  }

  if (!!request.hasLegalPersonCertPicture()) {
    query["LegalPersonCertPicture"] = request.getLegalPersonCertPicture();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasManagerCertNumber()) {
    query["ManagerCertNumber"] = request.getManagerCertNumber();
  }

  if (!!request.hasManagerCertPicture()) {
    query["ManagerCertPicture"] = request.getManagerCertPicture();
  }

  if (!!request.hasManagerContactNumber()) {
    query["ManagerContactNumber"] = request.getManagerContactNumber();
  }

  if (!!request.hasManagerName()) {
    query["ManagerName"] = request.getManagerName();
  }

  if (!!request.hasNumberApplicationLetterPicture()) {
    query["NumberApplicationLetterPicture"] = request.getNumberApplicationLetterPicture();
  }

  if (!!request.hasOrganizationCode()) {
    query["OrganizationCode"] = request.getOrganizationCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUndertakingPicture()) {
    query["UndertakingPicture"] = request.getUndertakingPicture();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitEnterpriseInfo"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitEnterpriseInfoResponse>();
}

/**
 * @param request SubmitEnterpriseInfoRequest
 * @return SubmitEnterpriseInfoResponse
 */
SubmitEnterpriseInfoResponse Client::submitEnterpriseInfo(const SubmitEnterpriseInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitEnterpriseInfoWithOptions(request, runtime);
}

/**
 * @param request UpdateExportLogStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExportLogStateResponse
 */
UpdateExportLogStateResponse Client::updateExportLogStateWithOptions(const UpdateExportLogStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateExportLogState"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExportLogStateResponse>();
}

/**
 * @param request UpdateExportLogStateRequest
 * @return UpdateExportLogStateResponse
 */
UpdateExportLogStateResponse Client::updateExportLogState(const UpdateExportLogStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExportLogStateWithOptions(request, runtime);
}

/**
 * @param request UpdateSmsCodeLimitConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmsCodeLimitConfigResponse
 */
UpdateSmsCodeLimitConfigResponse Client::updateSmsCodeLimitConfigWithOptions(const UpdateSmsCodeLimitConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimitDay()) {
    query["LimitDay"] = request.getLimitDay();
  }

  if (!!request.hasLimitHour()) {
    query["LimitHour"] = request.getLimitHour();
  }

  if (!!request.hasLimitId()) {
    query["LimitId"] = request.getLimitId();
  }

  if (!!request.hasLimitMinute()) {
    query["LimitMinute"] = request.getLimitMinute();
  }

  if (!!request.hasLimitOther()) {
    query["LimitOther"] = request.getLimitOther();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmsCodeLimitConfig"},
    {"version" , "2017-06-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmsCodeLimitConfigResponse>();
}

/**
 * @param request UpdateSmsCodeLimitConfigRequest
 * @return UpdateSmsCodeLimitConfigResponse
 */
UpdateSmsCodeLimitConfigResponse Client::updateSmsCodeLimitConfig(const UpdateSmsCodeLimitConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmsCodeLimitConfigWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dypns20170620