// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CSASEDR20241122_HPP_
#define ALIBABACLOUD_CSASEDR20241122_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CsasEdr20241122Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CsasEdr20241122.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a client rule policy.
       *
       * @description Creates a client rule policy. The policy type is specified by PolicyType.
       *
       * @param tmpReq CreateClientRuleStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientRuleStrategyResponse
       */
      Models::CreateClientRuleStrategyResponse createClientRuleStrategyWithOptions(const Models::CreateClientRuleStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a client rule policy.
       *
       * @description Creates a client rule policy. The policy type is specified by PolicyType.
       *
       * @param request CreateClientRuleStrategyRequest
       * @return CreateClientRuleStrategyResponse
       */
      Models::CreateClientRuleStrategyResponse createClientRuleStrategy(const Models::CreateClientRuleStrategyRequest &request);

      /**
       * @summary Creates a general asset selection configuration and generates a SelectionKey for use in What to do next.
       *
       * @description This operation is used for the initialization of a general asset selection configuration and generates a SelectionKey. The addition or selection of specific assets is completed in What to do next. When you invoke this operation, it only generates the configuration object and does not save the configuration record.
       *
       * @param request CreateSelectionConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSelectionConfigResponse
       */
      Models::CreateSelectionConfigResponse createSelectionConfigWithOptions(const Models::CreateSelectionConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a general asset selection configuration and generates a SelectionKey for use in What to do next.
       *
       * @description This operation is used for the initialization of a general asset selection configuration and generates a SelectionKey. The addition or selection of specific assets is completed in What to do next. When you invoke this operation, it only generates the configuration object and does not save the configuration record.
       *
       * @param request CreateSelectionConfigRequest
       * @return CreateSelectionConfigResponse
       */
      Models::CreateSelectionConfigResponse createSelectionConfig(const Models::CreateSelectionConfigRequest &request);

      /**
       * @summary Creates a node to query alerting events triggered by the same rule or Alarm Metric.
       *
       * @param request CreateSimilarSecurityEventsQueryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSimilarSecurityEventsQueryTaskResponse
       */
      Models::CreateSimilarSecurityEventsQueryTaskResponse createSimilarSecurityEventsQueryTaskWithOptions(const Models::CreateSimilarSecurityEventsQueryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a node to query alerting events triggered by the same rule or Alarm Metric.
       *
       * @param request CreateSimilarSecurityEventsQueryTaskRequest
       * @return CreateSimilarSecurityEventsQueryTaskResponse
       */
      Models::CreateSimilarSecurityEventsQueryTaskResponse createSimilarSecurityEventsQueryTask(const Models::CreateSimilarSecurityEventsQueryTaskRequest &request);

      /**
       * @summary Deletes client rule policies based on a list of policy IDs.
       *
       * @param tmpReq DeleteClientRuleStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientRuleStrategyResponse
       */
      Models::DeleteClientRuleStrategyResponse deleteClientRuleStrategyWithOptions(const Models::DeleteClientRuleStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes client rule policies based on a list of policy IDs.
       *
       * @param request DeleteClientRuleStrategyRequest
       * @return DeleteClientRuleStrategyResponse
       */
      Models::DeleteClientRuleStrategyResponse deleteClientRuleStrategy(const Models::DeleteClientRuleStrategyRequest &request);

      /**
       * @summary Deletes alert whitelist configurations in batches.
       *
       * @param request DeleteSecurityEventMarkMissListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSecurityEventMarkMissListResponse
       */
      Models::DeleteSecurityEventMarkMissListResponse deleteSecurityEventMarkMissListWithOptions(const Models::DeleteSecurityEventMarkMissListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes alert whitelist configurations in batches.
       *
       * @param request DeleteSecurityEventMarkMissListRequest
       * @return DeleteSecurityEventMarkMissListResponse
       */
      Models::DeleteSecurityEventMarkMissListResponse deleteSecurityEventMarkMissList(const Models::DeleteSecurityEventMarkMissListRequest &request);

      /**
       * @summary Queries the effective scope mode, target list, and scope record information based on the asset scope ID.
       *
       * @param request DescribeAssetScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAssetScopeResponse
       */
      Models::DescribeAssetScopeResponse describeAssetScopeWithOptions(const Models::DescribeAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the effective scope mode, target list, and scope record information based on the asset scope ID.
       *
       * @param request DescribeAssetScopeRequest
       * @return DescribeAssetScopeResponse
       */
      Models::DescribeAssetScopeResponse describeAssetScope(const Models::DescribeAssetScopeRequest &request);

      /**
       * @summary Queries security alert types.
       *
       * @param request DescribeNsasSuspEventTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNsasSuspEventTypeResponse
       */
      Models::DescribeNsasSuspEventTypeResponse describeNsasSuspEventTypeWithOptions(const Models::DescribeNsasSuspEventTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries security alert types.
       *
       * @param request DescribeNsasSuspEventTypeRequest
       * @return DescribeNsasSuspEventTypeResponse
       */
      Models::DescribeNsasSuspEventTypeResponse describeNsasSuspEventType(const Models::DescribeNsasSuspEventTypeRequest &request);

      /**
       * @summary Queries the automatic whitelist rules for alerts.
       *
       * @param request DescribeSecurityEventMarkMissListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventMarkMissListResponse
       */
      Models::DescribeSecurityEventMarkMissListResponse describeSecurityEventMarkMissListWithOptions(const Models::DescribeSecurityEventMarkMissListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the automatic whitelist rules for alerts.
       *
       * @param request DescribeSecurityEventMarkMissListRequest
       * @return DescribeSecurityEventMarkMissListResponse
       */
      Models::DescribeSecurityEventMarkMissListResponse describeSecurityEventMarkMissList(const Models::DescribeSecurityEventMarkMissListRequest &request);

      /**
       * @summary Queries the processing status of security alerts based on the task ID or alert event ID.
       *
       * @param request DescribeSecurityEventOperationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventOperationStatusResponse
       */
      Models::DescribeSecurityEventOperationStatusResponse describeSecurityEventOperationStatusWithOptions(const Models::DescribeSecurityEventOperationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the processing status of security alerts based on the task ID or alert event ID.
       *
       * @param request DescribeSecurityEventOperationStatusRequest
       * @return DescribeSecurityEventOperationStatusResponse
       */
      Models::DescribeSecurityEventOperationStatusResponse describeSecurityEventOperationStatus(const Models::DescribeSecurityEventOperationStatusRequest &request);

      /**
       * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
       *
       * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
       * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
       *
       * @param request DescribeSecurityEventOperationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSecurityEventOperationsResponse
       */
      Models::DescribeSecurityEventOperationsResponse describeSecurityEventOperationsWithOptions(const Models::DescribeSecurityEventOperationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the handling operations, operability, and whitelist rule configurations for a specified endpoint alert in its current state.
       *
       * @description This operation queries the handling operations that can be displayed for a specified endpoint alert. When initiating a subsequent response, you must select the operation items returned in this response where UserCanOperate is true, and submit parameters as required by the response operation. The query result does not guarantee that the subsequent response will succeed.
       * The actual returned results are affected by feature switches, canary releases, dynamic allowlists, alert templates, alert statuses, and filter conditions. The list may be empty. The examples are used to illustrate field formats or rule combinations and do not represent that a specific alert will definitely return these values. MappingMarkFields and its subfields are generic compatibility structures. The current query pipeline does not populate their elements, and you should not infer that this operation supports the corresponding capabilities based on them.
       *
       * @param request DescribeSecurityEventOperationsRequest
       * @return DescribeSecurityEventOperationsResponse
       */
      Models::DescribeSecurityEventOperationsResponse describeSecurityEventOperations(const Models::DescribeSecurityEventOperationsRequest &request);

      /**
       * @summary Queries the handling scenarios for alerts triggered by the same rule or type.
       *
       * @param request DescribeSimilarEventScenariosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimilarEventScenariosResponse
       */
      Models::DescribeSimilarEventScenariosResponse describeSimilarEventScenariosWithOptions(const Models::DescribeSimilarEventScenariosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the handling scenarios for alerts triggered by the same rule or type.
       *
       * @param request DescribeSimilarEventScenariosRequest
       * @return DescribeSimilarEventScenariosResponse
       */
      Models::DescribeSimilarEventScenariosResponse describeSimilarEventScenarios(const Models::DescribeSimilarEventScenariosRequest &request);

      /**
       * @summary Queries aggregated alerts triggered by the same rule or type.
       *
       * @param request DescribeSimilarSecurityEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSimilarSecurityEventsResponse
       */
      Models::DescribeSimilarSecurityEventsResponse describeSimilarSecurityEventsWithOptions(const Models::DescribeSimilarSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries aggregated alerts triggered by the same rule or type.
       *
       * @param request DescribeSimilarSecurityEventsRequest
       * @return DescribeSimilarSecurityEventsResponse
       */
      Models::DescribeSimilarSecurityEventsResponse describeSimilarSecurityEvents(const Models::DescribeSimilarSecurityEventsRequest &request);

      /**
       * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
       *
       * @param request DescribeSuspEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEventsWithOptions(const Models::DescribeSuspEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries endpoint security alerts and supports filtering by alert, endpoint, and processing status.
       *
       * @param request DescribeSuspEventsRequest
       * @return DescribeSuspEventsResponse
       */
      Models::DescribeSuspEventsResponse describeSuspEvents(const Models::DescribeSuspEventsRequest &request);

      /**
       * @summary Queries the details of a client rule policy.
       *
       * @description Queries the detailed information of a client rule policy based on the policy ID.
       *
       * @param request GetClientRuleStrategyDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientRuleStrategyDetailResponse
       */
      Models::GetClientRuleStrategyDetailResponse getClientRuleStrategyDetailWithOptions(const Models::GetClientRuleStrategyDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a client rule policy.
       *
       * @description Queries the detailed information of a client rule policy based on the policy ID.
       *
       * @param request GetClientRuleStrategyDetailRequest
       * @return GetClientRuleStrategyDetailResponse
       */
      Models::GetClientRuleStrategyDetailResponse getClientRuleStrategyDetail(const Models::GetClientRuleStrategyDetailRequest &request);

      /**
       * @summary Queries the number of system rules and custom rules in proactive defense policies.
       *
       * @description Counts the number of proactive defense policies (PolicyType=2) for the current account and returns the number of system rule policies and custom rule policies.
       *
       * @param request GetClientRuleStrategyStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientRuleStrategyStatisticsResponse
       */
      Models::GetClientRuleStrategyStatisticsResponse getClientRuleStrategyStatisticsWithOptions(const Models::GetClientRuleStrategyStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of system rules and custom rules in proactive defense policies.
       *
       * @description Counts the number of proactive defense policies (PolicyType=2) for the current account and returns the number of system rule policies and custom rule policies.
       *
       * @param request GetClientRuleStrategyStatisticsRequest
       * @return GetClientRuleStrategyStatisticsResponse
       */
      Models::GetClientRuleStrategyStatisticsResponse getClientRuleStrategyStatistics(const Models::GetClientRuleStrategyStatisticsRequest &request);

      /**
       * @summary Handles security alert events.
       *
       * @param request HandleSecurityEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleSecurityEventsResponse
       */
      Models::HandleSecurityEventsResponse handleSecurityEventsWithOptions(const Models::HandleSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handles security alert events.
       *
       * @param request HandleSecurityEventsRequest
       * @return HandleSecurityEventsResponse
       */
      Models::HandleSecurityEventsResponse handleSecurityEvents(const Models::HandleSecurityEventsRequest &request);

      /**
       * @summary Performs batch operations on similar security alerts filtered by a query task.
       *
       * @description First, call the CreateSimilarSecurityEventsQueryTask operation to create a similar alert query task. Wait until the data extraction for the task is complete and the task reaches the DataRetrieved state before you call this operation. The processing scope covers the security alerts filtered under the TaskId. This scope is determined by the similar scenario and alert configurations selected when the query task was created. The scope does not equal all alerts of the same type, nor is it fixed to alerts with the same IP address. After this operation is successfully called, the processing continues to run asynchronously in the background.
       *
       * @param request HandleSimilarSecurityEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HandleSimilarSecurityEventsResponse
       */
      Models::HandleSimilarSecurityEventsResponse handleSimilarSecurityEventsWithOptions(const Models::HandleSimilarSecurityEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs batch operations on similar security alerts filtered by a query task.
       *
       * @description First, call the CreateSimilarSecurityEventsQueryTask operation to create a similar alert query task. Wait until the data extraction for the task is complete and the task reaches the DataRetrieved state before you call this operation. The processing scope covers the security alerts filtered under the TaskId. This scope is determined by the similar scenario and alert configurations selected when the query task was created. The scope does not equal all alerts of the same type, nor is it fixed to alerts with the same IP address. After this operation is successfully called, the processing continues to run asynchronously in the background.
       *
       * @param request HandleSimilarSecurityEventsRequest
       * @return HandleSimilarSecurityEventsResponse
       */
      Models::HandleSimilarSecurityEventsResponse handleSimilarSecurityEvents(const Models::HandleSimilarSecurityEventsRequest &request);

      /**
       * @summary Queries the client rule policy list by using a paged query with paging.
       *
       * @description Performs a paged query to retrieve client rule policies based on the policy type (PolicyType) with paging. You can call GetClientRuleStrategyDetail to query the details.
       *
       * @param request ListClientRuleStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientRuleStrategyResponse
       */
      Models::ListClientRuleStrategyResponse listClientRuleStrategyWithOptions(const Models::ListClientRuleStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the client rule policy list by using a paged query with paging.
       *
       * @description Performs a paged query to retrieve client rule policies based on the policy type (PolicyType) with paging. You can call GetClientRuleStrategyDetail to query the details.
       *
       * @param request ListClientRuleStrategyRequest
       * @return ListClientRuleStrategyResponse
       */
      Models::ListClientRuleStrategyResponse listClientRuleStrategy(const Models::ListClientRuleStrategyRequest &request);

      /**
       * @summary Queries system defense rules and the switch status of rules under a specified SelectionKey by paging in a paged query.
       *
       * @description Queries the system rule catalog and the switch status of rules under a specified SelectionKey. You can use the returned SwitchId and the same SelectionKey to call the OperateTargetConfig operation to modify the switch status.
       *
       * @param tmpReq ListSystemConfigRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSystemConfigRulesResponse
       */
      Models::ListSystemConfigRulesResponse listSystemConfigRulesWithOptions(const Models::ListSystemConfigRulesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries system defense rules and the switch status of rules under a specified SelectionKey by paging in a paged query.
       *
       * @description Queries the system rule catalog and the switch status of rules under a specified SelectionKey. You can use the returned SwitchId and the same SelectionKey to call the OperateTargetConfig operation to modify the switch status.
       *
       * @param request ListSystemConfigRulesRequest
       * @return ListSystemConfigRulesResponse
       */
      Models::ListSystemConfigRulesResponse listSystemConfigRules(const Models::ListSystemConfigRulesRequest &request);

      /**
       * @summary Updates the switch status of system rules in batches by SelectionKey.
       *
       * @description Updates the override configuration of rule switches for each SwitchId under the same SelectionKey. Obtain the rule SwitchId by calling ListSystemConfigRules first. Do not use this operation to replace UpdateClientRuleStrategy for updating the overall policy switch Status, and do not use software process names as system rule SwitchIds.
       *
       * @param tmpReq OperateTargetConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OperateTargetConfigResponse
       */
      Models::OperateTargetConfigResponse operateTargetConfigWithOptions(const Models::OperateTargetConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the switch status of system rules in batches by SelectionKey.
       *
       * @description Updates the override configuration of rule switches for each SwitchId under the same SelectionKey. Obtain the rule SwitchId by calling ListSystemConfigRules first. Do not use this operation to replace UpdateClientRuleStrategy for updating the overall policy switch Status, and do not use software process names as system rule SwitchIds.
       *
       * @param request OperateTargetConfigRequest
       * @return OperateTargetConfigResponse
       */
      Models::OperateTargetConfigResponse operateTargetConfig(const Models::OperateTargetConfigRequest &request);

      /**
       * @summary Updates the effective scope mode and target list of a specified asset scope record.
       *
       * @param request UpdateAssetScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAssetScopeResponse
       */
      Models::UpdateAssetScopeResponse updateAssetScopeWithOptions(const Models::UpdateAssetScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the effective scope mode and target list of a specified asset scope record.
       *
       * @param request UpdateAssetScopeRequest
       * @return UpdateAssetScopeResponse
       */
      Models::UpdateAssetScopeResponse updateAssetScope(const Models::UpdateAssetScopeRequest &request);

      /**
       * @summary Updates a client rule policy.
       *
       * @description Updates a client rule policy based on the policy ID.
       *
       * @param tmpReq UpdateClientRuleStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateClientRuleStrategyResponse
       */
      Models::UpdateClientRuleStrategyResponse updateClientRuleStrategyWithOptions(const Models::UpdateClientRuleStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a client rule policy.
       *
       * @description Updates a client rule policy based on the policy ID.
       *
       * @param request UpdateClientRuleStrategyRequest
       * @return UpdateClientRuleStrategyResponse
       */
      Models::UpdateClientRuleStrategyResponse updateClientRuleStrategy(const Models::UpdateClientRuleStrategyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
