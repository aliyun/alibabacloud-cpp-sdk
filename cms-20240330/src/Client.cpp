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
  this->_endpointRule = "";
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
 * @summary Install the access component, representing a single access attempt
 *
 * @description Used to create a site monitoring task
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
    body["addonName"] = request.addonName();
  }

  if (!!request.hasAliyunLang()) {
    body["aliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.dryRun();
  }

  if (!!request.hasEntityRules()) {
    body["entityRules"] = request.entityRules();
  }

  if (!!request.hasEnvType()) {
    body["envType"] = request.envType();
  }

  if (!!request.hasParentAddonReleaseId()) {
    body["parentAddonReleaseId"] = request.parentAddonReleaseId();
  }

  if (!!request.hasReleaseName()) {
    body["releaseName"] = request.releaseName();
  }

  if (!!request.hasValues()) {
    body["values"] = request.values();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.version();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.workspace();
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
 * @summary Install the access component, representing a single access attempt
 *
 * @description Used to create a site monitoring task
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
 * @summary Create Aggregation Task Group
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
    query["overrideIfExists"] = request.overrideIfExists();
  }

  json body = {};
  if (!!request.hasAggTaskGroupConfig()) {
    body["aggTaskGroupConfig"] = request.aggTaskGroupConfig();
  }

  if (!!request.hasAggTaskGroupConfigType()) {
    body["aggTaskGroupConfigType"] = request.aggTaskGroupConfigType();
  }

  if (!!request.hasAggTaskGroupName()) {
    body["aggTaskGroupName"] = request.aggTaskGroupName();
  }

  if (!!request.hasCronExpr()) {
    body["cronExpr"] = request.cronExpr();
  }

  if (!!request.hasDelay()) {
    body["delay"] = request.delay();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasFromTime()) {
    body["fromTime"] = request.fromTime();
  }

  if (!!request.hasMaxRetries()) {
    body["maxRetries"] = request.maxRetries();
  }

  if (!!request.hasMaxRunTimeInSeconds()) {
    body["maxRunTimeInSeconds"] = request.maxRunTimeInSeconds();
  }

  if (!!request.hasPrecheckString()) {
    body["precheckString"] = request.precheckString();
  }

  if (!!request.hasScheduleMode()) {
    body["scheduleMode"] = request.scheduleMode();
  }

  if (!!request.hasScheduleTimeExpr()) {
    body["scheduleTimeExpr"] = request.scheduleTimeExpr();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasTargetPrometheusId()) {
    body["targetPrometheusId"] = request.targetPrometheusId();
  }

  if (!!request.hasToTime()) {
    body["toTime"] = request.toTime();
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
 * @summary Create Aggregation Task Group
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
 * @summary Create storage related to EntityStore
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEntityStoreResponse
 */
CreateEntityStoreResponse Client::createEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Create storage related to EntityStore
 *
 * @return CreateEntityStoreResponse
 */
CreateEntityStoreResponse Client::createEntityStore(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEntityStoreWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary Create Access Center Policy
 *
 * @description This interface is used to support users in creating event integration.
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
    body["entityGroup"] = request.entityGroup();
  }

  if (!!request.hasPolicyName()) {
    body["policyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    body["policyType"] = request.policyType();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.workspace();
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
 * @summary Create Access Center Policy
 *
 * @description This interface is used to support users in creating event integration.
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
 * @summary Create a Prometheus monitoring instance
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
    body["archiveDuration"] = request.archiveDuration();
  }

  if (!!request.hasAuthFreeReadPolicy()) {
    body["authFreeReadPolicy"] = request.authFreeReadPolicy();
  }

  if (!!request.hasAuthFreeWritePolicy()) {
    body["authFreeWritePolicy"] = request.authFreeWritePolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.enableAuthFreeRead();
  }

  if (!!request.hasEnableAuthFreeWrite()) {
    body["enableAuthFreeWrite"] = request.enableAuthFreeWrite();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.enableAuthToken();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.paymentType();
  }

  if (!!request.hasPrometheusInstanceName()) {
    body["prometheusInstanceName"] = request.prometheusInstanceName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasStorageDuration()) {
    body["storageDuration"] = request.storageDuration();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.workspace();
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
 * @summary Create a Prometheus monitoring instance
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
 * @summary Create Prometheus View
 *
 * @description Used to create a site monitoring task
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
    body["authFreeReadPolicy"] = request.authFreeReadPolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.enableAuthFreeRead();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.enableAuthToken();
  }

  if (!!request.hasPrometheusInstances()) {
    body["prometheusInstances"] = request.prometheusInstances();
  }

  if (!!request.hasPrometheusViewName()) {
    body["prometheusViewName"] = request.prometheusViewName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasVersion()) {
    body["version"] = request.version();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.workspace();
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
 * @summary Create Prometheus View
 *
 * @description Used to create a site monitoring task
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
 * @summary Create Prometheus Monitoring Instance
 *
 * @description Create a Prometheus monitoring virtual instance.
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
    body["namespace"] = request._namespace();
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
 * @summary Create Prometheus Monitoring Instance
 *
 * @description Create a Prometheus monitoring virtual instance.
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
 * @summary Create Service
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
    body["attributes"] = request.attributes();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.displayName();
  }

  if (!!request.hasPid()) {
    body["pid"] = request.pid();
  }

  if (!!request.hasServiceName()) {
    body["serviceName"] = request.serviceName();
  }

  if (!!request.hasServiceStatus()) {
    body["serviceStatus"] = request.serviceStatus();
  }

  if (!!request.hasServiceType()) {
    body["serviceType"] = request.serviceType();
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
 * @summary Create Service
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
 * @summary Create Ticket
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
    query["accessTokenExpirationTime"] = request.accessTokenExpirationTime();
  }

  if (!!request.hasExpirationTime()) {
    query["expirationTime"] = request.expirationTime();
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
 * @summary Create Ticket
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
 * @summary Create Umodel configuration
 *
 * @description Create Umodel configuration in the specified workspace
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
    body["description"] = request.description();
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
 * @summary Create Umodel configuration
 *
 * @description Create Umodel configuration in the specified workspace
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
 * @summary Delete addon release information
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
    query["addonName"] = request.addonName();
  }

  if (!!request.hasForce()) {
    query["force"] = request.force();
  }

  if (!!request.hasReleaseName()) {
    query["releaseName"] = request.releaseName();
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
 * @summary Delete addon release information
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
 * @summary Delete Aggregation Task Group
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAggTaskGroupResponse
 */
DeleteAggTaskGroupResponse Client::deleteAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Delete Aggregation Task Group
 *
 * @return DeleteAggTaskGroupResponse
 */
DeleteAggTaskGroupResponse Client::deleteAggTaskGroup(const string &instanceId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteAggTaskGroupWithOptions(instanceId, groupId, headers, runtime);
}

/**
 * @summary Delete EntityStore related storage
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEntityStoreResponse
 */
DeleteEntityStoreResponse Client::deleteEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Delete EntityStore related storage
 *
 * @return DeleteEntityStoreResponse
 */
DeleteEntityStoreResponse Client::deleteEntityStore(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEntityStoreWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary Delete Access Center Policy
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
    query["force"] = request.force();
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
 * @summary Delete Access Center Policy
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
 * @summary Delete prom instance
 *
 * @description Delete a Prometheus instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusInstanceResponse
 */
DeletePrometheusInstanceResponse Client::deletePrometheusInstanceWithOptions(const string &prometheusInstanceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Delete prom instance
 *
 * @description Delete a Prometheus instance.
 *
 * @return DeletePrometheusInstanceResponse
 */
DeletePrometheusInstanceResponse Client::deletePrometheusInstance(const string &prometheusInstanceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePrometheusInstanceWithOptions(prometheusInstanceId, headers, runtime);
}

/**
 * @summary Delete prometheus view instance
 *
 * @description Delete prometheus view instance.
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePrometheusViewResponse
 */
DeletePrometheusViewResponse Client::deletePrometheusViewWithOptions(const string &prometheusViewId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Delete prometheus view instance
 *
 * @description Delete prometheus view instance.
 *
 * @return DeletePrometheusViewResponse
 */
DeletePrometheusViewResponse Client::deletePrometheusView(const string &prometheusViewId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deletePrometheusViewWithOptions(prometheusViewId, headers, runtime);
}

/**
 * @summary Delete Service
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Delete Service
 *
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteService(const string &workspace, const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceWithOptions(workspace, serviceId, headers, runtime);
}

/**
 * @summary Delete Umodel configuration information
 *
 * @description Delete the Umodel under the specified workspace
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUmodelResponse
 */
DeleteUmodelResponse Client::deleteUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Delete Umodel configuration information
 *
 * @description Delete the Umodel under the specified workspace
 *
 * @return DeleteUmodelResponse
 */
DeleteUmodelResponse Client::deleteUmodel(const string &workspace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUmodelWithOptions(workspace, headers, runtime);
}

/**
 * @summary Delete Umodel Elements
 *
 * @description Delete the Umodel Data under a specified workspace
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
    query["domain"] = request.domain();
  }

  if (!!request.hasKind()) {
    query["kind"] = request.kind();
  }

  if (!!request.hasName()) {
    query["name"] = request.name();
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
 * @summary Delete Umodel Elements
 *
 * @description Delete the Umodel Data under a specified workspace
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
 * @summary Delete Workspace
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Delete Workspace
 *
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary Check addon release (view connection status)
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAddonReleaseResponse
 */
GetAddonReleaseResponse Client::getAddonReleaseWithOptions(const string &releaseName, const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Check addon release (view connection status)
 *
 * @return GetAddonReleaseResponse
 */
GetAddonReleaseResponse Client::getAddonRelease(const string &releaseName, const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAddonReleaseWithOptions(releaseName, policyId, headers, runtime);
}

/**
 * @summary Describes the aggregation task group
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAggTaskGroupResponse
 */
GetAggTaskGroupResponse Client::getAggTaskGroupWithOptions(const string &instanceId, const string &groupId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Describes the aggregation task group
 *
 * @return GetAggTaskGroupResponse
 */
GetAggTaskGroupResponse Client::getAggTaskGroup(const string &instanceId, const string &groupId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getAggTaskGroupWithOptions(instanceId, groupId, headers, runtime);
}

/**
 * @summary Get EntityStore related storage information
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEntityStoreResponse
 */
GetEntityStoreResponse Client::getEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Get EntityStore related storage information
 *
 * @return GetEntityStoreResponse
 */
GetEntityStoreResponse Client::getEntityStore(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEntityStoreWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary Query the entity and relationship data under a specified Workspace, returning the entity data within a certain time range (the returned result is transmitted after compression).
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
    body["from"] = request.from();
  }

  if (!!request.hasQuery()) {
    body["query"] = request.query();
  }

  if (!!request.hasTo()) {
    body["to"] = request.to();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.commonHeaders();
  }

  if (!!headers.hasAcceptEncoding()) {
    realHeaders["acceptEncoding"] = Darabonba::Convert::stringVal(headers.acceptEncoding());
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
 * @summary Query the entity and relationship data under a specified Workspace, returning the entity data within a certain time range (the returned result is transmitted after compression).
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
 * @summary Query the list of access center policies
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetIntegrationPolicyResponse
 */
GetIntegrationPolicyResponse Client::getIntegrationPolicyWithOptions(const string &policyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Query the list of access center policies
 *
 * @return GetIntegrationPolicyResponse
 */
GetIntegrationPolicyResponse Client::getIntegrationPolicy(const string &policyId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getIntegrationPolicyWithOptions(policyId, headers, runtime);
}

/**
 * @summary Query the instance in a specified environment
 *
 * @description Retrieve details of a Prometheus instance.
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
    query["aliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
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
 * @summary Query the instance in a specified environment
 *
 * @description Retrieve details of a Prometheus instance.
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
 * @summary Query a specified Prometheus view instance
 *
 * @description Query a specified Prometheus view instance.
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
    query["aliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
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
 * @summary Query a specified Prometheus view instance
 *
 * @description Query a specified Prometheus view instance.
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
 * @summary Query Service
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceResponse
 */
GetServiceResponse Client::getServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Query Service
 *
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const string &workspace, const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceWithOptions(workspace, serviceId, headers, runtime);
}

/**
 * @summary Get Application Observability Instance
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceObservabilityResponse
 */
GetServiceObservabilityResponse Client::getServiceObservabilityWithOptions(const string &workspace, const string &type, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Get Application Observability Instance
 *
 * @return GetServiceObservabilityResponse
 */
GetServiceObservabilityResponse Client::getServiceObservability(const string &workspace, const string &type) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceObservabilityWithOptions(workspace, type, headers, runtime);
}

/**
 * @summary Get Umodel configuration information
 *
 * @description Get Umodel configuration information
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUmodelResponse
 */
GetUmodelResponse Client::getUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Get Umodel configuration information
 *
 * @description Get Umodel configuration information
 *
 * @return GetUmodelResponse
 */
GetUmodelResponse Client::getUmodel(const string &workspace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUmodelWithOptions(workspace, headers, runtime);
}

/**
 * @summary Retrieve associated Umodel graph data
 *
 * @description Find Umodel
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
    query["method"] = request.method();
  }

  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.content();
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
 * @summary Retrieve associated Umodel graph data
 *
 * @description Find Umodel
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
 * @summary Get Workspace
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
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
 * @summary Get Workspace
 *
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary List of addon releases
 *
 * @description Query the list of access configurations
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
    query["addonName"] = request.addonName();
  }

  if (!!request.hasParentAddonReleaseId()) {
    query["parentAddonReleaseId"] = request.parentAddonReleaseId();
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
 * @summary List of addon releases
 *
 * @description Query the list of access configurations
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
 * @summary List Aggregation Task Groups
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
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tags(), "tags", "json"));
  }

  json query = {};
  if (!!request.hasFilterAggTaskGroupIds()) {
    query["filterAggTaskGroupIds"] = request.filterAggTaskGroupIds();
  }

  if (!!request.hasFilterAggTaskGroupNames()) {
    query["filterAggTaskGroupNames"] = request.filterAggTaskGroupNames();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.query();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.status();
  }

  if (!!request.hasTagsShrink()) {
    query["tags"] = request.tagsShrink();
  }

  if (!!request.hasTargetPrometheusId()) {
    query["targetPrometheusId"] = request.targetPrometheusId();
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
 * @summary List Aggregation Task Groups
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
 * @summary Query Alert Actions
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
    request.setAlertActionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.alertActionIds(), "alertActionIds", "json"));
  }

  json query = {};
  if (!!request.hasAlertActionIdsShrink()) {
    query["alertActionIds"] = request.alertActionIdsShrink();
  }

  if (!!request.hasAlertActionName()) {
    query["alertActionName"] = request.alertActionName();
  }

  if (!!request.hasPageNumber()) {
    query["pageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["pageSize"] = request.pageSize();
  }

  if (!!request.hasType()) {
    query["type"] = request.type();
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
 * @summary Query Alert Actions
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
 * @summary Query Access Center Policy List Information
 *
 * @description Query Integration List
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasAddonName()) {
    query["addonName"] = request.addonName();
  }

  if (!!request.hasBindResourceId()) {
    query["bindResourceId"] = request.bindResourceId();
  }

  if (!!request.hasEntityGroupIds()) {
    query["entityGroupIds"] = request.entityGroupIds();
  }

  if (!!request.hasFilterRegionIds()) {
    query["filterRegionIds"] = request.filterRegionIds();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPolicyId()) {
    query["policyId"] = request.policyId();
  }

  if (!!request.hasPolicyName()) {
    query["policyName"] = request.policyName();
  }

  if (!!request.hasPolicyType()) {
    query["policyType"] = request.policyType();
  }

  if (!!request.hasPrometheusInstanceId()) {
    query["prometheusInstanceId"] = request.prometheusInstanceId();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.query();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.workspace();
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
 * @summary Query Access Center Policy List Information
 *
 * @description Query Integration List
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
 * @summary Get storage requirement information for the access center policy
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
    query["addonReleaseName"] = request.addonReleaseName();
  }

  if (!!request.hasEncryptYaml()) {
    query["encryptYaml"] = request.encryptYaml();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
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
 * @summary Get storage requirement information for the access center policy
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
 * @summary Policy Dashboard List
 *
 * @description This article provides an example of querying the alarm template list. The result shows that there are 2 alarm templates in the list, which are `ECS_Template1` and `ECS_Template2`.
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
    query["addonName"] = request.addonName();
  }

  if (!!request.hasLanguage()) {
    query["language"] = request.language();
  }

  if (!!request.hasScene()) {
    query["scene"] = request.scene();
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
 * @summary Policy Dashboard List
 *
 * @description This article provides an example of querying the alarm template list. The result shows that there are 2 alarm templates in the list, which are `ECS_Template1` and `ECS_Template2`.
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
 * @summary Get PodMonitor Resources of Access Center Policy
 *
 * @description This article provides an example to query the alarm template list. The result shows that there are 2 alarm templates in the alarm template list, which are `ECS_Template1` and `ECS_Template2`.
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
    query["addonReleaseName"] = request.addonReleaseName();
  }

  if (!!request.hasEncryptYaml()) {
    query["encryptYaml"] = request.encryptYaml();
  }

  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
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
 * @summary Get PodMonitor Resources of Access Center Policy
 *
 * @description This article provides an example to query the alarm template list. The result shows that there are 2 alarm templates in the alarm template list, which are `ECS_Template1` and `ECS_Template2`.
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
 * @summary Get Storage Requirements Information for Access Center Policy
 *
 * @description During the effective period of the policy, all alarms within the application group will no longer send notifications.
 *  
 * This article provides an example of creating a pause alarm notification policy `PauseNotify` for the application group `7301****`. This application group will pause alarms from `1622949300000` to `1623208500000` (Beijing Time `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
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
    query["addonName"] = request.addonName();
  }

  if (!!request.hasAddonReleaseName()) {
    query["addonReleaseName"] = request.addonReleaseName();
  }

  if (!!request.hasStorageType()) {
    query["storageType"] = request.storageType();
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
 * @summary Get Storage Requirements Information for Access Center Policy
 *
 * @description During the effective period of the policy, all alarms within the application group will no longer send notifications.
 *  
 * This article provides an example of creating a pause alarm notification policy `PauseNotify` for the application group `7301****`. This application group will pause alarms from `1622949300000` to `1623208500000` (Beijing Time `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
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
 * @summary Get Prometheus Instance Dashboard List
 *
 * @description Get the list of Prometheus instance dashboards.
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
    query["aliyunLang"] = request.aliyunLang();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
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
 * @summary Get Prometheus Instance Dashboard List
 *
 * @description Get the list of Prometheus instance dashboards.
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
 * @summary Get the list of Prometheus instance information
 *
 * @description Get the list of Prometheus instances.
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasFilterRegionIds()) {
    query["filterRegionIds"] = request.filterRegionIds();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPrometheusInstanceIds()) {
    query["prometheusInstanceIds"] = request.prometheusInstanceIds();
  }

  if (!!request.hasPrometheusInstanceName()) {
    query["prometheusInstanceName"] = request.prometheusInstanceName();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.version();
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
 * @summary Get the list of Prometheus instance information
 *
 * @description Get the list of Prometheus instances.
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
 * @summary Retrieve a list of Prometheus view instance information
 *
 * @description Retrieve a list of Prometheus view instance information.
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
    request.setTagShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tag(), "tag", "json"));
  }

  json query = {};
  if (!!request.hasFilterRegionIds()) {
    query["filterRegionIds"] = request.filterRegionIds();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasPrometheusViewIds()) {
    query["prometheusViewIds"] = request.prometheusViewIds();
  }

  if (!!request.hasPrometheusViewName()) {
    query["prometheusViewName"] = request.prometheusViewName();
  }

  if (!!request.hasResourceGroupId()) {
    query["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceType()) {
    query["resourceType"] = request.resourceType();
  }

  if (!!request.hasTagShrink()) {
    query["tag"] = request.tagShrink();
  }

  if (!!request.hasVersion()) {
    query["version"] = request.version();
  }

  if (!!request.hasWorkspace()) {
    query["workspace"] = request.workspace();
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
 * @summary Retrieve a list of Prometheus view instance information
 *
 * @description Retrieve a list of Prometheus view instance information.
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
 * @summary Get Prometheus Virtual Instance
 *
 * @description Used for creating a site monitoring task
 *
 * @param request ListPrometheusVirtualInstancesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPrometheusVirtualInstancesResponse
 */
ListPrometheusVirtualInstancesResponse Client::listPrometheusVirtualInstancesWithOptions(const ListPrometheusVirtualInstancesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNamespace()) {
    query["namespace"] = request._namespace();
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
 * @summary Get Prometheus Virtual Instance
 *
 * @description Used for creating a site monitoring task
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
 * @summary List Resource Services
 *
 * @param request ListServicesRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListServicesResponse
 */
ListServicesResponse Client::listServicesWithOptions(const string &workspace, const ListServicesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasServiceType()) {
    query["serviceType"] = request.serviceType();
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
 * @summary List Resource Services
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
 * @summary Get Workspace List
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
    request.setWorkspaceNameListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.workspaceNameList(), "workspaceNameList", "simple"));
  }

  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.nextToken();
  }

  if (!!request.hasRegion()) {
    query["region"] = request.region();
  }

  if (!!request.hasWorkspaceName()) {
    query["workspaceName"] = request.workspaceName();
  }

  if (!!request.hasWorkspaceNameListShrink()) {
    query["workspaceNameList"] = request.workspaceNameListShrink();
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
 * @summary Get Workspace List
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
 * @summary Create Workspace
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
    body["description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.displayName();
  }

  if (!!request.hasSlsProject()) {
    body["slsProject"] = request.slsProject();
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
 * @summary Create Workspace
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
 * @summary Upgrade Access Component
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
    body["addonVersion"] = request.addonVersion();
  }

  if (!!request.hasDryRun()) {
    body["dryRun"] = request.dryRun();
  }

  if (!!request.hasEntityRules()) {
    body["entityRules"] = request.entityRules();
  }

  if (!!request.hasValues()) {
    body["values"] = request.values();
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
 * @summary Upgrade Access Component
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
 * @summary Apply Aggregation Task Group
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
    body["aggTaskGroupConfig"] = request.aggTaskGroupConfig();
  }

  if (!!request.hasAggTaskGroupConfigType()) {
    body["aggTaskGroupConfigType"] = request.aggTaskGroupConfigType();
  }

  if (!!request.hasAggTaskGroupName()) {
    body["aggTaskGroupName"] = request.aggTaskGroupName();
  }

  if (!!request.hasCronExpr()) {
    body["cronExpr"] = request.cronExpr();
  }

  if (!!request.hasDelay()) {
    body["delay"] = request.delay();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasFromTime()) {
    body["fromTime"] = request.fromTime();
  }

  if (!!request.hasMaxRetries()) {
    body["maxRetries"] = request.maxRetries();
  }

  if (!!request.hasMaxRunTimeInSeconds()) {
    body["maxRunTimeInSeconds"] = request.maxRunTimeInSeconds();
  }

  if (!!request.hasPrecheckString()) {
    body["precheckString"] = request.precheckString();
  }

  if (!!request.hasScheduleMode()) {
    body["scheduleMode"] = request.scheduleMode();
  }

  if (!!request.hasScheduleTimeExpr()) {
    body["scheduleTimeExpr"] = request.scheduleTimeExpr();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
  }

  if (!!request.hasTargetPrometheusId()) {
    body["targetPrometheusId"] = request.targetPrometheusId();
  }

  if (!!request.hasToTime()) {
    body["toTime"] = request.toTime();
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
 * @summary Apply Aggregation Task Group
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
 * @summary Update Aggregation Task Group Status
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
    body["status"] = request.status();
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
 * @summary Update Aggregation Task Group Status
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
 * @summary Update the specified policy
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
    body["feePackage"] = request.feePackage();
  }

  if (!!request.hasPolicyName()) {
    body["policyName"] = request.policyName();
  }

  if (!!request.hasResourceGroupId()) {
    body["resourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    body["tags"] = request.tags();
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
 * @summary Update the specified policy
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
 * @summary Update Prometheus instance information
 *
 * @description Update Prometheus instance information.
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
    body["archiveDuration"] = request.archiveDuration();
  }

  if (!!request.hasAuthFreeReadPolicy()) {
    body["authFreeReadPolicy"] = request.authFreeReadPolicy();
  }

  if (!!request.hasAuthFreeWritePolicy()) {
    body["authFreeWritePolicy"] = request.authFreeWritePolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.enableAuthFreeRead();
  }

  if (!!request.hasEnableAuthFreeWrite()) {
    body["enableAuthFreeWrite"] = request.enableAuthFreeWrite();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.enableAuthToken();
  }

  if (!!request.hasPaymentType()) {
    body["paymentType"] = request.paymentType();
  }

  if (!!request.hasPrometheusInstanceName()) {
    body["prometheusInstanceName"] = request.prometheusInstanceName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasStorageDuration()) {
    body["storageDuration"] = request.storageDuration();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.workspace();
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
 * @summary Update Prometheus instance information
 *
 * @description Update Prometheus instance information.
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
 * @summary Update Prometheus view instance information
 *
 * @description Update Prometheus view instance information.
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
    body["authFreeReadPolicy"] = request.authFreeReadPolicy();
  }

  if (!!request.hasEnableAuthFreeRead()) {
    body["enableAuthFreeRead"] = request.enableAuthFreeRead();
  }

  if (!!request.hasEnableAuthToken()) {
    body["enableAuthToken"] = request.enableAuthToken();
  }

  if (!!request.hasPrometheusInstances()) {
    body["prometheusInstances"] = request.prometheusInstances();
  }

  if (!!request.hasPrometheusViewName()) {
    body["prometheusViewName"] = request.prometheusViewName();
  }

  if (!!request.hasStatus()) {
    body["status"] = request.status();
  }

  if (!!request.hasWorkspace()) {
    body["workspace"] = request.workspace();
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
 * @summary Update Prometheus view instance information
 *
 * @description Update Prometheus view instance information.
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
 * @summary Update Service
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
    body["attributes"] = request.attributes();
  }

  if (!!request.hasDescription()) {
    body["description"] = request.description();
  }

  if (!!request.hasDisplayName()) {
    body["displayName"] = request.displayName();
  }

  if (!!request.hasServiceStatus()) {
    body["serviceStatus"] = request.serviceStatus();
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
 * @summary Update Service
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
 * @summary Update Umodel configuration information
 *
 * @description Update Umodel configuration information
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
    body["description"] = request.description();
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
 * @summary Update Umodel configuration information
 *
 * @description Update Umodel configuration information
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
 * @summary Write Umodel Elements
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
    query["method"] = request.method();
  }

  json body = {};
  if (!!request.hasElements()) {
    body["elements"] = request.elements();
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
 * @summary Write Umodel Elements
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