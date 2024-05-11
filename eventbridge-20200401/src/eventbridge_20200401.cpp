// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/eventbridge_20200401.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_Eventbridge20200401;

Alibabacloud_Eventbridge20200401::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("eventbridge"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Eventbridge20200401::Client::getEndpoint(shared_ptr<string> productId,
                                                             shared_ptr<string> regionId,
                                                             shared_ptr<string> endpointRule,
                                                             shared_ptr<string> network,
                                                             shared_ptr<string> suffix,
                                                             shared_ptr<map<string, string>> endpointMap,
                                                             shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::createApiDestinationWithOptions(shared_ptr<CreateApiDestinationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateApiDestinationShrinkRequest> request = make_shared<CreateApiDestinationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateApiDestinationRequestHttpApiParameters>(tmpReq->httpApiParameters)) {
    request->httpApiParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->httpApiParameters, make_shared<string>("HttpApiParameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiDestinationName)) {
    query->insert(pair<string, string>("ApiDestinationName", *request->apiDestinationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    query->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpApiParametersShrink)) {
    query->insert(pair<string, string>("HttpApiParameters", *request->httpApiParametersShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateApiDestination"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateApiDestinationResponse(callApi(params, req, runtime));
}

CreateApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::createApiDestination(shared_ptr<CreateApiDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createApiDestinationWithOptions(request, runtime);
}

CreateConnectionResponse Alibabacloud_Eventbridge20200401::Client::createConnectionWithOptions(shared_ptr<CreateConnectionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateConnectionShrinkRequest> request = make_shared<CreateConnectionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateConnectionRequestAuthParameters>(tmpReq->authParameters)) {
    request->authParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authParameters, make_shared<string>("AuthParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateConnectionRequestNetworkParameters>(tmpReq->networkParameters)) {
    request->networkParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->networkParameters, make_shared<string>("NetworkParameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authParametersShrink)) {
    query->insert(pair<string, string>("AuthParameters", *request->authParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    query->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkParametersShrink)) {
    query->insert(pair<string, string>("NetworkParameters", *request->networkParametersShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateConnection"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateConnectionResponse(callApi(params, req, runtime));
}

CreateConnectionResponse Alibabacloud_Eventbridge20200401::Client::createConnection(shared_ptr<CreateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createConnectionWithOptions(request, runtime);
}

CreateEventBusResponse Alibabacloud_Eventbridge20200401::Client::createEventBusWithOptions(shared_ptr<CreateEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEventBus"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventBusResponse(callApi(params, req, runtime));
}

CreateEventBusResponse Alibabacloud_Eventbridge20200401::Client::createEventBus(shared_ptr<CreateEventBusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventBusWithOptions(request, runtime);
}

CreateEventSourceResponse Alibabacloud_Eventbridge20200401::Client::createEventSourceWithOptions(shared_ptr<CreateEventSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEventSourceShrinkRequest> request = make_shared<CreateEventSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateEventSourceRequestSourceHttpEventParameters>(tmpReq->sourceHttpEventParameters)) {
    request->sourceHttpEventParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceHttpEventParameters, make_shared<string>("SourceHttpEventParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventSourceRequestSourceKafkaParameters>(tmpReq->sourceKafkaParameters)) {
    request->sourceKafkaParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceKafkaParameters, make_shared<string>("SourceKafkaParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventSourceRequestSourceMNSParameters>(tmpReq->sourceMNSParameters)) {
    request->sourceMNSParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceMNSParameters, make_shared<string>("SourceMNSParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventSourceRequestSourceRabbitMQParameters>(tmpReq->sourceRabbitMQParameters)) {
    request->sourceRabbitMQParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceRabbitMQParameters, make_shared<string>("SourceRabbitMQParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventSourceRequestSourceRocketMQParameters>(tmpReq->sourceRocketMQParameters)) {
    request->sourceRocketMQParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceRocketMQParameters, make_shared<string>("SourceRocketMQParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventSourceRequestSourceSLSParameters>(tmpReq->sourceSLSParameters)) {
    request->sourceSLSParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceSLSParameters, make_shared<string>("SourceSLSParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventSourceRequestSourceScheduledEventParameters>(tmpReq->sourceScheduledEventParameters)) {
    request->sourceScheduledEventParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceScheduledEventParameters, make_shared<string>("SourceScheduledEventParameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    body->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventSourceName)) {
    body->insert(pair<string, string>("EventSourceName", *request->eventSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceHttpEventParametersShrink)) {
    body->insert(pair<string, string>("SourceHttpEventParameters", *request->sourceHttpEventParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceKafkaParametersShrink)) {
    body->insert(pair<string, string>("SourceKafkaParameters", *request->sourceKafkaParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceMNSParametersShrink)) {
    body->insert(pair<string, string>("SourceMNSParameters", *request->sourceMNSParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRabbitMQParametersShrink)) {
    body->insert(pair<string, string>("SourceRabbitMQParameters", *request->sourceRabbitMQParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRocketMQParametersShrink)) {
    body->insert(pair<string, string>("SourceRocketMQParameters", *request->sourceRocketMQParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceSLSParametersShrink)) {
    body->insert(pair<string, string>("SourceSLSParameters", *request->sourceSLSParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceScheduledEventParametersShrink)) {
    body->insert(pair<string, string>("SourceScheduledEventParameters", *request->sourceScheduledEventParametersShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEventSource"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventSourceResponse(callApi(params, req, runtime));
}

CreateEventSourceResponse Alibabacloud_Eventbridge20200401::Client::createEventSource(shared_ptr<CreateEventSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventSourceWithOptions(request, runtime);
}

CreateEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::createEventStreamingWithOptions(shared_ptr<CreateEventStreamingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateEventStreamingShrinkRequest> request = make_shared<CreateEventStreamingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateEventStreamingRequestRunOptions>(tmpReq->runOptions)) {
    request->runOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->runOptions, make_shared<string>("RunOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventStreamingRequestSink>(tmpReq->sink)) {
    request->sinkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sink, make_shared<string>("Sink"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<CreateEventStreamingRequestSource>(tmpReq->source)) {
    request->sourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->source, make_shared<string>("Source"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateEventStreamingRequestTransforms>>(tmpReq->transforms)) {
    request->transformsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transforms, make_shared<string>("Transforms"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventStreamingName)) {
    body->insert(pair<string, string>("EventStreamingName", *request->eventStreamingName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterPattern)) {
    body->insert(pair<string, string>("FilterPattern", *request->filterPattern));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runOptionsShrink)) {
    body->insert(pair<string, string>("RunOptions", *request->runOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkShrink)) {
    body->insert(pair<string, string>("Sink", *request->sinkShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceShrink)) {
    body->insert(pair<string, string>("Source", *request->sourceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transformsShrink)) {
    body->insert(pair<string, string>("Transforms", *request->transformsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEventStreaming"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventStreamingResponse(callApi(params, req, runtime));
}

CreateEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::createEventStreaming(shared_ptr<CreateEventStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventStreamingWithOptions(request, runtime);
}

CreateRuleResponse Alibabacloud_Eventbridge20200401::Client::createRuleWithOptions(shared_ptr<CreateRuleRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateRuleShrinkRequest> request = make_shared<CreateRuleShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateRuleRequestEventTargets>>(tmpReq->eventTargets)) {
    request->eventTargetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->eventTargets, make_shared<string>("EventTargets"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTargetsShrink)) {
    query->insert(pair<string, string>("EventTargets", *request->eventTargetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterPattern)) {
    query->insert(pair<string, string>("FilterPattern", *request->filterPattern));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateRule"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateRuleResponse(callApi(params, req, runtime));
}

CreateRuleResponse Alibabacloud_Eventbridge20200401::Client::createRule(shared_ptr<CreateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createRuleWithOptions(request, runtime);
}

CreateServiceLinkedRoleForProductResponse Alibabacloud_Eventbridge20200401::Client::createServiceLinkedRoleForProductWithOptions(shared_ptr<CreateServiceLinkedRoleForProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->productName)) {
    query->insert(pair<string, string>("ProductName", *request->productName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateServiceLinkedRoleForProduct"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceLinkedRoleForProductResponse(callApi(params, req, runtime));
}

CreateServiceLinkedRoleForProductResponse Alibabacloud_Eventbridge20200401::Client::createServiceLinkedRoleForProduct(shared_ptr<CreateServiceLinkedRoleForProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createServiceLinkedRoleForProductWithOptions(request, runtime);
}

DeleteApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::deleteApiDestinationWithOptions(shared_ptr<DeleteApiDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiDestinationName)) {
    query->insert(pair<string, string>("ApiDestinationName", *request->apiDestinationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteApiDestination"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteApiDestinationResponse(callApi(params, req, runtime));
}

DeleteApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::deleteApiDestination(shared_ptr<DeleteApiDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteApiDestinationWithOptions(request, runtime);
}

DeleteConnectionResponse Alibabacloud_Eventbridge20200401::Client::deleteConnectionWithOptions(shared_ptr<DeleteConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    query->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteConnection"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteConnectionResponse(callApi(params, req, runtime));
}

DeleteConnectionResponse Alibabacloud_Eventbridge20200401::Client::deleteConnection(shared_ptr<DeleteConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteConnectionWithOptions(request, runtime);
}

DeleteEventBusResponse Alibabacloud_Eventbridge20200401::Client::deleteEventBusWithOptions(shared_ptr<DeleteEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventBus"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventBusResponse(callApi(params, req, runtime));
}

DeleteEventBusResponse Alibabacloud_Eventbridge20200401::Client::deleteEventBus(shared_ptr<DeleteEventBusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventBusWithOptions(request, runtime);
}

DeleteEventSourceResponse Alibabacloud_Eventbridge20200401::Client::deleteEventSourceWithOptions(shared_ptr<DeleteEventSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    body->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventSourceName)) {
    body->insert(pair<string, string>("EventSourceName", *request->eventSourceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventSource"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventSourceResponse(callApi(params, req, runtime));
}

DeleteEventSourceResponse Alibabacloud_Eventbridge20200401::Client::deleteEventSource(shared_ptr<DeleteEventSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventSourceWithOptions(request, runtime);
}

DeleteEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::deleteEventStreamingWithOptions(shared_ptr<DeleteEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventStreamingName)) {
    body->insert(pair<string, string>("EventStreamingName", *request->eventStreamingName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventStreaming"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventStreamingResponse(callApi(params, req, runtime));
}

DeleteEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::deleteEventStreaming(shared_ptr<DeleteEventStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventStreamingWithOptions(request, runtime);
}

DeleteRuleResponse Alibabacloud_Eventbridge20200401::Client::deleteRuleWithOptions(shared_ptr<DeleteRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRule"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRuleResponse(callApi(params, req, runtime));
}

DeleteRuleResponse Alibabacloud_Eventbridge20200401::Client::deleteRule(shared_ptr<DeleteRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRuleWithOptions(request, runtime);
}

DeleteTargetsResponse Alibabacloud_Eventbridge20200401::Client::deleteTargetsWithOptions(shared_ptr<DeleteTargetsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteTargetsShrinkRequest> request = make_shared<DeleteTargetsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->targetIds)) {
    request->targetIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->targetIds, make_shared<string>("TargetIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetIdsShrink)) {
    query->insert(pair<string, string>("TargetIds", *request->targetIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTargets"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTargetsResponse(callApi(params, req, runtime));
}

DeleteTargetsResponse Alibabacloud_Eventbridge20200401::Client::deleteTargets(shared_ptr<DeleteTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTargetsWithOptions(request, runtime);
}

DisableRuleResponse Alibabacloud_Eventbridge20200401::Client::disableRuleWithOptions(shared_ptr<DisableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableRule"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableRuleResponse(callApi(params, req, runtime));
}

DisableRuleResponse Alibabacloud_Eventbridge20200401::Client::disableRule(shared_ptr<DisableRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableRuleWithOptions(request, runtime);
}

EnableRuleResponse Alibabacloud_Eventbridge20200401::Client::enableRuleWithOptions(shared_ptr<EnableRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableRule"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableRuleResponse(callApi(params, req, runtime));
}

EnableRuleResponse Alibabacloud_Eventbridge20200401::Client::enableRule(shared_ptr<EnableRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableRuleWithOptions(request, runtime);
}

EventCenterCheckEnabledOnDefaultBusResponse Alibabacloud_Eventbridge20200401::Client::eventCenterCheckEnabledOnDefaultBusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EventCenterCheckEnabledOnDefaultBus"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EventCenterCheckEnabledOnDefaultBusResponse(callApi(params, req, runtime));
}

EventCenterCheckEnabledOnDefaultBusResponse Alibabacloud_Eventbridge20200401::Client::eventCenterCheckEnabledOnDefaultBus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return eventCenterCheckEnabledOnDefaultBusWithOptions(runtime);
}

EventCenterDisableOnDefaultBusResponse Alibabacloud_Eventbridge20200401::Client::eventCenterDisableOnDefaultBusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EventCenterDisableOnDefaultBus"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EventCenterDisableOnDefaultBusResponse(callApi(params, req, runtime));
}

EventCenterDisableOnDefaultBusResponse Alibabacloud_Eventbridge20200401::Client::eventCenterDisableOnDefaultBus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return eventCenterDisableOnDefaultBusWithOptions(runtime);
}

EventCenterEnableOnDefaultBusResponse Alibabacloud_Eventbridge20200401::Client::eventCenterEnableOnDefaultBusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EventCenterEnableOnDefaultBus"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EventCenterEnableOnDefaultBusResponse(callApi(params, req, runtime));
}

EventCenterEnableOnDefaultBusResponse Alibabacloud_Eventbridge20200401::Client::eventCenterEnableOnDefaultBus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return eventCenterEnableOnDefaultBusWithOptions(runtime);
}

EventCenterQueryEventsResponse Alibabacloud_Eventbridge20200401::Client::eventCenterQueryEventsWithOptions(shared_ptr<EventCenterQueryEventsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<EventCenterQueryEventsShrinkRequest> request = make_shared<EventCenterQueryEventsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<EventCenterQueryEventsRequestBody>(tmpReq->body)) {
    request->bodyShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->body, make_shared<string>("Body"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->busName)) {
    query->insert(pair<string, string>("BusName", *request->busName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bodyShrink)) {
    body->insert(pair<string, string>("Body", *request->bodyShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EventCenterQueryEvents"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EventCenterQueryEventsResponse(callApi(params, req, runtime));
}

EventCenterQueryEventsResponse Alibabacloud_Eventbridge20200401::Client::eventCenterQueryEvents(shared_ptr<EventCenterQueryEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return eventCenterQueryEventsWithOptions(request, runtime);
}

GetApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::getApiDestinationWithOptions(shared_ptr<GetApiDestinationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiDestinationName)) {
    query->insert(pair<string, string>("ApiDestinationName", *request->apiDestinationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetApiDestination"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetApiDestinationResponse(callApi(params, req, runtime));
}

GetApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::getApiDestination(shared_ptr<GetApiDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getApiDestinationWithOptions(request, runtime);
}

GetConnectionResponse Alibabacloud_Eventbridge20200401::Client::getConnectionWithOptions(shared_ptr<GetConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    query->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConnection"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConnectionResponse(callApi(params, req, runtime));
}

GetConnectionResponse Alibabacloud_Eventbridge20200401::Client::getConnection(shared_ptr<GetConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectionWithOptions(request, runtime);
}

GetEventBusResponse Alibabacloud_Eventbridge20200401::Client::getEventBusWithOptions(shared_ptr<GetEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventBus"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventBusResponse(callApi(params, req, runtime));
}

GetEventBusResponse Alibabacloud_Eventbridge20200401::Client::getEventBus(shared_ptr<GetEventBusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventBusWithOptions(request, runtime);
}

GetEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::getEventStreamingWithOptions(shared_ptr<GetEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventStreamingName)) {
    body->insert(pair<string, string>("EventStreamingName", *request->eventStreamingName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventStreaming"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventStreamingResponse(callApi(params, req, runtime));
}

GetEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::getEventStreaming(shared_ptr<GetEventStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventStreamingWithOptions(request, runtime);
}

GetRuleResponse Alibabacloud_Eventbridge20200401::Client::getRuleWithOptions(shared_ptr<GetRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRule"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRuleResponse(callApi(params, req, runtime));
}

GetRuleResponse Alibabacloud_Eventbridge20200401::Client::getRule(shared_ptr<GetRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRuleWithOptions(request, runtime);
}

ListAliyunOfficialEventSourcesResponse Alibabacloud_Eventbridge20200401::Client::listAliyunOfficialEventSourcesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAliyunOfficialEventSources"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAliyunOfficialEventSourcesResponse(callApi(params, req, runtime));
}

ListAliyunOfficialEventSourcesResponse Alibabacloud_Eventbridge20200401::Client::listAliyunOfficialEventSources() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAliyunOfficialEventSourcesWithOptions(runtime);
}

ListApiDestinationsResponse Alibabacloud_Eventbridge20200401::Client::listApiDestinationsWithOptions(shared_ptr<ListApiDestinationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiDestinationNamePrefix)) {
    query->insert(pair<string, string>("ApiDestinationNamePrefix", *request->apiDestinationNamePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    query->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApiDestinations"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApiDestinationsResponse(callApi(params, req, runtime));
}

ListApiDestinationsResponse Alibabacloud_Eventbridge20200401::Client::listApiDestinations(shared_ptr<ListApiDestinationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApiDestinationsWithOptions(request, runtime);
}

ListConnectionsResponse Alibabacloud_Eventbridge20200401::Client::listConnectionsWithOptions(shared_ptr<ListConnectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionNamePrefix)) {
    body->insert(pair<string, string>("ConnectionNamePrefix", *request->connectionNamePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConnections"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConnectionsResponse(callApi(params, req, runtime));
}

ListConnectionsResponse Alibabacloud_Eventbridge20200401::Client::listConnections(shared_ptr<ListConnectionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConnectionsWithOptions(request, runtime);
}

ListEventBusesResponse Alibabacloud_Eventbridge20200401::Client::listEventBusesWithOptions(shared_ptr<ListEventBusesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namePrefix)) {
    query->insert(pair<string, string>("NamePrefix", *request->namePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventBuses"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventBusesResponse(callApi(params, req, runtime));
}

ListEventBusesResponse Alibabacloud_Eventbridge20200401::Client::listEventBuses(shared_ptr<ListEventBusesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventBusesWithOptions(request, runtime);
}

ListEventStreamingsResponse Alibabacloud_Eventbridge20200401::Client::listEventStreamingsWithOptions(shared_ptr<ListEventStreamingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namePrefix)) {
    body->insert(pair<string, string>("NamePrefix", *request->namePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkArn)) {
    body->insert(pair<string, string>("SinkArn", *request->sinkArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceArn)) {
    body->insert(pair<string, string>("SourceArn", *request->sourceArn));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventStreamings"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventStreamingsResponse(callApi(params, req, runtime));
}

ListEventStreamingsResponse Alibabacloud_Eventbridge20200401::Client::listEventStreamings(shared_ptr<ListEventStreamingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventStreamingsWithOptions(request, runtime);
}

ListRulesResponse Alibabacloud_Eventbridge20200401::Client::listRulesWithOptions(shared_ptr<ListRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleNamePrefix)) {
    query->insert(pair<string, string>("RuleNamePrefix", *request->ruleNamePrefix));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRules"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRulesResponse(callApi(params, req, runtime));
}

ListRulesResponse Alibabacloud_Eventbridge20200401::Client::listRules(shared_ptr<ListRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRulesWithOptions(request, runtime);
}

ListTargetsResponse Alibabacloud_Eventbridge20200401::Client::listTargetsWithOptions(shared_ptr<ListTargetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->arn)) {
    query->insert(pair<string, string>("Arn", *request->arn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTargets"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTargetsResponse(callApi(params, req, runtime));
}

ListTargetsResponse Alibabacloud_Eventbridge20200401::Client::listTargets(shared_ptr<ListTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTargetsWithOptions(request, runtime);
}

ListUserDefinedEventSourcesResponse Alibabacloud_Eventbridge20200401::Client::listUserDefinedEventSourcesWithOptions(shared_ptr<ListUserDefinedEventSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->namePrefix)) {
    query->insert(pair<string, string>("NamePrefix", *request->namePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListUserDefinedEventSources"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListUserDefinedEventSourcesResponse(callApi(params, req, runtime));
}

ListUserDefinedEventSourcesResponse Alibabacloud_Eventbridge20200401::Client::listUserDefinedEventSources(shared_ptr<ListUserDefinedEventSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listUserDefinedEventSourcesWithOptions(request, runtime);
}

PauseEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::pauseEventStreamingWithOptions(shared_ptr<PauseEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventStreamingName)) {
    body->insert(pair<string, string>("EventStreamingName", *request->eventStreamingName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PauseEventStreaming"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PauseEventStreamingResponse(callApi(params, req, runtime));
}

PauseEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::pauseEventStreaming(shared_ptr<PauseEventStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return pauseEventStreamingWithOptions(request, runtime);
}

PutTargetsResponse Alibabacloud_Eventbridge20200401::Client::putTargetsWithOptions(shared_ptr<PutTargetsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<PutTargetsShrinkRequest> request = make_shared<PutTargetsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<PutTargetsRequestTargets>>(tmpReq->targets)) {
    request->targetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->targets, make_shared<string>("Targets"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetsShrink)) {
    query->insert(pair<string, string>("Targets", *request->targetsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutTargets"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutTargetsResponse(callApi(params, req, runtime));
}

PutTargetsResponse Alibabacloud_Eventbridge20200401::Client::putTargets(shared_ptr<PutTargetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putTargetsWithOptions(request, runtime);
}

QueryEventResponse Alibabacloud_Eventbridge20200401::Client::queryEventWithOptions(shared_ptr<QueryEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventSource)) {
    query->insert(pair<string, string>("EventSource", *request->eventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEvent"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEventResponse(callApi(params, req, runtime));
}

QueryEventResponse Alibabacloud_Eventbridge20200401::Client::queryEvent(shared_ptr<QueryEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEventWithOptions(request, runtime);
}

QueryEventTracesResponse Alibabacloud_Eventbridge20200401::Client::queryEventTracesWithOptions(shared_ptr<QueryEventTracesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryEventTraces"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryEventTracesResponse(callApi(params, req, runtime));
}

QueryEventTracesResponse Alibabacloud_Eventbridge20200401::Client::queryEventTraces(shared_ptr<QueryEventTracesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryEventTracesWithOptions(request, runtime);
}

QueryTracedEventByEventIdResponse Alibabacloud_Eventbridge20200401::Client::queryTracedEventByEventIdWithOptions(shared_ptr<QueryTracedEventByEventIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventSource)) {
    query->insert(pair<string, string>("EventSource", *request->eventSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTracedEventByEventId"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTracedEventByEventIdResponse(callApi(params, req, runtime));
}

QueryTracedEventByEventIdResponse Alibabacloud_Eventbridge20200401::Client::queryTracedEventByEventId(shared_ptr<QueryTracedEventByEventIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTracedEventByEventIdWithOptions(request, runtime);
}

QueryTracedEventsResponse Alibabacloud_Eventbridge20200401::Client::queryTracedEventsWithOptions(shared_ptr<QueryTracedEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventSource)) {
    query->insert(pair<string, string>("EventSource", *request->eventSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventType)) {
    query->insert(pair<string, string>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->matchedRule)) {
    query->insert(pair<string, string>("MatchedRule", *request->matchedRule));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTracedEvents"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryTracedEventsResponse(callApi(params, req, runtime));
}

QueryTracedEventsResponse Alibabacloud_Eventbridge20200401::Client::queryTracedEvents(shared_ptr<QueryTracedEventsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTracedEventsWithOptions(request, runtime);
}

StartEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::startEventStreamingWithOptions(shared_ptr<StartEventStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventStreamingName)) {
    body->insert(pair<string, string>("EventStreamingName", *request->eventStreamingName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartEventStreaming"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartEventStreamingResponse(callApi(params, req, runtime));
}

StartEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::startEventStreaming(shared_ptr<StartEventStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startEventStreamingWithOptions(request, runtime);
}

TestEventPatternResponse Alibabacloud_Eventbridge20200401::Client::testEventPatternWithOptions(shared_ptr<TestEventPatternRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->event)) {
    body->insert(pair<string, string>("Event", *request->event));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventPattern)) {
    body->insert(pair<string, string>("EventPattern", *request->eventPattern));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TestEventPattern"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TestEventPatternResponse(callApi(params, req, runtime));
}

TestEventPatternResponse Alibabacloud_Eventbridge20200401::Client::testEventPattern(shared_ptr<TestEventPatternRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return testEventPatternWithOptions(request, runtime);
}

UpdateApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::updateApiDestinationWithOptions(shared_ptr<UpdateApiDestinationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateApiDestinationShrinkRequest> request = make_shared<UpdateApiDestinationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateApiDestinationRequestHttpApiParameters>(tmpReq->httpApiParameters)) {
    request->httpApiParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->httpApiParameters, make_shared<string>("HttpApiParameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiDestinationName)) {
    query->insert(pair<string, string>("ApiDestinationName", *request->apiDestinationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    query->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpApiParametersShrink)) {
    query->insert(pair<string, string>("HttpApiParameters", *request->httpApiParametersShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateApiDestination"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateApiDestinationResponse(callApi(params, req, runtime));
}

UpdateApiDestinationResponse Alibabacloud_Eventbridge20200401::Client::updateApiDestination(shared_ptr<UpdateApiDestinationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateApiDestinationWithOptions(request, runtime);
}

UpdateConnectionResponse Alibabacloud_Eventbridge20200401::Client::updateConnectionWithOptions(shared_ptr<UpdateConnectionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateConnectionShrinkRequest> request = make_shared<UpdateConnectionShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateConnectionRequestAuthParameters>(tmpReq->authParameters)) {
    request->authParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->authParameters, make_shared<string>("AuthParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateConnectionRequestNetworkParameters>(tmpReq->networkParameters)) {
    request->networkParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->networkParameters, make_shared<string>("NetworkParameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authParametersShrink)) {
    query->insert(pair<string, string>("AuthParameters", *request->authParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionName)) {
    query->insert(pair<string, string>("ConnectionName", *request->connectionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->networkParametersShrink)) {
    query->insert(pair<string, string>("NetworkParameters", *request->networkParametersShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConnection"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConnectionResponse(callApi(params, req, runtime));
}

UpdateConnectionResponse Alibabacloud_Eventbridge20200401::Client::updateConnection(shared_ptr<UpdateConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConnectionWithOptions(request, runtime);
}

UpdateEventBusResponse Alibabacloud_Eventbridge20200401::Client::updateEventBusWithOptions(shared_ptr<UpdateEventBusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEventBus"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEventBusResponse(callApi(params, req, runtime));
}

UpdateEventBusResponse Alibabacloud_Eventbridge20200401::Client::updateEventBus(shared_ptr<UpdateEventBusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEventBusWithOptions(request, runtime);
}

UpdateEventSourceResponse Alibabacloud_Eventbridge20200401::Client::updateEventSourceWithOptions(shared_ptr<UpdateEventSourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEventSourceShrinkRequest> request = make_shared<UpdateEventSourceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateEventSourceRequestSourceHttpEventParameters>(tmpReq->sourceHttpEventParameters)) {
    request->sourceHttpEventParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceHttpEventParameters, make_shared<string>("SourceHttpEventParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventSourceRequestSourceKafkaParameters>(tmpReq->sourceKafkaParameters)) {
    request->sourceKafkaParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceKafkaParameters, make_shared<string>("SourceKafkaParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventSourceRequestSourceMNSParameters>(tmpReq->sourceMNSParameters)) {
    request->sourceMNSParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceMNSParameters, make_shared<string>("SourceMNSParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventSourceRequestSourceRabbitMQParameters>(tmpReq->sourceRabbitMQParameters)) {
    request->sourceRabbitMQParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceRabbitMQParameters, make_shared<string>("SourceRabbitMQParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventSourceRequestSourceRocketMQParameters>(tmpReq->sourceRocketMQParameters)) {
    request->sourceRocketMQParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceRocketMQParameters, make_shared<string>("SourceRocketMQParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventSourceRequestSourceSLSParameters>(tmpReq->sourceSLSParameters)) {
    request->sourceSLSParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceSLSParameters, make_shared<string>("SourceSLSParameters"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventSourceRequestSourceScheduledEventParameters>(tmpReq->sourceScheduledEventParameters)) {
    request->sourceScheduledEventParametersShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceScheduledEventParameters, make_shared<string>("SourceScheduledEventParameters"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    body->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventSourceName)) {
    body->insert(pair<string, string>("EventSourceName", *request->eventSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceHttpEventParametersShrink)) {
    body->insert(pair<string, string>("SourceHttpEventParameters", *request->sourceHttpEventParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceKafkaParametersShrink)) {
    body->insert(pair<string, string>("SourceKafkaParameters", *request->sourceKafkaParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceMNSParametersShrink)) {
    body->insert(pair<string, string>("SourceMNSParameters", *request->sourceMNSParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRabbitMQParametersShrink)) {
    body->insert(pair<string, string>("SourceRabbitMQParameters", *request->sourceRabbitMQParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceRocketMQParametersShrink)) {
    body->insert(pair<string, string>("SourceRocketMQParameters", *request->sourceRocketMQParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceSLSParametersShrink)) {
    body->insert(pair<string, string>("SourceSLSParameters", *request->sourceSLSParametersShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceScheduledEventParametersShrink)) {
    body->insert(pair<string, string>("SourceScheduledEventParameters", *request->sourceScheduledEventParametersShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEventSource"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEventSourceResponse(callApi(params, req, runtime));
}

UpdateEventSourceResponse Alibabacloud_Eventbridge20200401::Client::updateEventSource(shared_ptr<UpdateEventSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEventSourceWithOptions(request, runtime);
}

UpdateEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::updateEventStreamingWithOptions(shared_ptr<UpdateEventStreamingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateEventStreamingShrinkRequest> request = make_shared<UpdateEventStreamingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateEventStreamingRequestRunOptions>(tmpReq->runOptions)) {
    request->runOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->runOptions, make_shared<string>("RunOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventStreamingRequestSink>(tmpReq->sink)) {
    request->sinkShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sink, make_shared<string>("Sink"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateEventStreamingRequestSource>(tmpReq->source)) {
    request->sourceShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->source, make_shared<string>("Source"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateEventStreamingRequestTransforms>>(tmpReq->transforms)) {
    request->transformsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transforms, make_shared<string>("Transforms"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventStreamingName)) {
    body->insert(pair<string, string>("EventStreamingName", *request->eventStreamingName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterPattern)) {
    body->insert(pair<string, string>("FilterPattern", *request->filterPattern));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runOptionsShrink)) {
    body->insert(pair<string, string>("RunOptions", *request->runOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sinkShrink)) {
    body->insert(pair<string, string>("Sink", *request->sinkShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceShrink)) {
    body->insert(pair<string, string>("Source", *request->sourceShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transformsShrink)) {
    body->insert(pair<string, string>("Transforms", *request->transformsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEventStreaming"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEventStreamingResponse(callApi(params, req, runtime));
}

UpdateEventStreamingResponse Alibabacloud_Eventbridge20200401::Client::updateEventStreaming(shared_ptr<UpdateEventStreamingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEventStreamingWithOptions(request, runtime);
}

UpdateRuleResponse Alibabacloud_Eventbridge20200401::Client::updateRuleWithOptions(shared_ptr<UpdateRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventBusName)) {
    query->insert(pair<string, string>("EventBusName", *request->eventBusName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterPattern)) {
    query->insert(pair<string, string>("FilterPattern", *request->filterPattern));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRule"))},
    {"version", boost::any(string("2020-04-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRuleResponse(callApi(params, req, runtime));
}

UpdateRuleResponse Alibabacloud_Eventbridge20200401::Client::updateRule(shared_ptr<UpdateRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRuleWithOptions(request, runtime);
}

