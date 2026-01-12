#include <darabonba/Core.hpp>
#include <alibabacloud/XrEngine20221111.hpp>
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
using namespace AlibabaCloud::XrEngine20221111::Models;
namespace AlibabaCloud
{
namespace XrEngine20221111
{

AlibabaCloud::XrEngine20221111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "xrengine-daily.aliyuncs.com"},
    {"ap-northeast-2-pop" , "xrengine-daily.aliyuncs.com"},
    {"ap-south-1" , "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-1" , "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-2" , "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-3" , "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-5" , "xrengine-daily.aliyuncs.com"},
    {"cn-beijing" , "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-finance-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-gov-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "xrengine-daily.aliyuncs.com"},
    {"cn-chengdu" , "xrengine-daily.aliyuncs.com"},
    {"cn-edge-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-fujian" , "xrengine-daily.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-finance" , "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "xrengine-daily.aliyuncs.com"},
    {"cn-hongkong" , "xrengine-daily.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "xrengine-daily.aliyuncs.com"},
    {"cn-huhehaote" , "xrengine-daily.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-north-2-gov-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-qingdao" , "xrengine-daily.aliyuncs.com"},
    {"cn-qingdao-nebula" , "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai" , "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-inner" , "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen" , "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-inner" , "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "xrengine-daily.aliyuncs.com"},
    {"cn-wuhan" , "xrengine-daily.aliyuncs.com"},
    {"cn-wulanchabu" , "xrengine-daily.aliyuncs.com"},
    {"cn-yushanfang" , "xrengine-daily.aliyuncs.com"},
    {"cn-zhangbei" , "xrengine-daily.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "xrengine-daily.aliyuncs.com"},
    {"cn-zhangjiakou" , "xrengine-daily.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "xrengine-daily.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "xrengine-daily.aliyuncs.com"},
    {"eu-central-1" , "xrengine-daily.aliyuncs.com"},
    {"eu-west-1" , "xrengine-daily.aliyuncs.com"},
    {"eu-west-1-oxs" , "xrengine-daily.aliyuncs.com"},
    {"me-east-1" , "xrengine-daily.aliyuncs.com"},
    {"rus-west-1-pop" , "xrengine-daily.aliyuncs.com"},
    {"us-east-1" , "xrengine-daily.aliyuncs.com"},
    {"us-west-1" , "xrengine-daily.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("xrengine", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 用户签署协议
 *
 * @param request AcceptAgreementRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AcceptAgreementResponse
 */
AcceptAgreementResponse Client::acceptAgreementWithOptions(const AcceptAgreementRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AcceptAgreement"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AcceptAgreementResponse>();
}

/**
 * @summary 用户签署协议
 *
 * @param request AcceptAgreementRequest
 * @return AcceptAgreementResponse
 */
AcceptAgreementResponse Client::acceptAgreement(const AcceptAgreementRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return acceptAgreementWithOptions(request, runtime);
}

/**
 * @summary 添加白名单（云账号）
 *
 * @param request AddWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddWhitelistResponse
 */
AddWhitelistResponse Client::addWhitelistWithOptions(const AddWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAliyunUid()) {
    body["AliyunUid"] = request.getAliyunUid();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasRemark()) {
    body["Remark"] = request.getRemark();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "AddWhitelist"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddWhitelistResponse>();
}

/**
 * @summary 添加白名单（云账号）
 *
 * @param request AddWhitelistRequest
 * @return AddWhitelistResponse
 */
AddWhitelistResponse Client::addWhitelist(const AddWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addWhitelistWithOptions(request, runtime);
}

/**
 * @summary 申请ai试衣服务
 *
 * @param request ApplyForTryOnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ApplyForTryOnResponse
 */
ApplyForTryOnResponse Client::applyForTryOnWithOptions(const ApplyForTryOnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["Content"] = request.getContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ApplyForTryOn"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ApplyForTryOnResponse>();
}

/**
 * @summary 申请ai试衣服务
 *
 * @param request ApplyForTryOnRequest
 * @return ApplyForTryOnResponse
 */
ApplyForTryOnResponse Client::applyForTryOn(const ApplyForTryOnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return applyForTryOnWithOptions(request, runtime);
}

/**
 * @param request AuthUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthUserResponse
 */
AuthUserResponse Client::authUserWithOptions(const AuthUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuthUser"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthUserResponse>();
}

/**
 * @param request AuthUserRequest
 * @return AuthUserResponse
 */
AuthUserResponse Client::authUser(const AuthUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return authUserWithOptions(request, runtime);
}

/**
 * @param tmpReq BatchCreateSvcMapBindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchCreateSvcMapBindResponse
 */
BatchCreateSvcMapBindResponse Client::batchCreateSvcMapBindWithOptions(const BatchCreateSvcMapBindRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchCreateSvcMapBindShrinkRequest request = BatchCreateSvcMapBindShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMapIds()) {
    request.setMapIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMapIds(), "MapIds", "json"));
  }

  json body = {};
  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasMapIdsShrink()) {
    body["MapIds"] = request.getMapIdsShrink();
  }

  if (!!request.hasSvcId()) {
    body["SvcId"] = request.getSvcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchCreateSvcMapBind"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchCreateSvcMapBindResponse>();
}

/**
 * @param request BatchCreateSvcMapBindRequest
 * @return BatchCreateSvcMapBindResponse
 */
BatchCreateSvcMapBindResponse Client::batchCreateSvcMapBind(const BatchCreateSvcMapBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchCreateSvcMapBindWithOptions(request, runtime);
}

/**
 * @summary 取消关联
 *
 * @param tmpReq BatchDeleteSvcMapBindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchDeleteSvcMapBindResponse
 */
BatchDeleteSvcMapBindResponse Client::batchDeleteSvcMapBindWithOptions(const BatchDeleteSvcMapBindRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  BatchDeleteSvcMapBindShrinkRequest request = BatchDeleteSvcMapBindShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "Ids", "json"));
  }

  json body = {};
  if (!!request.hasIdsShrink()) {
    body["Ids"] = request.getIdsShrink();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "BatchDeleteSvcMapBind"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchDeleteSvcMapBindResponse>();
}

/**
 * @summary 取消关联
 *
 * @param request BatchDeleteSvcMapBindRequest
 * @return BatchDeleteSvcMapBindResponse
 */
BatchDeleteSvcMapBindResponse Client::batchDeleteSvcMapBind(const BatchDeleteSvcMapBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return batchDeleteSvcMapBindWithOptions(request, runtime);
}

/**
 * @summary 构建项目
 *
 * @param request BuildProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BuildProjectResponse
 */
BuildProjectResponse Client::buildProjectWithOptions(const BuildProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasVideoName()) {
    query["VideoName"] = request.getVideoName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BuildProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BuildProjectResponse>();
}

/**
 * @summary 构建项目
 *
 * @param request BuildProjectRequest
 * @return BuildProjectResponse
 */
BuildProjectResponse Client::buildProject(const BuildProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return buildProjectWithOptions(request, runtime);
}

/**
 * @summary 创建，同时创建空白的pai占位
 *
 * @param request CreateLocationServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLocationServiceResponse
 */
CreateLocationServiceResponse Client::createLocationServiceWithOptions(const CreateLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAppId()) {
    body["AppId"] = request.getAppId();
  }

  if (!!request.hasImageId()) {
    body["ImageId"] = request.getImageId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNote()) {
    body["Note"] = request.getNote();
  }

  if (!!request.hasQps()) {
    body["Qps"] = request.getQps();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLocationService"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLocationServiceResponse>();
}

/**
 * @summary 创建，同时创建空白的pai占位
 *
 * @param request CreateLocationServiceRequest
 * @return CreateLocationServiceResponse
 */
CreateLocationServiceResponse Client::createLocationService(const CreateLocationServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLocationServiceWithOptions(request, runtime);
}

/**
 * @summary 创建项目
 *
 * @param tmpReq CreateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProjectShrinkRequest request = CreateProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTryOnParams()) {
    request.setTryOnParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTryOnParams(), "TryOnParams", "json"));
  }

  json body = {};
  if (!!request.hasAutoBuild()) {
    body["AutoBuild"] = request.getAutoBuild();
  }

  if (!!request.hasDependencies()) {
    body["Dependencies"] = request.getDependencies();
  }

  if (!!request.hasExtInfo()) {
    body["ExtInfo"] = request.getExtInfo();
  }

  if (!!request.hasGender()) {
    body["Gender"] = request.getGender();
  }

  if (!!request.hasHeight()) {
    body["Height"] = request.getHeight();
  }

  if (!!request.hasIntro()) {
    body["Intro"] = request.getIntro();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasMapUuid()) {
    body["MapUuid"] = request.getMapUuid();
  }

  if (!!request.hasMethod()) {
    body["Method"] = request.getMethod();
  }

  if (!!request.hasMode()) {
    body["Mode"] = request.getMode();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasTryOnParamsShrink()) {
    body["TryOnParams"] = request.getTryOnParamsShrink();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWeight()) {
    body["Weight"] = request.getWeight();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary 创建项目
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createProjectWithOptions(request, runtime);
}

/**
 * @summary 创建素材上传policy
 *
 * @param request CreateSourcePolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSourcePolicyResponse
 */
CreateSourcePolicyResponse Client::createSourcePolicyWithOptions(const CreateSourcePolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.getOssKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSourcePolicy"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSourcePolicyResponse>();
}

/**
 * @summary 创建素材上传policy
 *
 * @param request CreateSourcePolicyRequest
 * @return CreateSourcePolicyResponse
 */
CreateSourcePolicyResponse Client::createSourcePolicy(const CreateSourcePolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSourcePolicyWithOptions(request, runtime);
}

/**
 * @summary 删除项目信息
 *
 * @param request DeleteProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProjectWithOptions(const DeleteProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProjectResponse>();
}

/**
 * @summary 删除项目信息
 *
 * @param request DeleteProjectRequest
 * @return DeleteProjectResponse
 */
DeleteProjectResponse Client::deleteProject(const DeleteProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteProjectWithOptions(request, runtime);
}

/**
 * @summary 删除文件
 *
 * @param request DeleteSourceFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSourceFileResponse
 */
DeleteSourceFileResponse Client::deleteSourceFileWithOptions(const DeleteSourceFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileId()) {
    query["FileId"] = request.getFileId();
  }

  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSourceFile"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSourceFileResponse>();
}

/**
 * @summary 删除文件
 *
 * @param request DeleteSourceFileRequest
 * @return DeleteSourceFileResponse
 */
DeleteSourceFileResponse Client::deleteSourceFile(const DeleteSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSourceFileWithOptions(request, runtime);
}

/**
 * @summary 1校验部署状态，一期不支持二次部署。相关关联记录里状态智能变更
 *
 * @param request DeployLocationTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeployLocationTreeResponse
 */
DeployLocationTreeResponse Client::deployLocationTreeWithOptions(const DeployLocationTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasForceUpdate()) {
    body["ForceUpdate"] = request.getForceUpdate();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasSvcId()) {
    body["SvcId"] = request.getSvcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeployLocationTree"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeployLocationTreeResponse>();
}

/**
 * @summary 1校验部署状态，一期不支持二次部署。相关关联记录里状态智能变更
 *
 * @param request DeployLocationTreeRequest
 * @return DeployLocationTreeResponse
 */
DeployLocationTreeResponse Client::deployLocationTree(const DeployLocationTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deployLocationTreeWithOptions(request, runtime);
}

/**
 * @summary 查出绑定记录
 *
 * @param request FindSvcMapBindRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return FindSvcMapBindResponse
 */
FindSvcMapBindResponse Client::findSvcMapBindWithOptions(const FindSvcMapBindRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasSort()) {
    body["Sort"] = request.getSort();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  if (!!request.hasSvcId()) {
    body["SvcId"] = request.getSvcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "FindSvcMapBind"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FindSvcMapBindResponse>();
}

/**
 * @summary 查出绑定记录
 *
 * @param request FindSvcMapBindRequest
 * @return FindSvcMapBindResponse
 */
FindSvcMapBindResponse Client::findSvcMapBind(const FindSvcMapBindRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return findSvcMapBindWithOptions(request, runtime);
}

/**
 * @summary 获取用户申请状态
 *
 * @param request GetApplyStatusForTryOnRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplyStatusForTryOnResponse
 */
GetApplyStatusForTryOnResponse Client::getApplyStatusForTryOnWithOptions(const GetApplyStatusForTryOnRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplyStatusForTryOn"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplyStatusForTryOnResponse>();
}

/**
 * @summary 获取用户申请状态
 *
 * @param request GetApplyStatusForTryOnRequest
 * @return GetApplyStatusForTryOnResponse
 */
GetApplyStatusForTryOnResponse Client::getApplyStatusForTryOn(const GetApplyStatusForTryOnRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplyStatusForTryOnWithOptions(request, runtime);
}

/**
 * @param request GetArEditCommonMaterialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArEditCommonMaterialResponse
 */
GetArEditCommonMaterialResponse Client::getArEditCommonMaterialWithOptions(const GetArEditCommonMaterialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetArEditCommonMaterial"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArEditCommonMaterialResponse>();
}

/**
 * @param request GetArEditCommonMaterialRequest
 * @return GetArEditCommonMaterialResponse
 */
GetArEditCommonMaterialResponse Client::getArEditCommonMaterial(const GetArEditCommonMaterialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArEditCommonMaterialWithOptions(request, runtime);
}

/**
 * @param request GetArEditStsAuthRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArEditStsAuthResponse
 */
GetArEditStsAuthResponse Client::getArEditStsAuthWithOptions(const GetArEditStsAuthRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasMapId()) {
    body["MapId"] = request.getMapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetArEditStsAuth"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArEditStsAuthResponse>();
}

/**
 * @param request GetArEditStsAuthRequest
 * @return GetArEditStsAuthResponse
 */
GetArEditStsAuthResponse Client::getArEditStsAuth(const GetArEditStsAuthRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArEditStsAuthWithOptions(request, runtime);
}

/**
 * @param request GetArEditUgcMaterialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetArEditUgcMaterialResponse
 */
GetArEditUgcMaterialResponse Client::getArEditUgcMaterialWithOptions(const GetArEditUgcMaterialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasMapId()) {
    body["MapId"] = request.getMapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetArEditUgcMaterial"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetArEditUgcMaterialResponse>();
}

/**
 * @param request GetArEditUgcMaterialRequest
 * @return GetArEditUgcMaterialResponse
 */
GetArEditUgcMaterialResponse Client::getArEditUgcMaterial(const GetArEditUgcMaterialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getArEditUgcMaterialWithOptions(request, runtime);
}

/**
 * @summary 获取项目模型详情
 *
 * @param request GetProjectDatasetRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProjectDatasetResponse
 */
GetProjectDatasetResponse Client::getProjectDatasetWithOptions(const GetProjectDatasetRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.getOssKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProjectDataset"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProjectDatasetResponse>();
}

/**
 * @summary 获取项目模型详情
 *
 * @param request GetProjectDatasetRequest
 * @return GetProjectDatasetResponse
 */
GetProjectDatasetResponse Client::getProjectDataset(const GetProjectDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getProjectDatasetWithOptions(request, runtime);
}

/**
 * @summary 调用同步算法
 *
 * @param tmpReq InvokeSyncAlgorithmRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeSyncAlgorithmResponse
 */
InvokeSyncAlgorithmResponse Client::invokeSyncAlgorithmWithOptions(const InvokeSyncAlgorithmRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvokeSyncAlgorithmShrinkRequest request = InvokeSyncAlgorithmShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasJobId()) {
    body["JobId"] = request.getJobId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "InvokeSyncAlgorithm"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeSyncAlgorithmResponse>();
}

/**
 * @summary 调用同步算法
 *
 * @param request InvokeSyncAlgorithmRequest
 * @return InvokeSyncAlgorithmResponse
 */
InvokeSyncAlgorithmResponse Client::invokeSyncAlgorithm(const InvokeSyncAlgorithmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return invokeSyncAlgorithmWithOptions(request, runtime);
}

/**
 * @param request ListAreaMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAreaMapResponse
 */
ListAreaMapResponse Client::listAreaMapWithOptions(const ListAreaMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasSort()) {
    body["Sort"] = request.getSort();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListAreaMap"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAreaMapResponse>();
}

/**
 * @param request ListAreaMapRequest
 * @return ListAreaMapResponse
 */
ListAreaMapResponse Client::listAreaMap(const ListAreaMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAreaMapWithOptions(request, runtime);
}

/**
 * @summary 列举服饰类型
 *
 * @param request ListClothTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClothTypesResponse
 */
ListClothTypesResponse Client::listClothTypesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListClothTypes"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClothTypesResponse>();
}

/**
 * @summary 列举服饰类型
 *
 * @return ListClothTypesResponse
 */
ListClothTypesResponse Client::listClothTypes() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClothTypesWithOptions(runtime);
}

