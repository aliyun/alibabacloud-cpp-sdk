#include <darabonba/Core.hpp>
#include <alibabacloud/Eventbridge20200401.hpp>
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
using namespace AlibabaCloud::Eventbridge20200401::Models;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{

AlibabaCloud::Eventbridge20200401::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("eventbridge", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 检查账号是否存在ServiceLinkedRole授权
 *
 * @param request CheckServiceLinkedRoleForProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CheckServiceLinkedRoleForProductResponse
 */
CheckServiceLinkedRoleForProductResponse Client::checkServiceLinkedRoleForProductWithOptions(const CheckServiceLinkedRoleForProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CheckServiceLinkedRoleForProduct"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CheckServiceLinkedRoleForProductResponse>();
}

/**
 * @summary 检查账号是否存在ServiceLinkedRole授权
 *
 * @param request CheckServiceLinkedRoleForProductRequest
 * @return CheckServiceLinkedRoleForProductResponse
 */
CheckServiceLinkedRoleForProductResponse Client::checkServiceLinkedRoleForProduct(const CheckServiceLinkedRoleForProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkServiceLinkedRoleForProductWithOptions(request, runtime);
}

/**
 * @summary Creates an API destination.
 *
 * @description You can call this API operation to create an API destination.
 *
 * @param tmpReq CreateApiDestinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiDestinationResponse
 */
CreateApiDestinationResponse Client::createApiDestinationWithOptions(const CreateApiDestinationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateApiDestinationShrinkRequest request = CreateApiDestinationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHttpApiParameters()) {
    request.setHttpApiParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.httpApiParameters(), "HttpApiParameters", "json"));
  }

  json query = {};
  if (!!request.hasApiDestinationName()) {
    query["ApiDestinationName"] = request.apiDestinationName();
  }

  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHttpApiParametersShrink()) {
    query["HttpApiParameters"] = request.httpApiParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateApiDestination"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateApiDestinationResponse>();
}

/**
 * @summary Creates an API destination.
 *
 * @description You can call this API operation to create an API destination.
 *
 * @param request CreateApiDestinationRequest
 * @return CreateApiDestinationResponse
 */
CreateApiDestinationResponse Client::createApiDestination(const CreateApiDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApiDestinationWithOptions(request, runtime);
}

/**
 * @summary Creates a connection.
 *
 * @description You can call this API operation to create a connection.
 *
 * @param tmpReq CreateConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateConnectionResponse
 */
CreateConnectionResponse Client::createConnectionWithOptions(const CreateConnectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateConnectionShrinkRequest request = CreateConnectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthParameters()) {
    request.setAuthParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.authParameters(), "AuthParameters", "json"));
  }

  if (!!tmpReq.hasNetworkParameters()) {
    request.setNetworkParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.networkParameters(), "NetworkParameters", "json"));
  }

  json query = {};
  if (!!request.hasAuthParametersShrink()) {
    query["AuthParameters"] = request.authParametersShrink();
  }

  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasNetworkParametersShrink()) {
    query["NetworkParameters"] = request.networkParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateConnection"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateConnectionResponse>();
}

/**
 * @summary Creates a connection.
 *
 * @description You can call this API operation to create a connection.
 *
 * @param request CreateConnectionRequest
 * @return CreateConnectionResponse
 */
CreateConnectionResponse Client::createConnection(const CreateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createConnectionWithOptions(request, runtime);
}

/**
 * @summary Creates an event bus.
 *
 * @description Creates an event bus.
 *
 * @param request CreateEventBusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventBusResponse
 */
CreateEventBusResponse Client::createEventBusWithOptions(const CreateEventBusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateEventBus"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateEventBusResponse>();
}

/**
 * @summary Creates an event bus.
 *
 * @description Creates an event bus.
 *
 * @param request CreateEventBusRequest
 * @return CreateEventBusResponse
 */
CreateEventBusResponse Client::createEventBus(const CreateEventBusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventBusWithOptions(request, runtime);
}

/**
 * @summary Creates an event source.
 *
 * @description You can call this operation to create an event source.
 *
 * @param tmpReq CreateEventSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventSourceResponse
 */
