#include <darabonba/Core.hpp>
#include <alibabacloud/Neuron20211115.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Neuron20211115::Models;
namespace AlibabaCloud
{
namespace Neuron20211115
{

AlibabaCloud::Neuron20211115::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"ap-northeast-1" , "neuron.aliyuncs.com"},
    {"ap-northeast-2-pop" , "neuron.aliyuncs.com"},
    {"ap-south-1" , "neuron.aliyuncs.com"},
    {"ap-southeast-1" , "neuron.aliyuncs.com"},
    {"ap-southeast-2" , "neuron.aliyuncs.com"},
    {"ap-southeast-3" , "neuron.aliyuncs.com"},
    {"ap-southeast-5" , "neuron.aliyuncs.com"},
    {"cn-beijing" , "neuron.aliyuncs.com"},
    {"cn-beijing-finance-1" , "neuron.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "neuron.aliyuncs.com"},
    {"cn-beijing-gov-1" , "neuron.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "neuron.aliyuncs.com"},
    {"cn-chengdu" , "neuron.aliyuncs.com"},
    {"cn-edge-1" , "neuron.aliyuncs.com"},
    {"cn-fujian" , "neuron.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "neuron.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "neuron.aliyuncs.com"},
    {"cn-hangzhou-finance" , "neuron.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "neuron.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "neuron.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "neuron.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "neuron.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "neuron.aliyuncs.com"},
    {"cn-hongkong" , "neuron.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "neuron.aliyuncs.com"},
    {"cn-huhehaote" , "neuron.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "neuron.aliyuncs.com"},
    {"cn-north-2-gov-1" , "neuron.aliyuncs.com"},
    {"cn-qingdao" , "neuron.aliyuncs.com"},
    {"cn-qingdao-nebula" , "neuron.aliyuncs.com"},
    {"cn-shanghai" , "neuron.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "neuron.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "neuron.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "neuron.aliyuncs.com"},
    {"cn-shanghai-inner" , "neuron.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "neuron.aliyuncs.com"},
    {"cn-shenzhen" , "neuron.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "neuron.aliyuncs.com"},
    {"cn-shenzhen-inner" , "neuron.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "neuron.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "neuron.aliyuncs.com"},
    {"cn-wuhan" , "neuron.aliyuncs.com"},
    {"cn-wulanchabu" , "neuron.aliyuncs.com"},
    {"cn-yushanfang" , "neuron.aliyuncs.com"},
    {"cn-zhangbei" , "neuron.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "neuron.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "neuron.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "neuron.aliyuncs.com"},
    {"eu-central-1" , "neuron.aliyuncs.com"},
    {"eu-west-1" , "neuron.aliyuncs.com"},
    {"eu-west-1-oxs" , "neuron.aliyuncs.com"},
    {"me-east-1" , "neuron.aliyuncs.com"},
    {"rus-west-1-pop" , "neuron.aliyuncs.com"},
    {"us-east-1" , "neuron.aliyuncs.com"},
    {"us-west-1" , "neuron.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("neuron", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 微服务分组加入或退出泳道
 *
 * @param request AddOrQuitPdpLaneForServiceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddOrQuitPdpLaneForServiceGroupResponse
 */
AddOrQuitPdpLaneForServiceGroupResponse Client::addOrQuitPdpLaneForServiceGroupWithOptions(const AddOrQuitPdpLaneForServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "AddOrQuitPdpLaneForServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/commands/add-quit-lane")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddOrQuitPdpLaneForServiceGroupResponse>();
}

/**
 * @summary 微服务分组加入或退出泳道
 *
 * @param request AddOrQuitPdpLaneForServiceGroupRequest
 * @return AddOrQuitPdpLaneForServiceGroupResponse
 */
AddOrQuitPdpLaneForServiceGroupResponse Client::addOrQuitPdpLaneForServiceGroup(const AddOrQuitPdpLaneForServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addOrQuitPdpLaneForServiceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 审批审核记录
 *
 * @param request AuditForkReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuditForkReviewResponse
 */
AuditForkReviewResponse Client::auditForkReviewWithOptions(const string &reviewId, const AuditForkReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "AuditForkReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/fork-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId) , "/commands/audit")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuditForkReviewResponse>();
}

/**
 * @summary 审批审核记录
 *
 * @param request AuditForkReviewRequest
 * @return AuditForkReviewResponse
 */
AuditForkReviewResponse Client::auditForkReview(const string &reviewId, const AuditForkReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return auditForkReviewWithOptions(reviewId, request, headers, runtime);
}

/**
 * @summary 审批审核记录
 *
 * @param request AuditPbcInvokeReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuditPbcInvokeReviewResponse
 */
AuditPbcInvokeReviewResponse Client::auditPbcInvokeReviewWithOptions(const string &reviewId, const AuditPbcInvokeReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApprove()) {
    body["approve"] = request.getApprove();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AuditPbcInvokeReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-invoke-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId) , "/commands/audit")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuditPbcInvokeReviewResponse>();
}

/**
 * @summary 审批审核记录
 *
 * @param request AuditPbcInvokeReviewRequest
 * @return AuditPbcInvokeReviewResponse
 */
AuditPbcInvokeReviewResponse Client::auditPbcInvokeReview(const string &reviewId, const AuditPbcInvokeReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return auditPbcInvokeReviewWithOptions(reviewId, request, headers, runtime);
}

/**
 * @summary 公司授权产品
 *
 * @param request AuthorizeProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuthorizeProductsResponse
 */
AuthorizeProductsResponse Client::authorizeProductsWithOptions(const AuthorizeProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "AuthorizeProducts"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/products/commands/authorize")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuthorizeProductsResponse>();
}

/**
 * @summary 公司授权产品
 *
 * @param request AuthorizeProductsRequest
 * @return AuthorizeProductsResponse
 */
AuthorizeProductsResponse Client::authorizeProducts(const AuthorizeProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return authorizeProductsWithOptions(request, headers, runtime);
}

/**
 * @summary 批量给开发者授权
 *
 * @param request BatchGrantRolesToDeveloperRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return BatchGrantRolesToDeveloperResponse
 */
BatchGrantRolesToDeveloperResponse Client::batchGrantRolesToDeveloperWithOptions(const BatchGrantRolesToDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "BatchGrantRolesToDeveloper"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/commands/batch-grant-roles")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BatchGrantRolesToDeveloperResponse>();
}

/**
 * @summary 批量给开发者授权
 *
 * @param request BatchGrantRolesToDeveloperRequest
 * @return BatchGrantRolesToDeveloperResponse
 */
BatchGrantRolesToDeveloperResponse Client::batchGrantRolesToDeveloper(const BatchGrantRolesToDeveloperRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return batchGrantRolesToDeveloperWithOptions(request, headers, runtime);
}

/**
 * @summary 校验用户角色
 *
 * @param request CheckDeveloperRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckDeveloperRoleResponse
 */
CheckDeveloperRoleResponse Client::checkDeveloperRoleWithOptions(const CheckDeveloperRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["accountId"] = request.getAccountId();
  }

  if (!!request.hasCompanyId()) {
    body["companyId"] = request.getCompanyId();
  }

  if (!!request.hasPlatform()) {
    body["platform"] = request.getPlatform();
  }

  if (!!request.hasRoleName()) {
    body["roleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CheckDeveloperRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/commands/check-role")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckDeveloperRoleResponse>();
}

/**
 * @summary 校验用户角色
 *
 * @param request CheckDeveloperRoleRequest
 * @return CheckDeveloperRoleResponse
 */
CheckDeveloperRoleResponse Client::checkDeveloperRole(const CheckDeveloperRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return checkDeveloperRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 完成二方包注册
 *
 * @param request CompleteRegisterLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteRegisterLibraryResponse
 */
CompleteRegisterLibraryResponse Client::completeRegisterLibraryWithOptions(const string &id, const CompleteRegisterLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDependIntegral()) {
    body["dependIntegral"] = request.getDependIntegral();
  }

  if (!!request.hasMarketId()) {
    body["marketId"] = request.getMarketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CompleteRegisterLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/complete-register")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteRegisterLibraryResponse>();
}

/**
 * @summary 完成二方包注册
 *
 * @param request CompleteRegisterLibraryRequest
 * @return CompleteRegisterLibraryResponse
 */
CompleteRegisterLibraryResponse Client::completeRegisterLibrary(const string &id, const CompleteRegisterLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return completeRegisterLibraryWithOptions(id, request, headers, runtime);
}

/**
 * @summary 完成pbc版本注册
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteRegistrationPbcVersionResponse
 */
CompleteRegistrationPbcVersionResponse Client::completeRegistrationPbcVersionWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompleteRegistrationPbcVersion"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/complete-register")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteRegistrationPbcVersionResponse>();
}

/**
 * @summary 完成pbc版本注册
 *
 * @return CompleteRegistrationPbcVersionResponse
 */
CompleteRegistrationPbcVersionResponse Client::completeRegistrationPbcVersion(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return completeRegistrationPbcVersionWithOptions(id, headers, runtime);
}

/**
 * @summary 更新服务信息
 *
 * @param request ContinueDeploymentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ContinueDeploymentResponse
 */
ContinueDeploymentResponse Client::continueDeploymentWithOptions(const ContinueDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ContinueDeployment"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/deployments/commands/continue")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ContinueDeploymentResponse>();
}

/**
 * @summary 更新服务信息
 *
 * @param request ContinueDeploymentRequest
 * @return ContinueDeploymentResponse
 */
ContinueDeploymentResponse Client::continueDeployment(const ContinueDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return continueDeploymentWithOptions(request, headers, runtime);
}

/**
 * @summary 关注资产
 *
 * @param request CreateAssetWatchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAssetWatchResponse
 */
CreateAssetWatchResponse Client::createAssetWatchWithOptions(const CreateAssetWatchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateAssetWatch"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/asset-watchs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAssetWatchResponse>();
}

/**
 * @summary 关注资产
 *
 * @param request CreateAssetWatchRequest
 * @return CreateAssetWatchResponse
 */
CreateAssetWatchResponse Client::createAssetWatch(const CreateAssetWatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAssetWatchWithOptions(request, headers, runtime);
}

/**
 * @summary 新增组件
 *
 * @param request CreateComponentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComponentResponse
 */
CreateComponentResponse Client::createComponentWithOptions(const CreateComponentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateComponent"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/components")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComponentResponse>();
}

/**
 * @summary 新增组件
 *
 * @param request CreateComponentRequest
 * @return CreateComponentResponse
 */
CreateComponentResponse Client::createComponent(const CreateComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createComponentWithOptions(request, headers, runtime);
}

/**
 * @summary 新增组件模板
 *
 * @param request CreateComponentTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateComponentTemplateResponse
 */
CreateComponentTemplateResponse Client::createComponentTemplateWithOptions(const CreateComponentTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateComponentTemplate"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/component-templates")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateComponentTemplateResponse>();
}

/**
 * @summary 新增组件模板
 *
 * @param request CreateComponentTemplateRequest
 * @return CreateComponentTemplateResponse
 */
CreateComponentTemplateResponse Client::createComponentTemplate(const CreateComponentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createComponentTemplateWithOptions(request, headers, runtime);
}

/**
 * @summary 注册开发者
 *
 * @param request CreateDeveloperRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeveloperResponse
 */
CreateDeveloperResponse Client::createDeveloperWithOptions(const CreateDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateDeveloper"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/developers")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeveloperResponse>();
}

/**
 * @summary 注册开发者
 *
 * @param request CreateDeveloperRequest
 * @return CreateDeveloperResponse
 */
CreateDeveloperResponse Client::createDeveloper(const CreateDeveloperRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDeveloperWithOptions(request, headers, runtime);
}

/**
 * @summary 创建公司
 *
 * @param request CreateEnterpriseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEnterpriseResponse
 */
CreateEnterpriseResponse Client::createEnterpriseWithOptions(const CreateEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEnterpriseResponse>();
}

/**
 * @summary 创建公司
 *
 * @param request CreateEnterpriseRequest
 * @return CreateEnterpriseResponse
 */
CreateEnterpriseResponse Client::createEnterprise(const CreateEnterpriseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEnterpriseWithOptions(request, headers, runtime);
}

/**
 * @summary 申请代码Fork(创建代码Fork的审批流程)
 *
 * @param request CreateForkReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateForkReviewResponse
 */
CreateForkReviewResponse Client::createForkReviewWithOptions(const CreateForkReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateForkReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/fork-reviews")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateForkReviewResponse>();
}

/**
 * @summary 申请代码Fork(创建代码Fork的审批流程)
 *
 * @param request CreateForkReviewRequest
 * @return CreateForkReviewResponse
 */
CreateForkReviewResponse Client::createForkReview(const CreateForkReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createForkReviewWithOptions(request, headers, runtime);
}

/**
 * @summary 创建服务灰度分组
 *
 * @param request CreateGreyPdpServiceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateGreyPdpServiceGroupResponse
 */
CreateGreyPdpServiceGroupResponse Client::createGreyPdpServiceGroupWithOptions(const CreateGreyPdpServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateGreyPdpServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/groups/grey")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateGreyPdpServiceGroupResponse>();
}

/**
 * @summary 创建服务灰度分组
 *
 * @param request CreateGreyPdpServiceGroupRequest
 * @return CreateGreyPdpServiceGroupResponse
 */
CreateGreyPdpServiceGroupResponse Client::createGreyPdpServiceGroup(const CreateGreyPdpServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createGreyPdpServiceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建二方包
 *
 * @param request CreateLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLibraryResponse
 */
CreateLibraryResponse Client::createLibraryWithOptions(const CreateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLibraryResponse>();
}

/**
 * @summary 创建二方包
 *
 * @param request CreateLibraryRequest
 * @return CreateLibraryResponse
 */
CreateLibraryResponse Client::createLibrary(const CreateLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLibraryWithOptions(request, headers, runtime);
}

/**
 * @summary 创建二方包使用说明文档
 *
 * @param request CreateLibraryInstructionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLibraryInstructionResponse
 */
CreateLibraryInstructionResponse Client::createLibraryInstructionWithOptions(const string &libraryId, const CreateLibraryInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCompanyId()) {
    body["companyId"] = request.getCompanyId();
  }

  if (!!request.hasDocument()) {
    body["document"] = request.getDocument();
  }

  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasLibraryId()) {
    body["libraryId"] = request.getLibraryId();
  }

  if (!!request.hasMarketId()) {
    body["marketId"] = request.getMarketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateLibraryInstruction"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/instructions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLibraryInstructionResponse>();
}

/**
 * @summary 创建二方包使用说明文档
 *
 * @param request CreateLibraryInstructionRequest
 * @return CreateLibraryInstructionResponse
 */
CreateLibraryInstructionResponse Client::createLibraryInstruction(const string &libraryId, const CreateLibraryInstructionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLibraryInstructionWithOptions(libraryId, request, headers, runtime);
}

/**
 * @summary 提交审核
 *
 * @param request CreateLibraryReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLibraryReviewResponse
 */
CreateLibraryReviewResponse Client::createLibraryReviewWithOptions(const CreateLibraryReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateLibraryReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/library-reviews")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLibraryReviewResponse>();
}

/**
 * @summary 提交审核
 *
 * @param request CreateLibraryReviewRequest
 * @return CreateLibraryReviewResponse
 */
CreateLibraryReviewResponse Client::createLibraryReview(const CreateLibraryReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLibraryReviewWithOptions(request, headers, runtime);
}

/**
 * @summary 创建二方包规格
 *
 * @param request CreateLibrarySchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLibrarySchemaResponse
 */
CreateLibrarySchemaResponse Client::createLibrarySchemaWithOptions(const CreateLibrarySchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateLibrarySchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/schemas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLibrarySchemaResponse>();
}

/**
 * @summary 创建二方包规格
 *
 * @param request CreateLibrarySchemaRequest
 * @return CreateLibrarySchemaResponse
 */
CreateLibrarySchemaResponse Client::createLibrarySchema(const CreateLibrarySchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createLibrarySchemaWithOptions(request, headers, runtime);
}

/**
 * @summary 创建应用报警任务
 *
 * @param request CreateMonitorArmsAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorArmsAlertResponse
 */
CreateMonitorArmsAlertResponse Client::createMonitorArmsAlertWithOptions(const CreateMonitorArmsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorArmsAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/createMonitorArmsAlert")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorArmsAlertResponse>();
}

/**
 * @summary 创建应用报警任务
 *
 * @param request CreateMonitorArmsAlertRequest
 * @return CreateMonitorArmsAlertResponse
 */
CreateMonitorArmsAlertResponse Client::createMonitorArmsAlert(const CreateMonitorArmsAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorArmsAlertWithOptions(request, headers, runtime);
}

/**
 * @summary 批量新增应用报警任务
 *
 * @param request CreateMonitorArmsAlertsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorArmsAlertsResponse
 */
CreateMonitorArmsAlertsResponse Client::createMonitorArmsAlertsWithOptions(const CreateMonitorArmsAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorArmsAlerts"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/createMonitorArmsAlerts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorArmsAlertsResponse>();
}

/**
 * @summary 批量新增应用报警任务
 *
 * @param request CreateMonitorArmsAlertsRequest
 * @return CreateMonitorArmsAlertsResponse
 */
CreateMonitorArmsAlertsResponse Client::createMonitorArmsAlerts(const CreateMonitorArmsAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorArmsAlertsWithOptions(request, headers, runtime);
}

/**
 * @summary 创建联系人
 *
 * @param request CreateMonitorContactRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorContactResponse
 */
CreateMonitorContactResponse Client::createMonitorContactWithOptions(const CreateMonitorContactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorContact"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/contact")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorContactResponse>();
}

/**
 * @summary 创建联系人
 *
 * @param request CreateMonitorContactRequest
 * @return CreateMonitorContactResponse
 */
CreateMonitorContactResponse Client::createMonitorContact(const CreateMonitorContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorContactWithOptions(request, headers, runtime);
}

/**
 * @summary 创建联系人组
 *
 * @param request CreateMonitorContactGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorContactGroupResponse
 */
CreateMonitorContactGroupResponse Client::createMonitorContactGroupWithOptions(const CreateMonitorContactGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorContactGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorContactGroupResponse>();
}

/**
 * @summary 创建联系人组
 *
 * @param request CreateMonitorContactGroupRequest
 * @return CreateMonitorContactGroupResponse
 */
CreateMonitorContactGroupResponse Client::createMonitorContactGroup(const CreateMonitorContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorContactGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 加入联系人
 *
 * @param request CreateMonitorGroupMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorGroupMemberResponse
 */
CreateMonitorGroupMemberResponse Client::createMonitorGroupMemberWithOptions(const string &groupId, const CreateMonitorGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorGroupMember"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/group/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/commands/create-member")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorGroupMemberResponse>();
}

/**
 * @summary 加入联系人
 *
 * @param request CreateMonitorGroupMemberRequest
 * @return CreateMonitorGroupMemberResponse
 */
CreateMonitorGroupMemberResponse Client::createMonitorGroupMember(const string &groupId, const CreateMonitorGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorGroupMemberWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 创建MQ报警任务
 *
 * @param request CreateMonitorMqAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorMqAlertResponse
 */
CreateMonitorMqAlertResponse Client::createMonitorMqAlertWithOptions(const CreateMonitorMqAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorMqAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/createMonitorMqAlert")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorMqAlertResponse>();
}

/**
 * @summary 创建MQ报警任务
 *
 * @param request CreateMonitorMqAlertRequest
 * @return CreateMonitorMqAlertResponse
 */
CreateMonitorMqAlertResponse Client::createMonitorMqAlert(const CreateMonitorMqAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorMqAlertWithOptions(request, headers, runtime);
}

/**
 * @summary 批量新增MQ报警任务
 *
 * @param request CreateMonitorMqAlertsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorMqAlertsResponse
 */
CreateMonitorMqAlertsResponse Client::createMonitorMqAlertsWithOptions(const CreateMonitorMqAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorMqAlerts"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/createMonitorMqAlerts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorMqAlertsResponse>();
}

/**
 * @summary 批量新增MQ报警任务
 *
 * @param request CreateMonitorMqAlertsRequest
 * @return CreateMonitorMqAlertsResponse
 */
CreateMonitorMqAlertsResponse Client::createMonitorMqAlerts(const CreateMonitorMqAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorMqAlertsWithOptions(request, headers, runtime);
}

/**
 * @summary 创建日志报警任务
 *
 * @param request CreateMonitorSlsAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorSlsAlertResponse
 */
CreateMonitorSlsAlertResponse Client::createMonitorSlsAlertWithOptions(const CreateMonitorSlsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorSlsAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/createMonitorSlsAlert")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorSlsAlertResponse>();
}

/**
 * @summary 创建日志报警任务
 *
 * @param request CreateMonitorSlsAlertRequest
 * @return CreateMonitorSlsAlertResponse
 */
CreateMonitorSlsAlertResponse Client::createMonitorSlsAlert(const CreateMonitorSlsAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorSlsAlertWithOptions(request, headers, runtime);
}

/**
 * @summary 批量新增建报警任务
 *
 * @param request CreateMonitorSlsAlertsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorSlsAlertsResponse
 */
CreateMonitorSlsAlertsResponse Client::createMonitorSlsAlertsWithOptions(const CreateMonitorSlsAlertsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorSlsAlerts"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/createMonitorSlsAlerts")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorSlsAlertsResponse>();
}

/**
 * @summary 批量新增建报警任务
 *
 * @param request CreateMonitorSlsAlertsRequest
 * @return CreateMonitorSlsAlertsResponse
 */
CreateMonitorSlsAlertsResponse Client::createMonitorSlsAlerts(const CreateMonitorSlsAlertsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorSlsAlertsWithOptions(request, headers, runtime);
}

/**
 * @summary 创建webhook
 *
 * @param request CreateMonitorWebhookRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMonitorWebhookResponse
 */
CreateMonitorWebhookResponse Client::createMonitorWebhookWithOptions(const CreateMonitorWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMonitorWebhook"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/webhook")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMonitorWebhookResponse>();
}

/**
 * @summary 创建webhook
 *
 * @param request CreateMonitorWebhookRequest
 * @return CreateMonitorWebhookResponse
 */
CreateMonitorWebhookResponse Client::createMonitorWebhook(const CreateMonitorWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMonitorWebhookWithOptions(request, headers, runtime);
}

/**
 * @summary 创建Group
 *
 * @param request CreateMqGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMqGroupResponse
 */
CreateMqGroupResponse Client::createMqGroupWithOptions(const CreateMqGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMqGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/group")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMqGroupResponse>();
}

/**
 * @summary 创建Group
 *
 * @param request CreateMqGroupRequest
 * @return CreateMqGroupResponse
 */
CreateMqGroupResponse Client::createMqGroup(const CreateMqGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMqGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 创建Topic
 *
 * @param request CreateMqTopicRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMqTopicResponse
 */
CreateMqTopicResponse Client::createMqTopicWithOptions(const CreateMqTopicRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateMqTopic"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/topic")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMqTopicResponse>();
}

/**
 * @summary 创建Topic
 *
 * @param request CreateMqTopicRequest
 * @return CreateMqTopicResponse
 */
CreateMqTopicResponse Client::createMqTopic(const CreateMqTopicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMqTopicWithOptions(request, headers, runtime);
}

/**
 * @summary 创建PBC
 *
 * @param request CreatePbcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcResponse
 */
CreatePbcResponse Client::createPbcWithOptions(const CreatePbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcResponse>();
}

/**
 * @summary 创建PBC
 *
 * @param request CreatePbcRequest
 * @return CreatePbcResponse
 */
CreatePbcResponse Client::createPbc(const CreatePbcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcWithOptions(request, headers, runtime);
}

/**
 * @summary 创建PBC的Api规格
 *
 * @param request CreatePbcApiSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcApiSchemaResponse
 */
CreatePbcApiSchemaResponse Client::createPbcApiSchemaWithOptions(const CreatePbcApiSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbcApiSchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/api-schemas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcApiSchemaResponse>();
}

/**
 * @summary 创建PBC的Api规格
 *
 * @param request CreatePbcApiSchemaRequest
 * @return CreatePbcApiSchemaResponse
 */
CreatePbcApiSchemaResponse Client::createPbcApiSchema(const CreatePbcApiSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcApiSchemaWithOptions(request, headers, runtime);
}

/**
 * @summary 创建PBC使用说明文档
 *
 * @param request CreatePbcInstructionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcInstructionResponse
 */
CreatePbcInstructionResponse Client::createPbcInstructionWithOptions(const CreatePbcInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbcInstruction"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/instructions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcInstructionResponse>();
}

/**
 * @summary 创建PBC使用说明文档
 *
 * @param request CreatePbcInstructionRequest
 * @return CreatePbcInstructionResponse
 */
CreatePbcInstructionResponse Client::createPbcInstruction(const CreatePbcInstructionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcInstructionWithOptions(request, headers, runtime);
}

/**
 * @summary 创建服务调用记录
 *
 * @param request CreatePbcInvokeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcInvokeResponse
 */
CreatePbcInvokeResponse Client::createPbcInvokeWithOptions(const CreatePbcInvokeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbcInvoke"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-invokes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcInvokeResponse>();
}

/**
 * @summary 创建服务调用记录
 *
 * @param request CreatePbcInvokeRequest
 * @return CreatePbcInvokeResponse
 */
CreatePbcInvokeResponse Client::createPbcInvoke(const CreatePbcInvokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcInvokeWithOptions(request, headers, runtime);
}

/**
 * @summary 创建PBC服务调用审核
 *
 * @param request CreatePbcInvokeReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcInvokeReviewResponse
 */
CreatePbcInvokeReviewResponse Client::createPbcInvokeReviewWithOptions(const CreatePbcInvokeReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbcInvokeReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-invoke-reviews")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcInvokeReviewResponse>();
}

/**
 * @summary 创建PBC服务调用审核
 *
 * @param request CreatePbcInvokeReviewRequest
 * @return CreatePbcInvokeReviewResponse
 */
CreatePbcInvokeReviewResponse Client::createPbcInvokeReview(const CreatePbcInvokeReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcInvokeReviewWithOptions(request, headers, runtime);
}

/**
 * @summary 提交审核
 *
 * @param request CreatePbcReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcReviewResponse
 */
CreatePbcReviewResponse Client::createPbcReviewWithOptions(const CreatePbcReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbcReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-reviews")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcReviewResponse>();
}

/**
 * @summary 提交审核
 *
 * @param request CreatePbcReviewRequest
 * @return CreatePbcReviewResponse
 */
CreatePbcReviewResponse Client::createPbcReview(const CreatePbcReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcReviewWithOptions(request, headers, runtime);
}

/**
 * @summary 创建PBC规格
 *
 * @param request CreatePbcSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcSchemaResponse
 */
CreatePbcSchemaResponse Client::createPbcSchemaWithOptions(const CreatePbcSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbcSchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/schemas")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcSchemaResponse>();
}

/**
 * @summary 创建PBC规格
 *
 * @param request CreatePbcSchemaRequest
 * @return CreatePbcSchemaResponse
 */
CreatePbcSchemaResponse Client::createPbcSchema(const CreatePbcSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcSchemaWithOptions(request, headers, runtime);
}

/**
 * @summary 创建PBC版本
 *
 * @param request CreatePbcVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePbcVersionResponse
 */
CreatePbcVersionResponse Client::createPbcVersionWithOptions(const CreatePbcVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePbcVersion"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePbcVersionResponse>();
}

/**
 * @summary 创建PBC版本
 *
 * @param request CreatePbcVersionRequest
 * @return CreatePbcVersionResponse
 */
CreatePbcVersionResponse Client::createPbcVersion(const CreatePbcVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPbcVersionWithOptions(request, headers, runtime);
}

/**
 * @summary 创建配置
 *
 * @param request CreatePdpConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdpConfigResponse
 */
CreatePdpConfigResponse Client::createPdpConfigWithOptions(const CreatePdpConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePdpConfig"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/configs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdpConfigResponse>();
}

/**
 * @summary 创建配置
 *
 * @param request CreatePdpConfigRequest
 * @return CreatePdpConfigResponse
 */
CreatePdpConfigResponse Client::createPdpConfig(const CreatePdpConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPdpConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 创建泳道
 *
 * @param request CreatePdpLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdpLaneResponse
 */
CreatePdpLaneResponse Client::createPdpLaneWithOptions(const CreatePdpLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePdpLane"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdpLaneResponse>();
}

/**
 * @summary 创建泳道
 *
 * @param request CreatePdpLaneRequest
 * @return CreatePdpLaneResponse
 */
CreatePdpLaneResponse Client::createPdpLane(const CreatePdpLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPdpLaneWithOptions(request, headers, runtime);
}

/**
 * @summary 创建PdpPbc
 *
 * @param request CreatePdpPbcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdpPbcResponse
 */
CreatePdpPbcResponse Client::createPdpPbcWithOptions(const CreatePdpPbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePdpPbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/pbcs")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdpPbcResponse>();
}

/**
 * @summary 创建PdpPbc
 *
 * @param request CreatePdpPbcRequest
 * @return CreatePdpPbcResponse
 */
CreatePdpPbcResponse Client::createPdpPbc(const CreatePdpPbcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPdpPbcWithOptions(request, headers, runtime);
}

/**
 * @summary 创建服务
 *
 * @param request CreatePdpServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdpServiceResponse
 */
CreatePdpServiceResponse Client::createPdpServiceWithOptions(const CreatePdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePdpService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdpServiceResponse>();
}

/**
 * @summary 创建服务
 *
 * @param request CreatePdpServiceRequest
 * @return CreatePdpServiceResponse
 */
CreatePdpServiceResponse Client::createPdpService(const CreatePdpServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPdpServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 创建服务分组
 *
 * @param request CreatePdpServiceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePdpServiceGroupResponse
 */
CreatePdpServiceGroupResponse Client::createPdpServiceGroupWithOptions(const CreatePdpServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePdpServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/groups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePdpServiceGroupResponse>();
}

/**
 * @summary 创建服务分组
 *
 * @param request CreatePdpServiceGroupRequest
 * @return CreatePdpServiceGroupResponse
 */
CreatePdpServiceGroupResponse Client::createPdpServiceGroup(const CreatePdpServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPdpServiceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 给角色添加权限
 *
 * @param request CreatePrivilegeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivilegeResponse
 */
CreatePrivilegeResponse Client::createPrivilegeWithOptions(const string &roleId, const CreatePrivilegeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePrivilege"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/" , Darabonba::Encode::Encoder::percentEncode(roleId) , "/privileges")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrivilegeResponse>();
}

/**
 * @summary 给角色添加权限
 *
 * @param request CreatePrivilegeRequest
 * @return CreatePrivilegeResponse
 */
CreatePrivilegeResponse Client::createPrivilege(const string &roleId, const CreatePrivilegeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPrivilegeWithOptions(roleId, request, headers, runtime);
}

/**
 * @summary 给角色添加权限
 *
 * @param request CreatePrivilegePopRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrivilegePopResponse
 */
CreatePrivilegePopResponse Client::createPrivilegePopWithOptions(const string &roleId, const CreatePrivilegePopRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreatePrivilegePop"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/" , Darabonba::Encode::Encoder::percentEncode(roleId) , "/privileges/pop")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrivilegePopResponse>();
}

/**
 * @summary 给角色添加权限
 *
 * @param request CreatePrivilegePopRequest
 * @return CreatePrivilegePopResponse
 */
CreatePrivilegePopResponse Client::createPrivilegePop(const string &roleId, const CreatePrivilegePopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPrivilegePopWithOptions(roleId, request, headers, runtime);
}

/**
 * @summary 创建产品
 *
 * @param request CreateProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProductResponse
 */
CreateProductResponse Client::createProductWithOptions(const CreateProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateProduct"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/products")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
  map<string, string> headers = {};
  return createProductWithOptions(request, headers, runtime);
}

/**
 * @summary 创建代码库Fork记录
 *
 * @param request CreateRepoForkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRepoForkResponse
 */
CreateRepoForkResponse Client::createRepoForkWithOptions(const CreateRepoForkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateRepoFork"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/repo-forks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRepoForkResponse>();
}

/**
 * @summary 创建代码库Fork记录
 *
 * @param request CreateRepoForkRequest
 * @return CreateRepoForkResponse
 */
CreateRepoForkResponse Client::createRepoFork(const CreateRepoForkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRepoForkWithOptions(request, headers, runtime);
}

/**
 * @summary 新增资源
 *
 * @param request CreateResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResourceWithOptions(const CreateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateResource"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/resources")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateResourceResponse>();
}

/**
 * @summary 新增资源
 *
 * @param request CreateResourceRequest
 * @return CreateResourceResponse
 */
CreateResourceResponse Client::createResource(const CreateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createResourceWithOptions(request, headers, runtime);
}

/**
 * @summary 生成角色
 *
 * @param request CreateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRoleWithOptions(const CreateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRoleResponse>();
}

/**
 * @summary 生成角色
 *
 * @param request CreateRoleRequest
 * @return CreateRoleResponse
 */
CreateRoleResponse Client::createRole(const CreateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createRoleWithOptions(request, headers, runtime);
}

/**
 * @summary 创建入驻申请
 *
 * @param request CreateSettledRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSettledResponse
 */
CreateSettledResponse Client::createSettledWithOptions(const CreateSettledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateSettled"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/settleds")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSettledResponse>();
}

/**
 * @summary 创建入驻申请
 *
 * @param request CreateSettledRequest
 * @return CreateSettledResponse
 */
CreateSettledResponse Client::createSettled(const CreateSettledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSettledWithOptions(request, headers, runtime);
}

/**
 * @summary 删除组件
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComponentResponse
 */
DeleteComponentResponse Client::deleteComponentWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComponent"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/components/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComponentResponse>();
}