/**
 * @summary 列举服饰
 *
 * @param tmpReq ListClothesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClothesResponse
 */
ListClothesResponse Client::listClothesWithOptions(const ListClothesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListClothesShrinkRequest request = ListClothesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCategories()) {
    request.setCategoriesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCategories(), "Categories", "json"));
  }

  json query = {};
  if (!!request.hasCategoriesShrink()) {
    query["Categories"] = request.getCategoriesShrink();
  }

  if (!!request.hasClothSize()) {
    query["ClothSize"] = request.getClothSize();
  }

  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListClothes"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClothesResponse>();
}

/**
 * @summary 列举服饰
 *
 * @param request ListClothesRequest
 * @return ListClothesResponse
 */
ListClothesResponse Client::listClothes(const ListClothesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClothesWithOptions(request, runtime);
}

/**
 * @summary hdr文件目录列表
 *
 * @param request ListHdrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListHdrResponse
 */
ListHdrResponse Client::listHdrWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListHdr"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListHdrResponse>();
}

/**
 * @summary hdr文件目录列表
 *
 * @return ListHdrResponse
 */
ListHdrResponse Client::listHdr() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listHdrWithOptions(runtime);
}

/**
 * @param request ListLocationPaiImageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLocationPaiImageResponse
 */