CreateEventSourceResponse Client::createEventSourceWithOptions(const CreateEventSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEventSourceShrinkRequest request = CreateEventSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExternalSourceConfig()) {
    request.setExternalSourceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.externalSourceConfig(), "ExternalSourceConfig", "json"));
  }

  if (!!tmpReq.hasSourceHttpEventParameters()) {
    request.setSourceHttpEventParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceHttpEventParameters(), "SourceHttpEventParameters", "json"));
  }

  if (!!tmpReq.hasSourceKafkaParameters()) {
    request.setSourceKafkaParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceKafkaParameters(), "SourceKafkaParameters", "json"));
  }

  if (!!tmpReq.hasSourceMNSParameters()) {
    request.setSourceMNSParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceMNSParameters(), "SourceMNSParameters", "json"));
  }

  if (!!tmpReq.hasSourceRabbitMQParameters()) {
    request.setSourceRabbitMQParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceRabbitMQParameters(), "SourceRabbitMQParameters", "json"));
  }

  if (!!tmpReq.hasSourceRocketMQParameters()) {
    request.setSourceRocketMQParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceRocketMQParameters(), "SourceRocketMQParameters", "json"));
  }

  if (!!tmpReq.hasSourceSLSParameters()) {
    request.setSourceSLSParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceSLSParameters(), "SourceSLSParameters", "json"));
  }

  if (!!tmpReq.hasSourceScheduledEventParameters()) {
    request.setSourceScheduledEventParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceScheduledEventParameters(), "SourceScheduledEventParameters", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEventBusName()) {
    body["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventSourceName()) {
    body["EventSourceName"] = request.eventSourceName();
  }

  if (!!request.hasExternalSourceConfigShrink()) {
    body["ExternalSourceConfig"] = request.externalSourceConfigShrink();
  }

  if (!!request.hasExternalSourceType()) {
    body["ExternalSourceType"] = request.externalSourceType();
  }

  if (!!request.hasLinkedExternalSource()) {
    body["LinkedExternalSource"] = request.linkedExternalSource();
  }

  if (!!request.hasSourceHttpEventParametersShrink()) {
    body["SourceHttpEventParameters"] = request.sourceHttpEventParametersShrink();
  }

  if (!!request.hasSourceKafkaParametersShrink()) {
    body["SourceKafkaParameters"] = request.sourceKafkaParametersShrink();
  }

  if (!!request.hasSourceMNSParametersShrink()) {
    body["SourceMNSParameters"] = request.sourceMNSParametersShrink();
  }

  if (!!request.hasSourceRabbitMQParametersShrink()) {
    body["SourceRabbitMQParameters"] = request.sourceRabbitMQParametersShrink();
  }

  if (!!request.hasSourceRocketMQParametersShrink()) {
    body["SourceRocketMQParameters"] = request.sourceRocketMQParametersShrink();
  }

  if (!!request.hasSourceSLSParametersShrink()) {
    body["SourceSLSParameters"] = request.sourceSLSParametersShrink();
  }

  if (!!request.hasSourceScheduledEventParametersShrink()) {
    body["SourceScheduledEventParameters"] = request.sourceScheduledEventParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEventSource"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateEventSourceResponse>();
}

/**
 * @summary Creates an event source.
 *
 * @description You can call this operation to create an event source.
 *
 * @param request CreateEventSourceRequest
 * @return CreateEventSourceResponse
 */
CreateEventSourceResponse Client::createEventSource(const CreateEventSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventSourceWithOptions(request, runtime);
}

/**
 * @summary Creates an event stream.
 *
 * @description You can call this API operation to create an event stream.
 *
 * @param tmpReq CreateEventStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventStreamingResponse
 */
CreateEventStreamingResponse Client::createEventStreamingWithOptions(const CreateEventStreamingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateEventStreamingShrinkRequest request = CreateEventStreamingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRunOptions()) {
    request.setRunOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runOptions(), "RunOptions", "json"));
  }

  if (!!tmpReq.hasSink()) {
    request.setSinkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sink(), "Sink", "json"));
  }

  if (!!tmpReq.hasSource()) {
    request.setSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.source(), "Source", "json"));
  }

  if (!!tmpReq.hasTransforms()) {
    request.setTransformsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transforms(), "Transforms", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEventStreamingName()) {
    body["EventStreamingName"] = request.eventStreamingName();
  }

  if (!!request.hasFilterPattern()) {
    body["FilterPattern"] = request.filterPattern();
  }

  if (!!request.hasRunOptionsShrink()) {
    body["RunOptions"] = request.runOptionsShrink();
  }

  if (!!request.hasSinkShrink()) {
    body["Sink"] = request.sinkShrink();
  }

  if (!!request.hasSourceShrink()) {
    body["Source"] = request.sourceShrink();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  if (!!request.hasTransformsShrink()) {
    body["Transforms"] = request.transformsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateEventStreaming"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateEventStreamingResponse>();
}

/**
 * @summary Creates an event stream.
 *
 * @description You can call this API operation to create an event stream.
 *
 * @param request CreateEventStreamingRequest
 * @return CreateEventStreamingResponse
 */
CreateEventStreamingResponse Client::createEventStreaming(const CreateEventStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventStreamingWithOptions(request, runtime);
}

/**
 * @summary Creates an event rule.
 *
 * @description You can call this API operation to create an event rule.
 *
 * @param tmpReq CreateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRuleWithOptions(const CreateRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateRuleShrinkRequest request = CreateRuleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventTargets()) {
    request.setEventTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.eventTargets(), "EventTargets", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventTargetsShrink()) {
    query["EventTargets"] = request.eventTargetsShrink();
  }

  if (!!request.hasFilterPattern()) {
    query["FilterPattern"] = request.filterPattern();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateRule"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateRuleResponse>();
}

/**
 * @summary Creates an event rule.
 *
 * @description You can call this API operation to create an event rule.
 *
 * @param request CreateRuleRequest
 * @return CreateRuleResponse
 */
CreateRuleResponse Client::createRule(const CreateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a service-linked role for your cloud service.
 *
 * @description You can call this API operation to create a service-linked role for your cloud service.
 *
 * @param request CreateServiceLinkedRoleForProductRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServiceLinkedRoleForProductResponse
 */
CreateServiceLinkedRoleForProductResponse Client::createServiceLinkedRoleForProductWithOptions(const CreateServiceLinkedRoleForProductRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductName()) {
    query["ProductName"] = request.productName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "CreateServiceLinkedRoleForProduct"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<CreateServiceLinkedRoleForProductResponse>();
}

/**
 * @summary Creates a service-linked role for your cloud service.
 *
 * @description You can call this API operation to create a service-linked role for your cloud service.
 *
 * @param request CreateServiceLinkedRoleForProductRequest
 * @return CreateServiceLinkedRoleForProductResponse
 */
CreateServiceLinkedRoleForProductResponse Client::createServiceLinkedRoleForProduct(const CreateServiceLinkedRoleForProductRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServiceLinkedRoleForProductWithOptions(request, runtime);
}

/**
 * @summary Deletes an API destination.
 *
 * @description You can call this API operation to delete an API destination.
 *
 * @param request DeleteApiDestinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiDestinationResponse
 */
DeleteApiDestinationResponse Client::deleteApiDestinationWithOptions(const DeleteApiDestinationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiDestinationName()) {
    query["ApiDestinationName"] = request.apiDestinationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteApiDestination"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteApiDestinationResponse>();
}

/**
 * @summary Deletes an API destination.
 *
 * @description You can call this API operation to delete an API destination.
 *
 * @param request DeleteApiDestinationRequest
 * @return DeleteApiDestinationResponse
 */
DeleteApiDestinationResponse Client::deleteApiDestination(const DeleteApiDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApiDestinationWithOptions(request, runtime);
}

/**
 * @summary Deletes a connection.
 *
 * @description You can call this API operation to delete a connection.
 *
 * @param request DeleteConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnectionWithOptions(const DeleteConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteConnection"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteConnectionResponse>();
}

/**
 * @summary Deletes a connection.
 *
 * @description You can call this API operation to delete a connection.
 *
 * @param request DeleteConnectionRequest
 * @return DeleteConnectionResponse
 */
DeleteConnectionResponse Client::deleteConnection(const DeleteConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteConnectionWithOptions(request, runtime);
}

/**
 * @summary Deletes an event bus.
 *
 * @description You can call this API operation to delete an event bus.
 *
 * @param request DeleteEventBusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventBusResponse
 */
DeleteEventBusResponse Client::deleteEventBusWithOptions(const DeleteEventBusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteEventBus"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteEventBusResponse>();
}

/**
 * @summary Deletes an event bus.
 *
 * @description You can call this API operation to delete an event bus.
 *
 * @param request DeleteEventBusRequest
 * @return DeleteEventBusResponse
 */
DeleteEventBusResponse Client::deleteEventBus(const DeleteEventBusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventBusWithOptions(request, runtime);
}

/**
 * @summary Deletes an event source.
 *
 * @description You can call this API operation to delete an event source.
 *
 * @param request DeleteEventSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventSourceResponse
 */
DeleteEventSourceResponse Client::deleteEventSourceWithOptions(const DeleteEventSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventBusName()) {
    body["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventSourceName()) {
    body["EventSourceName"] = request.eventSourceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteEventSource"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteEventSourceResponse>();
}

/**
 * @summary Deletes an event source.
 *
 * @description You can call this API operation to delete an event source.
 *
 * @param request DeleteEventSourceRequest
 * @return DeleteEventSourceResponse
 */
DeleteEventSourceResponse Client::deleteEventSource(const DeleteEventSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes an event stream.
 *
 * @description You can call this API operation to delete an event stream.
 *
 * @param request DeleteEventStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventStreamingResponse
 */
DeleteEventStreamingResponse Client::deleteEventStreamingWithOptions(const DeleteEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventStreamingName()) {
    body["EventStreamingName"] = request.eventStreamingName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteEventStreaming"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteEventStreamingResponse>();
}

/**
 * @summary Deletes an event stream.
 *
 * @description You can call this API operation to delete an event stream.
 *
 * @param request DeleteEventStreamingRequest
 * @return DeleteEventStreamingResponse
 */
DeleteEventStreamingResponse Client::deleteEventStreaming(const DeleteEventStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventStreamingWithOptions(request, runtime);
}

/**
 * @summary Deletes an event rule.
 *
 * @description You can call this API operation to delete an event rule.
 *
 * @param request DeleteRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRuleWithOptions(const DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteRule"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteRuleResponse>();
}

/**
 * @summary Deletes an event rule.
 *
 * @description You can call this API operation to delete an event rule.
 *
 * @param request DeleteRuleRequest
 * @return DeleteRuleResponse
 */
DeleteRuleResponse Client::deleteRule(const DeleteRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes one or more event targets of an event rule.
 *
 * @description You can call this API operation to delete one or more event targets of an event rule.
 *
 * @param tmpReq DeleteTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteTargetsResponse
 */
DeleteTargetsResponse Client::deleteTargetsWithOptions(const DeleteTargetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteTargetsShrinkRequest request = DeleteTargetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTargetIds()) {
    request.setTargetIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.targetIds(), "TargetIds", "json"));
  }

  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasTargetIdsShrink()) {
    query["TargetIds"] = request.targetIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DeleteTargets"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DeleteTargetsResponse>();
}

/**
 * @summary Deletes one or more event targets of an event rule.
 *
 * @description You can call this API operation to delete one or more event targets of an event rule.
 *
 * @param request DeleteTargetsRequest
 * @return DeleteTargetsResponse
 */
DeleteTargetsResponse Client::deleteTargets(const DeleteTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteTargetsWithOptions(request, runtime);
}

/**
 * @summary Disables an event rule.
 *
 * @description You can call this API operation to disable an event rule.
 *
 * @param request DisableRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableRuleResponse
 */
DisableRuleResponse Client::disableRuleWithOptions(const DisableRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "DisableRule"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DisableRuleResponse>();
}

/**
 * @summary Disables an event rule.
 *
 * @description You can call this API operation to disable an event rule.
 *
 * @param request DisableRuleRequest
 * @return DisableRuleResponse
 */
DisableRuleResponse Client::disableRule(const DisableRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableRuleWithOptions(request, runtime);
}

/**
 * @summary 发现EventSource(例如：Mysql)的Schema和SimpleData
 *
 * @param tmpReq DiscoverEventSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DiscoverEventSourceResponse
 */
DiscoverEventSourceResponse Client::discoverEventSourceWithOptions(const DiscoverEventSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DiscoverEventSourceShrinkRequest request = DiscoverEventSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceMySQLParameters()) {
    request.setSourceMySQLParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceMySQLParameters(), "SourceMySQLParameters", "json"));
  }

  json body = {};
  if (!!request.hasSourceMySQLParametersShrink()) {
    body["SourceMySQLParameters"] = request.sourceMySQLParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DiscoverEventSource"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<DiscoverEventSourceResponse>();
}