/**
 * @summary 删除组件
 *
 * @return DeleteComponentResponse
 */
DeleteComponentResponse Client::deleteComponent(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteComponentWithOptions(id, headers, runtime);
}

/**
 * @summary 删除组件模板
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteComponentTemplateResponse
 */
DeleteComponentTemplateResponse Client::deleteComponentTemplateWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteComponentTemplate"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/component-templates/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteComponentTemplateResponse>();
}

/**
 * @summary 删除组件模板
 *
 * @return DeleteComponentTemplateResponse
 */
DeleteComponentTemplateResponse Client::deleteComponentTemplate(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteComponentTemplateWithOptions(id, headers, runtime);
}

/**
 * @summary 删除开发者
 *
 * @param request DeleteDeveloperRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeveloperResponse
 */
DeleteDeveloperResponse Client::deleteDeveloperWithOptions(const string &accountId, const DeleteDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeveloper"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/developers/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeveloperResponse>();
}

/**
 * @summary 删除开发者
 *
 * @param request DeleteDeveloperRequest
 * @return DeleteDeveloperResponse
 */
DeleteDeveloperResponse Client::deleteDeveloper(const string &accountId, const DeleteDeveloperRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDeveloperWithOptions(accountId, request, headers, runtime);
}

/**
 * @summary 删除公司
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEnterpriseResponse
 */
DeleteEnterpriseResponse Client::deleteEnterpriseWithOptions(const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises/" , Darabonba::Encode::Encoder::percentEncode(enterpriseId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEnterpriseResponse>();
}

/**
 * @summary 删除公司
 *
 * @return DeleteEnterpriseResponse
 */
DeleteEnterpriseResponse Client::deleteEnterprise(const string &enterpriseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEnterpriseWithOptions(enterpriseId, headers, runtime);
}

/**
 * @summary 删除二方包
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLibraryResponse
 */
DeleteLibraryResponse Client::deleteLibraryWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLibraryResponse>();
}

/**
 * @summary 删除二方包
 *
 * @return DeleteLibraryResponse
 */
DeleteLibraryResponse Client::deleteLibrary(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLibraryWithOptions(id, headers, runtime);
}

/**
 * @summary 删除二方包使用说明文档
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLibraryInstructionResponse
 */
DeleteLibraryInstructionResponse Client::deleteLibraryInstructionWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLibraryInstruction"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/instructions")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLibraryInstructionResponse>();
}

/**
 * @summary 删除二方包使用说明文档
 *
 * @return DeleteLibraryInstructionResponse
 */
DeleteLibraryInstructionResponse Client::deleteLibraryInstruction(const string &libraryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLibraryInstructionWithOptions(libraryId, headers, runtime);
}

/**
 * @summary 删除二方包规格
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLibrarySchemaResponse
 */
DeleteLibrarySchemaResponse Client::deleteLibrarySchemaWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteLibrarySchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/schemas")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLibrarySchemaResponse>();
}