ListLocationPaiImageResponse Client::listLocationPaiImageWithOptions(const ListLocationPaiImageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasSort()) {
    body["Sort"] = request.getSort();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLocationPaiImage"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLocationPaiImageResponse>();
}

/**
 * @param request ListLocationPaiImageRequest
 * @return ListLocationPaiImageResponse
 */
ListLocationPaiImageResponse Client::listLocationPaiImage(const ListLocationPaiImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLocationPaiImageWithOptions(request, runtime);
}

/**
 * @param request ListLocationServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLocationServiceResponse
 */
ListLocationServiceResponse Client::listLocationServiceWithOptions(const ListLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasSort()) {
    body["Sort"] = request.getSort();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLocationService"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLocationServiceResponse>();
}

/**
 * @param request ListLocationServiceRequest
 * @return ListLocationServiceResponse
 */
ListLocationServiceResponse Client::listLocationService(const ListLocationServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLocationServiceWithOptions(request, runtime);
}

/**
 * @summary 列出当前用户项目列表
 *
 * @param request ListProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProjectWithOptions(const ListProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBizUsage()) {
    body["BizUsage"] = request.getBizUsage();
  }

  if (!!request.hasCurrent()) {
    body["Current"] = request.getCurrent();
  }

  if (!!request.hasExcludedBizUsage()) {
    body["ExcludedBizUsage"] = request.getExcludedBizUsage();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasSize()) {
    body["Size"] = request.getSize();
  }

  if (!!request.hasSortField()) {
    body["SortField"] = request.getSortField();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  if (!!request.hasWithSource()) {
    body["WithSource"] = request.getWithSource();
  }

  if (!!request.hasWithUser()) {
    body["WithUser"] = request.getWithUser();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectResponse>();
}

/**
 * @summary 列出当前用户项目列表
 *
 * @param request ListProjectRequest
 * @return ListProjectResponse
 */
