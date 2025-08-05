// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EVENTBRIDGE20200401_HPP_
#define ALIBABACLOUD_EVENTBRIDGE20200401_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Eventbridge20200401Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Eventbridge20200401.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 检查账号是否存在ServiceLinkedRole授权
       *
       * @param request CheckServiceLinkedRoleForProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckServiceLinkedRoleForProductResponse
       */
      Models::CheckServiceLinkedRoleForProductResponse checkServiceLinkedRoleForProductWithOptions(const Models::CheckServiceLinkedRoleForProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查账号是否存在ServiceLinkedRole授权
       *
       * @param request CheckServiceLinkedRoleForProductRequest
       * @return CheckServiceLinkedRoleForProductResponse
       */
      Models::CheckServiceLinkedRoleForProductResponse checkServiceLinkedRoleForProduct(const Models::CheckServiceLinkedRoleForProductRequest &request);

      /**
       * @summary Creates an API destination.
       *
       * @description You can call this API operation to create an API destination.
       *
       * @param tmpReq CreateApiDestinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiDestinationResponse
       */
      Models::CreateApiDestinationResponse createApiDestinationWithOptions(const Models::CreateApiDestinationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API destination.
       *
       * @description You can call this API operation to create an API destination.
       *
       * @param request CreateApiDestinationRequest
       * @return CreateApiDestinationResponse
       */
      Models::CreateApiDestinationResponse createApiDestination(const Models::CreateApiDestinationRequest &request);

      /**
       * @summary Creates a connection.
       *
       * @description You can call this API operation to create a connection.
       *
       * @param tmpReq CreateConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConnectionResponse
       */
      Models::CreateConnectionResponse createConnectionWithOptions(const Models::CreateConnectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a connection.
       *
       * @description You can call this API operation to create a connection.
       *
       * @param request CreateConnectionRequest
       * @return CreateConnectionResponse
       */
      Models::CreateConnectionResponse createConnection(const Models::CreateConnectionRequest &request);

      /**
       * @summary Creates an event bus.
       *
       * @description Creates an event bus.
       *
       * @param request CreateEventBusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventBusResponse
       */
      Models::CreateEventBusResponse createEventBusWithOptions(const Models::CreateEventBusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an event bus.
       *
       * @description Creates an event bus.
       *
       * @param request CreateEventBusRequest
       * @return CreateEventBusResponse
       */
      Models::CreateEventBusResponse createEventBus(const Models::CreateEventBusRequest &request);

      /**
       * @summary Creates an event source.
       *
       * @description You can call this operation to create an event source.
       *
       * @param tmpReq CreateEventSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventSourceResponse
       */
      Models::CreateEventSourceResponse createEventSourceWithOptions(const Models::CreateEventSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an event source.
       *
       * @description You can call this operation to create an event source.
       *
       * @param request CreateEventSourceRequest
       * @return CreateEventSourceResponse
       */
      Models::CreateEventSourceResponse createEventSource(const Models::CreateEventSourceRequest &request);

      /**
       * @summary Creates an event stream.
       *
       * @description You can call this API operation to create an event stream.
       *
       * @param tmpReq CreateEventStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateEventStreamingResponse
       */
      Models::CreateEventStreamingResponse createEventStreamingWithOptions(const Models::CreateEventStreamingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an event stream.
       *
       * @description You can call this API operation to create an event stream.
       *
       * @param request CreateEventStreamingRequest
       * @return CreateEventStreamingResponse
       */
      Models::CreateEventStreamingResponse createEventStreaming(const Models::CreateEventStreamingRequest &request);

      /**
       * @summary Creates an event rule.
       *
       * @description You can call this API operation to create an event rule.
       *
       * @param tmpReq CreateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRuleWithOptions(const Models::CreateRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an event rule.
       *
       * @description You can call this API operation to create an event rule.
       *
       * @param request CreateRuleRequest
       * @return CreateRuleResponse
       */
      Models::CreateRuleResponse createRule(const Models::CreateRuleRequest &request);

      /**
       * @summary Creates a service-linked role for your cloud service.
       *
       * @description You can call this API operation to create a service-linked role for your cloud service.
       *
       * @param request CreateServiceLinkedRoleForProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleForProductResponse
       */
      Models::CreateServiceLinkedRoleForProductResponse createServiceLinkedRoleForProductWithOptions(const Models::CreateServiceLinkedRoleForProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role for your cloud service.
       *
       * @description You can call this API operation to create a service-linked role for your cloud service.
       *
       * @param request CreateServiceLinkedRoleForProductRequest
       * @return CreateServiceLinkedRoleForProductResponse
       */
      Models::CreateServiceLinkedRoleForProductResponse createServiceLinkedRoleForProduct(const Models::CreateServiceLinkedRoleForProductRequest &request);

      /**
       * @summary Deletes an API destination.
       *
       * @description You can call this API operation to delete an API destination.
       *
       * @param request DeleteApiDestinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiDestinationResponse
       */
      Models::DeleteApiDestinationResponse deleteApiDestinationWithOptions(const Models::DeleteApiDestinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an API destination.
       *
       * @description You can call this API operation to delete an API destination.
       *
       * @param request DeleteApiDestinationRequest
       * @return DeleteApiDestinationResponse
       */
      Models::DeleteApiDestinationResponse deleteApiDestination(const Models::DeleteApiDestinationRequest &request);

      /**
       * @summary Deletes a connection.
       *
       * @description You can call this API operation to delete a connection.
       *
       * @param request DeleteConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnectionWithOptions(const Models::DeleteConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a connection.
       *
       * @description You can call this API operation to delete a connection.
       *
       * @param request DeleteConnectionRequest
       * @return DeleteConnectionResponse
       */
      Models::DeleteConnectionResponse deleteConnection(const Models::DeleteConnectionRequest &request);

      /**
       * @summary Deletes an event bus.
       *
       * @description You can call this API operation to delete an event bus.
       *
       * @param request DeleteEventBusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventBusResponse
       */
      Models::DeleteEventBusResponse deleteEventBusWithOptions(const Models::DeleteEventBusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event bus.
       *
       * @description You can call this API operation to delete an event bus.
       *
       * @param request DeleteEventBusRequest
       * @return DeleteEventBusResponse
       */
      Models::DeleteEventBusResponse deleteEventBus(const Models::DeleteEventBusRequest &request);

      /**
       * @summary Deletes an event source.
       *
       * @description You can call this API operation to delete an event source.
       *
       * @param request DeleteEventSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventSourceResponse
       */
      Models::DeleteEventSourceResponse deleteEventSourceWithOptions(const Models::DeleteEventSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event source.
       *
       * @description You can call this API operation to delete an event source.
       *
       * @param request DeleteEventSourceRequest
       * @return DeleteEventSourceResponse
       */
      Models::DeleteEventSourceResponse deleteEventSource(const Models::DeleteEventSourceRequest &request);

      /**
       * @summary Deletes an event stream.
       *
       * @description You can call this API operation to delete an event stream.
       *
       * @param request DeleteEventStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventStreamingResponse
       */
      Models::DeleteEventStreamingResponse deleteEventStreamingWithOptions(const Models::DeleteEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event stream.
       *
       * @description You can call this API operation to delete an event stream.
       *
       * @param request DeleteEventStreamingRequest
       * @return DeleteEventStreamingResponse
       */
      Models::DeleteEventStreamingResponse deleteEventStreaming(const Models::DeleteEventStreamingRequest &request);

      /**
       * @summary Deletes an event rule.
       *
       * @description You can call this API operation to delete an event rule.
       *
       * @param request DeleteRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRuleWithOptions(const Models::DeleteRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an event rule.
       *
       * @description You can call this API operation to delete an event rule.
       *
       * @param request DeleteRuleRequest
       * @return DeleteRuleResponse
       */
      Models::DeleteRuleResponse deleteRule(const Models::DeleteRuleRequest &request);

      /**
       * @summary Deletes one or more event targets of an event rule.
       *
       * @description You can call this API operation to delete one or more event targets of an event rule.
       *
       * @param tmpReq DeleteTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTargetsResponse
       */
      Models::DeleteTargetsResponse deleteTargetsWithOptions(const Models::DeleteTargetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more event targets of an event rule.
       *
       * @description You can call this API operation to delete one or more event targets of an event rule.
       *
       * @param request DeleteTargetsRequest
       * @return DeleteTargetsResponse
       */
      Models::DeleteTargetsResponse deleteTargets(const Models::DeleteTargetsRequest &request);

      /**
       * @summary Disables an event rule.
       *
       * @description You can call this API operation to disable an event rule.
       *
       * @param request DisableRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableRuleResponse
       */
      Models::DisableRuleResponse disableRuleWithOptions(const Models::DisableRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an event rule.
       *
       * @description You can call this API operation to disable an event rule.
       *
       * @param request DisableRuleRequest
       * @return DisableRuleResponse
       */
      Models::DisableRuleResponse disableRule(const Models::DisableRuleRequest &request);

      /**
       * @summary 发现EventSource(例如：Mysql)的Schema和SimpleData
       *
       * @param tmpReq DiscoverEventSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DiscoverEventSourceResponse
       */
      Models::DiscoverEventSourceResponse discoverEventSourceWithOptions(const Models::DiscoverEventSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发现EventSource(例如：Mysql)的Schema和SimpleData
       *
       * @param request DiscoverEventSourceRequest
       * @return DiscoverEventSourceResponse
       */
      Models::DiscoverEventSourceResponse discoverEventSource(const Models::DiscoverEventSourceRequest &request);

      /**
       * @summary Enables an event rule.
       *
       * @description You can call this API operation to enable an event rule.
       *
       * @param request EnableRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRuleResponse
       */
      Models::EnableRuleResponse enableRuleWithOptions(const Models::EnableRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an event rule.
       *
       * @description You can call this API operation to enable an event rule.
       *
       * @param request EnableRuleRequest
       * @return EnableRuleResponse
       */
      Models::EnableRuleResponse enableRule(const Models::EnableRuleRequest &request);

      /**
       * @summary EventCenterQueryEvents
       *
       * @param tmpReq EventCenterQueryEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EventCenterQueryEventsResponse
       */
      Models::EventCenterQueryEventsResponse eventCenterQueryEventsWithOptions(const Models::EventCenterQueryEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary EventCenterQueryEvents
       *
       * @param request EventCenterQueryEventsRequest
       * @return EventCenterQueryEventsResponse
       */
      Models::EventCenterQueryEventsResponse eventCenterQueryEvents(const Models::EventCenterQueryEventsRequest &request);

      /**
       * @summary Queries the information about an API destination.
       *
       * @description You can call this API operation to query the information about an API destination.
       *
       * @param request GetApiDestinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiDestinationResponse
       */
      Models::GetApiDestinationResponse getApiDestinationWithOptions(const Models::GetApiDestinationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an API destination.
       *
       * @description You can call this API operation to query the information about an API destination.
       *
       * @param request GetApiDestinationRequest
       * @return GetApiDestinationResponse
       */
      Models::GetApiDestinationResponse getApiDestination(const Models::GetApiDestinationRequest &request);

      /**
       * @summary Queries the configurations of a connection.
       *
       * @description You can call this API operation to query the configurations of a connection.
       *
       * @param request GetConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConnectionResponse
       */
      Models::GetConnectionResponse getConnectionWithOptions(const Models::GetConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a connection.
       *
       * @description You can call this API operation to query the configurations of a connection.
       *
       * @param request GetConnectionRequest
       * @return GetConnectionResponse
       */
      Models::GetConnectionResponse getConnection(const Models::GetConnectionRequest &request);

      /**
       * @summary Queries the detailed information about an event bus.
       *
       * @description You can call this API operation to query the detailed information about an event bus.
       *
       * @param request GetEventBusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventBusResponse
       */
      Models::GetEventBusResponse getEventBusWithOptions(const Models::GetEventBusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about an event bus.
       *
       * @description You can call this API operation to query the detailed information about an event bus.
       *
       * @param request GetEventBusRequest
       * @return GetEventBusResponse
       */
      Models::GetEventBusResponse getEventBus(const Models::GetEventBusRequest &request);

      /**
       * @summary Queries the details of an event stream.
       *
       * @description You can call this API operation to query the details of an event stream.
       *
       * @param request GetEventStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEventStreamingResponse
       */
      Models::GetEventStreamingResponse getEventStreamingWithOptions(const Models::GetEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an event stream.
       *
       * @description You can call this API operation to query the details of an event stream.
       *
       * @param request GetEventStreamingRequest
       * @return GetEventStreamingResponse
       */
      Models::GetEventStreamingResponse getEventStreaming(const Models::GetEventStreamingRequest &request);

      /**
       * @summary Queries the details of an event rule.
       *
       * @description You can call this API operation to query the details of an event rule.
       *
       * @param request GetRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRuleWithOptions(const Models::GetRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an event rule.
       *
       * @description You can call this API operation to query the details of an event rule.
       *
       * @param request GetRuleRequest
       * @return GetRuleResponse
       */
      Models::GetRuleResponse getRule(const Models::GetRuleRequest &request);

      /**
       * @summary Queries all Alibaba Cloud service event sources.
       *
       * @description You can call this API operation to query all Alibaba Cloud service event sources.
       *
       * @param request ListAliyunOfficialEventSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAliyunOfficialEventSourcesResponse
       */
      Models::ListAliyunOfficialEventSourcesResponse listAliyunOfficialEventSourcesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Alibaba Cloud service event sources.
       *
       * @description You can call this API operation to query all Alibaba Cloud service event sources.
       *
       * @return ListAliyunOfficialEventSourcesResponse
       */
      Models::ListAliyunOfficialEventSourcesResponse listAliyunOfficialEventSources();

      /**
       * @summary Queries a list of API destinations.
       *
       * @description You can use this API operation to query a list of API destinations.
       *
       * @param request ListApiDestinationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiDestinationsResponse
       */
      Models::ListApiDestinationsResponse listApiDestinationsWithOptions(const Models::ListApiDestinationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of API destinations.
       *
       * @description You can use this API operation to query a list of API destinations.
       *
       * @param request ListApiDestinationsRequest
       * @return ListApiDestinationsResponse
       */
      Models::ListApiDestinationsResponse listApiDestinations(const Models::ListApiDestinationsRequest &request);

      /**
       * @summary Queries connections.
       *
       * @description You can call this API operation to query connections.
       *
       * @param request ListConnectionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnectionsWithOptions(const Models::ListConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries connections.
       *
       * @description You can call this API operation to query connections.
       *
       * @param request ListConnectionsRequest
       * @return ListConnectionsResponse
       */
      Models::ListConnectionsResponse listConnections(const Models::ListConnectionsRequest &request);

      /**
       * @summary Queries all event buses.
       *
       * @description You can call this API operation to query all event buses.
       *
       * @param request ListEventBusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventBusesResponse
       */
      Models::ListEventBusesResponse listEventBusesWithOptions(const Models::ListEventBusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all event buses.
       *
       * @description You can call this API operation to query all event buses.
       *
       * @param request ListEventBusesRequest
       * @return ListEventBusesResponse
       */
      Models::ListEventBusesResponse listEventBuses(const Models::ListEventBusesRequest &request);

      /**
       * @summary Queries event streams.
       *
       * @description You can call this API operation to query event streams.
       *
       * @param request ListEventStreamingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventStreamingsResponse
       */
      Models::ListEventStreamingsResponse listEventStreamingsWithOptions(const Models::ListEventStreamingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event streams.
       *
       * @description You can call this API operation to query event streams.
       *
       * @param request ListEventStreamingsRequest
       * @return ListEventStreamingsResponse
       */
      Models::ListEventStreamingsResponse listEventStreamings(const Models::ListEventStreamingsRequest &request);

      /**
       * @summary Queries all rules of an event bus.
       *
       * @description You can call this API operation to query all rules of an event bus.
       *
       * @param request ListRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRulesWithOptions(const Models::ListRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all rules of an event bus.
       *
       * @description You can call this API operation to query all rules of an event bus.
       *
       * @param request ListRulesRequest
       * @return ListRulesResponse
       */
      Models::ListRulesResponse listRules(const Models::ListRulesRequest &request);

      /**
       * @summary Queries all event targets of an event rule.
       *
       * @param request ListTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTargetsResponse
       */
      Models::ListTargetsResponse listTargetsWithOptions(const Models::ListTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all event targets of an event rule.
       *
       * @param request ListTargetsRequest
       * @return ListTargetsResponse
       */
      Models::ListTargetsResponse listTargets(const Models::ListTargetsRequest &request);

      /**
       * @summary Queries all custom event sources.
       *
       * @description You can call this API operation to query custom event sources.
       *
       * @param request ListUserDefinedEventSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserDefinedEventSourcesResponse
       */
      Models::ListUserDefinedEventSourcesResponse listUserDefinedEventSourcesWithOptions(const Models::ListUserDefinedEventSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all custom event sources.
       *
       * @description You can call this API operation to query custom event sources.
       *
       * @param request ListUserDefinedEventSourcesRequest
       * @return ListUserDefinedEventSourcesResponse
       */
      Models::ListUserDefinedEventSourcesResponse listUserDefinedEventSources(const Models::ListUserDefinedEventSourcesRequest &request);

      /**
       * @summary Stops an event stream that is running.
       *
       * @description You can call this API operation to stop an event stream that is running.
       *
       * @param request PauseEventStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PauseEventStreamingResponse
       */
      Models::PauseEventStreamingResponse pauseEventStreamingWithOptions(const Models::PauseEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops an event stream that is running.
       *
       * @description You can call this API operation to stop an event stream that is running.
       *
       * @param request PauseEventStreamingRequest
       * @return PauseEventStreamingResponse
       */
      Models::PauseEventStreamingResponse pauseEventStreaming(const Models::PauseEventStreamingRequest &request);

      /**
       * @summary Creates or updates event targets under a rule.
       *
       * @description You can call this API operation to create or update event targets under a rule.
       *
       * @param tmpReq PutTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutTargetsResponse
       */
      Models::PutTargetsResponse putTargetsWithOptions(const Models::PutTargetsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates event targets under a rule.
       *
       * @description You can call this API operation to create or update event targets under a rule.
       *
       * @param request PutTargetsRequest
       * @return PutTargetsResponse
       */
      Models::PutTargetsResponse putTargets(const Models::PutTargetsRequest &request);

      /**
       * @summary Queries the content of an event.
       *
       * @description You can call this API operation to query the content of an event.
       *
       * @param request QueryEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEventResponse
       */
      Models::QueryEventResponse queryEventWithOptions(const Models::QueryEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of an event.
       *
       * @description You can call this API operation to query the content of an event.
       *
       * @param request QueryEventRequest
       * @return QueryEventResponse
       */
      Models::QueryEventResponse queryEvent(const Models::QueryEventRequest &request);

      /**
       * @summary Queries event traces.
       *
       * @description You can call this API operation to query event traces.
       *
       * @param request QueryEventTracesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryEventTracesResponse
       */
      Models::QueryEventTracesResponse queryEventTracesWithOptions(const Models::QueryEventTracesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event traces.
       *
       * @description You can call this API operation to query event traces.
       *
       * @param request QueryEventTracesRequest
       * @return QueryEventTracesResponse
       */
      Models::QueryEventTracesResponse queryEventTraces(const Models::QueryEventTracesRequest &request);

      /**
       * @summary Queries event traces by event ID.
       *
       * @description You can call this API operation to query event traces by event ID.
       *
       * @param request QueryTracedEventByEventIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTracedEventByEventIdResponse
       */
      Models::QueryTracedEventByEventIdResponse queryTracedEventByEventIdWithOptions(const Models::QueryTracedEventByEventIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event traces by event ID.
       *
       * @description You can call this API operation to query event traces by event ID.
       *
       * @param request QueryTracedEventByEventIdRequest
       * @return QueryTracedEventByEventIdResponse
       */
      Models::QueryTracedEventByEventIdResponse queryTracedEventByEventId(const Models::QueryTracedEventByEventIdRequest &request);

      /**
       * @summary Queries event traces by time range.
       *
       * @description You can call this API operation to query event traces by time range.
       *
       * @param request QueryTracedEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTracedEventsResponse
       */
      Models::QueryTracedEventsResponse queryTracedEventsWithOptions(const Models::QueryTracedEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event traces by time range.
       *
       * @description You can call this API operation to query event traces by time range.
       *
       * @param request QueryTracedEventsRequest
       * @return QueryTracedEventsResponse
       */
      Models::QueryTracedEventsResponse queryTracedEvents(const Models::QueryTracedEventsRequest &request);

      /**
       * @summary Enables a created or deactivated event stream.
       *
       * @description You can call this API operation to enable a created or deactivated event stream.
       *
       * @param request StartEventStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartEventStreamingResponse
       */
      Models::StartEventStreamingResponse startEventStreamingWithOptions(const Models::StartEventStreamingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a created or deactivated event stream.
       *
       * @description You can call this API operation to enable a created or deactivated event stream.
       *
       * @param request StartEventStreamingRequest
       * @return StartEventStreamingResponse
       */
      Models::StartEventStreamingResponse startEventStreaming(const Models::StartEventStreamingRequest &request);

      /**
       * @summary Checks whether the event pattern matches the provided JSON format.
       *
       * @description You can call this API operation to check whether the event pattern matches the provided JSON format.
       *
       * @param request TestEventPatternRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestEventPatternResponse
       */
      Models::TestEventPatternResponse testEventPatternWithOptions(const Models::TestEventPatternRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the event pattern matches the provided JSON format.
       *
       * @description You can call this API operation to check whether the event pattern matches the provided JSON format.
       *
       * @param request TestEventPatternRequest
       * @return TestEventPatternResponse
       */
      Models::TestEventPatternResponse testEventPattern(const Models::TestEventPatternRequest &request);

      /**
       * @summary Checks whether event source configurations are available.
       *
       * @description You can call this API operation to query all custom event sources.
       *
       * @param tmpReq TestEventSourceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TestEventSourceConfigResponse
       */
      Models::TestEventSourceConfigResponse testEventSourceConfigWithOptions(const Models::TestEventSourceConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether event source configurations are available.
       *
       * @description You can call this API operation to query all custom event sources.
       *
       * @param request TestEventSourceConfigRequest
       * @return TestEventSourceConfigResponse
       */
      Models::TestEventSourceConfigResponse testEventSourceConfig(const Models::TestEventSourceConfigRequest &request);

      /**
       * @summary Updates an API destination.
       *
       * @description You can call this API operation to update an API destination.
       *
       * @param tmpReq UpdateApiDestinationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiDestinationResponse
       */
      Models::UpdateApiDestinationResponse updateApiDestinationWithOptions(const Models::UpdateApiDestinationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an API destination.
       *
       * @description You can call this API operation to update an API destination.
       *
       * @param request UpdateApiDestinationRequest
       * @return UpdateApiDestinationResponse
       */
      Models::UpdateApiDestinationResponse updateApiDestination(const Models::UpdateApiDestinationRequest &request);

      /**
       * @summary Updates a connection.
       *
       * @description You can call this API operation to update a connection.
       *
       * @param tmpReq UpdateConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnectionResponse
       */
      Models::UpdateConnectionResponse updateConnectionWithOptions(const Models::UpdateConnectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a connection.
       *
       * @description You can call this API operation to update a connection.
       *
       * @param request UpdateConnectionRequest
       * @return UpdateConnectionResponse
       */
      Models::UpdateConnectionResponse updateConnection(const Models::UpdateConnectionRequest &request);

      /**
       * @summary Updates an event bus.
       *
       * @description You can call this operation to update an event bus.
       *
       * @param request UpdateEventBusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventBusResponse
       */
      Models::UpdateEventBusResponse updateEventBusWithOptions(const Models::UpdateEventBusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an event bus.
       *
       * @description You can call this operation to update an event bus.
       *
       * @param request UpdateEventBusRequest
       * @return UpdateEventBusResponse
       */
      Models::UpdateEventBusResponse updateEventBus(const Models::UpdateEventBusRequest &request);

      /**
       * @summary Updates an event source.
       *
       * @description You can call this API operation to update an event source.
       *
       * @param tmpReq UpdateEventSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventSourceResponse
       */
      Models::UpdateEventSourceResponse updateEventSourceWithOptions(const Models::UpdateEventSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an event source.
       *
       * @description You can call this API operation to update an event source.
       *
       * @param request UpdateEventSourceRequest
       * @return UpdateEventSourceResponse
       */
      Models::UpdateEventSourceResponse updateEventSource(const Models::UpdateEventSourceRequest &request);

      /**
       * @summary Modifies the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
       *
       * @description You can call this API operation to modify the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
       *
       * @param tmpReq UpdateEventStreamingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateEventStreamingResponse
       */
      Models::UpdateEventStreamingResponse updateEventStreamingWithOptions(const Models::UpdateEventStreamingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
       *
       * @description You can call this API operation to modify the information about an event stream, such as the basic information and the information about the event source, event filtering rule, and event target.
       *
       * @param request UpdateEventStreamingRequest
       * @return UpdateEventStreamingResponse
       */
      Models::UpdateEventStreamingResponse updateEventStreaming(const Models::UpdateEventStreamingRequest &request);

      /**
       * @summary Updates the configurations of an event rule.
       *
       * @description You can call this API operation to update the configurations of an event rule.
       *
       * @param request UpdateRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRuleWithOptions(const Models::UpdateRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of an event rule.
       *
       * @description You can call this API operation to update the configurations of an event rule.
       *
       * @param request UpdateRuleRequest
       * @return UpdateRuleResponse
       */
      Models::UpdateRuleResponse updateRule(const Models::UpdateRuleRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
