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
       * @summary Adds a data source to a cloud account that is added to the threat analysis feature.
       *
       * @param request AddDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSourceWithOptions(const Models::AddDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a data source to a cloud account that is added to the threat analysis feature.
       *
       * @param request AddDataSourceRequest
       * @return AddDataSourceResponse
       */
      Models::AddDataSourceResponse addDataSource(const Models::AddDataSourceRequest &request);

      /**
       * @summary Adds logs of a cloud account to the threat analysis feature.
       *
       * @param request AddDataSourceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDataSourceLogResponse
       */
      Models::AddDataSourceLogResponse addDataSourceLogWithOptions(const Models::AddDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds logs of a cloud account to the threat analysis feature.
       *
       * @param request AddDataSourceLogRequest
       * @return AddDataSourceLogResponse
       */
      Models::AddDataSourceLogResponse addDataSourceLog(const Models::AddDataSourceLogRequest &request);

      /**
       * @summary Adds the logs of a cloud service within a cloud account to the threat analysis feature for alert and event anslysis.
       *
       * @param request AddUserSourceLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserSourceLogConfigResponse
       */
      Models::AddUserSourceLogConfigResponse addUserSourceLogConfigWithOptions(const Models::AddUserSourceLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds the logs of a cloud service within a cloud account to the threat analysis feature for alert and event anslysis.
       *
       * @param request AddUserSourceLogConfigRequest
       * @return AddUserSourceLogConfigResponse
       */
      Models::AddUserSourceLogConfigResponse addUserSourceLogConfig(const Models::AddUserSourceLogConfigRequest &request);

      /**
       * @summary Adds a third-party cloud account that is displayed on the Multi-cloud assets tab of the Feature Settings page to the threat analysis feature.
       *
       * @param request BindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindAccountResponse
       */
      Models::BindAccountResponse bindAccountWithOptions(const Models::BindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a third-party cloud account that is displayed on the Multi-cloud assets tab of the Feature Settings page to the threat analysis feature.
       *
       * @param request BindAccountRequest
       * @return BindAccountResponse
       */
      Models::BindAccountResponse bindAccount(const Models::BindAccountRequest &request);

      /**
       * @summary Disables the log delivery feature for a cloud service.
       *
       * @param request CloseDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CloseDeliveryResponse
       */
      Models::CloseDeliveryResponse closeDeliveryWithOptions(const Models::CloseDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the log delivery feature for a cloud service.
       *
       * @param request CloseDeliveryRequest
       * @return CloseDeliveryResponse
       */
      Models::CloseDeliveryResponse closeDelivery(const Models::CloseDeliveryRequest &request);

      /**
       * @summary Deletes the automated response rule with a specified ID.
       *
       * @param request DeleteAutomateResponseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAutomateResponseConfigResponse
       */
      Models::DeleteAutomateResponseConfigResponse deleteAutomateResponseConfigWithOptions(const Models::DeleteAutomateResponseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the automated response rule with a specified ID.
       *
       * @param request DeleteAutomateResponseConfigRequest
       * @return DeleteAutomateResponseConfigResponse
       */
      Models::DeleteAutomateResponseConfigResponse deleteAutomateResponseConfig(const Models::DeleteAutomateResponseConfigRequest &request);

      /**
       * @summary Removes a third-party cloud account that is added to the threat analysis feature by using its AccessKey ID. You can add another cloud account based on your business requirements.
       *
       * @param request DeleteBindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBindAccountResponse
       */
      Models::DeleteBindAccountResponse deleteBindAccountWithOptions(const Models::DeleteBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a third-party cloud account that is added to the threat analysis feature by using its AccessKey ID. You can add another cloud account based on your business requirements.
       *
       * @param request DeleteBindAccountRequest
       * @return DeleteBindAccountResponse
       */
      Models::DeleteBindAccountResponse deleteBindAccount(const Models::DeleteBindAccountRequest &request);

      /**
       * @summary Deletes a rule by rule ID.
       *
       * @param request DeleteCustomizeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomizeRuleResponse
       */
      Models::DeleteCustomizeRuleResponse deleteCustomizeRuleWithOptions(const Models::DeleteCustomizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule by rule ID.
       *
       * @param request DeleteCustomizeRuleRequest
       * @return DeleteCustomizeRuleResponse
       */
      Models::DeleteCustomizeRuleResponse deleteCustomizeRule(const Models::DeleteCustomizeRuleRequest &request);

      /**
       * @summary Removes a data source that is no longer required.
       *
       * @param request DeleteDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSourceWithOptions(const Models::DeleteDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a data source that is no longer required.
       *
       * @param request DeleteDataSourceRequest
       * @return DeleteDataSourceResponse
       */
      Models::DeleteDataSourceResponse deleteDataSource(const Models::DeleteDataSourceRequest &request);

      /**
       * @summary Removes a log.
       *
       * @param request DeleteDataSourceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDataSourceLogResponse
       */
      Models::DeleteDataSourceLogResponse deleteDataSourceLogWithOptions(const Models::DeleteDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a log.
       *
       * @param request DeleteDataSourceLogRequest
       * @return DeleteDataSourceLogResponse
       */
      Models::DeleteDataSourceLogResponse deleteDataSourceLog(const Models::DeleteDataSourceLogRequest &request);

      /**
       * @summary Deletes an alert whitelist rule with a specified ID.
       *
       * @param request DeleteWhiteRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWhiteRuleListResponse
       */
      Models::DeleteWhiteRuleListResponse deleteWhiteRuleListWithOptions(const Models::DeleteWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert whitelist rule with a specified ID.
       *
       * @param request DeleteWhiteRuleListRequest
       * @return DeleteWhiteRuleListResponse
       */
      Models::DeleteWhiteRuleListResponse deleteWhiteRuleList(const Models::DeleteWhiteRuleListRequest &request);

      /**
       * @summary Queries the aggregate functions that are supported for a custom rule.
       *
       * @param request DescribeAggregateFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAggregateFunctionResponse
       */
      Models::DescribeAggregateFunctionResponse describeAggregateFunctionWithOptions(const Models::DescribeAggregateFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the aggregate functions that are supported for a custom rule.
       *
       * @param request DescribeAggregateFunctionRequest
       * @return DescribeAggregateFunctionResponse
       */
      Models::DescribeAggregateFunctionResponse describeAggregateFunction(const Models::DescribeAggregateFunctionRequest &request);

      /**
       * @summary Queries the scenarios in which an alert needs to be added to the whitelist.
       *
       * @param request DescribeAlertSceneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSceneResponse
       */
      Models::DescribeAlertSceneResponse describeAlertSceneWithOptions(const Models::DescribeAlertSceneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scenarios in which an alert needs to be added to the whitelist.
       *
       * @param request DescribeAlertSceneRequest
       * @return DescribeAlertSceneResponse
       */
      Models::DescribeAlertSceneResponse describeAlertScene(const Models::DescribeAlertSceneRequest &request);

      /**
       * @summary Queries the scenarios and objects that can be added to an alert whitelist rule.
       *
       * @param request DescribeAlertSceneByEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSceneByEventResponse
       */
      Models::DescribeAlertSceneByEventResponse describeAlertSceneByEventWithOptions(const Models::DescribeAlertSceneByEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scenarios and objects that can be added to an alert whitelist rule.
       *
       * @param request DescribeAlertSceneByEventRequest
       * @return DescribeAlertSceneByEventResponse
       */
      Models::DescribeAlertSceneByEventResponse describeAlertSceneByEvent(const Models::DescribeAlertSceneByEventRequest &request);

      /**
       * @summary Queries alert data sources.
       *
       * @param request DescribeAlertSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSourceResponse
       */
      Models::DescribeAlertSourceResponse describeAlertSourceWithOptions(const Models::DescribeAlertSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert data sources.
       *
       * @param request DescribeAlertSourceRequest
       * @return DescribeAlertSourceResponse
       */
      Models::DescribeAlertSourceResponse describeAlertSource(const Models::DescribeAlertSourceRequest &request);

      /**
       * @summary Queries the data sources of the alert that is associated with an event.
       *
       * @param request DescribeAlertSourceWithEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertSourceWithEventResponse
       */
      Models::DescribeAlertSourceWithEventResponse describeAlertSourceWithEventWithOptions(const Models::DescribeAlertSourceWithEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the data sources of the alert that is associated with an event.
       *
       * @param request DescribeAlertSourceWithEventRequest
       * @return DescribeAlertSourceWithEventResponse
       */
      Models::DescribeAlertSourceWithEventResponse describeAlertSourceWithEvent(const Models::DescribeAlertSourceWithEventRequest &request);

      /**
       * @summary Queries the threat types that you can select when you create a custom rule.
       *
       * @param request DescribeAlertTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertTypeResponse
       */
      Models::DescribeAlertTypeResponse describeAlertTypeWithOptions(const Models::DescribeAlertTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the threat types that you can select when you create a custom rule.
       *
       * @param request DescribeAlertTypeRequest
       * @return DescribeAlertTypeResponse
       */
      Models::DescribeAlertTypeResponse describeAlertType(const Models::DescribeAlertTypeRequest &request);

      /**
       * @summary Queries alerts within your account.
       *
       * @param request DescribeAlertsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsResponse
       */
      Models::DescribeAlertsResponse describeAlertsWithOptions(const Models::DescribeAlertsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alerts within your account.
       *
       * @param request DescribeAlertsRequest
       * @return DescribeAlertsResponse
       */
      Models::DescribeAlertsResponse describeAlerts(const Models::DescribeAlertsRequest &request);

      /**
       * @summary Queries the number of alerts of different severities.
       *
       * @param request DescribeAlertsCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsCountResponse
       */
      Models::DescribeAlertsCountResponse describeAlertsCountWithOptions(const Models::DescribeAlertsCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of alerts of different severities.
       *
       * @param request DescribeAlertsCountRequest
       * @return DescribeAlertsCountResponse
       */
      Models::DescribeAlertsCountResponse describeAlertsCount(const Models::DescribeAlertsCountRequest &request);

      /**
       * @summary Queries the alerts that are associated with an entity.
       *
       * @param request DescribeAlertsWithEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsWithEntityResponse
       */
      Models::DescribeAlertsWithEntityResponse describeAlertsWithEntityWithOptions(const Models::DescribeAlertsWithEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alerts that are associated with an entity.
       *
       * @param request DescribeAlertsWithEntityRequest
       * @return DescribeAlertsWithEntityResponse
       */
      Models::DescribeAlertsWithEntityResponse describeAlertsWithEntity(const Models::DescribeAlertsWithEntityRequest &request);

      /**
       * @summary Queries the alerts that are associated with an event.
       *
       * @param request DescribeAlertsWithEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertsWithEventResponse
       */
      Models::DescribeAlertsWithEventResponse describeAlertsWithEventWithOptions(const Models::DescribeAlertsWithEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alerts that are associated with an event.
       *
       * @param request DescribeAlertsWithEventRequest
       * @return DescribeAlertsWithEventResponse
       */
      Models::DescribeAlertsWithEventResponse describeAlertsWithEvent(const Models::DescribeAlertsWithEventRequest &request);

      /**
       * @summary Checks whether the security information and event management (SIEM) system is granted the required permissions to access other cloud resources within your Alibaba Cloud account and whether the AliyunServiceRoleForSasCloudSiem service-linked role is created.
       *
       * @param request DescribeAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAuthResponse
       */
      Models::DescribeAuthResponse describeAuthWithOptions(const Models::DescribeAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the security information and event management (SIEM) system is granted the required permissions to access other cloud resources within your Alibaba Cloud account and whether the AliyunServiceRoleForSasCloudSiem service-linked role is created.
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
       * @summary Queries the configurable fields and operators of an automated response rule.
       *
       * @param request DescribeAutomateResponseConfigFeatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAutomateResponseConfigFeatureResponse
       */
      Models::DescribeAutomateResponseConfigFeatureResponse describeAutomateResponseConfigFeatureWithOptions(const Models::DescribeAutomateResponseConfigFeatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurable fields and operators of an automated response rule.
       *
       * @param request DescribeAutomateResponseConfigFeatureRequest
       * @return DescribeAutomateResponseConfigFeatureResponse
       */
      Models::DescribeAutomateResponseConfigFeatureResponse describeAutomateResponseConfigFeature(const Models::DescribeAutomateResponseConfigFeatureRequest &request);

      /**
       * @summary Queries the assets that are associated with an event.
       *
       * @param request DescribeCloudSiemAssetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemAssetsResponse
       */
      Models::DescribeCloudSiemAssetsResponse describeCloudSiemAssetsWithOptions(const Models::DescribeCloudSiemAssetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the assets that are associated with an event.
       *
       * @param request DescribeCloudSiemAssetsRequest
       * @return DescribeCloudSiemAssetsResponse
       */
      Models::DescribeCloudSiemAssetsResponse describeCloudSiemAssets(const Models::DescribeCloudSiemAssetsRequest &request);

      /**
       * @summary Queries the number of assets that are associated with an event by asset type.
       *
       * @param request DescribeCloudSiemAssetsCounterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemAssetsCounterResponse
       */
      Models::DescribeCloudSiemAssetsCounterResponse describeCloudSiemAssetsCounterWithOptions(const Models::DescribeCloudSiemAssetsCounterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of assets that are associated with an event by asset type.
       *
       * @param request DescribeCloudSiemAssetsCounterRequest
       * @return DescribeCloudSiemAssetsCounterResponse
       */
      Models::DescribeCloudSiemAssetsCounterResponse describeCloudSiemAssetsCounter(const Models::DescribeCloudSiemAssetsCounterRequest &request);

      /**
       * @summary Queries the details of an event.
       *
       * @param request DescribeCloudSiemEventDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemEventDetailResponse
       */
      Models::DescribeCloudSiemEventDetailResponse describeCloudSiemEventDetailWithOptions(const Models::DescribeCloudSiemEventDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an event.
       *
       * @param request DescribeCloudSiemEventDetailRequest
       * @return DescribeCloudSiemEventDetailResponse
       */
      Models::DescribeCloudSiemEventDetailResponse describeCloudSiemEventDetail(const Models::DescribeCloudSiemEventDetailRequest &request);

      /**
       * @summary Queries events in SIEM.
       *
       * @param request DescribeCloudSiemEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudSiemEventsResponse
       */
      Models::DescribeCloudSiemEventsResponse describeCloudSiemEventsWithOptions(const Models::DescribeCloudSiemEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries events in SIEM.
       *
       * @param request DescribeCloudSiemEventsRequest
       * @return DescribeCloudSiemEventsResponse
       */
      Models::DescribeCloudSiemEventsResponse describeCloudSiemEvents(const Models::DescribeCloudSiemEventsRequest &request);

      /**
       * @summary Queries the number of custom rules.
       *
       * @param request DescribeCustomizeRuleCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeRuleCountResponse
       */
      Models::DescribeCustomizeRuleCountResponse describeCustomizeRuleCountWithOptions(const Models::DescribeCustomizeRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of custom rules.
       *
       * @param request DescribeCustomizeRuleCountRequest
       * @return DescribeCustomizeRuleCountResponse
       */
      Models::DescribeCustomizeRuleCountResponse describeCustomizeRuleCount(const Models::DescribeCustomizeRuleCountRequest &request);

      /**
       * @summary Queries the historical simulation data that is used in a simulation test scenario.
       *
       * @param request DescribeCustomizeRuleTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeRuleTestResponse
       */
      Models::DescribeCustomizeRuleTestResponse describeCustomizeRuleTestWithOptions(const Models::DescribeCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical simulation data that is used in a simulation test scenario.
       *
       * @param request DescribeCustomizeRuleTestRequest
       * @return DescribeCustomizeRuleTestResponse
       */
      Models::DescribeCustomizeRuleTestResponse describeCustomizeRuleTest(const Models::DescribeCustomizeRuleTestRequest &request);

      /**
       * @summary Queries the chart that displays the test results of business data for a custom rule.
       *
       * @param request DescribeCustomizeRuleTestHistogramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomizeRuleTestHistogramResponse
       */
      Models::DescribeCustomizeRuleTestHistogramResponse describeCustomizeRuleTestHistogramWithOptions(const Models::DescribeCustomizeRuleTestHistogramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the chart that displays the test results of business data for a custom rule.
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
       * @summary Queries the parameters of a data source.
       *
       * @param request DescribeDataSourceParametersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDataSourceParametersResponse
       */
      Models::DescribeDataSourceParametersResponse describeDataSourceParametersWithOptions(const Models::DescribeDataSourceParametersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parameters of a data source.
       *
       * @param request DescribeDataSourceParametersRequest
       * @return DescribeDataSourceParametersResponse
       */
      Models::DescribeDataSourceParametersResponse describeDataSourceParameters(const Models::DescribeDataSourceParametersRequest &request);

      /**
       * @summary Queries the list of entities and playbooks that need to be handled.
       *
       * @param request DescribeDisposeAndPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisposeAndPlaybookResponse
       */
      Models::DescribeDisposeAndPlaybookResponse describeDisposeAndPlaybookWithOptions(const Models::DescribeDisposeAndPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of entities and playbooks that need to be handled.
       *
       * @param request DescribeDisposeAndPlaybookRequest
       * @return DescribeDisposeAndPlaybookResponse
       */
      Models::DescribeDisposeAndPlaybookResponse describeDisposeAndPlaybook(const Models::DescribeDisposeAndPlaybookRequest &request);

      /**
       * @summary Queries the list of playbooks that are used by a handling policy.
       *
       * @param request DescribeDisposeStrategyPlaybookRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDisposeStrategyPlaybookResponse
       */
      Models::DescribeDisposeStrategyPlaybookResponse describeDisposeStrategyPlaybookWithOptions(const Models::DescribeDisposeStrategyPlaybookRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of playbooks that are used by a handling policy.
       *
       * @param request DescribeDisposeStrategyPlaybookRequest
       * @return DescribeDisposeStrategyPlaybookResponse
       */
      Models::DescribeDisposeStrategyPlaybookResponse describeDisposeStrategyPlaybook(const Models::DescribeDisposeStrategyPlaybookRequest &request);

      /**
       * @summary Queries the details of an entity.
       *
       * @param request DescribeEntityInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEntityInfoResponse
       */
      Models::DescribeEntityInfoResponse describeEntityInfoWithOptions(const Models::DescribeEntityInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an entity.
       *
       * @param request DescribeEntityInfoRequest
       * @return DescribeEntityInfoResponse
       */
      Models::DescribeEntityInfoResponse describeEntityInfo(const Models::DescribeEntityInfoRequest &request);

      /**
       * @summary Queries the number of events by type.
       *
       * @param request DescribeEventCountByThreatLevelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventCountByThreatLevelResponse
       */
      Models::DescribeEventCountByThreatLevelResponse describeEventCountByThreatLevelWithOptions(const Models::DescribeEventCountByThreatLevelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of events by type.
       *
       * @param request DescribeEventCountByThreatLevelRequest
       * @return DescribeEventCountByThreatLevelResponse
       */
      Models::DescribeEventCountByThreatLevelResponse describeEventCountByThreatLevel(const Models::DescribeEventCountByThreatLevelRequest &request);

      /**
       * @summary Queries the handling policies of a historical event.
       *
       * @param request DescribeEventDisposeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventDisposeResponse
       */
      Models::DescribeEventDisposeResponse describeEventDisposeWithOptions(const Models::DescribeEventDisposeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the handling policies of a historical event.
       *
       * @param request DescribeEventDisposeRequest
       * @return DescribeEventDisposeResponse
       */
      Models::DescribeEventDisposeResponse describeEventDispose(const Models::DescribeEventDisposeRequest &request);

      /**
       * @summary Queries the number of logs that are added to the threat analysis feature.
       *
       * @param request DescribeImportedLogCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeImportedLogCountResponse
       */
      Models::DescribeImportedLogCountResponse describeImportedLogCountWithOptions(const Models::DescribeImportedLogCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of logs that are added to the threat analysis feature.
       *
       * @param request DescribeImportedLogCountRequest
       * @return DescribeImportedLogCountResponse
       */
      Models::DescribeImportedLogCountResponse describeImportedLogCount(const Models::DescribeImportedLogCountRequest &request);

      /**
       * @summary Queries the fields that can be configured for a custom rule.
       *
       * @param request DescribeLogFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogFieldsResponse
       */
      Models::DescribeLogFieldsResponse describeLogFieldsWithOptions(const Models::DescribeLogFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fields that can be configured for a custom rule.
       *
       * @param request DescribeLogFieldsRequest
       * @return DescribeLogFieldsResponse
       */
      Models::DescribeLogFieldsResponse describeLogFields(const Models::DescribeLogFieldsRequest &request);

      /**
       * @summary Queries the log sources that can be configured for a custom rule.
       *
       * @param request DescribeLogSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogSourceResponse
       */
      Models::DescribeLogSourceResponse describeLogSourceWithOptions(const Models::DescribeLogSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log sources that can be configured for a custom rule.
       *
       * @param request DescribeLogSourceRequest
       * @return DescribeLogSourceResponse
       */
      Models::DescribeLogSourceResponse describeLogSource(const Models::DescribeLogSourceRequest &request);

      /**
       * @summary Queries the log types that can be configured for a custom rule.
       *
       * @param request DescribeLogTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogTypeResponse
       */
      Models::DescribeLogTypeResponse describeLogTypeWithOptions(const Models::DescribeLogTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the log types that can be configured for a custom rule.
       *
       * @param request DescribeLogTypeRequest
       * @return DescribeLogTypeResponse
       */
      Models::DescribeLogTypeResponse describeLogType(const Models::DescribeLogTypeRequest &request);

      /**
       * @summary Queries the operator of a custom rule.
       *
       * @param request DescribeOperatorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOperatorsResponse
       */
      Models::DescribeOperatorsResponse describeOperatorsWithOptions(const Models::DescribeOperatorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operator of a custom rule.
       *
       * @param request DescribeOperatorsRequest
       * @return DescribeOperatorsResponse
       */
      Models::DescribeOperatorsResponse describeOperators(const Models::DescribeOperatorsRequest &request);

      /**
       * @summary Queries the number of services that can be added to the threat analysis feature in Alibaba Cloud, Tenant Cloud, and Huawei Cloud.
       *
       * @param request DescribeProdCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProdCountResponse
       */
      Models::DescribeProdCountResponse describeProdCountWithOptions(const Models::DescribeProdCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of services that can be added to the threat analysis feature in Alibaba Cloud, Tenant Cloud, and Huawei Cloud.
       *
       * @param request DescribeProdCountRequest
       * @return DescribeProdCountResponse
       */
      Models::DescribeProdCountResponse describeProdCount(const Models::DescribeProdCountRequest &request);

      /**
       * @summary Queries the list of users in the playbook scope.
       *
       * @param request DescribeScopeUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScopeUsersResponse
       */
      Models::DescribeScopeUsersResponse describeScopeUsersWithOptions(const Models::DescribeScopeUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of users in the playbook scope.
       *
       * @param request DescribeScopeUsersRequest
       * @return DescribeScopeUsersResponse
       */
      Models::DescribeScopeUsersResponse describeScopeUsers(const Models::DescribeScopeUsersRequest &request);

      /**
       * @summary Checks whether the threat analysis feature is authorized to access a resource directory.
       *
       * @param request DescribeServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceStatusResponse
       */
      Models::DescribeServiceStatusResponse describeServiceStatusWithOptions(const Models::DescribeServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the threat analysis feature is authorized to access a resource directory.
       *
       * @param request DescribeServiceStatusRequest
       * @return DescribeServiceStatusResponse
       */
      Models::DescribeServiceStatusResponse describeServiceStatus(const Models::DescribeServiceStatusRequest &request);

      /**
       * @summary Queries the status of the Logstores for the threat analysis feature in Simple Log Service on the user side.
       *
       * @param request DescribeStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStorageResponse
       */
      Models::DescribeStorageResponse describeStorageWithOptions(const Models::DescribeStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the Logstores for the threat analysis feature in Simple Log Service on the user side.
       *
       * @param request DescribeStorageRequest
       * @return DescribeStorageResponse
       */
      Models::DescribeStorageResponse describeStorage(const Models::DescribeStorageRequest &request);

      /**
       * @summary Checks whether the current Alibaba Cloud account or the management account of a resource directory is used to purchase the threat analysis feature.
       *
       * @param request DescribeUserBuyStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserBuyStatusResponse
       */
      Models::DescribeUserBuyStatusResponse describeUserBuyStatusWithOptions(const Models::DescribeUserBuyStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the current Alibaba Cloud account or the management account of a resource directory is used to purchase the threat analysis feature.
       *
       * @param request DescribeUserBuyStatusRequest
       * @return DescribeUserBuyStatusResponse
       */
      Models::DescribeUserBuyStatusResponse describeUserBuyStatus(const Models::DescribeUserBuyStatusRequest &request);

      /**
       * @summary Queries the protected domain names of the WAF instance for a user to which an entity belongs.
       *
       * @param request DescribeWafScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWafScopeResponse
       */
      Models::DescribeWafScopeResponse describeWafScopeWithOptions(const Models::DescribeWafScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protected domain names of the WAF instance for a user to which an entity belongs.
       *
       * @param request DescribeWafScopeRequest
       * @return DescribeWafScopeResponse
       */
      Models::DescribeWafScopeResponse describeWafScope(const Models::DescribeWafScopeRequest &request);

      /**
       * @summary Queries a list of whitelist rules for alerts.
       *
       * @param request DescribeWhiteRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWhiteRuleListResponse
       */
      Models::DescribeWhiteRuleListResponse describeWhiteRuleListWithOptions(const Models::DescribeWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of whitelist rules for alerts.
       *
       * @param request DescribeWhiteRuleListRequest
       * @return DescribeWhiteRuleListResponse
       */
      Models::DescribeWhiteRuleListResponse describeWhiteRuleList(const Models::DescribeWhiteRuleListRequest &request);

      /**
       * @summary Creates a service-linked role named AliyunServiceRoleForSasCloudSiem for the threat analysis feature. The feature can assume this role to access cloud services.
       *
       * @param request EnableAccessForCloudSiemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAccessForCloudSiemResponse
       */
      Models::EnableAccessForCloudSiemResponse enableAccessForCloudSiemWithOptions(const Models::EnableAccessForCloudSiemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role named AliyunServiceRoleForSasCloudSiem for the threat analysis feature. The feature can assume this role to access cloud services.
       *
       * @param request EnableAccessForCloudSiemRequest
       * @return EnableAccessForCloudSiemResponse
       */
      Models::EnableAccessForCloudSiemResponse enableAccessForCloudSiem(const Models::EnableAccessForCloudSiemRequest &request);

      /**
       * @summary Authorizes the threat analysis feature to access a resource directory. This operation must be called by the management account of the resource directory.
       *
       * @param request EnableServiceForCloudSiemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableServiceForCloudSiemResponse
       */
      Models::EnableServiceForCloudSiemResponse enableServiceForCloudSiemWithOptions(const Models::EnableServiceForCloudSiemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes the threat analysis feature to access a resource directory. This operation must be called by the management account of the resource directory.
       *
       * @param request EnableServiceForCloudSiemRequest
       * @return EnableServiceForCloudSiemResponse
       */
      Models::EnableServiceForCloudSiemResponse enableServiceForCloudSiem(const Models::EnableServiceForCloudSiemRequest &request);

      /**
       * @summary Queries the storage capacity usage of the threat analysis feature and the purchased storage capacity
       *
       * @param request GetCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCapacityResponse
       */
      Models::GetCapacityResponse getCapacityWithOptions(const Models::GetCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage capacity usage of the threat analysis feature and the purchased storage capacity
       *
       * @param request GetCapacityRequest
       * @return GetCapacityResponse
       */
      Models::GetCapacityResponse getCapacity(const Models::GetCapacityRequest &request);

      /**
       * @summary Queries the storage configurations for the threat analysis feature on the user side.
       *
       * @param request GetStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStorageResponse
       */
      Models::GetStorageResponse getStorageWithOptions(const Models::GetStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the storage configurations for the threat analysis feature on the user side.
       *
       * @param request GetStorageRequest
       * @return GetStorageResponse
       */
      Models::GetStorageResponse getStorage(const Models::GetStorageRequest &request);

      /**
       * @summary Queries a list of AccessKey IDs of third-party cloud accounts that are added to the threat analysis feature.
       *
       * @param request ListAccountAccessIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountAccessIdResponse
       */
      Models::ListAccountAccessIdResponse listAccountAccessIdWithOptions(const Models::ListAccountAccessIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AccessKey IDs of third-party cloud accounts that are added to the threat analysis feature.
       *
       * @param request ListAccountAccessIdRequest
       * @return ListAccountAccessIdResponse
       */
      Models::ListAccountAccessIdResponse listAccountAccessId(const Models::ListAccountAccessIdRequest &request);

      /**
       * @summary Query accounts by log.
       *
       * @param request ListAccountsByLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccountsByLogResponse
       */
      Models::ListAccountsByLogResponse listAccountsByLogWithOptions(const Models::ListAccountsByLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query accounts by log.
       *
       * @param request ListAccountsByLogRequest
       * @return ListAccountsByLogResponse
       */
      Models::ListAccountsByLogResponse listAccountsByLog(const Models::ListAccountsByLogRequest &request);

      /**
       * @summary Queries a list of cloud services that can be added to the threat analysis feature.
       *
       * @param request ListAllProdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAllProdsResponse
       */
      Models::ListAllProdsResponse listAllProdsWithOptions(const Models::ListAllProdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of cloud services that can be added to the threat analysis feature.
       *
       * @param request ListAllProdsRequest
       * @return ListAllProdsResponse
       */
      Models::ListAllProdsResponse listAllProds(const Models::ListAllProdsRequest &request);

      /**
       * @summary Queries automated response rules.
       *
       * @param request ListAutomateResponseConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAutomateResponseConfigsResponse
       */
      Models::ListAutomateResponseConfigsResponse listAutomateResponseConfigsWithOptions(const Models::ListAutomateResponseConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries automated response rules.
       *
       * @param request ListAutomateResponseConfigsRequest
       * @return ListAutomateResponseConfigsResponse
       */
      Models::ListAutomateResponseConfigsResponse listAutomateResponseConfigs(const Models::ListAutomateResponseConfigsRequest &request);

      /**
       * @summary Queries a list of cloud accounts that are added to the threat analysis feature.
       *
       * @param request ListBindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindAccountResponse
       */
      Models::ListBindAccountResponse listBindAccountWithOptions(const Models::ListBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of cloud accounts that are added to the threat analysis feature.
       *
       * @param request ListBindAccountRequest
       * @return ListBindAccountResponse
       */
      Models::ListBindAccountResponse listBindAccount(const Models::ListBindAccountRequest &request);

      /**
       * @summary Queries a list of data sources that are added to the threat analysis feature.
       *
       * @param request ListBindDataSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBindDataSourcesResponse
       */
      Models::ListBindDataSourcesResponse listBindDataSourcesWithOptions(const Models::ListBindDataSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data sources that are added to the threat analysis feature.
       *
       * @param request ListBindDataSourcesRequest
       * @return ListBindDataSourcesResponse
       */
      Models::ListBindDataSourcesResponse listBindDataSources(const Models::ListBindDataSourcesRequest &request);

      /**
       * @summary Queries custom rules.
       *
       * @param request ListCloudSiemCustomizeRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudSiemCustomizeRulesResponse
       */
      Models::ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRulesWithOptions(const Models::ListCloudSiemCustomizeRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom rules.
       *
       * @param request ListCloudSiemCustomizeRulesRequest
       * @return ListCloudSiemCustomizeRulesResponse
       */
      Models::ListCloudSiemCustomizeRulesResponse listCloudSiemCustomizeRules(const Models::ListCloudSiemCustomizeRulesRequest &request);

      /**
       * @summary Queries predefined rules.
       *
       * @param request ListCloudSiemPredefinedRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudSiemPredefinedRulesResponse
       */
      Models::ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRulesWithOptions(const Models::ListCloudSiemPredefinedRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries predefined rules.
       *
       * @param request ListCloudSiemPredefinedRulesRequest
       * @return ListCloudSiemPredefinedRulesResponse
       */
      Models::ListCloudSiemPredefinedRulesResponse listCloudSiemPredefinedRules(const Models::ListCloudSiemPredefinedRulesRequest &request);

      /**
       * @summary Queries the test results of a custom rule.
       *
       * @param request ListCustomizeRuleTestResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomizeRuleTestResultResponse
       */
      Models::ListCustomizeRuleTestResultResponse listCustomizeRuleTestResultWithOptions(const Models::ListCustomizeRuleTestResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the test results of a custom rule.
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
       * @summary Queries a list of data source types in third-party cloud services that can be added to the threat analysis feature.
       *
       * @param request ListDataSourceTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDataSourceTypesResponse
       */
      Models::ListDataSourceTypesResponse listDataSourceTypesWithOptions(const Models::ListDataSourceTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of data source types in third-party cloud services that can be added to the threat analysis feature.
       *
       * @param request ListDataSourceTypesRequest
       * @return ListDataSourceTypesResponse
       */
      Models::ListDataSourceTypesResponse listDataSourceTypes(const Models::ListDataSourceTypesRequest &request);

      /**
       * @summary Queries the information about the cloud services that are integrated with the threat analysis feature, the logs of the cloud services, and the delivery of the logs.
       *
       * @param request ListDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeliveryResponse
       */
      Models::ListDeliveryResponse listDeliveryWithOptions(const Models::ListDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the cloud services that are integrated with the threat analysis feature, the logs of the cloud services, and the delivery of the logs.
       *
       * @param request ListDeliveryRequest
       * @return ListDeliveryResponse
       */
      Models::ListDeliveryResponse listDelivery(const Models::ListDeliveryRequest &request);

      /**
       * @summary Queries handling policies.
       *
       * @param request ListDisposeStrategyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDisposeStrategyResponse
       */
      Models::ListDisposeStrategyResponse listDisposeStrategyWithOptions(const Models::ListDisposeStrategyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries handling policies.
       *
       * @param request ListDisposeStrategyRequest
       * @return ListDisposeStrategyResponse
       */
      Models::ListDisposeStrategyResponse listDisposeStrategy(const Models::ListDisposeStrategyRequest &request);

      /**
       * @summary Queries entities.
       *
       * @param request ListEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEntitiesResponse
       */
      Models::ListEntitiesResponse listEntitiesWithOptions(const Models::ListEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries entities.
       *
       * @param request ListEntitiesRequest
       * @return ListEntitiesResponse
       */
      Models::ListEntitiesResponse listEntities(const Models::ListEntitiesRequest &request);

      /**
       * @summary Queries the details of the logs in a cloud service that is added to the threat analysis feature.
       *
       * @param request ListImportedLogsByProdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImportedLogsByProdResponse
       */
      Models::ListImportedLogsByProdResponse listImportedLogsByProdWithOptions(const Models::ListImportedLogsByProdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the logs in a cloud service that is added to the threat analysis feature.
       *
       * @param request ListImportedLogsByProdRequest
       * @return ListImportedLogsByProdResponse
       */
      Models::ListImportedLogsByProdResponse listImportedLogsByProd(const Models::ListImportedLogsByProdRequest &request);

      /**
       * @summary Queries the dedicated Simple Log Service project and Logstore for a cloud service based on the patterns of the project and Logstore names.
       *
       * @param request ListProjectLogStoresRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectLogStoresResponse
       */
      Models::ListProjectLogStoresResponse listProjectLogStoresWithOptions(const Models::ListProjectLogStoresRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dedicated Simple Log Service project and Logstore for a cloud service based on the patterns of the project and Logstore names.
       *
       * @param request ListProjectLogStoresRequest
       * @return ListProjectLogStoresResponse
       */
      Models::ListProjectLogStoresResponse listProjectLogStores(const Models::ListProjectLogStoresRequest &request);

      /**
       * @summary Queries a list of Alibaba Cloud accounts that are added to the threat analysis feature for centralized management. These accounts can be used to perform operations supported by the threat analysis feature, such as adding logs and handling events.
       *
       * @param request ListRdUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRdUsersResponse
       */
      Models::ListRdUsersResponse listRdUsersWithOptions(const Models::ListRdUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of Alibaba Cloud accounts that are added to the threat analysis feature for centralized management. These accounts can be used to perform operations supported by the threat analysis feature, such as adding logs and handling events.
       *
       * @param request ListRdUsersRequest
       * @return ListRdUsersResponse
       */
      Models::ListRdUsersResponse listRdUsers(const Models::ListRdUsersRequest &request);

      /**
       * @summary Modifies a third-party cloud account that is added to the threat analysis feature.
       *
       * @param request ModifyBindAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyBindAccountResponse
       */
      Models::ModifyBindAccountResponse modifyBindAccountWithOptions(const Models::ModifyBindAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a third-party cloud account that is added to the threat analysis feature.
       *
       * @param request ModifyBindAccountRequest
       * @return ModifyBindAccountResponse
       */
      Models::ModifyBindAccountResponse modifyBindAccount(const Models::ModifyBindAccountRequest &request);

      /**
       * @summary Modifies a data source that is added to the threat analysis feature.
       *
       * @param request ModifyDataSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataSourceResponse
       */
      Models::ModifyDataSourceResponse modifyDataSourceWithOptions(const Models::ModifyDataSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a data source that is added to the threat analysis feature.
       *
       * @param request ModifyDataSourceRequest
       * @return ModifyDataSourceResponse
       */
      Models::ModifyDataSourceResponse modifyDataSource(const Models::ModifyDataSourceRequest &request);

      /**
       * @summary Modifies the description of the logs that are added to the threat analysis feature for a data source within a cloud account.
       *
       * @param request ModifyDataSourceLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDataSourceLogResponse
       */
      Models::ModifyDataSourceLogResponse modifyDataSourceLogWithOptions(const Models::ModifyDataSourceLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of the logs that are added to the threat analysis feature for a data source within a cloud account.
       *
       * @param request ModifyDataSourceLogRequest
       * @return ModifyDataSourceLogResponse
       */
      Models::ModifyDataSourceLogResponse modifyDataSourceLog(const Models::ModifyDataSourceLogRequest &request);

      /**
       * @summary Enables the log delivery feature for a cloud service that is integrated with Simple Log Service.
       *
       * @param request OpenDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDeliveryResponse
       */
      Models::OpenDeliveryResponse openDeliveryWithOptions(const Models::OpenDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the log delivery feature for a cloud service that is integrated with Simple Log Service.
       *
       * @param request OpenDeliveryRequest
       * @return OpenDeliveryResponse
       */
      Models::OpenDeliveryResponse openDelivery(const Models::OpenDeliveryRequest &request);

      /**
       * @summary Creates or updates an automatic response rule.
       *
       * @param request PostAutomateResponseConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostAutomateResponseConfigResponse
       */
      Models::PostAutomateResponseConfigResponse postAutomateResponseConfigWithOptions(const Models::PostAutomateResponseConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates an automatic response rule.
       *
       * @param request PostAutomateResponseConfigRequest
       * @return PostAutomateResponseConfigResponse
       */
      Models::PostAutomateResponseConfigResponse postAutomateResponseConfig(const Models::PostAutomateResponseConfigRequest &request);

      /**
       * @summary Creates or updates a custom rule.
       *
       * @param request PostCustomizeRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostCustomizeRuleResponse
       */
      Models::PostCustomizeRuleResponse postCustomizeRuleWithOptions(const Models::PostCustomizeRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates a custom rule.
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
       * @summary Submits event handling information.
       *
       * @param request PostEventDisposeAndWhiteruleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostEventDisposeAndWhiteruleListResponse
       */
      Models::PostEventDisposeAndWhiteruleListResponse postEventDisposeAndWhiteruleListWithOptions(const Models::PostEventDisposeAndWhiteruleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits event handling information.
       *
       * @param request PostEventDisposeAndWhiteruleListRequest
       * @return PostEventDisposeAndWhiteruleListResponse
       */
      Models::PostEventDisposeAndWhiteruleListResponse postEventDisposeAndWhiteruleList(const Models::PostEventDisposeAndWhiteruleListRequest &request);

      /**
       * @summary Submits an alert whitelist rule.
       *
       * @param request PostEventWhiteruleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostEventWhiteruleListResponse
       */
      Models::PostEventWhiteruleListResponse postEventWhiteruleListWithOptions(const Models::PostEventWhiteruleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an alert whitelist rule.
       *
       * @param request PostEventWhiteruleListRequest
       * @return PostEventWhiteruleListResponse
       */
      Models::PostEventWhiteruleListResponse postEventWhiteruleList(const Models::PostEventWhiteruleListRequest &request);

      /**
       * @summary Ends the test of a custom rule.
       *
       * @param request PostFinishCustomizeRuleTestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PostFinishCustomizeRuleTestResponse
       */
      Models::PostFinishCustomizeRuleTestResponse postFinishCustomizeRuleTestWithOptions(const Models::PostFinishCustomizeRuleTestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Ends the test of a custom rule.
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
       * @summary Releases storage to reduce the storage usage. The release operation is irreversible and may cause data loss. Proceed with caution.
       *
       * @param request RestoreCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreCapacityResponse
       */
      Models::RestoreCapacityResponse restoreCapacityWithOptions(const Models::RestoreCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Releases storage to reduce the storage usage. The release operation is irreversible and may cause data loss. Proceed with caution.
       *
       * @param request RestoreCapacityRequest
       * @return RestoreCapacityResponse
       */
      Models::RestoreCapacityResponse restoreCapacity(const Models::RestoreCapacityRequest &request);

      /**
       * @summary Configures the settings of log storage, such as the storage duration and storage region.
       *
       * @param request SetStorageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetStorageResponse
       */
      Models::SetStorageResponse setStorageWithOptions(const Models::SetStorageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the settings of log storage, such as the storage duration and storage region.
       *
       * @param request SetStorageRequest
       * @return SetStorageResponse
       */
      Models::SetStorageResponse setStorage(const Models::SetStorageRequest &request);

      /**
       * @summary Submits log collection tasks at a time.
       *
       * @param request SubmitImportLogTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImportLogTasksResponse
       */
      Models::SubmitImportLogTasksResponse submitImportLogTasksWithOptions(const Models::SubmitImportLogTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits log collection tasks at a time.
       *
       * @param request SubmitImportLogTasksRequest
       * @return SubmitImportLogTasksResponse
       */
      Models::SubmitImportLogTasksResponse submitImportLogTasks(const Models::SubmitImportLogTasksRequest &request);

      /**
       * @summary Updates the status of an automatic response rule.
       *
       * @param request UpdateAutomateResponseConfigStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAutomateResponseConfigStatusResponse
       */
      Models::UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatusWithOptions(const Models::UpdateAutomateResponseConfigStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of an automatic response rule.
       *
       * @param request UpdateAutomateResponseConfigStatusRequest
       * @return UpdateAutomateResponseConfigStatusResponse
       */
      Models::UpdateAutomateResponseConfigStatusResponse updateAutomateResponseConfigStatus(const Models::UpdateAutomateResponseConfigStatusRequest &request);

      /**
       * @summary Creates or updates an alert whitelist rule.
       *
       * @param request UpdateWhiteRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWhiteRuleListResponse
       */
      Models::UpdateWhiteRuleListResponse updateWhiteRuleListWithOptions(const Models::UpdateWhiteRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or updates an alert whitelist rule.
       *
       * @param request UpdateWhiteRuleListRequest
       * @return UpdateWhiteRuleListResponse
       */
      Models::UpdateWhiteRuleListResponse updateWhiteRuleList(const Models::UpdateWhiteRuleListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