ListProjectResponse Client::listProject(const ListProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectWithOptions(request, runtime);
}

/**
 * @summary 根据项目Id查出依赖当前项目的项目
 *
 * @param request ListProjectsByDependencyIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProjectsByDependencyIdResponse
 */
ListProjectsByDependencyIdResponse Client::listProjectsByDependencyIdWithOptions(const ListProjectsByDependencyIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDependencyProjectId()) {
    body["DependencyProjectId"] = request.getDependencyProjectId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasMapUuid()) {
    body["MapUuid"] = request.getMapUuid();
  }

  if (!!request.hasWithDataset()) {
    body["WithDataset"] = request.getWithDataset();
  }

  if (!!request.hasWithSource()) {
    body["WithSource"] = request.getWithSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListProjectsByDependencyId"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProjectsByDependencyIdResponse>();
}

/**
 * @summary 根据项目Id查出依赖当前项目的项目
 *
 * @param request ListProjectsByDependencyIdRequest
 * @return ListProjectsByDependencyIdResponse
 */
ListProjectsByDependencyIdResponse Client::listProjectsByDependencyId(const ListProjectsByDependencyIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listProjectsByDependencyIdWithOptions(request, runtime);
}

/**
 * @summary 列举项目中上传的文件列表
 *
 * @param request ListSourceFileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSourceFileResponse
 */
