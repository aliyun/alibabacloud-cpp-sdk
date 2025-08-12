#include <darabonba/Core.hpp>
#include <alibabacloud/Cms20240330.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
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
 * @summary 创建EntityStore相关存储
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEntityStoreResponse
 */
CreateEntityStoreResponse Client::createEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "CreateEntityStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspaceName) , "/entitystore")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateEntityStoreResponse>();
}

/**
 * @summary 创建EntityStore相关存储
 *
 * @return CreateEntityStoreResponse
 */
CreateEntityStoreResponse Client::createEntityStore(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createEntityStoreWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary 创建Prometheus监控实例
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
  }));
  return json(callApi(params, req, runtime)).get<CreatePrometheusInstanceResponse>();
}

/**
 * @summary 创建Prometheus监控实例
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
 * @summary 创建Service
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/service")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateServiceResponse>();
}

/**
 * @summary 创建Service
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
 * @summary 创建票据
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
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<CreateTicketResponse>();
}

/**
 * @summary 创建票据
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
 * @summary 创建Umodel配置
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/umodel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateUmodelResponse>();
}

/**
 * @summary 创建Umodel配置
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
 * @summary 删除EntityStore相关存储
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEntityStoreResponse
 */
DeleteEntityStoreResponse Client::deleteEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteEntityStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspaceName) , "/entitystore")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteEntityStoreResponse>();
}

/**
 * @summary 删除EntityStore相关存储
 *
 * @return DeleteEntityStoreResponse
 */
DeleteEntityStoreResponse Client::deleteEntityStore(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteEntityStoreWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary 删除Service
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/service/" , Darabonba::Http::URL::percentEncode(serviceId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteServiceResponse>();
}

/**
 * @summary 删除Service
 *
 * @return DeleteServiceResponse
 */
DeleteServiceResponse Client::deleteService(const string &workspace, const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteServiceWithOptions(workspace, serviceId, headers, runtime);
}

/**
 * @summary 删除Umodel配置信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUmodelResponse
 */
DeleteUmodelResponse Client::deleteUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteUmodel"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/umodel")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteUmodelResponse>();
}

/**
 * @summary 删除Umodel配置信息
 *
 * @return DeleteUmodelResponse
 */
DeleteUmodelResponse Client::deleteUmodel(const string &workspace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteUmodelWithOptions(workspace, headers, runtime);
}

/**
 * @summary 删除 Umodel Elements
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
  }));
  Params params = Params(json({
    {"action" , "DeleteUmodelData"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/umodel/data")},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteUmodelDataResponse>();
}

/**
 * @summary 删除 Umodel Elements
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
 * @summary 删除工作空间
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "DeleteWorkspace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspaceName))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteWorkspaceResponse>();
}

/**
 * @summary 删除工作空间
 *
 * @return DeleteWorkspaceResponse
 */
DeleteWorkspaceResponse Client::deleteWorkspace(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteWorkspaceWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary 获取EntityStore相关存储信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEntityStoreResponse
 */
GetEntityStoreResponse Client::getEntityStoreWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetEntityStore"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspaceName) , "/entitystore")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetEntityStoreResponse>();
}

/**
 * @summary 获取EntityStore相关存储信息
 *
 * @return GetEntityStoreResponse
 */
GetEntityStoreResponse Client::getEntityStore(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getEntityStoreWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary 查询指定Workspace下的实体和关系数据，返回结果显示某时间区间中的实体数据（返回结果压缩后传输）。
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/entitiesAndRelations")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetEntityStoreDataResponse>();
}

/**
 * @summary 查询指定Workspace下的实体和关系数据，返回结果显示某时间区间中的实体数据（返回结果压缩后传输）。
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
 * @summary 查询 Service
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceResponse
 */
GetServiceResponse Client::getServiceWithOptions(const string &workspace, const string &serviceId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetService"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/service/" , Darabonba::Http::URL::percentEncode(serviceId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetServiceResponse>();
}

/**
 * @summary 查询 Service
 *
 * @return GetServiceResponse
 */
GetServiceResponse Client::getService(const string &workspace, const string &serviceId) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceWithOptions(workspace, serviceId, headers, runtime);
}

/**
 * @summary 获取应用可观测实例
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetServiceObservabilityResponse
 */
GetServiceObservabilityResponse Client::getServiceObservabilityWithOptions(const string &workspace, const string &type, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetServiceObservability"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/service-observability/" , Darabonba::Http::URL::percentEncode(type))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetServiceObservabilityResponse>();
}

/**
 * @summary 获取应用可观测实例
 *
 * @return GetServiceObservabilityResponse
 */
GetServiceObservabilityResponse Client::getServiceObservability(const string &workspace, const string &type) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getServiceObservabilityWithOptions(workspace, type, headers, runtime);
}

/**
 * @summary 获取Umodel配置信息
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUmodelResponse
 */
GetUmodelResponse Client::getUmodelWithOptions(const string &workspace, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetUmodel"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/umodel")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetUmodelResponse>();
}

/**
 * @summary 获取Umodel配置信息
 *
 * @return GetUmodelResponse
 */
GetUmodelResponse Client::getUmodel(const string &workspace) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getUmodelWithOptions(workspace, headers, runtime);
}

/**
 * @summary 获取相关联的 Umodel 图数据
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/umodel/graph")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetUmodelDataResponse>();
}

/**
 * @summary 获取相关联的 Umodel 图数据
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
 * @summary 获取工作空间
 *
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspaceWithOptions(const string &workspaceName, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }));
  Params params = Params(json({
    {"action" , "GetWorkspace"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspaceName))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetWorkspaceResponse>();
}

/**
 * @summary 获取工作空间
 *
 * @return GetWorkspaceResponse
 */
GetWorkspaceResponse Client::getWorkspace(const string &workspaceName) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getWorkspaceWithOptions(workspaceName, headers, runtime);
}

/**
 * @summary 查询告警动作
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
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ListAlertActionsResponse>();
}

/**
 * @summary 查询告警动作
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
 * @summary 列出资源Service
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
  }));
  Params params = Params(json({
    {"action" , "ListServices"},
    {"version" , "2024-03-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/services")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListServicesResponse>();
}

/**
 * @summary 列出资源Service
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
 * @summary 获取工作空间列表
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
  }));
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
  }));
  return json(callApi(params, req, runtime)).get<ListWorkspacesResponse>();
}

/**
 * @summary 获取工作空间列表
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
 * @summary 创建工作空间
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspaceName))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PutWorkspaceResponse>();
}

/**
 * @summary 创建工作空间
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
 * @summary 更新UpdateService
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/service/" , Darabonba::Http::URL::percentEncode(serviceId))},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateServiceResponse>();
}

/**
 * @summary 更新UpdateService
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
 * @summary 更新Umodel配置信息
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/umodel")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateUmodelResponse>();
}

/**
 * @summary 更新Umodel配置信息
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
 * @summary 写入 Umodel Elements
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
    {"pathname" , DARA_STRING_TEMPLATE("/workspace/" , Darabonba::Http::URL::percentEncode(workspace) , "/umodel/data")},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpsertUmodelDataResponse>();
}

/**
 * @summary 写入 Umodel Elements
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