/**
 * @summary 删除二方包规格
 *
 * @return DeleteLibrarySchemaResponse
 */
DeleteLibrarySchemaResponse Client::deleteLibrarySchema(const string &libraryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteLibrarySchemaWithOptions(libraryId, headers, runtime);
}

/**
 * @summary 删除报警任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorAlertResponse
 */
DeleteMonitorAlertResponse Client::deleteMonitorAlertWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorAlertResponse>();
}

/**
 * @summary 删除报警任务
 *
 * @return DeleteMonitorAlertResponse
 */
DeleteMonitorAlertResponse Client::deleteMonitorAlert(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMonitorAlertWithOptions(id, headers, runtime);
}

/**
 * @summary 删除联系人
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorContactResponse
 */
DeleteMonitorContactResponse Client::deleteMonitorContactWithOptions(const string &contactId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorContact"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/contact/" , Darabonba::Encode::Encoder::percentEncode(contactId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorContactResponse>();
}

/**
 * @summary 删除联系人
 *
 * @return DeleteMonitorContactResponse
 */
DeleteMonitorContactResponse Client::deleteMonitorContact(const string &contactId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMonitorContactWithOptions(contactId, headers, runtime);
}

/**
 * @summary 删除联系人组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorContactGroupResponse
 */
DeleteMonitorContactGroupResponse Client::deleteMonitorContactGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorContactGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/group/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorContactGroupResponse>();
}

/**
 * @summary 删除联系人组
 *
 * @return DeleteMonitorContactGroupResponse
 */
DeleteMonitorContactGroupResponse Client::deleteMonitorContactGroup(const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMonitorContactGroupWithOptions(groupId, headers, runtime);
}

/**
 * @summary 从联系人组中删除联系人
 *
 * @param request DeleteMonitorGroupMemberRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorGroupMemberResponse
 */
DeleteMonitorGroupMemberResponse Client::deleteMonitorGroupMemberWithOptions(const string &groupId, const DeleteMonitorGroupMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactIds()) {
    query["contactIds"] = request.getContactIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorGroupMember"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/group/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/commands/delete-member")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorGroupMemberResponse>();
}

/**
 * @summary 从联系人组中删除联系人
 *
 * @param request DeleteMonitorGroupMemberRequest
 * @return DeleteMonitorGroupMemberResponse
 */
DeleteMonitorGroupMemberResponse Client::deleteMonitorGroupMember(const string &groupId, const DeleteMonitorGroupMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMonitorGroupMemberWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 删除webhook
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMonitorWebhookResponse
 */
DeleteMonitorWebhookResponse Client::deleteMonitorWebhookWithOptions(const string &webhookId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMonitorWebhook"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/webhook/" , Darabonba::Encode::Encoder::percentEncode(webhookId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMonitorWebhookResponse>();
}

/**
 * @summary 删除webhook
 *
 * @return DeleteMonitorWebhookResponse
 */
DeleteMonitorWebhookResponse Client::deleteMonitorWebhook(const string &webhookId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMonitorWebhookWithOptions(webhookId, headers, runtime);
}

/**
 * @summary 删除MQ Group
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMqGroupResponse
 */
DeleteMqGroupResponse Client::deleteMqGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMqGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/group/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMqGroupResponse>();
}

/**
 * @summary 删除MQ Group
 *
 * @return DeleteMqGroupResponse
 */
DeleteMqGroupResponse Client::deleteMqGroup(const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMqGroupWithOptions(groupId, headers, runtime);
}

/**
 * @summary 删除Topic
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMqTopicResponse
 */
DeleteMqTopicResponse Client::deleteMqTopicWithOptions(const string &topicId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMqTopic"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/topic/" , Darabonba::Encode::Encoder::percentEncode(topicId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMqTopicResponse>();
}

/**
 * @summary 删除Topic
 *
 * @return DeleteMqTopicResponse
 */
DeleteMqTopicResponse Client::deleteMqTopic(const string &topicId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMqTopicWithOptions(topicId, headers, runtime);
}

/**
 * @summary 取消服务调用服务
 *
 * @param request DeletePbcInvokeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePbcInvokeResponse
 */
DeletePbcInvokeResponse Client::deletePbcInvokeWithOptions(const DeletePbcInvokeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePbcInvoke"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-invokes")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePbcInvokeResponse>();
}

/**
 * @summary 取消服务调用服务
 *
 * @param request DeletePbcInvokeRequest
 * @return DeletePbcInvokeResponse
 */
DeletePbcInvokeResponse Client::deletePbcInvoke(const DeletePbcInvokeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePbcInvokeWithOptions(request, headers, runtime);
}

/**
 * @summary 删除服务配置
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePdpConfigResponse
 */
DeletePdpConfigResponse Client::deletePdpConfigWithOptions(const string &configId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePdpConfig"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/configs/" , Darabonba::Encode::Encoder::percentEncode(configId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePdpConfigResponse>();
}

/**
 * @summary 删除服务配置
 *
 * @return DeletePdpConfigResponse
 */
DeletePdpConfigResponse Client::deletePdpConfig(const string &configId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePdpConfigWithOptions(configId, headers, runtime);
}

/**
 * @summary 删除泳道
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePdpLaneResponse
 */
DeletePdpLaneResponse Client::deletePdpLaneWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePdpLane"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePdpLaneResponse>();
}

/**
 * @summary 删除泳道
 *
 * @return DeletePdpLaneResponse
 */
DeletePdpLaneResponse Client::deletePdpLane(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePdpLaneWithOptions(id, headers, runtime);
}

/**
 * @summary 删除指定泳道入口微服务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePdpLaneInletServiceResponse
 */
DeletePdpLaneInletServiceResponse Client::deletePdpLaneInletServiceWithOptions(const string &laneId, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePdpLaneInletService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/" , Darabonba::Encode::Encoder::percentEncode(laneId) , "/commands/deleted-inlet-service/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePdpLaneInletServiceResponse>();
}

/**
 * @summary 删除指定泳道入口微服务
 *
 * @return DeletePdpLaneInletServiceResponse
 */
DeletePdpLaneInletServiceResponse Client::deletePdpLaneInletService(const string &laneId, const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePdpLaneInletServiceWithOptions(laneId, serviceId, headers, runtime);
}

/**
 * @summary 删除所有泳道中含有指定的微服务组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePdpLaneServiceGroupResponse
 */
DeletePdpLaneServiceGroupResponse Client::deletePdpLaneServiceGroupWithOptions(const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePdpLaneServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/commands/deleted-service-group/" , Darabonba::Encode::Encoder::percentEncode(serviceGroupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePdpLaneServiceGroupResponse>();
}

/**
 * @summary 删除所有泳道中含有指定的微服务组
 *
 * @return DeletePdpLaneServiceGroupResponse
 */
DeletePdpLaneServiceGroupResponse Client::deletePdpLaneServiceGroup(const string &serviceGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePdpLaneServiceGroupWithOptions(serviceGroupId, headers, runtime);
}

/**
 * @summary 删除PdpPbc
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePdpPbcResponse
 */
DeletePdpPbcResponse Client::deletePdpPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePdpPbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePdpPbcResponse>();
}

/**
 * @summary 删除PdpPbc
 *
 * @return DeletePdpPbcResponse
 */
DeletePdpPbcResponse Client::deletePdpPbc(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePdpPbcWithOptions(id, headers, runtime);
}

/**
 * @summary 删除服务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePdpServiceResponse
 */
DeletePdpServiceResponse Client::deletePdpServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePdpService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePdpServiceResponse>();
}

/**
 * @summary 删除服务
 *
 * @return DeletePdpServiceResponse
 */
DeletePdpServiceResponse Client::deletePdpService(const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePdpServiceWithOptions(serviceId, headers, runtime);
}

/**
 * @summary 删除服务分组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePdpServiceGroupResponse
 */
DeletePdpServiceGroupResponse Client::deletePdpServiceGroupWithOptions(const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePdpServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/groups/" , Darabonba::Encode::Encoder::percentEncode(serviceGroupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePdpServiceGroupResponse>();
}

/**
 * @summary 删除服务分组
 *
 * @return DeletePdpServiceGroupResponse
 */
DeletePdpServiceGroupResponse Client::deletePdpServiceGroup(const string &serviceGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePdpServiceGroupWithOptions(serviceGroupId, headers, runtime);
}

/**
 * @summary 删除权限
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrivilegeResponse
 */
DeletePrivilegeResponse Client::deletePrivilegeWithOptions(const string &privilegeId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrivilege"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/privileges/" , Darabonba::Encode::Encoder::percentEncode(privilegeId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrivilegeResponse>();
}

/**
 * @summary 删除权限
 *
 * @return DeletePrivilegeResponse
 */
DeletePrivilegeResponse Client::deletePrivilege(const string &privilegeId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePrivilegeWithOptions(privilegeId, headers, runtime);
}

/**
 * @summary 查询删除产品
 *
 * @param request DeleteProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProductWithOptions(const string &id, const DeleteProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteProduct"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/products/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteProductResponse>();
}

/**
 * @summary 查询删除产品
 *
 * @param request DeleteProductRequest
 * @return DeleteProductResponse
 */
DeleteProductResponse Client::deleteProduct(const string &id, const DeleteProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteProductWithOptions(id, request, headers, runtime);
}

/**
 * @summary 删除指定资源
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResourceWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteResource"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteResourceResponse>();
}

/**
 * @summary 删除指定资源
 *
 * @return DeleteResourceResponse
 */
DeleteResourceResponse Client::deleteResource(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteResourceWithOptions(id, headers, runtime);
}

/**
 * @summary 删除角色
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRoleWithOptions(const string &roleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/" , Darabonba::Encode::Encoder::percentEncode(roleId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRoleResponse>();
}

/**
 * @summary 删除角色
 *
 * @return DeleteRoleResponse
 */
DeleteRoleResponse Client::deleteRole(const string &roleId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteRoleWithOptions(roleId, headers, runtime);
}

/**
 * @summary 删除入驻申请记录
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSettledResponse
 */
DeleteSettledResponse Client::deleteSettledWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSettled"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/settleds/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSettledResponse>();
}

/**
 * @summary 删除入驻申请记录
 *
 * @return DeleteSettledResponse
 */
DeleteSettledResponse Client::deleteSettled(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSettledWithOptions(id, headers, runtime);
}

/**
 * @summary 依赖二方包
 *
 * @param request DependLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DependLibraryResponse
 */
DependLibraryResponse Client::dependLibraryWithOptions(const string &id, const DependLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DependLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/dependency")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DependLibraryResponse>();
}

/**
 * @summary 依赖二方包
 *
 * @param request DependLibraryRequest
 * @return DependLibraryResponse
 */
DependLibraryResponse Client::dependLibrary(const string &id, const DependLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return dependLibraryWithOptions(id, request, headers, runtime);
}

/**
 * @summary 审批审核
 *
 * @param request FeedbackLibraryReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FeedbackLibraryReviewResponse
 */
FeedbackLibraryReviewResponse Client::feedbackLibraryReviewWithOptions(const string &reviewId, const FeedbackLibraryReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasApprove()) {
    body["approve"] = request.getApprove();
  }

  if (!!request.hasFeedback()) {
    body["feedback"] = request.getFeedback();
  }

  if (!!request.hasReviewId()) {
    body["reviewId"] = request.getReviewId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "FeedbackLibraryReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/library-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId) , "/commands/feedback")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FeedbackLibraryReviewResponse>();
}

/**
 * @summary 审批审核
 *
 * @param request FeedbackLibraryReviewRequest
 * @return FeedbackLibraryReviewResponse
 */
FeedbackLibraryReviewResponse Client::feedbackLibraryReview(const string &reviewId, const FeedbackLibraryReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return feedbackLibraryReviewWithOptions(reviewId, request, headers, runtime);
}

/**
 * @summary 提交审核
 *
 * @param request FeedbackPbcReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return FeedbackPbcReviewResponse
 */
FeedbackPbcReviewResponse Client::feedbackPbcReviewWithOptions(const string &reviewId, const FeedbackPbcReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "FeedbackPbcReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId) , "/commands/feedback")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<FeedbackPbcReviewResponse>();
}

/**
 * @summary 提交审核
 *
 * @param request FeedbackPbcReviewRequest
 * @return FeedbackPbcReviewResponse
 */
FeedbackPbcReviewResponse Client::feedbackPbcReview(const string &reviewId, const FeedbackPbcReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return feedbackPbcReviewWithOptions(reviewId, request, headers, runtime);
}

/**
 * @summary 查询Buc公司
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBucEnterpriseResponse
 */
GetBucEnterpriseResponse Client::getBucEnterpriseWithOptions(const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBucEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/bucs/enterprises/" , Darabonba::Encode::Encoder::percentEncode(enterpriseId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBucEnterpriseResponse>();
}

/**
 * @summary 查询Buc公司
 *
 * @return GetBucEnterpriseResponse
 */
GetBucEnterpriseResponse Client::getBucEnterprise(const string &enterpriseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getBucEnterpriseWithOptions(enterpriseId, headers, runtime);
}

/**
 * @summary 查询组件
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComponentResponse
 */
GetComponentResponse Client::getComponentWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComponent"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/components/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComponentResponse>();
}

/**
 * @summary 查询组件
 *
 * @return GetComponentResponse
 */
GetComponentResponse Client::getComponent(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getComponentWithOptions(id, headers, runtime);
}

/**
 * @summary 查询组件模板
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetComponentTemplateResponse
 */
GetComponentTemplateResponse Client::getComponentTemplateWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetComponentTemplate"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/component-templates/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetComponentTemplateResponse>();
}

/**
 * @summary 查询组件模板
 *
 * @return GetComponentTemplateResponse
 */
GetComponentTemplateResponse Client::getComponentTemplate(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getComponentTemplateWithOptions(id, headers, runtime);
}

/**
 * @summary 查询部署详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeploymentWithOptions(const string &deploymentId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeployment"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/deployments/instance/" , Darabonba::Encode::Encoder::percentEncode(deploymentId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeploymentResponse>();
}

/**
 * @summary 查询部署详情
 *
 * @return GetDeploymentResponse
 */
GetDeploymentResponse Client::getDeployment(const string &deploymentId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeploymentWithOptions(deploymentId, headers, runtime);
}

/**
 * @summary 查询开发者
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeveloperResponse
 */
GetDeveloperResponse Client::getDeveloperWithOptions(const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeveloper"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/developers/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeveloperResponse>();
}

/**
 * @summary 查询开发者
 *
 * @return GetDeveloperResponse
 */
GetDeveloperResponse Client::getDeveloper(const string &accountId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeveloperWithOptions(accountId, headers, runtime);
}

/**
 * @summary 查询开发者所在公司
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeveloperEnterpriseResponse
 */
GetDeveloperEnterpriseResponse Client::getDeveloperEnterpriseWithOptions(const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeveloperEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises/developers/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeveloperEnterpriseResponse>();
}

/**
 * @summary 查询开发者所在公司
 *
 * @return GetDeveloperEnterpriseResponse
 */
GetDeveloperEnterpriseResponse Client::getDeveloperEnterprise(const string &accountId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeveloperEnterpriseWithOptions(accountId, headers, runtime);
}

/**
 * @summary 查询公司
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnterpriseResponse
 */
GetEnterpriseResponse Client::getEnterpriseWithOptions(const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises/" , Darabonba::Encode::Encoder::percentEncode(enterpriseId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEnterpriseResponse>();
}

/**
 * @summary 查询公司
 *
 * @return GetEnterpriseResponse
 */
GetEnterpriseResponse Client::getEnterprise(const string &enterpriseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEnterpriseWithOptions(enterpriseId, headers, runtime);
}

/**
 * @summary 查询开发者
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEnterpriseDeveloperResponse
 */
GetEnterpriseDeveloperResponse Client::getEnterpriseDeveloperWithOptions(const string &accountId, const string &enterpriseId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEnterpriseDeveloper"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/developers/" , Darabonba::Encode::Encoder::percentEncode(accountId) , "/enterprises/" , Darabonba::Encode::Encoder::percentEncode(enterpriseId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEnterpriseDeveloperResponse>();
}

/**
 * @summary 查询开发者
 *
 * @return GetEnterpriseDeveloperResponse
 */
GetEnterpriseDeveloperResponse Client::getEnterpriseDeveloper(const string &accountId, const string &enterpriseId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEnterpriseDeveloperWithOptions(accountId, enterpriseId, headers, runtime);
}

/**
 * @summary 获取审核详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetForkReviewResponse
 */
GetForkReviewResponse Client::getForkReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetForkReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/fork-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetForkReviewResponse>();
}

/**
 * @summary 获取审核详情
 *
 * @return GetForkReviewResponse
 */
GetForkReviewResponse Client::getForkReview(const string &reviewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getForkReviewWithOptions(reviewId, headers, runtime);
}

/**
 * @summary 查询历史开发者
 *
 * @param request GetHistoryDeveloperRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetHistoryDeveloperResponse
 */
GetHistoryDeveloperResponse Client::getHistoryDeveloperWithOptions(const string &accountId, const GetHistoryDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetHistoryDeveloper"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/developers/" , Darabonba::Encode::Encoder::percentEncode(accountId) , "/commonds/history")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetHistoryDeveloperResponse>();
}

/**
 * @summary 查询历史开发者
 *
 * @param request GetHistoryDeveloperRequest
 * @return GetHistoryDeveloperResponse
 */
GetHistoryDeveloperResponse Client::getHistoryDeveloper(const string &accountId, const GetHistoryDeveloperRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getHistoryDeveloperWithOptions(accountId, request, headers, runtime);
}

/**
 * @summary 查询最近一次部署配置
 *
 * @param request GetLastDeploymentConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLastDeploymentConfigResponse
 */
GetLastDeploymentConfigResponse Client::getLastDeploymentConfigWithOptions(const GetLastDeploymentConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLastDeploymentConfig"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/deployments/last-config")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLastDeploymentConfigResponse>();
}

/**
 * @summary 查询最近一次部署配置
 *
 * @param request GetLastDeploymentConfigRequest
 * @return GetLastDeploymentConfigResponse
 */
GetLastDeploymentConfigResponse Client::getLastDeploymentConfig(const GetLastDeploymentConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLastDeploymentConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 查询最新版本二方库
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryResponse
 */
GetLibraryResponse Client::getLibraryWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryResponse>();
}