/**
 * @summary 发现EventSource(例如：Mysql)的Schema和SimpleData
 *
 * @param request DiscoverEventSourceRequest
 * @return DiscoverEventSourceResponse
 */
DiscoverEventSourceResponse Client::discoverEventSource(const DiscoverEventSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return discoverEventSourceWithOptions(request, runtime);
}

/**
 * @summary Enables an event rule.
 *
 * @description You can call this API operation to enable an event rule.
 *
 * @param request EnableRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableRuleResponse
 */
EnableRuleResponse Client::enableRuleWithOptions(const EnableRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "EnableRule"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<EnableRuleResponse>();
}

/**
 * @summary Enables an event rule.
 *
 * @description You can call this API operation to enable an event rule.
 *
 * @param request EnableRuleRequest
 * @return EnableRuleResponse
 */
EnableRuleResponse Client::enableRule(const EnableRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableRuleWithOptions(request, runtime);
}

/**
 * @summary EventCenterQueryEvents
 *
 * @param tmpReq EventCenterQueryEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EventCenterQueryEventsResponse
 */
EventCenterQueryEventsResponse Client::eventCenterQueryEventsWithOptions(const EventCenterQueryEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  EventCenterQueryEventsShrinkRequest request = EventCenterQueryEventsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.body(), "Body", "json"));
  }

  json query = {};
  if (!!request.hasBusName()) {
    query["BusName"] = request.busName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  json body = {};
  if (!!request.hasBodyShrink()) {
    body["Body"] = request.bodyShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "EventCenterQueryEvents"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<EventCenterQueryEventsResponse>();
}

/**
 * @summary EventCenterQueryEvents
 *
 * @param request EventCenterQueryEventsRequest
 * @return EventCenterQueryEventsResponse
 */
EventCenterQueryEventsResponse Client::eventCenterQueryEvents(const EventCenterQueryEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return eventCenterQueryEventsWithOptions(request, runtime);
}

/**
 * @summary Queries the information about an API destination.
 *
 * @description You can call this API operation to query the information about an API destination.
 *
 * @param request GetApiDestinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetApiDestinationResponse
 */
GetApiDestinationResponse Client::getApiDestinationWithOptions(const GetApiDestinationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiDestinationName()) {
    query["ApiDestinationName"] = request.apiDestinationName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetApiDestination"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetApiDestinationResponse>();
}

/**
 * @summary Queries the information about an API destination.
 *
 * @description You can call this API operation to query the information about an API destination.
 *
 * @param request GetApiDestinationRequest
 * @return GetApiDestinationResponse
 */
GetApiDestinationResponse Client::getApiDestination(const GetApiDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getApiDestinationWithOptions(request, runtime);
}

/**
 * @summary Queries the configurations of a connection.
 *
 * @description You can call this API operation to query the configurations of a connection.
 *
 * @param request GetConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConnectionResponse
 */
GetConnectionResponse Client::getConnectionWithOptions(const GetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetConnection"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetConnectionResponse>();
}

/**
 * @summary Queries the configurations of a connection.
 *
 * @description You can call this API operation to query the configurations of a connection.
 *
 * @param request GetConnectionRequest
 * @return GetConnectionResponse
 */
GetConnectionResponse Client::getConnection(const GetConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConnectionWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed information about an event bus.
 *
 * @description You can call this API operation to query the detailed information about an event bus.
 *
 * @param request GetEventBusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventBusResponse
 */
GetEventBusResponse Client::getEventBusWithOptions(const GetEventBusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetEventBus"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetEventBusResponse>();
}

/**
 * @summary Queries the detailed information about an event bus.
 *
 * @description You can call this API operation to query the detailed information about an event bus.
 *
 * @param request GetEventBusRequest
 * @return GetEventBusResponse
 */
GetEventBusResponse Client::getEventBus(const GetEventBusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEventBusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an event stream.
 *
 * @description You can call this API operation to query the details of an event stream.
 *
 * @param request GetEventStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetEventStreamingResponse
 */
GetEventStreamingResponse Client::getEventStreamingWithOptions(const GetEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventStreamingName()) {
    body["EventStreamingName"] = request.eventStreamingName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GetEventStreaming"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetEventStreamingResponse>();
}

/**
 * @summary Queries the details of an event stream.
 *
 * @description You can call this API operation to query the details of an event stream.
 *
 * @param request GetEventStreamingRequest
 * @return GetEventStreamingResponse
 */
GetEventStreamingResponse Client::getEventStreaming(const GetEventStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getEventStreamingWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an event rule.
 *
 * @description You can call this API operation to query the details of an event rule.
 *
 * @param request GetRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRuleWithOptions(const GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "GetRule"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<GetRuleResponse>();
}

/**
 * @summary Queries the details of an event rule.
 *
 * @description You can call this API operation to query the details of an event rule.
 *
 * @param request GetRuleRequest
 * @return GetRuleResponse
 */
GetRuleResponse Client::getRule(const GetRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRuleWithOptions(request, runtime);
}

/**
 * @summary Queries all Alibaba Cloud service event sources.
 *
 * @description You can call this API operation to query all Alibaba Cloud service event sources.
 *
 * @param request ListAliyunOfficialEventSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAliyunOfficialEventSourcesResponse
 */
ListAliyunOfficialEventSourcesResponse Client::listAliyunOfficialEventSourcesWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListAliyunOfficialEventSources"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListAliyunOfficialEventSourcesResponse>();
}

/**
 * @summary Queries all Alibaba Cloud service event sources.
 *
 * @description You can call this API operation to query all Alibaba Cloud service event sources.
 *
 * @return ListAliyunOfficialEventSourcesResponse
 */
ListAliyunOfficialEventSourcesResponse Client::listAliyunOfficialEventSources() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAliyunOfficialEventSourcesWithOptions(runtime);
}

/**
 * @summary Queries a list of API destinations.
 *
 * @description You can use this API operation to query a list of API destinations.
 *
 * @param request ListApiDestinationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiDestinationsResponse
 */
ListApiDestinationsResponse Client::listApiDestinationsWithOptions(const ListApiDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiDestinationNamePrefix()) {
    query["ApiDestinationNamePrefix"] = request.apiDestinationNamePrefix();
  }

  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListApiDestinations"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListApiDestinationsResponse>();
}

/**
 * @summary Queries a list of API destinations.
 *
 * @description You can use this API operation to query a list of API destinations.
 *
 * @param request ListApiDestinationsRequest
 * @return ListApiDestinationsResponse
 */
ListApiDestinationsResponse Client::listApiDestinations(const ListApiDestinationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiDestinationsWithOptions(request, runtime);
}

/**
 * @summary Queries connections.
 *
 * @description You can call this API operation to query connections.
 *
 * @param request ListConnectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnectionsWithOptions(const ListConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConnectionNamePrefix()) {
    body["ConnectionNamePrefix"] = request.connectionNamePrefix();
  }

  if (!!request.hasMaxResults()) {
    body["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListConnections"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListConnectionsResponse>();
}

/**
 * @summary Queries connections.
 *
 * @description You can call this API operation to query connections.
 *
 * @param request ListConnectionsRequest
 * @return ListConnectionsResponse
 */
ListConnectionsResponse Client::listConnections(const ListConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConnectionsWithOptions(request, runtime);
}

/**
 * @summary Queries all event buses.
 *
 * @description You can call this API operation to query all event buses.
 *
 * @param request ListEventBusesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventBusesResponse
 */
ListEventBusesResponse Client::listEventBusesWithOptions(const ListEventBusesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNamePrefix()) {
    query["NamePrefix"] = request.namePrefix();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListEventBuses"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListEventBusesResponse>();
}

/**
 * @summary Queries all event buses.
 *
 * @description You can call this API operation to query all event buses.
 *
 * @param request ListEventBusesRequest
 * @return ListEventBusesResponse
 */
ListEventBusesResponse Client::listEventBuses(const ListEventBusesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventBusesWithOptions(request, runtime);
}

/**
 * @summary Queries event streams.
 *
 * @description You can call this API operation to query event streams.
 *
 * @param request ListEventStreamingsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListEventStreamingsResponse
 */
ListEventStreamingsResponse Client::listEventStreamingsWithOptions(const ListEventStreamingsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLimit()) {
    body["Limit"] = request.limit();
  }

  if (!!request.hasNamePrefix()) {
    body["NamePrefix"] = request.namePrefix();
  }

  if (!!request.hasNextToken()) {
    body["NextToken"] = request.nextToken();
  }

  if (!!request.hasSinkArn()) {
    body["SinkArn"] = request.sinkArn();
  }

  if (!!request.hasSourceArn()) {
    body["SourceArn"] = request.sourceArn();
  }

  if (!!request.hasTags()) {
    body["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListEventStreamings"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListEventStreamingsResponse>();
}

/**
 * @summary Queries event streams.
 *
 * @description You can call this API operation to query event streams.
 *
 * @param request ListEventStreamingsRequest
 * @return ListEventStreamingsResponse
 */
ListEventStreamingsResponse Client::listEventStreamings(const ListEventStreamingsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listEventStreamingsWithOptions(request, runtime);
}

/**
 * @summary Queries all rules of an event bus.
 *
 * @description You can call this API operation to query all rules of an event bus.
 *
 * @param request ListRulesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRulesWithOptions(const ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRuleNamePrefix()) {
    query["RuleNamePrefix"] = request.ruleNamePrefix();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListRules"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListRulesResponse>();
}

/**
 * @summary Queries all rules of an event bus.
 *
 * @description You can call this API operation to query all rules of an event bus.
 *
 * @param request ListRulesRequest
 * @return ListRulesResponse
 */
ListRulesResponse Client::listRules(const ListRulesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRulesWithOptions(request, runtime);
}

/**
 * @summary Queries all event targets of an event rule.
 *
 * @param request ListTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTargetsResponse
 */
ListTargetsResponse Client::listTargetsWithOptions(const ListTargetsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasArn()) {
    query["Arn"] = request.arn();
  }

  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListTargets"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListTargetsResponse>();
}

/**
 * @summary Queries all event targets of an event rule.
 *
 * @param request ListTargetsRequest
 * @return ListTargetsResponse
 */
ListTargetsResponse Client::listTargets(const ListTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries all custom event sources.
 *
 * @description You can call this API operation to query custom event sources.
 *
 * @param request ListUserDefinedEventSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserDefinedEventSourcesResponse
 */
ListUserDefinedEventSourcesResponse Client::listUserDefinedEventSourcesWithOptions(const ListUserDefinedEventSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasNamePrefix()) {
    query["NamePrefix"] = request.namePrefix();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "ListUserDefinedEventSources"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<ListUserDefinedEventSourcesResponse>();
}

/**
 * @summary Queries all custom event sources.
 *
 * @description You can call this API operation to query custom event sources.
 *
 * @param request ListUserDefinedEventSourcesRequest
 * @return ListUserDefinedEventSourcesResponse
 */
ListUserDefinedEventSourcesResponse Client::listUserDefinedEventSources(const ListUserDefinedEventSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserDefinedEventSourcesWithOptions(request, runtime);
}

/**
 * @summary Stops an event stream that is running.
 *
 * @description You can call this API operation to stop an event stream that is running.
 *
 * @param request PauseEventStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PauseEventStreamingResponse
 */
PauseEventStreamingResponse Client::pauseEventStreamingWithOptions(const PauseEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventStreamingName()) {
    body["EventStreamingName"] = request.eventStreamingName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PauseEventStreaming"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PauseEventStreamingResponse>();
}

/**
 * @summary Stops an event stream that is running.
 *
 * @description You can call this API operation to stop an event stream that is running.
 *
 * @param request PauseEventStreamingRequest
 * @return PauseEventStreamingResponse
 */
PauseEventStreamingResponse Client::pauseEventStreaming(const PauseEventStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return pauseEventStreamingWithOptions(request, runtime);
}

/**
 * @summary Creates or updates event targets under a rule.
 *
 * @description You can call this API operation to create or update event targets under a rule.
 *
 * @param tmpReq PutTargetsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PutTargetsResponse
 */
PutTargetsResponse Client::putTargetsWithOptions(const PutTargetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PutTargetsShrinkRequest request = PutTargetsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTargets()) {
    request.setTargetsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.targets(), "Targets", "json"));
  }

  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasTargetsShrink()) {
    query["Targets"] = request.targetsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "PutTargets"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<PutTargetsResponse>();
}