ListSourceFileResponse Client::listSourceFileWithOptions(const ListSourceFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSourceFile"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSourceFileResponse>();
}

/**
 * @summary 列举项目中上传的文件列表
 *
 * @param request ListSourceFileRequest
 * @return ListSourceFileResponse
 */
ListSourceFileResponse Client::listSourceFile(const ListSourceFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSourceFileWithOptions(request, runtime);
}

/**
 * @summary 列举流水线
 *
 * @param request ListWorkflowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkflowResponse
 */
ListWorkflowResponse Client::listWorkflowWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListWorkflow"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkflowResponse>();
}

/**
 * @summary 列举流水线
 *
 * @return ListWorkflowResponse
 */
ListWorkflowResponse Client::listWorkflow() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkflowWithOptions(runtime);
}

/**
 * @param request LoginRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoginResponse
 */
LoginResponse Client::loginWithOptions(const LoginRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEmpId()) {
    body["EmpId"] = request.getEmpId();
  }

  if (!!request.hasEmpName()) {
    body["EmpName"] = request.getEmpName();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.getToken();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "Login"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoginResponse>();
}

/**
 * @param request LoginRequest
 * @return LoginResponse
 */
LoginResponse Client::login(const LoginRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loginWithOptions(request, runtime);
}

/**
 * @summary 无线端APP登陆
 *
 * @param request LoginAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LoginAppResponse
 */