/**
 * @summary 查询最新版本二方库
 *
 * @return GetLibraryResponse
 */
GetLibraryResponse Client::getLibrary(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryWithOptions(id, headers, runtime);
}

/**
 * @summary 获取二方包代码库开发者统计信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryDeveloperRepoMetricsResponse
 */
GetLibraryDeveloperRepoMetricsResponse Client::getLibraryDeveloperRepoMetricsWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibraryDeveloperRepoMetrics"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/Librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/code/commands/get-developer-repo-metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryDeveloperRepoMetricsResponse>();
}

/**
 * @summary 获取二方包代码库开发者统计信息
 *
 * @return GetLibraryDeveloperRepoMetricsResponse
 */
GetLibraryDeveloperRepoMetricsResponse Client::getLibraryDeveloperRepoMetrics(const string &libraryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryDeveloperRepoMetricsWithOptions(libraryId, headers, runtime);
}

/**
 * @summary 查询二方包使用说明文档
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryInstructionResponse
 */
GetLibraryInstructionResponse Client::getLibraryInstructionWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibraryInstruction"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/instructions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryInstructionResponse>();
}

/**
 * @summary 查询二方包使用说明文档
 *
 * @return GetLibraryInstructionResponse
 */
GetLibraryInstructionResponse Client::getLibraryInstruction(const string &libraryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryInstructionWithOptions(libraryId, headers, runtime);
}

/**
 * @summary 获取二方包的代码库统计信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryRepoMetricsResponse
 */
GetLibraryRepoMetricsResponse Client::getLibraryRepoMetricsWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibraryRepoMetrics"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/Librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/code/commands/get-repo-metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryRepoMetricsResponse>();
}

/**
 * @summary 获取二方包的代码库统计信息
 *
 * @return GetLibraryRepoMetricsResponse
 */
GetLibraryRepoMetricsResponse Client::getLibraryRepoMetrics(const string &libraryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryRepoMetricsWithOptions(libraryId, headers, runtime);
}

/**
 * @summary 查询审核信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibraryReviewResponse
 */
GetLibraryReviewResponse Client::getLibraryReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibraryReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/library-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibraryReviewResponse>();
}

/**
 * @summary 查询审核信息
 *
 * @return GetLibraryReviewResponse
 */
GetLibraryReviewResponse Client::getLibraryReview(const string &reviewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibraryReviewWithOptions(reviewId, headers, runtime);
}

/**
 * @summary 查询二方包规格
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLibrarySchemaResponse
 */
GetLibrarySchemaResponse Client::getLibrarySchemaWithOptions(const string &libraryId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLibrarySchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/schemas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLibrarySchemaResponse>();
}

/**
 * @summary 查询二方包规格
 *
 * @return GetLibrarySchemaResponse
 */
GetLibrarySchemaResponse Client::getLibrarySchema(const string &libraryId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLibrarySchemaWithOptions(libraryId, headers, runtime);
}

/**
 * @summary 获取日志链接
 *
 * @param request GetLogUrlRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLogUrlResponse
 */
GetLogUrlResponse Client::getLogUrlWithOptions(const GetLogUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIp()) {
    query["ip"] = request.getIp();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  if (!!request.hasTo()) {
    query["to"] = request.getTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLogUrl"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/pdp-log/url")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLogUrlResponse>();
}

/**
 * @summary 获取日志链接
 *
 * @param request GetLogUrlRequest
 * @return GetLogUrlResponse
 */
GetLogUrlResponse Client::getLogUrl(const GetLogUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLogUrlWithOptions(request, headers, runtime);
}

/**
 * @summary 获取登录的buc用户信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetLoginUserInfoResponse
 */
GetLoginUserInfoResponse Client::getLoginUserInfoWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetLoginUserInfo"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/bucs/logins")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetLoginUserInfoResponse>();
}

/**
 * @summary 获取登录的buc用户信息
 *
 * @return GetLoginUserInfoResponse
 */
GetLoginUserInfoResponse Client::getLoginUserInfo() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getLoginUserInfoWithOptions(headers, runtime);
}

/**
 * @summary 查询报警任务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonitorAlertResponse
 */
GetMonitorAlertResponse Client::getMonitorAlertWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonitorAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonitorAlertResponse>();
}

/**
 * @summary 查询报警任务
 *
 * @return GetMonitorAlertResponse
 */
GetMonitorAlertResponse Client::getMonitorAlert(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMonitorAlertWithOptions(id, headers, runtime);
}

/**
 * @summary 查询报警历史
 *
 * @param request GetMonitorAlertHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonitorAlertHistoryResponse
 */
GetMonitorAlertHistoryResponse Client::getMonitorAlertHistoryWithOptions(const GetMonitorAlertHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertRuleName()) {
    query["alertRuleName"] = request.getAlertRuleName();
  }

  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonitorAlertHistory"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/getMonitorAlertHistory")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonitorAlertHistoryResponse>();
}

/**
 * @summary 查询报警历史
 *
 * @param request GetMonitorAlertHistoryRequest
 * @return GetMonitorAlertHistoryResponse
 */
GetMonitorAlertHistoryResponse Client::getMonitorAlertHistory(const GetMonitorAlertHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMonitorAlertHistoryWithOptions(request, headers, runtime);
}

/**
 * @summary 查询联系人
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonitorContactResponse
 */
GetMonitorContactResponse Client::getMonitorContactWithOptions(const string &contactId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonitorContact"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/contact/" , Darabonba::Encode::Encoder::percentEncode(contactId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonitorContactResponse>();
}

/**
 * @summary 查询联系人
 *
 * @return GetMonitorContactResponse
 */
GetMonitorContactResponse Client::getMonitorContact(const string &contactId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMonitorContactWithOptions(contactId, headers, runtime);
}

/**
 * @summary 查询联系人组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonitorContactGroupResponse
 */
GetMonitorContactGroupResponse Client::getMonitorContactGroupWithOptions(const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonitorContactGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/group/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonitorContactGroupResponse>();
}

/**
 * @summary 查询联系人组
 *
 * @return GetMonitorContactGroupResponse
 */
GetMonitorContactGroupResponse Client::getMonitorContactGroup(const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMonitorContactGroupWithOptions(groupId, headers, runtime);
}

/**
 * @summary 查询webhook
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMonitorWebhookResponse
 */
GetMonitorWebhookResponse Client::getMonitorWebhookWithOptions(const string &webhookId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMonitorWebhook"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/webhook/" , Darabonba::Encode::Encoder::percentEncode(webhookId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMonitorWebhookResponse>();
}

/**
 * @summary 查询webhook
 *
 * @return GetMonitorWebhookResponse
 */
GetMonitorWebhookResponse Client::getMonitorWebhook(const string &webhookId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMonitorWebhookWithOptions(webhookId, headers, runtime);
}

/**
 * @summary 查询最新版本pbc
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcResponse
 */
GetPbcResponse Client::getPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcResponse>();
}

/**
 * @summary 查询最新版本pbc
 *
 * @return GetPbcResponse
 */
GetPbcResponse Client::getPbc(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcWithOptions(id, headers, runtime);
}

/**
 * @summary 查询PBC的api规格
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcApiSchemaResponse
 */
GetPbcApiSchemaResponse Client::getPbcApiSchemaWithOptions(const string &pbcVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcApiSchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(pbcVersionId) , "/api-schemas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcApiSchemaResponse>();
}

/**
 * @summary 查询PBC的api规格
 *
 * @return GetPbcApiSchemaResponse
 */
GetPbcApiSchemaResponse Client::getPbcApiSchema(const string &pbcVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcApiSchemaWithOptions(pbcVersionId, headers, runtime);
}

/**
 * @summary 获取PBC代码库开发者统计信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcDeveloperRepoMetricsResponse
 */
GetPbcDeveloperRepoMetricsResponse Client::getPbcDeveloperRepoMetricsWithOptions(const string &pbcId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcDeveloperRepoMetrics"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(pbcId) , "/code/commands/get-developer-repo-metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcDeveloperRepoMetricsResponse>();
}

/**
 * @summary 获取PBC代码库开发者统计信息
 *
 * @return GetPbcDeveloperRepoMetricsResponse
 */
GetPbcDeveloperRepoMetricsResponse Client::getPbcDeveloperRepoMetrics(const string &pbcId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcDeveloperRepoMetricsWithOptions(pbcId, headers, runtime);
}

/**
 * @summary 查询PBC使用说明文档
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcInstructionResponse
 */
GetPbcInstructionResponse Client::getPbcInstructionWithOptions(const string &pbcVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcInstruction"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(pbcVersionId) , "/instructions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcInstructionResponse>();
}

/**
 * @summary 查询PBC使用说明文档
 *
 * @return GetPbcInstructionResponse
 */
GetPbcInstructionResponse Client::getPbcInstruction(const string &pbcVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcInstructionWithOptions(pbcVersionId, headers, runtime);
}

/**
 * @summary 获取审核详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcInvokeReviewResponse
 */
GetPbcInvokeReviewResponse Client::getPbcInvokeReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcInvokeReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-invoke-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcInvokeReviewResponse>();
}

/**
 * @summary 获取审核详情
 *
 * @return GetPbcInvokeReviewResponse
 */
GetPbcInvokeReviewResponse Client::getPbcInvokeReview(const string &reviewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcInvokeReviewWithOptions(reviewId, headers, runtime);
}

/**
 * @summary 获取PBC的代码库统计信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcRepoMetricsResponse
 */
GetPbcRepoMetricsResponse Client::getPbcRepoMetricsWithOptions(const string &pbcId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcRepoMetrics"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(pbcId) , "/code/commands/get-repo-metrics")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcRepoMetricsResponse>();
}

/**
 * @summary 获取PBC的代码库统计信息
 *
 * @return GetPbcRepoMetricsResponse
 */
GetPbcRepoMetricsResponse Client::getPbcRepoMetrics(const string &pbcId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcRepoMetricsWithOptions(pbcId, headers, runtime);
}

/**
 * @summary 查询pbc审核信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcReviewResponse
 */
GetPbcReviewResponse Client::getPbcReviewWithOptions(const string &reviewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-reviews/" , Darabonba::Encode::Encoder::percentEncode(reviewId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcReviewResponse>();
}

/**
 * @summary 查询pbc审核信息
 *
 * @return GetPbcReviewResponse
 */
GetPbcReviewResponse Client::getPbcReview(const string &reviewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcReviewWithOptions(reviewId, headers, runtime);
}

/**
 * @summary 查询PBC规格
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcSchemaResponse
 */
GetPbcSchemaResponse Client::getPbcSchemaWithOptions(const string &pbcVersionId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcSchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(pbcVersionId) , "/schemas")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcSchemaResponse>();
}

/**
 * @summary 查询PBC规格
 *
 * @return GetPbcSchemaResponse
 */
GetPbcSchemaResponse Client::getPbcSchema(const string &pbcVersionId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcSchemaWithOptions(pbcVersionId, headers, runtime);
}

/**
 * @summary 查询pbc版本信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPbcVersionResponse
 */
GetPbcVersionResponse Client::getPbcVersionWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPbcVersion"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPbcVersionResponse>();
}

/**
 * @summary 查询pbc版本信息
 *
 * @return GetPbcVersionResponse
 */
GetPbcVersionResponse Client::getPbcVersion(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPbcVersionWithOptions(id, headers, runtime);
}

/**
 * @summary 获取配置信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPdpConfigResponse
 */
GetPdpConfigResponse Client::getPdpConfigWithOptions(const string &configId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPdpConfig"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/configs/last/" , Darabonba::Encode::Encoder::percentEncode(configId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPdpConfigResponse>();
}

/**
 * @summary 获取配置信息
 *
 * @return GetPdpConfigResponse
 */
GetPdpConfigResponse Client::getPdpConfig(const string &configId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPdpConfigWithOptions(configId, headers, runtime);
}

/**
 * @summary 获取历史配置详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPdpHistoryConfigResponse
 */
GetPdpHistoryConfigResponse Client::getPdpHistoryConfigWithOptions(const string &historyConfigId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPdpHistoryConfig"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/configs/history/" , Darabonba::Encode::Encoder::percentEncode(historyConfigId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPdpHistoryConfigResponse>();
}

/**
 * @summary 获取历史配置详情
 *
 * @return GetPdpHistoryConfigResponse
 */
GetPdpHistoryConfigResponse Client::getPdpHistoryConfig(const string &historyConfigId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPdpHistoryConfigWithOptions(historyConfigId, headers, runtime);
}

/**
 * @summary 查询泳道详情
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPdpLaneResponse
 */
GetPdpLaneResponse Client::getPdpLaneWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPdpLane"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPdpLaneResponse>();
}

/**
 * @summary 查询泳道详情
 *
 * @return GetPdpLaneResponse
 */
GetPdpLaneResponse Client::getPdpLane(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPdpLaneWithOptions(id, headers, runtime);
}

/**
 * @summary 查询PdpPbc
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPdpPbcResponse
 */
GetPdpPbcResponse Client::getPdpPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPdpPbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPdpPbcResponse>();
}

/**
 * @summary 查询PdpPbc
 *
 * @return GetPdpPbcResponse
 */
GetPdpPbcResponse Client::getPdpPbc(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPdpPbcWithOptions(id, headers, runtime);
}

/**
 * @summary 查询服务
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPdpServiceResponse
 */
GetPdpServiceResponse Client::getPdpServiceWithOptions(const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPdpService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPdpServiceResponse>();
}

/**
 * @summary 查询服务
 *
 * @return GetPdpServiceResponse
 */
GetPdpServiceResponse Client::getPdpService(const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPdpServiceWithOptions(serviceId, headers, runtime);
}

/**
 * @summary 查询服务分组
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPdpServiceGroupResponse
 */
GetPdpServiceGroupResponse Client::getPdpServiceGroupWithOptions(const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPdpServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/groups/" , Darabonba::Encode::Encoder::percentEncode(serviceGroupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPdpServiceGroupResponse>();
}

/**
 * @summary 查询服务分组
 *
 * @return GetPdpServiceGroupResponse
 */
GetPdpServiceGroupResponse Client::getPdpServiceGroup(const string &serviceGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPdpServiceGroupWithOptions(serviceGroupId, headers, runtime);
}

/**
 * @summary 查询产品
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetProductResponse
 */
GetProductResponse Client::getProductWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetProduct"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/products/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetProductResponse>();
}

/**
 * @summary 查询产品
 *
 * @return GetProductResponse
 */
GetProductResponse Client::getProduct(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getProductWithOptions(id, headers, runtime);
}

/**
 * @summary 查询资源
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetResourceResponse
 */
GetResourceResponse Client::getResourceWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetResource"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetResourceResponse>();
}

/**
 * @summary 查询资源
 *
 * @return GetResourceResponse
 */
GetResourceResponse Client::getResource(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getResourceWithOptions(id, headers, runtime);
}

/**
 * @summary 查询角色
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRoleWithOptions(const string &roleId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/role-id/" , Darabonba::Encode::Encoder::percentEncode(roleId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRoleResponse>();
}

/**
 * @summary 查询角色
 *
 * @return GetRoleResponse
 */
GetRoleResponse Client::getRole(const string &roleId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRoleWithOptions(roleId, headers, runtime);
}

/**
 * @summary 获取调用链方法栈
 *
 * @param request GetStackDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStackDetailResponse
 */
GetStackDetailResponse Client::getStackDetailWithOptions(const string &traceId, const GetStackDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasRpcId()) {
    query["rpcId"] = request.getRpcId();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStackDetail"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/traces/" , Darabonba::Encode::Encoder::percentEncode(traceId) , "/commonds/stack")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStackDetailResponse>();
}

/**
 * @summary 获取调用链方法栈
 *
 * @param request GetStackDetailRequest
 * @return GetStackDetailResponse
 */
GetStackDetailResponse Client::getStackDetail(const string &traceId, const GetStackDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getStackDetailWithOptions(traceId, request, headers, runtime);
}

/**
 * @summary 获取token
 *
 * @param request GetTokenRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTokenResponse
 */
GetTokenResponse Client::getTokenWithOptions(const GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccountId()) {
    body["accountId"] = request.getAccountId();
  }

  if (!!request.hasPbcId()) {
    body["pbcId"] = request.getPbcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetToken"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/pbcs/token")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTokenResponse>();
}

/**
 * @summary 获取token
 *
 * @param request GetTokenRequest
 * @return GetTokenResponse
 */
GetTokenResponse Client::getToken(const GetTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTokenWithOptions(request, headers, runtime);
}

/**
 * @summary 获取调用链详情
 *
 * @param request GetTraceDetailRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTraceDetailResponse
 */
GetTraceDetailResponse Client::getTraceDetailWithOptions(const string &traceId, const GetTraceDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTraceDetail"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/traces/" , Darabonba::Encode::Encoder::percentEncode(traceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTraceDetailResponse>();
}

/**
 * @summary 获取调用链详情
 *
 * @param request GetTraceDetailRequest
 * @return GetTraceDetailResponse
 */
GetTraceDetailResponse Client::getTraceDetail(const string &traceId, const GetTraceDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getTraceDetailWithOptions(traceId, request, headers, runtime);
}

/**
 * @summary 授权
 *
 * @param request GrantRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GrantRoleResponse
 */
GrantRoleResponse Client::grantRoleWithOptions(const string &roleId, const GrantRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "GrantRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/" , Darabonba::Encode::Encoder::percentEncode(roleId) , "/commands/grant")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GrantRoleResponse>();
}

/**
 * @summary 授权
 *
 * @param request GrantRoleRequest
 * @return GrantRoleResponse
 */
GrantRoleResponse Client::grantRole(const string &roleId, const GrantRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return grantRoleWithOptions(roleId, request, headers, runtime);
}

/**
 * @summary 查询可以授权的产品
 *
 * @param request ListAuthorizeProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAuthorizeProductsResponse
 */
ListAuthorizeProductsResponse Client::listAuthorizeProductsWithOptions(const ListAuthorizeProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAuthorizeProducts"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/products/commands/list-authorize")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAuthorizeProductsResponse>();
}

/**
 * @summary 查询可以授权的产品
 *
 * @param request ListAuthorizeProductsRequest
 * @return ListAuthorizeProductsResponse
 */