/**
 * @summary Creates or updates event targets under a rule.
 *
 * @description You can call this API operation to create or update event targets under a rule.
 *
 * @param request PutTargetsRequest
 * @return PutTargetsResponse
 */
PutTargetsResponse Client::putTargets(const PutTargetsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return putTargetsWithOptions(request, runtime);
}

/**
 * @summary Queries the content of an event.
 *
 * @description You can call this API operation to query the content of an event.
 *
 * @param request QueryEventRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEventResponse
 */
QueryEventResponse Client::queryEventWithOptions(const QueryEventRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasEventSource()) {
    query["EventSource"] = request.eventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryEvent"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryEventResponse>();
}

/**
 * @summary Queries the content of an event.
 *
 * @description You can call this API operation to query the content of an event.
 *
 * @param request QueryEventRequest
 * @return QueryEventResponse
 */
QueryEventResponse Client::queryEvent(const QueryEventRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEventWithOptions(request, runtime);
}

/**
 * @summary Queries event traces.
 *
 * @description You can call this API operation to query event traces.
 *
 * @param request QueryEventTracesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryEventTracesResponse
 */
QueryEventTracesResponse Client::queryEventTracesWithOptions(const QueryEventTracesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryEventTraces"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryEventTracesResponse>();
}

/**
 * @summary Queries event traces.
 *
 * @description You can call this API operation to query event traces.
 *
 * @param request QueryEventTracesRequest
 * @return QueryEventTracesResponse
 */