LoginAppResponse Client::loginAppWithOptions(const LoginAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEmpId()) {
    body["EmpId"] = request.getEmpId();
  }

  if (!!request.hasEmpName()) {
    body["EmpName"] = request.getEmpName();
  }

  if (!!request.hasToken()) {
    body["Token"] = request.getToken();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "LoginApp"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LoginAppResponse>();
}

/**
 * @summary 无线端APP登陆
 *
 * @param request LoginAppRequest
 * @return LoginAppResponse
 */
LoginAppResponse Client::loginApp(const LoginAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return loginAppWithOptions(request, runtime);
}

/**
 * @param request PublishArEditProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishArEditProjectResponse
 */
PublishArEditProjectResponse Client::publishArEditProjectWithOptions(const PublishArEditProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasMapId()) {
    body["MapId"] = request.getMapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishArEditProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishArEditProjectResponse>();
}

/**
 * @param request PublishArEditProjectRequest
 * @return PublishArEditProjectResponse
 */
PublishArEditProjectResponse Client::publishArEditProject(const PublishArEditProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishArEditProjectWithOptions(request, runtime);
}

/**
 * @summary 项目发布
 *
 * @param request PublishProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishProjectResponse
 */
PublishProjectResponse Client::publishProjectWithOptions(const PublishProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PublishProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishProjectResponse>();
}

/**
 * @summary 项目发布
 *
 * @param request PublishProjectRequest
 * @return PublishProjectResponse
 */
PublishProjectResponse Client::publishProject(const PublishProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishProjectWithOptions(request, runtime);
}

/**
 * @param request QueryAreaMapRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAreaMapResponse
 */
QueryAreaMapResponse Client::queryAreaMapWithOptions(const QueryAreaMapRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryAreaMap"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAreaMapResponse>();
}

/**
 * @param request QueryAreaMapRequest
 * @return QueryAreaMapResponse
 */
QueryAreaMapResponse Client::queryAreaMap(const QueryAreaMapRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAreaMapWithOptions(request, runtime);
}

/**
 * @summary 查找项目构建失败时的信息
 *
 * @param request QueryBuildBreakpointRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryBuildBreakpointResponse
 */
