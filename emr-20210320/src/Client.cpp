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
    {"rus-west-1-pop" , "emr.aliyuncs.com"},
    {"us-east-1" , "emr.us-east-1.aliyuncs.com"},
    {"me-east-1" , "emr.me-east-1.aliyuncs.com"},
    {"me-central-1" , "emr.me-central-1.aliyuncs.com"},
    {"eu-west-1" , "emr.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "emr.eu-central-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "emr.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu" , "emr.cn-wulanchabu.aliyuncs.com"},
    {"cn-qingdao" , "emr.cn-qingdao.aliyuncs.com"},
    {"cn-huhehaote" , "emr.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "emr.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "emr.cn-heyuan-acdr-1.aliyuncs.com"},
    {"cn-chengdu" , "emr.cn-chengdu.aliyuncs.com"},
    {"ap-southeast-5" , "emr.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "emr.ap-southeast-3.aliyuncs.com"},
    {"ap-northeast-1" , "emr.ap-northeast-1.aliyuncs.com"}
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
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
    query["ApplicationConfigs"] = request.getApplicationConfigs();
  }

  if (!!request.hasApplications()) {
    query["Applications"] = request.getApplications();
  }

  if (!!request.hasBootstrapScripts()) {
    query["BootstrapScripts"] = request.getBootstrapScripts();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDeployMode()) {
    query["DeployMode"] = request.getDeployMode();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNodeAttributes()) {
    query["NodeAttributes"] = request.getNodeAttributes();
  }

  if (!!request.hasNodeGroups()) {
    query["NodeGroups"] = request.getNodeGroups();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReleaseVersion()) {
    query["ReleaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityMode()) {
    query["SecurityMode"] = request.getSecurityMode();
  }

  if (!!request.hasSubscriptionConfig()) {
    query["SubscriptionConfig"] = request.getSubscriptionConfig();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeGroup()) {
    query["NodeGroup"] = request.getNodeGroup();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Creates a bootstrap script or a regular cluster script.
 *
 * @param request CreateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScriptWithOptions(const CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.getScriptType();
  }

  if (!!request.hasScripts()) {
    query["Scripts"] = request.getScripts();
  }

  if (!!request.hasTimeoutSecs()) {
    query["TimeoutSecs"] = request.getTimeoutSecs();
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
 * @summary Creates a bootstrap script or a regular cluster script.
 *
 * @param request CreateScriptRequest
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScript(const CreateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWithOptions(request, runtime);
}

/**
 * @summary Creates users in a batch.
 *
 * @description Creates users in a batch.
 *
 * @param request CreateUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsersWithOptions(const CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.getUsers();
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
 * @summary Creates users in a batch.
 *
 * @description Creates users in a batch.
 *
 * @param request CreateUsersRequest
 * @return CreateUsersResponse
 */
CreateUsersResponse Client::createUsers(const CreateUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUsersWithOptions(request, runtime);
}

/**
 * @summary Scales in a target node group.
 *
 * @param request DecreaseNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DecreaseNodesResponse
 */
DecreaseNodesResponse Client::decreaseNodesWithOptions(const DecreaseNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBatchInterval()) {
    query["BatchInterval"] = request.getBatchInterval();
  }

  if (!!request.hasBatchSize()) {
    query["BatchSize"] = request.getBatchSize();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDecreaseNodeCount()) {
    query["DecreaseNodeCount"] = request.getDecreaseNodeCount();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Scales in a target node group.
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
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes a pay-as-you-go cluster.
 *
 * @param request DeleteClusterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteClusterWithOptions(const DeleteClusterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes a pay-as-you-go cluster.
 *
 * @param request DeleteClusterRequest
 * @return DeleteClusterResponse
 */
DeleteClusterResponse Client::deleteCluster(const DeleteClusterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClusterWithOptions(request, runtime);
}

/**
 * @summary Deletes a created cluster node group.
 *
 * @param request DeleteNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNodeGroupResponse
 */
DeleteNodeGroupResponse Client::deleteNodeGroupWithOptions(const DeleteNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNodeGroup"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNodeGroupResponse>();
}

/**
 * @summary Deletes a created cluster node group.
 *
 * @param request DeleteNodeGroupRequest
 * @return DeleteNodeGroupResponse
 */
DeleteNodeGroupResponse Client::deleteNodeGroup(const DeleteNodeGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNodeGroupWithOptions(request, runtime);
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.getScriptType();
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
    request.setUserNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUserNames(), "UserNames", "json"));
  }

  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasClusterId()) {
    body["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasUserNamesShrink()) {
    body["UserNames"] = request.getUserNamesShrink();
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
 * @summary Exports the configurations of a specified service in a cluster.
 *
 * @param request ExportApplicationConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportApplicationConfigsResponse
 */
ExportApplicationConfigsResponse Client::exportApplicationConfigsWithOptions(const ExportApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationConfigFiles()) {
    query["ApplicationConfigFiles"] = request.getApplicationConfigFiles();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConfigScope()) {
    query["ConfigScope"] = request.getConfigScope();
  }

  if (!!request.hasExportMode()) {
    query["ExportMode"] = request.getExportMode();
  }

  if (!!request.hasFileFormat()) {
    query["FileFormat"] = request.getFileFormat();
  }

  if (!!request.hasNodeGroupIds()) {
    query["NodeGroupIds"] = request.getNodeGroupIds();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Exports the configurations of a specified service in a cluster.
 *
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
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @description Queries the details of an application.
 *
 * @param request GetApplicationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplicationWithOptions(const GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @description Queries the details of an application.
 *
 * @param request GetApplicationRequest
 * @return GetApplicationResponse
 */
GetApplicationResponse Client::getApplication(const GetApplicationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApplicationWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an Auto Scaling activity.
 *
 * @param request GetAutoScalingActivityRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingActivityResponse
 */
GetAutoScalingActivityResponse Client::getAutoScalingActivityWithOptions(const GetAutoScalingActivityRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingActivityId()) {
    query["ScalingActivityId"] = request.getScalingActivityId();
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
 * @summary Retrieves the details of an Auto Scaling activity.
 *
 * @param request GetAutoScalingActivityRequest
 * @return GetAutoScalingActivityResponse
 */
GetAutoScalingActivityResponse Client::getAutoScalingActivity(const GetAutoScalingActivityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAutoScalingActivityWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a custom Auto Scaling policy.
 *
 * @param request GetAutoScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAutoScalingPolicyResponse
 */
GetAutoScalingPolicyResponse Client::getAutoScalingPolicyWithOptions(const GetAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the details of a custom Auto Scaling policy.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the clone metadata of an E-MapReduce (EMR) cluster. You can use this metadata to quickly create a cluster by calling the CreateCluster operation.
 *
 * @param request GetClusterCloneMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetClusterCloneMetaResponse
 */
GetClusterCloneMetaResponse Client::getClusterCloneMetaWithOptions(const GetClusterCloneMetaRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the clone metadata of an E-MapReduce (EMR) cluster. You can use this metadata to quickly create a cluster by calling the CreateCluster operation.
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentInfo()) {
    query["ComponentInfo"] = request.getComponentInfo();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasHbaseRegionId()) {
    query["HbaseRegionId"] = request.getHbaseRegionId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionServerHost()) {
    query["RegionServerHost"] = request.getRegionServerHost();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasDirPath()) {
    query["DirPath"] = request.getDirPath();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDatabaseName()) {
    query["DatabaseName"] = request.getDatabaseName();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTableName()) {
    query["TableName"] = request.getTableName();
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
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentType()) {
    query["ComponentType"] = request.getComponentType();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the details of a managed scaling policy.
 *
 * @param request GetManagedScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetManagedScalingPolicyResponse
 */
GetManagedScalingPolicyResponse Client::getManagedScalingPolicyWithOptions(const GetManagedScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves the details of a managed scaling policy.
 *
 * @param request GetManagedScalingPolicyRequest
 * @return GetManagedScalingPolicyResponse
 */
GetManagedScalingPolicyResponse Client::getManagedScalingPolicy(const GetManagedScalingPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getManagedScalingPolicyWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a node group.
 *
 * @description Queries the details of a node group.
 *
 * @param request GetNodeGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNodeGroupResponse
 */
GetNodeGroupResponse Client::getNodeGroupWithOptions(const GetNodeGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the details of a node group.
 *
 * @description Queries the details of a node group.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasOperationId()) {
    query["OperationId"] = request.getOperationId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Scales out a target node group.
 *
 * @param request IncreaseNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return IncreaseNodesResponse
 */
IncreaseNodesResponse Client::increaseNodesWithOptions(const IncreaseNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationConfigs()) {
    query["ApplicationConfigs"] = request.getApplicationConfigs();
  }

  if (!!request.hasAutoPayOrder()) {
    query["AutoPayOrder"] = request.getAutoPayOrder();
  }

  if (!!request.hasAutoRenew()) {
    query["AutoRenew"] = request.getAutoRenew();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasIncreaseNodeCount()) {
    query["IncreaseNodeCount"] = request.getIncreaseNodeCount();
  }

  if (!!request.hasMinIncreaseNodeCount()) {
    query["MinIncreaseNodeCount"] = request.getMinIncreaseNodeCount();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasPaymentDuration()) {
    query["PaymentDuration"] = request.getPaymentDuration();
  }

  if (!!request.hasPaymentDurationUnit()) {
    query["PaymentDurationUnit"] = request.getPaymentDurationUnit();
  }

  if (!!request.hasPromotions()) {
    query["Promotions"] = request.getPromotions();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Scales out a target node group.
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
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Lists API templates.
 *
 * @param request ListApiTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiTemplatesResponse
 */
ListApiTemplatesResponse Client::listApiTemplatesWithOptions(const ListApiTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
 * @summary Lists API templates.
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
 * @description Queries application configurations.
 *
 * @param request ListApplicationConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApplicationConfigsResponse
 */
ListApplicationConfigsResponse Client::listApplicationConfigsWithOptions(const ListApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConfigFileName()) {
    query["ConfigFileName"] = request.getConfigFileName();
  }

  if (!!request.hasConfigItemKey()) {
    query["ConfigItemKey"] = request.getConfigItemKey();
  }

  if (!!request.hasConfigItemValue()) {
    query["ConfigItemValue"] = request.getConfigItemValue();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @description Queries application configurations.
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
    query["ApplicationNames"] = request.getApplicationNames();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Lists Auto Scaling activities.
 *
 * @param request ListAutoScalingActivitiesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAutoScalingActivitiesResponse
 */
ListAutoScalingActivitiesResponse Client::listAutoScalingActivitiesWithOptions(const ListAutoScalingActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceChargeTypes()) {
    query["InstanceChargeTypes"] = request.getInstanceChargeTypes();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingActivityStates()) {
    query["ScalingActivityStates"] = request.getScalingActivityStates();
  }

  if (!!request.hasScalingActivityType()) {
    query["ScalingActivityType"] = request.getScalingActivityType();
  }

  if (!!request.hasScalingPolicyType()) {
    query["ScalingPolicyType"] = request.getScalingPolicyType();
  }

  if (!!request.hasScalingRuleName()) {
    query["ScalingRuleName"] = request.getScalingRuleName();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Lists Auto Scaling activities.
 *
 * @param request ListAutoScalingActivitiesRequest
 * @return ListAutoScalingActivitiesResponse
 */
ListAutoScalingActivitiesResponse Client::listAutoScalingActivities(const ListAutoScalingActivitiesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAutoScalingActivitiesWithOptions(request, runtime);
}

/**
 * @summary Lists EMR clusters.
 *
 * @param request ListClustersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClustersResponse
 */
ListClustersResponse Client::listClustersWithOptions(const ListClustersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterIds()) {
    query["ClusterIds"] = request.getClusterIds();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterStates()) {
    query["ClusterStates"] = request.getClusterStates();
  }

  if (!!request.hasClusterTypes()) {
    query["ClusterTypes"] = request.getClusterTypes();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasPaymentTypes()) {
    query["PaymentTypes"] = request.getPaymentTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Lists EMR clusters.
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
    query["ApplicationNames"] = request.getApplicationNames();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentNames()) {
    query["ComponentNames"] = request.getComponentNames();
  }

  if (!!request.hasComponentStates()) {
    query["ComponentStates"] = request.getComponentStates();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasNodeNames()) {
    query["NodeNames"] = request.getNodeNames();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
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
    query["ApplicationNames"] = request.getApplicationNames();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentNames()) {
    query["ComponentNames"] = request.getComponentNames();
  }

  if (!!request.hasComponentStates()) {
    query["ComponentStates"] = request.getComponentStates();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasQueues()) {
    query["Queues"] = request.getQueues();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.getTypes();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.getUsers();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentTypes()) {
    query["ComponentTypes"] = request.getComponentTypes();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRegionServerHosts()) {
    query["RegionServerHosts"] = request.getRegionServerHosts();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTableNames()) {
    query["TableNames"] = request.getTableNames();
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
 * @summary Retrieves batch analysis results for specific directories using EMR Doctor. The directory depth cannot exceed five levels.
 *
 * @description Queries the analysis results for HDFS directories.
 *
 * @param request ListDoctorHDFSDirectoriesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDoctorHDFSDirectoriesResponse
 */
ListDoctorHDFSDirectoriesResponse Client::listDoctorHDFSDirectoriesWithOptions(const ListDoctorHDFSDirectoriesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasDirPath()) {
    query["DirPath"] = request.getDirPath();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves batch analysis results for specific directories using EMR Doctor. The directory depth cannot exceed five levels.
 *
 * @description Queries the analysis results for HDFS directories.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDatabaseNames()) {
    query["DatabaseNames"] = request.getDatabaseNames();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDateTime()) {
    query["DateTime"] = request.getDateTime();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTableNames()) {
    query["TableNames"] = request.getTableNames();
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
    query["AppIds"] = request.getAppIds();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndRange()) {
    query["EndRange"] = request.getEndRange();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasQueues()) {
    query["Queues"] = request.getQueues();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartRange()) {
    query["StartRange"] = request.getStartRange();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.getTypes();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.getUsers();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasEndRange()) {
    query["EndRange"] = request.getEndRange();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartRange()) {
    query["StartRange"] = request.getStartRange();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Retrieves a list of EMR instance types.
 *
 * @param request ListInstanceTypesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstanceTypesResponse
 */
ListInstanceTypesResponse Client::listInstanceTypesWithOptions(const ListInstanceTypesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasDeployMode()) {
    query["DeployMode"] = request.getDeployMode();
  }

  if (!!request.hasInstanceType()) {
    query["InstanceType"] = request.getInstanceType();
  }

  if (!!request.hasIsModification()) {
    query["IsModification"] = request.getIsModification();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasNodeGroupType()) {
    query["NodeGroupType"] = request.getNodeGroupType();
  }

  if (!!request.hasPaymentType()) {
    query["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReleaseVersion()) {
    query["ReleaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
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
 * @summary Retrieves a list of EMR instance types.
 *
 * @param request ListInstanceTypesRequest
 * @return ListInstanceTypesResponse
 */
ListInstanceTypesResponse Client::listInstanceTypes(const ListInstanceTypesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstanceTypesWithOptions(request, runtime);
}

/**
 * @summary Queries the node groups in an EMR cluster.
 *
 * @param request ListNodeGroupsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNodeGroupsResponse
 */
ListNodeGroupsResponse Client::listNodeGroupsWithOptions(const ListNodeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupIds()) {
    query["NodeGroupIds"] = request.getNodeGroupIds();
  }

  if (!!request.hasNodeGroupNames()) {
    query["NodeGroupNames"] = request.getNodeGroupNames();
  }

  if (!!request.hasNodeGroupStates()) {
    query["NodeGroupStates"] = request.getNodeGroupStates();
  }

  if (!!request.hasNodeGroupTypes()) {
    query["NodeGroupTypes"] = request.getNodeGroupTypes();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasZoneId()) {
    query["ZoneId"] = request.getZoneId();
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
 * @summary Queries the node groups in an EMR cluster.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNodeGroupIds()) {
    query["NodeGroupIds"] = request.getNodeGroupIds();
  }

  if (!!request.hasNodeIds()) {
    query["NodeIds"] = request.getNodeIds();
  }

  if (!!request.hasNodeNames()) {
    query["NodeNames"] = request.getNodeNames();
  }

  if (!!request.hasNodeStates()) {
    query["NodeStates"] = request.getNodeStates();
  }

  if (!!request.hasPrivateIps()) {
    query["PrivateIps"] = request.getPrivateIps();
  }

  if (!!request.hasPublicIps()) {
    query["PublicIps"] = request.getPublicIps();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @description Queries release versions.
 *
 * @param request ListReleaseVersionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListReleaseVersionsResponse
 */
ListReleaseVersionsResponse Client::listReleaseVersionsWithOptions(const ListReleaseVersionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterType()) {
    query["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasIaasType()) {
    query["IaasType"] = request.getIaasType();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @description Queries release versions.
 *
 * @param request ListReleaseVersionsRequest
 * @return ListReleaseVersionsResponse
 */
ListReleaseVersionsResponse Client::listReleaseVersions(const ListReleaseVersionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listReleaseVersionsWithOptions(request, runtime);
}

/**
 * @summary Queries the bootstrap or normal scripts of an EMR cluster.
 *
 * @param request ListScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScriptsWithOptions(const ListScriptsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptName()) {
    query["ScriptName"] = request.getScriptName();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.getScriptType();
  }

  if (!!request.hasStatuses()) {
    query["Statuses"] = request.getStatuses();
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
 * @summary Queries the bootstrap or normal scripts of an EMR cluster.
 *
 * @param request ListScriptsRequest
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScripts(const ListScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptsWithOptions(request, runtime);
}

/**
 * @summary Queries the tags attached to E-MapReduce (EMR) clusters.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
 * @summary Queries the tags attached to E-MapReduce (EMR) clusters.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  if (!!request.hasUserNames()) {
    query["UserNames"] = request.getUserNames();
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
 * @summary Creates a custom Auto Scaling policy.
 *
 * @description Configures an Auto Scaling policy.
 *
 * @param request PutAutoScalingPolicyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutAutoScalingPolicyResponse
 */
PutAutoScalingPolicyResponse Client::putAutoScalingPolicyWithOptions(const PutAutoScalingPolicyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConstraints()) {
    query["Constraints"] = request.getConstraints();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScalingRules()) {
    query["ScalingRules"] = request.getScalingRules();
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
 * @summary Creates a custom Auto Scaling policy.
 *
 * @description Configures an Auto Scaling policy.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConstraints()) {
    query["Constraints"] = request.getConstraints();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Runs an API template.
 *
 * @param request RunApiTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RunApiTemplateResponse
 */
RunApiTemplateResponse Client::runApiTemplateWithOptions(const RunApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Runs an API template.
 *
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
    query["ActionName"] = request.getActionName();
  }

  if (!!request.hasBatchSize()) {
    query["BatchSize"] = request.getBatchSize();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasComponentInstanceSelector()) {
    query["ComponentInstanceSelector"] = request.getComponentInstanceSelector();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasExecuteStrategy()) {
    query["ExecuteStrategy"] = request.getExecuteStrategy();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRollingExecute()) {
    query["RollingExecute"] = request.getRollingExecute();
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
 * @summary Creates a pay-as-you-go or subscription cluster.
 *
 * @description RunCluster is an upgraded version of CreateCluster. It uses HTTPS POST requests and supports larger parameter values. For complex parameters, such as objects and arrays, RunCluster uses the JSON format. This improves compatibility with command-line interface (CLI) tools.
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
    request.setApplicationConfigsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplicationConfigs(), "ApplicationConfigs", "json"));
  }

  if (!!tmpReq.hasApplications()) {
    request.setApplicationsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApplications(), "Applications", "json"));
  }

  if (!!tmpReq.hasBootstrapScripts()) {
    request.setBootstrapScriptsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBootstrapScripts(), "BootstrapScripts", "json"));
  }

  if (!!tmpReq.hasNodeAttributes()) {
    request.setNodeAttributesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeAttributes(), "NodeAttributes", "json"));
  }

  if (!!tmpReq.hasNodeGroups()) {
    request.setNodeGroupsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNodeGroups(), "NodeGroups", "json"));
  }

  if (!!tmpReq.hasPromotions()) {
    request.setPromotionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPromotions(), "Promotions", "json"));
  }

  if (!!tmpReq.hasSubscriptionConfig()) {
    request.setSubscriptionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSubscriptionConfig(), "SubscriptionConfig", "json"));
  }

  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasPromotionsShrink()) {
    query["Promotions"] = request.getPromotionsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  if (!!request.hasApplicationConfigsShrink()) {
    body["ApplicationConfigs"] = request.getApplicationConfigsShrink();
  }

  if (!!request.hasApplicationsShrink()) {
    body["Applications"] = request.getApplicationsShrink();
  }

  if (!!request.hasBootstrapScriptsShrink()) {
    body["BootstrapScripts"] = request.getBootstrapScriptsShrink();
  }

  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasClusterName()) {
    body["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasClusterType()) {
    body["ClusterType"] = request.getClusterType();
  }

  if (!!request.hasDeletionProtection()) {
    body["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDeployMode()) {
    body["DeployMode"] = request.getDeployMode();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasNodeAttributesShrink()) {
    body["NodeAttributes"] = request.getNodeAttributesShrink();
  }

  if (!!request.hasNodeGroupsShrink()) {
    body["NodeGroups"] = request.getNodeGroupsShrink();
  }

  if (!!request.hasPaymentType()) {
    body["PaymentType"] = request.getPaymentType();
  }

  if (!!request.hasReleaseVersion()) {
    body["ReleaseVersion"] = request.getReleaseVersion();
  }

  if (!!request.hasResourceGroupId()) {
    body["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSecurityMode()) {
    body["SecurityMode"] = request.getSecurityMode();
  }

  if (!!request.hasSubscriptionConfigShrink()) {
    body["SubscriptionConfig"] = request.getSubscriptionConfigShrink();
  }

  if (!!request.hasTagsShrink()) {
    body["Tags"] = request.getTagsShrink();
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
 * @summary Creates a pay-as-you-go or subscription cluster.
 *
 * @description RunCluster is an upgraded version of CreateCluster. It uses HTTPS POST requests and supports larger parameter values. For complex parameters, such as objects and arrays, RunCluster uses the JSON format. This improves compatibility with command-line interface (CLI) tools.
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
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
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
    query["All"] = request.getAll();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.getResourceIds();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeys()) {
    query["TagKeys"] = request.getTagKeys();
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
 * @description Modifies a cluster template.
 *
 * @param request UpdateApiTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiTemplateResponse
 */
UpdateApiTemplateResponse Client::updateApiTemplateWithOptions(const UpdateApiTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiName()) {
    query["ApiName"] = request.getApiName();
  }

  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
 * @description Modifies a cluster template.
 *
 * @param request UpdateApiTemplateRequest
 * @return UpdateApiTemplateResponse
 */
UpdateApiTemplateResponse Client::updateApiTemplate(const UpdateApiTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApiTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of an application.
 *
 * @param request UpdateApplicationConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApplicationConfigsResponse
 */
UpdateApplicationConfigsResponse Client::updateApplicationConfigsWithOptions(const UpdateApplicationConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApplicationName()) {
    query["ApplicationName"] = request.getApplicationName();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasConfigAction()) {
    query["ConfigAction"] = request.getConfigAction();
  }

  if (!!request.hasConfigScope()) {
    query["ConfigScope"] = request.getConfigScope();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasNodeId()) {
    query["NodeId"] = request.getNodeId();
  }

  if (!!request.hasRefreshConfig()) {
    query["RefreshConfig"] = request.getRefreshConfig();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasApplicationConfigs()) {
    bodyFlat["ApplicationConfigs"] = request.getApplicationConfigs();
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
 * @summary Updates the configurations of an application.
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterName()) {
    query["ClusterName"] = request.getClusterName();
  }

  if (!!request.hasDeletionProtection()) {
    query["DeletionProtection"] = request.getDeletionProtection();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Enables or disables auto-renewal for an EMR cluster and its Elastic Compute Service (ECS) instances.
 *
 * @description Before you call this operation, make sure you understand the billing methods and [pricing](https://www.aliyun.com/price/product?spm=openapi-amp.newDocPublishment.0.0.d54d281ftXTbvg#/emapreduce/detail/emrpre) of E-MapReduce. Note: Auto-renewal is different from manual renewal. If an instance has expired or will expire the next day, you must perform a manual renewal first.
 *
 * @param request UpdateClusterAutoRenewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateClusterAutoRenewResponse
 */
UpdateClusterAutoRenewResponse Client::updateClusterAutoRenewWithOptions(const UpdateClusterAutoRenewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAutoRenewInstances()) {
    query["AutoRenewInstances"] = request.getAutoRenewInstances();
  }

  if (!!request.hasClusterAutoRenew()) {
    query["ClusterAutoRenew"] = request.getClusterAutoRenew();
  }

  if (!!request.hasClusterAutoRenewDuration()) {
    query["ClusterAutoRenewDuration"] = request.getClusterAutoRenewDuration();
  }

  if (!!request.hasClusterAutoRenewDurationUnit()) {
    query["ClusterAutoRenewDurationUnit"] = request.getClusterAutoRenewDurationUnit();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasRenewAllInstances()) {
    query["RenewAllInstances"] = request.getRenewAllInstances();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateClusterAutoRenew"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateClusterAutoRenewResponse>();
}

/**
 * @summary Enables or disables auto-renewal for an EMR cluster and its Elastic Compute Service (ECS) instances.
 *
 * @description Before you call this operation, make sure you understand the billing methods and [pricing](https://www.aliyun.com/price/product?spm=openapi-amp.newDocPublishment.0.0.d54d281ftXTbvg#/emapreduce/detail/emrpre) of E-MapReduce. Note: Auto-renewal is different from manual renewal. If an instance has expired or will expire the next day, you must perform a manual renewal first.
 *
 * @param request UpdateClusterAutoRenewRequest
 * @return UpdateClusterAutoRenewResponse
 */
UpdateClusterAutoRenewResponse Client::updateClusterAutoRenew(const UpdateClusterAutoRenewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateClusterAutoRenewWithOptions(request, runtime);
}

/**
 * @summary Updates the attributes of a node group.
 *
 * @description 更新节点组基本属性。
 *
 * @param request UpdateNodeGroupAttributesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNodeGroupAttributesResponse
 */
UpdateNodeGroupAttributesResponse Client::updateNodeGroupAttributesWithOptions(const UpdateNodeGroupAttributesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAckConfig()) {
    query["AckConfig"] = request.getAckConfig();
  }

  if (!!request.hasAdditionalSecurityGroupIds()) {
    query["AdditionalSecurityGroupIds"] = request.getAdditionalSecurityGroupIds();
  }

  if (!!request.hasAutoCompensateState()) {
    query["AutoCompensateState"] = request.getAutoCompensateState();
  }

  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasCostOptimizedConfig()) {
    query["CostOptimizedConfig"] = request.getCostOptimizedConfig();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasEcsSpotStrategy()) {
    query["EcsSpotStrategy"] = request.getEcsSpotStrategy();
  }

  if (!!request.hasEnableGracefulDecommission()) {
    query["EnableGracefulDecommission"] = request.getEnableGracefulDecommission();
  }

  if (!!request.hasInstanceTypeList()) {
    query["InstanceTypeList"] = request.getInstanceTypeList();
  }

  if (!!request.hasKeyPairName()) {
    query["KeyPairName"] = request.getKeyPairName();
  }

  if (!!request.hasMaxSize()) {
    query["MaxSize"] = request.getMaxSize();
  }

  if (!!request.hasMinSize()) {
    query["MinSize"] = request.getMinSize();
  }

  if (!!request.hasNodeCount()) {
    query["NodeCount"] = request.getNodeCount();
  }

  if (!!request.hasNodeGroupId()) {
    query["NodeGroupId"] = request.getNodeGroupId();
  }

  if (!!request.hasNodeGroupName()) {
    query["NodeGroupName"] = request.getNodeGroupName();
  }

  if (!!request.hasNodeResizeStrategy()) {
    query["NodeResizeStrategy"] = request.getNodeResizeStrategy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSpotBidPrices()) {
    query["SpotBidPrices"] = request.getSpotBidPrices();
  }

  if (!!request.hasSpotInstanceRemedy()) {
    query["SpotInstanceRemedy"] = request.getSpotInstanceRemedy();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNodeGroupAttributes"},
    {"version" , "2021-03-20"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNodeGroupAttributesResponse>();
}

/**
 * @summary Updates the attributes of a node group.
 *
 * @description 更新节点组基本属性。
 *
 * @param request UpdateNodeGroupAttributesRequest
 * @return UpdateNodeGroupAttributesResponse
 */
UpdateNodeGroupAttributesResponse Client::updateNodeGroupAttributes(const UpdateNodeGroupAttributesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNodeGroupAttributesWithOptions(request, runtime);
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
    request.setScriptShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScript(), "Script", "json"));
  }

  json query = {};
  if (!!request.hasClusterId()) {
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasScriptShrink()) {
    query["Script"] = request.getScriptShrink();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptType()) {
    query["ScriptType"] = request.getScriptType();
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
    query["ClusterId"] = request.getClusterId();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasPassword()) {
    query["Password"] = request.getPassword();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
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