ListAuthorizeProductsResponse Client::listAuthorizeProducts(const ListAuthorizeProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAuthorizeProductsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询Buc用户的公司
 *
 * @param request ListBucUserEnterpriseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBucUserEnterpriseResponse
 */
ListBucUserEnterpriseResponse Client::listBucUserEnterpriseWithOptions(const ListBucUserEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEmpId()) {
    query["empId"] = request.getEmpId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBucUserEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/bucs/enterprises")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBucUserEnterpriseResponse>();
}

/**
 * @summary 查询Buc用户的公司
 *
 * @param request ListBucUserEnterpriseRequest
 * @return ListBucUserEnterpriseResponse
 */
ListBucUserEnterpriseResponse Client::listBucUserEnterprise(const ListBucUserEnterpriseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBucUserEnterpriseWithOptions(request, headers, runtime);
}

/**
 * @summary 查询组件模板列表
 *
 * @param request ListComponentTemplatesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentTemplatesResponse
 */
ListComponentTemplatesResponse Client::listComponentTemplatesWithOptions(const ListComponentTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponentTemplates"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/component-templates")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentTemplatesResponse>();
}

/**
 * @summary 查询组件模板列表
 *
 * @param request ListComponentTemplatesRequest
 * @return ListComponentTemplatesResponse
 */
ListComponentTemplatesResponse Client::listComponentTemplates(const ListComponentTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComponentTemplatesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询组件列表
 *
 * @param request ListComponentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponentsWithOptions(const ListComponentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  if (!!request.hasTemplateId()) {
    query["templateId"] = request.getTemplateId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponents"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/components")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentsResponse>();
}

/**
 * @summary 查询组件列表
 *
 * @param request ListComponentsRequest
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponents(const ListComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listComponentsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询我依赖的二方包列表
 *
 * @param request ListDependLibrarysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDependLibrarysResponse
 */
ListDependLibrarysResponse Client::listDependLibrarysWithOptions(const ListDependLibrarysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDependLibrarys"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/commands/list-dependency")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDependLibrarysResponse>();
}

/**
 * @summary 查询我依赖的二方包列表
 *
 * @param request ListDependLibrarysRequest
 * @return ListDependLibrarysResponse
 */
ListDependLibrarysResponse Client::listDependLibrarys(const ListDependLibrarysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDependLibrarysWithOptions(request, headers, runtime);
}

/**
 * @summary 查询部署记录列表
 *
 * @param tmpReq ListDeploymentsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeploymentsWithOptions(const ListDeploymentsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDeploymentsShrinkRequest request = ListDeploymentsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExcludeStatus()) {
    request.setExcludeStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getExcludeStatus(), "excludeStatus", "json"));
  }

  if (!!tmpReq.hasStatus()) {
    request.setStatusShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStatus(), "status", "json"));
  }

  json query = {};
  if (!!request.hasExcludeStatusShrink()) {
    query["excludeStatus"] = request.getExcludeStatusShrink();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasStatusShrink()) {
    query["status"] = request.getStatusShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeployments"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/deployments")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentsResponse>();
}

/**
 * @summary 查询部署记录列表
 *
 * @param request ListDeploymentsRequest
 * @return ListDeploymentsResponse
 */
ListDeploymentsResponse Client::listDeployments(const ListDeploymentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDeploymentsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询开发者所在公司列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeveloperEnterprisesResponse
 */
ListDeveloperEnterprisesResponse Client::listDeveloperEnterprisesWithOptions(const string &accountId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeveloperEnterprises"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises/developers/" , Darabonba::Encode::Encoder::percentEncode(accountId) , "/commands/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeveloperEnterprisesResponse>();
}

/**
 * @summary 查询开发者所在公司列表
 *
 * @return ListDeveloperEnterprisesResponse
 */
ListDeveloperEnterprisesResponse Client::listDeveloperEnterprises(const string &accountId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDeveloperEnterprisesWithOptions(accountId, headers, runtime);
}

/**
 * @summary 查询当前开发者拥有权限的pbc列表
 *
 * @param request ListDeveloperPbcsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeveloperPbcsResponse
 */
ListDeveloperPbcsResponse Client::listDeveloperPbcsWithOptions(const ListDeveloperPbcsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeveloperPbcs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/commands/allow-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeveloperPbcsResponse>();
}

/**
 * @summary 查询当前开发者拥有权限的pbc列表
 *
 * @param request ListDeveloperPbcsRequest
 * @return ListDeveloperPbcsResponse
 */
ListDeveloperPbcsResponse Client::listDeveloperPbcs(const ListDeveloperPbcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDeveloperPbcsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询开发者列表
 *
 * @param tmpReq ListDevelopersRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDevelopersResponse
 */
ListDevelopersResponse Client::listDevelopersWithOptions(const ListDevelopersRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDevelopersShrinkRequest request = ListDevelopersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccountIds(), "accountIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["accountIds"] = request.getAccountIdsShrink();
  }

  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRoleId()) {
    query["roleId"] = request.getRoleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDevelopers"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/developers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDevelopersResponse>();
}

/**
 * @summary 查询开发者列表
 *
 * @param request ListDevelopersRequest
 * @return ListDevelopersResponse
 */
ListDevelopersResponse Client::listDevelopers(const ListDevelopersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDevelopersWithOptions(request, headers, runtime);
}

/**
 * @summary 此PBC依赖的PBC列表(下游游PBC)
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDownstreamPbcResponse
 */
ListDownstreamPbcResponse Client::listDownstreamPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDownstreamPbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/list-downstream")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDownstreamPbcResponse>();
}

/**
 * @summary 此PBC依赖的PBC列表(下游游PBC)
 *
 * @return ListDownstreamPbcResponse
 */
ListDownstreamPbcResponse Client::listDownstreamPbc(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDownstreamPbcWithOptions(id, headers, runtime);
}

/**
 * @summary 查询公司列表
 *
 * @param request ListEnterprisesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnterprisesResponse
 */
ListEnterprisesResponse Client::listEnterprisesWithOptions(const ListEnterprisesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnterprises"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnterprisesResponse>();
}

/**
 * @summary 查询公司列表
 *
 * @param request ListEnterprisesRequest
 * @return ListEnterprisesResponse
 */
ListEnterprisesResponse Client::listEnterprises(const ListEnterprisesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEnterprisesWithOptions(request, headers, runtime);
}

/**
 * @summary 产销环境信息列表
 *
 * @param request ListEnvInfosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEnvInfosResponse
 */
ListEnvInfosResponse Client::listEnvInfosWithOptions(const ListEnvInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListEnvInfos"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services/env/list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListEnvInfosResponse>();
}

/**
 * @summary 产销环境信息列表
 *
 * @param request ListEnvInfosRequest
 * @return ListEnvInfosResponse
 */
ListEnvInfosResponse Client::listEnvInfos(const ListEnvInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listEnvInfosWithOptions(request, headers, runtime);
}

/**
 * @summary 查询审核列表，支持按照审核人、申请人查询
 *
 * @param request ListForkReviewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListForkReviewsResponse
 */
ListForkReviewsResponse Client::listForkReviewsWithOptions(const ListForkReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasReviewer()) {
    query["reviewer"] = request.getReviewer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListForkReviews"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/fork-reviews")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListForkReviewsResponse>();
}

/**
 * @summary 查询审核列表，支持按照审核人、申请人查询
 *
 * @param request ListForkReviewsRequest
 * @return ListForkReviewsResponse
 */
ListForkReviewsResponse Client::listForkReviews(const ListForkReviewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listForkReviewsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询被授权角色列表
 *
 * @param request ListGrantedRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListGrantedRolesResponse
 */
ListGrantedRolesResponse Client::listGrantedRolesWithOptions(const ListGrantedRolesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizerId()) {
    query["authorizerId"] = request.getAuthorizerId();
  }

  if (!!request.hasAuthorizerType()) {
    query["authorizerType"] = request.getAuthorizerType();
  }

  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListGrantedRoles"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/commands/list-granted-roles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListGrantedRolesResponse>();
}

/**
 * @summary 查询被授权角色列表
 *
 * @param request ListGrantedRolesRequest
 * @return ListGrantedRolesResponse
 */
ListGrantedRolesResponse Client::listGrantedRoles(const ListGrantedRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listGrantedRolesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询订阅当前组件的pbc的列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInvokePbcsResponse
 */
ListInvokePbcsResponse Client::listInvokePbcsWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInvokePbcs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/invoke-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInvokePbcsResponse>();
}

/**
 * @summary 查询订阅当前组件的pbc的列表
 *
 * @return ListInvokePbcsResponse
 */
ListInvokePbcsResponse Client::listInvokePbcs(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listInvokePbcsWithOptions(id, headers, runtime);
}

/**
 * @summary 查询审核信息列表
 *
 * @param request ListLibraryReviewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLibraryReviewsResponse
 */
ListLibraryReviewsResponse Client::listLibraryReviewsWithOptions(const ListLibraryReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasReviewer()) {
    query["reviewer"] = request.getReviewer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLibraryReviews"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/library-reviews")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLibraryReviewsResponse>();
}

/**
 * @summary 查询审核信息列表
 *
 * @param request ListLibraryReviewsRequest
 * @return ListLibraryReviewsResponse
 */
ListLibraryReviewsResponse Client::listLibraryReviews(const ListLibraryReviewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLibraryReviewsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询二方包列表
 *
 * @param request ListLibrarysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLibrarysResponse
 */
ListLibrarysResponse Client::listLibrarysWithOptions(const ListLibrarysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProvider()) {
    query["provider"] = request.getProvider();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListLibrarys"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLibrarysResponse>();
}

/**
 * @summary 查询二方包列表
 *
 * @param request ListLibrarysRequest
 * @return ListLibrarysResponse
 */
ListLibrarysResponse Client::listLibrarys(const ListLibrarysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listLibrarysWithOptions(request, headers, runtime);
}

/**
 * @summary 查询市场列表
 *
 * @param request ListMarketsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMarketsResponse
 */
ListMarketsResponse Client::listMarketsWithOptions(const ListMarketsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMarkets"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/markets")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMarketsResponse>();
}

/**
 * @summary 查询市场列表
 *
 * @param request ListMarketsRequest
 * @return ListMarketsResponse
 */