QueryEventTracesResponse Client::queryEventTraces(const QueryEventTracesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryEventTracesWithOptions(request, runtime);
}

/**
 * @summary Queries event traces by event ID.
 *
 * @description You can call this API operation to query event traces by event ID.
 *
 * @param request QueryTracedEventByEventIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTracedEventByEventIdResponse
 */
QueryTracedEventByEventIdResponse Client::queryTracedEventByEventIdWithOptions(const QueryTracedEventByEventIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventId()) {
    query["EventId"] = request.eventId();
  }

  if (!!request.hasEventSource()) {
    query["EventSource"] = request.eventSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryTracedEventByEventId"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryTracedEventByEventIdResponse>();
}

/**
 * @summary Queries event traces by event ID.
 *
 * @description You can call this API operation to query event traces by event ID.
 *
 * @param request QueryTracedEventByEventIdRequest
 * @return QueryTracedEventByEventIdResponse
 */
QueryTracedEventByEventIdResponse Client::queryTracedEventByEventId(const QueryTracedEventByEventIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTracedEventByEventIdWithOptions(request, runtime);
}

/**
 * @summary Queries event traces by time range.
 *
 * @description You can call this API operation to query event traces by time range.
 *
 * @param request QueryTracedEventsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTracedEventsResponse
 */
