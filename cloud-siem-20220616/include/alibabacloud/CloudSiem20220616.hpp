// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDSIEM20220616_HPP_
#define ALIBABACLOUD_CLOUDSIEM20220616_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CloudSiem20220616Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CloudSiem20220616.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a data source under the bound multi-cloud account.
       *
       * @description Before calling this operation to add a data source, complete the following prerequisites in sequence:
       * 1. Call the AddCloudVendorAccountAK operation of Security Center (Sas) to add the AccessKey pair configuration for the multi-cloud account.
       * 2. Call the BindAccount operation to bind the multi-cloud account.
       * 3. Call this operation (AddDataSource) to add a data source under the bound multi-cloud account.
       *
       * @param request AddDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSourceWithOptions(const Models::AddDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a data source under the bound multi-cloud account.
       *
       * @description Before calling this operation to add a data source, complete the following prerequisites in sequence:
       * 1. Call the AddCloudVendorAccountAK operation of Security Center (Sas) to add the AccessKey pair configuration for the multi-cloud account.
       * 2. Call the BindAccount operation to bind the multi-cloud account.
       * 3. Call this operation (AddDataSource) to add a data source under the bound multi-cloud account.
       *
       * @param request AddDataSourceRequest
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSource(const Models::AddDataSourceRequest &request);

      /**
       * @summary Adds logs.
       *
       * @description Before calling this operation to add logs for a data source, complete the following prerequisites in sequence:
       * 1. Call the EnableAccessForCloudSiem operation to enable the SIEM service role.
       * 2. Call the BindAccount operation to bind a multi-cloud account. You must provide the AccessKey of the third-party cloud provider.
       * 3. Call the AddDataSource operation to create a data source instance and obtain the DataSourceInstanceId.
       *
       * @param request AddDataSourceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataSourceLogResponse
       */
      Models::AddDataSourceLogResponse addDataSourceLogWithOptions(const Models::AddDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds logs.
       *
       * @description Before calling this operation to add logs for a data source, complete the following prerequisites in sequence:
       * 1. Call the EnableAccessForCloudSiem operation to enable the SIEM service role.
       * 2. Call the BindAccount operation to bind a multi-cloud account. You must provide the AccessKey of the third-party cloud provider.
       * 3. Call the AddDataSource operation to create a data source instance and obtain the DataSourceInstanceId.
       *
       * @param request AddDataSourceLogRequest
       * @return AddDataSourceLogResponse
       */
      Models::AddDataSourceLogResponse addDataSourceLog(const Models::AddDataSourceLogRequest &request);

      /**
       * @summary Adds a log ingestion task to ingest the corresponding log data into Threat Analysis for subsequent alerting and event analysis.
       *
       * @param request AddUserSourceLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserSourceLogConfigResponse
       */
      Models::AddUserSourceLogConfigResponse addUserSourceLogConfigWithOptions(const Models::AddUserSourceLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a log ingestion task to ingest the corresponding log data into Threat Analysis for subsequent alerting and event analysis.
       *
       * @param request AddUserSourceLogConfigRequest
       * @return AddUserSourceLogConfigResponse
       */
      Models::AddUserSourceLogConfigResponse addUserSourceLogConfig(const Models::AddUserSourceLogConfigRequest &request);

      /**
       * @summary Binds a multi-cloud account configured in the multi-cloud assets of Security Center to Threat Analysis.
       *
       * @param request BindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAccountResponse
       */
      Models::BindAccountResponse bindAccountWithOptions(const Models::BindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a multi-cloud account configured in the multi-cloud assets of Security Center to Threat Analysis.
       *
       * @param request BindAccountRequest
       * @return BindAccountResponse
       */
      Models::BindAccountResponse bindAccount(const Models::BindAccountRequest &request);

      /**
       * @summary Disables log delivery for an integrated cloud service. After the delivery is disabled, no new logs of the corresponding type are written to the user\\"s Logstore.
       *
       * @param request CloseDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseDeliveryResponse
       */
      Models::CloseDeliveryResponse closeDeliveryWithOptions(const Models::CloseDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables log delivery for an integrated cloud service. After the delivery is disabled, no new logs of the corresponding type are written to the user\\"s Logstore.
       *
       * @param request CloseDeliveryRequest
       * @return CloseDeliveryResponse
       */
      Models::CloseDeliveryResponse closeDelivery(const Models::CloseDeliveryRequest &request);

      /**
       * @summary Deletes the automated response rule with the specified ID.
       *
       * @param request DeleteAutomateResponseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutomateResponseConfigResponse
       */
      Models::DeleteAutomateResponseConfigResponse deleteAutomateResponseConfigWithOptions(const Models::DeleteAutomateResponseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the automated response rule with the specified ID.
       *
       * @param request DeleteAutomateResponseConfigRequest
       * @return DeleteAutomateResponseConfigResponse
       */
      Models::DeleteAutomateResponseConfigResponse deleteAutomateResponseConfig(const Models::DeleteAutomateResponseConfigRequest &request);

      /**
       * @summary Dissociates the AccessKey of a multi-cloud sub-account from the threat analysis data source module. After the dissociation, you can bind a different account.
       *
       * @param request DeleteBindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBindAccountResponse
       */
      Models::DeleteBindAccountResponse deleteBindAccountWithOptions(const Models::DeleteBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates the AccessKey of a multi-cloud sub-account from the threat analysis data source module. After the dissociation, you can bind a different account.
       *
       * @param request DeleteBindAccountRequest
       * @return DeleteBindAccountResponse
       */
      Models::DeleteBindAccountResponse deleteBindAccount(const Models::DeleteBindAccountRequest &request);

      /**
       * @summary Deletes a custom rule by the specified ID.
       *
       * @param request DeleteCustomizeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizeRuleResponse
       */
      Models::DeleteCustomizeRuleResponse deleteCustomizeRuleWithOptions(const Models::DeleteCustomizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom rule by the specified ID.
       *
       * @param request DeleteCustomizeRuleRequest
       * @return DeleteCustomizeRuleResponse
       */
      Models::DeleteCustomizeRuleResponse deleteCustomizeRule(const Models::DeleteCustomizeRuleRequest &request);

      /**
       * @summary Deletes a data source that is no longer in use.
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source that is no longer in use.
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Deletes a log.
       *
       * @param request DeleteDataSourceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceLogResponse
       */
      Models::DeleteDataSourceLogResponse deleteDataSourceLogWithOptions(const Models::DeleteDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a log.
       *
       * @param request DeleteDataSourceLogRequest
       * @return DeleteDataSourceLogResponse
       */
      Models::DeleteDataSourceLogResponse deleteDataSourceLog(const Models::DeleteDataSourceLogRequest &request);

      /**
       * @summary Deletes the alert whitelist rule with the specified ID.
       *
       * @param request DeleteWhiteRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWhiteRuleListResponse
       */
      Models::DeleteWhiteRuleListResponse deleteWhiteRuleListWithOptions(const Models::DeleteWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the alert whitelist rule with the specified ID.
       *
       * @param request DeleteWhiteRuleListRequest
       * @return DeleteWhiteRuleListResponse
       */
      Models::DeleteWhiteRuleListResponse deleteWhiteRuleList(const Models::DeleteWhiteRuleListRequest &request);

      /**
       * @summary Retrieves the list of aggregate functions supported by custom rules.
       *
       * @param request DescribeAggregateFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAggregateFunctionResponse
       */
      Models::DescribeAggregateFunctionResponse describeAggregateFunctionWithOptions(const Models::DescribeAggregateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of aggregate functions supported by custom rules.
       *
       * @param request DescribeAggregateFunctionRequest
       * @return DescribeAggregateFunctionResponse
       */
      Models::DescribeAggregateFunctionResponse describeAggregateFunction(const Models::DescribeAggregateFunctionRequest &request);

      /**
       * @summary Retrieves alert allowlist scenarios.
       *
       * @param request DescribeAlertSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSceneResponse
       */
      Models::DescribeAlertSceneResponse describeAlertSceneWithOptions(const Models::DescribeAlertSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves alert allowlist scenarios.
       *
       * @param request DescribeAlertSceneRequest
       * @return DescribeAlertSceneResponse
       */
      Models::DescribeAlertSceneResponse describeAlertScene(const Models::DescribeAlertSceneRequest &request);

      /**
       * @summary Retrieves the alert whitelist scenarios and whitelist targets.
       *
       * @param request DescribeAlertSceneByEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSceneByEventResponse
       */
      Models::DescribeAlertSceneByEventResponse describeAlertSceneByEventWithOptions(const Models::DescribeAlertSceneByEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the alert whitelist scenarios and whitelist targets.
       *
       * @param request DescribeAlertSceneByEventRequest
       * @return DescribeAlertSceneByEventResponse
       */
      Models::DescribeAlertSceneByEventResponse describeAlertSceneByEvent(const Models::DescribeAlertSceneByEventRequest &request);

      /**
       * @summary Retrieves a list of alert data sources.
       *
       * @param request DescribeAlertSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSourceResponse
       */
      Models::DescribeAlertSourceResponse describeAlertSourceWithOptions(const Models::DescribeAlertSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of alert data sources.
       *
       * @param request DescribeAlertSourceRequest
       * @return DescribeAlertSourceResponse
       */
      Models::DescribeAlertSourceResponse describeAlertSource(const Models::DescribeAlertSourceRequest &request);

      /**
       * @summary Retrieves the list of alert data sources associated with an incident.
       *
       * @param request DescribeAlertSourceWithEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSourceWithEventResponse
       */
      Models::DescribeAlertSourceWithEventResponse describeAlertSourceWithEventWithOptions(const Models::DescribeAlertSourceWithEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of alert data sources associated with an incident.
       *
       * @param request DescribeAlertSourceWithEventRequest
       * @return DescribeAlertSourceWithEventResponse
       */
      Models::DescribeAlertSourceWithEventResponse describeAlertSourceWithEvent(const Models::DescribeAlertSourceWithEventRequest &request);

      /**
       * @summary Retrieves the list of available threat types for custom rules.
       *
       * @param request DescribeAlertTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertTypeResponse
       */
      Models::DescribeAlertTypeResponse describeAlertTypeWithOptions(const Models::DescribeAlertTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of available threat types for custom rules.
       *
       * @param request DescribeAlertTypeRequest
       * @return DescribeAlertTypeResponse
       */
      Models::DescribeAlertTypeResponse describeAlertType(const Models::DescribeAlertTypeRequest &request);

      /**
       * @summary Retrieves the list of alerts for the user.
       *
       * @param request DescribeAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsResponse
       */
      Models::DescribeAlertsResponse describeAlertsWithOptions(const Models::DescribeAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of alerts for the user.
       *
       * @param request DescribeAlertsRequest
       * @return DescribeAlertsResponse
       */
      Models::DescribeAlertsResponse describeAlerts(const Models::DescribeAlertsRequest &request);

      /**
       * @summary Retrieves the counts of alerts by severity level.
       *
       * @param request DescribeAlertsCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsCountResponse
       */
      Models::DescribeAlertsCountResponse describeAlertsCountWithOptions(const Models::DescribeAlertsCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the counts of alerts by severity level.
       *
       * @param request DescribeAlertsCountRequest
       * @return DescribeAlertsCountResponse
       */
      Models::DescribeAlertsCountResponse describeAlertsCount(const Models::DescribeAlertsCountRequest &request);

      /**
       * @summary Retrieves the list of alerts associated with an entity.
       *
       * @param request DescribeAlertsWithEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsWithEntityResponse
       */
      Models::DescribeAlertsWithEntityResponse describeAlertsWithEntityWithOptions(const Models::DescribeAlertsWithEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of alerts associated with an entity.
       *
       * @param request DescribeAlertsWithEntityRequest
       * @return DescribeAlertsWithEntityResponse
       */
      Models::DescribeAlertsWithEntityResponse describeAlertsWithEntity(const Models::DescribeAlertsWithEntityRequest &request);

      /**
       * @summary Retrieves the list of alerts associated with an incident.
       *
       * @param request DescribeAlertsWithEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsWithEventResponse
       */
      Models::DescribeAlertsWithEventResponse describeAlertsWithEventWithOptions(const Models::DescribeAlertsWithEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of alerts associated with an incident.
       *
       * @param request DescribeAlertsWithEventRequest
       * @return DescribeAlertsWithEventResponse
       */
      Models::DescribeAlertsWithEventResponse describeAlertsWithEvent(const Models::DescribeAlertsWithEventRequest &request);

      /**
       * @summary Checks whether the Alibaba Cloud account has authorized SIEM and created the AliyunServiceRoleForSasCloudSiem role.
       *
       * @param request DescribeAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthResponse
       */
      Models::DescribeAuthResponse describeAuthWithOptions(const Models::DescribeAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the Alibaba Cloud account has authorized SIEM and created the AliyunServiceRoleForSasCloudSiem role.
       *
       * @param request DescribeAuthRequest
       * @return DescribeAuthResponse
       */
      Models::DescribeAuthResponse describeAuth(const Models::DescribeAuthRequest &request);

      /**
       * @summary Queries the number of automated response rules.
       *
       * @param request DescribeAutomateResponseConfigCounterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutomateResponseConfigCounterResponse
       */
      Models::DescribeAutomateResponseConfigCounterResponse describeAutomateResponseConfigCounterWithOptions(const Models::DescribeAutomateResponseConfigCounterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of automated response rules.
       *
       * @param request DescribeAutomateResponseConfigCounterRequest
       * @return DescribeAutomateResponseConfigCounterResponse
       */
      Models::DescribeAutomateResponseConfigCounterResponse describeAutomateResponseConfigCounter(const Models::DescribeAutomateResponseConfigCounterRequest &request);

      /**
       * @summary Retrieves the configurable fields and operators for automated rule policies.
       *
       * @param request DescribeAutomateResponseConfigFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutomateResponseConfigFeatureResponse
       */
      Models::DescribeAutomateResponseConfigFeatureResponse describeAutomateResponseConfigFeatureWithOptions(const Models::DescribeAutomateResponseConfigFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the configurable fields and operators for automated rule policies.
       *
       * @param request DescribeAutomateResponseConfigFeatureRequest
       * @return DescribeAutomateResponseConfigFeatureResponse
       */
      Models::DescribeAutomateResponseConfigFeatureResponse describeAutomateResponseConfigFeature(const Models::DescribeAutomateResponseConfigFeatureRequest &request);

      /**
       * @summary Retrieves the list of assets associated with an incident.
       *
       * @param request DescribeCloudSiemAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemAssetsResponse
       */
      Models::DescribeCloudSiemAssetsResponse describeCloudSiemAssetsWithOptions(const Models::DescribeCloudSiemAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of assets associated with an incident.
       *
       * @param request DescribeCloudSiemAssetsRequest
       * @return DescribeCloudSiemAssetsResponse
       */
      Models::DescribeCloudSiemAssetsResponse describeCloudSiemAssets(const Models::DescribeCloudSiemAssetsRequest &request);

      /**
       * @summary Queries the number of assets of each type that are associated with an event.
       *
       * @param request DescribeCloudSiemAssetsCounterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemAssetsCounterResponse
       */
      Models::DescribeCloudSiemAssetsCounterResponse describeCloudSiemAssetsCounterWithOptions(const Models::DescribeCloudSiemAssetsCounterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of assets of each type that are associated with an event.
       *
       * @param request DescribeCloudSiemAssetsCounterRequest
       * @return DescribeCloudSiemAssetsCounterResponse
       */
      Models::DescribeCloudSiemAssetsCounterResponse describeCloudSiemAssetsCounter(const Models::DescribeCloudSiemAssetsCounterRequest &request);

      /**
       * @summary Retrieves the details of an event.
       *
       * @param request DescribeCloudSiemEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemEventDetailResponse
       */
      Models::DescribeCloudSiemEventDetailResponse describeCloudSiemEventDetailWithOptions(const Models::DescribeCloudSiemEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an event.
       *
       * @param request DescribeCloudSiemEventDetailRequest
       * @return DescribeCloudSiemEventDetailResponse
       */
      Models::DescribeCloudSiemEventDetailResponse describeCloudSiemEventDetail(const Models::DescribeCloudSiemEventDetailRequest &request);

      /**
       * @summary Retrieves a list of Cloud Threat Detection and Response (CTDR) events.
       *
       * @param request DescribeCloudSiemEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemEventsResponse
       */
      Models::DescribeCloudSiemEventsResponse describeCloudSiemEventsWithOptions(const Models::DescribeCloudSiemEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of Cloud Threat Detection and Response (CTDR) events.
       *
       * @param request DescribeCloudSiemEventsRequest
       * @return DescribeCloudSiemEventsResponse
       */
      Models::DescribeCloudSiemEventsResponse describeCloudSiemEvents(const Models::DescribeCloudSiemEventsRequest &request);

      /**
       * @summary Retrieves the count of custom rules.
       *
       * @param request DescribeCustomizeRuleCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeRuleCountResponse
       */
      Models::DescribeCustomizeRuleCountResponse describeCustomizeRuleCountWithOptions(const Models::DescribeCustomizeRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the count of custom rules.
       *
       * @param request DescribeCustomizeRuleCountRequest
       * @return DescribeCustomizeRuleCountResponse
       */
      Models::DescribeCustomizeRuleCountResponse describeCustomizeRuleCount(const Models::DescribeCustomizeRuleCountRequest &request);

      /**
       * @summary Retrieves historical simulated data from a test scenario.
       *
       * @param request DescribeCustomizeRuleTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeRuleTestResponse
       */
      Models::DescribeCustomizeRuleTestResponse describeCustomizeRuleTestWithOptions(const Models::DescribeCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves historical simulated data from a test scenario.
       *
       * @param request DescribeCustomizeRuleTestRequest
       * @return DescribeCustomizeRuleTestResponse
       */
      Models::DescribeCustomizeRuleTestResponse describeCustomizeRuleTest(const Models::DescribeCustomizeRuleTestRequest &request);

      /**
       * @summary Retrieves the chart of test results for a custom rule.
       *
       * @param request DescribeCustomizeRuleTestHistogramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeRuleTestHistogramResponse
       */
      Models::DescribeCustomizeRuleTestHistogramResponse describeCustomizeRuleTestHistogramWithOptions(const Models::DescribeCustomizeRuleTestHistogramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the chart of test results for a custom rule.
       *
       * @param request DescribeCustomizeRuleTestHistogramRequest
       * @return DescribeCustomizeRuleTestHistogramResponse
       */
      Models::DescribeCustomizeRuleTestHistogramResponse describeCustomizeRuleTestHistogram(const Models::DescribeCustomizeRuleTestHistogramRequest &request);

      /**
       * @summary Queries the details of a data source.
       *
       * @param request DescribeDataSourceInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourceInstanceResponse
       */
      Models::DescribeDataSourceInstanceResponse describeDataSourceInstanceWithOptions(const Models::DescribeDataSourceInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a data source.
       *
       * @param request DescribeDataSourceInstanceRequest
       * @return DescribeDataSourceInstanceResponse
       */
      Models::DescribeDataSourceInstanceResponse describeDataSourceInstance(const Models::DescribeDataSourceInstanceRequest &request);

      /**
       * @summary Retrieves the details of data source parameters.
       *
       * @param request DescribeDataSourceParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourceParametersResponse
       */
      Models::DescribeDataSourceParametersResponse describeDataSourceParametersWithOptions(const Models::DescribeDataSourceParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of data source parameters.
       *
       * @param request DescribeDataSourceParametersRequest
       * @return DescribeDataSourceParametersResponse
       */
      Models::DescribeDataSourceParametersResponse describeDataSourceParameters(const Models::DescribeDataSourceParametersRequest &request);

      /**
       * @summary Retrieves the list of entities and playbooks to be handled.
       *
       * @param request DescribeDisposeAndPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisposeAndPlaybookResponse
       */
      Models::DescribeDisposeAndPlaybookResponse describeDisposeAndPlaybookWithOptions(const Models::DescribeDisposeAndPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of entities and playbooks to be handled.
       *
       * @param request DescribeDisposeAndPlaybookRequest
       * @return DescribeDisposeAndPlaybookResponse
       */
      Models::DescribeDisposeAndPlaybookResponse describeDisposeAndPlaybook(const Models::DescribeDisposeAndPlaybookRequest &request);

      /**
       * @summary Retrieves the list of playbooks used by a disposal policy.
       *
       * @param request DescribeDisposeStrategyPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisposeStrategyPlaybookResponse
       */
      Models::DescribeDisposeStrategyPlaybookResponse describeDisposeStrategyPlaybookWithOptions(const Models::DescribeDisposeStrategyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of playbooks used by a disposal policy.
       *
       * @param request DescribeDisposeStrategyPlaybookRequest
       * @return DescribeDisposeStrategyPlaybookResponse
       */
      Models::DescribeDisposeStrategyPlaybookResponse describeDisposeStrategyPlaybook(const Models::DescribeDisposeStrategyPlaybookRequest &request);

      /**
       * @summary Retrieves the details of an entity.
       *
       * @param request DescribeEntityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEntityInfoResponse
       */
      Models::DescribeEntityInfoResponse describeEntityInfoWithOptions(const Models::DescribeEntityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an entity.
       *
       * @param request DescribeEntityInfoRequest
       * @return DescribeEntityInfoResponse
       */
      Models::DescribeEntityInfoResponse describeEntityInfo(const Models::DescribeEntityInfoRequest &request);

      /**
       * @summary Retrieves the count of events by type.
       *
       * @param request DescribeEventCountByThreatLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventCountByThreatLevelResponse
       */
      Models::DescribeEventCountByThreatLevelResponse describeEventCountByThreatLevelWithOptions(const Models::DescribeEventCountByThreatLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the count of events by type.
       *
       * @param request DescribeEventCountByThreatLevelRequest
       * @return DescribeEventCountByThreatLevelResponse
       */
      Models::DescribeEventCountByThreatLevelResponse describeEventCountByThreatLevel(const Models::DescribeEventCountByThreatLevelRequest &request);

      /**
       * @summary Queries the policy handling history for an event.
       *
       * @param request DescribeEventDisposeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventDisposeResponse
       */
      Models::DescribeEventDisposeResponse describeEventDisposeWithOptions(const Models::DescribeEventDisposeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policy handling history for an event.
       *
       * @param request DescribeEventDisposeRequest
       * @return DescribeEventDisposeResponse
       */
      Models::DescribeEventDisposeResponse describeEventDispose(const Models::DescribeEventDisposeRequest &request);

      /**
       * @summary Queries the number of imported logs.
       *
       * @param request DescribeImportedLogCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportedLogCountResponse
       */
      Models::DescribeImportedLogCountResponse describeImportedLogCountWithOptions(const Models::DescribeImportedLogCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of imported logs.
       *
       * @param request DescribeImportedLogCountRequest
       * @return DescribeImportedLogCountResponse
       */
      Models::DescribeImportedLogCountResponse describeImportedLogCount(const Models::DescribeImportedLogCountRequest &request);

      /**
       * @summary Retrieves the list of configurable fields for custom rules.
       *
       * @param request DescribeLogFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogFieldsResponse
       */
      Models::DescribeLogFieldsResponse describeLogFieldsWithOptions(const Models::DescribeLogFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of configurable fields for custom rules.
       *
       * @param request DescribeLogFieldsRequest
       * @return DescribeLogFieldsResponse
       */
      Models::DescribeLogFieldsResponse describeLogFields(const Models::DescribeLogFieldsRequest &request);

      /**
       * @summary Retrieves a list of configurable log sources for custom rules.
       *
       * @param request DescribeLogSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogSourceResponse
       */
      Models::DescribeLogSourceResponse describeLogSourceWithOptions(const Models::DescribeLogSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of configurable log sources for custom rules.
       *
       * @param request DescribeLogSourceRequest
       * @return DescribeLogSourceResponse
       */
      Models::DescribeLogSourceResponse describeLogSource(const Models::DescribeLogSourceRequest &request);

      /**
       * @summary Retrieves the log types that can be configured for custom rules.
       *
       * @param request DescribeLogTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogTypeResponse
       */
      Models::DescribeLogTypeResponse describeLogTypeWithOptions(const Models::DescribeLogTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the log types that can be configured for custom rules.
       *
       * @param request DescribeLogTypeRequest
       * @return DescribeLogTypeResponse
       */
      Models::DescribeLogTypeResponse describeLogType(const Models::DescribeLogTypeRequest &request);

      /**
       * @summary Retrieves the list of operators for custom rules.
       *
       * @param request DescribeOperatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperatorsResponse
       */
      Models::DescribeOperatorsResponse describeOperatorsWithOptions(const Models::DescribeOperatorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of operators for custom rules.
       *
       * @param request DescribeOperatorsRequest
       * @return DescribeOperatorsResponse
       */
      Models::DescribeOperatorsResponse describeOperators(const Models::DescribeOperatorsRequest &request);

      /**
       * @summary Queries the number of Alibaba Cloud, Tencent Cloud, and Huawei Cloud products that can be integrated with Threat Analysis.
       *
       * @param request DescribeProdCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProdCountResponse
       */
      Models::DescribeProdCountResponse describeProdCountWithOptions(const Models::DescribeProdCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of Alibaba Cloud, Tencent Cloud, and Huawei Cloud products that can be integrated with Threat Analysis.
       *
       * @param request DescribeProdCountRequest
       * @return DescribeProdCountResponse
       */
      Models::DescribeProdCountResponse describeProdCount(const Models::DescribeProdCountRequest &request);

      /**
       * @summary Retrieves the list of users in the playbook scope.
       *
       * @param request DescribeScopeUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScopeUsersResponse
       */
      Models::DescribeScopeUsersResponse describeScopeUsersWithOptions(const Models::DescribeScopeUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of users in the playbook scope.
       *
       * @param request DescribeScopeUsersRequest
       * @return DescribeScopeUsersResponse
       */
      Models::DescribeScopeUsersResponse describeScopeUsers(const Models::DescribeScopeUsersRequest &request);

      /**
       * @summary Checks whether a resource directory is authorized for threat analysis.
       *
       * @param request DescribeServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceStatusResponse
       */
      Models::DescribeServiceStatusResponse describeServiceStatusWithOptions(const Models::DescribeServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a resource directory is authorized for threat analysis.
       *
       * @param request DescribeServiceStatusRequest
       * @return DescribeServiceStatusResponse
       */
      Models::DescribeServiceStatusResponse describeServiceStatus(const Models::DescribeServiceStatusRequest &request);

      /**
       * @summary Checks the status of the storage for the threat analysis feature. The storage is a Logstore in Simple Log Service.
       *
       * @param request DescribeStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageResponse
       */
      Models::DescribeStorageResponse describeStorageWithOptions(const Models::DescribeStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the status of the storage for the threat analysis feature. The storage is a Logstore in Simple Log Service.
       *
       * @param request DescribeStorageRequest
       * @return DescribeStorageResponse
       */
      Models::DescribeStorageResponse describeStorage(const Models::DescribeStorageRequest &request);

      /**
       * @summary Checks whether the current Alibaba Cloud account or its associated enterprise organization has purchased threat analysis.
       *
       * @param request DescribeUserBuyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBuyStatusResponse
       */
      Models::DescribeUserBuyStatusResponse describeUserBuyStatusWithOptions(const Models::DescribeUserBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the current Alibaba Cloud account or its associated enterprise organization has purchased threat analysis.
       *
       * @param request DescribeUserBuyStatusRequest
       * @return DescribeUserBuyStatusResponse
       */
      Models::DescribeUserBuyStatusResponse describeUserBuyStatus(const Models::DescribeUserBuyStatusRequest &request);

      /**
       * @summary Queries the purchase status of the user\\"s SIEM.
       *
       * @param request DescribeUserSiemOrderStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserSiemOrderStatusResponse
       */
      Models::DescribeUserSiemOrderStatusResponse describeUserSiemOrderStatusWithOptions(const Models::DescribeUserSiemOrderStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the purchase status of the user\\"s SIEM.
       *
       * @param request DescribeUserSiemOrderStatusRequest
       * @return DescribeUserSiemOrderStatusResponse
       */
      Models::DescribeUserSiemOrderStatusResponse describeUserSiemOrderStatus(const Models::DescribeUserSiemOrderStatusRequest &request);

      /**
       * @summary Retrieves the list of domain names protected by Web Application Firewall (WAF) instances.
       *
       * @param request DescribeWafScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWafScopeResponse
       */
      Models::DescribeWafScopeResponse describeWafScopeWithOptions(const Models::DescribeWafScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of domain names protected by Web Application Firewall (WAF) instances.
       *
       * @param request DescribeWafScopeRequest
       * @return DescribeWafScopeResponse
       */
      Models::DescribeWafScopeResponse describeWafScope(const Models::DescribeWafScopeRequest &request);

      /**
       * @summary Retrieves a list of alert allowlist rules.
       *
       * @param request DescribeWhiteRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteRuleListResponse
       */
      Models::DescribeWhiteRuleListResponse describeWhiteRuleListWithOptions(const Models::DescribeWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of alert allowlist rules.
       *
       * @param request DescribeWhiteRuleListRequest
       * @return DescribeWhiteRuleListResponse
       */
      Models::DescribeWhiteRuleListResponse describeWhiteRuleList(const Models::DescribeWhiteRuleListRequest &request);

      /**
       * @summary Authorizes the user and creates the threat detection and response service-linked role AliyunServiceRoleForSasCloudSiem.
       *
       * @param request EnableAccessForCloudSiemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAccessForCloudSiemResponse
       */
      Models::EnableAccessForCloudSiemResponse enableAccessForCloudSiemWithOptions(const Models::EnableAccessForCloudSiemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes the user and creates the threat detection and response service-linked role AliyunServiceRoleForSasCloudSiem.
       *
       * @param request EnableAccessForCloudSiemRequest
       * @return EnableAccessForCloudSiemResponse
       */
      Models::EnableAccessForCloudSiemResponse enableAccessForCloudSiem(const Models::EnableAccessForCloudSiemRequest &request);

      /**
       * @summary Enables resource directory authorization for threat analysis. This operation can be called only by a resource directory administrator.
       *
       * @param request EnableServiceForCloudSiemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableServiceForCloudSiemResponse
       */
      Models::EnableServiceForCloudSiemResponse enableServiceForCloudSiemWithOptions(const Models::EnableServiceForCloudSiemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables resource directory authorization for threat analysis. This operation can be called only by a resource directory administrator.
       *
       * @param request EnableServiceForCloudSiemRequest
       * @return EnableServiceForCloudSiemResponse
       */
      Models::EnableServiceForCloudSiemResponse enableServiceForCloudSiem(const Models::EnableServiceForCloudSiemRequest &request);

      /**
       * @summary Retrieves the current billable storage usage and subscription purchase volume for threat analysis. Units are in GB.
       *
       * @param request GetCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCapacityResponse
       */
      Models::GetCapacityResponse getCapacityWithOptions(const Models::GetCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current billable storage usage and subscription purchase volume for threat analysis. Units are in GB.
       *
       * @param request GetCapacityRequest
       * @return GetCapacityResponse
       */
      Models::GetCapacityResponse getCapacity(const Models::GetCapacityRequest &request);

      /**
       * @summary Retrieves the details of user data storage on the Log Management page.
       *
       * @description The JsonConfig request parameter represents highly complex JSON configurations. To simplify this, we provide a supporting utility class with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetDataStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDataStorageResponse
       */
      Models::GetDataStorageResponse getDataStorageWithOptions(const Models::GetDataStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of user data storage on the Log Management page.
       *
       * @description The JsonConfig request parameter represents highly complex JSON configurations. To simplify this, we provide a supporting utility class with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetDataStorageRequest
       * @return GetDataStorageResponse
       */
      Models::GetDataStorageResponse getDataStorage(const Models::GetDataStorageRequest &request);

      /**
       * @summary Queries the entity count.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A utility class is provided to assist with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetEntitiyStatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetEntitiyStatResponse
       */
      Models::GetEntitiyStatResponse getEntitiyStatWithOptions(const Models::GetEntitiyStatRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entity count.
       *
       * @description The JsonConfig request parameter is a complex JSON configuration. A utility class is provided to assist with specific configuration examples. For more information, refer to [Demo](https://github.com/aliyun/cloud-siem-client/blob/master/src/main/java/com/aliyun/security/cloudsiem/client/sample/JobBuilderSample.java).
       *
       * @param request GetEntitiyStatRequest
       * @return GetEntitiyStatResponse
       */
      Models::GetEntitiyStatResponse getEntitiyStat(const Models::GetEntitiyStatRequest &request);

      /**
       * @summary Retrieves the storage settings created by the Threat Analysis and Response product in your Simple Log Service (SLS). These settings include the storage duration and storage region.
       *
       * @param request GetStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageResponse
       */
      Models::GetStorageResponse getStorageWithOptions(const Models::GetStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the storage settings created by the Threat Analysis and Response product in your Simple Log Service (SLS). These settings include the storage duration and storage region.
       *
       * @param request GetStorageRequest
       * @return GetStorageResponse
       */
      Models::GetStorageResponse getStorage(const Models::GetStorageRequest &request);

      /**
       * @summary Queries the list of multi-cloud AccessKeyIds that are already bound.
       *
       * @description Before calling this operation to view the list of bound multi-cloud AccessKeys, complete the following preparations:
       * 1. Activate the Cloud Threat Detection and Response (CTDR) service in Security Center.
       * 2. Configure the SIEM AccessKey for threat detection and response.
       *
       * @param request ListAccountAccessIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountAccessIdResponse
       */
      Models::ListAccountAccessIdResponse listAccountAccessIdWithOptions(const Models::ListAccountAccessIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of multi-cloud AccessKeyIds that are already bound.
       *
       * @description Before calling this operation to view the list of bound multi-cloud AccessKeys, complete the following preparations:
       * 1. Activate the Cloud Threat Detection and Response (CTDR) service in Security Center.
       * 2. Configure the SIEM AccessKey for threat detection and response.
       *
       * @param request ListAccountAccessIdRequest
       * @return ListAccountAccessIdResponse
       */
      Models::ListAccountAccessIdResponse listAccountAccessId(const Models::ListAccountAccessIdRequest &request);

      /**
       * @summary Queries the list of accounts by log.
       *
       * @description Before calling this operation to query the list of accounts by log, you must activate the Cloud Threat Detection and Response (CTDR) service. You can activate the service by calling the EnableServiceForCloudSiem operation or through the threat analysis console in Security Center. This operation is unavailable if the service is not activated.
       *
       * @param request ListAccountsByLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsByLogResponse
       */
      Models::ListAccountsByLogResponse listAccountsByLogWithOptions(const Models::ListAccountsByLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of accounts by log.
       *
       * @description Before calling this operation to query the list of accounts by log, you must activate the Cloud Threat Detection and Response (CTDR) service. You can activate the service by calling the EnableServiceForCloudSiem operation or through the threat analysis console in Security Center. This operation is unavailable if the service is not activated.
       *
       * @param request ListAccountsByLogRequest
       * @return ListAccountsByLogResponse
       */
      Models::ListAccountsByLogResponse listAccountsByLog(const Models::ListAccountsByLogRequest &request);

      /**
       * @summary Queries the list of cloud services that are supported for data ingestion by threat detection and response.
       *
       * @param request ListAllProdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllProdsResponse
       */
      Models::ListAllProdsResponse listAllProdsWithOptions(const Models::ListAllProdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of cloud services that are supported for data ingestion by threat detection and response.
       *
       * @param request ListAllProdsRequest
       * @return ListAllProdsResponse
       */
      Models::ListAllProdsResponse listAllProds(const Models::ListAllProdsRequest &request);

      /**
       * @summary Retrieves a list of automated response rules.
       *
       * @param request ListAutomateResponseConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutomateResponseConfigsResponse
       */
      Models::ListAutomateResponseConfigsResponse listAutomateResponseConfigsWithOptions(const Models::ListAutomateResponseConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of automated response rules.
       *
       * @param request ListAutomateResponseConfigsRequest
       * @return ListAutomateResponseConfigsResponse
       */
      Models::ListAutomateResponseConfigsResponse listAutomateResponseConfigs(const Models::ListAutomateResponseConfigsRequest &request);

      /**
       * @summary Lists the multi-cloud accounts that are bound to threat detection and response.
       *
       * @param request ListBindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindAccountResponse
       */
      Models::ListBindAccountResponse listBindAccountWithOptions(const Models::ListBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the multi-cloud accounts that are bound to threat detection and response.
       *
       * @param request ListBindAccountRequest
       * @return ListBindAccountResponse
       */
      Models::ListBindAccountResponse listBindAccount(const Models::ListBindAccountRequest &request);

      /**
       * @summary Enumerates all data sources.
       *
       * @param request ListBindDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindDataSourcesResponse
       */
      Models::ListBindDataSourcesResponse listBindDataSourcesWithOptions(const Models::ListBindDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enumerates all data sources.
       *
       * @param request ListBindDataSourcesRequest
       * @return ListBindDataSourcesResponse
       */
      Models::ListBindDataSourcesResponse listBindDataSources(const Models::ListBindDataSourcesRequest &request);

      /**
       * @summary Retrieves a list of custom rules.
       *
       * @param request ListCloudSiemCustomizeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudSiemCustomizeRulesResponse
       */
      Models::ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRulesWithOptions(const Models::ListCloudSiemCustomizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of custom rules.
       *
       * @param request ListCloudSiemCustomizeRulesRequest
       * @return ListCloudSiemCustomizeRulesResponse
       */
      Models::ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRules(const Models::ListCloudSiemCustomizeRulesRequest &request);

      /**
       * @summary Retrieves a list of predefined rules.
       *
       * @param request ListCloudSiemPredefinedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudSiemPredefinedRulesResponse
       */
      Models::ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRulesWithOptions(const Models::ListCloudSiemPredefinedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of predefined rules.
       *
       * @param request ListCloudSiemPredefinedRulesRequest
       * @return ListCloudSiemPredefinedRulesResponse
       */
      Models::ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRules(const Models::ListCloudSiemPredefinedRulesRequest &request);

      /**
       * @summary Queries the list of test results for custom rules.
       *
       * @param request ListCustomizeRuleTestResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomizeRuleTestResultResponse
       */
      Models::ListCustomizeRuleTestResultResponse listCustomizeRuleTestResultWithOptions(const Models::ListCustomizeRuleTestResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of test results for custom rules.
       *
       * @param request ListCustomizeRuleTestResultRequest
       * @return ListCustomizeRuleTestResultResponse
       */
      Models::ListCustomizeRuleTestResultResponse listCustomizeRuleTestResult(const Models::ListCustomizeRuleTestResultRequest &request);

      /**
       * @summary Queries the logs of a data source.
       *
       * @param request ListDataSourceLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceLogsResponse
       */
      Models::ListDataSourceLogsResponse listDataSourceLogsWithOptions(const Models::ListDataSourceLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of a data source.
       *
       * @param request ListDataSourceLogsRequest
       * @return ListDataSourceLogsResponse
       */
      Models::ListDataSourceLogsResponse listDataSourceLogs(const Models::ListDataSourceLogsRequest &request);

      /**
       * @summary Enumerates the multi-cloud data source types that are supported by threat analysis.
       *
       * @param request ListDataSourceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceTypesResponse
       */
      Models::ListDataSourceTypesResponse listDataSourceTypesWithOptions(const Models::ListDataSourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enumerates the multi-cloud data source types that are supported by threat analysis.
       *
       * @param request ListDataSourceTypesRequest
       * @return ListDataSourceTypesResponse
       */
      Models::ListDataSourceTypesResponse listDataSourceTypes(const Models::ListDataSourceTypesRequest &request);

      /**
       * @summary Queries the products and logs integrated with Threat Analysis for the entire enterprise or regular members, along with the data delivery status of these logs.
       *
       * @param request ListDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeliveryResponse
       */
      Models::ListDeliveryResponse listDeliveryWithOptions(const Models::ListDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the products and logs integrated with Threat Analysis for the entire enterprise or regular members, along with the data delivery status of these logs.
       *
       * @param request ListDeliveryRequest
       * @return ListDeliveryResponse
       */
      Models::ListDeliveryResponse listDelivery(const Models::ListDeliveryRequest &request);

      /**
       * @summary Queries the list of system-recommended response policies.
       *
       * @param tmpReq ListDisposeStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisposeStrategyResponse
       */
      Models::ListDisposeStrategyResponse listDisposeStrategyWithOptions(const Models::ListDisposeStrategyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of system-recommended response policies.
       *
       * @param request ListDisposeStrategyRequest
       * @return ListDisposeStrategyResponse
       */
      Models::ListDisposeStrategyResponse listDisposeStrategy(const Models::ListDisposeStrategyRequest &request);

      /**
       * @summary Queries a list of entities.
       *
       * @param request ListEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEntitiesResponse
       */
      Models::ListEntitiesResponse listEntitiesWithOptions(const Models::ListEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of entities.
       *
       * @param request ListEntitiesRequest
       * @return ListEntitiesResponse
       */
      Models::ListEntitiesResponse listEntities(const Models::ListEntitiesRequest &request);

      /**
       * @summary Queries the log onboarding details for the product.
       *
       * @param request ListImportedLogsByProdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImportedLogsByProdResponse
       */
      Models::ListImportedLogsByProdResponse listImportedLogsByProdWithOptions(const Models::ListImportedLogsByProdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log onboarding details for the product.
       *
       * @param request ListImportedLogsByProdRequest
       * @return ListImportedLogsByProdResponse
       */
      Models::ListImportedLogsByProdResponse listImportedLogsByProd(const Models::ListImportedLogsByProdRequest &request);

      /**
       * @summary Queries projects and Logstores based on the name patterns of the default SLS project and Logstore for an Alibaba Cloud service.
       *
       * @param request ListProjectLogStoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectLogStoresResponse
       */
      Models::ListProjectLogStoresResponse listProjectLogStoresWithOptions(const Models::ListProjectLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries projects and Logstores based on the name patterns of the default SLS project and Logstore for an Alibaba Cloud service.
       *
       * @param request ListProjectLogStoresRequest
       * @return ListProjectLogStoresResponse
       */
      Models::ListProjectLogStoresResponse listProjectLogStores(const Models::ListProjectLogStoresRequest &request);

      /**
       * @summary Lists the Alibaba Cloud accounts that are managed by the multi-account management feature of Threat Analysis. Only managed accounts can use features such as log ingestion and event handling in Threat Analysis.
       *
       * @param request ListRdUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRdUsersResponse
       */
      Models::ListRdUsersResponse listRdUsersWithOptions(const Models::ListRdUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the Alibaba Cloud accounts that are managed by the multi-account management feature of Threat Analysis. Only managed accounts can use features such as log ingestion and event handling in Threat Analysis.
       *
       * @param request ListRdUsersRequest
       * @return ListRdUsersResponse
       */
      Models::ListRdUsersResponse listRdUsers(const Models::ListRdUsersRequest &request);

      /**
       * @summary Modifies a bound cloud account.
       *
       * @description Before calling this operation to modify a bound cloud account, complete the following steps in order:
       * 1. Configure the AccessKey credentials of a third-party cloud provider (Tencent Cloud or Huawei Cloud) in Security Center (SAS).
       * 2. Call the BindAccount operation to create a binding record and obtain the BindId.
       * 3. Call this operation (ModifyBindAccount) with the BindId to modify the bound account.
       *
       * @param request ModifyBindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBindAccountResponse
       */
      Models::ModifyBindAccountResponse modifyBindAccountWithOptions(const Models::ModifyBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a bound cloud account.
       *
       * @description Before calling this operation to modify a bound cloud account, complete the following steps in order:
       * 1. Configure the AccessKey credentials of a third-party cloud provider (Tencent Cloud or Huawei Cloud) in Security Center (SAS).
       * 2. Call the BindAccount operation to create a binding record and obtain the BindId.
       * 3. Call this operation (ModifyBindAccount) with the BindId to modify the bound account.
       *
       * @param request ModifyBindAccountRequest
       * @return ModifyBindAccountResponse
       */
      Models::ModifyBindAccountResponse modifyBindAccount(const Models::ModifyBindAccountRequest &request);

      /**
       * @summary Modifies the description of an existing data source.
       *
       * @description Before you call this operation to modify a data source, you must complete the following prerequisites in sequence:
       * 1. Purchase the Cloud SIEM service.
       * 2. Call the BindAccount operation to bind a third-party cloud account.
       * 3. Call the AddDataSource operation to create a data source instance and obtain the data source ID (DataSourceInstanceId).
       *
       * @param request ModifyDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataSourceResponse
       */
      Models::ModifyDataSourceResponse modifyDataSourceWithOptions(const Models::ModifyDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an existing data source.
       *
       * @description Before you call this operation to modify a data source, you must complete the following prerequisites in sequence:
       * 1. Purchase the Cloud SIEM service.
       * 2. Call the BindAccount operation to bind a third-party cloud account.
       * 3. Call the AddDataSource operation to create a data source instance and obtain the data source ID (DataSourceInstanceId).
       *
       * @param request ModifyDataSourceRequest
       * @return ModifyDataSourceResponse
       */
      Models::ModifyDataSourceResponse modifyDataSource(const Models::ModifyDataSourceRequest &request);

      /**
       * @summary Modifies the description of logs added to a data source.
       *
       * @param request ModifyDataSourceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataSourceLogResponse
       */
      Models::ModifyDataSourceLogResponse modifyDataSourceLogWithOptions(const Models::ModifyDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of logs added to a data source.
       *
       * @param request ModifyDataSourceLogRequest
       * @return ModifyDataSourceLogResponse
       */
      Models::ModifyDataSourceLogResponse modifyDataSourceLog(const Models::ModifyDataSourceLogRequest &request);

      /**
       * @summary Enables log delivery for onboarded cloud services.
       *
       * @param request OpenDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDeliveryResponse
       */
      Models::OpenDeliveryResponse openDeliveryWithOptions(const Models::OpenDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables log delivery for onboarded cloud services.
       *
       * @param request OpenDeliveryRequest
       * @return OpenDeliveryResponse
       */
      Models::OpenDeliveryResponse openDelivery(const Models::OpenDeliveryRequest &request);

      /**
       * @summary Adds or updates an automated response rule.
       *
       * @param request PostAutomateResponseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostAutomateResponseConfigResponse
       */
      Models::PostAutomateResponseConfigResponse postAutomateResponseConfigWithOptions(const Models::PostAutomateResponseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or updates an automated response rule.
       *
       * @param request PostAutomateResponseConfigRequest
       * @return PostAutomateResponseConfigResponse
       */
      Models::PostAutomateResponseConfigResponse postAutomateResponseConfig(const Models::PostAutomateResponseConfigRequest &request);

      /**
       * @summary Adds or updates a custom rule.
       *
       * @param request PostCustomizeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostCustomizeRuleResponse
       */
      Models::PostCustomizeRuleResponse postCustomizeRuleWithOptions(const Models::PostCustomizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or updates a custom rule.
       *
       * @param request PostCustomizeRuleRequest
       * @return PostCustomizeRuleResponse
       */
      Models::PostCustomizeRuleResponse postCustomizeRule(const Models::PostCustomizeRuleRequest &request);

      /**
       * @summary Submits a custom rule for testing.
       *
       * @param request PostCustomizeRuleTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostCustomizeRuleTestResponse
       */
      Models::PostCustomizeRuleTestResponse postCustomizeRuleTestWithOptions(const Models::PostCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a custom rule for testing.
       *
       * @param request PostCustomizeRuleTestRequest
       * @return PostCustomizeRuleTestResponse
       */
      Models::PostCustomizeRuleTestResponse postCustomizeRuleTest(const Models::PostCustomizeRuleTestRequest &request);

      /**
       * @summary Submits incident handling information, updates the incident status, and updates the incident severity level.
       *
       * @param request PostEventDisposeAndWhiteruleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostEventDisposeAndWhiteruleListResponse
       */
      Models::PostEventDisposeAndWhiteruleListResponse postEventDisposeAndWhiteruleListWithOptions(const Models::PostEventDisposeAndWhiteruleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits incident handling information, updates the incident status, and updates the incident severity level.
       *
       * @param request PostEventDisposeAndWhiteruleListRequest
       * @return PostEventDisposeAndWhiteruleListResponse
       */
      Models::PostEventDisposeAndWhiteruleListResponse postEventDisposeAndWhiteruleList(const Models::PostEventDisposeAndWhiteruleListRequest &request);

      /**
       * @summary Submits alert whitelisting rules.
       *
       * @param request PostEventWhiteruleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostEventWhiteruleListResponse
       */
      Models::PostEventWhiteruleListResponse postEventWhiteruleListWithOptions(const Models::PostEventWhiteruleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits alert whitelisting rules.
       *
       * @param request PostEventWhiteruleListRequest
       * @return PostEventWhiteruleListResponse
       */
      Models::PostEventWhiteruleListResponse postEventWhiteruleList(const Models::PostEventWhiteruleListRequest &request);

      /**
       * @summary Ends the custom rule test.
       *
       * @param request PostFinishCustomizeRuleTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostFinishCustomizeRuleTestResponse
       */
      Models::PostFinishCustomizeRuleTestResponse postFinishCustomizeRuleTestWithOptions(const Models::PostFinishCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends the custom rule test.
       *
       * @param request PostFinishCustomizeRuleTestRequest
       * @return PostFinishCustomizeRuleTestResponse
       */
      Models::PostFinishCustomizeRuleTestResponse postFinishCustomizeRuleTest(const Models::PostFinishCustomizeRuleTestRequest &request);

      /**
       * @summary Updates the status of a custom rule.
       *
       * @param request PostRuleStatusChangeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostRuleStatusChangeResponse
       */
      Models::PostRuleStatusChangeResponse postRuleStatusChangeWithOptions(const Models::PostRuleStatusChangeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of a custom rule.
       *
       * @param request PostRuleStatusChangeRequest
       * @return PostRuleStatusChangeResponse
       */
      Models::PostRuleStatusChangeResponse postRuleStatusChange(const Models::PostRuleStatusChangeRequest &request);

      /**
       * @summary Releases storage space. This operation is irreversible and causes data loss. Use with caution.
       *
       * @param request RestoreCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreCapacityResponse
       */
      Models::RestoreCapacityResponse restoreCapacityWithOptions(const Models::RestoreCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases storage space. This operation is irreversible and causes data loss. Use with caution.
       *
       * @param request RestoreCapacityRequest
       * @return RestoreCapacityResponse
       */
      Models::RestoreCapacityResponse restoreCapacity(const Models::RestoreCapacityRequest &request);

      /**
       * @summary Saves user-configured storage information such as the retention period and storage region.
       *
       * @param request SetStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetStorageResponse
       */
      Models::SetStorageResponse setStorageWithOptions(const Models::SetStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves user-configured storage information such as the retention period and storage region.
       *
       * @param request SetStorageRequest
       * @return SetStorageResponse
       */
      Models::SetStorageResponse setStorage(const Models::SetStorageRequest &request);

      /**
       * @summary Submits multiple onboarding tasks.
       *
       * @param request SubmitImportLogTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImportLogTasksResponse
       */
      Models::SubmitImportLogTasksResponse submitImportLogTasksWithOptions(const Models::SubmitImportLogTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits multiple onboarding tasks.
       *
       * @param request SubmitImportLogTasksRequest
       * @return SubmitImportLogTasksResponse
       */
      Models::SubmitImportLogTasksResponse submitImportLogTasks(const Models::SubmitImportLogTasksRequest &request);

      /**
       * @summary Updates the status of automated response rules.
       *
       * @param request UpdateAutomateResponseConfigStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutomateResponseConfigStatusResponse
       */
      Models::UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatusWithOptions(const Models::UpdateAutomateResponseConfigStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of automated response rules.
       *
       * @param request UpdateAutomateResponseConfigStatusRequest
       * @return UpdateAutomateResponseConfigStatusResponse
       */
      Models::UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatus(const Models::UpdateAutomateResponseConfigStatusRequest &request);

      /**
       * @summary Adds or updates alert whitelist rules.
       *
       * @param request UpdateWhiteRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhiteRuleListResponse
       */
      Models::UpdateWhiteRuleListResponse updateWhiteRuleListWithOptions(const Models::UpdateWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or updates alert whitelist rules.
       *
       * @param request UpdateWhiteRuleListRequest
       * @return UpdateWhiteRuleListResponse
       */
      Models::UpdateWhiteRuleListResponse updateWhiteRuleList(const Models::UpdateWhiteRuleListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