ListMarketsResponse Client::listMarkets(const ListMarketsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMarketsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询/搜索元数据信息列表
 *
 * @param request ListMetadataInfosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMetadataInfosResponse
 */
ListMetadataInfosResponse Client::listMetadataInfosWithOptions(const ListMetadataInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasNamespaceId()) {
    query["namespace_id"] = request.getNamespaceId();
  }

  if (!!request.hasNamespaceName()) {
    query["namespace_name"] = request.getNamespaceName();
  }

  if (!!request.hasOrderBy()) {
    query["order_by"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["order_direction"] = request.getOrderDirection();
  }

  if (!!request.hasOrgId()) {
    query["org_id"] = request.getOrgId();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasPbcId()) {
    query["pbc_id"] = request.getPbcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMetadataInfos"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/metadata")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMetadataInfosResponse>();
}

/**
 * @summary 查询/搜索元数据信息列表
 *
 * @param request ListMetadataInfosRequest
 * @return ListMetadataInfosResponse
 */
ListMetadataInfosResponse Client::listMetadataInfos(const ListMetadataInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMetadataInfosWithOptions(request, headers, runtime);
}

/**
 * @summary 查询微服务列表
 *
 * @param request ListMicroServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMicroServiceResponse
 */
ListMicroServiceResponse Client::listMicroServiceWithOptions(const string &env, const ListMicroServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  if (!!request.hasServiceIds()) {
    query["serviceIds"] = request.getServiceIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMicroService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/group/env/" , Darabonba::Encode::Encoder::percentEncode(env))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMicroServiceResponse>();
}

/**
 * @summary 查询微服务列表
 *
 * @param request ListMicroServiceRequest
 * @return ListMicroServiceResponse
 */
ListMicroServiceResponse Client::listMicroService(const string &env, const ListMicroServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMicroServiceWithOptions(env, request, headers, runtime);
}

/**
 * @summary 查询联系人组列表
 *
 * @param request ListMonitorContactGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonitorContactGroupsResponse
 */
ListMonitorContactGroupsResponse Client::listMonitorContactGroupsWithOptions(const ListMonitorContactGroupsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMonitorContactGroups"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/group")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMonitorContactGroupsResponse>();
}

/**
 * @summary 查询联系人组列表
 *
 * @param request ListMonitorContactGroupsRequest
 * @return ListMonitorContactGroupsResponse
 */
ListMonitorContactGroupsResponse Client::listMonitorContactGroups(const ListMonitorContactGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMonitorContactGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询联系人列表
 *
 * @param request ListMonitorContactsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonitorContactsResponse
 */
ListMonitorContactsResponse Client::listMonitorContactsWithOptions(const ListMonitorContactsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasGroupId()) {
    query["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMonitorContacts"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/contact")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMonitorContactsResponse>();
}

/**
 * @summary 查询联系人列表
 *
 * @param request ListMonitorContactsRequest
 * @return ListMonitorContactsResponse
 */
ListMonitorContactsResponse Client::listMonitorContacts(const ListMonitorContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMonitorContactsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询所有的联系人/联系人组/webhook列表
 *
 * @param request ListMonitorNotifyObjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonitorNotifyObjectsResponse
 */
ListMonitorNotifyObjectsResponse Client::listMonitorNotifyObjectsWithOptions(const ListMonitorNotifyObjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  if (!!request.hasWebhookType()) {
    query["webhookType"] = request.getWebhookType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMonitorNotifyObjects"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/listMonitorNotifyObjects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMonitorNotifyObjectsResponse>();
}

/**
 * @summary 查询所有的联系人/联系人组/webhook列表
 *
 * @param request ListMonitorNotifyObjectsRequest
 * @return ListMonitorNotifyObjectsResponse
 */
ListMonitorNotifyObjectsResponse Client::listMonitorNotifyObjects(const ListMonitorNotifyObjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMonitorNotifyObjectsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询通知报警列表
 *
 * @param request ListMonitorTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonitorTasksResponse
 */
ListMonitorTasksResponse Client::listMonitorTasksWithOptions(const ListMonitorTasksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlertName()) {
    query["alertName"] = request.getAlertName();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMonitorTasks"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/listMonitorTasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMonitorTasksResponse>();
}

/**
 * @summary 查询通知报警列表
 *
 * @param request ListMonitorTasksRequest
 * @return ListMonitorTasksResponse
 */
ListMonitorTasksResponse Client::listMonitorTasks(const ListMonitorTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMonitorTasksWithOptions(request, headers, runtime);
}

/**
 * @summary 查询webhook列表
 *
 * @param request ListMonitorWebhooksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMonitorWebhooksResponse
 */
ListMonitorWebhooksResponse Client::listMonitorWebhooksWithOptions(const ListMonitorWebhooksRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasWebhookType()) {
    query["webhookType"] = request.getWebhookType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMonitorWebhooks"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/webhook")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMonitorWebhooksResponse>();
}

/**
 * @summary 查询webhook列表
 *
 * @param request ListMonitorWebhooksRequest
 * @return ListMonitorWebhooksResponse
 */
ListMonitorWebhooksResponse Client::listMonitorWebhooks(const ListMonitorWebhooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMonitorWebhooksWithOptions(request, headers, runtime);
}

/**
 * @summary 查询Group下的死信消息列表
 *
 * @param request ListMqGroupMsgsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMqGroupMsgsResponse
 */
ListMqGroupMsgsResponse Client::listMqGroupMsgsWithOptions(const string &groupId, const ListMqGroupMsgsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMsgId()) {
    query["msgId"] = request.getMsgId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMqGroupMsgs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/group/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/commands/msgs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMqGroupMsgsResponse>();
}

/**
 * @summary 查询Group下的死信消息列表
 *
 * @param request ListMqGroupMsgsRequest
 * @return ListMqGroupMsgsResponse
 */
ListMqGroupMsgsResponse Client::listMqGroupMsgs(const string &groupId, const ListMqGroupMsgsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMqGroupMsgsWithOptions(groupId, request, headers, runtime);
}

/**
 * @summary 查询Topic下的消息列表
 *
 * @param request ListMqTopicMsgsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMqTopicMsgsResponse
 */
ListMqTopicMsgsResponse Client::listMqTopicMsgsWithOptions(const string &topicId, const ListMqTopicMsgsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasMsgId()) {
    query["msgId"] = request.getMsgId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMqTopicMsgs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/topic/" , Darabonba::Encode::Encoder::percentEncode(topicId) , "/commands/msgs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMqTopicMsgsResponse>();
}

/**
 * @summary 查询Topic下的消息列表
 *
 * @param request ListMqTopicMsgsRequest
 * @return ListMqTopicMsgsResponse
 */
ListMqTopicMsgsResponse Client::listMqTopicMsgs(const string &topicId, const ListMqTopicMsgsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMqTopicMsgsWithOptions(topicId, request, headers, runtime);
}

/**
 * @summary 查询Topic下的在线订阅列表
 *
 * @param request ListMqTopicSubsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMqTopicSubsResponse
 */
ListMqTopicSubsResponse Client::listMqTopicSubsWithOptions(const string &topicId, const ListMqTopicSubsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMqTopicSubs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/topic/" , Darabonba::Encode::Encoder::percentEncode(topicId) , "/commands/subs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMqTopicSubsResponse>();
}

/**
 * @summary 查询Topic下的在线订阅列表
 *
 * @param request ListMqTopicSubsRequest
 * @return ListMqTopicSubsResponse
 */
ListMqTopicSubsResponse Client::listMqTopicSubs(const string &topicId, const ListMqTopicSubsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMqTopicSubsWithOptions(topicId, request, headers, runtime);
}

/**
 * @summary 查询Topic列表
 *
 * @param request ListMqTopicsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMqTopicsResponse
 */
ListMqTopicsResponse Client::listMqTopicsWithOptions(const string &env, const string &pbcId, const ListMqTopicsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasTopicName()) {
    query["topicName"] = request.getTopicName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMqTopics"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/topic/env/" , Darabonba::Encode::Encoder::percentEncode(env) , "/pbcId/" , Darabonba::Encode::Encoder::percentEncode(pbcId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMqTopicsResponse>();
}

/**
 * @summary 查询Topic列表
 *
 * @param request ListMqTopicsRequest
 * @return ListMqTopicsResponse
 */
ListMqTopicsResponse Client::listMqTopics(const string &env, const string &pbcId, const ListMqTopicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMqTopicsWithOptions(env, pbcId, request, headers, runtime);
}

/**
 * @summary 查询服务调用审核列表，支持按照审核人、申请人查询
 *
 * @param request ListPbcInvokeReviewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPbcInvokeReviewsResponse
 */
ListPbcInvokeReviewsResponse Client::listPbcInvokeReviewsWithOptions(const ListPbcInvokeReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasOrderby()) {
    query["orderby"] = request.getOrderby();
  }

  if (!!request.hasReviewer()) {
    query["reviewer"] = request.getReviewer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPbcInvokeReviews"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-invoke-reviews")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPbcInvokeReviewsResponse>();
}

/**
 * @summary 查询服务调用审核列表，支持按照审核人、申请人查询
 *
 * @param request ListPbcInvokeReviewsRequest
 * @return ListPbcInvokeReviewsResponse
 */
ListPbcInvokeReviewsResponse Client::listPbcInvokeReviews(const ListPbcInvokeReviewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPbcInvokeReviewsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询我调用的pbc列表
 *
 * @param request ListPbcInvokesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPbcInvokesResponse
 */
ListPbcInvokesResponse Client::listPbcInvokesWithOptions(const ListPbcInvokesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPbcInvokes"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-invokes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPbcInvokesResponse>();
}

/**
 * @summary 查询我调用的pbc列表
 *
 * @param request ListPbcInvokesRequest
 * @return ListPbcInvokesResponse
 */
ListPbcInvokesResponse Client::listPbcInvokes(const ListPbcInvokesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPbcInvokesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询审核信息列表
 *
 * @param request ListPbcReviewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPbcReviewsResponse
 */
ListPbcReviewsResponse Client::listPbcReviewsWithOptions(const ListPbcReviewsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasReviewer()) {
    query["reviewer"] = request.getReviewer();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPbcReviews"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-reviews")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPbcReviewsResponse>();
}

/**
 * @summary 查询审核信息列表
 *
 * @param request ListPbcReviewsRequest
 * @return ListPbcReviewsResponse
 */
ListPbcReviewsResponse Client::listPbcReviews(const ListPbcReviewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPbcReviewsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询我订阅的pbc列表
 *
 * @param request ListPbcSubscribeRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPbcSubscribeResponse
 */
ListPbcSubscribeResponse Client::listPbcSubscribeWithOptions(const ListPbcSubscribeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderBy()) {
    query["order_by"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["order_direction"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPbcSubscribe"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/commands/list-subscribe")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPbcSubscribeResponse>();
}

/**
 * @summary 查询我订阅的pbc列表
 *
 * @param request ListPbcSubscribeRequest
 * @return ListPbcSubscribeResponse
 */
ListPbcSubscribeResponse Client::listPbcSubscribe(const ListPbcSubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPbcSubscribeWithOptions(request, headers, runtime);
}

/**
 * @summary 查询我创建的资产
 *
 * @param request ListPbcVersionBuildRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPbcVersionBuildResponse
 */
ListPbcVersionBuildResponse Client::listPbcVersionBuildWithOptions(const ListPbcVersionBuildRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["accountId"] = request.getAccountId();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPbcVersionBuild"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/commands/list-build")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPbcVersionBuildResponse>();
}

/**
 * @summary 查询我创建的资产
 *
 * @param request ListPbcVersionBuildRequest
 * @return ListPbcVersionBuildResponse
 */
ListPbcVersionBuildResponse Client::listPbcVersionBuild(const ListPbcVersionBuildRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPbcVersionBuildWithOptions(request, headers, runtime);
}

/**
 * @summary 查询pbc的版本号列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPbcVersionNumbersResponse
 */
ListPbcVersionNumbersResponse Client::listPbcVersionNumbersWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPbcVersionNumbers"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/listPbcVersionNumbers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPbcVersionNumbersResponse>();
}

/**
 * @summary 查询pbc的版本号列表
 *
 * @return ListPbcVersionNumbersResponse
 */
ListPbcVersionNumbersResponse Client::listPbcVersionNumbers(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPbcVersionNumbersWithOptions(id, headers, runtime);
}

/**
 * @summary 查询pbc列表
 *
 * @param request ListPbcsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPbcsResponse
 */
ListPbcsResponse Client::listPbcsWithOptions(const ListPbcsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasDeveloperId()) {
    query["developerId"] = request.getDeveloperId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPbcs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPbcsResponse>();
}

/**
 * @summary 查询pbc列表
 *
 * @param request ListPbcsRequest
 * @return ListPbcsResponse
 */
ListPbcsResponse Client::listPbcs(const ListPbcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPbcsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务配置列表
 *
 * @param request ListPdpConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpConfigsResponse
 */
ListPdpConfigsResponse Client::listPdpConfigsWithOptions(const ListPdpConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpConfigs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/configs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpConfigsResponse>();
}

/**
 * @summary 查询服务配置列表
 *
 * @param request ListPdpConfigsRequest
 * @return ListPdpConfigsResponse
 */
ListPdpConfigsResponse Client::listPdpConfigs(const ListPdpConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务历史配置列表
 *
 * @param request ListPdpHistoryConfigsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpHistoryConfigsResponse
 */
ListPdpHistoryConfigsResponse Client::listPdpHistoryConfigsWithOptions(const ListPdpHistoryConfigsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigId()) {
    query["configId"] = request.getConfigId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpHistoryConfigs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/configs/history")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpHistoryConfigsResponse>();
}

/**
 * @summary 查询服务历史配置列表
 *
 * @param request ListPdpHistoryConfigsRequest
 * @return ListPdpHistoryConfigsResponse
 */
ListPdpHistoryConfigsResponse Client::listPdpHistoryConfigs(const ListPdpHistoryConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpHistoryConfigsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务的镜像
 *
 * @param request ListPdpImageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpImageResponse
 */
ListPdpImageResponse Client::listPdpImageWithOptions(const ListPdpImageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpImage"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services/instance/images")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpImageResponse>();
}

/**
 * @summary 查询服务的镜像
 *
 * @param request ListPdpImageRequest
 * @return ListPdpImageResponse
 */
ListPdpImageResponse Client::listPdpImage(const ListPdpImageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpImageWithOptions(request, headers, runtime);
}

/**
 * @summary 查询泳道列表
 *
 * @param request ListPdpLanesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpLanesResponse
 */
ListPdpLanesResponse Client::listPdpLanesWithOptions(const ListPdpLanesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasInletServiceId()) {
    query["inletServiceId"] = request.getInletServiceId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpLanes"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpLanesResponse>();
}

/**
 * @summary 查询泳道列表
 *
 * @param request ListPdpLanesRequest
 * @return ListPdpLanesResponse
 */
ListPdpLanesResponse Client::listPdpLanes(const ListPdpLanesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpLanesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询微服务分组可以加入的泳道列表
 *
 * @param tmpReq ListPdpLanesForServiceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpLanesForServiceGroupResponse
 */
ListPdpLanesForServiceGroupResponse Client::listPdpLanesForServiceGroupWithOptions(const ListPdpLanesForServiceGroupRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPdpLanesForServiceGroupShrinkRequest request = ListPdpLanesForServiceGroupShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLaneIds()) {
    request.setLaneIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLaneIds(), "laneIds", "simple"));
  }

  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasLaneIdsShrink()) {
    query["laneIds"] = request.getLaneIdsShrink();
  }

  if (!!request.hasOperator()) {
    query["operator"] = request.getOperator();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.getServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpLanesForServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/commands/list-service-group-lane")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpLanesForServiceGroupResponse>();
}

/**
 * @summary 查询微服务分组可以加入的泳道列表
 *
 * @param request ListPdpLanesForServiceGroupRequest
 * @return ListPdpLanesForServiceGroupResponse
 */
ListPdpLanesForServiceGroupResponse Client::listPdpLanesForServiceGroup(const ListPdpLanesForServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpLanesForServiceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 查询日志列表
 *
 * @param request ListPdpLogsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpLogsResponse
 */
ListPdpLogsResponse Client::listPdpLogsWithOptions(const ListPdpLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFrom()) {
    query["from"] = request.getFrom();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.getIp();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasSourceType()) {
    query["sourceType"] = request.getSourceType();
  }

  if (!!request.hasTo()) {
    query["to"] = request.getTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpLogs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/pdp-log")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpLogsResponse>();
}

/**
 * @summary 查询日志列表
 *
 * @param request ListPdpLogsRequest
 * @return ListPdpLogsResponse
 */
ListPdpLogsResponse Client::listPdpLogs(const ListPdpLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpLogsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询/搜索PdpPbc列表
 *
 * @param tmpReq ListPdpPbcsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpPbcsResponse
 */
ListPdpPbcsResponse Client::listPdpPbcsWithOptions(const ListPdpPbcsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPdpPbcsShrinkRequest request = ListPdpPbcsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPbcIds()) {
    request.setPbcIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPbcIds(), "pbcIds", "json"));
  }

  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasDeveloperId()) {
    query["developerId"] = request.getDeveloperId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPbcIdsShrink()) {
    query["pbcIds"] = request.getPbcIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpPbcs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/pbcs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpPbcsResponse>();
}

/**
 * @summary 查询/搜索PdpPbc列表
 *
 * @param request ListPdpPbcsRequest
 * @return ListPdpPbcsResponse
 */
ListPdpPbcsResponse Client::listPdpPbcs(const ListPdpPbcsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpPbcsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务分组列表
 *
 * @param tmpReq ListPdpServiceGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpServiceGroupsResponse
 */
ListPdpServiceGroupsResponse Client::listPdpServiceGroupsWithOptions(const ListPdpServiceGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPdpServiceGroupsShrinkRequest request = ListPdpServiceGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasIds()) {
    request.setIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getIds(), "ids", "json"));
  }

  json query = {};
  if (!!request.hasAlias()) {
    query["alias"] = request.getAlias();
  }

  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasEnvType()) {
    query["envType"] = request.getEnvType();
  }

  if (!!request.hasGroupType()) {
    query["groupType"] = request.getGroupType();
  }

  if (!!request.hasIdsShrink()) {
    query["ids"] = request.getIdsShrink();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasOrgType()) {
    query["orgType"] = request.getOrgType();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasRepoId()) {
    query["repoId"] = request.getRepoId();
  }

  if (!!request.hasServiceId()) {
    query["serviceId"] = request.getServiceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpServiceGroups"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/groups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpServiceGroupsResponse>();
}

/**
 * @summary 查询服务分组列表
 *
 * @param request ListPdpServiceGroupsRequest
 * @return ListPdpServiceGroupsResponse
 */
ListPdpServiceGroupsResponse Client::listPdpServiceGroups(const ListPdpServiceGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpServiceGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务列表
 *
 * @param tmpReq ListPdpServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPdpServicesResponse
 */
ListPdpServicesResponse Client::listPdpServicesWithOptions(const ListPdpServicesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPdpServicesShrinkRequest request = ListPdpServicesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPdpServiceIds()) {
    request.setPdpServiceIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPdpServiceIds(), "pdpServiceIds", "json"));
  }

  json query = {};
  if (!!request.hasAlias()) {
    query["alias"] = request.getAlias();
  }

  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  if (!!request.hasPdpServiceIdsShrink()) {
    query["pdpServiceIds"] = request.getPdpServiceIdsShrink();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPdpServices"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPdpServicesResponse>();
}

/**
 * @summary 查询服务列表
 *
 * @param request ListPdpServicesRequest
 * @return ListPdpServicesResponse
 */
ListPdpServicesResponse Client::listPdpServices(const ListPdpServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPdpServicesWithOptions(request, headers, runtime);
}

/**
 * @summary 获取权限列表
 *
 * @param request ListPermissionResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionResourceResponse
 */
ListPermissionResourceResponse Client::listPermissionResourceWithOptions(const ListPermissionResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAction()) {
    query["action"] = request.getAction();
  }

  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOperatorId()) {
    query["operatorId"] = request.getOperatorId();
  }

  if (!!request.hasOperatorType()) {
    query["operatorType"] = request.getOperatorType();
  }

  if (!!request.hasResourcePrefix()) {
    query["resourcePrefix"] = request.getResourcePrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissionResource"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/permissions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionResourceResponse>();
}

/**
 * @summary 获取权限列表
 *
 * @param request ListPermissionResourceRequest
 * @return ListPermissionResourceResponse
 */
ListPermissionResourceResponse Client::listPermissionResource(const ListPermissionResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPermissionResourceWithOptions(request, headers, runtime);
}

/**
 * @summary 获取前端资源权限，如按钮、页面
 *
 * @param request ListPermissionResourceForFrontRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionResourceForFrontResponse
 */
ListPermissionResourceForFrontResponse Client::listPermissionResourceForFrontWithOptions(const ListPermissionResourceForFrontRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAction()) {
    query["action"] = request.getAction();
  }

  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOperatorId()) {
    query["operatorId"] = request.getOperatorId();
  }

  if (!!request.hasOperatorType()) {
    query["operatorType"] = request.getOperatorType();
  }

  if (!!request.hasQueryType()) {
    query["queryType"] = request.getQueryType();
  }

  if (!!request.hasResourcePrefix()) {
    query["resourcePrefix"] = request.getResourcePrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissionResourceForFront"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/permissions/command/front-permission")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionResourceForFrontResponse>();
}

/**
 * @summary 获取前端资源权限，如按钮、页面
 *
 * @param request ListPermissionResourceForFrontRequest
 * @return ListPermissionResourceForFrontResponse
 */
ListPermissionResourceForFrontResponse Client::listPermissionResourceForFront(const ListPermissionResourceForFrontRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPermissionResourceForFrontWithOptions(request, headers, runtime);
}

/**
 * @summary 获取有权限的资源,请求来源POP
 *
 * @param request ListPermissionResourcePopRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPermissionResourcePopResponse
 */
ListPermissionResourcePopResponse Client::listPermissionResourcePopWithOptions(const ListPermissionResourcePopRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAction()) {
    query["action"] = request.getAction();
  }

  if (!!request.hasOperatorId()) {
    query["operatorId"] = request.getOperatorId();
  }

  if (!!request.hasOperatorType()) {
    query["operatorType"] = request.getOperatorType();
  }

  if (!!request.hasResourcePrefix()) {
    query["resourcePrefix"] = request.getResourcePrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPermissionResourcePop"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/permissions/pop")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPermissionResourcePopResponse>();
}

/**
 * @summary 获取有权限的资源,请求来源POP
 *
 * @param request ListPermissionResourcePopRequest
 * @return ListPermissionResourcePopResponse
 */
ListPermissionResourcePopResponse Client::listPermissionResourcePop(const ListPermissionResourcePopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPermissionResourcePopWithOptions(request, headers, runtime);
}

/**
 * @summary 获取该角色下的权限
 *
 * @param request ListPrivilegeByRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrivilegeByRoleResponse
 */
ListPrivilegeByRoleResponse Client::listPrivilegeByRoleWithOptions(const string &roleId, const ListPrivilegeByRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["accountId"] = request.getAccountId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrivilegeByRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/" , Darabonba::Encode::Encoder::percentEncode(roleId) , "/privileges")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrivilegeByRoleResponse>();
}

/**
 * @summary 获取该角色下的权限
 *
 * @param request ListPrivilegeByRoleRequest
 * @return ListPrivilegeByRoleResponse
 */
ListPrivilegeByRoleResponse Client::listPrivilegeByRole(const string &roleId, const ListPrivilegeByRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPrivilegeByRoleWithOptions(roleId, request, headers, runtime);
}

/**
 * @summary 查询产品环境
 *
 * @param request ListProductEnvInfosRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductEnvInfosResponse
 */
ListProductEnvInfosResponse Client::listProductEnvInfosWithOptions(const ListProductEnvInfosRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProductEnvInfos"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/commands/list-product-env")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductEnvInfosResponse>();
}

/**
 * @summary 查询产品环境
 *
 * @param request ListProductEnvInfosRequest
 * @return ListProductEnvInfosResponse
 */
ListProductEnvInfosResponse Client::listProductEnvInfos(const ListProductEnvInfosRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProductEnvInfosWithOptions(request, headers, runtime);
}

/**
 * @summary 查询产品环境
 *
 * @param request ListProductEnvsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductEnvsResponse
 */
ListProductEnvsResponse Client::listProductEnvsWithOptions(const ListProductEnvsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProductEnvs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/resources/commands/list-product-env")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductEnvsResponse>();
}

/**
 * @summary 查询产品环境
 *
 * @param request ListProductEnvsRequest
 * @return ListProductEnvsResponse
 */
ListProductEnvsResponse Client::listProductEnvs(const ListProductEnvsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProductEnvsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询/搜索产品列表
 *
 * @param request ListProductsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProductsWithOptions(const ListProductsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListProducts"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/products")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListProductsResponse>();
}

/**
 * @summary 查询/搜索产品列表
 *
 * @param request ListProductsRequest
 * @return ListProductsResponse
 */
ListProductsResponse Client::listProducts(const ListProductsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listProductsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询资源列表
 *
 * @param request ListResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResourcesWithOptions(const ListResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasProductId()) {
    query["productId"] = request.getProductId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListResources"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/resources")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListResourcesResponse>();
}

/**
 * @summary 查询资源列表
 *
 * @param request ListResourcesRequest
 * @return ListResourcesResponse
 */
ListResourcesResponse Client::listResources(const ListResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询所有审核人信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReviewersResponse
 */
ListReviewersResponse Client::listReviewersWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReviewers"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-reviews/commands/listReviewers")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReviewersResponse>();
}

/**
 * @summary 查询所有审核人信息
 *
 * @return ListReviewersResponse
 */
ListReviewersResponse Client::listReviewers() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listReviewersWithOptions(headers, runtime);
}

/**
 * @summary 查询角色列表
 *
 * @param tmpReq ListRolesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRolesWithOptions(const ListRolesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListRolesShrinkRequest request = ListRolesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRoleIds()) {
    request.setRoleIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRoleIds(), "roleIds", "json"));
  }

  json query = {};
  if (!!request.hasAuthorizerId()) {
    query["authorizerId"] = request.getAuthorizerId();
  }

  if (!!request.hasAuthorizerType()) {
    query["authorizerType"] = request.getAuthorizerType();
  }

  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPlatform()) {
    query["platform"] = request.getPlatform();
  }

  if (!!request.hasRoleIdsShrink()) {
    query["roleIds"] = request.getRoleIdsShrink();
  }

  if (!!request.hasRoleType()) {
    query["roleType"] = request.getRoleType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRoles"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRolesResponse>();
}

/**
 * @summary 查询角色列表
 *
 * @param request ListRolesRequest
 * @return ListRolesResponse
 */