QueryTracedEventsResponse Client::queryTracedEventsWithOptions(const QueryTracedEventsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventSource()) {
    query["EventSource"] = request.eventSource();
  }

  if (!!request.hasEventType()) {
    query["EventType"] = request.eventType();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasMatchedRule()) {
    query["MatchedRule"] = request.matchedRule();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "QueryTracedEvents"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<QueryTracedEventsResponse>();
}

/**
 * @summary Queries event traces by time range.
 *
 * @description You can call this API operation to query event traces by time range.
 *
 * @param request QueryTracedEventsRequest
 * @return QueryTracedEventsResponse
 */
QueryTracedEventsResponse Client::queryTracedEvents(const QueryTracedEventsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTracedEventsWithOptions(request, runtime);
}

/**
 * @summary Enables a created or deactivated event stream.
 *
 * @description You can call this API operation to enable a created or deactivated event stream.
 *
 * @param request StartEventStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartEventStreamingResponse
 */
StartEventStreamingResponse Client::startEventStreamingWithOptions(const StartEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEventStreamingName()) {
    body["EventStreamingName"] = request.eventStreamingName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartEventStreaming"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<StartEventStreamingResponse>();
}

/**
 * @summary Enables a created or deactivated event stream.
 *
 * @description You can call this API operation to enable a created or deactivated event stream.
 *
 * @param request StartEventStreamingRequest
 * @return StartEventStreamingResponse
 */
StartEventStreamingResponse Client::startEventStreaming(const StartEventStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startEventStreamingWithOptions(request, runtime);
}

/**
 * @summary Checks whether the event pattern matches the provided JSON format.
 *
 * @description You can call this API operation to check whether the event pattern matches the provided JSON format.
 *
 * @param request TestEventPatternRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestEventPatternResponse
 */
TestEventPatternResponse Client::testEventPatternWithOptions(const TestEventPatternRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasEvent()) {
    body["Event"] = request.event();
  }

  if (!!request.hasEventPattern()) {
    body["EventPattern"] = request.eventPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TestEventPattern"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<TestEventPatternResponse>();
}

/**
 * @summary Checks whether the event pattern matches the provided JSON format.
 *
 * @description You can call this API operation to check whether the event pattern matches the provided JSON format.
 *
 * @param request TestEventPatternRequest
 * @return TestEventPatternResponse
 */
TestEventPatternResponse Client::testEventPattern(const TestEventPatternRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testEventPatternWithOptions(request, runtime);
}

/**
 * @summary Checks whether event source configurations are available.
 *
 * @description You can call this API operation to query all custom event sources.
 *
 * @param tmpReq TestEventSourceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TestEventSourceConfigResponse
 */
