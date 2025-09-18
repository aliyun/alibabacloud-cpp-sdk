#include <darabonba/Core.hpp>
#include <alibabacloud/Emr20210320.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Emr20210320::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Emr20210320
{

AlibabaCloud::Emr20210320::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-beijing" , "emr.aliyuncs.com"},
    {"cn-hangzhou" , "emr.aliyuncs.com"},
    {"cn-shanghai" , "emr.aliyuncs.com"},
    {"cn-shenzhen" , "emr.aliyuncs.com"},
    {"ap-southeast-1" , "emr.aliyuncs.com"},
    {"us-west-1" , "emr.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "emr.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "emr.aliyuncs.com"},
    {"cn-north-2-gov-1" , "emr.aliyuncs.com"},
    {"ap-northeast-2-pop" , "emr.aliyuncs.com"},
    {"cn-beijing-finance-1" , "emr.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "emr.aliyuncs.com"},
    {"cn-beijing-gov-1" , "emr.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "emr.aliyuncs.com"},
    {"cn-edge-1" , "emr.aliyuncs.com"},
    {"cn-fujian" , "emr.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "emr.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "emr.aliyuncs.com"},
    {"cn-hangzhou-finance" , "emr.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "emr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "emr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "emr.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "emr.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "emr.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "emr.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "emr.aliyuncs.com"},
    {"cn-qingdao-nebula" , "emr.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "emr.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "emr.aliyuncs.com"},
    {"cn-shanghai-inner" , "emr.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "emr.aliyuncs.com"},
    {"cn-shenzhen-inner" , "emr.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "emr.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "emr.aliyuncs.com"},
    {"cn-wuhan" , "emr.aliyuncs.com"},
    {"cn-yushanfang" , "emr.aliyuncs.com"},
    {"cn-zhangbei" , "emr.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "emr.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "emr.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "emr.aliyuncs.com"},
    {"eu-west-1-oxs" , "emr.aliyuncs.com"},
    {"rus-west-1-pop" , "emr.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("emr", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Creates a predefined API operation template. The template contains information about an API operation, including the basic structure, request method, URL path, request parameters, and response format.
 *
 * @param request CreateApiTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiTemplateResponse
 */
CreateApiTemplateResponse Client::createApiTemplateWithOptions(const CreateApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApiTemplate"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiTemplateResponse>();
}

/**
 * @summary Creates a predefined API operation template. The template contains information about an API operation, including the basic structure, request method, URL path, request parameters, and response format.
 *
 * @param request CreateApiTemplateRequest
 * @return CreateApiTemplateResponse
 */
CreateApiTemplateResponse Client::createApiTemplate(const CreateApiTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApiTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a pay-as-you-go or subscription cluster.
 *
 * @param request CreateClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createClusterWithOptions(const CreateClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationConfigs()) {
    query["ApplicationConfigs"] = request.applicationConfigs();
  }

  if (!!request.hasApplications()) {
    query["Applications"] = request.applications();
  }

  if (!!request.hasBootstrapScripts()) {
    query["BootstrapScripts"] = request.bootstrapScripts();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.deletionProtection();
  }

  if (!!request.hasDeployMode()) {
    query["DeployMode"] = request.deployMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasNodeAttributes()) {
    query["NodeAttributes"] = request.nodeAttributes();
  }

  if (!!request.hasNodeGroups()) {
    query["NodeGroups"] = request.nodeGroups();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReleaseVersion()) {
    query["ReleaseVersion"] = request.releaseVersion();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityMode()) {
    query["SecurityMode"] = request.securityMode();
  }

  if (!!request.hasSubscriptionConfig()) {
    query["SubscriptionConfig"] = request.subscriptionConfig();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCluster"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClusterResponse>();
}

/**
 * @summary Creates a pay-as-you-go or subscription cluster.
 *
 * @param request CreateClusterRequest
 * @return CreateClusterResponse
 */
CreateClusterResponse Client::createCluster(const CreateClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClusterWithOptions(request, runtime);
}

/**
 * @summary Creates a node group.
 *
 * @description 创建节点组。
 *
 * @param request CreateNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNodeGroupResponse
 */
CreateNodeGroupResponse Client::createNodeGroupWithOptions(const CreateNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNodeGroup()) {
    query["NodeGroup"] = request.nodeGroup();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNodeGroup"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNodeGroupResponse>();
}

/**
 * @summary Creates a node group.
 *
 * @description 创建节点组。
 *
 * @param request CreateNodeGroupRequest
 * @return CreateNodeGroupResponse
 */
CreateNodeGroupResponse Client::createNodeGroup(const CreateNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNodeGroupWithOptions(request, runtime);
}

/**
 * @summary Adds a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
 *
 * @param request CreateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScriptWithOptions(const CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.scriptType();
  }

  if (!!request.hasScripts()) {
    query["Scripts"] = request.scripts();
  }

  if (!!request.hasTimeoutSecs()) {
    query["TimeoutSecs"] = request.timeoutSecs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScript"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScriptResponse>();
}

/**
 * @summary Adds a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
 *
 * @param request CreateScriptRequest
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScript(const CreateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWithOptions(request, runtime);
}

/**
 * @summary Creates multiple users at a time.
 *
 * @description You can call this operation to create multiple users at a time.
 *
 * @param request CreateUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsersWithOptions(const CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUsers"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUsersResponse>();
}

/**
 * @summary Creates multiple users at a time.
 *
 * @description You can call this operation to create multiple users at a time.
 *
 * @param request CreateUsersRequest
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsers(const CreateUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUsersWithOptions(request, runtime);
}

/**
 * @summary Performs a scale-out operation on the target node group.
 *
 * @param request DecreaseNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DecreaseNodesResponse
 */
DecreaseNodesResponse Client::decreaseNodesWithOptions(const DecreaseNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchInterval()) {
    query["BatchInterval"] = request.batchInterval();
  }

  if (!!request.hasBatchSize()) {
    query["BatchSize"] = request.batchSize();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDecreaseNodeCount()) {
    query["DecreaseNodeCount"] = request.decreaseNodeCount();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DecreaseNodes"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DecreaseNodesResponse>();
}

/**
 * @summary Performs a scale-out operation on the target node group.
 *
 * @param request DecreaseNodesRequest
 * @return DecreaseNodesResponse
 */
DecreaseNodesResponse Client::decreaseNodes(const DecreaseNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return decreaseNodesWithOptions(request, runtime);
}

/**
 * @summary Deletes an API operation template.
 *
 * @param request DeleteApiTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiTemplateResponse
 */
DeleteApiTemplateResponse Client::deleteApiTemplateWithOptions(const DeleteApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiTemplate"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiTemplateResponse>();
}

/**
 * @summary Deletes an API operation template.
 *
 * @param request DeleteApiTemplateRequest
 * @return DeleteApiTemplateResponse
 */
DeleteApiTemplateResponse Client::deleteApiTemplate(const DeleteApiTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApiTemplateWithOptions(request, runtime);
}

/**
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCluster"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClusterResponse>();
}

/**
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
 *
 * @param request DeleteScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScriptWithOptions(const DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.scriptType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScript"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScriptResponse>();
}

/**
 * @summary Deletes a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
 *
 * @param request DeleteScriptRequest
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScript(const DeleteScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptWithOptions(request, runtime);
}

/**
 * @summary Deletes multiple users at a time.
 *
 * @description Deletes multiple users at a time.
 *
 * @param tmpReq DeleteUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUsersResponse
 */
DeleteUsersResponse Client::deleteUsersWithOptions(const DeleteUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteUsersShrinkRequest request = DeleteUsersShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUserNames()) {
    request.setUserNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.userNames(), "UserNames", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.clusterId();
  }

  if (!!request.hasUserNamesShrink()) {
    body["UserNames"] = request.userNamesShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteUsers"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUsersResponse>();
}

/**
 * @summary Deletes multiple users at a time.
 *
 * @description Deletes multiple users at a time.
 *
 * @param request DeleteUsersRequest
 * @return DeleteUsersResponse
 */
DeleteUsersResponse Client::deleteUsers(const DeleteUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUsersWithOptions(request, runtime);
}

/**
 * @param request ExportApplicationConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportApplicationConfigsResponse
 */
ExportApplicationConfigsResponse Client::exportApplicationConfigsWithOptions(const ExportApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationConfigFiles()) {
    query["ApplicationConfigFiles"] = request.applicationConfigFiles();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasExportMode()) {
    query["ExportMode"] = request.exportMode();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.fileFormat();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportApplicationConfigs"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportApplicationConfigsResponse>();
}

/**
 * @param request ExportApplicationConfigsRequest
 * @return ExportApplicationConfigsResponse
 */
ExportApplicationConfigsResponse Client::exportApplicationConfigs(const ExportApplicationConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportApplicationConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed configuration information about an API operation template.
 *
 * @param request GetApiTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiTemplateResponse
 */
GetApiTemplateResponse Client::getApiTemplateWithOptions(const GetApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApiTemplate"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApiTemplateResponse>();
}

/**
 * @summary Queries the detailed configuration information about an API operation template.
 *
 * @param request GetApiTemplateRequest
 * @return GetApiTemplateResponse
 */
GetApiTemplateResponse Client::getApiTemplate(const GetApiTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApiTemplateWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an application.
 *
 * @description 查询应用详情。
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetApplication"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetApplicationResponse>();
}

/**
 * @summary Retrieves the details of an application.
 *
 * @description 查询应用详情。
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an auto scaling activity.
 *
 * @param request GetAutoScalingActivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingActivityResponse
 */
GetAutoScalingActivityResponse Client::getAutoScalingActivityWithOptions(const GetAutoScalingActivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScalingActivityId()) {
    query["ScalingActivityId"] = request.scalingActivityId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoScalingActivity"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoScalingActivityResponse>();
}

/**
 * @summary Queries the information about an auto scaling activity.
 *
 * @param request GetAutoScalingActivityRequest
 * @return GetAutoScalingActivityResponse
 */
GetAutoScalingActivityResponse Client::getAutoScalingActivity(const GetAutoScalingActivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoScalingActivityWithOptions(request, runtime);
}

/**
 * @summary Queries custom auto scaling rules.
 *
 * @param request GetAutoScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingPolicyResponse
 */
GetAutoScalingPolicyResponse Client::getAutoScalingPolicyWithOptions(const GetAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAutoScalingPolicy"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAutoScalingPolicyResponse>();
}

/**
 * @summary Queries custom auto scaling rules.
 *
 * @param request GetAutoScalingPolicyRequest
 * @return GetAutoScalingPolicyResponse
 */
GetAutoScalingPolicyResponse Client::getAutoScalingPolicy(const GetAutoScalingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoScalingPolicyWithOptions(request, runtime);
}

/**
 * @summary Obtains the details of a cluster.
 *
 * @param request GetClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterResponse
 */
GetClusterResponse Client::getClusterWithOptions(const GetClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCluster"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterResponse>();
}

/**
 * @summary Obtains the details of a cluster.
 *
 * @param request GetClusterRequest
 * @return GetClusterResponse
 */
GetClusterResponse Client::getCluster(const GetClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterWithOptions(request, runtime);
}

/**
 * @summary Obtains metadata of the E-MapReduce (EMR) cluster that you want to clone. This helps you call the CreateCluster API operation to quickly create an EMR cluster.
 *
 * @param request GetClusterCloneMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterCloneMetaResponse
 */
GetClusterCloneMetaResponse Client::getClusterCloneMetaWithOptions(const GetClusterCloneMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetClusterCloneMeta"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetClusterCloneMetaResponse>();
}

/**
 * @summary Obtains metadata of the E-MapReduce (EMR) cluster that you want to clone. This helps you call the CreateCluster API operation to quickly create an EMR cluster.
 *
 * @param request GetClusterCloneMetaRequest
 * @return GetClusterCloneMetaResponse
 */
GetClusterCloneMetaResponse Client::getClusterCloneMeta(const GetClusterCloneMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getClusterCloneMetaWithOptions(request, runtime);
}

/**
 * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
 *
 * @description get one doctor analysis app
 *
 * @param request GetDoctorApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorApplicationResponse
 */
GetDoctorApplicationResponse Client::getDoctorApplicationWithOptions(const GetDoctorApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorApplication"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorApplicationResponse>();
}

/**
 * @summary Obtains job analysis information on E-MapReduce (EMR) Doctor.
 *
 * @description get one doctor analysis app
 *
 * @param request GetDoctorApplicationRequest
 * @return GetDoctorApplicationResponse
 */
GetDoctorApplicationResponse Client::getDoctorApplication(const GetDoctorApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorApplicationWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about resource usage in a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description get one specific luster engine queue by <type, name>
 *
 * @param request GetDoctorComputeSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorComputeSummaryResponse
 */
GetDoctorComputeSummaryResponse Client::getDoctorComputeSummaryWithOptions(const GetDoctorComputeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentInfo()) {
    query["ComponentInfo"] = request.componentInfo();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorComputeSummary"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorComputeSummaryResponse>();
}

/**
 * @summary Obtains the information about resource usage in a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description get one specific luster engine queue by <type, name>
 *
 * @param request GetDoctorComputeSummaryRequest
 * @return GetDoctorComputeSummaryResponse
 */
GetDoctorComputeSummaryResponse Client::getDoctorComputeSummary(const GetDoctorComputeSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorComputeSummaryWithOptions(request, runtime);
}

/**
 * @summary Obtains the metrics of an HBase cluster.
 *
 * @description get Doctor HBaseCluster
 *
 * @param request GetDoctorHBaseClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHBaseClusterResponse
 */
GetDoctorHBaseClusterResponse Client::getDoctorHBaseClusterWithOptions(const GetDoctorHBaseClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHBaseCluster"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHBaseClusterResponse>();
}

/**
 * @summary Obtains the metrics of an HBase cluster.
 *
 * @description get Doctor HBaseCluster
 *
 * @param request GetDoctorHBaseClusterRequest
 * @return GetDoctorHBaseClusterResponse
 */
GetDoctorHBaseClusterResponse Client::getDoctorHBaseCluster(const GetDoctorHBaseClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHBaseClusterWithOptions(request, runtime);
}

/**
 * @summary Get HBase Region information.
 *
 * @description List Doctor HBase Regions
 *
 * @param request GetDoctorHBaseRegionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHBaseRegionResponse
 */
GetDoctorHBaseRegionResponse Client::getDoctorHBaseRegionWithOptions(const GetDoctorHBaseRegionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasHbaseRegionId()) {
    query["HbaseRegionId"] = request.hbaseRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHBaseRegion"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHBaseRegionResponse>();
}

/**
 * @summary Get HBase Region information.
 *
 * @description List Doctor HBase Regions
 *
 * @param request GetDoctorHBaseRegionRequest
 * @return GetDoctorHBaseRegionResponse
 */
GetDoctorHBaseRegionResponse Client::getDoctorHBaseRegion(const GetDoctorHBaseRegionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHBaseRegionWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about an HBase region server.
 *
 * @description get Doctor HBaseRegionServer
 *
 * @param request GetDoctorHBaseRegionServerRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHBaseRegionServerResponse
 */
GetDoctorHBaseRegionServerResponse Client::getDoctorHBaseRegionServerWithOptions(const GetDoctorHBaseRegionServerRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionServerHost()) {
    query["RegionServerHost"] = request.regionServerHost();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHBaseRegionServer"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHBaseRegionServerResponse>();
}

/**
 * @summary Obtains the information about an HBase region server.
 *
 * @description get Doctor HBaseRegionServer
 *
 * @param request GetDoctorHBaseRegionServerRequest
 * @return GetDoctorHBaseRegionServerResponse
 */
GetDoctorHBaseRegionServerResponse Client::getDoctorHBaseRegionServer(const GetDoctorHBaseRegionServerRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHBaseRegionServerWithOptions(request, runtime);
}

/**
 * @summary Get HBase Table information.
 *
 * @description get Doctor HBaseTable
 *
 * @param request GetDoctorHBaseTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHBaseTableResponse
 */
GetDoctorHBaseTableResponse Client::getDoctorHBaseTableWithOptions(const GetDoctorHBaseTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHBaseTable"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHBaseTableResponse>();
}

/**
 * @summary Get HBase Table information.
 *
 * @description get Doctor HBaseTable
 *
 * @param request GetDoctorHBaseTableRequest
 * @return GetDoctorHBaseTableResponse
 */
GetDoctorHBaseTableResponse Client::getDoctorHBaseTable(const GetDoctorHBaseTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHBaseTableWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of the Hadoop Distributed File System (HDFS) storage resources of a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor HBaseTableRegions
 *
 * @param request GetDoctorHDFSClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHDFSClusterResponse
 */
GetDoctorHDFSClusterResponse Client::getDoctorHDFSClusterWithOptions(const GetDoctorHDFSClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHDFSCluster"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHDFSClusterResponse>();
}

/**
 * @summary Obtains the analysis results of the Hadoop Distributed File System (HDFS) storage resources of a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor HBaseTableRegions
 *
 * @param request GetDoctorHDFSClusterRequest
 * @return GetDoctorHDFSClusterResponse
 */
GetDoctorHDFSClusterResponse Client::getDoctorHDFSCluster(const GetDoctorHDFSClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHDFSClusterWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of a specific Hadoop Distributed File System (HDFS) directory of a cluster. The depth of the directory is not greater than five.
 *
 * @description get Doctor HDFSNode
 *
 * @param request GetDoctorHDFSDirectoryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHDFSDirectoryResponse
 */
GetDoctorHDFSDirectoryResponse Client::getDoctorHDFSDirectoryWithOptions(const GetDoctorHDFSDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasDirPath()) {
    query["DirPath"] = request.dirPath();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHDFSDirectory"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHDFSDirectoryResponse>();
}

/**
 * @summary Obtains the analysis results of a specific Hadoop Distributed File System (HDFS) directory of a cluster. The depth of the directory is not greater than five.
 *
 * @description get Doctor HDFSNode
 *
 * @param request GetDoctorHDFSDirectoryRequest
 * @return GetDoctorHDFSDirectoryResponse
 */
GetDoctorHDFSDirectoryResponse Client::getDoctorHDFSDirectory(const GetDoctorHDFSDirectoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHDFSDirectoryWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of a Hive cluster.
 *
 * @description list Doctor Hive Cluster
 *
 * @param request GetDoctorHiveClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHiveClusterResponse
 */
GetDoctorHiveClusterResponse Client::getDoctorHiveClusterWithOptions(const GetDoctorHiveClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHiveCluster"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHiveClusterResponse>();
}

/**
 * @summary Obtains the analysis results of a Hive cluster.
 *
 * @description list Doctor Hive Cluster
 *
 * @param request GetDoctorHiveClusterRequest
 * @return GetDoctorHiveClusterResponse
 */
GetDoctorHiveClusterResponse Client::getDoctorHiveCluster(const GetDoctorHiveClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHiveClusterWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of a Hive database.
 *
 * @description get Doctor Hive Database
 *
 * @param request GetDoctorHiveDatabaseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHiveDatabaseResponse
 */
GetDoctorHiveDatabaseResponse Client::getDoctorHiveDatabaseWithOptions(const GetDoctorHiveDatabaseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.databaseName();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHiveDatabase"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHiveDatabaseResponse>();
}

/**
 * @summary Obtains the analysis results of a Hive database.
 *
 * @description get Doctor Hive Database
 *
 * @param request GetDoctorHiveDatabaseRequest
 * @return GetDoctorHiveDatabaseResponse
 */
GetDoctorHiveDatabaseResponse Client::getDoctorHiveDatabase(const GetDoctorHiveDatabaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHiveDatabaseWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of a specific Hive table in a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description get Doctor Hive Table
 *
 * @param request GetDoctorHiveTableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorHiveTableResponse
 */
GetDoctorHiveTableResponse Client::getDoctorHiveTableWithOptions(const GetDoctorHiveTableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.tableName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorHiveTable"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorHiveTableResponse>();
}

/**
 * @summary Obtains the analysis results of a specific Hive table in a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description get Doctor Hive Table
 *
 * @param request GetDoctorHiveTableRequest
 * @return GetDoctorHiveTableResponse
 */
GetDoctorHiveTableResponse Client::getDoctorHiveTable(const GetDoctorHiveTableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorHiveTableWithOptions(request, runtime);
}

/**
 * @summary Obtains the basic running information about a job on E-MapReduce (EMR) Doctor.
 *
 * @description Get realtime job by yarn
 *
 * @param request GetDoctorJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorJobResponse
 */
GetDoctorJobResponse Client::getDoctorJobWithOptions(const GetDoctorJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorJob"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorJobResponse>();
}

/**
 * @summary Obtains the basic running information about a job on E-MapReduce (EMR) Doctor.
 *
 * @description Get realtime job by yarn
 *
 * @param request GetDoctorJobRequest
 * @return GetDoctorJobResponse
 */
GetDoctorJobResponse Client::getDoctorJob(const GetDoctorJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorJobWithOptions(request, runtime);
}

/**
 * @summary Obtain the analysis result report of a specified component from EMR Doctor.
 *
 * @description get specify component\\"s report analysis by EMR Doctor
 *
 * @param request GetDoctorReportComponentSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDoctorReportComponentSummaryResponse
 */
GetDoctorReportComponentSummaryResponse Client::getDoctorReportComponentSummaryWithOptions(const GetDoctorReportComponentSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentType()) {
    query["ComponentType"] = request.componentType();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDoctorReportComponentSummary"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDoctorReportComponentSummaryResponse>();
}

/**
 * @summary Obtain the analysis result report of a specified component from EMR Doctor.
 *
 * @description get specify component\\"s report analysis by EMR Doctor
 *
 * @param request GetDoctorReportComponentSummaryRequest
 * @return GetDoctorReportComponentSummaryResponse
 */
GetDoctorReportComponentSummaryResponse Client::getDoctorReportComponentSummary(const GetDoctorReportComponentSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDoctorReportComponentSummaryWithOptions(request, runtime);
}

/**
 * @param request GetManagedScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManagedScalingPolicyResponse
 */
GetManagedScalingPolicyResponse Client::getManagedScalingPolicyWithOptions(const GetManagedScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetManagedScalingPolicy"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetManagedScalingPolicyResponse>();
}

/**
 * @param request GetManagedScalingPolicyRequest
 * @return GetManagedScalingPolicyResponse
 */
GetManagedScalingPolicyResponse Client::getManagedScalingPolicy(const GetManagedScalingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getManagedScalingPolicyWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to obtain the details of a node group.
 *
 * @description 获取节点组详情。
 *
 * @param request GetNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeGroupResponse
 */
GetNodeGroupResponse Client::getNodeGroupWithOptions(const GetNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNodeGroup"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNodeGroupResponse>();
}

/**
 * @summary You can call this operation to obtain the details of a node group.
 *
 * @description 获取节点组详情。
 *
 * @param request GetNodeGroupRequest
 * @return GetNodeGroupResponse
 */
GetNodeGroupResponse Client::getNodeGroup(const GetNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNodeGroupWithOptions(request, runtime);
}

/**
 * @summary Gets the details of an asynchronous operation.
 *
 * @param request GetOperationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetOperationResponse
 */
GetOperationResponse Client::getOperationWithOptions(const GetOperationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasOperationId()) {
    query["OperationId"] = request.operationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOperation"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOperationResponse>();
}

/**
 * @summary Gets the details of an asynchronous operation.
 *
 * @param request GetOperationRequest
 * @return GetOperationResponse
 */
GetOperationResponse Client::getOperation(const GetOperationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOperationWithOptions(request, runtime);
}

/**
 * @summary Scales out the node group.
 *
 * @param request IncreaseNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IncreaseNodesResponse
 */
IncreaseNodesResponse Client::increaseNodesWithOptions(const IncreaseNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationConfigs()) {
    query["ApplicationConfigs"] = request.applicationConfigs();
  }

  if (!!request.hasAutoPayOrder()) {
    query["AutoPayOrder"] = request.autoPayOrder();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.autoRenew();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasIncreaseNodeCount()) {
    query["IncreaseNodeCount"] = request.increaseNodeCount();
  }

  if (!!request.hasMinIncreaseNodeCount()) {
    query["MinIncreaseNodeCount"] = request.minIncreaseNodeCount();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasPaymentDuration()) {
    query["PaymentDuration"] = request.paymentDuration();
  }

  if (!!request.hasPaymentDurationUnit()) {
    query["PaymentDurationUnit"] = request.paymentDurationUnit();
  }

  if (!!request.hasPromotions()) {
    query["Promotions"] = request.promotions();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "IncreaseNodes"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<IncreaseNodesResponse>();
}

/**
 * @summary Scales out the node group.
 *
 * @param request IncreaseNodesRequest
 * @return IncreaseNodesResponse
 */
IncreaseNodesResponse Client::increaseNodes(const IncreaseNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return increaseNodesWithOptions(request, runtime);
}

/**
 * @summary Adds an EMR resource to a resource group. A resource can belong to only one resource group.
 *
 * @param request JoinResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return JoinResourceGroupResponse
 */
JoinResourceGroupResponse Client::joinResourceGroupWithOptions(const JoinResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "JoinResourceGroup"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<JoinResourceGroupResponse>();
}

/**
 * @summary Adds an EMR resource to a resource group. A resource can belong to only one resource group.
 *
 * @param request JoinResourceGroupRequest
 * @return JoinResourceGroupResponse
 */
JoinResourceGroupResponse Client::joinResourceGroup(const JoinResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return joinResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 查询API模板
 *
 * @param request ListApiTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiTemplatesResponse
 */
ListApiTemplatesResponse Client::listApiTemplatesWithOptions(const ListApiTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.templateIds();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiTemplates"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiTemplatesResponse>();
}

/**
 * @summary 查询API模板
 *
 * @param request ListApiTemplatesRequest
 * @return ListApiTemplatesResponse
 */
ListApiTemplatesResponse Client::listApiTemplates(const ListApiTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of the application.
 *
 * @description 查询应用配置。
 *
 * @param request ListApplicationConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationConfigsResponse
 */
ListApplicationConfigsResponse Client::listApplicationConfigsWithOptions(const ListApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasConfigFileName()) {
    query["ConfigFileName"] = request.configFileName();
  }

  if (!!request.hasConfigItemKey()) {
    query["ConfigItemKey"] = request.configItemKey();
  }

  if (!!request.hasConfigItemValue()) {
    query["ConfigItemValue"] = request.configItemValue();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplicationConfigs"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationConfigsResponse>();
}

/**
 * @summary Queries the configurations of the application.
 *
 * @description 查询应用配置。
 *
 * @param request ListApplicationConfigsRequest
 * @return ListApplicationConfigsResponse
 */
ListApplicationConfigsResponse Client::listApplicationConfigs(const ListApplicationConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationConfigsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of applications.
 *
 * @param request ListApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplicationsWithOptions(const ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationNames()) {
    query["ApplicationNames"] = request.applicationNames();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApplications"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApplicationsResponse>();
}

/**
 * @summary Queries a list of applications.
 *
 * @param request ListApplicationsRequest
 * @return ListApplicationsResponse
 */
ListApplicationsResponse Client::listApplications(const ListApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApplicationsWithOptions(request, runtime);
}

/**
 * @summary Queries a list of auto scaling activities.
 *
 * @param request ListAutoScalingActivitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoScalingActivitiesResponse
 */
ListAutoScalingActivitiesResponse Client::listAutoScalingActivitiesWithOptions(const ListAutoScalingActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceChargeTypes()) {
    query["InstanceChargeTypes"] = request.instanceChargeTypes();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScalingActivityStates()) {
    query["ScalingActivityStates"] = request.scalingActivityStates();
  }

  if (!!request.hasScalingActivityType()) {
    query["ScalingActivityType"] = request.scalingActivityType();
  }

  if (!!request.hasScalingPolicyType()) {
    query["ScalingPolicyType"] = request.scalingPolicyType();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.scalingRuleName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAutoScalingActivities"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAutoScalingActivitiesResponse>();
}

/**
 * @summary Queries a list of auto scaling activities.
 *
 * @param request ListAutoScalingActivitiesRequest
 * @return ListAutoScalingActivitiesResponse
 */
ListAutoScalingActivitiesResponse Client::listAutoScalingActivities(const ListAutoScalingActivitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoScalingActivitiesWithOptions(request, runtime);
}

/**
 * @summary Queries E-MapReduce (EMR) clusters.
 *
 * @param request ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterIds()) {
    query["ClusterIds"] = request.clusterIds();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterStates()) {
    query["ClusterStates"] = request.clusterStates();
  }

  if (!!request.hasClusterTypes()) {
    query["ClusterTypes"] = request.clusterTypes();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasPaymentTypes()) {
    query["PaymentTypes"] = request.paymentTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClusters"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClustersResponse>();
}

/**
 * @summary Queries E-MapReduce (EMR) clusters.
 *
 * @param request ListClustersRequest
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClusters(const ListClustersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClustersWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of component instances.
 *
 * @param request ListComponentInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentInstancesResponse
 */
ListComponentInstancesResponse Client::listComponentInstancesWithOptions(const ListComponentInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationNames()) {
    query["ApplicationNames"] = request.applicationNames();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentNames()) {
    query["ComponentNames"] = request.componentNames();
  }

  if (!!request.hasComponentStates()) {
    query["ComponentStates"] = request.componentStates();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasNodeNames()) {
    query["NodeNames"] = request.nodeNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponentInstances"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentInstancesResponse>();
}

/**
 * @summary Retrieves the list of component instances.
 *
 * @param request ListComponentInstancesRequest
 * @return ListComponentInstancesResponse
 */
ListComponentInstancesResponse Client::listComponentInstances(const ListComponentInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComponentInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of components.
 *
 * @param request ListComponentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponentsWithOptions(const ListComponentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationNames()) {
    query["ApplicationNames"] = request.applicationNames();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentNames()) {
    query["ComponentNames"] = request.componentNames();
  }

  if (!!request.hasComponentStates()) {
    query["ComponentStates"] = request.componentStates();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListComponents"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListComponentsResponse>();
}

/**
 * @summary Retrieves a list of components.
 *
 * @param request ListComponentsRequest
 * @return ListComponentsResponse
 */
ListComponentsResponse Client::listComponents(const ListComponentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listComponentsWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of multiple jobs on E-MapReduce (EMR) Doctor.
 *
 * @description list all doctor analysis apps
 *
 * @param request ListDoctorApplicationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorApplicationsResponse
 */
ListDoctorApplicationsResponse Client::listDoctorApplicationsWithOptions(const ListDoctorApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasQueues()) {
    query["Queues"] = request.queues();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.types();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorApplications"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorApplicationsResponse>();
}

/**
 * @summary Obtains the analysis results of multiple jobs on E-MapReduce (EMR) Doctor.
 *
 * @description list all doctor analysis apps
 *
 * @param request ListDoctorApplicationsRequest
 * @return ListDoctorApplicationsResponse
 */
ListDoctorApplicationsResponse Client::listDoctorApplications(const ListDoctorApplicationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorApplicationsWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about resource usage by resource type in a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor analysis result of cluster engine queue view
 *
 * @param request ListDoctorComputeSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorComputeSummaryResponse
 */
ListDoctorComputeSummaryResponse Client::listDoctorComputeSummaryWithOptions(const ListDoctorComputeSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentTypes()) {
    query["ComponentTypes"] = request.componentTypes();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorComputeSummary"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorComputeSummaryResponse>();
}

/**
 * @summary Obtains the information about resource usage by resource type in a cluster on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor analysis result of cluster engine queue view
 *
 * @param request ListDoctorComputeSummaryRequest
 * @return ListDoctorComputeSummaryResponse
 */
ListDoctorComputeSummaryResponse Client::listDoctorComputeSummary(const ListDoctorComputeSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorComputeSummaryWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about multiple HBase RegionServers at a time.
 *
 * @description list Doctor HBaseRegionServers
 *
 * @param request ListDoctorHBaseRegionServersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorHBaseRegionServersResponse
 */
ListDoctorHBaseRegionServersResponse Client::listDoctorHBaseRegionServersWithOptions(const ListDoctorHBaseRegionServersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRegionServerHosts()) {
    query["RegionServerHosts"] = request.regionServerHosts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorHBaseRegionServers"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorHBaseRegionServersResponse>();
}

/**
 * @summary Obtains the information about multiple HBase RegionServers at a time.
 *
 * @description list Doctor HBaseRegionServers
 *
 * @param request ListDoctorHBaseRegionServersRequest
 * @return ListDoctorHBaseRegionServersResponse
 */
ListDoctorHBaseRegionServersResponse Client::listDoctorHBaseRegionServers(const ListDoctorHBaseRegionServersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorHBaseRegionServersWithOptions(request, runtime);
}

/**
 * @summary Obtains the information about multiple HBase tables at a time.
 *
 * @description list Doctor HBaseTables
 *
 * @param request ListDoctorHBaseTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorHBaseTablesResponse
 */
ListDoctorHBaseTablesResponse Client::listDoctorHBaseTablesWithOptions(const ListDoctorHBaseTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTableNames()) {
    query["TableNames"] = request.tableNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorHBaseTables"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorHBaseTablesResponse>();
}

/**
 * @summary Obtains the information about multiple HBase tables at a time.
 *
 * @description list Doctor HBaseTables
 *
 * @param request ListDoctorHBaseTablesRequest
 * @return ListDoctorHBaseTablesResponse
 */
ListDoctorHBaseTablesResponse Client::listDoctorHBaseTables(const ListDoctorHBaseTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorHBaseTablesWithOptions(request, runtime);
}

/**
 * @description list Doctor HDFSNodes
 *
 * @param request ListDoctorHDFSDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorHDFSDirectoriesResponse
 */
ListDoctorHDFSDirectoriesResponse Client::listDoctorHDFSDirectoriesWithOptions(const ListDoctorHDFSDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasDirPath()) {
    query["DirPath"] = request.dirPath();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorHDFSDirectories"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorHDFSDirectoriesResponse>();
}

/**
 * @description list Doctor HDFSNodes
 *
 * @param request ListDoctorHDFSDirectoriesRequest
 * @return ListDoctorHDFSDirectoriesResponse
 */
ListDoctorHDFSDirectoriesResponse Client::listDoctorHDFSDirectories(const ListDoctorHDFSDirectoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorHDFSDirectoriesWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of Hadoop Distributed File System (HDFS) storage resources for multiple owners or groups at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor HDFS UGIs
 *
 * @param request ListDoctorHDFSUGIRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorHDFSUGIResponse
 */
ListDoctorHDFSUGIResponse Client::listDoctorHDFSUGIWithOptions(const ListDoctorHDFSUGIRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorHDFSUGI"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorHDFSUGIResponse>();
}

/**
 * @summary Obtains the analysis results of Hadoop Distributed File System (HDFS) storage resources for multiple owners or groups at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor HDFS UGIs
 *
 * @param request ListDoctorHDFSUGIRequest
 * @return ListDoctorHDFSUGIResponse
 */
ListDoctorHDFSUGIResponse Client::listDoctorHDFSUGI(const ListDoctorHDFSUGIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorHDFSUGIWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of multiple Hive databases at a time.
 *
 * @description list Doctor Hive Databases
 *
 * @param request ListDoctorHiveDatabasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorHiveDatabasesResponse
 */
ListDoctorHiveDatabasesResponse Client::listDoctorHiveDatabasesWithOptions(const ListDoctorHiveDatabasesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDatabaseNames()) {
    query["DatabaseNames"] = request.databaseNames();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorHiveDatabases"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorHiveDatabasesResponse>();
}

/**
 * @summary Obtains the analysis results of multiple Hive databases at a time.
 *
 * @description list Doctor Hive Databases
 *
 * @param request ListDoctorHiveDatabasesRequest
 * @return ListDoctorHiveDatabasesResponse
 */
ListDoctorHiveDatabasesResponse Client::listDoctorHiveDatabases(const ListDoctorHiveDatabasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorHiveDatabasesWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of multiple Hive tables at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor Hive Tables
 *
 * @param request ListDoctorHiveTablesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorHiveTablesResponse
 */
ListDoctorHiveTablesResponse Client::listDoctorHiveTablesWithOptions(const ListDoctorHiveTablesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.dateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTableNames()) {
    query["TableNames"] = request.tableNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorHiveTables"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorHiveTablesResponse>();
}

/**
 * @summary Obtains the analysis results of multiple Hive tables at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list Doctor Hive Tables
 *
 * @param request ListDoctorHiveTablesRequest
 * @return ListDoctorHiveTablesResponse
 */
ListDoctorHiveTablesResponse Client::listDoctorHiveTables(const ListDoctorHiveTablesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorHiveTablesWithOptions(request, runtime);
}

/**
 * @summary Obtains the basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list realtime jobs by yarn
 *
 * @param request ListDoctorJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorJobsResponse
 */
ListDoctorJobsResponse Client::listDoctorJobsWithOptions(const ListDoctorJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppIds()) {
    query["AppIds"] = request.appIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndRange()) {
    query["EndRange"] = request.endRange();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasQueues()) {
    query["Queues"] = request.queues();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartRange()) {
    query["StartRange"] = request.startRange();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.types();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorJobs"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorJobsResponse>();
}

/**
 * @summary Obtains the basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list realtime jobs by yarn
 *
 * @param request ListDoctorJobsRequest
 * @return ListDoctorJobsResponse
 */
ListDoctorJobsResponse Client::listDoctorJobs(const ListDoctorJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorJobsWithOptions(request, runtime);
}

/**
 * @summary Obtains the summary of basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list stats groupBy jobs by yarn
 *
 * @param request ListDoctorJobsStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorJobsStatsResponse
 */
ListDoctorJobsStatsResponse Client::listDoctorJobsStatsWithOptions(const ListDoctorJobsStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasEndRange()) {
    query["EndRange"] = request.endRange();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.groupBy();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartRange()) {
    query["StartRange"] = request.startRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorJobsStats"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorJobsStatsResponse>();
}

/**
 * @summary Obtains the summary of basic running information about multiple jobs at a time on E-MapReduce (EMR) Doctor.
 *
 * @description list stats groupBy jobs by yarn
 *
 * @param request ListDoctorJobsStatsRequest
 * @return ListDoctorJobsStatsResponse
 */
ListDoctorJobsStatsResponse Client::listDoctorJobsStats(const ListDoctorJobsStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorJobsStatsWithOptions(request, runtime);
}

/**
 * @summary Obtains the overall analysis result reports of E-MapReduce (EMR) Doctor at a time.
 *
 * @description list all reports analysis by emr doctor
 *
 * @param request ListDoctorReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorReportsResponse
 */
ListDoctorReportsResponse Client::listDoctorReportsWithOptions(const ListDoctorReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDoctorReports"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDoctorReportsResponse>();
}

/**
 * @summary Obtains the overall analysis result reports of E-MapReduce (EMR) Doctor at a time.
 *
 * @description list all reports analysis by emr doctor
 *
 * @param request ListDoctorReportsRequest
 * @return ListDoctorReportsResponse
 */
ListDoctorReportsResponse Client::listDoctorReports(const ListDoctorReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDoctorReportsWithOptions(request, runtime);
}

/**
 * @summary Lists instance types.
 *
 * @param request ListInstanceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceTypesResponse
 */
ListInstanceTypesResponse Client::listInstanceTypesWithOptions(const ListInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasDeployMode()) {
    query["DeployMode"] = request.deployMode();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.instanceType();
  }

  if (!!request.hasIsModification()) {
    query["IsModification"] = request.isModification();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasNodeGroupType()) {
    query["NodeGroupType"] = request.nodeGroupType();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.paymentType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasReleaseVersion()) {
    query["ReleaseVersion"] = request.releaseVersion();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstanceTypes"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstanceTypesResponse>();
}

/**
 * @summary Lists instance types.
 *
 * @param request ListInstanceTypesRequest
 * @return ListInstanceTypesResponse
 */
ListInstanceTypesResponse Client::listInstanceTypes(const ListInstanceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of node groups in an EMR cluster.
 *
 * @param request ListNodeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeGroupsResponse
 */
ListNodeGroupsResponse Client::listNodeGroupsWithOptions(const ListNodeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeGroupIds()) {
    query["NodeGroupIds"] = request.nodeGroupIds();
  }

  if (!!request.hasNodeGroupNames()) {
    query["NodeGroupNames"] = request.nodeGroupNames();
  }

  if (!!request.hasNodeGroupStates()) {
    query["NodeGroupStates"] = request.nodeGroupStates();
  }

  if (!!request.hasNodeGroupTypes()) {
    query["NodeGroupTypes"] = request.nodeGroupTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.zoneId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodeGroups"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodeGroupsResponse>();
}

/**
 * @summary Queries the list of node groups in an EMR cluster.
 *
 * @param request ListNodeGroupsRequest
 * @return ListNodeGroupsResponse
 */
ListNodeGroupsResponse Client::listNodeGroups(const ListNodeGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodeGroupsWithOptions(request, runtime);
}

/**
 * @summary Queries the node list of an EMR cluster.
 *
 * @param request ListNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodesWithOptions(const ListNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasNodeGroupIds()) {
    query["NodeGroupIds"] = request.nodeGroupIds();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.nodeIds();
  }

  if (!!request.hasNodeNames()) {
    query["NodeNames"] = request.nodeNames();
  }

  if (!!request.hasNodeStates()) {
    query["NodeStates"] = request.nodeStates();
  }

  if (!!request.hasPrivateIps()) {
    query["PrivateIps"] = request.privateIps();
  }

  if (!!request.hasPublicIps()) {
    query["PublicIps"] = request.publicIps();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNodes"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNodesResponse>();
}

/**
 * @summary Queries the node list of an EMR cluster.
 *
 * @param request ListNodesRequest
 * @return ListNodesResponse
 */
ListNodesResponse Client::listNodes(const ListNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNodesWithOptions(request, runtime);
}

/**
 * @summary Queries the major E-MapReduce (EMR) versions.
 *
 * @description 查询主版本。
 *
 * @param request ListReleaseVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReleaseVersionsResponse
 */
ListReleaseVersionsResponse Client::listReleaseVersionsWithOptions(const ListReleaseVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.clusterType();
  }

  if (!!request.hasIaasType()) {
    query["IaasType"] = request.iaasType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListReleaseVersions"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListReleaseVersionsResponse>();
}

/**
 * @summary Queries the major E-MapReduce (EMR) versions.
 *
 * @description 查询主版本。
 *
 * @param request ListReleaseVersionsRequest
 * @return ListReleaseVersionsResponse
 */
ListReleaseVersionsResponse Client::listReleaseVersions(const ListReleaseVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listReleaseVersionsWithOptions(request, runtime);
}

/**
 * @summary Query EMR cluster bootstrap scripts or regular scripts.
 *
 * @param request ListScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScriptsWithOptions(const ListScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.scriptName();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.scriptType();
  }

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.statuses();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScripts"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptsResponse>();
}

/**
 * @summary Query EMR cluster bootstrap scripts or regular scripts.
 *
 * @param request ListScriptsRequest
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScripts(const ListScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are bound to an EMR cluster.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags that are bound to an EMR cluster.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a user.
 *
 * @description Queries a user.
 *
 * @param request ListUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsersWithOptions(const ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  if (!!request.hasUserNames()) {
    query["UserNames"] = request.userNames();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUsers"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUsersResponse>();
}

/**
 * @summary Queries a user.
 *
 * @description Queries a user.
 *
 * @param request ListUsersRequest
 * @return ListUsersResponse
 */
ListUsersResponse Client::listUsers(const ListUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUsersWithOptions(request, runtime);
}

/**
 * @summary Adds a custom auto scaling rule.
 *
 * @description You can call this operation to configure auto scaling policies.
 *
 * @param request PutAutoScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutAutoScalingPolicyResponse
 */
PutAutoScalingPolicyResponse Client::putAutoScalingPolicyWithOptions(const PutAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasConstraints()) {
    query["Constraints"] = request.constraints();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScalingRules()) {
    query["ScalingRules"] = request.scalingRules();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutAutoScalingPolicy"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutAutoScalingPolicyResponse>();
}

/**
 * @summary Adds a custom auto scaling rule.
 *
 * @description You can call this operation to configure auto scaling policies.
 *
 * @param request PutAutoScalingPolicyRequest
 * @return PutAutoScalingPolicyResponse
 */
PutAutoScalingPolicyResponse Client::putAutoScalingPolicy(const PutAutoScalingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putAutoScalingPolicyWithOptions(request, runtime);
}

/**
 * @param request PutManagedScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutManagedScalingPolicyResponse
 */
PutManagedScalingPolicyResponse Client::putManagedScalingPolicyWithOptions(const PutManagedScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasConstraints()) {
    query["Constraints"] = request.constraints();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PutManagedScalingPolicy"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutManagedScalingPolicyResponse>();
}

/**
 * @param request PutManagedScalingPolicyRequest
 * @return PutManagedScalingPolicyResponse
 */
PutManagedScalingPolicyResponse Client::putManagedScalingPolicy(const PutManagedScalingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putManagedScalingPolicyWithOptions(request, runtime);
}

/**
 * @summary Removes an auto scaling policy.
 *
 * @param request RemoveAutoScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveAutoScalingPolicyResponse
 */
RemoveAutoScalingPolicyResponse Client::removeAutoScalingPolicyWithOptions(const RemoveAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveAutoScalingPolicy"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveAutoScalingPolicyResponse>();
}

/**
 * @summary Removes an auto scaling policy.
 *
 * @param request RemoveAutoScalingPolicyRequest
 * @return RemoveAutoScalingPolicyResponse
 */
RemoveAutoScalingPolicyResponse Client::removeAutoScalingPolicy(const RemoveAutoScalingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeAutoScalingPolicyWithOptions(request, runtime);
}

/**
 * @param request RunApiTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunApiTemplateResponse
 */
RunApiTemplateResponse Client::runApiTemplateWithOptions(const RunApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunApiTemplate"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunApiTemplateResponse>();
}

/**
 * @param request RunApiTemplateRequest
 * @return RunApiTemplateResponse
 */
RunApiTemplateResponse Client::runApiTemplate(const RunApiTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runApiTemplateWithOptions(request, runtime);
}

/**
 * @summary Manages a service deployed in a cluster. For example, you can call this operation to start pr stop a service.
 *
 * @param request RunApplicationActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunApplicationActionResponse
 */
RunApplicationActionResponse Client::runApplicationActionWithOptions(const RunApplicationActionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasActionName()) {
    query["ActionName"] = request.actionName();
  }

  if (!!request.hasBatchSize()) {
    query["BatchSize"] = request.batchSize();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasComponentInstanceSelector()) {
    query["ComponentInstanceSelector"] = request.componentInstanceSelector();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasExecuteStrategy()) {
    query["ExecuteStrategy"] = request.executeStrategy();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasRollingExecute()) {
    query["RollingExecute"] = request.rollingExecute();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RunApplicationAction"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunApplicationActionResponse>();
}

/**
 * @summary Manages a service deployed in a cluster. For example, you can call this operation to start pr stop a service.
 *
 * @param request RunApplicationActionRequest
 * @return RunApplicationActionResponse
 */
RunApplicationActionResponse Client::runApplicationAction(const RunApplicationActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runApplicationActionWithOptions(request, runtime);
}

/**
 * @summary Creates a pay-as-you-go or subscription E-MapReduce (EMR) cluster.
 *
 * @description RunCluster is an upgraded version of CreateCluster. RunCluster uses HTTPS POST requests and supports more parameters. Complex parameters, such as parameters of the object and array types, are in the JSON format and are more friendly for users who use CLI.
 *
 * @param tmpReq RunClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunClusterResponse
 */
RunClusterResponse Client::runClusterWithOptions(const RunClusterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  RunClusterShrinkRequest request = RunClusterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApplicationConfigs()) {
    request.setApplicationConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applicationConfigs(), "ApplicationConfigs", "json"));
  }

  if (!!tmpReq.hasApplications()) {
    request.setApplicationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.applications(), "Applications", "json"));
  }

  if (!!tmpReq.hasBootstrapScripts()) {
    request.setBootstrapScriptsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.bootstrapScripts(), "BootstrapScripts", "json"));
  }

  if (!!tmpReq.hasNodeAttributes()) {
    request.setNodeAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeAttributes(), "NodeAttributes", "json"));
  }

  if (!!tmpReq.hasNodeGroups()) {
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.nodeGroups(), "NodeGroups", "json"));
  }

  if (!!tmpReq.hasPromotions()) {
    request.setPromotionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.promotions(), "Promotions", "json"));
  }

  if (!!tmpReq.hasSubscriptionConfig()) {
    request.setSubscriptionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.subscriptionConfig(), "SubscriptionConfig", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasPromotionsShrink()) {
    query["Promotions"] = request.promotionsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  if (!!request.hasApplicationConfigsShrink()) {
    body["ApplicationConfigs"] = request.applicationConfigsShrink();
  }

  if (!!request.hasApplicationsShrink()) {
    body["Applications"] = request.applicationsShrink();
  }

  if (!!request.hasBootstrapScriptsShrink()) {
    body["BootstrapScripts"] = request.bootstrapScriptsShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.clusterName();
  }

  if (!!request.hasClusterType()) {
    body["ClusterType"] = request.clusterType();
  }

  if (!!request.hasDeletionProtection()) {
    body["DeletionProtection"] = request.deletionProtection();
  }

  if (!!request.hasDeployMode()) {
    body["DeployMode"] = request.deployMode();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasNodeAttributesShrink()) {
    body["NodeAttributes"] = request.nodeAttributesShrink();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.nodeGroupsShrink();
  }

  if (!!request.hasPaymentType()) {
    body["PaymentType"] = request.paymentType();
  }

  if (!!request.hasReleaseVersion()) {
    body["ReleaseVersion"] = request.releaseVersion();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSecurityMode()) {
    body["SecurityMode"] = request.securityMode();
  }

  if (!!request.hasSubscriptionConfigShrink()) {
    body["SubscriptionConfig"] = request.subscriptionConfigShrink();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.tagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "RunCluster"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RunClusterResponse>();
}

/**
 * @summary Creates a pay-as-you-go or subscription E-MapReduce (EMR) cluster.
 *
 * @description RunCluster is an upgraded version of CreateCluster. RunCluster uses HTTPS POST requests and supports more parameters. Complex parameters, such as parameters of the object and array types, are in the JSON format and are more friendly for users who use CLI.
 *
 * @param request RunClusterRequest
 * @return RunClusterResponse
 */
RunClusterResponse Client::runCluster(const RunClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return runClusterWithOptions(request, runtime);
}

/**
 * @summary Binds tags to a specified EMR cluster.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Binds tags to a specified EMR cluster.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Unbinds tags from a specified column in an EMR cluster. If the tag is not bound to other resources, the tag is automatically deleted.
 *
 * @param request UntagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.tagKeys();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Unbinds tags from a specified column in an EMR cluster. If the tag is not bound to other resources, the tag is automatically deleted.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Updates an API operation template.
 *
 * @description 修改集群模板
 *
 * @param request UpdateApiTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiTemplateResponse
 */
UpdateApiTemplateResponse Client::updateApiTemplateWithOptions(const UpdateApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.apiName();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApiTemplate"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiTemplateResponse>();
}

/**
 * @summary Updates an API operation template.
 *
 * @description 修改集群模板
 *
 * @param request UpdateApiTemplateRequest
 * @return UpdateApiTemplateResponse
 */
UpdateApiTemplateResponse Client::updateApiTemplate(const UpdateApiTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApiTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the application configurations.
 *
 * @param request UpdateApplicationConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationConfigsResponse
 */
UpdateApplicationConfigsResponse Client::updateApplicationConfigsWithOptions(const UpdateApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.applicationName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasConfigAction()) {
    query["ConfigAction"] = request.configAction();
  }

  if (!!request.hasConfigScope()) {
    query["ConfigScope"] = request.configScope();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.nodeGroupId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.nodeId();
  }

  if (!!request.hasRefreshConfig()) {
    query["RefreshConfig"] = request.refreshConfig();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationConfigs()) {
    bodyFlat["ApplicationConfigs"] = request.applicationConfigs();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApplicationConfigs"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApplicationConfigsResponse>();
}

/**
 * @summary Updates the application configurations.
 *
 * @param request UpdateApplicationConfigsRequest
 * @return UpdateApplicationConfigsResponse
 */
UpdateApplicationConfigsResponse Client::updateApplicationConfigs(const UpdateApplicationConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApplicationConfigsWithOptions(request, runtime);
}

/**
 * @summary Updates cluster attributes.
 *
 * @param request UpdateClusterAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterAttributeResponse
 */
UpdateClusterAttributeResponse Client::updateClusterAttributeWithOptions(const UpdateClusterAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.clusterName();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.deletionProtection();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClusterAttribute"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterAttributeResponse>();
}

/**
 * @summary Updates cluster attributes.
 *
 * @param request UpdateClusterAttributeRequest
 * @return UpdateClusterAttributeResponse
 */
UpdateClusterAttributeResponse Client::updateClusterAttribute(const UpdateClusterAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClusterAttributeWithOptions(request, runtime);
}

/**
 * @summary Updates a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
 *
 * @param tmpReq UpdateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScriptResponse
 */
UpdateScriptResponse Client::updateScriptWithOptions(const UpdateScriptRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateScriptShrinkRequest request = UpdateScriptShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScript()) {
    request.setScriptShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.script(), "Script", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasScriptShrink()) {
    query["Script"] = request.scriptShrink();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.scriptId();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.scriptType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateScript"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScriptResponse>();
}

/**
 * @summary Updates a bootstrap action or a common script of an E-MapReduce (EMR) cluster.
 *
 * @param request UpdateScriptRequest
 * @return UpdateScriptResponse
 */
UpdateScriptResponse Client::updateScript(const UpdateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScriptWithOptions(request, runtime);
}

/**
 * @summary Updates the information about a user.
 *
 * @description Updates the information about a user.
 *
 * @param request UpdateUserAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserAttributeResponse
 */
UpdateUserAttributeResponse Client::updateUserAttributeWithOptions(const UpdateUserAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.clusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.password();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.userName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserAttribute"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserAttributeResponse>();
}

/**
 * @summary Updates the information about a user.
 *
 * @description Updates the information about a user.
 *
 * @param request UpdateUserAttributeRequest
 * @return UpdateUserAttributeResponse
 */
UpdateUserAttributeResponse Client::updateUserAttribute(const UpdateUserAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserAttributeWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Emr20210320