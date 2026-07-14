#include <darabonba/Core.hpp>
#include <alibabacloud/Cms20240330.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cms20240330::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cms20240330
{

AlibabaCloud::Cms20240330::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "metrics.us-west-1.aliyuncs.com"},
    {"us-southeast-1" , "metrics.us-southeast-1.aliyuncs.com"},
    {"us-east-1" , "metrics.us-east-1.aliyuncs.com"},
    {"na-south-1" , "metrics.na-south-1.aliyuncs.com"},
    {"me-east-1" , "metrics.me-east-1.aliyuncs.com"},
    {"me-central-1" , "metrics.me-central-1.aliyuncs.com"},
    {"eu-west-2" , "metrics.eu-west-2.aliyuncs.com"},
    {"eu-west-1" , "metrics.eu-west-1.aliyuncs.com"},
    {"eu-central-1" , "metrics.eu-central-1.aliyuncs.com"},
    {"cn-zhongwei" , "metrics.cn-zhongwei.aliyuncs.com"},
    {"cn-zhengzhou-jva" , "metrics.cn-zhengzhou-jva.aliyuncs.com"},
    {"cn-zhangjiakou" , "metrics.cn-zhangjiakou.aliyuncs.com"},
    {"cn-wulanchabu-gic-1" , "metrics.cn-wulanchabu-gic-1.aliyuncs.com"},
    {"cn-wulanchabu" , "metrics.cn-wulanchabu.aliyuncs.com"},
    {"cn-wuhan-lr" , "metrics.cn-wuhan-lr.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "metrics.cn-shenzhen-finance-1.aliyuncs.com"},
    {"cn-shenzhen" , "metrics.cn-shenzhen.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "metrics.cn-shanghai-finance-1.aliyuncs.com"},
    {"cn-shanghai" , "metrics.cn-shanghai.aliyuncs.com"},
    {"cn-qingdao" , "metrics.cn-qingdao.aliyuncs.com"},
    {"cn-north-2-gov-1" , "metrics.cn-north-2-gov-1.aliyuncs.com"},
    {"cn-nanjing" , "metrics.cn-nanjing.aliyuncs.com"},
    {"cn-huhehaote" , "metrics.cn-huhehaote.aliyuncs.com"},
    {"cn-hongkong" , "metrics.cn-hongkong.aliyuncs.com"},
    {"cn-heyuan-acdr-1" , "metrics.cn-heyuan-acdr-1.aliyuncs.com"},
    {"cn-heyuan" , "metrics.cn-heyuan.aliyuncs.com"},
    {"cn-hangzhou-finance" , "metrics.cn-hangzhou-finance.aliyuncs.com"},
    {"cn-hangzhou" , "metrics.cn-hangzhou.aliyuncs.com"},
    {"cn-guangzhou" , "metrics.cn-guangzhou.aliyuncs.com"},
    {"cn-fuzhou" , "metrics.cn-fuzhou.aliyuncs.com"},
    {"cn-chengdu" , "metrics.cn-chengdu.aliyuncs.com"},
    {"cn-beijing-finance-1" , "metrics.cn-beijing-finance-1.aliyuncs.com"},
    {"cn-beijing" , "metrics.cn-beijing.aliyuncs.com"},
    {"ap-southeast-8" , "metrics.ap-southeast-8.aliyuncs.com"},
    {"ap-southeast-7" , "metrics.ap-southeast-7.aliyuncs.com"},
    {"ap-southeast-6" , "metrics.ap-southeast-6.aliyuncs.com"},
    {"ap-southeast-5" , "metrics.ap-southeast-5.aliyuncs.com"},
    {"ap-southeast-3" , "metrics.ap-southeast-3.aliyuncs.com"},
    {"ap-southeast-2" , "metrics.ap-southeast-2.aliyuncs.com"},
    {"ap-southeast-1" , "metrics.ap-southeast-1.aliyuncs.com"},
    {"ap-south-1" , "metrics.ap-south-1.aliyuncs.com"},
    {"ap-northeast-2" , "metrics.ap-northeast-2.aliyuncs.com"},
    {"ap-northeast-1" , "metrics.ap-northeast-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cms", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Write to the context
 *
 * @param request AddContextsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddContextsResponse
 */
AddContextsResponse Client::addContextsWithOptions(const string &workspace, const string &contextStoreName, const AddContextsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContextType()) {
    body["contextType"] = request.getContextType();
  }

  if (!!request.hasItems()) {
    body["items"] = request.getItems();
  }

  if (!!request.hasMemoryType()) {
    body["memoryType"] = request.getMemoryType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddContexts"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/context")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddContextsResponse>();
}

/**
 * @summary Write to the context
 *
 * @param request AddContextsRequest
 * @return AddContextsResponse
 */
AddContextsResponse Client::addContexts(const string &workspace, const string &contextStoreName, const AddContextsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addContextsWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Add new facts, messages, or metadata to a user’s memory store. The AddMemories endpoint accepts raw text or conversation turns and commits them asynchronously, preparing the memories for subsequent search, retrieval, and graph queries.
 *
 * @param request AddMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddMemoriesResponse
 */
AddMemoriesResponse Client::addMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const AddMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasAsyncMode()) {
    body["asyncMode"] = request.getAsyncMode();
  }

  if (!!request.hasCustomInstructions()) {
    body["customInstructions"] = request.getCustomInstructions();
  }

  if (!!request.hasInfer()) {
    body["infer"] = request.getInfer();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.getRunId();
  }

  if (!!request.hasTimestamp()) {
    body["timestamp"] = request.getTimestamp();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddMemories"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddMemoriesResponse>();
}

/**
 * @summary Add new facts, messages, or metadata to a user’s memory store. The AddMemories endpoint accepts raw text or conversation turns and commits them asynchronously, preparing the memories for subsequent search, retrieval, and graph queries.
 *
 * @param request AddMemoriesRequest
 * @return AddMemoriesResponse
 */
AddMemoriesResponse Client::addMemories(const string &workspace, const string &memoryStoreName, const AddMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return addMemoriesWithOptions(workspace, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Changes the resource group of a resource.
 *
 * @param request ChangeResourceGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroupWithOptions(const ChangeResourceGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ChangeResourceGroup"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/resourcegroup")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeResourceGroupResponse>();
}

/**
 * @summary Changes the resource group of a resource.
 *
 * @param request ChangeResourceGroupRequest
 * @return ChangeResourceGroupResponse
 */
ChangeResourceGroupResponse Client::changeResourceGroup(const ChangeResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return changeResourceGroupWithOptions(request, headers, runtime);
}

/**
 * @summary Installs an add-on.
 *
 * @description Creates a release for an add-on.
 *
 * @param request CreateAddonReleaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAddonReleaseResponse
 */
CreateAddonReleaseResponse Client::createAddonReleaseWithOptions(const string &policyId, const CreateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddonName()) {
    body["addonName"] = request.getAddonName();
  }

  if (!!request.hasAliyunLang()) {
    body["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasEntityRules()) {
    body["entityRules"] = request.getEntityRules();
  }

  if (!!request.hasEnvType()) {
    body["envType"] = request.getEnvType();
  }

  if (!!request.hasParentAddonReleaseId()) {
    body["parentAddonReleaseId"] = request.getParentAddonReleaseId();
  }

  if (!!request.hasReleaseName()) {
    body["releaseName"] = request.getReleaseName();
  }

  if (!!request.hasValues()) {
    body["values"] = request.getValues();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAddonRelease"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/addon-releases")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAddonReleaseResponse>();
}

/**
 * @summary Installs an add-on.
 *
 * @description Creates a release for an add-on.
 *
 * @param request CreateAddonReleaseRequest
 * @return CreateAddonReleaseResponse
 */
CreateAddonReleaseResponse Client::createAddonRelease(const string &policyId, const CreateAddonReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAddonReleaseWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Create an aggregation task group.
 *
 * @param request CreateAggTaskGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAggTaskGroupResponse
 */
CreateAggTaskGroupResponse Client::createAggTaskGroupWithOptions(const string &instanceId, const CreateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOverrideIfExists()) {
    query["overrideIfExists"] = request.getOverrideIfExists();
  }

  json body = {};
  if (!!request.hasAggTaskGroupConfig()) {
    body["aggTaskGroupConfig"] = request.getAggTaskGroupConfig();
  }

  if (!!request.hasAggTaskGroupConfigType()) {
    body["aggTaskGroupConfigType"] = request.getAggTaskGroupConfigType();
  }

  if (!!request.hasAggTaskGroupName()) {
    body["aggTaskGroupName"] = request.getAggTaskGroupName();
  }

  if (!!request.hasCronExpr()) {
    body["cronExpr"] = request.getCronExpr();
  }

  if (!!request.hasDelay()) {
    body["delay"] = request.getDelay();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasFromTime()) {
    body["fromTime"] = request.getFromTime();
  }

  if (!!request.hasMaxRetries()) {
    body["maxRetries"] = request.getMaxRetries();
  }

  if (!!request.hasMaxRunTimeInSeconds()) {
    body["maxRunTimeInSeconds"] = request.getMaxRunTimeInSeconds();
  }

  if (!!request.hasPrecheckString()) {
    body["precheckString"] = request.getPrecheckString();
  }

  if (!!request.hasScheduleMode()) {
    body["scheduleMode"] = request.getScheduleMode();
  }

  if (!!request.hasScheduleTimeExpr()) {
    body["scheduleTimeExpr"] = request.getScheduleTimeExpr();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTargetPrometheusId()) {
    body["targetPrometheusId"] = request.getTargetPrometheusId();
  }

  if (!!request.hasToTime()) {
    body["toTime"] = request.getToTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAggTaskGroup"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/agg-task-groups")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAggTaskGroupResponse>();
}

/**
 * @summary Create an aggregation task group.
 *
 * @param request CreateAggTaskGroupRequest
 * @return CreateAggTaskGroupResponse
 */
CreateAggTaskGroupResponse Client::createAggTaskGroup(const string &instanceId, const CreateAggTaskGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAggTaskGroupWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Create a webhook
 *
 * @description Creates an alert webhook to use as a notification recipient.
 *
 * @param request CreateAlertWebhookRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAlertWebhookResponse
 */
CreateAlertWebhookResponse Client::createAlertWebhookWithOptions(const CreateAlertWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasHeaders()) {
    body["headers"] = request.getHeaders();
  }

  if (!!request.hasLang()) {
    body["lang"] = request.getLang();
  }

  if (!!request.hasMethod()) {
    body["method"] = request.getMethod();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.getUrl();
  }

  if (!!request.hasWebhookId()) {
    body["webhookId"] = request.getWebhookId();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateAlertWebhook"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webhook")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAlertWebhookResponse>();
}

/**
 * @summary Create a webhook
 *
 * @description Creates an alert webhook to use as a notification recipient.
 *
 * @param request CreateAlertWebhookRequest
 * @return CreateAlertWebhookResponse
 */
CreateAlertWebhookResponse Client::createAlertWebhook(const CreateAlertWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createAlertWebhookWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a business trace.
 *
 * @param request CreateBizTraceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateBizTraceResponse
 */
CreateBizTraceResponse Client::createBizTraceWithOptions(const CreateBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdvancedConfig()) {
    body["advancedConfig"] = request.getAdvancedConfig();
  }

  if (!!request.hasBizTraceCode()) {
    body["bizTraceCode"] = request.getBizTraceCode();
  }

  if (!!request.hasBizTraceName()) {
    body["bizTraceName"] = request.getBizTraceName();
  }

  if (!!request.hasRuleConfig()) {
    body["ruleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateBizTrace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bizTrace")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateBizTraceResponse>();
}

/**
 * @summary Creates a business trace.
 *
 * @param request CreateBizTraceRequest
 * @return CreateBizTraceResponse
 */
CreateBizTraceResponse Client::createBizTrace(const CreateBizTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createBizTraceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a cloud resource.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudResourceResponse
 */
CreateCloudResourceResponse Client::createCloudResourceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudResource"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cloudresource")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudResourceResponse>();
}

/**
 * @summary Creates a cloud resource.
 *
 * @return CreateCloudResourceResponse
 */
CreateCloudResourceResponse Client::createCloudResource() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCloudResourceWithOptions(headers, runtime);
}

/**
 * @summary Creates a context store.
 *
 * @param request CreateContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextStoreResponse
 */
CreateContextStoreResponse Client::createContextStoreWithOptions(const string &workspace, const CreateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasContextStoreName()) {
    body["contextStoreName"] = request.getContextStoreName();
  }

  if (!!request.hasContextType()) {
    body["contextType"] = request.getContextType();
  }

  if (!!request.hasDataset()) {
    body["dataset"] = request.getDataset();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateContextStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextStoreResponse>();
}

/**
 * @summary Creates a context store.
 *
 * @param request CreateContextStoreRequest
 * @return CreateContextStoreResponse
 */
CreateContextStoreResponse Client::createContextStore(const string &workspace, const CreateContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createContextStoreWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Creates an API key for a context store.
 *
 * @param request CreateContextStoreAPIKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextStoreAPIKeyResponse
 */
CreateContextStoreAPIKeyResponse Client::createContextStoreAPIKeyWithOptions(const string &workspace, const string &contextStoreName, const CreateContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateContextStoreAPIKey"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/apikey")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextStoreAPIKeyResponse>();
}

/**
 * @summary Creates an API key for a context store.
 *
 * @param request CreateContextStoreAPIKeyRequest
 * @return CreateContextStoreAPIKeyResponse
 */
CreateContextStoreAPIKeyResponse Client::createContextStoreAPIKey(const string &workspace, const string &contextStoreName, const CreateContextStoreAPIKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createContextStoreAPIKeyWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDatasetWithOptions(const string &workspace, const CreateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDatasetName()) {
    body["datasetName"] = request.getDatasetName();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasSchema()) {
    body["schema"] = request.getSchema();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDataset"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/dataset")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDatasetResponse>();
}

/**
 * @summary Creates a dataset.
 *
 * @param request CreateDatasetRequest
 * @return CreateDatasetResponse
 */
CreateDatasetResponse Client::createDataset(const string &workspace, const CreateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDatasetWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Create a data delivery task to deliver metric data from a data source to a storage destination or message queue. This task supports three delivery types: Prometheus Remote Write, Kafka, and MaxCompute. You can also use tags to filter which metrics are delivered and attach custom tags to them.
 *
 * @param request CreateDeliveryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeliveryTaskResponse
 */
CreateDeliveryTaskResponse Client::createDeliveryTaskWithOptions(const CreateDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSourceId()) {
    body["dataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasExternalLabels()) {
    body["externalLabels"] = request.getExternalLabels();
  }

  if (!!request.hasLabelFilters()) {
    body["labelFilters"] = request.getLabelFilters();
  }

  if (!!request.hasLabelFiltersType()) {
    body["labelFiltersType"] = request.getLabelFiltersType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSinkList()) {
    body["sinkList"] = request.getSinkList();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.getTaskDescription();
  }

  if (!!request.hasTaskName()) {
    body["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateDeliveryTask"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/delivery-tasks")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeliveryTaskResponse>();
}

/**
 * @summary Create a data delivery task to deliver metric data from a data source to a storage destination or message queue. This task supports three delivery types: Prometheus Remote Write, Kafka, and MaxCompute. You can also use tags to filter which metrics are delivered and attach custom tags to them.
 *
 * @param request CreateDeliveryTaskRequest
 * @return CreateDeliveryTaskResponse
 */
CreateDeliveryTaskResponse Client::createDeliveryTask(const CreateDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createDeliveryTaskWithOptions(request, headers, runtime);
}

/**
 * @summary Creates storage for an EntityStore.
 *
 * @param request CreateEntityStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEntityStoreResponse
 */
CreateEntityStoreResponse Client::createEntityStoreWithOptions(const string &workspaceName, const CreateEntityStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEntityStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/entitystore")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEntityStoreResponse>();
}

/**
 * @summary Creates storage for an EntityStore.
 *
 * @param request CreateEntityStoreRequest
 * @return CreateEntityStoreResponse
 */
CreateEntityStoreResponse Client::createEntityStore(const string &workspaceName, const CreateEntityStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEntityStoreWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Creates an Integration Center policy.
 *
 * @description This operation creates an event integration.
 *
 * @param request CreateIntegrationPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateIntegrationPolicyResponse
 */
CreateIntegrationPolicyResponse Client::createIntegrationPolicyWithOptions(const CreateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEntityGroup()) {
    body["entityGroup"] = request.getEntityGroup();
  }

  if (!!request.hasPolicyName()) {
    body["policyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    body["policyType"] = request.getPolicyType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateIntegrationPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateIntegrationPolicyResponse>();
}

/**
 * @summary Creates an Integration Center policy.
 *
 * @description This operation creates an event integration.
 *
 * @param request CreateIntegrationPolicyRequest
 * @return CreateIntegrationPolicyResponse
 */
CreateIntegrationPolicyResponse Client::createIntegrationPolicy(const CreateIntegrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createIntegrationPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a MemoryStore.
 *
 * @param request CreateMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMemoryStoreResponse
 */
CreateMemoryStoreResponse Client::createMemoryStoreWithOptions(const string &workspace, const CreateMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomExtractionStrategies()) {
    body["customExtractionStrategies"] = request.getCustomExtractionStrategies();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExtractionStrategies()) {
    body["extractionStrategies"] = request.getExtractionStrategies();
  }

  if (!!request.hasMemoryStoreName()) {
    body["memoryStoreName"] = request.getMemoryStoreName();
  }

  if (!!request.hasShortTermTtl()) {
    body["shortTermTtl"] = request.getShortTermTtl();
  }

  if (!!request.hasSourceType()) {
    body["sourceType"] = request.getSourceType();
  }

  if (!!request.hasTraceSourceConfig()) {
    body["traceSourceConfig"] = request.getTraceSourceConfig();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateMemoryStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMemoryStoreResponse>();
}

/**
 * @summary Creates a MemoryStore.
 *
 * @param request CreateMemoryStoreRequest
 * @return CreateMemoryStoreResponse
 */
CreateMemoryStoreResponse Client::createMemoryStore(const string &workspace, const CreateMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createMemoryStoreWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Creates a notification policy.
 *
 * @description Creates a notification policy in a specified workspace. The notifyStrategy field in the request body NotifyPolicyConfig is required, while subscription and responsePlan are optional. After the policy is created, the generated policy UUID and complete policy details are returned. If a policy with the same Policy Name already exists in the workspace, a ConflictName error is returned.
 *
 * @param request CreateNotifyPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNotifyPolicyResponse
 */
CreateNotifyPolicyResponse Client::createNotifyPolicyWithOptions(const CreateNotifyPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "CreateNotifyPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/eventbase/notify-policy/create")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNotifyPolicyResponse>();
}

/**
 * @summary Creates a notification policy.
 *
 * @description Creates a notification policy in a specified workspace. The notifyStrategy field in the request body NotifyPolicyConfig is required, while subscription and responsePlan are optional. After the policy is created, the generated policy UUID and complete policy details are returned. If a policy with the same Policy Name already exists in the workspace, a ConflictName error is returned.
 *
 * @param request CreateNotifyPolicyRequest
 * @return CreateNotifyPolicyResponse
 */
CreateNotifyPolicyResponse Client::createNotifyPolicy(const CreateNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createNotifyPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Create a pipeline.
 *
 * @param request CreatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipelineWithOptions(const string &workspace, const CreatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExecutePolicy()) {
    body["executePolicy"] = request.getExecutePolicy();
  }

  if (!!request.hasPipeline()) {
    body["pipeline"] = request.getPipeline();
  }

  if (!!request.hasPipelineName()) {
    body["pipelineName"] = request.getPipelineName();
  }

  if (!!request.hasSink()) {
    body["sink"] = request.getSink();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePipeline"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/pipeline")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePipelineResponse>();
}

/**
 * @summary Create a pipeline.
 *
 * @param request CreatePipelineRequest
 * @return CreatePipelineResponse
 */
CreatePipelineResponse Client::createPipeline(const string &workspace, const CreatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPipelineWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Creates a Managed Service for Prometheus instance.
 *
 * @param request CreatePrometheusInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrometheusInstanceResponse
 */
CreatePrometheusInstanceResponse Client::createPrometheusInstanceWithOptions(const CreatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArchiveDuration()) {
    body["archiveDuration"] = request.getArchiveDuration();
  }

  if (!!request.hasAuthFreeReadPolicy()) {
    body["authFreeReadPolicy"] = request.getAuthFreeReadPolicy();
  }

  if (!!request.hasAuthFreeWritePolicy()) {
    body["authFreeWritePolicy"] = request.getAuthFreeWritePolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.getEnableAuthFreeRead();
  }

  if (!!request.hasEnableAuthFreeWrite()) {
    body["enableAuthFreeWrite"] = request.getEnableAuthFreeWrite();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.getEnableAuthToken();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.getPaymentType();
  }

  if (!!request.hasPrometheusInstanceName()) {
    body["prometheusInstanceName"] = request.getPrometheusInstanceName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasStorageDuration()) {
    body["storageDuration"] = request.getStorageDuration();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePrometheusInstance"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrometheusInstanceResponse>();
}

/**
 * @summary Creates a Managed Service for Prometheus instance.
 *
 * @param request CreatePrometheusInstanceRequest
 * @return CreatePrometheusInstanceResponse
 */
CreatePrometheusInstanceResponse Client::createPrometheusInstance(const CreatePrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPrometheusInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a Prometheus view.
 *
 * @description Creates a site monitoring task.
 *
 * @param request CreatePrometheusViewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrometheusViewResponse
 */
CreatePrometheusViewResponse Client::createPrometheusViewWithOptions(const CreatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthFreeReadPolicy()) {
    body["authFreeReadPolicy"] = request.getAuthFreeReadPolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.getEnableAuthFreeRead();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.getEnableAuthToken();
  }

  if (!!request.hasPrometheusInstances()) {
    body["prometheusInstances"] = request.getPrometheusInstances();
  }

  if (!!request.hasPrometheusViewName()) {
    body["prometheusViewName"] = request.getPrometheusViewName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.getVersion();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePrometheusView"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-views")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrometheusViewResponse>();
}

/**
 * @summary Creates a Prometheus view.
 *
 * @description Creates a site monitoring task.
 *
 * @param request CreatePrometheusViewRequest
 * @return CreatePrometheusViewResponse
 */
CreatePrometheusViewResponse Client::createPrometheusView(const CreatePrometheusViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPrometheusViewWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a virtual instance for Prometheus monitoring.
 *
 * @description Creates a virtual instance for Prometheus monitoring.
 *
 * @param request CreatePrometheusVirtualInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreatePrometheusVirtualInstanceResponse
 */
CreatePrometheusVirtualInstanceResponse Client::createPrometheusVirtualInstanceWithOptions(const CreatePrometheusVirtualInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasNamespace()) {
    body["namespace"] = request.getNamespace();
  }

  if (!!request.hasTenantId()) {
    body["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreatePrometheusVirtualInstance"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/virtual-instances")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreatePrometheusVirtualInstanceResponse>();
}

/**
 * @summary Creates a virtual instance for Prometheus monitoring.
 *
 * @description Creates a virtual instance for Prometheus monitoring.
 *
 * @param request CreatePrometheusVirtualInstanceRequest
 * @return CreatePrometheusVirtualInstanceResponse
 */
CreatePrometheusVirtualInstanceResponse Client::createPrometheusVirtualInstance(const CreatePrometheusVirtualInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createPrometheusVirtualInstanceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a service for application observability.
 *
 * @param request CreateServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createServiceWithOptions(const string &workspace, const CreateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttributes()) {
    body["attributes"] = request.getAttributes();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.getPid();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServiceName()) {
    body["serviceName"] = request.getServiceName();
  }

  if (!!request.hasServiceStatus()) {
    body["serviceStatus"] = request.getServiceStatus();
  }

  if (!!request.hasServiceType()) {
    body["serviceType"] = request.getServiceType();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceResponse>();
}

/**
 * @summary Creates a service for application observability.
 *
 * @param request CreateServiceRequest
 * @return CreateServiceResponse
 */
CreateServiceResponse Client::createService(const string &workspace, const CreateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Creates application observability and prepares the prerequisite resources required for integration.
 *
 * @param request CreateServiceObservabilityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceObservabilityResponse
 */
CreateServiceObservabilityResponse Client::createServiceObservabilityWithOptions(const string &workspace, const string &type, const CreateServiceObservabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServiceObservability"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service-observability/" , Darabonba::Encode::Encoder::percentEncode(type))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceObservabilityResponse>();
}

/**
 * @summary Creates application observability and prepares the prerequisite resources required for integration.
 *
 * @param request CreateServiceObservabilityRequest
 * @return CreateServiceObservabilityResponse
 */
CreateServiceObservabilityResponse Client::createServiceObservability(const string &workspace, const string &type, const CreateServiceObservabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceObservabilityWithOptions(workspace, type, request, headers, runtime);
}

/**
 * @summary Creates a service-linked entry for associating configurations with the application monitoring service, such as log association.
 *
 * @param request CreateServiceRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceRecordResponse
 */
CreateServiceRecordResponse Client::createServiceRecordWithOptions(const string &workspace, const string &serviceId, const CreateServiceRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRecordContent()) {
    body["recordContent"] = request.getRecordContent();
  }

  if (!!request.hasRecordType()) {
    body["recordType"] = request.getRecordType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceRecord"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service/" , Darabonba::Encode::Encoder::percentEncode(serviceId) , "/record")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServiceRecordResponse>();
}

/**
 * @summary Creates a service-linked entry for associating configurations with the application monitoring service, such as log association.
 *
 * @param request CreateServiceRecordRequest
 * @return CreateServiceRecordResponse
 */
CreateServiceRecordResponse Client::createServiceRecord(const string &workspace, const string &serviceId, const CreateServiceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createServiceRecordWithOptions(workspace, serviceId, request, headers, runtime);
}

/**
 * @summary To share a console page or embed it into a third-party system without requiring a password, you can call the CreateTicket operation to generate a ticket. You can then use the ticket to create a password-free link.
 *
 * @param request CreateTicketRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicketWithOptions(const CreateTicketRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessTokenExpirationTime()) {
    query["accessTokenExpirationTime"] = request.getAccessTokenExpirationTime();
  }

  if (!!request.hasExpirationTime()) {
    query["expirationTime"] = request.getExpirationTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateTicket"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tickets")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateTicketResponse>();
}

/**
 * @summary To share a console page or embed it into a third-party system without requiring a password, you can call the CreateTicket operation to generate a ticket. You can then use the ticket to create a password-free link.
 *
 * @param request CreateTicketRequest
 * @return CreateTicketResponse
 */
CreateTicketResponse Client::createTicket(const CreateTicketRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createTicketWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a Umodel configuration.
 *
 * @description Creates a Umodel configuration in a specified workspace.
 *
 * @param request CreateUmodelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUmodelResponse
 */
CreateUmodelResponse Client::createUmodelWithOptions(const string &workspace, const CreateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateUmodel"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUmodelResponse>();
}

/**
 * @summary Creates a Umodel configuration.
 *
 * @description Creates a Umodel configuration in a specified workspace.
 *
 * @param request CreateUmodelRequest
 * @return CreateUmodelResponse
 */
CreateUmodelResponse Client::createUmodel(const string &workspace, const CreateUmodelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createUmodelWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Deletes add-on release information.
 *
 * @param request DeleteAddonReleaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAddonReleaseResponse
 */
DeleteAddonReleaseResponse Client::deleteAddonReleaseWithOptions(const string &policyId, const DeleteAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["addonName"] = request.getAddonName();
  }

  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  if (!!request.hasReleaseName()) {
    query["releaseName"] = request.getReleaseName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAddonRelease"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/addon-releases")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAddonReleaseResponse>();
}

/**
 * @summary Deletes add-on release information.
 *
 * @param request DeleteAddonReleaseRequest
 * @return DeleteAddonReleaseResponse
 */
DeleteAddonReleaseResponse Client::deleteAddonRelease(const string &policyId, const DeleteAddonReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAddonReleaseWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Deletes an aggregation task group.
 *
 * @param request DeleteAggTaskGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAggTaskGroupResponse
 */
DeleteAggTaskGroupResponse Client::deleteAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const DeleteAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAggTaskGroup"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/agg-task-groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAggTaskGroupResponse>();
}

/**
 * @summary Deletes an aggregation task group.
 *
 * @param request DeleteAggTaskGroupRequest
 * @return DeleteAggTaskGroupResponse
 */
DeleteAggTaskGroupResponse Client::deleteAggTaskGroup(const string &instanceId, const string &groupId, const DeleteAggTaskGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAggTaskGroupWithOptions(instanceId, groupId, request, headers, runtime);
}

/**
 * @summary Deletes one or more alert webhooks.
 *
 * @param tmpReq DeleteAlertWebhooksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAlertWebhooksResponse
 */
DeleteAlertWebhooksResponse Client::deleteAlertWebhooksWithOptions(const DeleteAlertWebhooksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAlertWebhooksShrinkRequest request = DeleteAlertWebhooksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWebhookIds()) {
    request.setWebhookIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWebhookIds(), "webhookIds", "json"));
  }

  json query = {};
  if (!!request.hasWebhookIdsShrink()) {
    query["webhookIds"] = request.getWebhookIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAlertWebhooks"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webhooks")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAlertWebhooksResponse>();
}

/**
 * @summary Deletes one or more alert webhooks.
 *
 * @param request DeleteAlertWebhooksRequest
 * @return DeleteAlertWebhooksResponse
 */
DeleteAlertWebhooksResponse Client::deleteAlertWebhooks(const DeleteAlertWebhooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAlertWebhooksWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a business trace.
 *
 * @param request DeleteBizTraceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteBizTraceResponse
 */
DeleteBizTraceResponse Client::deleteBizTraceWithOptions(const string &bizTraceId, const DeleteBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteBizTrace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bizTrace/" , Darabonba::Encode::Encoder::percentEncode(bizTraceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteBizTraceResponse>();
}

/**
 * @summary Deletes a business trace.
 *
 * @param request DeleteBizTraceRequest
 * @return DeleteBizTraceResponse
 */
DeleteBizTraceResponse Client::deleteBizTrace(const string &bizTraceId, const DeleteBizTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteBizTraceWithOptions(bizTraceId, request, headers, runtime);
}

/**
 * @summary Deletes a cloud resource.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudResourceResponse
 */
DeleteCloudResourceResponse Client::deleteCloudResourceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudResource"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cloudresource")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudResourceResponse>();
}

/**
 * @summary Deletes a cloud resource.
 *
 * @return DeleteCloudResourceResponse
 */
DeleteCloudResourceResponse Client::deleteCloudResource() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteCloudResourceWithOptions(headers, runtime);
}

/**
 * @summary Deletes a context.
 *
 * @param request DeleteContextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextResponse
 */
DeleteContextResponse Client::deleteContextWithOptions(const string &workspace, const string &contextStoreName, const string &contextId, const DeleteContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContext"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/context/" , Darabonba::Encode::Encoder::percentEncode(contextId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextResponse>();
}

/**
 * @summary Deletes a context.
 *
 * @param request DeleteContextRequest
 * @return DeleteContextResponse
 */
DeleteContextResponse Client::deleteContext(const string &workspace, const string &contextStoreName, const string &contextId, const DeleteContextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteContextWithOptions(workspace, contextStoreName, contextId, request, headers, runtime);
}

/**
 * @summary Deletes a context store.
 *
 * @param request DeleteContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextStoreResponse
 */
DeleteContextStoreResponse Client::deleteContextStoreWithOptions(const string &workspace, const string &contextStoreName, const DeleteContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextStoreResponse>();
}

/**
 * @summary Deletes a context store.
 *
 * @param request DeleteContextStoreRequest
 * @return DeleteContextStoreResponse
 */
DeleteContextStoreResponse Client::deleteContextStore(const string &workspace, const string &contextStoreName, const DeleteContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteContextStoreWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Deletes an API key.
 *
 * @param request DeleteContextStoreAPIKeyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextStoreAPIKeyResponse
 */
DeleteContextStoreAPIKeyResponse Client::deleteContextStoreAPIKeyWithOptions(const string &workspace, const string &contextStoreName, const string &name, const DeleteContextStoreAPIKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextStoreAPIKey"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/apikey/" , Darabonba::Encode::Encoder::percentEncode(name))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextStoreAPIKeyResponse>();
}

/**
 * @summary Deletes an API key.
 *
 * @param request DeleteContextStoreAPIKeyRequest
 * @return DeleteContextStoreAPIKeyResponse
 */
DeleteContextStoreAPIKeyResponse Client::deleteContextStoreAPIKey(const string &workspace, const string &contextStoreName, const string &name, const DeleteContextStoreAPIKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteContextStoreAPIKeyWithOptions(workspace, contextStoreName, name, request, headers, runtime);
}

/**
 * @summary Deletes contexts in bulk.
 *
 * @param request DeleteContextsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextsResponse
 */
DeleteContextsResponse Client::deleteContextsWithOptions(const string &workspace, const string &contextStoreName, const DeleteContextsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContextIds()) {
    query["contextIds"] = request.getContextIds();
  }

  if (!!request.hasFilter()) {
    query["filter"] = request.getFilter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContexts"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/context")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextsResponse>();
}

/**
 * @summary Deletes contexts in bulk.
 *
 * @param request DeleteContextsRequest
 * @return DeleteContextsResponse
 */
DeleteContextsResponse Client::deleteContexts(const string &workspace, const string &contextStoreName, const DeleteContextsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteContextsWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Deletes a dataset.
 *
 * @param request DeleteDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDatasetWithOptions(const string &workspace, const string &datasetName, const DeleteDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDataset"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDatasetResponse>();
}

/**
 * @summary Deletes a dataset.
 *
 * @param request DeleteDatasetRequest
 * @return DeleteDatasetResponse
 */
DeleteDatasetResponse Client::deleteDataset(const string &workspace, const string &datasetName, const DeleteDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDatasetWithOptions(workspace, datasetName, request, headers, runtime);
}

/**
 * @summary Deletes a delivery task.
 *
 * @param request DeleteDeliveryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeliveryTaskResponse
 */
DeleteDeliveryTaskResponse Client::deleteDeliveryTaskWithOptions(const string &taskId, const DeleteDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeliveryTask"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/delivery-task/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeliveryTaskResponse>();
}

/**
 * @summary Deletes a delivery task.
 *
 * @param request DeleteDeliveryTaskRequest
 * @return DeleteDeliveryTaskResponse
 */
DeleteDeliveryTaskResponse Client::deleteDeliveryTask(const string &taskId, const DeleteDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteDeliveryTaskWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary Deletes an EntityStore.
 *
 * @param request DeleteEntityStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEntityStoreResponse
 */
DeleteEntityStoreResponse Client::deleteEntityStoreWithOptions(const string &workspaceName, const DeleteEntityStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEntityStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/entitystore")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEntityStoreResponse>();
}

/**
 * @summary Deletes an EntityStore.
 *
 * @param request DeleteEntityStoreRequest
 * @return DeleteEntityStoreResponse
 */
DeleteEntityStoreResponse Client::deleteEntityStore(const string &workspaceName, const DeleteEntityStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEntityStoreWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Deletes an Integration Center policy.
 *
 * @param request DeleteIntegrationPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteIntegrationPolicyResponse
 */
DeleteIntegrationPolicyResponse Client::deleteIntegrationPolicyWithOptions(const string &policyId, const DeleteIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasForce()) {
    query["force"] = request.getForce();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteIntegrationPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteIntegrationPolicyResponse>();
}

/**
 * @summary Deletes an Integration Center policy.
 *
 * @param request DeleteIntegrationPolicyRequest
 * @return DeleteIntegrationPolicyResponse
 */
DeleteIntegrationPolicyResponse Client::deleteIntegrationPolicy(const string &policyId, const DeleteIntegrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteIntegrationPolicyWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Deletes memories based on filter properties. You must set at least one filter property. If no filter properties are set, a validation error is returned.
 *
 * @param request DeleteMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoriesResponse
 */
DeleteMemoriesResponse Client::deleteMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const DeleteMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAgentId()) {
    query["agentId"] = request.getAgentId();
  }

  if (!!request.hasAppId()) {
    query["appId"] = request.getAppId();
  }

  if (!!request.hasRunId()) {
    query["runId"] = request.getRunId();
  }

  if (!!request.hasUserId()) {
    query["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemories"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoriesResponse>();
}

/**
 * @summary Deletes memories based on filter properties. You must set at least one filter property. If no filter properties are set, a validation error is returned.
 *
 * @param request DeleteMemoriesRequest
 * @return DeleteMemoriesResponse
 */
DeleteMemoriesResponse Client::deleteMemories(const string &workspace, const string &memoryStoreName, const DeleteMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoriesWithOptions(workspace, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Deletes a memory.
 *
 * @param request DeleteMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const DeleteMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemory"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryResponse>();
}

/**
 * @summary Deletes a memory.
 *
 * @param request DeleteMemoryRequest
 * @return DeleteMemoryResponse
 */
DeleteMemoryResponse Client::deleteMemory(const string &workspace, const string &memoryStoreName, const string &memoryId, const DeleteMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryWithOptions(workspace, memoryStoreName, memoryId, request, headers, runtime);
}

/**
 * @summary Deletes a Memory Store.
 *
 * @param request DeleteMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMemoryStoreResponse
 */
DeleteMemoryStoreResponse Client::deleteMemoryStoreWithOptions(const string &workspace, const string &memoryStoreName, const DeleteMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMemoryStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMemoryStoreResponse>();
}

/**
 * @summary Deletes a Memory Store.
 *
 * @param request DeleteMemoryStoreRequest
 * @return DeleteMemoryStoreResponse
 */
DeleteMemoryStoreResponse Client::deleteMemoryStore(const string &workspace, const string &memoryStoreName, const DeleteMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteMemoryStoreWithOptions(workspace, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Deletes a notification policy in a specified workspace. After deletion, the policy no longer sends notifications for subscribed events.
 *
 * @description Deletes a notification policy by specifying the workspace and uuid. Returns success to indicate the deletion result and the uuid of the deleted policy.
 *
 * @param request DeleteNotifyPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNotifyPolicyResponse
 */
DeleteNotifyPolicyResponse Client::deleteNotifyPolicyWithOptions(const DeleteNotifyPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUuid()) {
    query["uuid"] = request.getUuid();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNotifyPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/eventbase/notify-policy")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNotifyPolicyResponse>();
}

/**
 * @summary Deletes a notification policy in a specified workspace. After deletion, the policy no longer sends notifications for subscribed events.
 *
 * @description Deletes a notification policy by specifying the workspace and uuid. Returns success to indicate the deletion result and the uuid of the deleted policy.
 *
 * @param request DeleteNotifyPolicyRequest
 * @return DeleteNotifyPolicyResponse
 */
DeleteNotifyPolicyResponse Client::deleteNotifyPolicy(const DeleteNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteNotifyPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a pipeline.
 *
 * @param request DeletePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipelineWithOptions(const string &workspace, const string &pipelineName, const DeletePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePipeline"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePipelineResponse>();
}

/**
 * @summary Deletes a pipeline.
 *
 * @param request DeletePipelineRequest
 * @return DeletePipelineResponse
 */
DeletePipelineResponse Client::deletePipeline(const string &workspace, const string &pipelineName, const DeletePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePipelineWithOptions(workspace, pipelineName, request, headers, runtime);
}

/**
 * @summary Deletes a Prometheus instance.
 *
 * @description Deletes a Prometheus instance.
 *
 * @param request DeletePrometheusInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusInstanceResponse
 */
DeletePrometheusInstanceResponse Client::deletePrometheusInstanceWithOptions(const string &prometheusInstanceId, const DeletePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusInstance"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(prometheusInstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusInstanceResponse>();
}

/**
 * @summary Deletes a Prometheus instance.
 *
 * @description Deletes a Prometheus instance.
 *
 * @param request DeletePrometheusInstanceRequest
 * @return DeletePrometheusInstanceResponse
 */
DeletePrometheusInstanceResponse Client::deletePrometheusInstance(const string &prometheusInstanceId, const DeletePrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePrometheusInstanceWithOptions(prometheusInstanceId, request, headers, runtime);
}

/**
 * @summary Deletes a Prometheus view instance.
 *
 * @description Deletes a Prometheus view instance.
 *
 * @param request DeletePrometheusViewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusViewResponse
 */
DeletePrometheusViewResponse Client::deletePrometheusViewWithOptions(const string &prometheusViewId, const DeletePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusView"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-views/" , Darabonba::Encode::Encoder::percentEncode(prometheusViewId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusViewResponse>();
}

/**
 * @summary Deletes a Prometheus view instance.
 *
 * @description Deletes a Prometheus view instance.
 *
 * @param request DeletePrometheusViewRequest
 * @return DeletePrometheusViewResponse
 */
DeletePrometheusViewResponse Client::deletePrometheusView(const string &prometheusViewId, const DeletePrometheusViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePrometheusViewWithOptions(prometheusViewId, request, headers, runtime);
}

/**
 * @summary Deletes a Prometheus virtual instance by its ID.
 *
 * @param request DeletePrometheusVirtualInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusVirtualInstanceResponse
 */
DeletePrometheusVirtualInstanceResponse Client::deletePrometheusVirtualInstanceWithOptions(const string &prometheusInstanceId, const DeletePrometheusVirtualInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePrometheusVirtualInstance"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/virtual-instances/" , Darabonba::Encode::Encoder::percentEncode(prometheusInstanceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePrometheusVirtualInstanceResponse>();
}

/**
 * @summary Deletes a Prometheus virtual instance by its ID.
 *
 * @param request DeletePrometheusVirtualInstanceRequest
 * @return DeletePrometheusVirtualInstanceResponse
 */
DeletePrometheusVirtualInstanceResponse Client::deletePrometheusVirtualInstance(const string &prometheusInstanceId, const DeletePrometheusVirtualInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePrometheusVirtualInstanceWithOptions(prometheusInstanceId, request, headers, runtime);
}

/**
 * @summary Deletes an Application Monitoring service.
 *
 * @param request DeleteServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteServiceWithOptions(const string &workspace, const string &serviceId, const DeleteServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceResponse>();
}

/**
 * @summary Deletes an Application Monitoring service.
 *
 * @param request DeleteServiceRequest
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteService(const string &workspace, const string &serviceId, const DeleteServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceWithOptions(workspace, serviceId, request, headers, runtime);
}

/**
 * @summary Deletes a service association entry.
 *
 * @description Deletes a created service association entry.
 *
 * @param request DeleteServiceRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceRecordResponse
 */
DeleteServiceRecordResponse Client::deleteServiceRecordWithOptions(const string &workspace, const string &serviceId, const DeleteServiceRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordType()) {
    query["recordType"] = request.getRecordType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteServiceRecord"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service/" , Darabonba::Encode::Encoder::percentEncode(serviceId) , "/record")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteServiceRecordResponse>();
}

/**
 * @summary Deletes a service association entry.
 *
 * @description Deletes a created service association entry.
 *
 * @param request DeleteServiceRecordRequest
 * @return DeleteServiceRecordResponse
 */
DeleteServiceRecordResponse Client::deleteServiceRecord(const string &workspace, const string &serviceId, const DeleteServiceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceRecordWithOptions(workspace, serviceId, request, headers, runtime);
}

/**
 * @summary Deletes a Umodel configuration.
 *
 * @description Deletes a Umodel from a specified workspace.
 *
 * @param request DeleteUmodelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUmodelResponse
 */
DeleteUmodelResponse Client::deleteUmodelWithOptions(const string &workspace, const DeleteUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUmodel"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUmodelResponse>();
}

/**
 * @summary Deletes a Umodel configuration.
 *
 * @description Deletes a Umodel from a specified workspace.
 *
 * @param request DeleteUmodelRequest
 * @return DeleteUmodelResponse
 */
DeleteUmodelResponse Client::deleteUmodel(const string &workspace, const DeleteUmodelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUmodelWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Deletes a public Umodel schema reference.
 *
 * @param request DeleteUmodelCommonSchemaRefRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUmodelCommonSchemaRefResponse
 */
DeleteUmodelCommonSchemaRefResponse Client::deleteUmodelCommonSchemaRefWithOptions(const string &workspace, const DeleteUmodelCommonSchemaRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroup()) {
    query["group"] = request.getGroup();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUmodelCommonSchemaRef"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel/common-schema-ref")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUmodelCommonSchemaRefResponse>();
}

/**
 * @summary Deletes a public Umodel schema reference.
 *
 * @param request DeleteUmodelCommonSchemaRefRequest
 * @return DeleteUmodelCommonSchemaRefResponse
 */
DeleteUmodelCommonSchemaRefResponse Client::deleteUmodelCommonSchemaRef(const string &workspace, const DeleteUmodelCommonSchemaRefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUmodelCommonSchemaRefWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Deletes Umodel elements.
 *
 * @description Deletes Umodel data from a specified workspace.
 *
 * @param request DeleteUmodelDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUmodelDataResponse
 */
DeleteUmodelDataResponse Client::deleteUmodelDataWithOptions(const string &workspace, const DeleteUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["domain"] = request.getDomain();
  }

  if (!!request.hasKind()) {
    query["kind"] = request.getKind();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUmodelData"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel/data")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUmodelDataResponse>();
}

/**
 * @summary Deletes Umodel elements.
 *
 * @description Deletes Umodel data from a specified workspace.
 *
 * @param request DeleteUmodelDataRequest
 * @return DeleteUmodelDataResponse
 */
DeleteUmodelDataResponse Client::deleteUmodelData(const string &workspace, const DeleteUmodelDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUmodelDataWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceName, const DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary Deletes a workspace.
 *
 * @param request DeleteWorkspaceRequest
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceName, const DeleteWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Queries metric metadata.
 *
 * @description Queries the details of CloudMonitor monitoring metrics metadata.
 *
 * @param tmpReq DescribeMetricMetaListRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMetricMetaListResponse
 */
DescribeMetricMetaListResponse Client::describeMetricMetaListWithOptions(const DescribeMetricMetaListRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeMetricMetaListShrinkRequest request = DescribeMetricMetaListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLabels()) {
    request.setLabelsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabels(), "labels", "json"));
  }

  json query = {};
  if (!!request.hasKeywords()) {
    query["keywords"] = request.getKeywords();
  }

  if (!!request.hasLabelsShrink()) {
    query["labels"] = request.getLabelsShrink();
  }

  if (!!request.hasMetaFormat()) {
    query["metaFormat"] = request.getMetaFormat();
  }

  if (!!request.hasMetricName()) {
    query["metricName"] = request.getMetricName();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
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
    {"action" , "DescribeMetricMetaList"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/describe-metric-meta-list")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMetricMetaListResponse>();
}

/**
 * @summary Queries metric metadata.
 *
 * @description Queries the details of CloudMonitor monitoring metrics metadata.
 *
 * @param request DescribeMetricMetaListRequest
 * @return DescribeMetricMetaListResponse
 */
DescribeMetricMetaListResponse Client::describeMetricMetaList(const DescribeMetricMetaListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeMetricMetaListWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of regions.
 *
 * @param request DescribeRegionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegionsWithOptions(const DescribeRegionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRegions"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/regions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRegionsResponse>();
}

/**
 * @summary Retrieves a list of regions.
 *
 * @param request DescribeRegionsRequest
 * @return DescribeRegionsResponse
 */
DescribeRegionsResponse Client::describeRegions(const DescribeRegionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeRegionsWithOptions(request, headers, runtime);
}

/**
 * @summary Disables a specified notification policy. After the policy is disabled, notifications are paused but all configurations are retained. The policy can be re-enabled.
 *
 * @description Disables a notification policy by specifying the workspace and uuid (path parameter). Returns success and the policy uuid.
 *
 * @param request DisableNotifyPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableNotifyPolicyResponse
 */
DisableNotifyPolicyResponse Client::disableNotifyPolicyWithOptions(const string &uuid, const DisableNotifyPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableNotifyPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/eventbase/notify-policy/" , Darabonba::Encode::Encoder::percentEncode(uuid) , "/disable")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableNotifyPolicyResponse>();
}

/**
 * @summary Disables a specified notification policy. After the policy is disabled, notifications are paused but all configurations are retained. The policy can be re-enabled.
 *
 * @description Disables a notification policy by specifying the workspace and uuid (path parameter). Returns success and the policy uuid.
 *
 * @param request DisableNotifyPolicyRequest
 * @return DisableNotifyPolicyResponse
 */
DisableNotifyPolicyResponse Client::disableNotifyPolicy(const string &uuid, const DisableNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return disableNotifyPolicyWithOptions(uuid, request, headers, runtime);
}

/**
 * @summary Enables a disabled notification policy in a specified workspace. After the policy is enabled, it resumes sending notifications for subscribed events.
 *
 * @description Enables a notification policy by specifying the workspace and uuid path parameters. Returns success and the policy uuid.
 *
 * @param request EnableNotifyPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableNotifyPolicyResponse
 */
EnableNotifyPolicyResponse Client::enableNotifyPolicyWithOptions(const string &uuid, const EnableNotifyPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableNotifyPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/eventbase/notify-policy/" , Darabonba::Encode::Encoder::percentEncode(uuid) , "/enable")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableNotifyPolicyResponse>();
}

/**
 * @summary Enables a disabled notification policy in a specified workspace. After the policy is enabled, it resumes sending notifications for subscribed events.
 *
 * @description Enables a notification policy by specifying the workspace and uuid path parameters. Returns success and the policy uuid.
 *
 * @param request EnableNotifyPolicyRequest
 * @return EnableNotifyPolicyResponse
 */
EnableNotifyPolicyResponse Client::enableNotifyPolicy(const string &uuid, const EnableNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return enableNotifyPolicyWithOptions(uuid, request, headers, runtime);
}

/**
 * @summary Executes SQL and SPL queries.
 *
 * @param request ExecuteQueryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExecuteQueryResponse
 */
ExecuteQueryResponse Client::executeQueryWithOptions(const string &workspace, const string &datasetName, const ExecuteQueryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ExecuteQuery"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName) , "/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExecuteQueryResponse>();
}

/**
 * @summary Executes SQL and SPL queries.
 *
 * @param request ExecuteQueryRequest
 * @return ExecuteQueryResponse
 */
ExecuteQueryResponse Client::executeQuery(const string &workspace, const string &datasetName, const ExecuteQueryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return executeQueryWithOptions(workspace, datasetName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an add-on.
 *
 * @description Retrieves the details of an add-on.
 *
 * @param request GetAddonRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAddonResponse
 */
GetAddonResponse Client::getAddonWithOptions(const string &addonName, const GetAddonRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAddon"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/addons/" , Darabonba::Encode::Encoder::percentEncode(addonName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAddonResponse>();
}

/**
 * @summary Retrieves the details of an add-on.
 *
 * @description Retrieves the details of an add-on.
 *
 * @param request GetAddonRequest
 * @return GetAddonResponse
 */
GetAddonResponse Client::getAddon(const string &addonName, const GetAddonRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAddonWithOptions(addonName, request, headers, runtime);
}

/**
 * @summary Details of an add-on schema.
 *
 * @description This topic provides an example of how to modify version `1` of alert template `123456`. In this example, the alert level is set to `Critical`, the statistical method is set to `Average`, the comparison operator for the alert threshold is set to `GreaterThanOrEqualToThreshold`, the alert threshold is set to `90`, and the number of retries is set to `3`. The response indicates that the alert template was successfully modified.
 *
 * @param request GetAddonCodeTemplateRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAddonCodeTemplateResponse
 */
GetAddonCodeTemplateResponse Client::getAddonCodeTemplateWithOptions(const string &addonName, const GetAddonCodeTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasEnvironmentType()) {
    query["environmentType"] = request.getEnvironmentType();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAddonCodeTemplate"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/addons/" , Darabonba::Encode::Encoder::percentEncode(addonName) , "/alert-code-template")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAddonCodeTemplateResponse>();
}

/**
 * @summary Details of an add-on schema.
 *
 * @description This topic provides an example of how to modify version `1` of alert template `123456`. In this example, the alert level is set to `Critical`, the statistical method is set to `Average`, the comparison operator for the alert threshold is set to `GreaterThanOrEqualToThreshold`, the alert threshold is set to `90`, and the number of retries is set to `3`. The response indicates that the alert template was successfully modified.
 *
 * @param request GetAddonCodeTemplateRequest
 * @return GetAddonCodeTemplateResponse
 */
GetAddonCodeTemplateResponse Client::getAddonCodeTemplate(const string &addonName, const GetAddonCodeTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAddonCodeTemplateWithOptions(addonName, request, headers, runtime);
}

/**
 * @summary Queries the details and accessed state of an add-on release.
 *
 * @param request GetAddonReleaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAddonReleaseResponse
 */
GetAddonReleaseResponse Client::getAddonReleaseWithOptions(const string &releaseName, const string &policyId, const GetAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAddonRelease"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/addon-releases/" , Darabonba::Encode::Encoder::percentEncode(releaseName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAddonReleaseResponse>();
}

/**
 * @summary Queries the details and accessed state of an add-on release.
 *
 * @param request GetAddonReleaseRequest
 * @return GetAddonReleaseResponse
 */
GetAddonReleaseResponse Client::getAddonRelease(const string &releaseName, const string &policyId, const GetAddonReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAddonReleaseWithOptions(releaseName, policyId, request, headers, runtime);
}

/**
 * @summary The details of an add-on schema.
 *
 * @description Retrieves the schema of an add-on.
 *
 * @param request GetAddonSchemaRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAddonSchemaResponse
 */
GetAddonSchemaResponse Client::getAddonSchemaWithOptions(const string &addonName, const GetAddonSchemaRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasEnvironmentType()) {
    query["environmentType"] = request.getEnvironmentType();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAddonSchema"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/addons/" , Darabonba::Encode::Encoder::percentEncode(addonName) , "/schema")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAddonSchemaResponse>();
}

/**
 * @summary The details of an add-on schema.
 *
 * @description Retrieves the schema of an add-on.
 *
 * @param request GetAddonSchemaRequest
 * @return GetAddonSchemaResponse
 */
GetAddonSchemaResponse Client::getAddonSchema(const string &addonName, const GetAddonSchemaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAddonSchemaWithOptions(addonName, request, headers, runtime);
}

/**
 * @summary Queries an aggregation task group.
 *
 * @param request GetAggTaskGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggTaskGroupResponse
 */
GetAggTaskGroupResponse Client::getAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const GetAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAggTaskGroup"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/agg-task-groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAggTaskGroupResponse>();
}

/**
 * @summary Queries an aggregation task group.
 *
 * @param request GetAggTaskGroupRequest
 * @return GetAggTaskGroupResponse
 */
GetAggTaskGroupResponse Client::getAggTaskGroup(const string &instanceId, const string &groupId, const GetAggTaskGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAggTaskGroupWithOptions(instanceId, groupId, request, headers, runtime);
}

/**
 * @summary Queries a business trace.
 *
 * @param request GetBizTraceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetBizTraceResponse
 */
GetBizTraceResponse Client::getBizTraceWithOptions(const string &bizTraceId, const GetBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetBizTrace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bizTrace/" , Darabonba::Encode::Encoder::percentEncode(bizTraceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetBizTraceResponse>();
}

/**
 * @summary Queries a business trace.
 *
 * @param request GetBizTraceRequest
 * @return GetBizTraceResponse
 */
GetBizTraceResponse Client::getBizTrace(const string &bizTraceId, const GetBizTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getBizTraceWithOptions(bizTraceId, request, headers, runtime);
}

/**
 * @summary Retrieves information about cloud resources.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCloudResourceResponse
 */
GetCloudResourceResponse Client::getCloudResourceWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCloudResource"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cloudresource")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCloudResourceResponse>();
}

/**
 * @summary Retrieves information about cloud resources.
 *
 * @return GetCloudResourceResponse
 */
GetCloudResourceResponse Client::getCloudResource() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCloudResourceWithOptions(headers, runtime);
}

/**
 * @summary Queries all entity information of a specific cloud service within a specified time range.
 *
 * @description ## Operation description
 * - This operation queries all entities of a specific cloud service within a specified time range.
 * - The `from` and `to` parameters specify the time range of the query in seconds-level timestamps.
 * - The `spl` parameter supports entityStore query statements to filter or select the required entities and their properties.
 * - If you need only specific fields, use the `project` clause in `spl` to filter them.
 * - The response contains the specific property values of each entity and the corresponding list of property names for easy parsing and processing.
 *
 * @param request GetCloudResourceDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCloudResourceDataResponse
 */
GetCloudResourceDataResponse Client::getCloudResourceDataWithOptions(const GetCloudResourceDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFrom()) {
    query["from"] = request.getFrom();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasTo()) {
    query["to"] = request.getTo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCloudResourceData"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cloudresource/data")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCloudResourceDataResponse>();
}

/**
 * @summary Queries all entity information of a specific cloud service within a specified time range.
 *
 * @description ## Operation description
 * - This operation queries all entities of a specific cloud service within a specified time range.
 * - The `from` and `to` parameters specify the time range of the query in seconds-level timestamps.
 * - The `spl` parameter supports entityStore query statements to filter or select the required entities and their properties.
 * - If you need only specific fields, use the `project` clause in `spl` to filter them.
 * - The response contains the specific property values of each entity and the corresponding list of property names for easy parsing and processing.
 *
 * @param request GetCloudResourceDataRequest
 * @return GetCloudResourceDataResponse
 */
GetCloudResourceDataResponse Client::getCloudResourceData(const GetCloudResourceDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCloudResourceDataWithOptions(request, headers, runtime);
}

/**
 * @summary Checks whether a Prometheus service or product is activated.
 *
 * @description The product and service request parameters cannot be specified in the same request.
 *
 * @param request GetCmsServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCmsServiceResponse
 */
GetCmsServiceResponse Client::getCmsServiceWithOptions(const GetCmsServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProduct()) {
    query["product"] = request.getProduct();
  }

  if (!!request.hasService()) {
    query["service"] = request.getService();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCmsService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cmsservice")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCmsServiceResponse>();
}

/**
 * @summary Checks whether a Prometheus service or product is activated.
 *
 * @description The product and service request parameters cannot be specified in the same request.
 *
 * @param request GetCmsServiceRequest
 * @return GetCmsServiceResponse
 */
GetCmsServiceResponse Client::getCmsService(const GetCmsServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getCmsServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a single context.
 *
 * @param request GetContextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextResponse
 */
GetContextResponse Client::getContextWithOptions(const string &workspace, const string &contextStoreName, const string &contextId, const GetContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFormatted()) {
    query["formatted"] = request.getFormatted();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContext"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/context/" , Darabonba::Encode::Encoder::percentEncode(contextId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextResponse>();
}

/**
 * @summary Retrieves a single context.
 *
 * @param request GetContextRequest
 * @return GetContextResponse
 */
GetContextResponse Client::getContext(const string &workspace, const string &contextStoreName, const string &contextId, const GetContextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getContextWithOptions(workspace, contextStoreName, contextId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified context store.
 *
 * @param request GetContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextStoreResponse
 */
GetContextStoreResponse Client::getContextStoreWithOptions(const string &workspace, const string &contextStoreName, const GetContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextStoreResponse>();
}

/**
 * @summary Retrieves the details of a specified context store.
 *
 * @param request GetContextStoreRequest
 * @return GetContextStoreResponse
 */
GetContextStoreResponse Client::getContextStore(const string &workspace, const string &contextStoreName, const GetContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getContextStoreWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified dataset.
 *
 * @param request GetDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDatasetWithOptions(const string &workspace, const string &datasetName, const GetDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataset"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDatasetResponse>();
}

/**
 * @summary Retrieves the details of a specified dataset.
 *
 * @param request GetDatasetRequest
 * @return GetDatasetResponse
 */
GetDatasetResponse Client::getDataset(const string &workspace, const string &datasetName, const GetDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDatasetWithOptions(workspace, datasetName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a data delivery task.
 *
 * @description Deletes a specified site monitoring task.
 *
 * @param request GetDeliveryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDeliveryTaskResponse
 */
GetDeliveryTaskResponse Client::getDeliveryTaskWithOptions(const string &taskId, const GetDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDeliveryTask"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/delivery-task/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDeliveryTaskResponse>();
}

/**
 * @summary Retrieves the details of a data delivery task.
 *
 * @description Deletes a specified site monitoring task.
 *
 * @param request GetDeliveryTaskRequest
 * @return GetDeliveryTaskResponse
 */
GetDeliveryTaskResponse Client::getDeliveryTask(const string &taskId, const GetDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getDeliveryTaskWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary Retrieves the storage information of an EntityStore.
 *
 * @param request GetEntityStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEntityStoreResponse
 */
GetEntityStoreResponse Client::getEntityStoreWithOptions(const string &workspaceName, const GetEntityStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetEntityStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceName) , "/entitystore")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEntityStoreResponse>();
}

/**
 * @summary Retrieves the storage information of an EntityStore.
 *
 * @param request GetEntityStoreRequest
 * @return GetEntityStoreResponse
 */
GetEntityStoreResponse Client::getEntityStore(const string &workspaceName, const GetEntityStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEntityStoreWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Queries the entity and relational data in a specified workspace to retrieve entity data for a specific time range.
 *
 * @param request GetEntityStoreDataRequest
 * @param headers GetEntityStoreDataHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEntityStoreDataResponse
 */
GetEntityStoreDataResponse Client::getEntityStoreDataWithOptions(const string &workspace, const GetEntityStoreDataRequest &request, const GetEntityStoreDataHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFrom()) {
    body["from"] = request.getFrom();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasTo()) {
    body["to"] = request.getTo();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAcceptEncoding()) {
    realHeaders["acceptEncoding"] = Darabonba::Convert::stringVal(headers.getAcceptEncoding());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetEntityStoreData"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/entitiesAndRelations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetEntityStoreDataResponse>();
}

/**
 * @summary Queries the entity and relational data in a specified workspace to retrieve entity data for a specific time range.
 *
 * @param request GetEntityStoreDataRequest
 * @return GetEntityStoreDataResponse
 */
GetEntityStoreDataResponse Client::getEntityStoreData(const string &workspace, const GetEntityStoreDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GetEntityStoreDataHeaders headers = GetEntityStoreDataHeaders();
  return getEntityStoreDataWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Query integration center policy information.
 *
 * @param request GetIntegrationPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntegrationPolicyResponse
 */
GetIntegrationPolicyResponse Client::getIntegrationPolicyWithOptions(const string &policyId, const GetIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIntegrationPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntegrationPolicyResponse>();
}

/**
 * @summary Query integration center policy information.
 *
 * @param request GetIntegrationPolicyRequest
 * @return GetIntegrationPolicyResponse
 */
GetIntegrationPolicyResponse Client::getIntegrationPolicy(const string &policyId, const GetIntegrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIntegrationPolicyWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Queries the Integration Center version for a container cluster.
 *
 * @description This operation is not available in the API Explorer.
 *
 * @param request GetIntegrationVersionForCSRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntegrationVersionForCSResponse
 */
GetIntegrationVersionForCSResponse Client::getIntegrationVersionForCSWithOptions(const GetIntegrationVersionForCSRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClusterId()) {
    query["clusterId"] = request.getClusterId();
  }

  if (!!request.hasClusterType()) {
    query["clusterType"] = request.getClusterType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetIntegrationVersionForCS"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-version/cs")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetIntegrationVersionForCSResponse>();
}

/**
 * @summary Queries the Integration Center version for a container cluster.
 *
 * @description This operation is not available in the API Explorer.
 *
 * @param request GetIntegrationVersionForCSRequest
 * @return GetIntegrationVersionForCSResponse
 */
GetIntegrationVersionForCSResponse Client::getIntegrationVersionForCS(const GetIntegrationVersionForCSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIntegrationVersionForCSWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves all memories.
 *
 * @param request GetMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoriesResponse
 */
GetMemoriesResponse Client::getMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const GetMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasFilters()) {
    body["filters"] = request.getFilters();
  }

  if (!!request.hasPage()) {
    body["page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    body["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.getRunId();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetMemories"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory/query")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoriesResponse>();
}

/**
 * @summary Retrieves all memories.
 *
 * @param request GetMemoriesRequest
 * @return GetMemoriesResponse
 */
GetMemoriesResponse Client::getMemories(const string &workspace, const string &memoryStoreName, const GetMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoriesWithOptions(workspace, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Retrieves a single memory.
 *
 * @param request GetMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryResponse
 */
GetMemoryResponse Client::getMemoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const GetMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemory"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryResponse>();
}

/**
 * @summary Retrieves a single memory.
 *
 * @param request GetMemoryRequest
 * @return GetMemoryResponse
 */
GetMemoryResponse Client::getMemory(const string &workspace, const string &memoryStoreName, const string &memoryId, const GetMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryWithOptions(workspace, memoryStoreName, memoryId, request, headers, runtime);
}

/**
 * @summary Retrieve memory history.
 *
 * @param request GetMemoryHistoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryHistoryResponse
 */
GetMemoryHistoryResponse Client::getMemoryHistoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const GetMemoryHistoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemoryHistory"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory/" , Darabonba::Encode::Encoder::percentEncode(memoryId) , "/history")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryHistoryResponse>();
}

/**
 * @summary Retrieve memory history.
 *
 * @param request GetMemoryHistoryRequest
 * @return GetMemoryHistoryResponse
 */
GetMemoryHistoryResponse Client::getMemoryHistory(const string &workspace, const string &memoryStoreName, const string &memoryId, const GetMemoryHistoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryHistoryWithOptions(workspace, memoryStoreName, memoryId, request, headers, runtime);
}

/**
 * @summary Queries a memory store.
 *
 * @description Typically used together with the QueryMetricMeta operation for querying metrics and the QueryMetricList/QueryMetricLast operation for querying monitoring data.
 * ## Request type 
 * POST|GET.
 *
 * @param request GetMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMemoryStoreResponse
 */
GetMemoryStoreResponse Client::getMemoryStoreWithOptions(const string &workspace, const string &memoryStoreName, const GetMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMemoryStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMemoryStoreResponse>();
}

/**
 * @summary Queries a memory store.
 *
 * @description Typically used together with the QueryMetricMeta operation for querying metrics and the QueryMetricList/QueryMetricLast operation for querying monitoring data.
 * ## Request type 
 * POST|GET.
 *
 * @param request GetMemoryStoreRequest
 * @return GetMemoryStoreResponse
 */
GetMemoryStoreResponse Client::getMemoryStore(const string &workspace, const string &memoryStoreName, const GetMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getMemoryStoreWithOptions(workspace, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Retrieves the details of a specified notification policy.
 *
 * @description Queries a specified notification policy by workspace and UUID. If the UUID does not exist, a ResourceNotFound error is returned.
 *
 * @param request GetNotifyPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNotifyPolicyResponse
 */
GetNotifyPolicyResponse Client::getNotifyPolicyWithOptions(const GetNotifyPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasUuid()) {
    query["uuid"] = request.getUuid();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNotifyPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/eventbase/notify-policy")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNotifyPolicyResponse>();
}

/**
 * @summary Retrieves the details of a specified notification policy.
 *
 * @description Queries a specified notification policy by workspace and UUID. If the UUID does not exist, a ResourceNotFound error is returned.
 *
 * @param request GetNotifyPolicyRequest
 * @return GetNotifyPolicyResponse
 */
GetNotifyPolicyResponse Client::getNotifyPolicy(const GetNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getNotifyPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Query pipeline
 *
 * @param request GetPipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipelineWithOptions(const string &workspace, const string &pipelineName, const GetPipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPipeline"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPipelineResponse>();
}

/**
 * @summary Query pipeline
 *
 * @param request GetPipelineRequest
 * @return GetPipelineResponse
 */
GetPipelineResponse Client::getPipeline(const string &workspace, const string &pipelineName, const GetPipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPipelineWithOptions(workspace, pipelineName, request, headers, runtime);
}

/**
 * @summary Queries the details of a specified Managed Service for Prometheus instance.
 *
 * @description Retrieves the details of a Managed Service for Prometheus instance.
 *
 * @param request GetPrometheusInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusInstanceResponse
 */
GetPrometheusInstanceResponse Client::getPrometheusInstanceWithOptions(const string &prometheusInstanceId, const GetPrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusInstance"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(prometheusInstanceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusInstanceResponse>();
}

/**
 * @summary Queries the details of a specified Managed Service for Prometheus instance.
 *
 * @description Retrieves the details of a Managed Service for Prometheus instance.
 *
 * @param request GetPrometheusInstanceRequest
 * @return GetPrometheusInstanceResponse
 */
GetPrometheusInstanceResponse Client::getPrometheusInstance(const string &prometheusInstanceId, const GetPrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPrometheusInstanceWithOptions(prometheusInstanceId, request, headers, runtime);
}

/**
 * @summary Retrieves the user settings for Prometheus.
 *
 * @param request GetPrometheusUserSettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusUserSettingResponse
 */
GetPrometheusUserSettingResponse Client::getPrometheusUserSettingWithOptions(const GetPrometheusUserSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusUserSetting"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-user-setting")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusUserSettingResponse>();
}

/**
 * @summary Retrieves the user settings for Prometheus.
 *
 * @param request GetPrometheusUserSettingRequest
 * @return GetPrometheusUserSettingResponse
 */
GetPrometheusUserSettingResponse Client::getPrometheusUserSetting(const GetPrometheusUserSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPrometheusUserSettingWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a specified Prometheus view instance.
 *
 * @description Queries a specified Prometheus view instance.
 *
 * @param request GetPrometheusViewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetPrometheusViewResponse
 */
GetPrometheusViewResponse Client::getPrometheusViewWithOptions(const string &prometheusViewId, const GetPrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetPrometheusView"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-views/" , Darabonba::Encode::Encoder::percentEncode(prometheusViewId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetPrometheusViewResponse>();
}

/**
 * @summary Queries the details of a specified Prometheus view instance.
 *
 * @description Queries a specified Prometheus view instance.
 *
 * @param request GetPrometheusViewRequest
 * @return GetPrometheusViewResponse
 */
GetPrometheusViewResponse Client::getPrometheusView(const string &prometheusViewId, const GetPrometheusViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getPrometheusViewWithOptions(prometheusViewId, request, headers, runtime);
}

/**
 * @summary Retrieves the details of an Application Monitoring service.
 *
 * @param request GetServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceResponse
 */
GetServiceResponse Client::getServiceWithOptions(const string &workspace, const string &serviceId, const GetServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceResponse>();
}

/**
 * @summary Retrieves the details of an Application Monitoring service.
 *
 * @param request GetServiceRequest
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const string &workspace, const string &serviceId, const GetServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceWithOptions(workspace, serviceId, request, headers, runtime);
}

/**
 * @summary Retrieves an application observability instance.
 *
 * @param request GetServiceObservabilityRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceObservabilityResponse
 */
GetServiceObservabilityResponse Client::getServiceObservabilityWithOptions(const string &workspace, const string &type, const GetServiceObservabilityRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceObservability"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service-observability/" , Darabonba::Encode::Encoder::percentEncode(type))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceObservabilityResponse>();
}

/**
 * @summary Retrieves an application observability instance.
 *
 * @param request GetServiceObservabilityRequest
 * @return GetServiceObservabilityResponse
 */
GetServiceObservabilityResponse Client::getServiceObservability(const string &workspace, const string &type, const GetServiceObservabilityRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceObservabilityWithOptions(workspace, type, request, headers, runtime);
}

/**
 * @summary Queries a service-linked entry.
 *
 * @description Retrieves a service-linked entry.
 *
 * @param request GetServiceRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceRecordResponse
 */
GetServiceRecordResponse Client::getServiceRecordWithOptions(const string &workspace, const string &serviceId, const GetServiceRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRecordType()) {
    query["recordType"] = request.getRecordType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetServiceRecord"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service/" , Darabonba::Encode::Encoder::percentEncode(serviceId) , "/record")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetServiceRecordResponse>();
}

/**
 * @summary Queries a service-linked entry.
 *
 * @description Retrieves a service-linked entry.
 *
 * @param request GetServiceRecordRequest
 * @return GetServiceRecordResponse
 */
GetServiceRecordResponse Client::getServiceRecord(const string &workspace, const string &serviceId, const GetServiceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceRecordWithOptions(workspace, serviceId, request, headers, runtime);
}

/**
 * @summary Retrieves the configuration of a Umodel.
 *
 * @description Retrieves the configuration of a Umodel.
 *
 * @param request GetUmodelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUmodelResponse
 */
GetUmodelResponse Client::getUmodelWithOptions(const string &workspace, const GetUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUmodel"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUmodelResponse>();
}

/**
 * @summary Retrieves the configuration of a Umodel.
 *
 * @description Retrieves the configuration of a Umodel.
 *
 * @param request GetUmodelRequest
 * @return GetUmodelResponse
 */
GetUmodelResponse Client::getUmodel(const string &workspace, const GetUmodelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUmodelWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Retrieves the referenced common Umodel schema.
 *
 * @param request GetUmodelCommonSchemaRefRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUmodelCommonSchemaRefResponse
 */
GetUmodelCommonSchemaRefResponse Client::getUmodelCommonSchemaRefWithOptions(const string &workspace, const GetUmodelCommonSchemaRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUmodelCommonSchemaRef"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel/common-schema-ref")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUmodelCommonSchemaRefResponse>();
}

/**
 * @summary Retrieves the referenced common Umodel schema.
 *
 * @param request GetUmodelCommonSchemaRefRequest
 * @return GetUmodelCommonSchemaRefResponse
 */
GetUmodelCommonSchemaRefResponse Client::getUmodelCommonSchemaRef(const string &workspace, const GetUmodelCommonSchemaRefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUmodelCommonSchemaRefWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Retrieves graph data associated with a Umodel.
 *
 * @description This operation retrieves the graph data associated with a Umodel.
 *
 * @param request GetUmodelDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUmodelDataResponse
 */
GetUmodelDataResponse Client::getUmodelDataWithOptions(const string &workspace, const GetUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMethod()) {
    query["method"] = request.getMethod();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetUmodelData"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel/graph")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUmodelDataResponse>();
}

/**
 * @summary Retrieves graph data associated with a Umodel.
 *
 * @description This operation retrieves the graph data associated with a Umodel.
 *
 * @param request GetUmodelDataRequest
 * @return GetUmodelDataResponse
 */
GetUmodelDataResponse Client::getUmodelData(const string &workspace, const GetUmodelDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUmodelDataWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Retrieves a workspace.
 *
 * @param request GetWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const string &workspaceName, const GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary Retrieves a workspace.
 *
 * @param request GetWorkspaceRequest
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const string &workspaceName, const GetWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Lists the releases for an add-on.
 *
 * @description This operation retrieves a list of integration configurations.
 *
 * @param request ListAddonReleasesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonReleasesResponse
 */
ListAddonReleasesResponse Client::listAddonReleasesWithOptions(const string &policyId, const ListAddonReleasesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["addonName"] = request.getAddonName();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasParentAddonReleaseId()) {
    query["parentAddonReleaseId"] = request.getParentAddonReleaseId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddonReleases"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/addon-releases")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonReleasesResponse>();
}

/**
 * @summary Lists the releases for an add-on.
 *
 * @description This operation retrieves a list of integration configurations.
 *
 * @param request ListAddonReleasesRequest
 * @return ListAddonReleasesResponse
 */
ListAddonReleasesResponse Client::listAddonReleases(const string &policyId, const ListAddonReleasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAddonReleasesWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Lists the products in the new Integration Center by group.
 *
 * @description Creates a site monitoring job.
 *
 * @param request ListAddonsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddonsWithOptions(const ListAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasCategory()) {
    query["category"] = request.getCategory();
  }

  if (!!request.hasRegexp()) {
    query["regexp"] = request.getRegexp();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.getSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAddons"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/addons")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAddonsResponse>();
}

/**
 * @summary Lists the products in the new Integration Center by group.
 *
 * @description Creates a site monitoring job.
 *
 * @param request ListAddonsRequest
 * @return ListAddonsResponse
 */
ListAddonsResponse Client::listAddons(const ListAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAddonsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of aggregation task groups.
 *
 * @param tmpReq ListAggTaskGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAggTaskGroupsResponse
 */
ListAggTaskGroupsResponse Client::listAggTaskGroupsWithOptions(const string &instanceId, const ListAggTaskGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAggTaskGroupsShrinkRequest request = ListAggTaskGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasFilterAggTaskGroupIds()) {
    query["filterAggTaskGroupIds"] = request.getFilterAggTaskGroupIds();
  }

  if (!!request.hasFilterAggTaskGroupNames()) {
    query["filterAggTaskGroupNames"] = request.getFilterAggTaskGroupNames();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  if (!!request.hasTargetPrometheusId()) {
    query["targetPrometheusId"] = request.getTargetPrometheusId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAggTaskGroups"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/agg-task-groups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAggTaskGroupsResponse>();
}

/**
 * @summary Queries the list of aggregation task groups.
 *
 * @param request ListAggTaskGroupsRequest
 * @return ListAggTaskGroupsResponse
 */
ListAggTaskGroupsResponse Client::listAggTaskGroups(const string &instanceId, const ListAggTaskGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAggTaskGroupsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary Queries alert action integrations.
 *
 * @param tmpReq ListAlertActionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertActionsResponse
 */
ListAlertActionsResponse Client::listAlertActionsWithOptions(const ListAlertActionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlertActionsShrinkRequest request = ListAlertActionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAlertActionIds()) {
    request.setAlertActionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAlertActionIds(), "alertActionIds", "json"));
  }

  json query = {};
  if (!!request.hasAlertActionIdsShrink()) {
    query["alertActionIds"] = request.getAlertActionIdsShrink();
  }

  if (!!request.hasAlertActionName()) {
    query["alertActionName"] = request.getAlertActionName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertActions"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/alertActions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertActionsResponse>();
}

/**
 * @summary Queries alert action integrations.
 *
 * @param request ListAlertActionsRequest
 * @return ListAlertActionsResponse
 */
ListAlertActionsResponse Client::listAlertActions(const ListAlertActionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertActionsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries alert chatbots.
 *
 * @param tmpReq ListAlertRobotsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertRobotsResponse
 */
ListAlertRobotsResponse Client::listAlertRobotsWithOptions(const ListAlertRobotsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlertRobotsShrinkRequest request = ListAlertRobotsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRobotIds()) {
    request.setRobotIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRobotIds(), "robotIds", "json"));
  }

  if (!!tmpReq.hasTypes()) {
    request.setTypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTypes(), "types", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasRobotIdsShrink()) {
    query["robotIds"] = request.getRobotIdsShrink();
  }

  if (!!request.hasTypesShrink()) {
    query["types"] = request.getTypesShrink();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertRobots"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/robots")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertRobotsResponse>();
}

/**
 * @summary Queries alert chatbots.
 *
 * @param request ListAlertRobotsRequest
 * @return ListAlertRobotsResponse
 */
ListAlertRobotsResponse Client::listAlertRobots(const ListAlertRobotsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertRobotsWithOptions(request, headers, runtime);
}

/**
 * @summary Query webhooks
 *
 * @param tmpReq ListAlertWebhooksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAlertWebhooksResponse
 */
ListAlertWebhooksResponse Client::listAlertWebhooksWithOptions(const ListAlertWebhooksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListAlertWebhooksShrinkRequest request = ListAlertWebhooksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWebhookIds()) {
    request.setWebhookIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWebhookIds(), "webhookIds", "json"));
  }

  json query = {};
  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasWebhookIdsShrink()) {
    query["webhookIds"] = request.getWebhookIdsShrink();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAlertWebhooks"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webhooks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAlertWebhooksResponse>();
}

/**
 * @summary Query webhooks
 *
 * @param request ListAlertWebhooksRequest
 * @return ListAlertWebhooksResponse
 */
ListAlertWebhooksResponse Client::listAlertWebhooks(const ListAlertWebhooksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listAlertWebhooksWithOptions(request, headers, runtime);
}

/**
 * @summary Lists business traces.
 *
 * @param request ListBizTracesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBizTracesResponse
 */
ListBizTracesResponse Client::listBizTracesWithOptions(const ListBizTracesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListBizTraces"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bizTraces")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBizTracesResponse>();
}

/**
 * @summary Lists business traces.
 *
 * @param request ListBizTracesRequest
 * @return ListBizTracesResponse
 */
ListBizTracesResponse Client::listBizTraces(const ListBizTracesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listBizTracesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries contact groups.
 *
 * @param tmpReq ListContactGroupsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContactGroupsResponse
 */
ListContactGroupsResponse Client::listContactGroupsWithOptions(const ListContactGroupsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListContactGroupsShrinkRequest request = ListContactGroupsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactGroupIds()) {
    request.setContactGroupIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContactGroupIds(), "contactGroupIds", "json"));
  }

  json query = {};
  if (!!request.hasContactGroupIdsShrink()) {
    query["contactGroupIds"] = request.getContactGroupIdsShrink();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContactGroups"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/contactGroups")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContactGroupsResponse>();
}

/**
 * @summary Queries contact groups.
 *
 * @param request ListContactGroupsRequest
 * @return ListContactGroupsResponse
 */
ListContactGroupsResponse Client::listContactGroups(const ListContactGroupsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listContactGroupsWithOptions(request, headers, runtime);
}

/**
 * @summary Query contacts
 *
 * @param tmpReq ListContactsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContactsResponse
 */
ListContactsResponse Client::listContactsWithOptions(const ListContactsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListContactsShrinkRequest request = ListContactsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContactIds()) {
    request.setContactIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContactIds(), "contactIds", "json"));
  }

  json query = {};
  if (!!request.hasContactIdsShrink()) {
    query["contactIds"] = request.getContactIdsShrink();
  }

  if (!!request.hasEmail()) {
    query["email"] = request.getEmail();
  }

  if (!!request.hasGroupId()) {
    query["groupId"] = request.getGroupId();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.getPageSize();
  }

  if (!!request.hasPhone()) {
    query["phone"] = request.getPhone();
  }

  if (!!request.hasQueryUngroupedContacts()) {
    query["queryUngroupedContacts"] = request.getQueryUngroupedContacts();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContacts"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/contact")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContactsResponse>();
}

/**
 * @summary Query contacts
 *
 * @param request ListContactsRequest
 * @return ListContactsResponse
 */
ListContactsResponse Client::listContacts(const ListContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listContactsWithOptions(request, headers, runtime);
}

/**
 * @summary Lists API keys.
 *
 * @param request ListContextStoreAPIKeysRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextStoreAPIKeysResponse
 */
ListContextStoreAPIKeysResponse Client::listContextStoreAPIKeysWithOptions(const string &workspace, const string &contextStoreName, const ListContextStoreAPIKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextStoreAPIKeys"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/apikey")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextStoreAPIKeysResponse>();
}

/**
 * @summary Lists API keys.
 *
 * @param request ListContextStoreAPIKeysRequest
 * @return ListContextStoreAPIKeysResponse
 */
ListContextStoreAPIKeysResponse Client::listContextStoreAPIKeys(const string &workspace, const string &contextStoreName, const ListContextStoreAPIKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listContextStoreAPIKeysWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Retrieves a list of context stores.
 *
 * @param request ListContextStoresRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextStoresResponse
 */
ListContextStoresResponse Client::listContextStoresWithOptions(const string &workspace, const ListContextStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContextStoreName()) {
    query["contextStoreName"] = request.getContextStoreName();
  }

  if (!!request.hasContextType()) {
    query["contextType"] = request.getContextType();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextStores"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextStoresResponse>();
}

/**
 * @summary Retrieves a list of context stores.
 *
 * @param request ListContextStoresRequest
 * @return ListContextStoresResponse
 */
ListContextStoresResponse Client::listContextStores(const string &workspace, const ListContextStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listContextStoresWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Retrieves a list of datasets in a specified workspace.
 *
 * @param request ListDatasetsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasetsWithOptions(const string &workspace, const ListDatasetsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDatasetName()) {
    query["datasetName"] = request.getDatasetName();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDatasets"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/dataset")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDatasetsResponse>();
}

/**
 * @summary Retrieves a list of datasets in a specified workspace.
 *
 * @param request ListDatasetsRequest
 * @return ListDatasetsResponse
 */
ListDatasetsResponse Client::listDatasets(const string &workspace, const ListDatasetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDatasetsWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Retrieves the list of data delivery tasks.
 *
 * @description Deletes a specified site monitoring task.
 *
 * @param tmpReq ListDeliveryTasksRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeliveryTasksResponse
 */
ListDeliveryTasksResponse Client::listDeliveryTasksWithOptions(const ListDeliveryTasksRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListDeliveryTasksShrinkRequest request = ListDeliveryTasksShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasKeyWords()) {
    query["keyWords"] = request.getKeyWords();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeliveryTasks"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/delivery-tasks")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeliveryTasksResponse>();
}

/**
 * @summary Retrieves the list of data delivery tasks.
 *
 * @description Deletes a specified site monitoring task.
 *
 * @param request ListDeliveryTasksRequest
 * @return ListDeliveryTasksResponse
 */
ListDeliveryTasksResponse Client::listDeliveryTasks(const ListDeliveryTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listDeliveryTasksWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of access center policies.
 *
 * @description Queries the integration list.
 *
 * @param tmpReq ListIntegrationPoliciesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPoliciesResponse
 */
ListIntegrationPoliciesResponse Client::listIntegrationPoliciesWithOptions(const ListIntegrationPoliciesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListIntegrationPoliciesShrinkRequest request = ListIntegrationPoliciesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasAddonName()) {
    query["addonName"] = request.getAddonName();
  }

  if (!!request.hasBindResourceId()) {
    query["bindResourceId"] = request.getBindResourceId();
  }

  if (!!request.hasEntityGroupIds()) {
    query["entityGroupIds"] = request.getEntityGroupIds();
  }

  if (!!request.hasFilterRegionIds()) {
    query["filterRegionIds"] = request.getFilterRegionIds();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPolicyId()) {
    query["policyId"] = request.getPolicyId();
  }

  if (!!request.hasPolicyName()) {
    query["policyName"] = request.getPolicyName();
  }

  if (!!request.hasPolicyType()) {
    query["policyType"] = request.getPolicyType();
  }

  if (!!request.hasPrometheusInstanceId()) {
    query["prometheusInstanceId"] = request.getPrometheusInstanceId();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicies"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPoliciesResponse>();
}

/**
 * @summary Queries the list of access center policies.
 *
 * @description Queries the integration list.
 *
 * @param request ListIntegrationPoliciesRequest
 * @return ListIntegrationPoliciesResponse
 */
ListIntegrationPoliciesResponse Client::listIntegrationPolicies(const ListIntegrationPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPoliciesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists the add-ons that are installed for a specified policy.
 *
 * @description Lists the add-ons that are installed for a specified policy.
 *
 * @param request ListIntegrationPolicyAddonsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPolicyAddonsResponse
 */
ListIntegrationPolicyAddonsResponse Client::listIntegrationPolicyAddonsWithOptions(const string &policyId, const ListIntegrationPolicyAddonsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicyAddons"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/addons")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPolicyAddonsResponse>();
}

/**
 * @summary Lists the add-ons that are installed for a specified policy.
 *
 * @description Lists the add-ons that are installed for a specified policy.
 *
 * @param request ListIntegrationPolicyAddonsRequest
 * @return ListIntegrationPolicyAddonsResponse
 */
ListIntegrationPolicyAddonsResponse Client::listIntegrationPolicyAddons(const string &policyId, const ListIntegrationPolicyAddonsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPolicyAddonsWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Returns information about collectors for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyCollectorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPolicyCollectorsResponse
 */
ListIntegrationPolicyCollectorsResponse Client::listIntegrationPolicyCollectorsWithOptions(const string &policyId, const ListIntegrationPolicyCollectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonReleaseName()) {
    query["addonReleaseName"] = request.getAddonReleaseName();
  }

  if (!!request.hasCollectorType()) {
    query["collectorType"] = request.getCollectorType();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicyCollectors"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/collectors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPolicyCollectorsResponse>();
}

/**
 * @summary Returns information about collectors for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyCollectorsRequest
 * @return ListIntegrationPolicyCollectorsResponse
 */
ListIntegrationPolicyCollectorsResponse Client::listIntegrationPolicyCollectors(const string &policyId, const ListIntegrationPolicyCollectorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPolicyCollectorsWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Lists the custom service discovery rules for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
 */
ListIntegrationPolicyCustomScrapeJobRulesResponse Client::listIntegrationPolicyCustomScrapeJobRulesWithOptions(const string &policyId, const ListIntegrationPolicyCustomScrapeJobRulesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonReleaseName()) {
    query["addonReleaseName"] = request.getAddonReleaseName();
  }

  if (!!request.hasEncryptYaml()) {
    query["encryptYaml"] = request.getEncryptYaml();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicyCustomScrapeJobRules"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/custom-scrape-job-rules")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPolicyCustomScrapeJobRulesResponse>();
}

/**
 * @summary Lists the custom service discovery rules for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyCustomScrapeJobRulesRequest
 * @return ListIntegrationPolicyCustomScrapeJobRulesResponse
 */
ListIntegrationPolicyCustomScrapeJobRulesResponse Client::listIntegrationPolicyCustomScrapeJobRules(const string &policyId, const ListIntegrationPolicyCustomScrapeJobRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPolicyCustomScrapeJobRulesWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Queries a list of integration policy dashboards.
 *
 * @description This topic provides an example of how to query a list of integration policy dashboards.
 *
 * @param request ListIntegrationPolicyDashboardsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPolicyDashboardsResponse
 */
ListIntegrationPolicyDashboardsResponse Client::listIntegrationPolicyDashboardsWithOptions(const string &policyId, const ListIntegrationPolicyDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["addonName"] = request.getAddonName();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.getLanguage();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.getScene();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicyDashboards"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/dashboards")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPolicyDashboardsResponse>();
}

/**
 * @summary Queries a list of integration policy dashboards.
 *
 * @description This topic provides an example of how to query a list of integration policy dashboards.
 *
 * @param request ListIntegrationPolicyDashboardsRequest
 * @return ListIntegrationPolicyDashboardsResponse
 */
ListIntegrationPolicyDashboardsResponse Client::listIntegrationPolicyDashboards(const string &policyId, const ListIntegrationPolicyDashboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPolicyDashboardsWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Lists the PodMonitor resources for an Integration Center policy.
 *
 * @description This topic provides an example of how to list the PodMonitor resources for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyPodMonitorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPolicyPodMonitorsResponse
 */
ListIntegrationPolicyPodMonitorsResponse Client::listIntegrationPolicyPodMonitorsWithOptions(const string &policyId, const ListIntegrationPolicyPodMonitorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonReleaseName()) {
    query["addonReleaseName"] = request.getAddonReleaseName();
  }

  if (!!request.hasEncryptYaml()) {
    query["encryptYaml"] = request.getEncryptYaml();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicyPodMonitors"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/pod-monitors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPolicyPodMonitorsResponse>();
}

/**
 * @summary Lists the PodMonitor resources for an Integration Center policy.
 *
 * @description This topic provides an example of how to list the PodMonitor resources for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyPodMonitorsRequest
 * @return ListIntegrationPolicyPodMonitorsResponse
 */
ListIntegrationPolicyPodMonitorsResponse Client::listIntegrationPolicyPodMonitors(const string &policyId, const ListIntegrationPolicyPodMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPolicyPodMonitorsWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Retrieves the ServiceMonitor information for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyServiceMonitorsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPolicyServiceMonitorsResponse
 */
ListIntegrationPolicyServiceMonitorsResponse Client::listIntegrationPolicyServiceMonitorsWithOptions(const string &policyId, const ListIntegrationPolicyServiceMonitorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonReleaseName()) {
    query["addonReleaseName"] = request.getAddonReleaseName();
  }

  if (!!request.hasEncryptYaml()) {
    query["encryptYaml"] = request.getEncryptYaml();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicyServiceMonitors"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/service-monitors")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPolicyServiceMonitorsResponse>();
}

/**
 * @summary Retrieves the ServiceMonitor information for an Integration Center policy.
 *
 * @param request ListIntegrationPolicyServiceMonitorsRequest
 * @return ListIntegrationPolicyServiceMonitorsResponse
 */
ListIntegrationPolicyServiceMonitorsResponse Client::listIntegrationPolicyServiceMonitors(const string &policyId, const ListIntegrationPolicyServiceMonitorsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPolicyServiceMonitorsWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Lists the storage requirements for an Integration Center policy.
 *
 * @description When a policy is active, alert notifications are not sent for alerts that occur in the application group.
 * This topic provides an example of creating a policy named `PauseNotify`. This policy pauses alert notifications for application group `7301****` from `1622949300000` to `1623208500000` (from `2021-06-06 11:15:00` to `2021-06-09 11:15:00` UTC+8).
 *
 * @param request ListIntegrationPolicyStorageRequirementsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListIntegrationPolicyStorageRequirementsResponse
 */
ListIntegrationPolicyStorageRequirementsResponse Client::listIntegrationPolicyStorageRequirementsWithOptions(const string &policyId, const ListIntegrationPolicyStorageRequirementsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAddonName()) {
    query["addonName"] = request.getAddonName();
  }

  if (!!request.hasAddonReleaseName()) {
    query["addonReleaseName"] = request.getAddonReleaseName();
  }

  if (!!request.hasStorageType()) {
    query["storageType"] = request.getStorageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListIntegrationPolicyStorageRequirements"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/storage-requirements")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListIntegrationPolicyStorageRequirementsResponse>();
}

/**
 * @summary Lists the storage requirements for an Integration Center policy.
 *
 * @description When a policy is active, alert notifications are not sent for alerts that occur in the application group.
 * This topic provides an example of creating a policy named `PauseNotify`. This policy pauses alert notifications for application group `7301****` from `1622949300000` to `1623208500000` (from `2021-06-06 11:15:00` to `2021-06-09 11:15:00` UTC+8).
 *
 * @param request ListIntegrationPolicyStorageRequirementsRequest
 * @return ListIntegrationPolicyStorageRequirementsResponse
 */
ListIntegrationPolicyStorageRequirementsResponse Client::listIntegrationPolicyStorageRequirements(const string &policyId, const ListIntegrationPolicyStorageRequirementsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listIntegrationPolicyStorageRequirementsWithOptions(policyId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of memory stores.
 *
 * @param request ListMemoryStoresRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListMemoryStoresResponse
 */
ListMemoryStoresResponse Client::listMemoryStoresWithOptions(const string &workspace, const ListMemoryStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasMemoryStoreName()) {
    query["memoryStoreName"] = request.getMemoryStoreName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMemoryStores"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMemoryStoresResponse>();
}

/**
 * @summary Retrieves a list of memory stores.
 *
 * @param request ListMemoryStoresRequest
 * @return ListMemoryStoresResponse
 */
ListMemoryStoresResponse Client::listMemoryStores(const string &workspace, const ListMemoryStoresRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMemoryStoresWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Lists notify policies.
 *
 * @description Queries the list of notify policies in a specified workspace with paging. You can filter results by name using fuzzy match. The response contains a list of NotifyPolicySummary lightweight views.
 *
 * @param request ListNotifyPoliciesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNotifyPoliciesResponse
 */
ListNotifyPoliciesResponse Client::listNotifyPoliciesWithOptions(const ListNotifyPoliciesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["orderBy"] = request.getOrderBy();
  }

  if (!!request.hasOrderDesc()) {
    query["orderDesc"] = request.getOrderDesc();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNotifyPolicies"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/eventbase/notify-policies")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNotifyPoliciesResponse>();
}

/**
 * @summary Lists notify policies.
 *
 * @description Queries the list of notify policies in a specified workspace with paging. You can filter results by name using fuzzy match. The response contains a list of NotifyPolicySummary lightweight views.
 *
 * @param request ListNotifyPoliciesRequest
 * @return ListNotifyPoliciesResponse
 */
ListNotifyPoliciesResponse Client::listNotifyPolicies(const ListNotifyPoliciesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listNotifyPoliciesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists pipelines.
 *
 * @param request ListPipelinesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelinesWithOptions(const string &workspace, const ListPipelinesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPipelineName()) {
    query["pipelineName"] = request.getPipelineName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPipelines"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/pipeline")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPipelinesResponse>();
}

/**
 * @summary Lists pipelines.
 *
 * @param request ListPipelinesRequest
 * @return ListPipelinesResponse
 */
ListPipelinesResponse Client::listPipelines(const string &workspace, const ListPipelinesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPipelinesWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Retrieves a list of dashboards for a Prometheus instance.
 *
 * @description Retrieves a list of dashboards for a Prometheus instance.
 *
 * @param request ListPrometheusDashboardsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusDashboardsResponse
 */
ListPrometheusDashboardsResponse Client::listPrometheusDashboardsWithOptions(const string &prometheusInstanceId, const ListPrometheusDashboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliyunLang()) {
    query["aliyunLang"] = request.getAliyunLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusDashboards"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(prometheusInstanceId) , "/dashboards")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusDashboardsResponse>();
}

/**
 * @summary Retrieves a list of dashboards for a Prometheus instance.
 *
 * @description Retrieves a list of dashboards for a Prometheus instance.
 *
 * @param request ListPrometheusDashboardsRequest
 * @return ListPrometheusDashboardsResponse
 */
ListPrometheusDashboardsResponse Client::listPrometheusDashboards(const string &prometheusInstanceId, const ListPrometheusDashboardsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPrometheusDashboardsWithOptions(prometheusInstanceId, request, headers, runtime);
}

/**
 * @summary Retrieves a list of Managed Service for Prometheus instances.
 *
 * @description Retrieves a list of Managed Service for Prometheus instances.
 *
 * @param tmpReq ListPrometheusInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusInstancesResponse
 */
ListPrometheusInstancesResponse Client::listPrometheusInstancesWithOptions(const ListPrometheusInstancesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPrometheusInstancesShrinkRequest request = ListPrometheusInstancesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasFilterRegionIds()) {
    query["filterRegionIds"] = request.getFilterRegionIds();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPrometheusInstanceIds()) {
    query["prometheusInstanceIds"] = request.getPrometheusInstanceIds();
  }

  if (!!request.hasPrometheusInstanceName()) {
    query["prometheusInstanceName"] = request.getPrometheusInstanceName();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusInstances"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusInstancesResponse>();
}

/**
 * @summary Retrieves a list of Managed Service for Prometheus instances.
 *
 * @description Retrieves a list of Managed Service for Prometheus instances.
 *
 * @param request ListPrometheusInstancesRequest
 * @return ListPrometheusInstancesResponse
 */
ListPrometheusInstancesResponse Client::listPrometheusInstances(const ListPrometheusInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPrometheusInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the list of Prometheus view instances.
 *
 * @description Queries the list of Prometheus view instances.
 *
 * @param tmpReq ListPrometheusViewsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusViewsResponse
 */
ListPrometheusViewsResponse Client::listPrometheusViewsWithOptions(const ListPrometheusViewsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListPrometheusViewsShrinkRequest request = ListPrometheusViewsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasFilterRegionIds()) {
    query["filterRegionIds"] = request.getFilterRegionIds();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPrometheusViewIds()) {
    query["prometheusViewIds"] = request.getPrometheusViewIds();
  }

  if (!!request.hasPrometheusViewName()) {
    query["prometheusViewName"] = request.getPrometheusViewName();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusViews"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-views")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusViewsResponse>();
}

/**
 * @summary Queries the list of Prometheus view instances.
 *
 * @description Queries the list of Prometheus view instances.
 *
 * @param request ListPrometheusViewsRequest
 * @return ListPrometheusViewsResponse
 */
ListPrometheusViewsResponse Client::listPrometheusViews(const ListPrometheusViewsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPrometheusViewsWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves Prometheus virtual instances.
 *
 * @param request ListPrometheusVirtualInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusVirtualInstancesResponse
 */
ListPrometheusVirtualInstancesResponse Client::listPrometheusVirtualInstancesWithOptions(const ListPrometheusVirtualInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request.getNamespace();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasTenantId()) {
    query["tenantId"] = request.getTenantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPrometheusVirtualInstances"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/virtual-instances")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPrometheusVirtualInstancesResponse>();
}

/**
 * @summary Retrieves Prometheus virtual instances.
 *
 * @param request ListPrometheusVirtualInstancesRequest
 * @return ListPrometheusVirtualInstancesResponse
 */
ListPrometheusVirtualInstancesResponse Client::listPrometheusVirtualInstances(const ListPrometheusVirtualInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listPrometheusVirtualInstancesWithOptions(request, headers, runtime);
}

/**
 * @summary Lists service-linked entries.
 *
 * @description Queries a paginated list of service-linked entries.
 *
 * @param request ListServiceRecordsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServiceRecordsResponse
 */
ListServiceRecordsResponse Client::listServiceRecordsWithOptions(const string &workspace, const ListServiceRecordsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRecordType()) {
    query["recordType"] = request.getRecordType();
  }

  if (!!request.hasSearch()) {
    query["search"] = request.getSearch();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServiceRecords"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service-records")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServiceRecordsResponse>();
}

/**
 * @summary Lists service-linked entries.
 *
 * @description Queries a paginated list of service-linked entries.
 *
 * @param request ListServiceRecordsRequest
 * @return ListServiceRecordsResponse
 */
ListServiceRecordsResponse Client::listServiceRecords(const string &workspace, const ListServiceRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServiceRecordsWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Queries a list of application observability services.
 *
 * @param tmpReq ListServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServicesWithOptions(const string &workspace, const ListServicesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListServicesShrinkRequest request = ListServicesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasServiceName()) {
    query["serviceName"] = request.getServiceName();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.getServiceType();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.getTagsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListServices"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListServicesResponse>();
}

/**
 * @summary Queries a list of application observability services.
 *
 * @param request ListServicesRequest
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServices(const string &workspace, const ListServicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listServicesWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Queries the tags attached to resources.
 *
 * @param tmpReq ListTagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListTagResourcesShrinkRequest request = ListTagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "resourceId", "json"));
  }

  if (!!tmpReq.hasTag()) {
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceIdShrink()) {
    query["resourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.getTagShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags attached to resources.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listTagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves a list of workspaces.
 *
 * @param tmpReq ListWorkspacesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspacesWithOptions(const ListWorkspacesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListWorkspacesShrinkRequest request = ListWorkspacesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWorkspaceNameList()) {
    request.setWorkspaceNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWorkspaceNameList(), "workspaceNameList", "simple"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.getRegion();
  }

  if (!!request.hasWorkspaceName()) {
    query["workspaceName"] = request.getWorkspaceName();
  }

  if (!!request.hasWorkspaceNameListShrink()) {
    query["workspaceNameList"] = request.getWorkspaceNameListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkspaces"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary Retrieves a list of workspaces.
 *
 * @param request ListWorkspacesRequest
 * @return ListWorkspacesResponse
 */
ListWorkspacesResponse Client::listWorkspaces(const ListWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listWorkspacesWithOptions(request, headers, runtime);
}

/**
 * @summary Manages alert rules.
 *
 * @param tmpReq ManageAlertRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ManageAlertRulesResponse
 */
ManageAlertRulesResponse Client::manageAlertRulesWithOptions(const ManageAlertRulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ManageAlertRulesShrinkRequest request = ManageAlertRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ManageAlertRules"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/manageAlertRules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ManageAlertRulesResponse>();
}

/**
 * @summary Manages alert rules.
 *
 * @param request ManageAlertRulesRequest
 * @return ManageAlertRulesResponse
 */
ManageAlertRulesResponse Client::manageAlertRules(const ManageAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return manageAlertRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Activates CloudMonitor services, including Hybrid Cloud Monitoring, Managed Service for Prometheus, and Simple Log Service (SLS).
 *
 * @param request OpenCmsServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenCmsServiceResponse
 */
OpenCmsServiceResponse Client::openCmsServiceWithOptions(const OpenCmsServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "OpenCmsService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cmsservice")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenCmsServiceResponse>();
}

/**
 * @summary Activates CloudMonitor services, including Hybrid Cloud Monitoring, Managed Service for Prometheus, and Simple Log Service (SLS).
 *
 * @param request OpenCmsServiceRequest
 * @return OpenCmsServiceResponse
 */
OpenCmsServiceResponse Client::openCmsService(const OpenCmsServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return openCmsServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a workspace.
 *
 * @param request PutWorkspaceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutWorkspaceResponse
 */
PutWorkspaceResponse Client::putWorkspaceWithOptions(const string &workspaceName, const PutWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasSlsProject()) {
    body["slsProject"] = request.getSlsProject();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PutWorkspace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspaceName))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PutWorkspaceResponse>();
}

/**
 * @summary Creates a workspace.
 *
 * @param request PutWorkspaceRequest
 * @return PutWorkspaceResponse
 */
PutWorkspaceResponse Client::putWorkspace(const string &workspaceName, const PutWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return putWorkspaceWithOptions(workspaceName, request, headers, runtime);
}

/**
 * @summary Queries alert rules.
 *
 * @description This topic provides an example on how to query a list of alert templates. The response shows that the alert template list contains two alert templates: `ECS_Template1` and `ECS_Template2`.
 *
 * @param tmpReq QueryAlertRulesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAlertRulesResponse
 */
QueryAlertRulesResponse Client::queryAlertRulesWithOptions(const QueryAlertRulesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryAlertRulesShrinkRequest request = QueryAlertRulesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "body", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["clientToken"] = request.getClientToken();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["body"] = request.getBodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryAlertRules"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/queryAlertRules")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAlertRulesResponse>();
}

/**
 * @summary Queries alert rules.
 *
 * @description This topic provides an example on how to query a list of alert templates. The response shows that the alert template list contains two alert templates: `ECS_Template1` and `ECS_Template2`.
 *
 * @param request QueryAlertRulesRequest
 * @return QueryAlertRulesResponse
 */
QueryAlertRulesResponse Client::queryAlertRules(const QueryAlertRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryAlertRulesWithOptions(request, headers, runtime);
}

/**
 * @summary Search context.
 *
 * @param request SearchContextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchContextResponse
 */
SearchContextResponse Client::searchContextWithOptions(const string &workspace, const string &contextStoreName, const SearchContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFilter()) {
    body["filter"] = request.getFilter();
  }

  if (!!request.hasFormatted()) {
    body["formatted"] = request.getFormatted();
  }

  if (!!request.hasLimit()) {
    body["limit"] = request.getLimit();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRetrievalOption()) {
    body["retrievalOption"] = request.getRetrievalOption();
  }

  if (!!request.hasThreshold()) {
    body["threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchContext"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/context/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchContextResponse>();
}

/**
 * @summary Search context.
 *
 * @param request SearchContextRequest
 * @return SearchContextResponse
 */
SearchContextResponse Client::searchContext(const string &workspace, const string &contextStoreName, const SearchContextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchContextWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Searches for memories based on query conditions and filters.
 *
 * @description This topic provides an example on how to create a threshold alert rule for the cpu_total metric of the Elastic Computing Service `acs_ecs_dashboard` instance `i-uf6j91r34rnwawoo****`. The alert contact group of the alert rule is `ECS_Group`, the alert rule name is `test123`, the alert rule ID is `a151cd6023eacee2f0978e03863cc1697c89508****`, the statistical method for the Critical level is `Average`, the comparison operator for the Critical level is `GreaterThanOrEqualToThreshold`, the threshold for the Critical level is `90`, and the retry count for the Critical level is `3`.
 * > 2024-08-15: Statistics validation is added. Only the Statistics value that corresponds to the metric can be specified. For information about how to obtain the value of this parameter, see [Cloud service monitoring metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
 *
 * @param request SearchMemoriesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchMemoriesResponse
 */
SearchMemoriesResponse Client::searchMemoriesWithOptions(const string &workspace, const string &memoryStoreName, const SearchMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgentId()) {
    body["agentId"] = request.getAgentId();
  }

  if (!!request.hasAppId()) {
    body["appId"] = request.getAppId();
  }

  if (!!request.hasFilters()) {
    body["filters"] = request.getFilters();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.getQuery();
  }

  if (!!request.hasRerank()) {
    body["rerank"] = request.getRerank();
  }

  if (!!request.hasRetrievalOption()) {
    body["retrievalOption"] = request.getRetrievalOption();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.getRunId();
  }

  if (!!request.hasSearchType()) {
    body["searchType"] = request.getSearchType();
  }

  if (!!request.hasThreshold()) {
    body["threshold"] = request.getThreshold();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasUserId()) {
    body["userId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchMemories"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory/search")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchMemoriesResponse>();
}

/**
 * @summary Searches for memories based on query conditions and filters.
 *
 * @description This topic provides an example on how to create a threshold alert rule for the cpu_total metric of the Elastic Computing Service `acs_ecs_dashboard` instance `i-uf6j91r34rnwawoo****`. The alert contact group of the alert rule is `ECS_Group`, the alert rule name is `test123`, the alert rule ID is `a151cd6023eacee2f0978e03863cc1697c89508****`, the statistical method for the Critical level is `Average`, the comparison operator for the Critical level is `GreaterThanOrEqualToThreshold`, the threshold for the Critical level is `90`, and the retry count for the Critical level is `3`.
 * > 2024-08-15: Statistics validation is added. Only the Statistics value that corresponds to the metric can be specified. For information about how to obtain the value of this parameter, see [Cloud service monitoring metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
 *
 * @param request SearchMemoriesRequest
 * @return SearchMemoriesResponse
 */
SearchMemoriesResponse Client::searchMemories(const string &workspace, const string &memoryStoreName, const SearchMemoriesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchMemoriesWithOptions(workspace, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Adds tags to one or more resources.
 *
 * @param request TagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasResourceId()) {
    body["resourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    body["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    body["tag"] = request.getTag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Adds tags to one or more resources.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return tagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Deletes a tag
 *
 * @param tmpReq UntagResourcesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UntagResourcesShrinkRequest request = UntagResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceId()) {
    request.setResourceIdShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceId(), "resourceId", "json"));
  }

  if (!!tmpReq.hasTagKey()) {
    request.setTagKeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTagKey(), "tagKey", "json"));
  }

  json query = {};
  if (!!request.hasAll()) {
    query["all"] = request.getAll();
  }

  if (!!request.hasResourceIdShrink()) {
    query["resourceId"] = request.getResourceIdShrink();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKeyShrink()) {
    query["tagKey"] = request.getTagKeyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/tags")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Deletes a tag
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return untagResourcesWithOptions(request, headers, runtime);
}

/**
 * @summary Upgrades an add-on component.
 *
 * @param request UpdateAddonReleaseRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAddonReleaseResponse
 */
UpdateAddonReleaseResponse Client::updateAddonReleaseWithOptions(const string &releaseName, const string &policyId, const UpdateAddonReleaseRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAddonVersion()) {
    body["addonVersion"] = request.getAddonVersion();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.getDryRun();
  }

  if (!!request.hasEntityRules()) {
    body["entityRules"] = request.getEntityRules();
  }

  if (!!request.hasValues()) {
    body["values"] = request.getValues();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAddonRelease"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(policyId) , "/addon-releases/" , Darabonba::Encode::Encoder::percentEncode(releaseName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAddonReleaseResponse>();
}

/**
 * @summary Upgrades an add-on component.
 *
 * @param request UpdateAddonReleaseRequest
 * @return UpdateAddonReleaseResponse
 */
UpdateAddonReleaseResponse Client::updateAddonRelease(const string &releaseName, const string &policyId, const UpdateAddonReleaseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAddonReleaseWithOptions(releaseName, policyId, request, headers, runtime);
}

/**
 * @summary Updates an aggregation task group.
 *
 * @param request UpdateAggTaskGroupRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAggTaskGroupResponse
 */
UpdateAggTaskGroupResponse Client::updateAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const UpdateAggTaskGroupRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAggTaskGroupConfig()) {
    body["aggTaskGroupConfig"] = request.getAggTaskGroupConfig();
  }

  if (!!request.hasAggTaskGroupConfigType()) {
    body["aggTaskGroupConfigType"] = request.getAggTaskGroupConfigType();
  }

  if (!!request.hasAggTaskGroupName()) {
    body["aggTaskGroupName"] = request.getAggTaskGroupName();
  }

  if (!!request.hasCronExpr()) {
    body["cronExpr"] = request.getCronExpr();
  }

  if (!!request.hasDelay()) {
    body["delay"] = request.getDelay();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasFromTime()) {
    body["fromTime"] = request.getFromTime();
  }

  if (!!request.hasMaxRetries()) {
    body["maxRetries"] = request.getMaxRetries();
  }

  if (!!request.hasMaxRunTimeInSeconds()) {
    body["maxRunTimeInSeconds"] = request.getMaxRunTimeInSeconds();
  }

  if (!!request.hasPrecheckString()) {
    body["precheckString"] = request.getPrecheckString();
  }

  if (!!request.hasScheduleMode()) {
    body["scheduleMode"] = request.getScheduleMode();
  }

  if (!!request.hasScheduleTimeExpr()) {
    body["scheduleTimeExpr"] = request.getScheduleTimeExpr();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  if (!!request.hasTargetPrometheusId()) {
    body["targetPrometheusId"] = request.getTargetPrometheusId();
  }

  if (!!request.hasToTime()) {
    body["toTime"] = request.getToTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAggTaskGroup"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/agg-task-groups/" , Darabonba::Encode::Encoder::percentEncode(groupId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAggTaskGroupResponse>();
}

/**
 * @summary Updates an aggregation task group.
 *
 * @param request UpdateAggTaskGroupRequest
 * @return UpdateAggTaskGroupResponse
 */
UpdateAggTaskGroupResponse Client::updateAggTaskGroup(const string &instanceId, const string &groupId, const UpdateAggTaskGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAggTaskGroupWithOptions(instanceId, groupId, request, headers, runtime);
}

/**
 * @summary Updates the status of an aggregation task group.
 *
 * @param request UpdateAggTaskGroupStatusRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAggTaskGroupStatusResponse
 */
UpdateAggTaskGroupStatusResponse Client::updateAggTaskGroupStatusWithOptions(const string &instanceId, const string &groupId, const UpdateAggTaskGroupStatusRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAggTaskGroupStatus"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(instanceId) , "/agg-task-groups/" , Darabonba::Encode::Encoder::percentEncode(groupId) , "/status")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAggTaskGroupStatusResponse>();
}

/**
 * @summary Updates the status of an aggregation task group.
 *
 * @param request UpdateAggTaskGroupStatusRequest
 * @return UpdateAggTaskGroupStatusResponse
 */
UpdateAggTaskGroupStatusResponse Client::updateAggTaskGroupStatus(const string &instanceId, const string &groupId, const UpdateAggTaskGroupStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAggTaskGroupStatusWithOptions(instanceId, groupId, request, headers, runtime);
}

/**
 * @summary Updates a webhook.
 *
 * @param request UpdateAlertWebhookRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAlertWebhookResponse
 */
UpdateAlertWebhookResponse Client::updateAlertWebhookWithOptions(const string &webhookId, const UpdateAlertWebhookRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContentType()) {
    body["contentType"] = request.getContentType();
  }

  if (!!request.hasHeaders()) {
    body["headers"] = request.getHeaders();
  }

  if (!!request.hasLang()) {
    body["lang"] = request.getLang();
  }

  if (!!request.hasMethod()) {
    body["method"] = request.getMethod();
  }

  if (!!request.hasName()) {
    body["name"] = request.getName();
  }

  if (!!request.hasUrl()) {
    body["url"] = request.getUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateAlertWebhook"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/webhook/" , Darabonba::Encode::Encoder::percentEncode(webhookId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAlertWebhookResponse>();
}

/**
 * @summary Updates a webhook.
 *
 * @param request UpdateAlertWebhookRequest
 * @return UpdateAlertWebhookResponse
 */
UpdateAlertWebhookResponse Client::updateAlertWebhook(const string &webhookId, const UpdateAlertWebhookRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateAlertWebhookWithOptions(webhookId, request, headers, runtime);
}

/**
 * @summary Modifies a business trace.
 *
 * @param request UpdateBizTraceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateBizTraceResponse
 */
UpdateBizTraceResponse Client::updateBizTraceWithOptions(const string &bizTraceId, const UpdateBizTraceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAdvancedConfig()) {
    body["advancedConfig"] = request.getAdvancedConfig();
  }

  if (!!request.hasBizTraceName()) {
    body["bizTraceName"] = request.getBizTraceName();
  }

  if (!!request.hasRuleConfig()) {
    body["ruleConfig"] = request.getRuleConfig();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateBizTrace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/bizTrace/" , Darabonba::Encode::Encoder::percentEncode(bizTraceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateBizTraceResponse>();
}

/**
 * @summary Modifies a business trace.
 *
 * @param request UpdateBizTraceRequest
 * @return UpdateBizTraceResponse
 */
UpdateBizTraceResponse Client::updateBizTrace(const string &bizTraceId, const UpdateBizTraceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateBizTraceWithOptions(bizTraceId, request, headers, runtime);
}

/**
 * @summary Updates a context.
 *
 * @param request UpdateContextRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextResponse
 */
UpdateContextResponse Client::updateContextWithOptions(const string &workspace, const string &contextStoreName, const string &contextId, const UpdateContextRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasExperience()) {
    body["experience"] = request.getExperience();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasPayload()) {
    body["payload"] = request.getPayload();
  }

  if (!!request.hasTriggerCondition()) {
    body["triggerCondition"] = request.getTriggerCondition();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateContext"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName) , "/context/" , Darabonba::Encode::Encoder::percentEncode(contextId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextResponse>();
}

/**
 * @summary Updates a context.
 *
 * @param request UpdateContextRequest
 * @return UpdateContextResponse
 */
UpdateContextResponse Client::updateContext(const string &workspace, const string &contextStoreName, const string &contextId, const UpdateContextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateContextWithOptions(workspace, contextStoreName, contextId, request, headers, runtime);
}

/**
 * @summary Modifies the configuration of a context store.
 *
 * @description Only Alibaba Cloud accounts that have activated Network Analysis and Monitoring can create one-time detection tasks.
 * This topic provides an example of how to create a one-time detection task. The detection task is named `task1`, the detection address is `http://www.aliyun.com`, the detection type is `HTTP`, and the number of detection points is `1`.
 *
 * @param request UpdateContextStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextStoreResponse
 */
UpdateContextStoreResponse Client::updateContextStoreWithOptions(const string &workspace, const string &contextStoreName, const UpdateContextStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfig()) {
    body["config"] = request.getConfig();
  }

  if (!!request.hasContextType()) {
    body["contextType"] = request.getContextType();
  }

  if (!!request.hasDataset()) {
    body["dataset"] = request.getDataset();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateContextStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/contextstore/" , Darabonba::Encode::Encoder::percentEncode(contextStoreName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextStoreResponse>();
}

/**
 * @summary Modifies the configuration of a context store.
 *
 * @description Only Alibaba Cloud accounts that have activated Network Analysis and Monitoring can create one-time detection tasks.
 * This topic provides an example of how to create a one-time detection task. The detection task is named `task1`, the detection address is `http://www.aliyun.com`, the detection type is `HTTP`, and the number of detection points is `1`.
 *
 * @param request UpdateContextStoreRequest
 * @return UpdateContextStoreResponse
 */
UpdateContextStoreResponse Client::updateContextStore(const string &workspace, const string &contextStoreName, const UpdateContextStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateContextStoreWithOptions(workspace, contextStoreName, request, headers, runtime);
}

/**
 * @summary Updates a dataset.
 *
 * @param request UpdateDatasetRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDatasetWithOptions(const string &workspace, const string &datasetName, const UpdateDatasetRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDataset"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/dataset/" , Darabonba::Encode::Encoder::percentEncode(datasetName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDatasetResponse>();
}

/**
 * @summary Updates a dataset.
 *
 * @param request UpdateDatasetRequest
 * @return UpdateDatasetResponse
 */
UpdateDatasetResponse Client::updateDataset(const string &workspace, const string &datasetName, const UpdateDatasetRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDatasetWithOptions(workspace, datasetName, request, headers, runtime);
}

/**
 * @summary Updates a data delivery task. The update uses patch semantics: fields that are not specified remain unchanged.
 *
 * @description Deletes a specified site monitoring task.
 *
 * @param request UpdateDeliveryTaskRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeliveryTaskResponse
 */
UpdateDeliveryTaskResponse Client::updateDeliveryTaskWithOptions(const string &taskId, const UpdateDeliveryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDataSourceId()) {
    body["dataSourceId"] = request.getDataSourceId();
  }

  if (!!request.hasExternalLabels()) {
    body["externalLabels"] = request.getExternalLabels();
  }

  if (!!request.hasLabelFilters()) {
    body["labelFilters"] = request.getLabelFilters();
  }

  if (!!request.hasLabelFiltersType()) {
    body["labelFiltersType"] = request.getLabelFiltersType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSinkList()) {
    body["sinkList"] = request.getSinkList();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasTaskDescription()) {
    body["taskDescription"] = request.getTaskDescription();
  }

  if (!!request.hasTaskName()) {
    body["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateDeliveryTask"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/delivery-task/" , Darabonba::Encode::Encoder::percentEncode(taskId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeliveryTaskResponse>();
}

/**
 * @summary Updates a data delivery task. The update uses patch semantics: fields that are not specified remain unchanged.
 *
 * @description Deletes a specified site monitoring task.
 *
 * @param request UpdateDeliveryTaskRequest
 * @return UpdateDeliveryTaskResponse
 */
UpdateDeliveryTaskResponse Client::updateDeliveryTask(const string &taskId, const UpdateDeliveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateDeliveryTaskWithOptions(taskId, request, headers, runtime);
}

/**
 * @summary Updates the specified policy.
 *
 * @param request UpdateIntegrationPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateIntegrationPolicyResponse
 */
UpdateIntegrationPolicyResponse Client::updateIntegrationPolicyWithOptions(const string &integrationPolicyId, const UpdateIntegrationPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFeePackage()) {
    body["feePackage"] = request.getFeePackage();
  }

  if (!!request.hasPolicyName()) {
    body["policyName"] = request.getPolicyName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.getTags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateIntegrationPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/integration-policies/" , Darabonba::Encode::Encoder::percentEncode(integrationPolicyId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateIntegrationPolicyResponse>();
}

/**
 * @summary Updates the specified policy.
 *
 * @param request UpdateIntegrationPolicyRequest
 * @return UpdateIntegrationPolicyResponse
 */
UpdateIntegrationPolicyResponse Client::updateIntegrationPolicy(const string &integrationPolicyId, const UpdateIntegrationPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateIntegrationPolicyWithOptions(integrationPolicyId, request, headers, runtime);
}

/**
 * @summary Updates a specific Memory.
 *
 * @param request UpdateMemoryRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemoryWithOptions(const string &workspace, const string &memoryStoreName, const string &memoryId, const UpdateMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasText()) {
    body["text"] = request.getText();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMemory"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName) , "/memory/" , Darabonba::Encode::Encoder::percentEncode(memoryId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryResponse>();
}

/**
 * @summary Updates a specific Memory.
 *
 * @param request UpdateMemoryRequest
 * @return UpdateMemoryResponse
 */
UpdateMemoryResponse Client::updateMemory(const string &workspace, const string &memoryStoreName, const string &memoryId, const UpdateMemoryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryWithOptions(workspace, memoryStoreName, memoryId, request, headers, runtime);
}

/**
 * @summary Modify a memory store.
 *
 * @param request UpdateMemoryStoreRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMemoryStoreResponse
 */
UpdateMemoryStoreResponse Client::updateMemoryStoreWithOptions(const string &workspace, const string &memoryStoreName, const UpdateMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCustomExtractionStrategies()) {
    body["customExtractionStrategies"] = request.getCustomExtractionStrategies();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExtractionStrategies()) {
    body["extractionStrategies"] = request.getExtractionStrategies();
  }

  if (!!request.hasShortTermTtl()) {
    body["shortTermTtl"] = request.getShortTermTtl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateMemoryStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/memorystore/" , Darabonba::Encode::Encoder::percentEncode(memoryStoreName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMemoryStoreResponse>();
}

/**
 * @summary Modify a memory store.
 *
 * @param request UpdateMemoryStoreRequest
 * @return UpdateMemoryStoreResponse
 */
UpdateMemoryStoreResponse Client::updateMemoryStore(const string &workspace, const string &memoryStoreName, const UpdateMemoryStoreRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateMemoryStoreWithOptions(workspace, memoryStoreName, request, headers, runtime);
}

/**
 * @summary Updates a notification policy.
 *
 * @description Updates a notification policy by workspace and body (containing uuid and version). The version field is an optimistic lock version number that must match the current record on the backend. Otherwise, OptimisticLockFailed is returned. After a successful update, the latest policy details are returned.
 *
 * @param request UpdateNotifyPolicyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNotifyPolicyResponse
 */
UpdateNotifyPolicyResponse Client::updateNotifyPolicyWithOptions(const UpdateNotifyPolicyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateNotifyPolicy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/eventbase/notify-policy/update")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNotifyPolicyResponse>();
}

/**
 * @summary Updates a notification policy.
 *
 * @description Updates a notification policy by workspace and body (containing uuid and version). The version field is an optimistic lock version number that must match the current record on the backend. Otherwise, OptimisticLockFailed is returned. After a successful update, the latest policy details are returned.
 *
 * @param request UpdateNotifyPolicyRequest
 * @return UpdateNotifyPolicyResponse
 */
UpdateNotifyPolicyResponse Client::updateNotifyPolicy(const UpdateNotifyPolicyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateNotifyPolicyWithOptions(request, headers, runtime);
}

/**
 * @summary Updates a notification policy.
 *
 * @param request UpdateNotifyStrategyRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNotifyStrategyResponse
 */
UpdateNotifyStrategyResponse Client::updateNotifyStrategyWithOptions(const string &notifyStrategyId, const UpdateNotifyStrategyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateNotifyStrategy"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/notifyStrategies/" , Darabonba::Encode::Encoder::percentEncode(notifyStrategyId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNotifyStrategyResponse>();
}

/**
 * @summary Updates a notification policy.
 *
 * @param request UpdateNotifyStrategyRequest
 * @return UpdateNotifyStrategyResponse
 */
UpdateNotifyStrategyResponse Client::updateNotifyStrategy(const string &notifyStrategyId, const UpdateNotifyStrategyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateNotifyStrategyWithOptions(notifyStrategyId, request, headers, runtime);
}

/**
 * @summary Update pipeline
 *
 * @param request UpdatePipelineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipelineWithOptions(const string &workspace, const string &pipelineName, const UpdatePipelineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasExecutePolicy()) {
    body["executePolicy"] = request.getExecutePolicy();
  }

  if (!!request.hasPipeline()) {
    body["pipeline"] = request.getPipeline();
  }

  if (!!request.hasSink()) {
    body["sink"] = request.getSink();
  }

  if (!!request.hasSource()) {
    body["source"] = request.getSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePipeline"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/pipeline/" , Darabonba::Encode::Encoder::percentEncode(pipelineName))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePipelineResponse>();
}

/**
 * @summary Update pipeline
 *
 * @param request UpdatePipelineRequest
 * @return UpdatePipelineResponse
 */
UpdatePipelineResponse Client::updatePipeline(const string &workspace, const string &pipelineName, const UpdatePipelineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePipelineWithOptions(workspace, pipelineName, request, headers, runtime);
}

/**
 * @summary Updates the information of a Managed Service for Prometheus instance.
 *
 * @description Updates the information of a Managed Service for Prometheus instance.
 *
 * @param request UpdatePrometheusInstanceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusInstanceResponse
 */
UpdatePrometheusInstanceResponse Client::updatePrometheusInstanceWithOptions(const string &prometheusInstanceId, const UpdatePrometheusInstanceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasArchiveDuration()) {
    body["archiveDuration"] = request.getArchiveDuration();
  }

  if (!!request.hasAuthFreeReadPolicy()) {
    body["authFreeReadPolicy"] = request.getAuthFreeReadPolicy();
  }

  if (!!request.hasAuthFreeWritePolicy()) {
    body["authFreeWritePolicy"] = request.getAuthFreeWritePolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.getEnableAuthFreeRead();
  }

  if (!!request.hasEnableAuthFreeWrite()) {
    body["enableAuthFreeWrite"] = request.getEnableAuthFreeWrite();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.getEnableAuthToken();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.getPaymentType();
  }

  if (!!request.hasPrometheusInstanceName()) {
    body["prometheusInstanceName"] = request.getPrometheusInstanceName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasStorageDuration()) {
    body["storageDuration"] = request.getStorageDuration();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePrometheusInstance"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-instances/" , Darabonba::Encode::Encoder::percentEncode(prometheusInstanceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusInstanceResponse>();
}

/**
 * @summary Updates the information of a Managed Service for Prometheus instance.
 *
 * @description Updates the information of a Managed Service for Prometheus instance.
 *
 * @param request UpdatePrometheusInstanceRequest
 * @return UpdatePrometheusInstanceResponse
 */
UpdatePrometheusInstanceResponse Client::updatePrometheusInstance(const string &prometheusInstanceId, const UpdatePrometheusInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePrometheusInstanceWithOptions(prometheusInstanceId, request, headers, runtime);
}

/**
 * @summary Updates the user settings for Prometheus. Note: If you set `settingKey` to `financeUsageRegion`, Prometheus usage data is sent to Simple Log Service (SLS) in the specified region. Historical usage data will no longer be available in the Prometheus console.
 *
 * @param request UpdatePrometheusUserSettingRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusUserSettingResponse
 */
UpdatePrometheusUserSettingResponse Client::updatePrometheusUserSettingWithOptions(const string &settingKey, const UpdatePrometheusUserSettingRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSettingValue()) {
    query["settingValue"] = request.getSettingValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdatePrometheusUserSetting"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-user-setting/" , Darabonba::Encode::Encoder::percentEncode(settingKey))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusUserSettingResponse>();
}

/**
 * @summary Updates the user settings for Prometheus. Note: If you set `settingKey` to `financeUsageRegion`, Prometheus usage data is sent to Simple Log Service (SLS) in the specified region. Historical usage data will no longer be available in the Prometheus console.
 *
 * @param request UpdatePrometheusUserSettingRequest
 * @return UpdatePrometheusUserSettingResponse
 */
UpdatePrometheusUserSettingResponse Client::updatePrometheusUserSetting(const string &settingKey, const UpdatePrometheusUserSettingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePrometheusUserSettingWithOptions(settingKey, request, headers, runtime);
}

/**
 * @summary Updates the information about a Prometheus view instance.
 *
 * @description Updates the information about a Prometheus view instance.
 *
 * @param request UpdatePrometheusViewRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePrometheusViewResponse
 */
UpdatePrometheusViewResponse Client::updatePrometheusViewWithOptions(const string &prometheusViewId, const UpdatePrometheusViewRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAuthFreeReadPolicy()) {
    body["authFreeReadPolicy"] = request.getAuthFreeReadPolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.getEnableAuthFreeRead();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.getEnableAuthToken();
  }

  if (!!request.hasPrometheusInstances()) {
    body["prometheusInstances"] = request.getPrometheusInstances();
  }

  if (!!request.hasPrometheusViewName()) {
    body["prometheusViewName"] = request.getPrometheusViewName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.getStatus();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePrometheusView"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/prometheus-views/" , Darabonba::Encode::Encoder::percentEncode(prometheusViewId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePrometheusViewResponse>();
}

/**
 * @summary Updates the information about a Prometheus view instance.
 *
 * @description Updates the information about a Prometheus view instance.
 *
 * @param request UpdatePrometheusViewRequest
 * @return UpdatePrometheusViewResponse
 */
UpdatePrometheusViewResponse Client::updatePrometheusView(const string &prometheusViewId, const UpdatePrometheusViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updatePrometheusViewWithOptions(prometheusViewId, request, headers, runtime);
}

/**
 * @summary Updates an application observability service.
 *
 * @param request UpdateServiceRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateServiceWithOptions(const string &workspace, const string &serviceId, const UpdateServiceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAttributes()) {
    body["attributes"] = request.getAttributes();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.getDisplayName();
  }

  if (!!request.hasServiceStatus()) {
    body["serviceStatus"] = request.getServiceStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service/" , Darabonba::Encode::Encoder::percentEncode(serviceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceResponse>();
}

/**
 * @summary Updates an application observability service.
 *
 * @param request UpdateServiceRequest
 * @return UpdateServiceResponse
 */
UpdateServiceResponse Client::updateService(const string &workspace, const string &serviceId, const UpdateServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceWithOptions(workspace, serviceId, request, headers, runtime);
}

/**
 * @summary Updates a service-linked entry.
 *
 * @description Updates an existing service-linked entry.
 *
 * @param request UpdateServiceRecordRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateServiceRecordResponse
 */
UpdateServiceRecordResponse Client::updateServiceRecordWithOptions(const string &workspace, const string &serviceId, const UpdateServiceRecordRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasRecordContent()) {
    body["recordContent"] = request.getRecordContent();
  }

  if (!!request.hasRecordType()) {
    body["recordType"] = request.getRecordType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateServiceRecord"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/service/" , Darabonba::Encode::Encoder::percentEncode(serviceId) , "/record")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateServiceRecordResponse>();
}

/**
 * @summary Updates a service-linked entry.
 *
 * @description Updates an existing service-linked entry.
 *
 * @param request UpdateServiceRecordRequest
 * @return UpdateServiceRecordResponse
 */
UpdateServiceRecordResponse Client::updateServiceRecord(const string &workspace, const string &serviceId, const UpdateServiceRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateServiceRecordWithOptions(workspace, serviceId, request, headers, runtime);
}

/**
 * @summary Updates a subscription.
 *
 * @param request UpdateSubscriptionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscriptionWithOptions(const string &subscriptionId, const UpdateSubscriptionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspace()) {
    query["workspace"] = request.getWorkspace();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(request.getBody())}
  }));
  Params params = Params(json({
    {"action" , "UpdateSubscription"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/subscriptions/" , Darabonba::Encode::Encoder::percentEncode(subscriptionId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubscriptionResponse>();
}

/**
 * @summary Updates a subscription.
 *
 * @param request UpdateSubscriptionRequest
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscription(const string &subscriptionId, const UpdateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateSubscriptionWithOptions(subscriptionId, request, headers, runtime);
}

/**
 * @summary Updates the configuration of a Umodel.
 *
 * @description Updates the configuration of a Umodel.
 *
 * @param request UpdateUmodelRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUmodelResponse
 */
UpdateUmodelResponse Client::updateUmodelWithOptions(const string &workspace, const UpdateUmodelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["description"] = request.getDescription();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateUmodel"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUmodelResponse>();
}

/**
 * @summary Updates the configuration of a Umodel.
 *
 * @description Updates the configuration of a Umodel.
 *
 * @param request UpdateUmodelRequest
 * @return UpdateUmodelResponse
 */
UpdateUmodelResponse Client::updateUmodel(const string &workspace, const UpdateUmodelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateUmodelWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Upserts a common Umodel schema reference.
 *
 * @param request UpsertUmodelCommonSchemaRefRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertUmodelCommonSchemaRefResponse
 */
UpsertUmodelCommonSchemaRefResponse Client::upsertUmodelCommonSchemaRefWithOptions(const string &workspace, const UpsertUmodelCommonSchemaRefRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroup()) {
    query["group"] = request.getGroup();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.getVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpsertUmodelCommonSchemaRef"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel/common-schema-ref")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertUmodelCommonSchemaRefResponse>();
}

/**
 * @summary Upserts a common Umodel schema reference.
 *
 * @param request UpsertUmodelCommonSchemaRefRequest
 * @return UpsertUmodelCommonSchemaRefResponse
 */
UpsertUmodelCommonSchemaRefResponse Client::upsertUmodelCommonSchemaRef(const string &workspace, const UpsertUmodelCommonSchemaRefRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upsertUmodelCommonSchemaRefWithOptions(workspace, request, headers, runtime);
}

/**
 * @summary Inserts or updates Umodel elements.
 *
 * @param request UpsertUmodelDataRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpsertUmodelDataResponse
 */
UpsertUmodelDataResponse Client::upsertUmodelDataWithOptions(const string &workspace, const UpsertUmodelDataRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMethod()) {
    query["method"] = request.getMethod();
  }

  json body = {};
  if (!!request.hasElements()) {
    body["elements"] = request.getElements();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpsertUmodelData"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Encode::Encoder::percentEncode(workspace) , "/umodel/data")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpsertUmodelDataResponse>();
}

/**
 * @summary Inserts or updates Umodel elements.
 *
 * @param request UpsertUmodelDataRequest
 * @return UpsertUmodelDataResponse
 */
UpsertUmodelDataResponse Client::upsertUmodelData(const string &workspace, const UpsertUmodelDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return upsertUmodelDataWithOptions(workspace, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace Cms20240330