TestEventSourceConfigResponse Client::testEventSourceConfigWithOptions(const TestEventSourceConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  TestEventSourceConfigShrinkRequest request = TestEventSourceConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceMySQLParameters()) {
    request.setSourceMySQLParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceMySQLParameters(), "SourceMySQLParameters", "json"));
  }

  json body = {};
  if (!!request.hasSourceMySQLParametersShrink()) {
    body["SourceMySQLParameters"] = request.sourceMySQLParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "TestEventSourceConfig"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<TestEventSourceConfigResponse>();
}

/**
 * @summary Checks whether event source configurations are available.
 *
 * @description You can call this API operation to query all custom event sources.
 *
 * @param request TestEventSourceConfigRequest
 * @return TestEventSourceConfigResponse
 */
TestEventSourceConfigResponse Client::testEventSourceConfig(const TestEventSourceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return testEventSourceConfigWithOptions(request, runtime);
}

/**
 * @summary Updates an API destination.
 *
 * @description You can call this API operation to update an API destination.
 *
 * @param tmpReq UpdateApiDestinationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiDestinationResponse
 */
UpdateApiDestinationResponse Client::updateApiDestinationWithOptions(const UpdateApiDestinationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApiDestinationShrinkRequest request = UpdateApiDestinationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasHttpApiParameters()) {
    request.setHttpApiParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.httpApiParameters(), "HttpApiParameters", "json"));
  }

  json query = {};
  if (!!request.hasApiDestinationName()) {
    query["ApiDestinationName"] = request.apiDestinationName();
  }

  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasHttpApiParametersShrink()) {
    query["HttpApiParameters"] = request.httpApiParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "UpdateApiDestination"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateApiDestinationResponse>();
}

/**
 * @summary Updates an API destination.
 *
 * @description You can call this API operation to update an API destination.
 *
 * @param request UpdateApiDestinationRequest
 * @return UpdateApiDestinationResponse
 */
UpdateApiDestinationResponse Client::updateApiDestination(const UpdateApiDestinationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApiDestinationWithOptions(request, runtime);
}

/**
 * @summary Updates a connection.
 *
 * @description You can call this API operation to update a connection.
 *
 * @param tmpReq UpdateConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateConnectionResponse
 */
UpdateConnectionResponse Client::updateConnectionWithOptions(const UpdateConnectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateConnectionShrinkRequest request = UpdateConnectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthParameters()) {
    request.setAuthParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.authParameters(), "AuthParameters", "json"));
  }

  if (!!tmpReq.hasNetworkParameters()) {
    request.setNetworkParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.networkParameters(), "NetworkParameters", "json"));
  }

  json query = {};
  if (!!request.hasAuthParametersShrink()) {
    query["AuthParameters"] = request.authParametersShrink();
  }

  if (!!request.hasConnectionName()) {
    query["ConnectionName"] = request.connectionName();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasNetworkParametersShrink()) {
    query["NetworkParameters"] = request.networkParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "UpdateConnection"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateConnectionResponse>();
}

/**
 * @summary Updates a connection.
 *
 * @description You can call this API operation to update a connection.
 *
 * @param request UpdateConnectionRequest
 * @return UpdateConnectionResponse
 */
UpdateConnectionResponse Client::updateConnection(const UpdateConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateConnectionWithOptions(request, runtime);
}

/**
 * @summary Updates an event bus.
 *
 * @description You can call this operation to update an event bus.
 *
 * @param request UpdateEventBusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEventBusResponse
 */
UpdateEventBusResponse Client::updateEventBusWithOptions(const UpdateEventBusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEventBus"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateEventBusResponse>();
}

/**
 * @summary Updates an event bus.
 *
 * @description You can call this operation to update an event bus.
 *
 * @param request UpdateEventBusRequest
 * @return UpdateEventBusResponse
 */
UpdateEventBusResponse Client::updateEventBus(const UpdateEventBusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEventBusWithOptions(request, runtime);
}

/**
 * @summary Updates an event source.
 *
 * @description You can call this API operation to update an event source.
 *
 * @param tmpReq UpdateEventSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEventSourceResponse
 */