ListRolesResponse Client::listRoles(const ListRolesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRolesWithOptions(request, headers, runtime);
}

/**
 * @summary 查询token列表
 *
 * @param request ListRuntimeTokensRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRuntimeTokensResponse
 */
ListRuntimeTokensResponse Client::listRuntimeTokensWithOptions(const ListRuntimeTokensRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnterpriseId()) {
    query["enterpriseId"] = request.getEnterpriseId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPbcId()) {
    query["pbcId"] = request.getPbcId();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRuntimeTokens"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services/env/tokens")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRuntimeTokensResponse>();
}

/**
 * @summary 查询token列表
 *
 * @param request ListRuntimeTokensRequest
 * @return ListRuntimeTokensResponse
 */
ListRuntimeTokensResponse Client::listRuntimeTokens(const ListRuntimeTokensRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listRuntimeTokensWithOptions(request, headers, runtime);
}

/**
 * @summary 查询服务实例列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServerInstancesResponse
 */
ListServerInstancesResponse Client::listServerInstancesWithOptions(const string &env, const string &serviceGroupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServerInstances"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/services/" , Darabonba::Encode::Encoder::percentEncode(serviceGroupId) , "/env/" , Darabonba::Encode::Encoder::percentEncode(env))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServerInstancesResponse>();
}

/**
 * @summary 查询服务实例列表
 *
 * @return ListServerInstancesResponse
 */
ListServerInstancesResponse Client::listServerInstances(const string &env, const string &serviceGroupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServerInstancesWithOptions(env, serviceGroupId, headers, runtime);
}

/**
 * @summary 查询多个服务监控指标
 *
 * @param request ListServiceMetricsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceMetricsResponse
 */
ListServiceMetricsResponse Client::listServiceMetricsWithOptions(const ListServiceMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasGroupId()) {
    query["groupId"] = request.getGroupId();
  }

  if (!!request.hasIntervalInSec()) {
    query["intervalInSec"] = request.getIntervalInSec();
  }

  if (!!request.hasIp()) {
    query["ip"] = request.getIp();
  }

  if (!!request.hasMeasures()) {
    query["measures"] = request.getMeasures();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  if (!!request.hasTopicId()) {
    query["topicId"] = request.getTopicId();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceMetrics"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceMetricsResponse>();
}

/**
 * @summary 查询多个服务监控指标
 *
 * @param request ListServiceMetricsRequest
 * @return ListServiceMetricsResponse
 */
ListServiceMetricsResponse Client::listServiceMetrics(const ListServiceMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceMetricsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询申请记录列表
 *
 * @param request ListSettledsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSettledsResponse
 */
ListSettledsResponse Client::listSettledsWithOptions(const ListSettledsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["accountId"] = request.getAccountId();
  }

  if (!!request.hasApplicant()) {
    query["applicant"] = request.getApplicant();
  }

  if (!!request.hasEnterpriseName()) {
    query["enterpriseName"] = request.getEnterpriseName();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSettleds"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/settleds")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSettledsResponse>();
}

/**
 * @summary 查询申请记录列表
 *
 * @param request ListSettledsRequest
 * @return ListSettledsResponse
 */
ListSettledsResponse Client::listSettleds(const ListSettledsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSettledsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询订阅当前组件的pbc的列表
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSubscribePbcsResponse
 */
ListSubscribePbcsResponse Client::listSubscribePbcsWithOptions(const string &pbcName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSubscribePbcs"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(pbcName) , "/commands/subscribe-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSubscribePbcsResponse>();
}

/**
 * @summary 查询订阅当前组件的pbc的列表
 *
 * @return ListSubscribePbcsResponse
 */
ListSubscribePbcsResponse Client::listSubscribePbcs(const string &pbcName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSubscribePbcsWithOptions(pbcName, headers, runtime);
}

/**
 * @summary 依赖此PBC的列表(上游PBC)
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUpstreamPbcResponse
 */
ListUpstreamPbcResponse Client::listUpstreamPbcWithOptions(const string &id, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUpstreamPbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-/versions/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/list-upstream")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUpstreamPbcResponse>();
}

/**
 * @summary 依赖此PBC的列表(上游PBC)
 *
 * @return ListUpstreamPbcResponse
 */
ListUpstreamPbcResponse Client::listUpstreamPbc(const string &id) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listUpstreamPbcWithOptions(id, headers, runtime);
}

/**
 * @summary 查询我关注的资产列表
 *
 * @param request ListWatchAssetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWatchAssetsResponse
 */
ListWatchAssetsResponse Client::listWatchAssetsWithOptions(const ListWatchAssetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccountId()) {
    query["accountId"] = request.getAccountId();
  }

  if (!!request.hasAssetType()) {
    query["assetType"] = request.getAssetType();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasUpshelfAssetId()) {
    query["upshelfAssetId"] = request.getUpshelfAssetId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWatchAssets"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/asset-watchs/commands/list-watch")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWatchAssetsResponse>();
}

/**
 * @summary 查询我关注的资产列表
 *
 * @param request ListWatchAssetsRequest
 * @return ListWatchAssetsResponse
 */
ListWatchAssetsResponse Client::listWatchAssets(const ListWatchAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWatchAssetsWithOptions(request, headers, runtime);
}

/**
 * @summary 生成跳转mq控制台链接
 *
 * @param request ObtainMqConsoleLinkRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ObtainMqConsoleLinkResponse
 */
ObtainMqConsoleLinkResponse Client::obtainMqConsoleLinkWithOptions(const ObtainMqConsoleLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "ObtainMqConsoleLink"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/mq/topic/commonds/obtainMqConsoleLink")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ObtainMqConsoleLinkResponse>();
}

/**
 * @summary 生成跳转mq控制台链接
 *
 * @param request ObtainMqConsoleLinkRequest
 * @return ObtainMqConsoleLinkResponse
 */
ObtainMqConsoleLinkResponse Client::obtainMqConsoleLink(const ObtainMqConsoleLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return obtainMqConsoleLinkWithOptions(request, headers, runtime);
}

/**
 * @summary 已有微服务开启分组
 *
 * @param request OpenServiceGroupForServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenServiceGroupForServiceResponse
 */
OpenServiceGroupForServiceResponse Client::openServiceGroupForServiceWithOptions(const OpenServiceGroupForServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "OpenServiceGroupForService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/commands/open-group")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenServiceGroupForServiceResponse>();
}

/**
 * @summary 已有微服务开启分组
 *
 * @param request OpenServiceGroupForServiceRequest
 * @return OpenServiceGroupForServiceResponse
 */
OpenServiceGroupForServiceResponse Client::openServiceGroupForService(const OpenServiceGroupForServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openServiceGroupForServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 预览组件CRD
 *
 * @param request PreviewComponentCrdSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewComponentCrdSchemaResponse
 */
PreviewComponentCrdSchemaResponse Client::previewComponentCrdSchemaWithOptions(const PreviewComponentCrdSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "PreviewComponentCrdSchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/components/commonds/preview-component-schema")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewComponentCrdSchemaResponse>();
}

/**
 * @summary 预览组件CRD
 *
 * @param request PreviewComponentCrdSchemaRequest
 * @return PreviewComponentCrdSchemaResponse
 */
PreviewComponentCrdSchemaResponse Client::previewComponentCrdSchema(const PreviewComponentCrdSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return previewComponentCrdSchemaWithOptions(request, headers, runtime);
}

/**
 * @summary 注册Buc用户
 *
 * @param request RegisterBucUserRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RegisterBucUserResponse
 */
RegisterBucUserResponse Client::registerBucUserWithOptions(const RegisterBucUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RegisterBucUser"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/bucs/logins/register")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RegisterBucUserResponse>();
}

/**
 * @summary 注册Buc用户
 *
 * @param request RegisterBucUserRequest
 * @return RegisterBucUserResponse
 */
RegisterBucUserResponse Client::registerBucUser(const RegisterBucUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return registerBucUserWithOptions(request, headers, runtime);
}

/**
 * @summary 取消关注资产
 *
 * @param request RemoveAssetWatchRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAssetWatchResponse
 */
RemoveAssetWatchResponse Client::removeAssetWatchWithOptions(const string &assetId, const RemoveAssetWatchRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAssetType()) {
    query["assetType"] = request.getAssetType();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAssetWatch"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/asset-watchs/" , Darabonba::Encode::Encoder::percentEncode(assetId) , "/commands/remove-watch")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAssetWatchResponse>();
}

/**
 * @summary 取消关注资产
 *
 * @param request RemoveAssetWatchRequest
 * @return RemoveAssetWatchResponse
 */
RemoveAssetWatchResponse Client::removeAssetWatch(const string &assetId, const RemoveAssetWatchRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeAssetWatchWithOptions(assetId, request, headers, runtime);
}

/**
 * @summary 取消依赖二方包
 *
 * @param request RemoveDependLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveDependLibraryResponse
 */
RemoveDependLibraryResponse Client::removeDependLibraryWithOptions(const string &id, const RemoveDependLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveDependLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/remove-dependency")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveDependLibraryResponse>();
}

/**
 * @summary 取消依赖二方包
 *
 * @param request RemoveDependLibraryRequest
 * @return RemoveDependLibraryResponse
 */
RemoveDependLibraryResponse Client::removeDependLibrary(const string &id, const RemoveDependLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return removeDependLibraryWithOptions(id, request, headers, runtime);
}

/**
 * @summary 用指定版本部署
 *
 * @param request RevertPdpServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevertPdpServiceResponse
 */
RevertPdpServiceResponse Client::revertPdpServiceWithOptions(const RevertPdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RevertPdpService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/deployments/commands/revert")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevertPdpServiceResponse>();
}

/**
 * @summary 用指定版本部署
 *
 * @param request RevertPdpServiceRequest
 * @return RevertPdpServiceResponse
 */
RevertPdpServiceResponse Client::revertPdpService(const RevertPdpServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revertPdpServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 撤销二方包上架审核
 *
 * @param request RevokeLibraryReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeLibraryReviewResponse
 */
RevokeLibraryReviewResponse Client::revokeLibraryReviewWithOptions(const RevokeLibraryReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RevokeLibraryReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/library-reviews/commands/revoke-review")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeLibraryReviewResponse>();
}

/**
 * @summary 撤销二方包上架审核
 *
 * @param request RevokeLibraryReviewRequest
 * @return RevokeLibraryReviewResponse
 */
RevokeLibraryReviewResponse Client::revokeLibraryReview(const RevokeLibraryReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeLibraryReviewWithOptions(request, headers, runtime);
}

/**
 * @summary 撤销Pbc上架审核
 *
 * @param request RevokePbcReviewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokePbcReviewResponse
 */
RevokePbcReviewResponse Client::revokePbcReviewWithOptions(const RevokePbcReviewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RevokePbcReview"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-reviews/commands/revoke-review")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokePbcReviewResponse>();
}

/**
 * @summary 撤销Pbc上架审核
 *
 * @param request RevokePbcReviewRequest
 * @return RevokePbcReviewResponse
 */
RevokePbcReviewResponse Client::revokePbcReview(const RevokePbcReviewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokePbcReviewWithOptions(request, headers, runtime);
}

/**
 * @summary 取消授权
 *
 * @param request RevokeRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeRoleResponse
 */
RevokeRoleResponse Client::revokeRoleWithOptions(const string &roleId, const RevokeRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RevokeRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/" , Darabonba::Encode::Encoder::percentEncode(roleId) , "/commands/revoke")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "none"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeRoleResponse>();
}

/**
 * @summary 取消授权
 *
 * @param request RevokeRoleRequest
 * @return RevokeRoleResponse
 */
RevokeRoleResponse Client::revokeRole(const string &roleId, const RevokeRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return revokeRoleWithOptions(roleId, request, headers, runtime);
}

/**
 * @summary 回滚
 *
 * @param request RollbackPdpServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return RollbackPdpServiceResponse
 */
RollbackPdpServiceResponse Client::rollbackPdpServiceWithOptions(const RollbackPdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "RollbackPdpService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/deployments/commands/rollback")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RollbackPdpServiceResponse>();
}

/**
 * @summary 回滚
 *
 * @param request RollbackPdpServiceRequest
 * @return RollbackPdpServiceResponse
 */
RollbackPdpServiceResponse Client::rollbackPdpService(const RollbackPdpServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return rollbackPdpServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 查询/搜索资产列表信息
 *
 * @param tmpReq SearchAssetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchAssetsResponse
 */
SearchAssetsResponse Client::searchAssetsWithOptions(const SearchAssetsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SearchAssetsShrinkRequest request = SearchAssetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAssetIndustrys()) {
    request.setAssetIndustrysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetIndustrys(), "assetIndustrys", "json"));
  }

  if (!!tmpReq.hasAssetTypes()) {
    request.setAssetTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAssetTypes(), "assetTypes", "json"));
  }

  json query = {};
  if (!!request.hasAssetIndustrysShrink()) {
    query["assetIndustrys"] = request.getAssetIndustrysShrink();
  }

  if (!!request.hasAssetName()) {
    query["assetName"] = request.getAssetName();
  }

  if (!!request.hasAssetTypesShrink()) {
    query["assetTypes"] = request.getAssetTypesShrink();
  }

  if (!!request.hasCompanyId()) {
    query["companyId"] = request.getCompanyId();
  }

  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchAssets"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/markets/commands/search-asset")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchAssetsResponse>();
}

/**
 * @summary 查询/搜索资产列表信息
 *
 * @param request SearchAssetsRequest
 * @return SearchAssetsResponse
 */
SearchAssetsResponse Client::searchAssets(const SearchAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchAssetsWithOptions(request, headers, runtime);
}

/**
 * @summary 查询/搜索pbc资产列表信息
 *
 * @param request SearchPbcAssetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchPbcAssetsResponse
 */