QueryBuildBreakpointResponse Client::queryBuildBreakpointWithOptions(const QueryBuildBreakpointRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasProjectId()) {
    body["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryBuildBreakpoint"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryBuildBreakpointResponse>();
}

/**
 * @summary 查找项目构建失败时的信息
 *
 * @param request QueryBuildBreakpointRequest
 * @return QueryBuildBreakpointResponse
 */
QueryBuildBreakpointResponse Client::queryBuildBreakpoint(const QueryBuildBreakpointRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryBuildBreakpointWithOptions(request, runtime);
}

/**
 * @param request QueryLocationServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryLocationServiceResponse
 */
QueryLocationServiceResponse Client::queryLocationServiceWithOptions(const QueryLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "QueryLocationService"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryLocationServiceResponse>();
}

/**
 * @param request QueryLocationServiceRequest
 * @return QueryLocationServiceResponse
 */
QueryLocationServiceResponse Client::queryLocationService(const QueryLocationServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryLocationServiceWithOptions(request, runtime);
}

/**
 * @summary 查询项目构建详情
 *
 * @param request QueryProjectBuildDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProjectBuildDetailResponse
 */
QueryProjectBuildDetailResponse Client::queryProjectBuildDetailWithOptions(const QueryProjectBuildDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProjectBuildDetail"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProjectBuildDetailResponse>();
}

/**
 * @summary 查询项目构建详情
 *
 * @param request QueryProjectBuildDetailRequest
 * @return QueryProjectBuildDetailResponse
 */
QueryProjectBuildDetailResponse Client::queryProjectBuildDetail(const QueryProjectBuildDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryProjectBuildDetailWithOptions(request, runtime);
}

/**
 * @summary 查询项目详情
 *
 * @param request QueryProjectDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryProjectDetailResponse
 */
QueryProjectDetailResponse Client::queryProjectDetailWithOptions(const QueryProjectDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.getOssKey();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryProjectDetail"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryProjectDetailResponse>();
}

/**
 * @summary 查询项目详情
 *
 * @param request QueryProjectDetailRequest
 * @return QueryProjectDetailResponse
 */
QueryProjectDetailResponse Client::queryProjectDetail(const QueryProjectDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryProjectDetailWithOptions(request, runtime);
}

/**
 * @summary 该注册接口只用于oneconsole页面的注册
 *
 * @param request RegisterUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterUserResponse
 */
RegisterUserResponse Client::registerUserWithOptions(const RegisterUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasSourceType()) {
    body["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "RegisterUser"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterUserResponse>();
}

/**
 * @summary 该注册接口只用于oneconsole页面的注册
 *
 * @param request RegisterUserRequest
 * @return RegisterUserResponse
 */
RegisterUserResponse Client::registerUser(const RegisterUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return registerUserWithOptions(request, runtime);
}

/**
 * @param request ResumeLocationServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResumeLocationServiceResponse
 */
ResumeLocationServiceResponse Client::resumeLocationServiceWithOptions(const ResumeLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ResumeLocationService"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResumeLocationServiceResponse>();
}

/**
 * @param request ResumeLocationServiceRequest
 * @return ResumeLocationServiceResponse
 */
ResumeLocationServiceResponse Client::resumeLocationService(const ResumeLocationServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resumeLocationServiceWithOptions(request, runtime);
}

/**
 * @param request SaveArEditProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveArEditProjectResponse
 */
SaveArEditProjectResponse Client::saveArEditProjectWithOptions(const SaveArEditProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasMapId()) {
    body["MapId"] = request.getMapId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SaveArEditProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveArEditProjectResponse>();
}

/**
 * @param request SaveArEditProjectRequest
 * @return SaveArEditProjectResponse
 */
SaveArEditProjectResponse Client::saveArEditProject(const SaveArEditProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveArEditProjectWithOptions(request, runtime);
}

/**
 * @summary 保存素材
 *
 * @param request SaveSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveSourceResponse
 */
SaveSourceResponse Client::saveSourceWithOptions(const SaveSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChangeStatus()) {
    query["ChangeStatus"] = request.getChangeStatus();
  }

  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasNeedCheck()) {
    query["NeedCheck"] = request.getNeedCheck();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveSource"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveSourceResponse>();
}

/**
 * @summary 保存素材
 *
 * @param request SaveSourceRequest
 * @return SaveSourceResponse
 */
SaveSourceResponse Client::saveSource(const SaveSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveSourceWithOptions(request, runtime);
}

/**
 * @param request SuspendLocationServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SuspendLocationServiceResponse
 */
SuspendLocationServiceResponse Client::suspendLocationServiceWithOptions(const SuspendLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "SuspendLocationService"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SuspendLocationServiceResponse>();
}

/**
 * @param request SuspendLocationServiceRequest
 * @return SuspendLocationServiceResponse
 */
SuspendLocationServiceResponse Client::suspendLocationService(const SuspendLocationServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return suspendLocationServiceWithOptions(request, runtime);
}

/**
 * @summary 项目(发布状态改回隐私状态)
 *
 * @param request UnPublishProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UnPublishProjectResponse
 */
UnPublishProjectResponse Client::unPublishProjectWithOptions(const UnPublishProjectRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UnPublishProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UnPublishProjectResponse>();
}

/**
 * @summary 项目(发布状态改回隐私状态)
 *
 * @param request UnPublishProjectRequest
 * @return UnPublishProjectResponse
 */
UnPublishProjectResponse Client::unPublishProject(const UnPublishProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return unPublishProjectWithOptions(request, runtime);
}

/**
 * @summary 如果不包含treeConfig则只是简单更新
 *
 * @param request UpdateLocationServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLocationServiceResponse
 */
UpdateLocationServiceResponse Client::updateLocationServiceWithOptions(const UpdateLocationServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasNote()) {
    body["Note"] = request.getNote();
  }

  if (!!request.hasQps()) {
    body["Qps"] = request.getQps();
  }

  if (!!request.hasSvcName()) {
    body["SvcName"] = request.getSvcName();
  }

  if (!!request.hasSvcState()) {
    body["SvcState"] = request.getSvcState();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLocationService"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLocationServiceResponse>();
}

/**
 * @summary 如果不包含treeConfig则只是简单更新
 *
 * @param request UpdateLocationServiceRequest
 * @return UpdateLocationServiceResponse
 */
UpdateLocationServiceResponse Client::updateLocationService(const UpdateLocationServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLocationServiceWithOptions(request, runtime);
}

/**
 * @summary 暂存接口比较复杂，单独拎出来
 *
 * @param request UpdateLocationTreeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLocationTreeResponse
 */
UpdateLocationTreeResponse Client::updateLocationTreeWithOptions(const UpdateLocationTreeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJwtToken()) {
    body["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasTreeConfig()) {
    body["TreeConfig"] = request.getTreeConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLocationTree"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLocationTreeResponse>();
}

/**
 * @summary 暂存接口比较复杂，单独拎出来
 *
 * @param request UpdateLocationTreeRequest
 * @return UpdateLocationTreeResponse
 */
UpdateLocationTreeResponse Client::updateLocationTree(const UpdateLocationTreeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLocationTreeWithOptions(request, runtime);
}

/**
 * @summary 更新项目信息
 *
 * @param tmpReq UpdateProjectRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProjectWithOptions(const UpdateProjectRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateProjectShrinkRequest request = UpdateProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExt()) {
    request.setExtShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExt(), "Ext", "json"));
  }

  json query = {};
  if (!!request.hasAutoBuild()) {
    query["AutoBuild"] = request.getAutoBuild();
  }

  if (!!request.hasExtShrink()) {
    query["Ext"] = request.getExtShrink();
  }

  if (!!request.hasIntro()) {
    query["Intro"] = request.getIntro();
  }

  if (!!request.hasJwtToken()) {
    query["JwtToken"] = request.getJwtToken();
  }

  if (!!request.hasProjectId()) {
    query["ProjectId"] = request.getProjectId();
  }

  if (!!request.hasTitle()) {
    query["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateProject"},
    {"version" , "2022-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProjectResponse>();
}

/**
 * @summary 更新项目信息
 *
 * @param request UpdateProjectRequest
 * @return UpdateProjectResponse
 */
UpdateProjectResponse Client::updateProject(const UpdateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateProjectWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace XrEngine20221111