UpdateEventSourceResponse Client::updateEventSourceWithOptions(const UpdateEventSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateEventSourceShrinkRequest request = UpdateEventSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasExternalSourceConfig()) {
    request.setExternalSourceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.externalSourceConfig(), "ExternalSourceConfig", "json"));
  }

  if (!!tmpReq.hasSourceHttpEventParameters()) {
    request.setSourceHttpEventParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceHttpEventParameters(), "SourceHttpEventParameters", "json"));
  }

  if (!!tmpReq.hasSourceKafkaParameters()) {
    request.setSourceKafkaParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceKafkaParameters(), "SourceKafkaParameters", "json"));
  }

  if (!!tmpReq.hasSourceMNSParameters()) {
    request.setSourceMNSParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceMNSParameters(), "SourceMNSParameters", "json"));
  }

  if (!!tmpReq.hasSourceRabbitMQParameters()) {
    request.setSourceRabbitMQParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceRabbitMQParameters(), "SourceRabbitMQParameters", "json"));
  }

  if (!!tmpReq.hasSourceRocketMQParameters()) {
    request.setSourceRocketMQParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceRocketMQParameters(), "SourceRocketMQParameters", "json"));
  }

  if (!!tmpReq.hasSourceSLSParameters()) {
    request.setSourceSLSParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceSLSParameters(), "SourceSLSParameters", "json"));
  }

  if (!!tmpReq.hasSourceScheduledEventParameters()) {
    request.setSourceScheduledEventParametersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sourceScheduledEventParameters(), "SourceScheduledEventParameters", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEventBusName()) {
    body["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasEventSourceName()) {
    body["EventSourceName"] = request.eventSourceName();
  }

  if (!!request.hasExternalSourceConfigShrink()) {
    body["ExternalSourceConfig"] = request.externalSourceConfigShrink();
  }

  if (!!request.hasExternalSourceType()) {
    body["ExternalSourceType"] = request.externalSourceType();
  }

  if (!!request.hasLinkedExternalSource()) {
    body["LinkedExternalSource"] = request.linkedExternalSource();
  }

  if (!!request.hasSourceHttpEventParametersShrink()) {
    body["SourceHttpEventParameters"] = request.sourceHttpEventParametersShrink();
  }

  if (!!request.hasSourceKafkaParametersShrink()) {
    body["SourceKafkaParameters"] = request.sourceKafkaParametersShrink();
  }

  if (!!request.hasSourceMNSParametersShrink()) {
    body["SourceMNSParameters"] = request.sourceMNSParametersShrink();
  }

  if (!!request.hasSourceRabbitMQParametersShrink()) {
    body["SourceRabbitMQParameters"] = request.sourceRabbitMQParametersShrink();
  }

  if (!!request.hasSourceRocketMQParametersShrink()) {
    body["SourceRocketMQParameters"] = request.sourceRocketMQParametersShrink();
  }

  if (!!request.hasSourceSLSParametersShrink()) {
    body["SourceSLSParameters"] = request.sourceSLSParametersShrink();
  }

  if (!!request.hasSourceScheduledEventParametersShrink()) {
    body["SourceScheduledEventParameters"] = request.sourceScheduledEventParametersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEventSource"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateEventSourceResponse>();
}

/**
 * @summary Updates an event source.
 *
 * @description You can call this API operation to update an event source.
 *
 * @param request UpdateEventSourceRequest
 * @return UpdateEventSourceResponse
 */
UpdateEventSourceResponse Client::updateEventSource(const UpdateEventSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEventSourceWithOptions(request, runtime);
}

/**
 * @summary Modifies the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
 *
 * @description You can call this API operation to modify the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
 *
 * @param tmpReq UpdateEventStreamingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEventStreamingResponse
 */
UpdateEventStreamingResponse Client::updateEventStreamingWithOptions(const UpdateEventStreamingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateEventStreamingShrinkRequest request = UpdateEventStreamingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRunOptions()) {
    request.setRunOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.runOptions(), "RunOptions", "json"));
  }

  if (!!tmpReq.hasSink()) {
    request.setSinkShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sink(), "Sink", "json"));
  }

  if (!!tmpReq.hasSource()) {
    request.setSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.source(), "Source", "json"));
  }

  if (!!tmpReq.hasTransforms()) {
    request.setTransformsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transforms(), "Transforms", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.description();
  }

  if (!!request.hasEventStreamingName()) {
    body["EventStreamingName"] = request.eventStreamingName();
  }

  if (!!request.hasFilterPattern()) {
    body["FilterPattern"] = request.filterPattern();
  }

  if (!!request.hasRunOptionsShrink()) {
    body["RunOptions"] = request.runOptionsShrink();
  }

  if (!!request.hasSinkShrink()) {
    body["Sink"] = request.sinkShrink();
  }

  if (!!request.hasSourceShrink()) {
    body["Source"] = request.sourceShrink();
  }

  if (!!request.hasTransformsShrink()) {
    body["Transforms"] = request.transformsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEventStreaming"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateEventStreamingResponse>();
}

/**
 * @summary Modifies the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
 *
 * @description You can call this API operation to modify the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
 *
 * @param request UpdateEventStreamingRequest
 * @return UpdateEventStreamingResponse
 */
UpdateEventStreamingResponse Client::updateEventStreaming(const UpdateEventStreamingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEventStreamingWithOptions(request, runtime);
}

/**
 * @summary 查询事件流
 *
 * @param request UpdateEventStreamingBusinessOptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateEventStreamingBusinessOptionResponse
 */
UpdateEventStreamingBusinessOptionResponse Client::updateEventStreamingBusinessOptionWithOptions(const UpdateEventStreamingBusinessOptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessMode()) {
    body["BusinessMode"] = request.businessMode();
  }

  if (!!request.hasEventStreamingName()) {
    body["EventStreamingName"] = request.eventStreamingName();
  }

  if (!!request.hasMaxCapacityUnitCount()) {
    body["MaxCapacityUnitCount"] = request.maxCapacityUnitCount();
  }

  if (!!request.hasMinCapacityUnitCount()) {
    body["MinCapacityUnitCount"] = request.minCapacityUnitCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateEventStreamingBusinessOption"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateEventStreamingBusinessOptionResponse>();
}

/**
 * @summary 查询事件流
 *
 * @param request UpdateEventStreamingBusinessOptionRequest
 * @return UpdateEventStreamingBusinessOptionResponse
 */
UpdateEventStreamingBusinessOptionResponse Client::updateEventStreamingBusinessOption(const UpdateEventStreamingBusinessOptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateEventStreamingBusinessOptionWithOptions(request, runtime);
}

/**
 * @summary Updates the configurations of an event rule.
 *
 * @description You can call this API operation to update the configurations of an event rule.
 *
 * @param request UpdateRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRuleWithOptions(const UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.description();
  }

  if (!!request.hasEventBusName()) {
    query["EventBusName"] = request.eventBusName();
  }

  if (!!request.hasFilterPattern()) {
    query["FilterPattern"] = request.filterPattern();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }));
  Params params = Params(json({
    {"action" , "UpdateRule"},
    {"version" , "2020-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }));
  return json(callApi(params, req, runtime)).get<UpdateRuleResponse>();
}

/**
 * @summary Updates the configurations of an event rule.
 *
 * @description You can call this API operation to update the configurations of an event rule.
 *
 * @param request UpdateRuleRequest
 * @return UpdateRuleResponse
 */
UpdateRuleResponse Client::updateRule(const UpdateRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRuleWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Eventbridge20200401