SearchPbcAssetsResponse Client::searchPbcAssetsWithOptions(const SearchPbcAssetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustry()) {
    query["industry"] = request.getIndustry();
  }

  if (!!request.hasKeyword()) {
    query["keyword"] = request.getKeyword();
  }

  if (!!request.hasOrderBy()) {
    query["order_by"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["order_direction"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["page_number"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["page_size"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchPbcAssets"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/markets/commands/search")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchPbcAssetsResponse>();
}

/**
 * @summary 查询/搜索pbc资产列表信息
 *
 * @param request SearchPbcAssetsRequest
 * @return SearchPbcAssetsResponse
 */
SearchPbcAssetsResponse Client::searchPbcAssets(const SearchPbcAssetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchPbcAssetsWithOptions(request, headers, runtime);
}

/**
 * @summary 分页查询调用链列表信息
 *
 * @param request SearchTracesByPageRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchTracesByPageResponse
 */
SearchTracesByPageResponse Client::searchTracesByPageWithOptions(const SearchTracesByPageRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["endTime"] = request.getEndTime();
  }

  if (!!request.hasEnv()) {
    query["env"] = request.getEnv();
  }

  if (!!request.hasMinDuration()) {
    query["minDuration"] = request.getMinDuration();
  }

  if (!!request.hasOperationName()) {
    query["operationName"] = request.getOperationName();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDirection()) {
    query["orderDirection"] = request.getOrderDirection();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceGroupId()) {
    query["serviceGroupId"] = request.getServiceGroupId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  if (!!request.hasStartTime()) {
    query["startTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SearchTracesByPage"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/traces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchTracesByPageResponse>();
}

/**
 * @summary 分页查询调用链列表信息
 *
 * @param request SearchTracesByPageRequest
 * @return SearchTracesByPageResponse
 */
SearchTracesByPageResponse Client::searchTracesByPage(const SearchTracesByPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchTracesByPageWithOptions(request, headers, runtime);
}

/**
 * @summary ARMS告警联系人发送手机号码验证
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendTTSVerifyLinkResponse
 */
SendTTSVerifyLinkResponse Client::sendTTSVerifyLinkWithOptions(const string &contactId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendTTSVerifyLink"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/contact/commands/phoneVerify/" , Darabonba::Encode::Encoder::percentEncode(contactId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendTTSVerifyLinkResponse>();
}

/**
 * @summary ARMS告警联系人发送手机号码验证
 *
 * @return SendTTSVerifyLinkResponse
 */
SendTTSVerifyLinkResponse Client::sendTTSVerifyLink(const string &contactId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return sendTTSVerifyLinkWithOptions(contactId, headers, runtime);
}

/**
 * @summary 订阅pbc
 *
 * @param request SubscribePbcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubscribePbcResponse
 */
SubscribePbcResponse Client::subscribePbcWithOptions(const string &pbcName, const SubscribePbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "SubscribePbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbcs/" , Darabonba::Encode::Encoder::percentEncode(pbcName) , "/commands/subscribe")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubscribePbcResponse>();
}

/**
 * @summary 订阅pbc
 *
 * @param request SubscribePbcRequest
 * @return SubscribePbcResponse
 */
SubscribePbcResponse Client::subscribePbc(const string &pbcName, const SubscribePbcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return subscribePbcWithOptions(pbcName, request, headers, runtime);
}

/**
 * @summary 同步组件的模板配置
 *
 * @param request SyncComponentTemplateConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SyncComponentTemplateConfigResponse
 */
SyncComponentTemplateConfigResponse Client::syncComponentTemplateConfigWithOptions(const SyncComponentTemplateConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SyncComponentTemplateConfig"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/components/commonds/sync-template-config")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SyncComponentTemplateConfigResponse>();
}

/**
 * @summary 同步组件的模板配置
 *
 * @param request SyncComponentTemplateConfigRequest
 * @return SyncComponentTemplateConfigResponse
 */
SyncComponentTemplateConfigResponse Client::syncComponentTemplateConfig(const SyncComponentTemplateConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return syncComponentTemplateConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 转移公司
 *
 * @param request TransferEnterpriseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TransferEnterpriseResponse
 */
TransferEnterpriseResponse Client::transferEnterpriseWithOptions(const string &enterpriseId, const TransferEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "TransferEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises/" , Darabonba::Encode::Encoder::percentEncode(enterpriseId) , "/commands/transfer")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TransferEnterpriseResponse>();
}

/**
 * @summary 转移公司
 *
 * @param request TransferEnterpriseRequest
 * @return TransferEnterpriseResponse
 */
TransferEnterpriseResponse Client::transferEnterprise(const string &enterpriseId, const TransferEnterpriseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return transferEnterpriseWithOptions(enterpriseId, request, headers, runtime);
}

/**
 * @summary 触发部署
 *
 * @param request TriggerDeploymentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TriggerDeploymentResponse
 */
TriggerDeploymentResponse Client::triggerDeploymentWithOptions(const TriggerDeploymentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "TriggerDeployment"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/deployments")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TriggerDeploymentResponse>();
}

/**
 * @summary 触发部署
 *
 * @param request TriggerDeploymentRequest
 * @return TriggerDeploymentResponse
 */
TriggerDeploymentResponse Client::triggerDeployment(const TriggerDeploymentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return triggerDeploymentWithOptions(request, headers, runtime);
}

/**
 * @summary 上架二方包
 *
 * @param request UpShelfLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpShelfLibraryResponse
 */
UpShelfLibraryResponse Client::upShelfLibraryWithOptions(const string &id, const UpShelfLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpShelfLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/up-shelf-library")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpShelfLibraryResponse>();
}

/**
 * @summary 上架二方包
 *
 * @param request UpShelfLibraryRequest
 * @return UpShelfLibraryResponse
 */
UpShelfLibraryResponse Client::upShelfLibrary(const string &id, const UpShelfLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upShelfLibraryWithOptions(id, request, headers, runtime);
}

/**
 * @summary 上架pbc版本
 *
 * @param request UpShelfPbcVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpShelfPbcVersionResponse
 */
UpShelfPbcVersionResponse Client::upShelfPbcVersionWithOptions(const string &id, const UpShelfPbcVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMarketId()) {
    query["marketId"] = request.getMarketId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpShelfPbcVersion"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(id) , "/commands/upShelf")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpShelfPbcVersionResponse>();
}

/**
 * @summary 上架pbc版本
 *
 * @param request UpShelfPbcVersionRequest
 * @return UpShelfPbcVersionResponse
 */
UpShelfPbcVersionResponse Client::upShelfPbcVersion(const string &id, const UpShelfPbcVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upShelfPbcVersionWithOptions(id, request, headers, runtime);
}

/**
 * @summary 更新组件
 *
 * @param request UpdateComponentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComponentResponse
 */
UpdateComponentResponse Client::updateComponentWithOptions(const string &id, const UpdateComponentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateComponent"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/components/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComponentResponse>();
}

/**
 * @summary 更新组件
 *
 * @param request UpdateComponentRequest
 * @return UpdateComponentResponse
 */
UpdateComponentResponse Client::updateComponent(const string &id, const UpdateComponentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateComponentWithOptions(id, request, headers, runtime);
}

/**
 * @summary 更新组件模板
 *
 * @param request UpdateComponentTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateComponentTemplateResponse
 */
UpdateComponentTemplateResponse Client::updateComponentTemplateWithOptions(const string &id, const UpdateComponentTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateComponentTemplate"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/component-templates/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateComponentTemplateResponse>();
}

/**
 * @summary 更新组件模板
 *
 * @param request UpdateComponentTemplateRequest
 * @return UpdateComponentTemplateResponse
 */
UpdateComponentTemplateResponse Client::updateComponentTemplate(const string &id, const UpdateComponentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateComponentTemplateWithOptions(id, request, headers, runtime);
}

/**
 * @summary 更新开发者信息
 *
 * @param request UpdateDeveloperRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeveloperResponse
 */
UpdateDeveloperResponse Client::updateDeveloperWithOptions(const string &accountId, const UpdateDeveloperRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateDeveloper"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/developers/" , Darabonba::Encode::Encoder::percentEncode(accountId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeveloperResponse>();
}

/**
 * @summary 更新开发者信息
 *
 * @param request UpdateDeveloperRequest
 * @return UpdateDeveloperResponse
 */
UpdateDeveloperResponse Client::updateDeveloper(const string &accountId, const UpdateDeveloperRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDeveloperWithOptions(accountId, request, headers, runtime);
}

/**
 * @summary 更新公司信息
 *
 * @param request UpdateEnterpriseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEnterpriseResponse
 */
UpdateEnterpriseResponse Client::updateEnterpriseWithOptions(const string &enterpriseId, const UpdateEnterpriseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateEnterprise"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/enterprises/" , Darabonba::Encode::Encoder::percentEncode(enterpriseId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateEnterpriseResponse>();
}

/**
 * @summary 更新公司信息
 *
 * @param request UpdateEnterpriseRequest
 * @return UpdateEnterpriseResponse
 */
UpdateEnterpriseResponse Client::updateEnterprise(const string &enterpriseId, const UpdateEnterpriseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateEnterpriseWithOptions(enterpriseId, request, headers, runtime);
}

/**
 * @summary 修改二方包信息
 *
 * @param request UpdateLibraryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLibraryResponse
 */
UpdateLibraryResponse Client::updateLibraryWithOptions(const UpdateLibraryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateLibrary"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLibraryResponse>();
}

/**
 * @summary 修改二方包信息
 *
 * @param request UpdateLibraryRequest
 * @return UpdateLibraryResponse
 */
UpdateLibraryResponse Client::updateLibrary(const UpdateLibraryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLibraryWithOptions(request, headers, runtime);
}

/**
 * @summary 更新二方包使用说明文档
 *
 * @param request UpdateLibraryInstructionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLibraryInstructionResponse
 */
UpdateLibraryInstructionResponse Client::updateLibraryInstructionWithOptions(const string &libraryId, const UpdateLibraryInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateLibraryInstruction"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/instructions")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLibraryInstructionResponse>();
}

/**
 * @summary 更新二方包使用说明文档
 *
 * @param request UpdateLibraryInstructionRequest
 * @return UpdateLibraryInstructionResponse
 */
UpdateLibraryInstructionResponse Client::updateLibraryInstruction(const string &libraryId, const UpdateLibraryInstructionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLibraryInstructionWithOptions(libraryId, request, headers, runtime);
}

/**
 * @summary 更新二方包规格
 *
 * @param request UpdateLibrarySchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLibrarySchemaResponse
 */
UpdateLibrarySchemaResponse Client::updateLibrarySchemaWithOptions(const string &libraryId, const UpdateLibrarySchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateLibrarySchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/librarys/" , Darabonba::Encode::Encoder::percentEncode(libraryId) , "/schemas")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLibrarySchemaResponse>();
}

/**
 * @summary 更新二方包规格
 *
 * @param request UpdateLibrarySchemaRequest
 * @return UpdateLibrarySchemaResponse
 */
UpdateLibrarySchemaResponse Client::updateLibrarySchema(const string &libraryId, const UpdateLibrarySchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateLibrarySchemaWithOptions(libraryId, request, headers, runtime);
}

/**
 * @summary 编辑应用报警任务
 *
 * @param request UpdateMonitorArmsAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMonitorArmsAlertResponse
 */
UpdateMonitorArmsAlertResponse Client::updateMonitorArmsAlertWithOptions(const UpdateMonitorArmsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMonitorArmsAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/updateMonitorArmsAlert")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMonitorArmsAlertResponse>();
}

/**
 * @summary 编辑应用报警任务
 *
 * @param request UpdateMonitorArmsAlertRequest
 * @return UpdateMonitorArmsAlertResponse
 */
UpdateMonitorArmsAlertResponse Client::updateMonitorArmsAlert(const UpdateMonitorArmsAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMonitorArmsAlertWithOptions(request, headers, runtime);
}

/**
 * @summary 更新联系人
 *
 * @param request UpdateMonitorContactRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMonitorContactResponse
 */
UpdateMonitorContactResponse Client::updateMonitorContactWithOptions(const UpdateMonitorContactRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMonitorContact"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/contact")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMonitorContactResponse>();
}

/**
 * @summary 更新联系人
 *
 * @param request UpdateMonitorContactRequest
 * @return UpdateMonitorContactResponse
 */
UpdateMonitorContactResponse Client::updateMonitorContact(const UpdateMonitorContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMonitorContactWithOptions(request, headers, runtime);
}

/**
 * @summary 更新联系人组
 *
 * @param request UpdateMonitorContactGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMonitorContactGroupResponse
 */
UpdateMonitorContactGroupResponse Client::updateMonitorContactGroupWithOptions(const UpdateMonitorContactGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMonitorContactGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/group")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMonitorContactGroupResponse>();
}

/**
 * @summary 更新联系人组
 *
 * @param request UpdateMonitorContactGroupRequest
 * @return UpdateMonitorContactGroupResponse
 */
UpdateMonitorContactGroupResponse Client::updateMonitorContactGroup(const UpdateMonitorContactGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMonitorContactGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 编辑MQ报警任务
 *
 * @param request UpdateMonitorMqAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMonitorMqAlertResponse
 */
UpdateMonitorMqAlertResponse Client::updateMonitorMqAlertWithOptions(const UpdateMonitorMqAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMonitorMqAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/updateMonitorMqAlert")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMonitorMqAlertResponse>();
}

/**
 * @summary 编辑MQ报警任务
 *
 * @param request UpdateMonitorMqAlertRequest
 * @return UpdateMonitorMqAlertResponse
 */
UpdateMonitorMqAlertResponse Client::updateMonitorMqAlert(const UpdateMonitorMqAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMonitorMqAlertWithOptions(request, headers, runtime);
}

/**
 * @summary 编辑日志报警任务
 *
 * @param request UpdateMonitorSlsAlertRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMonitorSlsAlertResponse
 */
UpdateMonitorSlsAlertResponse Client::updateMonitorSlsAlertWithOptions(const UpdateMonitorSlsAlertRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMonitorSlsAlert"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/alert/commands/updateMonitorSlsAlert")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMonitorSlsAlertResponse>();
}

/**
 * @summary 编辑日志报警任务
 *
 * @param request UpdateMonitorSlsAlertRequest
 * @return UpdateMonitorSlsAlertResponse
 */
UpdateMonitorSlsAlertResponse Client::updateMonitorSlsAlert(const UpdateMonitorSlsAlertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMonitorSlsAlertWithOptions(request, headers, runtime);
}

/**
 * @summary 更新webhook
 *
 * @param request UpdateMonitorWebhookRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMonitorWebhookResponse
 */
UpdateMonitorWebhookResponse Client::updateMonitorWebhookWithOptions(const UpdateMonitorWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateMonitorWebhook"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-monitor/v1/monitor/webhook")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMonitorWebhookResponse>();
}

/**
 * @summary 更新webhook
 *
 * @param request UpdateMonitorWebhookRequest
 * @return UpdateMonitorWebhookResponse
 */
UpdateMonitorWebhookResponse Client::updateMonitorWebhook(const UpdateMonitorWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMonitorWebhookWithOptions(request, headers, runtime);
}

/**
 * @summary 更新PBC的api规格
 *
 * @param request UpdatePbcApiSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePbcApiSchemaResponse
 */
UpdatePbcApiSchemaResponse Client::updatePbcApiSchemaWithOptions(const string &pbcVersionId, const UpdatePbcApiSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePbcApiSchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(pbcVersionId) , "/api-schemas")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePbcApiSchemaResponse>();
}

/**
 * @summary 更新PBC的api规格
 *
 * @param request UpdatePbcApiSchemaRequest
 * @return UpdatePbcApiSchemaResponse
 */
UpdatePbcApiSchemaResponse Client::updatePbcApiSchema(const string &pbcVersionId, const UpdatePbcApiSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePbcApiSchemaWithOptions(pbcVersionId, request, headers, runtime);
}

/**
 * @summary 更新PBC使用说明文档
 *
 * @param request UpdatePbcInstructionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePbcInstructionResponse
 */
UpdatePbcInstructionResponse Client::updatePbcInstructionWithOptions(const string &pbcVersionId, const UpdatePbcInstructionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePbcInstruction"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(pbcVersionId) , "/instructions")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePbcInstructionResponse>();
}

/**
 * @summary 更新PBC使用说明文档
 *
 * @param request UpdatePbcInstructionRequest
 * @return UpdatePbcInstructionResponse
 */
UpdatePbcInstructionResponse Client::updatePbcInstruction(const string &pbcVersionId, const UpdatePbcInstructionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePbcInstructionWithOptions(pbcVersionId, request, headers, runtime);
}

/**
 * @summary 更新PBC规格
 *
 * @param request UpdatePbcSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePbcSchemaResponse
 */
UpdatePbcSchemaResponse Client::updatePbcSchemaWithOptions(const string &pbcVersionId, const UpdatePbcSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePbcSchema"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(pbcVersionId) , "/schemas")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePbcSchemaResponse>();
}

/**
 * @summary 更新PBC规格
 *
 * @param request UpdatePbcSchemaRequest
 * @return UpdatePbcSchemaResponse
 */
UpdatePbcSchemaResponse Client::updatePbcSchema(const string &pbcVersionId, const UpdatePbcSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePbcSchemaWithOptions(pbcVersionId, request, headers, runtime);
}

/**
 * @summary 更新PBC版本
 *
 * @param request UpdatePbcVersionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePbcVersionResponse
 */
UpdatePbcVersionResponse Client::updatePbcVersionWithOptions(const string &id, const UpdatePbcVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePbcVersion"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/catalog/v1/pbc-versions/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePbcVersionResponse>();
}

/**
 * @summary 更新PBC版本
 *
 * @param request UpdatePbcVersionRequest
 * @return UpdatePbcVersionResponse
 */
UpdatePbcVersionResponse Client::updatePbcVersion(const string &id, const UpdatePbcVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePbcVersionWithOptions(id, request, headers, runtime);
}

/**
 * @summary 更新服务配置信息
 *
 * @param request UpdatePdpConfigRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePdpConfigResponse
 */
UpdatePdpConfigResponse Client::updatePdpConfigWithOptions(const UpdatePdpConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePdpConfig"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/configs")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePdpConfigResponse>();
}

/**
 * @summary 更新服务配置信息
 *
 * @param request UpdatePdpConfigRequest
 * @return UpdatePdpConfigResponse
 */
UpdatePdpConfigResponse Client::updatePdpConfig(const UpdatePdpConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePdpConfigWithOptions(request, headers, runtime);
}

/**
 * @summary 更新泳道
 *
 * @param request UpdatePdpLaneRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePdpLaneResponse
 */
UpdatePdpLaneResponse Client::updatePdpLaneWithOptions(const string &id, const UpdatePdpLaneRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePdpLane"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/lanes/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePdpLaneResponse>();
}

/**
 * @summary 更新泳道
 *
 * @param request UpdatePdpLaneRequest
 * @return UpdatePdpLaneResponse
 */
UpdatePdpLaneResponse Client::updatePdpLane(const string &id, const UpdatePdpLaneRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePdpLaneWithOptions(id, request, headers, runtime);
}

/**
 * @summary 更新PdpPbc
 *
 * @param request UpdatePdpPbcRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePdpPbcResponse
 */
UpdatePdpPbcResponse Client::updatePdpPbcWithOptions(const UpdatePdpPbcRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePdpPbc"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/pbcs")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePdpPbcResponse>();
}

/**
 * @summary 更新PdpPbc
 *
 * @param request UpdatePdpPbcRequest
 * @return UpdatePdpPbcResponse
 */
UpdatePdpPbcResponse Client::updatePdpPbc(const UpdatePdpPbcRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePdpPbcWithOptions(request, headers, runtime);
}

/**
 * @summary 更新服务信息
 *
 * @param request UpdatePdpServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePdpServiceResponse
 */
UpdatePdpServiceResponse Client::updatePdpServiceWithOptions(const UpdatePdpServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePdpService"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/services")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePdpServiceResponse>();
}

/**
 * @summary 更新服务信息
 *
 * @param request UpdatePdpServiceRequest
 * @return UpdatePdpServiceResponse
 */
UpdatePdpServiceResponse Client::updatePdpService(const UpdatePdpServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePdpServiceWithOptions(request, headers, runtime);
}

/**
 * @summary 更新服务分组信息
 *
 * @param request UpdatePdpServiceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePdpServiceGroupResponse
 */
UpdatePdpServiceGroupResponse Client::updatePdpServiceGroupWithOptions(const UpdatePdpServiceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdatePdpServiceGroup"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-service/v1/groups")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePdpServiceGroupResponse>();
}

/**
 * @summary 更新服务分组信息
 *
 * @param request UpdatePdpServiceGroupRequest
 * @return UpdatePdpServiceGroupResponse
 */
UpdatePdpServiceGroupResponse Client::updatePdpServiceGroup(const UpdatePdpServiceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePdpServiceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary 更新产品
 *
 * @param request UpdateProductRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProductWithOptions(const UpdateProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateProduct"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-pbc/v1/products")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateProductResponse>();
}

/**
 * @summary 更新产品
 *
 * @param request UpdateProductRequest
 * @return UpdateProductResponse
 */
UpdateProductResponse Client::updateProduct(const UpdateProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateProductWithOptions(request, headers, runtime);
}

/**
 * @summary 更新资源
 *
 * @param request UpdateResourceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResourceWithOptions(const string &id, const UpdateResourceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateResource"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pdp-resource/v1/resources/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateResourceResponse>();
}

/**
 * @summary 更新资源
 *
 * @param request UpdateResourceRequest
 * @return UpdateResourceResponse
 */
UpdateResourceResponse Client::updateResource(const string &id, const UpdateResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateResourceWithOptions(id, request, headers, runtime);
}

/**
 * @summary 更新角色信息
 *
 * @param request UpdateRoleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRoleWithOptions(const string &roleId, const UpdateRoleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateRole"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/roles/role-id/" , Darabonba::Encode::Encoder::percentEncode(roleId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRoleResponse>();
}

/**
 * @summary 更新角色信息
 *
 * @param request UpdateRoleRequest
 * @return UpdateRoleResponse
 */
UpdateRoleResponse Client::updateRole(const string &roleId, const UpdateRoleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateRoleWithOptions(roleId, request, headers, runtime);
}

/**
 * @summary 更新申请记录
 *
 * @param request UpdateSettledRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSettledResponse
 */
UpdateSettledResponse Client::updateSettledWithOptions(const string &id, const UpdateSettledRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateSettled"},
    {"version" , "2021-11-15"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manager/v1/settleds/" , Darabonba::Encode::Encoder::percentEncode(id))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSettledResponse>();
}

/**
 * @summary 更新申请记录
 *
 * @param request UpdateSettledRequest
 * @return UpdateSettledResponse
 */
UpdateSettledResponse Client::updateSettled(const string &id, const UpdateSettledRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSettledWithOptions(id, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Neuron20211115