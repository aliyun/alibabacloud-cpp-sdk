// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CMS20190101_HPP_
#define ALIBABACLOUD_CMS20190101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cms20190101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cms20190101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary The AddTags operation attaches tags to specified application groups.
       *
       * @description This topic provides an example of how to attach a tag to the application group `7301****`. In this example, the tag key is `key1` and the tag value is `value1`.
       *
       * @param request AddTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTagsWithOptions(const Models::AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The AddTags operation attaches tags to specified application groups.
       *
       * @description This topic provides an example of how to attach a tag to the application group `7301****`. In this example, the tag key is `key1` and the tag value is `value1`.
       *
       * @param request AddTagsRequest
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTags(const Models::AddTagsRequest &request);

      /**
       * @summary Applies an alert template to an application group to generate an alert rule.
       *
       * @description In this example, the `700****` alert template is applied to the `123456` application group. For the generated alert rule, the ID is `applyTemplate8ab74c6b-9f27-47ab-8841-de01dc08****`, and the name is `test123`.
       *
       * @param request ApplyMetricRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyMetricRuleTemplateResponse
       */
      Models::ApplyMetricRuleTemplateResponse applyMetricRuleTemplateWithOptions(const Models::ApplyMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies an alert template to an application group to generate an alert rule.
       *
       * @description In this example, the `700****` alert template is applied to the `123456` application group. For the generated alert rule, the ID is `applyTemplate8ab74c6b-9f27-47ab-8841-de01dc08****`, and the name is `test123`.
       *
       * @param request ApplyMetricRuleTemplateRequest
       * @return ApplyMetricRuleTemplateResponse
       */
      Models::ApplyMetricRuleTemplateResponse applyMetricRuleTemplate(const Models::ApplyMetricRuleTemplateRequest &request);

      /**
       * @summary You can call the BatchCreateInstantSiteMonitor operation to create a batch of site monitoring tasks.
       *
       * @description This topic provides an example of how to create a site monitoring task named `HangZhou_ECS1`. The task uses the `HTTP` protocol to monitor `https://www.aliyun.com`. The response shows that the task is successfully created with the name `HangZhou_ECS1` and the ID `679fbe4f-b80b-4706-91b2-5427b43e****`.
       *
       * @param request BatchCreateInstantSiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateInstantSiteMonitorResponse
       */
      Models::BatchCreateInstantSiteMonitorResponse batchCreateInstantSiteMonitorWithOptions(const Models::BatchCreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the BatchCreateInstantSiteMonitor operation to create a batch of site monitoring tasks.
       *
       * @description This topic provides an example of how to create a site monitoring task named `HangZhou_ECS1`. The task uses the `HTTP` protocol to monitor `https://www.aliyun.com`. The response shows that the task is successfully created with the name `HangZhou_ECS1` and the ID `679fbe4f-b80b-4706-91b2-5427b43e****`.
       *
       * @param request BatchCreateInstantSiteMonitorRequest
       * @return BatchCreateInstantSiteMonitorResponse
       */
      Models::BatchCreateInstantSiteMonitorResponse batchCreateInstantSiteMonitor(const Models::BatchCreateInstantSiteMonitorRequest &request);

      /**
       * @summary Calls the BatchExport operation to export monitoring data defined in the Cursor operation.
       *
       * @description ### Prerequisites
       * Make sure that you have called the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation to obtain the initial `Cursor`.
       * ### Usage notes
       * This topic provides an example to show how to export the monitoring data of an initial `Cursor` of the metric `cpu_idle` of the cloud service `acs_ecs_dashboard`. A maximum of 1,000 data entries are returned per call.
       *
       * @param tmpReq BatchExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchExportResponse
       */
      Models::BatchExportResponse batchExportWithOptions(const Models::BatchExportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the BatchExport operation to export monitoring data defined in the Cursor operation.
       *
       * @description ### Prerequisites
       * Make sure that you have called the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation to obtain the initial `Cursor`.
       * ### Usage notes
       * This topic provides an example to show how to export the monitoring data of an initial `Cursor` of the metric `cpu_idle` of the cloud service `acs_ecs_dashboard`. A maximum of 1,000 data entries are returned per call.
       *
       * @param request BatchExportRequest
       * @return BatchExportResponse
       */
      Models::BatchExportResponse batchExport(const Models::BatchExportRequest &request);

      /**
       * @summary You can call the CreateDynamicTagGroup operation to automatically create application groups using tags.
       *
       * @description This operation supports the following Alibaba Cloud services: Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
       * This topic provides an example of how to automatically create an application group for resources that have the `ecs_instance` tag key. The alert contact group for the application group is `ECS_Group`.
       *
       * @param request CreateDynamicTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDynamicTagGroupResponse
       */
      Models::CreateDynamicTagGroupResponse createDynamicTagGroupWithOptions(const Models::CreateDynamicTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the CreateDynamicTagGroup operation to automatically create application groups using tags.
       *
       * @description This operation supports the following Alibaba Cloud services: Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
       * This topic provides an example of how to automatically create an application group for resources that have the `ecs_instance` tag key. The alert contact group for the application group is `ECS_Group`.
       *
       * @param request CreateDynamicTagGroupRequest
       * @return CreateDynamicTagGroupResponse
       */
      Models::CreateDynamicTagGroupResponse createDynamicTagGroup(const Models::CreateDynamicTagGroupRequest &request);

      /**
       * @summary Creates alert rules in batches for a specified application group by calling the CreateGroupMetricRules operation.
       *
       * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `123456`. The alert rule ID is `456789`, the alert rule name is `ECS_Rule1`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule `ECS_Rule1` is created.
       *
       * @param request CreateGroupMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupMetricRulesResponse
       */
      Models::CreateGroupMetricRulesResponse createGroupMetricRulesWithOptions(const Models::CreateGroupMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates alert rules in batches for a specified application group by calling the CreateGroupMetricRules operation.
       *
       * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `123456`. The alert rule ID is `456789`, the alert rule name is `ECS_Rule1`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule `ECS_Rule1` is created.
       *
       * @param request CreateGroupMetricRulesRequest
       * @return CreateGroupMetricRulesResponse
       */
      Models::CreateGroupMetricRulesResponse createGroupMetricRules(const Models::CreateGroupMetricRulesRequest &request);

      /**
       * @summary Creates a process monitoring task for an application group.
       *
       * @param request CreateGroupMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupMonitoringAgentProcessResponse
       */
      Models::CreateGroupMonitoringAgentProcessResponse createGroupMonitoringAgentProcessWithOptions(const Models::CreateGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a process monitoring task for an application group.
       *
       * @param request CreateGroupMonitoringAgentProcessRequest
       * @return CreateGroupMonitoringAgentProcessResponse
       */
      Models::CreateGroupMonitoringAgentProcessResponse createGroupMonitoringAgentProcess(const Models::CreateGroupMonitoringAgentProcessRequest &request);

      /**
       * @summary Creates an availability monitoring task by calling the CreateHostAvailability operation.
       *
       * @description This topic provides an example of how to create an availability monitoring task named `task1` with the detection type set to `HTTP` in application group `123456`. Alert notifications are sent by email and DingTalk chatbot.
       *
       * @param request CreateHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHostAvailabilityResponse
       */
      Models::CreateHostAvailabilityResponse createHostAvailabilityWithOptions(const Models::CreateHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an availability monitoring task by calling the CreateHostAvailability operation.
       *
       * @description This topic provides an example of how to create an availability monitoring task named `task1` with the detection type set to `HTTP` in application group `123456`. Alert notifications are sent by email and DingTalk chatbot.
       *
       * @param request CreateHostAvailabilityRequest
       * @return CreateHostAvailabilityResponse
       */
      Models::CreateHostAvailabilityResponse createHostAvailability(const Models::CreateHostAvailabilityRequest &request);

      /**
       * @summary Calls the CreateHybridMonitorNamespace operation to create a metric repository.
       *
       * @description ## Before you begin
       * Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## Operation description
       * This topic provides an example on how to create a metric repository named `aliyun` with a data storage duration of `cms.s1.3xlarge`. The response indicates that the metric repository is created.
       *
       * @param request CreateHybridMonitorNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridMonitorNamespaceResponse
       */
      Models::CreateHybridMonitorNamespaceResponse createHybridMonitorNamespaceWithOptions(const Models::CreateHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateHybridMonitorNamespace operation to create a metric repository.
       *
       * @description ## Before you begin
       * Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## Operation description
       * This topic provides an example on how to create a metric repository named `aliyun` with a data storage duration of `cms.s1.3xlarge`. The response indicates that the metric repository is created.
       *
       * @param request CreateHybridMonitorNamespaceRequest
       * @return CreateHybridMonitorNamespaceResponse
       */
      Models::CreateHybridMonitorNamespaceResponse createHybridMonitorNamespace(const Models::CreateHybridMonitorNamespaceRequest &request);

      /**
       * @summary Creates a Logstore group for Hybrid Cloud Monitoring.
       *
       * @description ### Before you begin
       * Make sure that you have activated Simple Log Service (SLS) and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
       * ### Operation description
       * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region is `ap-southeast-1`, the project is `aliyun-project`, and the Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
       *
       * @param request CreateHybridMonitorSLSGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridMonitorSLSGroupResponse
       */
      Models::CreateHybridMonitorSLSGroupResponse createHybridMonitorSLSGroupWithOptions(const Models::CreateHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Logstore group for Hybrid Cloud Monitoring.
       *
       * @description ### Before you begin
       * Make sure that you have activated Simple Log Service (SLS) and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
       * ### Operation description
       * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region is `ap-southeast-1`, the project is `aliyun-project`, and the Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
       *
       * @param request CreateHybridMonitorSLSGroupRequest
       * @return CreateHybridMonitorSLSGroupResponse
       */
      Models::CreateHybridMonitorSLSGroupResponse createHybridMonitorSLSGroup(const Models::CreateHybridMonitorSLSGroupRequest &request);

      /**
       * @summary Calls the CreateHybridMonitorTask operation to create a data import task for an Alibaba Cloud service or a metric for Simple Log Service (SLS) logs.
       *
       * @description ## Before you begin
       * - Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * - If you want to create a metric for SLS logs, make sure that you have activated SLS and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
       * ## Operation description
       * This topic provides an example of how to create a data import task named `aliyun_task` for an Alibaba Cloud service to import the `cpu_total` metric of Elastic Compute Service (ECS) into the `aliyun` metric repository. The response shows that the data import task is created.
       *
       * @param request CreateHybridMonitorTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridMonitorTaskResponse
       */
      Models::CreateHybridMonitorTaskResponse createHybridMonitorTaskWithOptions(const Models::CreateHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateHybridMonitorTask operation to create a data import task for an Alibaba Cloud service or a metric for Simple Log Service (SLS) logs.
       *
       * @description ## Before you begin
       * - Make sure that you have activated Hybrid Cloud Monitoring. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * - If you want to create a metric for SLS logs, make sure that you have activated SLS and created a project and a Logstore. For more information, see [Quick Start](https://help.aliyun.com/document_detail/54604.html).
       * ## Operation description
       * This topic provides an example of how to create a data import task named `aliyun_task` for an Alibaba Cloud service to import the `cpu_total` metric of Elastic Compute Service (ECS) into the `aliyun` metric repository. The response shows that the data import task is created.
       *
       * @param request CreateHybridMonitorTaskRequest
       * @return CreateHybridMonitorTaskResponse
       */
      Models::CreateHybridMonitorTaskResponse createHybridMonitorTask(const Models::CreateHybridMonitorTaskRequest &request);

      /**
       * @summary Call the CreateInstantSiteMonitor operation to create a one-time detection task.
       *
       * @description Only Alibaba Cloud accounts that have Network Analysis and Monitoring activated can create one-time detection tasks.
       * This topic provides an example of how to create a one-time detection task. The example creates a task named `task1` that detects the address `http://www.aliyun.com`. The detection type is `HTTP`, and the number of detection points is `1`.
       *
       * @param request CreateInstantSiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstantSiteMonitorResponse
       */
      Models::CreateInstantSiteMonitorResponse createInstantSiteMonitorWithOptions(const Models::CreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the CreateInstantSiteMonitor operation to create a one-time detection task.
       *
       * @description Only Alibaba Cloud accounts that have Network Analysis and Monitoring activated can create one-time detection tasks.
       * This topic provides an example of how to create a one-time detection task. The example creates a task named `task1` that detects the address `http://www.aliyun.com`. The detection type is `HTTP`, and the number of detection points is `1`.
       *
       * @param request CreateInstantSiteMonitorRequest
       * @return CreateInstantSiteMonitorResponse
       */
      Models::CreateInstantSiteMonitorResponse createInstantSiteMonitor(const Models::CreateInstantSiteMonitorRequest &request);

      /**
       * @summary Creates a blacklist policy.
       *
       * @description ### Background information
       * - CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
       * - CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
       *
       * @param request CreateMetricRuleBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetricRuleBlackListResponse
       */
      Models::CreateMetricRuleBlackListResponse createMetricRuleBlackListWithOptions(const Models::CreateMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a blacklist policy.
       *
       * @description ### Background information
       * - CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
       * - CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
       *
       * @param request CreateMetricRuleBlackListRequest
       * @return CreateMetricRuleBlackListResponse
       */
      Models::CreateMetricRuleBlackListResponse createMetricRuleBlackList(const Models::CreateMetricRuleBlackListRequest &request);

      /**
       * @summary Calls the CreateMetricRuleResources operation to create a resource associated with an alert rule.
       *
       * @param request CreateMetricRuleResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetricRuleResourcesResponse
       */
      Models::CreateMetricRuleResourcesResponse createMetricRuleResourcesWithOptions(const Models::CreateMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateMetricRuleResources operation to create a resource associated with an alert rule.
       *
       * @param request CreateMetricRuleResourcesRequest
       * @return CreateMetricRuleResourcesResponse
       */
      Models::CreateMetricRuleResourcesResponse createMetricRuleResources(const Models::CreateMetricRuleResourcesRequest &request);

      /**
       * @summary Creates an alert template.
       *
       * @param request CreateMetricRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetricRuleTemplateResponse
       */
      Models::CreateMetricRuleTemplateResponse createMetricRuleTemplateWithOptions(const Models::CreateMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert template.
       *
       * @param request CreateMetricRuleTemplateRequest
       * @return CreateMetricRuleTemplateResponse
       */
      Models::CreateMetricRuleTemplateResponse createMetricRuleTemplate(const Models::CreateMetricRuleTemplateRequest &request);

      /**
       * @summary Creates a task to monitor a process.
       *
       * @param request CreateMonitorAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorAgentProcessResponse
       */
      Models::CreateMonitorAgentProcessResponse createMonitorAgentProcessWithOptions(const Models::CreateMonitorAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to monitor a process.
       *
       * @param request CreateMonitorAgentProcessRequest
       * @return CreateMonitorAgentProcessResponse
       */
      Models::CreateMonitorAgentProcessResponse createMonitorAgentProcess(const Models::CreateMonitorAgentProcessRequest &request);

      /**
       * @summary Creates an application group.
       *
       * @description In this example, an application group named `ECS_Group` is created.
       *
       * @param request CreateMonitorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorGroupResponse
       */
      Models::CreateMonitorGroupResponse createMonitorGroupWithOptions(const Models::CreateMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application group.
       *
       * @description In this example, an application group named `ECS_Group` is created.
       *
       * @param request CreateMonitorGroupRequest
       * @return CreateMonitorGroupResponse
       */
      Models::CreateMonitorGroupResponse createMonitorGroup(const Models::CreateMonitorGroupRequest &request);

      /**
       * @summary Creates an application group by using a resource group.
       *
       * @description This topic provides an example on how to create an application group by using the resource group `CloudMonitor` and the alert contact group `ECS_Group`. The region ID of the resource group is `cn-hangzhou`.
       *
       * @param request CreateMonitorGroupByResourceGroupIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorGroupByResourceGroupIdResponse
       */
      Models::CreateMonitorGroupByResourceGroupIdResponse createMonitorGroupByResourceGroupIdWithOptions(const Models::CreateMonitorGroupByResourceGroupIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application group by using a resource group.
       *
       * @description This topic provides an example on how to create an application group by using the resource group `CloudMonitor` and the alert contact group `ECS_Group`. The region ID of the resource group is `cn-hangzhou`.
       *
       * @param request CreateMonitorGroupByResourceGroupIdRequest
       * @return CreateMonitorGroupByResourceGroupIdResponse
       */
      Models::CreateMonitorGroupByResourceGroupIdResponse createMonitorGroupByResourceGroupId(const Models::CreateMonitorGroupByResourceGroupIdRequest &request);

      /**
       * @summary Adds resources to an application group.
       *
       * @description You can add a maximum of 1,000 instances to an application group at a time. You can add a maximum of 3,000 instances of an Alibaba Cloud service to an application group. The total number of instances that you can add to an application group is unlimited.
       * In this example, an Elastic Compute Service (ECS) instance in the `China (Hangzhou)` region is added to the `3607****` application group. The instance ID is `i-2ze26xj5wwy12****` and the instance name is `test-instance-ecs`.
       *
       * @param request CreateMonitorGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorGroupInstancesResponse
       */
      Models::CreateMonitorGroupInstancesResponse createMonitorGroupInstancesWithOptions(const Models::CreateMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds resources to an application group.
       *
       * @description You can add a maximum of 1,000 instances to an application group at a time. You can add a maximum of 3,000 instances of an Alibaba Cloud service to an application group. The total number of instances that you can add to an application group is unlimited.
       * In this example, an Elastic Compute Service (ECS) instance in the `China (Hangzhou)` region is added to the `3607****` application group. The instance ID is `i-2ze26xj5wwy12****` and the instance name is `test-instance-ecs`.
       *
       * @param request CreateMonitorGroupInstancesRequest
       * @return CreateMonitorGroupInstancesResponse
       */
      Models::CreateMonitorGroupInstancesResponse createMonitorGroupInstances(const Models::CreateMonitorGroupInstancesRequest &request);

      /**
       * @summary Calls the CreateMonitorGroupNotifyPolicy operation to create a pause alert notification policy for an application group.
       *
       * @description During the effective period of the policy, no alert notifications are sent for any alerts triggered within the application group.
       *  
       * This topic provides an example on how to create a pause alert notification policy named `PauseNotify` for the application group `7301****`. The application group pauses alert notifications during the period from `1622949300000` to `1623208500000` (UTC+8 `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
       *
       * @param request CreateMonitorGroupNotifyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorGroupNotifyPolicyResponse
       */
      Models::CreateMonitorGroupNotifyPolicyResponse createMonitorGroupNotifyPolicyWithOptions(const Models::CreateMonitorGroupNotifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the CreateMonitorGroupNotifyPolicy operation to create a pause alert notification policy for an application group.
       *
       * @description During the effective period of the policy, no alert notifications are sent for any alerts triggered within the application group.
       *  
       * This topic provides an example on how to create a pause alert notification policy named `PauseNotify` for the application group `7301****`. The application group pauses alert notifications during the period from `1622949300000` to `1623208500000` (UTC+8 `2021-06-06 11:15:00` to `2021-06-09 11:15:00`).
       *
       * @param request CreateMonitorGroupNotifyPolicyRequest
       * @return CreateMonitorGroupNotifyPolicyResponse
       */
      Models::CreateMonitorGroupNotifyPolicyResponse createMonitorGroupNotifyPolicy(const Models::CreateMonitorGroupNotifyPolicyRequest &request);

      /**
       * @summary Creates a task to monitor a process.
       *
       * @param request CreateMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitoringAgentProcessResponse
       */
      Models::CreateMonitoringAgentProcessResponse createMonitoringAgentProcessWithOptions(const Models::CreateMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to monitor a process.
       *
       * @param request CreateMonitoringAgentProcessRequest
       * @return CreateMonitoringAgentProcessResponse
       */
      Models::CreateMonitoringAgentProcessResponse createMonitoringAgentProcess(const Models::CreateMonitoringAgentProcessRequest &request);

      /**
       * @summary Creates a site monitoring task.
       *
       * @description This topic describes how to create a site monitoring task. The example creates a task named `HanZhou_ECS1` to monitor the URL `https://www.aliyun.com` over `HTTPS`.
       *
       * @param request CreateSiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteMonitorResponse
       */
      Models::CreateSiteMonitorResponse createSiteMonitorWithOptions(const Models::CreateSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a site monitoring task.
       *
       * @description This topic describes how to create a site monitoring task. The example creates a task named `HanZhou_ECS1` to monitor the URL `https://www.aliyun.com` over `HTTPS`.
       *
       * @param request CreateSiteMonitorRequest
       * @return CreateSiteMonitorResponse
       */
      Models::CreateSiteMonitorResponse createSiteMonitor(const Models::CreateSiteMonitorRequest &request);

      /**
       * @summary Calls the Cursor operation to define the scope of monitoring data to be exported, and returns the Cursor value used for the initial call to the BatchExport operation.
       *
       * @description ### Prerequisites
       * Make sure that Enterprise CloudMonitor is activated. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
       * ### Background information
       * First, call this operation to obtain the initial Cursor. Then, call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export monitoring data.
       * ### Usage notes
       * This topic provides an example to describe how to define the scope to export data of the `cpu_idle` metric of the `acs_ecs_dashboard` cloud service every 60 seconds in the time range from `1641627000000` (2022-01-08 15:30:00) to `1641645000000` (2022-01-08 20:30:00). The returned result shows the `Cursor` information.
       *
       * @param tmpReq CursorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CursorResponse
       */
      Models::CursorResponse cursorWithOptions(const Models::CursorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the Cursor operation to define the scope of monitoring data to be exported, and returns the Cursor value used for the initial call to the BatchExport operation.
       *
       * @description ### Prerequisites
       * Make sure that Enterprise CloudMonitor is activated. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
       * ### Background information
       * First, call this operation to obtain the initial Cursor. Then, call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export monitoring data.
       * ### Usage notes
       * This topic provides an example to describe how to define the scope to export data of the `cpu_idle` metric of the `acs_ecs_dashboard` cloud service every 60 seconds in the time range from `1641627000000` (2022-01-08 15:30:00) to `1641645000000` (2022-01-08 20:30:00). The returned result shows the `Cursor` information.
       *
       * @param request CursorRequest
       * @return CursorResponse
       */
      Models::CursorResponse cursor(const Models::CursorRequest &request);

      /**
       * @summary Deletes an alert contact.
       *
       * @param request DeleteContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContactWithOptions(const Models::DeleteContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert contact.
       *
       * @param request DeleteContactRequest
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContact(const Models::DeleteContactRequest &request);

      /**
       * @summary Calls the DeleteContactGroup operation to delete an alert contact group.
       *
       * @param request DeleteContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactGroupResponse
       */
      Models::DeleteContactGroupResponse deleteContactGroupWithOptions(const Models::DeleteContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteContactGroup operation to delete an alert contact group.
       *
       * @param request DeleteContactGroupRequest
       * @return DeleteContactGroupResponse
       */
      Models::DeleteContactGroupResponse deleteContactGroup(const Models::DeleteContactGroupRequest &request);

      /**
       * @summary Deletes the reported monitoring data of a metric.
       *
       * @param request DeleteCustomMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomMetricResponse
       */
      Models::DeleteCustomMetricResponse deleteCustomMetricWithOptions(const Models::DeleteCustomMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the reported monitoring data of a metric.
       *
       * @param request DeleteCustomMetricRequest
       * @return DeleteCustomMetricResponse
       */
      Models::DeleteCustomMetricResponse deleteCustomMetric(const Models::DeleteCustomMetricRequest &request);

      /**
       * @summary Deletes a tag rule.
       *
       * @param request DeleteDynamicTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDynamicTagGroupResponse
       */
      Models::DeleteDynamicTagGroupResponse deleteDynamicTagGroupWithOptions(const Models::DeleteDynamicTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a tag rule.
       *
       * @param request DeleteDynamicTagGroupRequest
       * @return DeleteDynamicTagGroupResponse
       */
      Models::DeleteDynamicTagGroupResponse deleteDynamicTagGroup(const Models::DeleteDynamicTagGroupRequest &request);

      /**
       * @summary Deletes the push channels of an event-triggered alert rule.
       *
       * @param request DeleteEventRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventRuleTargetsResponse
       */
      Models::DeleteEventRuleTargetsResponse deleteEventRuleTargetsWithOptions(const Models::DeleteEventRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the push channels of an event-triggered alert rule.
       *
       * @param request DeleteEventRuleTargetsRequest
       * @return DeleteEventRuleTargetsResponse
       */
      Models::DeleteEventRuleTargetsResponse deleteEventRuleTargets(const Models::DeleteEventRuleTargetsRequest &request);

      /**
       * @summary Deletes one or more event-triggered alert rules.
       *
       * @param request DeleteEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventRulesResponse
       */
      Models::DeleteEventRulesResponse deleteEventRulesWithOptions(const Models::DeleteEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more event-triggered alert rules.
       *
       * @param request DeleteEventRulesRequest
       * @return DeleteEventRulesResponse
       */
      Models::DeleteEventRulesResponse deleteEventRules(const Models::DeleteEventRulesRequest &request);

      /**
       * @summary Calls the DeleteExporterOutput operation to delete a monitoring data export configuration.
       *
       * @param request DeleteExporterOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExporterOutputResponse
       */
      Models::DeleteExporterOutputResponse deleteExporterOutputWithOptions(const Models::DeleteExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteExporterOutput operation to delete a monitoring data export configuration.
       *
       * @param request DeleteExporterOutputRequest
       * @return DeleteExporterOutputResponse
       */
      Models::DeleteExporterOutputResponse deleteExporterOutput(const Models::DeleteExporterOutputRequest &request);

      /**
       * @summary Invokes the DeleteExporterRule operation to delete export rules.
       *
       * @param request DeleteExporterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExporterRuleResponse
       */
      Models::DeleteExporterRuleResponse deleteExporterRuleWithOptions(const Models::DeleteExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the DeleteExporterRule operation to delete export rules.
       *
       * @param request DeleteExporterRuleRequest
       * @return DeleteExporterRuleResponse
       */
      Models::DeleteExporterRuleResponse deleteExporterRule(const Models::DeleteExporterRuleRequest &request);

      /**
       * @summary Deletes a group process monitoring task by calling the DeleteGroupMonitoringAgentProcess operation.
       *
       * @param request DeleteGroupMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupMonitoringAgentProcessResponse
       */
      Models::DeleteGroupMonitoringAgentProcessResponse deleteGroupMonitoringAgentProcessWithOptions(const Models::DeleteGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a group process monitoring task by calling the DeleteGroupMonitoringAgentProcess operation.
       *
       * @param request DeleteGroupMonitoringAgentProcessRequest
       * @return DeleteGroupMonitoringAgentProcessResponse
       */
      Models::DeleteGroupMonitoringAgentProcessResponse deleteGroupMonitoringAgentProcess(const Models::DeleteGroupMonitoringAgentProcessRequest &request);

      /**
       * @summary Deletes one or more availability monitoring jobs.
       *
       * @param request DeleteHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHostAvailabilityResponse
       */
      Models::DeleteHostAvailabilityResponse deleteHostAvailabilityWithOptions(const Models::DeleteHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more availability monitoring jobs.
       *
       * @param request DeleteHostAvailabilityRequest
       * @return DeleteHostAvailabilityResponse
       */
      Models::DeleteHostAvailabilityResponse deleteHostAvailability(const Models::DeleteHostAvailabilityRequest &request);

      /**
       * @summary Deletes a namespace.
       *
       * @description > If a metric import task is created for metrics in a namespace, you cannot delete the namespace unless you delete the task first.
       * This topic provides an example on how to delete a namespace named `aliyun`. The response shows that the namespace is deleted.
       *
       * @param request DeleteHybridMonitorNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridMonitorNamespaceResponse
       */
      Models::DeleteHybridMonitorNamespaceResponse deleteHybridMonitorNamespaceWithOptions(const Models::DeleteHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace.
       *
       * @description > If a metric import task is created for metrics in a namespace, you cannot delete the namespace unless you delete the task first.
       * This topic provides an example on how to delete a namespace named `aliyun`. The response shows that the namespace is deleted.
       *
       * @param request DeleteHybridMonitorNamespaceRequest
       * @return DeleteHybridMonitorNamespaceResponse
       */
      Models::DeleteHybridMonitorNamespaceResponse deleteHybridMonitorNamespace(const Models::DeleteHybridMonitorNamespaceRequest &request);

      /**
       * @summary Deletes a Logstore group.
       *
       * @description This topic provides an example on how to delete a Logstore group named `Logstore_test`. The response shows that the Logstore group is deleted.
       *
       * @param request DeleteHybridMonitorSLSGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridMonitorSLSGroupResponse
       */
      Models::DeleteHybridMonitorSLSGroupResponse deleteHybridMonitorSLSGroupWithOptions(const Models::DeleteHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Logstore group.
       *
       * @description This topic provides an example on how to delete a Logstore group named `Logstore_test`. The response shows that the Logstore group is deleted.
       *
       * @param request DeleteHybridMonitorSLSGroupRequest
       * @return DeleteHybridMonitorSLSGroupResponse
       */
      Models::DeleteHybridMonitorSLSGroupResponse deleteHybridMonitorSLSGroup(const Models::DeleteHybridMonitorSLSGroupRequest &request);

      /**
       * @summary Deletes a metric import task for Alibaba Cloud services or a metric for the logs that are imported from Log Service.
       *
       * @description This topic provides an example on how to delete a metric import task whose ID is `36****`. The returned result indicates that the metric import task is deleted.
       *
       * @param request DeleteHybridMonitorTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHybridMonitorTaskResponse
       */
      Models::DeleteHybridMonitorTaskResponse deleteHybridMonitorTaskWithOptions(const Models::DeleteHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a metric import task for Alibaba Cloud services or a metric for the logs that are imported from Log Service.
       *
       * @description This topic provides an example on how to delete a metric import task whose ID is `36****`. The returned result indicates that the metric import task is deleted.
       *
       * @param request DeleteHybridMonitorTaskRequest
       * @return DeleteHybridMonitorTaskResponse
       */
      Models::DeleteHybridMonitorTaskResponse deleteHybridMonitorTask(const Models::DeleteHybridMonitorTaskRequest &request);

      /**
       * @summary Deletes a log monitoring metric.
       *
       * @param request DeleteLogMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLogMonitorResponse
       */
      Models::DeleteLogMonitorResponse deleteLogMonitorWithOptions(const Models::DeleteLogMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a log monitoring metric.
       *
       * @param request DeleteLogMonitorRequest
       * @return DeleteLogMonitorResponse
       */
      Models::DeleteLogMonitorResponse deleteLogMonitor(const Models::DeleteLogMonitorRequest &request);

      /**
       * @summary Calls the DeleteMetricRuleBlackList operation to delete alert blacklist policies.
       *
       * @param request DeleteMetricRuleBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRuleBlackListResponse
       */
      Models::DeleteMetricRuleBlackListResponse deleteMetricRuleBlackListWithOptions(const Models::DeleteMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteMetricRuleBlackList operation to delete alert blacklist policies.
       *
       * @param request DeleteMetricRuleBlackListRequest
       * @return DeleteMetricRuleBlackListResponse
       */
      Models::DeleteMetricRuleBlackListResponse deleteMetricRuleBlackList(const Models::DeleteMetricRuleBlackListRequest &request);

      /**
       * @summary Disassociates resources from an alert rule.
       *
       * @param request DeleteMetricRuleResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRuleResourcesResponse
       */
      Models::DeleteMetricRuleResourcesResponse deleteMetricRuleResourcesWithOptions(const Models::DeleteMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates resources from an alert rule.
       *
       * @param request DeleteMetricRuleResourcesRequest
       * @return DeleteMetricRuleResourcesResponse
       */
      Models::DeleteMetricRuleResourcesResponse deleteMetricRuleResources(const Models::DeleteMetricRuleResourcesRequest &request);

      /**
       * @summary Delete the push channels of an alert rule.
       *
       * @param request DeleteMetricRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRuleTargetsResponse
       */
      Models::DeleteMetricRuleTargetsResponse deleteMetricRuleTargetsWithOptions(const Models::DeleteMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the push channels of an alert rule.
       *
       * @param request DeleteMetricRuleTargetsRequest
       * @return DeleteMetricRuleTargetsResponse
       */
      Models::DeleteMetricRuleTargetsResponse deleteMetricRuleTargets(const Models::DeleteMetricRuleTargetsRequest &request);

      /**
       * @summary Deletes an alert rule template.
       *
       * @param request DeleteMetricRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRuleTemplateResponse
       */
      Models::DeleteMetricRuleTemplateResponse deleteMetricRuleTemplateWithOptions(const Models::DeleteMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert rule template.
       *
       * @param request DeleteMetricRuleTemplateRequest
       * @return DeleteMetricRuleTemplateResponse
       */
      Models::DeleteMetricRuleTemplateResponse deleteMetricRuleTemplate(const Models::DeleteMetricRuleTemplateRequest &request);

      /**
       * @summary The DeleteMetricRules operation deletes one or more alert rules.
       *
       * @param request DeleteMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRulesResponse
       */
      Models::DeleteMetricRulesResponse deleteMetricRulesWithOptions(const Models::DeleteMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DeleteMetricRules operation deletes one or more alert rules.
       *
       * @param request DeleteMetricRulesRequest
       * @return DeleteMetricRulesResponse
       */
      Models::DeleteMetricRulesResponse deleteMetricRules(const Models::DeleteMetricRulesRequest &request);

      /**
       * @summary Deletes an application group.
       *
       * @param request DeleteMonitorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorGroupResponse
       */
      Models::DeleteMonitorGroupResponse deleteMonitorGroupWithOptions(const Models::DeleteMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application group.
       *
       * @param request DeleteMonitorGroupRequest
       * @return DeleteMonitorGroupResponse
       */
      Models::DeleteMonitorGroupResponse deleteMonitorGroup(const Models::DeleteMonitorGroupRequest &request);

      /**
       * @summary Deletes a rule that is used to dynamically add the instances of a service to an application group.
       *
       * @param request DeleteMonitorGroupDynamicRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorGroupDynamicRuleResponse
       */
      Models::DeleteMonitorGroupDynamicRuleResponse deleteMonitorGroupDynamicRuleWithOptions(const Models::DeleteMonitorGroupDynamicRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a rule that is used to dynamically add the instances of a service to an application group.
       *
       * @param request DeleteMonitorGroupDynamicRuleRequest
       * @return DeleteMonitorGroupDynamicRuleResponse
       */
      Models::DeleteMonitorGroupDynamicRuleResponse deleteMonitorGroupDynamicRule(const Models::DeleteMonitorGroupDynamicRuleRequest &request);

      /**
       * @summary Removes instances from an application group.
       *
       * @param request DeleteMonitorGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorGroupInstancesResponse
       */
      Models::DeleteMonitorGroupInstancesResponse deleteMonitorGroupInstancesWithOptions(const Models::DeleteMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes instances from an application group.
       *
       * @param request DeleteMonitorGroupInstancesRequest
       * @return DeleteMonitorGroupInstancesResponse
       */
      Models::DeleteMonitorGroupInstancesResponse deleteMonitorGroupInstances(const Models::DeleteMonitorGroupInstancesRequest &request);

      /**
       * @summary Deletes a policy that is used to pause alert notifications for an application group.
       *
       * @param request DeleteMonitorGroupNotifyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitorGroupNotifyPolicyResponse
       */
      Models::DeleteMonitorGroupNotifyPolicyResponse deleteMonitorGroupNotifyPolicyWithOptions(const Models::DeleteMonitorGroupNotifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy that is used to pause alert notifications for an application group.
       *
       * @param request DeleteMonitorGroupNotifyPolicyRequest
       * @return DeleteMonitorGroupNotifyPolicyResponse
       */
      Models::DeleteMonitorGroupNotifyPolicyResponse deleteMonitorGroupNotifyPolicy(const Models::DeleteMonitorGroupNotifyPolicyRequest &request);

      /**
       * @summary Calls the DeleteMonitoringAgentProcess operation to delete the specified process monitoring from a specified host.
       *
       * @param request DeleteMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitoringAgentProcessResponse
       */
      Models::DeleteMonitoringAgentProcessResponse deleteMonitoringAgentProcessWithOptions(const Models::DeleteMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DeleteMonitoringAgentProcess operation to delete the specified process monitoring from a specified host.
       *
       * @param request DeleteMonitoringAgentProcessRequest
       * @return DeleteMonitoringAgentProcessResponse
       */
      Models::DeleteMonitoringAgentProcessResponse deleteMonitoringAgentProcess(const Models::DeleteMonitoringAgentProcessRequest &request);

      /**
       * @summary Deletes site monitoring tasks by calling the DeleteSiteMonitors operation.
       *
       * @param request DeleteSiteMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteMonitorsResponse
       */
      Models::DeleteSiteMonitorsResponse deleteSiteMonitorsWithOptions(const Models::DeleteSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes site monitoring tasks by calling the DeleteSiteMonitors operation.
       *
       * @param request DeleteSiteMonitorsRequest
       * @return DeleteSiteMonitorsResponse
       */
      Models::DeleteSiteMonitorsResponse deleteSiteMonitors(const Models::DeleteSiteMonitorsRequest &request);

      /**
       * @summary Queries initiative alert rules.
       *
       * @param request DescribeActiveMetricRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveMetricRuleListResponse
       */
      Models::DescribeActiveMetricRuleListResponse describeActiveMetricRuleListWithOptions(const Models::DescribeActiveMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries initiative alert rules.
       *
       * @param request DescribeActiveMetricRuleListRequest
       * @return DescribeActiveMetricRuleListResponse
       */
      Models::DescribeActiveMetricRuleListResponse describeActiveMetricRuleList(const Models::DescribeActiveMetricRuleListRequest &request);

      /**
       * @deprecated OpenAPI DescribeAlertHistoryList is deprecated, please use Cms::2019-01-01::DescribeAlertLogList instead.
       *
       * @summary Queries historical alerts.
       *
       * @description This API operation is no longer maintained. We recommend that you call the [DescribeAlertLogList](https://help.aliyun.com/document_detail/201087.html) operation.
       *
       * @param request DescribeAlertHistoryListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertHistoryListResponse
       */
      Models::DescribeAlertHistoryListResponse describeAlertHistoryListWithOptions(const Models::DescribeAlertHistoryListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeAlertHistoryList is deprecated, please use Cms::2019-01-01::DescribeAlertLogList instead.
       *
       * @summary Queries historical alerts.
       *
       * @description This API operation is no longer maintained. We recommend that you call the [DescribeAlertLogList](https://help.aliyun.com/document_detail/201087.html) operation.
       *
       * @param request DescribeAlertHistoryListRequest
       * @return DescribeAlertHistoryListResponse
       */
      Models::DescribeAlertHistoryListResponse describeAlertHistoryList(const Models::DescribeAlertHistoryListRequest &request);

      /**
       * @summary Queries the statistics of alert logs.
       *
       * @description Queries the statistics of alert logs.
       * This topic provides an example on how to query the statistics of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
       *
       * @param request DescribeAlertLogCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertLogCountResponse
       */
      Models::DescribeAlertLogCountResponse describeAlertLogCountWithOptions(const Models::DescribeAlertLogCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of alert logs.
       *
       * @description Queries the statistics of alert logs.
       * This topic provides an example on how to query the statistics of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
       *
       * @param request DescribeAlertLogCountRequest
       * @return DescribeAlertLogCountResponse
       */
      Models::DescribeAlertLogCountResponse describeAlertLogCount(const Models::DescribeAlertLogCountRequest &request);

      /**
       * @summary Queries the number of alert logs that are generated during each interval within a period of time.
       *
       * @description This topic provides an example on how to query the number of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
       *
       * @param request DescribeAlertLogHistogramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertLogHistogramResponse
       */
      Models::DescribeAlertLogHistogramResponse describeAlertLogHistogramWithOptions(const Models::DescribeAlertLogHistogramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of alert logs that are generated during each interval within a period of time.
       *
       * @description This topic provides an example on how to query the number of alert logs for Elastic Compute Service (ECS) based on the `product` dimension.
       *
       * @param request DescribeAlertLogHistogramRequest
       * @return DescribeAlertLogHistogramResponse
       */
      Models::DescribeAlertLogHistogramResponse describeAlertLogHistogram(const Models::DescribeAlertLogHistogramRequest &request);

      /**
       * @summary Queries the alert history by calling the DescribeAlertLogList operation.
       *
       * @description This operation can query the alert history only within the last year.
       * This topic provides an example to show how to query the alert history of Elastic Compute Service (ECS) from the cloud service `product` dimension.
       *
       * @param request DescribeAlertLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertLogListResponse
       */
      Models::DescribeAlertLogListResponse describeAlertLogListWithOptions(const Models::DescribeAlertLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert history by calling the DescribeAlertLogList operation.
       *
       * @description This operation can query the alert history only within the last year.
       * This topic provides an example to show how to query the alert history of Elastic Compute Service (ECS) from the cloud service `product` dimension.
       *
       * @param request DescribeAlertLogListRequest
       * @return DescribeAlertLogListResponse
       */
      Models::DescribeAlertLogListResponse describeAlertLogList(const Models::DescribeAlertLogListRequest &request);

      /**
       * @summary Queries the resources for which active alerts are triggered based on an alert rule.
       *
       * @param request DescribeAlertingMetricRuleResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertingMetricRuleResourcesResponse
       */
      Models::DescribeAlertingMetricRuleResourcesResponse describeAlertingMetricRuleResourcesWithOptions(const Models::DescribeAlertingMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources for which active alerts are triggered based on an alert rule.
       *
       * @param request DescribeAlertingMetricRuleResourcesRequest
       * @return DescribeAlertingMetricRuleResourcesResponse
       */
      Models::DescribeAlertingMetricRuleResourcesResponse describeAlertingMetricRuleResources(const Models::DescribeAlertingMetricRuleResourcesRequest &request);

      /**
       * @summary Call the DescribeContactGroupList interface to query the list of alarm contact groups.
       *
       * @param request DescribeContactGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContactGroupListResponse
       */
      Models::DescribeContactGroupListResponse describeContactGroupListWithOptions(const Models::DescribeContactGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeContactGroupList interface to query the list of alarm contact groups.
       *
       * @param request DescribeContactGroupListRequest
       * @return DescribeContactGroupListResponse
       */
      Models::DescribeContactGroupListResponse describeContactGroupList(const Models::DescribeContactGroupListRequest &request);

      /**
       * @summary Calls the DescribeContactList operation to query a list of alert contacts.
       *
       * @param request DescribeContactListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContactListResponse
       */
      Models::DescribeContactListResponse describeContactListWithOptions(const Models::DescribeContactListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeContactList operation to query a list of alert contacts.
       *
       * @param request DescribeContactListRequest
       * @return DescribeContactListResponse
       */
      Models::DescribeContactListResponse describeContactList(const Models::DescribeContactListRequest &request);

      /**
       * @summary Queries the alert contacts in an alert contact group.
       *
       * @param request DescribeContactListByContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContactListByContactGroupResponse
       */
      Models::DescribeContactListByContactGroupResponse describeContactListByContactGroupWithOptions(const Models::DescribeContactListByContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert contacts in an alert contact group.
       *
       * @param request DescribeContactListByContactGroupRequest
       * @return DescribeContactListByContactGroupResponse
       */
      Models::DescribeContactListByContactGroupResponse describeContactListByContactGroup(const Models::DescribeContactListByContactGroupRequest &request);

      /**
       * @summary Queries a custom event.
       *
       * @param request DescribeCustomEventAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomEventAttributeResponse
       */
      Models::DescribeCustomEventAttributeResponse describeCustomEventAttributeWithOptions(const Models::DescribeCustomEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a custom event.
       *
       * @param request DescribeCustomEventAttributeRequest
       * @return DescribeCustomEventAttributeResponse
       */
      Models::DescribeCustomEventAttributeResponse describeCustomEventAttribute(const Models::DescribeCustomEventAttributeRequest &request);

      /**
       * @summary Queries the number of times that a custom event occurred within a period of time.
       *
       * @description > This operation queries the number of times that a custom event occurred for each service.
       *
       * @param request DescribeCustomEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomEventCountResponse
       */
      Models::DescribeCustomEventCountResponse describeCustomEventCountWithOptions(const Models::DescribeCustomEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times that a custom event occurred within a period of time.
       *
       * @description > This operation queries the number of times that a custom event occurred for each service.
       *
       * @param request DescribeCustomEventCountRequest
       * @return DescribeCustomEventCountResponse
       */
      Models::DescribeCustomEventCountResponse describeCustomEventCount(const Models::DescribeCustomEventCountRequest &request);

      /**
       * @summary Queries the number of times that a custom event occurred during each interval within a period of time.
       *
       * @param request DescribeCustomEventHistogramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomEventHistogramResponse
       */
      Models::DescribeCustomEventHistogramResponse describeCustomEventHistogramWithOptions(const Models::DescribeCustomEventHistogramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times that a custom event occurred during each interval within a period of time.
       *
       * @param request DescribeCustomEventHistogramRequest
       * @return DescribeCustomEventHistogramResponse
       */
      Models::DescribeCustomEventHistogramResponse describeCustomEventHistogram(const Models::DescribeCustomEventHistogramRequest &request);

      /**
       * @summary Queries the reported monitoring data.
       *
       * @description > You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
       *
       * @param request DescribeCustomMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomMetricListResponse
       */
      Models::DescribeCustomMetricListResponse describeCustomMetricListWithOptions(const Models::DescribeCustomMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the reported monitoring data.
       *
       * @description > You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
       *
       * @param request DescribeCustomMetricListRequest
       * @return DescribeCustomMetricListResponse
       */
      Models::DescribeCustomMetricListResponse describeCustomMetricList(const Models::DescribeCustomMetricListRequest &request);

      /**
       * @summary Call the DescribeDynamicTagRuleList operation to query the rules for dynamic tags.
       *
       * @description This topic provides an example of how to query the rules for the tag key `tagkey1`. The response shows that two rules are returned. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
       *
       * @param request DescribeDynamicTagRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDynamicTagRuleListResponse
       */
      Models::DescribeDynamicTagRuleListResponse describeDynamicTagRuleListWithOptions(const Models::DescribeDynamicTagRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeDynamicTagRuleList operation to query the rules for dynamic tags.
       *
       * @description This topic provides an example of how to query the rules for the tag key `tagkey1`. The response shows that two rules are returned. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
       *
       * @param request DescribeDynamicTagRuleListRequest
       * @return DescribeDynamicTagRuleListResponse
       */
      Models::DescribeDynamicTagRuleListResponse describeDynamicTagRuleList(const Models::DescribeDynamicTagRuleListRequest &request);

      /**
       * @summary Queries the details of a specified event-triggered alert rule by calling the DescribeEventRuleAttribute operation.
       *
       * @description This topic provides an example on how to query the details of the event-triggered alert rule `testRule`.
       *
       * @param request DescribeEventRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventRuleAttributeResponse
       */
      Models::DescribeEventRuleAttributeResponse describeEventRuleAttributeWithOptions(const Models::DescribeEventRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified event-triggered alert rule by calling the DescribeEventRuleAttribute operation.
       *
       * @description This topic provides an example on how to query the details of the event-triggered alert rule `testRule`.
       *
       * @param request DescribeEventRuleAttributeRequest
       * @return DescribeEventRuleAttributeResponse
       */
      Models::DescribeEventRuleAttributeResponse describeEventRuleAttribute(const Models::DescribeEventRuleAttributeRequest &request);

      /**
       * @summary Queries event-triggered alert rules.
       *
       * @param request DescribeEventRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventRuleListResponse
       */
      Models::DescribeEventRuleListResponse describeEventRuleListWithOptions(const Models::DescribeEventRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event-triggered alert rules.
       *
       * @param request DescribeEventRuleListRequest
       * @return DescribeEventRuleListResponse
       */
      Models::DescribeEventRuleListResponse describeEventRuleList(const Models::DescribeEventRuleListRequest &request);

      /**
       * @summary Queries the list of event-triggered alert rules.
       *
       * @description This topic provides an example to query the details of the event-triggered alert rule `testRule`.
       *
       * @param request DescribeEventRuleTargetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventRuleTargetListResponse
       */
      Models::DescribeEventRuleTargetListResponse describeEventRuleTargetListWithOptions(const Models::DescribeEventRuleTargetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of event-triggered alert rules.
       *
       * @description This topic provides an example to query the details of the event-triggered alert rule `testRule`.
       *
       * @param request DescribeEventRuleTargetListRequest
       * @return DescribeEventRuleTargetListResponse
       */
      Models::DescribeEventRuleTargetListResponse describeEventRuleTargetList(const Models::DescribeEventRuleTargetListRequest &request);

      /**
       * @summary Queries the list of monitoring data exports by calling the DescribeExporterOutputList operation.
       *
       * @param request DescribeExporterOutputListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExporterOutputListResponse
       */
      Models::DescribeExporterOutputListResponse describeExporterOutputListWithOptions(const Models::DescribeExporterOutputListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of monitoring data exports by calling the DescribeExporterOutputList operation.
       *
       * @param request DescribeExporterOutputListRequest
       * @return DescribeExporterOutputListResponse
       */
      Models::DescribeExporterOutputListResponse describeExporterOutputList(const Models::DescribeExporterOutputListRequest &request);

      /**
       * @summary Queries the list of data export rules by calling the DescribeExporterRuleList operation.
       *
       * @param request DescribeExporterRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExporterRuleListResponse
       */
      Models::DescribeExporterRuleListResponse describeExporterRuleListWithOptions(const Models::DescribeExporterRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of data export rules by calling the DescribeExporterRuleList operation.
       *
       * @param request DescribeExporterRuleListRequest
       * @return DescribeExporterRuleListResponse
       */
      Models::DescribeExporterRuleListResponse describeExporterRuleList(const Models::DescribeExporterRuleListRequest &request);

      /**
       * @summary Queries the process monitoring tasks for an application group.
       *
       * @description You can create a process monitoring task to monitor all or the specified Elastic Compute Service (ECS) instances in an application group and configure alert rules for the process monitoring task.
       *
       * @param request DescribeGroupMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupMonitoringAgentProcessResponse
       */
      Models::DescribeGroupMonitoringAgentProcessResponse describeGroupMonitoringAgentProcessWithOptions(const Models::DescribeGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the process monitoring tasks for an application group.
       *
       * @description You can create a process monitoring task to monitor all or the specified Elastic Compute Service (ECS) instances in an application group and configure alert rules for the process monitoring task.
       *
       * @param request DescribeGroupMonitoringAgentProcessRequest
       * @return DescribeGroupMonitoringAgentProcessResponse
       */
      Models::DescribeGroupMonitoringAgentProcessResponse describeGroupMonitoringAgentProcess(const Models::DescribeGroupMonitoringAgentProcessRequest &request);

      /**
       * @summary Queries availability monitoring tasks.
       *
       * @description This topic provides an example to show how to query all the availability monitoring tasks of your Alibaba Cloud account. The sample responses indicate that the account has one availability monitoring task named `ecs_instance`.
       *
       * @param request DescribeHostAvailabilityListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHostAvailabilityListResponse
       */
      Models::DescribeHostAvailabilityListResponse describeHostAvailabilityListWithOptions(const Models::DescribeHostAvailabilityListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries availability monitoring tasks.
       *
       * @description This topic provides an example to show how to query all the availability monitoring tasks of your Alibaba Cloud account. The sample responses indicate that the account has one availability monitoring task named `ecs_instance`.
       *
       * @param request DescribeHostAvailabilityListRequest
       * @return DescribeHostAvailabilityListResponse
       */
      Models::DescribeHostAvailabilityListResponse describeHostAvailabilityList(const Models::DescribeHostAvailabilityListRequest &request);

      /**
       * @summary Queries the monitoring data in a namespace.
       *
       * @description ## [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## [](#)Limits
       * The size of monitoring data that is returned in each call cannot exceed 1.5 MB. If the returned data reaches the upper limit, the query fails. You must reset the query conditions.
       * ## [](#)Operation description
       * This topic provides an example to show how to query the monitoring data of the `AliyunEcs_cpu_total` metric in the `default-aliyun` namespace from `1653804865` (14:14:25 on May 29, 2022) to `1653805225` (14:20:25 on May 29, 2022).
       *
       * @param request DescribeHybridMonitorDataListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridMonitorDataListResponse
       */
      Models::DescribeHybridMonitorDataListResponse describeHybridMonitorDataListWithOptions(const Models::DescribeHybridMonitorDataListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data in a namespace.
       *
       * @description ## [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## [](#)Limits
       * The size of monitoring data that is returned in each call cannot exceed 1.5 MB. If the returned data reaches the upper limit, the query fails. You must reset the query conditions.
       * ## [](#)Operation description
       * This topic provides an example to show how to query the monitoring data of the `AliyunEcs_cpu_total` metric in the `default-aliyun` namespace from `1653804865` (14:14:25 on May 29, 2022) to `1653805225` (14:20:25 on May 29, 2022).
       *
       * @param request DescribeHybridMonitorDataListRequest
       * @return DescribeHybridMonitorDataListResponse
       */
      Models::DescribeHybridMonitorDataListResponse describeHybridMonitorDataList(const Models::DescribeHybridMonitorDataListRequest &request);

      /**
       * @summary Queries a list of namespaces and the details of their data sources.
       *
       * @description This example shows how to query all namespaces that belong to the current account. The response indicates that only one namespace, `aliyun-test`, exists.
       *
       * @param request DescribeHybridMonitorNamespaceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridMonitorNamespaceListResponse
       */
      Models::DescribeHybridMonitorNamespaceListResponse describeHybridMonitorNamespaceListWithOptions(const Models::DescribeHybridMonitorNamespaceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of namespaces and the details of their data sources.
       *
       * @description This example shows how to query all namespaces that belong to the current account. The response indicates that only one namespace, `aliyun-test`, exists.
       *
       * @param request DescribeHybridMonitorNamespaceListRequest
       * @return DescribeHybridMonitorNamespaceListResponse
       */
      Models::DescribeHybridMonitorNamespaceListResponse describeHybridMonitorNamespaceList(const Models::DescribeHybridMonitorNamespaceListRequest &request);

      /**
       * @summary Queries the list of Logstore groups by calling the DescribeHybridMonitorSLSGroup operation.
       *
       * @description This topic provides an example of how to query all Logstore groups in the current account. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
       *
       * @param request DescribeHybridMonitorSLSGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridMonitorSLSGroupResponse
       */
      Models::DescribeHybridMonitorSLSGroupResponse describeHybridMonitorSLSGroupWithOptions(const Models::DescribeHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Logstore groups by calling the DescribeHybridMonitorSLSGroup operation.
       *
       * @description This topic provides an example of how to query all Logstore groups in the current account. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
       *
       * @param request DescribeHybridMonitorSLSGroupRequest
       * @return DescribeHybridMonitorSLSGroupResponse
       */
      Models::DescribeHybridMonitorSLSGroupResponse describeHybridMonitorSLSGroup(const Models::DescribeHybridMonitorSLSGroupRequest &request);

      /**
       * @summary Queries metric import tasks.
       *
       * @description This topic provides an example on how to query all metric import tasks that belong to the current Alibaba Cloud account. The returned result indicates that the current account has only one metric import task. The metric import task is named `aliyun_task`.
       *
       * @param request DescribeHybridMonitorTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridMonitorTaskListResponse
       */
      Models::DescribeHybridMonitorTaskListResponse describeHybridMonitorTaskListWithOptions(const Models::DescribeHybridMonitorTaskListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metric import tasks.
       *
       * @description This topic provides an example on how to query all metric import tasks that belong to the current Alibaba Cloud account. The returned result indicates that the current account has only one metric import task. The metric import task is named `aliyun_task`.
       *
       * @param request DescribeHybridMonitorTaskListRequest
       * @return DescribeHybridMonitorTaskListResponse
       */
      Models::DescribeHybridMonitorTaskListResponse describeHybridMonitorTaskList(const Models::DescribeHybridMonitorTaskListRequest &request);

      /**
       * @summary Queries a Log Monitoring task.
       *
       * @param request DescribeLogMonitorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogMonitorAttributeResponse
       */
      Models::DescribeLogMonitorAttributeResponse describeLogMonitorAttributeWithOptions(const Models::DescribeLogMonitorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a Log Monitoring task.
       *
       * @param request DescribeLogMonitorAttributeRequest
       * @return DescribeLogMonitorAttributeResponse
       */
      Models::DescribeLogMonitorAttributeResponse describeLogMonitorAttribute(const Models::DescribeLogMonitorAttributeRequest &request);

      /**
       * @summary Queries log monitoring metrics.
       *
       * @param request DescribeLogMonitorListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogMonitorListResponse
       */
      Models::DescribeLogMonitorListResponse describeLogMonitorListWithOptions(const Models::DescribeLogMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries log monitoring metrics.
       *
       * @param request DescribeLogMonitorListRequest
       * @return DescribeLogMonitorListResponse
       */
      Models::DescribeLogMonitorListResponse describeLogMonitorList(const Models::DescribeLogMonitorListRequest &request);

      /**
       * @summary Queries the monitoring data of a metric for a cloud service.
       *
       * @description ### [](#)Limits
       * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Description
       * > Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
       * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`.
       *
       * @param request DescribeMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricDataResponse
       */
      Models::DescribeMetricDataResponse describeMetricDataWithOptions(const Models::DescribeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of a metric for a cloud service.
       *
       * @description ### [](#)Limits
       * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Description
       * > Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
       * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`.
       *
       * @param request DescribeMetricDataRequest
       * @return DescribeMetricDataResponse
       */
      Models::DescribeMetricDataResponse describeMetricData(const Models::DescribeMetricDataRequest &request);

      /**
       * @summary Queries the latest monitoring data of a metric.
       *
       * @description ### [](#)Limits
       * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * > If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * - The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
       * ### [](#)Operation description
       * This topic provides an example on how to query the latest monitoring data of the `CPUUtilization` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `123456789876****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
       *
       * @param request DescribeMetricLastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLastWithOptions(const Models::DescribeMetricLastRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest monitoring data of a metric.
       *
       * @description ### [](#)Limits
       * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * > If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * - The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
       * ### [](#)Operation description
       * This topic provides an example on how to query the latest monitoring data of the `CPUUtilization` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `123456789876****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
       *
       * @param request DescribeMetricLastRequest
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLast(const Models::DescribeMetricLastRequest &request);

      /**
       * @summary The DescribeMetricList operation queries the monitoring data of a specific metric for a cloud service.
       *
       * @description ### Limits
       * - You have a free quota of 1 million total API calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If you use up the free quota and have not enabled the pay-as-you-go billing method for CloudMonitor Basic, you can no longer use these API operations. If you have enabled the pay-as-you-go billing method, you can continue to use the API operations after the free quota is used up. API calls that exceed the free quota are automatically charged on a pay-as-you-go basis. For more information, see [Enable pay-as-you-go](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - You can call each API operation up to 50 times per second. This limit is shared between an Alibaba Cloud account and its RAM users.
       * > If you receive the `Throttling.User` or `Request was denied due to user flow control` error message when you call an API operation, the API call is throttled. For more information, see [How do I resolve an API call throttling issue?](https://help.aliyun.com/document_detail/2615031.html).
       * ### Notes
       * The storage duration of monitoring data for a cloud service depends on the `Period` (statistical period). A larger `Period` value indicates that the monitoring data is less granular and is stored for a longer period. The relationship is as follows:
       * - If the value of `Period` is less than 60 seconds, the storage duration is 7 days.
       * - If the value of `Period` is 60 seconds, the storage duration is 31 days.
       * - If the value of `Period` is 300 seconds or greater, the storage duration is 91 days.
       * ### Usage notes
       * This topic provides an example of how to query the monitoring data of the `cpu_idle` metric for the `acs_ecs_dashboard` cloud service. The response shows the data for the instance `i-abcdefgh12****`, which belongs to the Alibaba Cloud account `120886317861****`. At a 60 second interval, the maximum, minimum, and average values of the metric are 100, 93.1, and 99.52, respectively.
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The DescribeMetricList operation queries the monitoring data of a specific metric for a cloud service.
       *
       * @description ### Limits
       * - You have a free quota of 1 million total API calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If you use up the free quota and have not enabled the pay-as-you-go billing method for CloudMonitor Basic, you can no longer use these API operations. If you have enabled the pay-as-you-go billing method, you can continue to use the API operations after the free quota is used up. API calls that exceed the free quota are automatically charged on a pay-as-you-go basis. For more information, see [Enable pay-as-you-go](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - You can call each API operation up to 50 times per second. This limit is shared between an Alibaba Cloud account and its RAM users.
       * > If you receive the `Throttling.User` or `Request was denied due to user flow control` error message when you call an API operation, the API call is throttled. For more information, see [How do I resolve an API call throttling issue?](https://help.aliyun.com/document_detail/2615031.html).
       * ### Notes
       * The storage duration of monitoring data for a cloud service depends on the `Period` (statistical period). A larger `Period` value indicates that the monitoring data is less granular and is stored for a longer period. The relationship is as follows:
       * - If the value of `Period` is less than 60 seconds, the storage duration is 7 days.
       * - If the value of `Period` is 60 seconds, the storage duration is 31 days.
       * - If the value of `Period` is 300 seconds or greater, the storage duration is 91 days.
       * ### Usage notes
       * This topic provides an example of how to query the monitoring data of the `cpu_idle` metric for the `acs_ecs_dashboard` cloud service. The response shows the data for the instance `i-abcdefgh12****`, which belongs to the Alibaba Cloud account `120886317861****`. At a 60 second interval, the maximum, minimum, and average values of the metric are 100, 93.1, and 99.52, respectively.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Queries metrics that are supported in CloudMonitor.
       *
       * @description Use this operation together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
       *
       * @param request DescribeMetricMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricMetaListResponse
       */
      Models::DescribeMetricMetaListResponse describeMetricMetaListWithOptions(const Models::DescribeMetricMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries metrics that are supported in CloudMonitor.
       *
       * @description Use this operation together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
       *
       * @param request DescribeMetricMetaListRequest
       * @return DescribeMetricMetaListResponse
       */
      Models::DescribeMetricMetaListResponse describeMetricMetaList(const Models::DescribeMetricMetaListRequest &request);

      /**
       * @summary You can call the DescribeMetricRuleBlackList operation to query blacklist policies.
       *
       * @param request DescribeMetricRuleBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleBlackListResponse
       */
      Models::DescribeMetricRuleBlackListResponse describeMetricRuleBlackListWithOptions(const Models::DescribeMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeMetricRuleBlackList operation to query blacklist policies.
       *
       * @param request DescribeMetricRuleBlackListRequest
       * @return DescribeMetricRuleBlackListResponse
       */
      Models::DescribeMetricRuleBlackListResponse describeMetricRuleBlackList(const Models::DescribeMetricRuleBlackListRequest &request);

      /**
       * @summary Queries the number of alert rules in each state.
       *
       * @param request DescribeMetricRuleCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleCountResponse
       */
      Models::DescribeMetricRuleCountResponse describeMetricRuleCountWithOptions(const Models::DescribeMetricRuleCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of alert rules in each state.
       *
       * @param request DescribeMetricRuleCountRequest
       * @return DescribeMetricRuleCountResponse
       */
      Models::DescribeMetricRuleCountResponse describeMetricRuleCount(const Models::DescribeMetricRuleCountRequest &request);

      /**
       * @summary Queries all alert rules in the alert rule list.
       *
       * @description This topic provides an example of how to query all alert rules in the alert rule list of the current Alibaba Cloud account. The response shows that the alert rule list contains only one alert rule. The alert rule is named `Rule_01` and has an ID of `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
       *
       * @param request DescribeMetricRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleListResponse
       */
      Models::DescribeMetricRuleListResponse describeMetricRuleListWithOptions(const Models::DescribeMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all alert rules in the alert rule list.
       *
       * @description This topic provides an example of how to query all alert rules in the alert rule list of the current Alibaba Cloud account. The response shows that the alert rule list contains only one alert rule. The alert rule is named `Rule_01` and has an ID of `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
       *
       * @param request DescribeMetricRuleListRequest
       * @return DescribeMetricRuleListResponse
       */
      Models::DescribeMetricRuleListResponse describeMetricRuleList(const Models::DescribeMetricRuleListRequest &request);

      /**
       * @summary Queries the notification channels of a specified alert rule by calling the DescribeMetricRuleTargets operation.
       *
       * @description ## Usage notes
       * This topic provides an example to query the target resources associated with the alert rule `ae06917_75a8c43178ab66****`.
       *
       * @param request DescribeMetricRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleTargetsResponse
       */
      Models::DescribeMetricRuleTargetsResponse describeMetricRuleTargetsWithOptions(const Models::DescribeMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the notification channels of a specified alert rule by calling the DescribeMetricRuleTargets operation.
       *
       * @description ## Usage notes
       * This topic provides an example to query the target resources associated with the alert rule `ae06917_75a8c43178ab66****`.
       *
       * @param request DescribeMetricRuleTargetsRequest
       * @return DescribeMetricRuleTargetsResponse
       */
      Models::DescribeMetricRuleTargetsResponse describeMetricRuleTargets(const Models::DescribeMetricRuleTargetsRequest &request);

      /**
       * @summary Queries the details of an alert template by calling the DescribeMetricRuleTemplateAttribute operation.
       *
       * @description This topic provides an example on how to query the details of the alert template `70****`.
       *
       * @param request DescribeMetricRuleTemplateAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleTemplateAttributeResponse
       */
      Models::DescribeMetricRuleTemplateAttributeResponse describeMetricRuleTemplateAttributeWithOptions(const Models::DescribeMetricRuleTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an alert template by calling the DescribeMetricRuleTemplateAttribute operation.
       *
       * @description This topic provides an example on how to query the details of the alert template `70****`.
       *
       * @param request DescribeMetricRuleTemplateAttributeRequest
       * @return DescribeMetricRuleTemplateAttributeResponse
       */
      Models::DescribeMetricRuleTemplateAttributeResponse describeMetricRuleTemplateAttribute(const Models::DescribeMetricRuleTemplateAttributeRequest &request);

      /**
       * @summary Queries alert templates.
       *
       * @description This topic provides an example on how to query alert templates. In this example, the following alert templates are returned in the response: `ECS_Template1` and `ECS_Template2`.
       *
       * @param request DescribeMetricRuleTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleTemplateListResponse
       */
      Models::DescribeMetricRuleTemplateListResponse describeMetricRuleTemplateListWithOptions(const Models::DescribeMetricRuleTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert templates.
       *
       * @description This topic provides an example on how to query alert templates. In this example, the following alert templates are returned in the response: `ECS_Template1` and `ECS_Template2`.
       *
       * @param request DescribeMetricRuleTemplateListRequest
       * @return DescribeMetricRuleTemplateListResponse
       */
      Models::DescribeMetricRuleTemplateListResponse describeMetricRuleTemplateList(const Models::DescribeMetricRuleTemplateListRequest &request);

      /**
       * @summary Queries the latest monitoring data of a metric for a cloud service. The data can be sorted by a specified order.
       *
       * @description ### [](#)Limits
       * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * - The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
       * ### [](#)Operation description
       * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric in the last 60 seconds for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The monitoring data is sorted in descending order based on the `Average` field.
       *
       * @param request DescribeMetricTopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricTopResponse
       */
      Models::DescribeMetricTopResponse describeMetricTopWithOptions(const Models::DescribeMetricTopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the latest monitoring data of a metric for a cloud service. The data can be sorted by a specified order.
       *
       * @description ### [](#)Limits
       * - The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * - Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * - The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * - The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * - The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
       * ### [](#)Operation description
       * This topic provides an example on how to query the monitoring data of the `cpu_idle` metric in the last 60 seconds for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The monitoring data is sorted in descending order based on the `Average` field.
       *
       * @param request DescribeMetricTopRequest
       * @return DescribeMetricTopResponse
       */
      Models::DescribeMetricTopResponse describeMetricTop(const Models::DescribeMetricTopRequest &request);

      /**
       * @summary Queries the cloud services to which the resources in an application group belong and the number of resources that belong to each cloud service in the application group.
       *
       * @param request DescribeMonitorGroupCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupCategoriesResponse
       */
      Models::DescribeMonitorGroupCategoriesResponse describeMonitorGroupCategoriesWithOptions(const Models::DescribeMonitorGroupCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud services to which the resources in an application group belong and the number of resources that belong to each cloud service in the application group.
       *
       * @param request DescribeMonitorGroupCategoriesRequest
       * @return DescribeMonitorGroupCategoriesResponse
       */
      Models::DescribeMonitorGroupCategoriesResponse describeMonitorGroupCategories(const Models::DescribeMonitorGroupCategoriesRequest &request);

      /**
       * @summary Queries the dynamic rules of an application group.
       *
       * @param request DescribeMonitorGroupDynamicRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupDynamicRulesResponse
       */
      Models::DescribeMonitorGroupDynamicRulesResponse describeMonitorGroupDynamicRulesWithOptions(const Models::DescribeMonitorGroupDynamicRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dynamic rules of an application group.
       *
       * @param request DescribeMonitorGroupDynamicRulesRequest
       * @return DescribeMonitorGroupDynamicRulesResponse
       */
      Models::DescribeMonitorGroupDynamicRulesResponse describeMonitorGroupDynamicRules(const Models::DescribeMonitorGroupDynamicRulesRequest &request);

      /**
       * @summary Queries the resources in an application group.
       *
       * @param request DescribeMonitorGroupInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupInstanceAttributeResponse
       */
      Models::DescribeMonitorGroupInstanceAttributeResponse describeMonitorGroupInstanceAttributeWithOptions(const Models::DescribeMonitorGroupInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources in an application group.
       *
       * @param request DescribeMonitorGroupInstanceAttributeRequest
       * @return DescribeMonitorGroupInstanceAttributeResponse
       */
      Models::DescribeMonitorGroupInstanceAttributeResponse describeMonitorGroupInstanceAttribute(const Models::DescribeMonitorGroupInstanceAttributeRequest &request);

      /**
       * @summary Queries the resources in an application group.
       *
       * @param request DescribeMonitorGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupInstancesResponse
       */
      Models::DescribeMonitorGroupInstancesResponse describeMonitorGroupInstancesWithOptions(const Models::DescribeMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources in an application group.
       *
       * @param request DescribeMonitorGroupInstancesRequest
       * @return DescribeMonitorGroupInstancesResponse
       */
      Models::DescribeMonitorGroupInstancesResponse describeMonitorGroupInstances(const Models::DescribeMonitorGroupInstancesRequest &request);

      /**
       * @summary Queries the list of alert notification pause policies for an application group by calling the DescribeMonitorGroupNotifyPolicyList operation.
       *
       * @param request DescribeMonitorGroupNotifyPolicyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupNotifyPolicyListResponse
       */
      Models::DescribeMonitorGroupNotifyPolicyListResponse describeMonitorGroupNotifyPolicyListWithOptions(const Models::DescribeMonitorGroupNotifyPolicyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of alert notification pause policies for an application group by calling the DescribeMonitorGroupNotifyPolicyList operation.
       *
       * @param request DescribeMonitorGroupNotifyPolicyListRequest
       * @return DescribeMonitorGroupNotifyPolicyListResponse
       */
      Models::DescribeMonitorGroupNotifyPolicyListResponse describeMonitorGroupNotifyPolicyList(const Models::DescribeMonitorGroupNotifyPolicyListRequest &request);

      /**
       * @summary You can call the DescribeMonitorGroups operation to query a list of application groups.
       *
       * @description This topic provides an example of how to query a list of application groups. The response shows that two application groups are returned: `testGroup124` and `test123`.
       *
       * @param request DescribeMonitorGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupsResponse
       */
      Models::DescribeMonitorGroupsResponse describeMonitorGroupsWithOptions(const Models::DescribeMonitorGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeMonitorGroups operation to query a list of application groups.
       *
       * @description This topic provides an example of how to query a list of application groups. The response shows that two application groups are returned: `testGroup124` and `test123`.
       *
       * @param request DescribeMonitorGroupsRequest
       * @return DescribeMonitorGroupsResponse
       */
      Models::DescribeMonitorGroupsResponse describeMonitorGroups(const Models::DescribeMonitorGroupsRequest &request);

      /**
       * @summary Queries the resource quotas of CloudMonitor.
       *
       * @param request DescribeMonitorResourceQuotaAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorResourceQuotaAttributeResponse
       */
      Models::DescribeMonitorResourceQuotaAttributeResponse describeMonitorResourceQuotaAttributeWithOptions(const Models::DescribeMonitorResourceQuotaAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource quotas of CloudMonitor.
       *
       * @param request DescribeMonitorResourceQuotaAttributeRequest
       * @return DescribeMonitorResourceQuotaAttributeResponse
       */
      Models::DescribeMonitorResourceQuotaAttributeResponse describeMonitorResourceQuotaAttribute(const Models::DescribeMonitorResourceQuotaAttributeRequest &request);

      /**
       * @summary Queries the AccessKey ID and AccessKey secret that are required to install the CloudMonitor agent on a third-party host.
       *
       * @param request DescribeMonitoringAgentAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentAccessKeyResponse
       */
      Models::DescribeMonitoringAgentAccessKeyResponse describeMonitoringAgentAccessKeyWithOptions(const Models::DescribeMonitoringAgentAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AccessKey ID and AccessKey secret that are required to install the CloudMonitor agent on a third-party host.
       *
       * @param request DescribeMonitoringAgentAccessKeyRequest
       * @return DescribeMonitoringAgentAccessKeyResponse
       */
      Models::DescribeMonitoringAgentAccessKeyResponse describeMonitoringAgentAccessKey(const Models::DescribeMonitoringAgentAccessKeyRequest &request);

      /**
       * @summary Queries the configurations of the CloudMonitor agent.
       *
       * @param request DescribeMonitoringAgentConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentConfigResponse
       */
      Models::DescribeMonitoringAgentConfigResponse describeMonitoringAgentConfigWithOptions(const Models::DescribeMonitoringAgentConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of the CloudMonitor agent.
       *
       * @param request DescribeMonitoringAgentConfigRequest
       * @return DescribeMonitoringAgentConfigResponse
       */
      Models::DescribeMonitoringAgentConfigResponse describeMonitoringAgentConfig(const Models::DescribeMonitoringAgentConfigRequest &request);

      /**
       * @summary You can call the DescribeMonitoringAgentHosts operation to query a list of all hosts, regardless of whether the CloudMonitor agent is installed.
       *
       * @param request DescribeMonitoringAgentHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentHostsResponse
       */
      Models::DescribeMonitoringAgentHostsResponse describeMonitoringAgentHostsWithOptions(const Models::DescribeMonitoringAgentHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeMonitoringAgentHosts operation to query a list of all hosts, regardless of whether the CloudMonitor agent is installed.
       *
       * @param request DescribeMonitoringAgentHostsRequest
       * @return DescribeMonitoringAgentHostsResponse
       */
      Models::DescribeMonitoringAgentHostsResponse describeMonitoringAgentHosts(const Models::DescribeMonitoringAgentHostsRequest &request);

      /**
       * @summary Call the DescribeMonitoringAgentProcesses operation to query the list of processes for a specified resource.
       *
       * @description > Before you call this operation, you must call the CreateMonitoringAgentProcess operation to create a process monitoring task. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/2513212.html).
       * This topic provides an example of how to query the list of processes for the resource i-hp3hl3cx1pbahzy8\\*\\*\\*\\*. The response shows the details of the Nginx and HTTP processes.
       *
       * @param request DescribeMonitoringAgentProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentProcessesResponse
       */
      Models::DescribeMonitoringAgentProcessesResponse describeMonitoringAgentProcessesWithOptions(const Models::DescribeMonitoringAgentProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeMonitoringAgentProcesses operation to query the list of processes for a specified resource.
       *
       * @description > Before you call this operation, you must call the CreateMonitoringAgentProcess operation to create a process monitoring task. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/2513212.html).
       * This topic provides an example of how to query the list of processes for the resource i-hp3hl3cx1pbahzy8\\*\\*\\*\\*. The response shows the details of the Nginx and HTTP processes.
       *
       * @param request DescribeMonitoringAgentProcessesRequest
       * @return DescribeMonitoringAgentProcessesResponse
       */
      Models::DescribeMonitoringAgentProcessesResponse describeMonitoringAgentProcesses(const Models::DescribeMonitoringAgentProcessesRequest &request);

      /**
       * @summary Queries the running status of the CloudMonitor agent by calling the DescribeMonitoringAgentStatuses operation.
       *
       * @description This topic describes how to query the status of the CloudMonitor agent that is installed on the `i-hp3dunahluwajv6f****` instance. The result indicates that the CloudMonitor agent is in the `running` state.
       *
       * @param request DescribeMonitoringAgentStatusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentStatusesResponse
       */
      Models::DescribeMonitoringAgentStatusesResponse describeMonitoringAgentStatusesWithOptions(const Models::DescribeMonitoringAgentStatusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the running status of the CloudMonitor agent by calling the DescribeMonitoringAgentStatuses operation.
       *
       * @description This topic describes how to query the status of the CloudMonitor agent that is installed on the `i-hp3dunahluwajv6f****` instance. The result indicates that the CloudMonitor agent is in the `running` state.
       *
       * @param request DescribeMonitoringAgentStatusesRequest
       * @return DescribeMonitoringAgentStatusesResponse
       */
      Models::DescribeMonitoringAgentStatusesResponse describeMonitoringAgentStatuses(const Models::DescribeMonitoringAgentStatusesRequest &request);

      /**
       * @summary Queries the global configurations of the CloudMonitor agent.
       *
       * @param request DescribeMonitoringConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringConfigResponse
       */
      Models::DescribeMonitoringConfigResponse describeMonitoringConfigWithOptions(const Models::DescribeMonitoringConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global configurations of the CloudMonitor agent.
       *
       * @param request DescribeMonitoringConfigRequest
       * @return DescribeMonitoringConfigResponse
       */
      Models::DescribeMonitoringConfigResponse describeMonitoringConfig(const Models::DescribeMonitoringConfigRequest &request);

      /**
       * @summary Call the DescribeProductResourceTagKeyList operation to query all tag keys of cloud resources in a specified region.
       *
       * @param request DescribeProductResourceTagKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductResourceTagKeyListResponse
       */
      Models::DescribeProductResourceTagKeyListResponse describeProductResourceTagKeyListWithOptions(const Models::DescribeProductResourceTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeProductResourceTagKeyList operation to query all tag keys of cloud resources in a specified region.
       *
       * @param request DescribeProductResourceTagKeyListRequest
       * @return DescribeProductResourceTagKeyListResponse
       */
      Models::DescribeProductResourceTagKeyListResponse describeProductResourceTagKeyList(const Models::DescribeProductResourceTagKeyListRequest &request);

      /**
       * @summary Queries the cloud services for which the initiative alert feature is enabled.
       *
       * @param request DescribeProductsOfActiveMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductsOfActiveMetricRuleResponse
       */
      Models::DescribeProductsOfActiveMetricRuleResponse describeProductsOfActiveMetricRuleWithOptions(const Models::DescribeProductsOfActiveMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud services for which the initiative alert feature is enabled.
       *
       * @param request DescribeProductsOfActiveMetricRuleRequest
       * @return DescribeProductsOfActiveMetricRuleResponse
       */
      Models::DescribeProductsOfActiveMetricRuleResponse describeProductsOfActiveMetricRule(const Models::DescribeProductsOfActiveMetricRuleRequest &request);

      /**
       * @summary Calls the DescribeProjectMeta operation to query the list of cloud services that support time series monitoring metrics in CloudMonitor.
       *
       * @description Obtains the information about the connected cloud services, including the description, namespace, and tags of each service.
       *
       * @param request DescribeProjectMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectMetaResponse
       */
      Models::DescribeProjectMetaResponse describeProjectMetaWithOptions(const Models::DescribeProjectMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeProjectMeta operation to query the list of cloud services that support time series monitoring metrics in CloudMonitor.
       *
       * @description Obtains the information about the connected cloud services, including the description, namespace, and tags of each service.
       *
       * @param request DescribeProjectMetaRequest
       * @return DescribeProjectMetaResponse
       */
      Models::DescribeProjectMetaResponse describeProjectMeta(const Models::DescribeProjectMetaRequest &request);

      /**
       * @summary Queries the details of a site monitoring task by calling the DescribeSiteMonitorAttribute operation.
       *
       * @description This topic provides an example on how to query the details of the site monitoring task `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The response shows that the task name is `test123`, the monitored address is `https://aliyun.com`, and the carrier is `Alibaba`.
       *
       * @param request DescribeSiteMonitorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorAttributeResponse
       */
      Models::DescribeSiteMonitorAttributeResponse describeSiteMonitorAttributeWithOptions(const Models::DescribeSiteMonitorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a site monitoring task by calling the DescribeSiteMonitorAttribute operation.
       *
       * @description This topic provides an example on how to query the details of the site monitoring task `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The response shows that the task name is `test123`, the monitored address is `https://aliyun.com`, and the carrier is `Alibaba`.
       *
       * @param request DescribeSiteMonitorAttributeRequest
       * @return DescribeSiteMonitorAttributeResponse
       */
      Models::DescribeSiteMonitorAttributeResponse describeSiteMonitorAttribute(const Models::DescribeSiteMonitorAttributeRequest &request);

      /**
       * @summary Queries the fine-grained monitoring data of a site monitoring task.
       *
       * @param request DescribeSiteMonitorDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorDataResponse
       */
      Models::DescribeSiteMonitorDataResponse describeSiteMonitorDataWithOptions(const Models::DescribeSiteMonitorDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fine-grained monitoring data of a site monitoring task.
       *
       * @param request DescribeSiteMonitorDataRequest
       * @return DescribeSiteMonitorDataResponse
       */
      Models::DescribeSiteMonitorDataResponse describeSiteMonitorData(const Models::DescribeSiteMonitorDataRequest &request);

      /**
       * @summary Queries the details of all carrier detection points by calling the DescribeSiteMonitorISPCityList operation.
       *
       * @description 本文将提供一个示例，查询运营商“联通”在“贵阳市”的探测点详情。
       *
       * @param request DescribeSiteMonitorISPCityListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorISPCityListResponse
       */
      Models::DescribeSiteMonitorISPCityListResponse describeSiteMonitorISPCityListWithOptions(const Models::DescribeSiteMonitorISPCityListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of all carrier detection points by calling the DescribeSiteMonitorISPCityList operation.
       *
       * @description 本文将提供一个示例，查询运营商“联通”在“贵阳市”的探测点详情。
       *
       * @param request DescribeSiteMonitorISPCityListRequest
       * @return DescribeSiteMonitorISPCityListResponse
       */
      Models::DescribeSiteMonitorISPCityListResponse describeSiteMonitorISPCityList(const Models::DescribeSiteMonitorISPCityListRequest &request);

      /**
       * @summary Queries the list of site monitoring tasks by calling the DescribeSiteMonitorList operation.
       *
       * @description This topic provides an example of how to query the list of site monitoring tasks for the current account. The response shows that the current account has one site monitoring task named `HanZhou_ECS2`.
       *
       * @param request DescribeSiteMonitorListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorListResponse
       */
      Models::DescribeSiteMonitorListResponse describeSiteMonitorListWithOptions(const Models::DescribeSiteMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of site monitoring tasks by calling the DescribeSiteMonitorList operation.
       *
       * @description This topic provides an example of how to query the list of site monitoring tasks for the current account. The response shows that the current account has one site monitoring task named `HanZhou_ECS2`.
       *
       * @param request DescribeSiteMonitorListRequest
       * @return DescribeSiteMonitorListResponse
       */
      Models::DescribeSiteMonitorListResponse describeSiteMonitorList(const Models::DescribeSiteMonitorListRequest &request);

      /**
       * @summary Call the DescribeSiteMonitorLog operation to query the detection logs for a one-time detection task.
       *
       * @description Only Alibaba Cloud accounts with Network Analysis and Monitoring activated can create one-time detection tasks.
       * This topic provides an example of how to query the detection logs for the one-time detection task `afa5c3ce-f944-4363-9edb-ce919a29****`.
       *
       * @param request DescribeSiteMonitorLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorLogResponse
       */
      Models::DescribeSiteMonitorLogResponse describeSiteMonitorLogWithOptions(const Models::DescribeSiteMonitorLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeSiteMonitorLog operation to query the detection logs for a one-time detection task.
       *
       * @description Only Alibaba Cloud accounts with Network Analysis and Monitoring activated can create one-time detection tasks.
       * This topic provides an example of how to query the detection logs for the one-time detection task `afa5c3ce-f944-4363-9edb-ce919a29****`.
       *
       * @param request DescribeSiteMonitorLogRequest
       * @return DescribeSiteMonitorLogResponse
       */
      Models::DescribeSiteMonitorLogResponse describeSiteMonitorLog(const Models::DescribeSiteMonitorLogRequest &request);

      /**
       * @summary Calls the DescribeSiteMonitorQuota operation to query the quota and version of site monitoring.
       *
       * @param request DescribeSiteMonitorQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorQuotaResponse
       */
      Models::DescribeSiteMonitorQuotaResponse describeSiteMonitorQuotaWithOptions(const Models::DescribeSiteMonitorQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the DescribeSiteMonitorQuota operation to query the quota and version of site monitoring.
       *
       * @param request DescribeSiteMonitorQuotaRequest
       * @return DescribeSiteMonitorQuotaResponse
       */
      Models::DescribeSiteMonitorQuotaResponse describeSiteMonitorQuota(const Models::DescribeSiteMonitorQuotaRequest &request);

      /**
       * @summary Queries the average statistics of a specified metric in a specified site monitoring task by calling the DescribeSiteMonitorStatistics operation.
       *
       * @description This topic provides an example on how to query the average statistics of the `Availability` metric in the site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The returned result shows that the availability is `100`.
       *
       * @param request DescribeSiteMonitorStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorStatisticsResponse
       */
      Models::DescribeSiteMonitorStatisticsResponse describeSiteMonitorStatisticsWithOptions(const Models::DescribeSiteMonitorStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the average statistics of a specified metric in a specified site monitoring task by calling the DescribeSiteMonitorStatistics operation.
       *
       * @description This topic provides an example on how to query the average statistics of the `Availability` metric in the site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The returned result shows that the availability is `100`.
       *
       * @param request DescribeSiteMonitorStatisticsRequest
       * @return DescribeSiteMonitorStatisticsResponse
       */
      Models::DescribeSiteMonitorStatisticsResponse describeSiteMonitorStatistics(const Models::DescribeSiteMonitorStatisticsRequest &request);

      /**
       * @summary Queries a list of detection points.
       *
       * @description This topic provides an example of how to call the DescribeSyntheticProbeList operation to query detection point details for the China Unicom carrier in Beijing.
       *
       * @param request DescribeSyntheticProbeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyntheticProbeListResponse
       */
      Models::DescribeSyntheticProbeListResponse describeSyntheticProbeListWithOptions(const Models::DescribeSyntheticProbeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of detection points.
       *
       * @description This topic provides an example of how to call the DescribeSyntheticProbeList operation to query detection point details for the China Unicom carrier in Beijing.
       *
       * @param request DescribeSyntheticProbeListRequest
       * @return DescribeSyntheticProbeListResponse
       */
      Models::DescribeSyntheticProbeListResponse describeSyntheticProbeList(const Models::DescribeSyntheticProbeListRequest &request);

      /**
       * @summary Queries a system event.
       *
       * @param request DescribeSystemEventAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemEventAttributeResponse
       */
      Models::DescribeSystemEventAttributeResponse describeSystemEventAttributeWithOptions(const Models::DescribeSystemEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a system event.
       *
       * @param request DescribeSystemEventAttributeRequest
       * @return DescribeSystemEventAttributeResponse
       */
      Models::DescribeSystemEventAttributeResponse describeSystemEventAttribute(const Models::DescribeSystemEventAttributeRequest &request);

      /**
       * @summary Queries the number of events that occurred for each Alibaba Cloud service under the current account.
       *
       * @description ### Background information
       * You can call [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) to obtain the Alibaba Cloud services and their system events supported by CloudMonitor.
       * ### Operation description
       * This topic provides an example of how to query the number of events that occurred for Elastic Compute Service (`ECS`) under the current account. The response shows that a total of 3 events occurred.
       *
       * @param request DescribeSystemEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemEventCountResponse
       */
      Models::DescribeSystemEventCountResponse describeSystemEventCountWithOptions(const Models::DescribeSystemEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of events that occurred for each Alibaba Cloud service under the current account.
       *
       * @description ### Background information
       * You can call [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) to obtain the Alibaba Cloud services and their system events supported by CloudMonitor.
       * ### Operation description
       * This topic provides an example of how to query the number of events that occurred for Elastic Compute Service (`ECS`) under the current account. The response shows that a total of 3 events occurred.
       *
       * @param request DescribeSystemEventCountRequest
       * @return DescribeSystemEventCountResponse
       */
      Models::DescribeSystemEventCountResponse describeSystemEventCount(const Models::DescribeSystemEventCountRequest &request);

      /**
       * @summary Queries the number of times a system event occurred during each interval within a period of time.
       *
       * @param request DescribeSystemEventHistogramRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemEventHistogramResponse
       */
      Models::DescribeSystemEventHistogramResponse describeSystemEventHistogramWithOptions(const Models::DescribeSystemEventHistogramRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times a system event occurred during each interval within a period of time.
       *
       * @param request DescribeSystemEventHistogramRequest
       * @return DescribeSystemEventHistogramResponse
       */
      Models::DescribeSystemEventHistogramResponse describeSystemEventHistogram(const Models::DescribeSystemEventHistogramRequest &request);

      /**
       * @summary Queries the meta information of system events by calling the DescribeSystemEventMetaList operation.
       *
       * @param request DescribeSystemEventMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemEventMetaListResponse
       */
      Models::DescribeSystemEventMetaListResponse describeSystemEventMetaListWithOptions(const Models::DescribeSystemEventMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the meta information of system events by calling the DescribeSystemEventMetaList operation.
       *
       * @param request DescribeSystemEventMetaListRequest
       * @return DescribeSystemEventMetaListResponse
       */
      Models::DescribeSystemEventMetaListResponse describeSystemEventMetaList(const Models::DescribeSystemEventMetaListRequest &request);

      /**
       * @summary Queries a list of tag keys by calling the DescribeTagKeyList operation.
       *
       * @param request DescribeTagKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeyListResponse
       */
      Models::DescribeTagKeyListResponse describeTagKeyListWithOptions(const Models::DescribeTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tag keys by calling the DescribeTagKeyList operation.
       *
       * @param request DescribeTagKeyListRequest
       * @return DescribeTagKeyListResponse
       */
      Models::DescribeTagKeyListResponse describeTagKeyList(const Models::DescribeTagKeyListRequest &request);

      /**
       * @summary Queries the tag values for a specified tag key.
       *
       * @param request DescribeTagValueListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagValueListResponse
       */
      Models::DescribeTagValueListResponse describeTagValueListWithOptions(const Models::DescribeTagValueListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values for a specified tag key.
       *
       * @param request DescribeTagValueListRequest
       * @return DescribeTagValueListResponse
       */
      Models::DescribeTagValueListResponse describeTagValueList(const Models::DescribeTagValueListRequest &request);

      /**
       * @summary Call the DescribeUnhealthyHostAvailability operation to query a list of unhealthy servers.
       *
       * @param request DescribeUnhealthyHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnhealthyHostAvailabilityResponse
       */
      Models::DescribeUnhealthyHostAvailabilityResponse describeUnhealthyHostAvailabilityWithOptions(const Models::DescribeUnhealthyHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the DescribeUnhealthyHostAvailability operation to query a list of unhealthy servers.
       *
       * @param request DescribeUnhealthyHostAvailabilityRequest
       * @return DescribeUnhealthyHostAvailabilityResponse
       */
      Models::DescribeUnhealthyHostAvailabilityResponse describeUnhealthyHostAvailability(const Models::DescribeUnhealthyHostAvailabilityRequest &request);

      /**
       * @summary Disables the initiative alert feature for a cloud service.
       *
       * @param request DisableActiveMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableActiveMetricRuleResponse
       */
      Models::DisableActiveMetricRuleResponse disableActiveMetricRuleWithOptions(const Models::DisableActiveMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the initiative alert feature for a cloud service.
       *
       * @param request DisableActiveMetricRuleRequest
       * @return DisableActiveMetricRuleResponse
       */
      Models::DisableActiveMetricRuleResponse disableActiveMetricRule(const Models::DisableActiveMetricRuleRequest &request);

      /**
       * @summary Disables one or more event-triggered alert rules.
       *
       * @param request DisableEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableEventRulesResponse
       */
      Models::DisableEventRulesResponse disableEventRulesWithOptions(const Models::DisableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables one or more event-triggered alert rules.
       *
       * @param request DisableEventRulesRequest
       * @return DisableEventRulesResponse
       */
      Models::DisableEventRulesResponse disableEventRules(const Models::DisableEventRulesRequest &request);

      /**
       * @summary Disables one or more specified availability monitoring jobs.
       *
       * @param request DisableHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableHostAvailabilityResponse
       */
      Models::DisableHostAvailabilityResponse disableHostAvailabilityWithOptions(const Models::DisableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables one or more specified availability monitoring jobs.
       *
       * @param request DisableHostAvailabilityRequest
       * @return DisableHostAvailabilityResponse
       */
      Models::DisableHostAvailabilityResponse disableHostAvailability(const Models::DisableHostAvailabilityRequest &request);

      /**
       * @summary You can call the DisableMetricRules operation to disable alert rules.
       *
       * @param request DisableMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableMetricRulesResponse
       */
      Models::DisableMetricRulesResponse disableMetricRulesWithOptions(const Models::DisableMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DisableMetricRules operation to disable alert rules.
       *
       * @param request DisableMetricRulesRequest
       * @return DisableMetricRulesResponse
       */
      Models::DisableMetricRulesResponse disableMetricRules(const Models::DisableMetricRulesRequest &request);

      /**
       * @summary Disables one or more site monitoring tasks by calling the DisableSiteMonitors operation.
       *
       * @param request DisableSiteMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSiteMonitorsResponse
       */
      Models::DisableSiteMonitorsResponse disableSiteMonitorsWithOptions(const Models::DisableSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables one or more site monitoring tasks by calling the DisableSiteMonitors operation.
       *
       * @param request DisableSiteMonitorsRequest
       * @return DisableSiteMonitorsResponse
       */
      Models::DisableSiteMonitorsResponse disableSiteMonitors(const Models::DisableSiteMonitorsRequest &request);

      /**
       * @summary Enables the initiative alert feature for a cloud service.
       *
       * @param request EnableActiveMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableActiveMetricRuleResponse
       */
      Models::EnableActiveMetricRuleResponse enableActiveMetricRuleWithOptions(const Models::EnableActiveMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the initiative alert feature for a cloud service.
       *
       * @param request EnableActiveMetricRuleRequest
       * @return EnableActiveMetricRuleResponse
       */
      Models::EnableActiveMetricRuleResponse enableActiveMetricRule(const Models::EnableActiveMetricRuleRequest &request);

      /**
       * @summary The EnableEventRules operation enables one or more event rules.
       *
       * @param request EnableEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableEventRulesResponse
       */
      Models::EnableEventRulesResponse enableEventRulesWithOptions(const Models::EnableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The EnableEventRules operation enables one or more event rules.
       *
       * @param request EnableEventRulesRequest
       * @return EnableEventRulesResponse
       */
      Models::EnableEventRulesResponse enableEventRules(const Models::EnableEventRulesRequest &request);

      /**
       * @summary Enables a specified availability monitoring task.
       *
       * @param request EnableHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHostAvailabilityResponse
       */
      Models::EnableHostAvailabilityResponse enableHostAvailabilityWithOptions(const Models::EnableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a specified availability monitoring task.
       *
       * @param request EnableHostAvailabilityRequest
       * @return EnableHostAvailabilityResponse
       */
      Models::EnableHostAvailabilityResponse enableHostAvailability(const Models::EnableHostAvailabilityRequest &request);

      /**
       * @summary Enables or disables multiple blacklist policies at a time.
       *
       * @param request EnableMetricRuleBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableMetricRuleBlackListResponse
       */
      Models::EnableMetricRuleBlackListResponse enableMetricRuleBlackListWithOptions(const Models::EnableMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables multiple blacklist policies at a time.
       *
       * @param request EnableMetricRuleBlackListRequest
       * @return EnableMetricRuleBlackListResponse
       */
      Models::EnableMetricRuleBlackListResponse enableMetricRuleBlackList(const Models::EnableMetricRuleBlackListRequest &request);

      /**
       * @summary Enables alert rules.
       *
       * @param request EnableMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableMetricRulesResponse
       */
      Models::EnableMetricRulesResponse enableMetricRulesWithOptions(const Models::EnableMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables alert rules.
       *
       * @param request EnableMetricRulesRequest
       * @return EnableMetricRulesResponse
       */
      Models::EnableMetricRulesResponse enableMetricRules(const Models::EnableMetricRulesRequest &request);

      /**
       * @summary Enables site monitoring tasks.
       *
       * @param request EnableSiteMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableSiteMonitorsResponse
       */
      Models::EnableSiteMonitorsResponse enableSiteMonitorsWithOptions(const Models::EnableSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables site monitoring tasks.
       *
       * @param request EnableSiteMonitorsRequest
       * @return EnableSiteMonitorsResponse
       */
      Models::EnableSiteMonitorsResponse enableSiteMonitors(const Models::EnableSiteMonitorsRequest &request);

      /**
       * @summary Call the InstallMonitoringAgent operation to install the CloudMonitor agent on specified Alibaba Cloud hosts.
       *
       * @description ## Prerequisites
       * Ensure that Cloud Assistant is installed on the Alibaba Cloud host. For more information, see [Cloud Assistant overview](https://help.aliyun.com/document_detail/64601.html).
       * ## Background information
       * This API applies only to Alibaba Cloud hosts, which are Elastic Compute Service (ECS) instances. The success rate for installing the CloudMonitor agent using this API is approximately 95%. If the installation fails, you must manually install the agent. For more information about how to install the CloudMonitor agent, see [Install and uninstall the C++ agent](https://help.aliyun.com/document_detail/183482.html).
       * ## Example
       * This example shows how to forcibly install the latest version of the CloudMonitor agent on the ECS instance `i-m5e0k0bexac8tykr****`.
       *
       * @param request InstallMonitoringAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallMonitoringAgentResponse
       */
      Models::InstallMonitoringAgentResponse installMonitoringAgentWithOptions(const Models::InstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Call the InstallMonitoringAgent operation to install the CloudMonitor agent on specified Alibaba Cloud hosts.
       *
       * @description ## Prerequisites
       * Ensure that Cloud Assistant is installed on the Alibaba Cloud host. For more information, see [Cloud Assistant overview](https://help.aliyun.com/document_detail/64601.html).
       * ## Background information
       * This API applies only to Alibaba Cloud hosts, which are Elastic Compute Service (ECS) instances. The success rate for installing the CloudMonitor agent using this API is approximately 95%. If the installation fails, you must manually install the agent. For more information about how to install the CloudMonitor agent, see [Install and uninstall the C++ agent](https://help.aliyun.com/document_detail/183482.html).
       * ## Example
       * This example shows how to forcibly install the latest version of the CloudMonitor agent on the ECS instance `i-m5e0k0bexac8tykr****`.
       *
       * @param request InstallMonitoringAgentRequest
       * @return InstallMonitoringAgentResponse
       */
      Models::InstallMonitoringAgentResponse installMonitoringAgent(const Models::InstallMonitoringAgentRequest &request);

      /**
       * @summary You can call the ModifyGroupMonitoringAgentProcess operation to modify the process monitoring settings for an application group.
       *
       * @param request ModifyGroupMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupMonitoringAgentProcessResponse
       */
      Models::ModifyGroupMonitoringAgentProcessResponse modifyGroupMonitoringAgentProcessWithOptions(const Models::ModifyGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyGroupMonitoringAgentProcess operation to modify the process monitoring settings for an application group.
       *
       * @param request ModifyGroupMonitoringAgentProcessRequest
       * @return ModifyGroupMonitoringAgentProcessResponse
       */
      Models::ModifyGroupMonitoringAgentProcessResponse modifyGroupMonitoringAgentProcess(const Models::ModifyGroupMonitoringAgentProcessRequest &request);

      /**
       * @summary Modifies an availability monitoring task.
       *
       * @description This topic provides an example on how to change the name of an availability monitoring task named `12345` in an application group named `123456` to `task2`.
       *
       * @param request ModifyHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostAvailabilityResponse
       */
      Models::ModifyHostAvailabilityResponse modifyHostAvailabilityWithOptions(const Models::ModifyHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an availability monitoring task.
       *
       * @description This topic provides an example on how to change the name of an availability monitoring task named `12345` in an application group named `123456` to `task2`.
       *
       * @param request ModifyHostAvailabilityRequest
       * @return ModifyHostAvailabilityResponse
       */
      Models::ModifyHostAvailabilityResponse modifyHostAvailability(const Models::ModifyHostAvailabilityRequest &request);

      /**
       * @summary Calls the ModifyHostInfo operation to modify the display information of a non-Alibaba Cloud host.
       *
       * @description ****
       *
       * @param request ModifyHostInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostInfoResponse
       */
      Models::ModifyHostInfoResponse modifyHostInfoWithOptions(const Models::ModifyHostInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyHostInfo operation to modify the display information of a non-Alibaba Cloud host.
       *
       * @description ****
       *
       * @param request ModifyHostInfoRequest
       * @return ModifyHostInfoResponse
       */
      Models::ModifyHostInfoResponse modifyHostInfo(const Models::ModifyHostInfoRequest &request);

      /**
       * @summary Calls the ModifyHybridMonitorNamespace operation to modify a metric store.
       *
       * @description This topic provides an example on how to change the data storage duration of the metric store `aliyun` to `cms.s1.2xlarge`. The response shows that the metric store is modified.
       *
       * @param request ModifyHybridMonitorNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridMonitorNamespaceResponse
       */
      Models::ModifyHybridMonitorNamespaceResponse modifyHybridMonitorNamespaceWithOptions(const Models::ModifyHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the ModifyHybridMonitorNamespace operation to modify a metric store.
       *
       * @description This topic provides an example on how to change the data storage duration of the metric store `aliyun` to `cms.s1.2xlarge`. The response shows that the metric store is modified.
       *
       * @param request ModifyHybridMonitorNamespaceRequest
       * @return ModifyHybridMonitorNamespaceResponse
       */
      Models::ModifyHybridMonitorNamespaceResponse modifyHybridMonitorNamespace(const Models::ModifyHybridMonitorNamespaceRequest &request);

      /**
       * @summary Modifies a Logstore group by calling the ModifyHybridMonitorSLSGroup operation.
       *
       * @description This topic provides an example on how to change the Logstore in the `aliyun-project` log project in the `ap-southeast-1` region of the Logstore group `Logstore_test` to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
       *
       * @param request ModifyHybridMonitorSLSGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridMonitorSLSGroupResponse
       */
      Models::ModifyHybridMonitorSLSGroupResponse modifyHybridMonitorSLSGroupWithOptions(const Models::ModifyHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Logstore group by calling the ModifyHybridMonitorSLSGroup operation.
       *
       * @description This topic provides an example on how to change the Logstore in the `aliyun-project` log project in the `ap-southeast-1` region of the Logstore group `Logstore_test` to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
       *
       * @param request ModifyHybridMonitorSLSGroupRequest
       * @return ModifyHybridMonitorSLSGroupResponse
       */
      Models::ModifyHybridMonitorSLSGroupResponse modifyHybridMonitorSLSGroup(const Models::ModifyHybridMonitorSLSGroupRequest &request);

      /**
       * @summary Modifies the metrics of a Simple Log Service (SLS) log monitoring task by calling the ModifyHybridMonitorTask operation.
       *
       * @description This topic provides an example on how to change the collection interval of the SLS log monitoring task `36****` to `15` seconds. The response shows that the metric is modified.
       *
       * @param request ModifyHybridMonitorTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridMonitorTaskResponse
       */
      Models::ModifyHybridMonitorTaskResponse modifyHybridMonitorTaskWithOptions(const Models::ModifyHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the metrics of a Simple Log Service (SLS) log monitoring task by calling the ModifyHybridMonitorTask operation.
       *
       * @description This topic provides an example on how to change the collection interval of the SLS log monitoring task `36****` to `15` seconds. The response shows that the metric is modified.
       *
       * @param request ModifyHybridMonitorTaskRequest
       * @return ModifyHybridMonitorTaskResponse
       */
      Models::ModifyHybridMonitorTaskResponse modifyHybridMonitorTask(const Models::ModifyHybridMonitorTaskRequest &request);

      /**
       * @summary Modifies a blacklist policy.
       *
       * @param request ModifyMetricRuleBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMetricRuleBlackListResponse
       */
      Models::ModifyMetricRuleBlackListResponse modifyMetricRuleBlackListWithOptions(const Models::ModifyMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a blacklist policy.
       *
       * @param request ModifyMetricRuleBlackListRequest
       * @return ModifyMetricRuleBlackListResponse
       */
      Models::ModifyMetricRuleBlackListResponse modifyMetricRuleBlackList(const Models::ModifyMetricRuleBlackListRequest &request);

      /**
       * @summary Modifies an alert template.
       *
       * @description This topic provides an example on how to modify an alert template whose version is `1` and ID is `123456`. The alert level is changed to `Critical`. The statistical method is changed to `Average`. The alert threshold comparator is changed to `GreaterThanOrEqualToThreshold`. The alert threshold is changed to `90`. The number of alert retries is changed to `3`. The response shows that the alert template is modified.
       *
       * @param request ModifyMetricRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMetricRuleTemplateResponse
       */
      Models::ModifyMetricRuleTemplateResponse modifyMetricRuleTemplateWithOptions(const Models::ModifyMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an alert template.
       *
       * @description This topic provides an example on how to modify an alert template whose version is `1` and ID is `123456`. The alert level is changed to `Critical`. The statistical method is changed to `Average`. The alert threshold comparator is changed to `GreaterThanOrEqualToThreshold`. The alert threshold is changed to `90`. The number of alert retries is changed to `3`. The response shows that the alert template is modified.
       *
       * @param request ModifyMetricRuleTemplateRequest
       * @return ModifyMetricRuleTemplateResponse
       */
      Models::ModifyMetricRuleTemplateResponse modifyMetricRuleTemplate(const Models::ModifyMetricRuleTemplateRequest &request);

      /**
       * @summary You can call the ModifyMonitorGroup operation to modify an application group.
       *
       * @param request ModifyMonitorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMonitorGroupResponse
       */
      Models::ModifyMonitorGroupResponse modifyMonitorGroupWithOptions(const Models::ModifyMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the ModifyMonitorGroup operation to modify an application group.
       *
       * @param request ModifyMonitorGroupRequest
       * @return ModifyMonitorGroupResponse
       */
      Models::ModifyMonitorGroupResponse modifyMonitorGroup(const Models::ModifyMonitorGroupRequest &request);

      /**
       * @summary The ModifyMonitorGroupInstances operation modifies the resources in an application group.
       *
       * @param request ModifyMonitorGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMonitorGroupInstancesResponse
       */
      Models::ModifyMonitorGroupInstancesResponse modifyMonitorGroupInstancesWithOptions(const Models::ModifyMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ModifyMonitorGroupInstances operation modifies the resources in an application group.
       *
       * @param request ModifyMonitorGroupInstancesRequest
       * @return ModifyMonitorGroupInstancesResponse
       */
      Models::ModifyMonitorGroupInstancesResponse modifyMonitorGroupInstances(const Models::ModifyMonitorGroupInstancesRequest &request);

      /**
       * @summary Modifies a site monitoring task by calling the ModifySiteMonitor operation.
       *
       * @param request ModifySiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySiteMonitorResponse
       */
      Models::ModifySiteMonitorResponse modifySiteMonitorWithOptions(const Models::ModifySiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a site monitoring task by calling the ModifySiteMonitor operation.
       *
       * @param request ModifySiteMonitorRequest
       * @return ModifySiteMonitorResponse
       */
      Models::ModifySiteMonitorResponse modifySiteMonitor(const Models::ModifySiteMonitorRequest &request);

      /**
       * @summary Creates or modifies an alert contact by calling the PutContact operation.
       *
       * @param request PutContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutContactResponse
       */
      Models::PutContactResponse putContactWithOptions(const Models::PutContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert contact by calling the PutContact operation.
       *
       * @param request PutContactRequest
       * @return PutContactResponse
       */
      Models::PutContactResponse putContact(const Models::PutContactRequest &request);

      /**
       * @summary Creates or modifies an alert contact group by calling the PutContactGroup operation.
       *
       * @param request PutContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutContactGroupResponse
       */
      Models::PutContactGroupResponse putContactGroupWithOptions(const Models::PutContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert contact group by calling the PutContactGroup operation.
       *
       * @param request PutContactGroupRequest
       * @return PutContactGroupResponse
       */
      Models::PutContactGroupResponse putContactGroup(const Models::PutContactGroupRequest &request);

      /**
       * @summary Reports custom events.
       *
       * @param request PutCustomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCustomEventResponse
       */
      Models::PutCustomEventResponse putCustomEventWithOptions(const Models::PutCustomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports custom events.
       *
       * @param request PutCustomEventRequest
       * @return PutCustomEventResponse
       */
      Models::PutCustomEventResponse putCustomEvent(const Models::PutCustomEventRequest &request);

      /**
       * @summary Calls the PutCustomEventRule operation to create an alert rule for a custom event.
       *
       * @description Before you call this operation, you must call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
       *
       * @param request PutCustomEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCustomEventRuleResponse
       */
      Models::PutCustomEventRuleResponse putCustomEventRuleWithOptions(const Models::PutCustomEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the PutCustomEventRule operation to create an alert rule for a custom event.
       *
       * @description Before you call this operation, you must call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
       *
       * @param request PutCustomEventRuleRequest
       * @return PutCustomEventRuleResponse
       */
      Models::PutCustomEventRuleResponse putCustomEventRule(const Models::PutCustomEventRuleRequest &request);

      /**
       * @summary Calls the PutCustomMetric operation to report custom monitoring data.
       *
       * @description > We recommend that you use the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation in Enterprise CloudMonitor.
       *
       * @param request PutCustomMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCustomMetricResponse
       */
      Models::PutCustomMetricResponse putCustomMetricWithOptions(const Models::PutCustomMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls the PutCustomMetric operation to report custom monitoring data.
       *
       * @description > We recommend that you use the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation in Enterprise CloudMonitor.
       *
       * @param request PutCustomMetricRequest
       * @return PutCustomMetricResponse
       */
      Models::PutCustomMetricResponse putCustomMetric(const Models::PutCustomMetricRequest &request);

      /**
       * @summary Creates a custom monitoring alert rule by calling the PutCustomMetricRule operation.
       *
       * @description 调用本接口前，请先调用PutCustomMetric接口上报自定义监控数据，详情请参见 [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html)。
       *
       * @param request PutCustomMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCustomMetricRuleResponse
       */
      Models::PutCustomMetricRuleResponse putCustomMetricRuleWithOptions(const Models::PutCustomMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom monitoring alert rule by calling the PutCustomMetricRule operation.
       *
       * @description 调用本接口前，请先调用PutCustomMetric接口上报自定义监控数据，详情请参见 [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html)。
       *
       * @param request PutCustomMetricRuleRequest
       * @return PutCustomMetricRuleResponse
       */
      Models::PutCustomMetricRuleResponse putCustomMetricRule(const Models::PutCustomMetricRuleRequest &request);

      /**
       * @summary Creates or modifies an event-based alert rule by calling the PutEventRule operation.
       *
       * @description If the Event-triggered Alert Rule name does not exist, a new alert rule is created. If the Event-triggered Alert Rule name already exists, the existing alert rule is modified.
       * This topic provides an example of how to create an event-based alert rule named `myRuleName` for the Alibaba Cloud service `ecs`.
       *
       * @param request PutEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutEventRuleResponse
       */
      Models::PutEventRuleResponse putEventRuleWithOptions(const Models::PutEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an event-based alert rule by calling the PutEventRule operation.
       *
       * @description If the Event-triggered Alert Rule name does not exist, a new alert rule is created. If the Event-triggered Alert Rule name already exists, the existing alert rule is modified.
       * This topic provides an example of how to create an event-based alert rule named `myRuleName` for the Alibaba Cloud service `ecs`.
       *
       * @param request PutEventRuleRequest
       * @return PutEventRuleResponse
       */
      Models::PutEventRuleResponse putEventRule(const Models::PutEventRuleRequest &request);

      /**
       * @summary Adds or modifies the notification channels of an event-triggered alert rule by calling the PutEventRuleTargets operation.
       *
       * @param request PutEventRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutEventRuleTargetsResponse
       */
      Models::PutEventRuleTargetsResponse putEventRuleTargetsWithOptions(const Models::PutEventRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies the notification channels of an event-triggered alert rule by calling the PutEventRuleTargets operation.
       *
       * @param request PutEventRuleTargetsRequest
       * @return PutEventRuleTargetsResponse
       */
      Models::PutEventRuleTargetsResponse putEventRuleTargets(const Models::PutEventRuleTargetsRequest &request);

      /**
       * @summary Creates or modifies a monitoring data export configuration by calling the PutExporterOutput operation.
       *
       * @description > Only Log Service (SLS) is supported. More products will be supported in the future.
       *
       * @param request PutExporterOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutExporterOutputResponse
       */
      Models::PutExporterOutputResponse putExporterOutputWithOptions(const Models::PutExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a monitoring data export configuration by calling the PutExporterOutput operation.
       *
       * @description > Only Log Service (SLS) is supported. More products will be supported in the future.
       *
       * @param request PutExporterOutputRequest
       * @return PutExporterOutputResponse
       */
      Models::PutExporterOutputResponse putExporterOutput(const Models::PutExporterOutputRequest &request);

      /**
       * @summary Invokes the PutExporterRule operation to create or modify export rules.
       *
       * @param request PutExporterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutExporterRuleResponse
       */
      Models::PutExporterRuleResponse putExporterRuleWithOptions(const Models::PutExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes the PutExporterRule operation to create or modify export rules.
       *
       * @param request PutExporterRuleRequest
       * @return PutExporterRuleResponse
       */
      Models::PutExporterRuleResponse putExporterRule(const Models::PutExporterRuleRequest &request);

      /**
       * @summary Creates or modifies an alert rule in a specified application group.
       *
       * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `17285****`. The alert rule ID is `123456`, the alert rule name is `Rule_test`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule is created. The alert rule ID is `123456`.
       *
       * @param request PutGroupMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutGroupMetricRuleResponse
       */
      Models::PutGroupMetricRuleResponse putGroupMetricRuleWithOptions(const Models::PutGroupMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert rule in a specified application group.
       *
       * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the application group `17285****`. The alert rule ID is `123456`, the alert rule name is `Rule_test`, the alert severity is `Critical`, the statistical method is `Average`, the comparison operator is `GreaterThanOrEqualToThreshold`, the threshold is `90`, and the retry count is `3`. The response shows that the alert rule is created. The alert rule ID is `123456`.
       *
       * @param request PutGroupMetricRuleRequest
       * @return PutGroupMetricRuleResponse
       */
      Models::PutGroupMetricRuleResponse putGroupMetricRule(const Models::PutGroupMetricRuleRequest &request);

      /**
       * @summary Reports the specified monitoring data to a specified metric namespace of Enterprise CloudMonitor by calling the PutHybridMonitorMetricData operation.
       *
       * @description ## Prerequisites
       * Make sure that you have activated Enterprise CloudMonitor. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
       * ## Limits
       * The size of the monitoring data that you can report at a time cannot exceed 1 MB.
       * ## Usage notes
       * This topic provides an example to show how to report the monitoring data of the `CPU_Usage` metric to the `default-aliyun` metric namespace of Enterprise CloudMonitor.
       *
       * @param request PutHybridMonitorMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutHybridMonitorMetricDataResponse
       */
      Models::PutHybridMonitorMetricDataResponse putHybridMonitorMetricDataWithOptions(const Models::PutHybridMonitorMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports the specified monitoring data to a specified metric namespace of Enterprise CloudMonitor by calling the PutHybridMonitorMetricData operation.
       *
       * @description ## Prerequisites
       * Make sure that you have activated Enterprise CloudMonitor. For more information, see [Activate Enterprise CloudMonitor](https://help.aliyun.com/document_detail/250773.html).
       * ## Limits
       * The size of the monitoring data that you can report at a time cannot exceed 1 MB.
       * ## Usage notes
       * This topic provides an example to show how to report the monitoring data of the `CPU_Usage` metric to the `default-aliyun` metric namespace of Enterprise CloudMonitor.
       *
       * @param request PutHybridMonitorMetricDataRequest
       * @return PutHybridMonitorMetricDataResponse
       */
      Models::PutHybridMonitorMetricDataResponse putHybridMonitorMetricData(const Models::PutHybridMonitorMetricDataRequest &request);

      /**
       * @summary Creates or modifies a log monitoring metric by calling the PutLogMonitor operation.
       *
       * @description This topic provides an example of how to create a log monitoring metric named `cpu_total`. The response shows that the log monitoring metric is created. The log monitoring metric ID is `16****`.
       *
       * @param request PutLogMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutLogMonitorResponse
       */
      Models::PutLogMonitorResponse putLogMonitorWithOptions(const Models::PutLogMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a log monitoring metric by calling the PutLogMonitor operation.
       *
       * @description This topic provides an example of how to create a log monitoring metric named `cpu_total`. The response shows that the log monitoring metric is created. The log monitoring metric ID is `16****`.
       *
       * @param request PutLogMonitorRequest
       * @return PutLogMonitorResponse
       */
      Models::PutLogMonitorResponse putLogMonitor(const Models::PutLogMonitorRequest &request);

      /**
       * @summary Adds or modifies push channels for a specified alert rule by calling the PutMetricRuleTargets operation.
       *
       * @description ## Usage notes
       * This topic provides an example on how to associate the resource `acs:mns:ap-southeast-1:120886317861****:/queues/test/message` with the alert rule `ae06917_75a8c43178ab66****`. The alert trigger target ID is `1`. The response shows that the resource is associated.
       *
       * @param request PutMetricRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutMetricRuleTargetsResponse
       */
      Models::PutMetricRuleTargetsResponse putMetricRuleTargetsWithOptions(const Models::PutMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies push channels for a specified alert rule by calling the PutMetricRuleTargets operation.
       *
       * @description ## Usage notes
       * This topic provides an example on how to associate the resource `acs:mns:ap-southeast-1:120886317861****:/queues/test/message` with the alert rule `ae06917_75a8c43178ab66****`. The alert trigger target ID is `1`. The response shows that the resource is associated.
       *
       * @param request PutMetricRuleTargetsRequest
       * @return PutMetricRuleTargetsResponse
       */
      Models::PutMetricRuleTargetsResponse putMetricRuleTargets(const Models::PutMetricRuleTargetsRequest &request);

      /**
       * @summary Creates or modifies an alert rule to dynamically add instances that meet the rule to an application group.
       *
       * @param request PutMonitorGroupDynamicRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutMonitorGroupDynamicRuleResponse
       */
      Models::PutMonitorGroupDynamicRuleResponse putMonitorGroupDynamicRuleWithOptions(const Models::PutMonitorGroupDynamicRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert rule to dynamically add instances that meet the rule to an application group.
       *
       * @param request PutMonitorGroupDynamicRuleRequest
       * @return PutMonitorGroupDynamicRuleResponse
       */
      Models::PutMonitorGroupDynamicRuleResponse putMonitorGroupDynamicRule(const Models::PutMonitorGroupDynamicRuleRequest &request);

      /**
       * @summary Configures global settings for the CloudMonitor agent.
       *
       * @param request PutMonitoringConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutMonitoringConfigResponse
       */
      Models::PutMonitoringConfigResponse putMonitoringConfigWithOptions(const Models::PutMonitoringConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures global settings for the CloudMonitor agent.
       *
       * @param request PutMonitoringConfigRequest
       * @return PutMonitoringConfigResponse
       */
      Models::PutMonitoringConfigResponse putMonitoringConfig(const Models::PutMonitoringConfigRequest &request);

      /**
       * @summary Configures a threshold alert rule.
       *
       * @description This topic provides an example on how to configure a threshold alert rule for the `cpu_total` metric of the Elastic Computing Service (ECS) instance `i-uf6j91r34rnwawoo****` in the `acs_ecs_dashboard` namespace. The alert contact group is `ECS_Group`, the alert rule name is `test123`, the alert rule ID is `a151cd6023eacee2f0978e03863cc1697c89508****`, the statistical method for the Critical level is `Average`, the comparison operator for the Critical level is `GreaterThanOrEqualToThreshold`, the threshold for the Critical level is `90`, and the retry count for the Critical level is `3`.
       * > As of August 15, 2024, Statistics validation is increased. The statistical value must match the Statistics of the corresponding metric. For information about how to obtain the value of this parameter, see [Alibaba Cloud service monitoring metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
       *
       * @param tmpReq PutResourceMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutResourceMetricRuleResponse
       */
      Models::PutResourceMetricRuleResponse putResourceMetricRuleWithOptions(const Models::PutResourceMetricRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a threshold alert rule.
       *
       * @description This topic provides an example on how to configure a threshold alert rule for the `cpu_total` metric of the Elastic Computing Service (ECS) instance `i-uf6j91r34rnwawoo****` in the `acs_ecs_dashboard` namespace. The alert contact group is `ECS_Group`, the alert rule name is `test123`, the alert rule ID is `a151cd6023eacee2f0978e03863cc1697c89508****`, the statistical method for the Critical level is `Average`, the comparison operator for the Critical level is `GreaterThanOrEqualToThreshold`, the threshold for the Critical level is `90`, and the retry count for the Critical level is `3`.
       * > As of August 15, 2024, Statistics validation is increased. The statistical value must match the Statistics of the corresponding metric. For information about how to obtain the value of this parameter, see [Alibaba Cloud service monitoring metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
       *
       * @param request PutResourceMetricRuleRequest
       * @return PutResourceMetricRuleResponse
       */
      Models::PutResourceMetricRuleResponse putResourceMetricRule(const Models::PutResourceMetricRuleRequest &request);

      /**
       * @summary Creates multiple threshold alert rules for a specified metric of a specified resource by calling the PutResourceMetricRules operation.
       *
       * @description 本文将提供一个示例，为云服务器ECS `acs_ecs_dashboard`的实例`i-uf6j91r34rnwawoo****`中的监控项`cpu_total`设置阈值报警规则。该报警规则的报警联系组为`ECS_Group`、报警规则名称为`test123`、报警规则ID为`a151cd6023eacee2f0978e03863cc1697c89508****`、Critical级别的统计方法为`Average`、Critical级别的比较符为`GreaterThanOrEqualToThreshold`、Critical级别的阈值为`90`和Critical级别的报警重试次数为`3`。
       * > 2024-08-15 增加Statistics校验，统计值只能填对应指标的Statistics。关于如何获取该参数的取值，请参见[云产品监控项](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics)。
       *
       * @param request PutResourceMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutResourceMetricRulesResponse
       */
      Models::PutResourceMetricRulesResponse putResourceMetricRulesWithOptions(const Models::PutResourceMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple threshold alert rules for a specified metric of a specified resource by calling the PutResourceMetricRules operation.
       *
       * @description 本文将提供一个示例，为云服务器ECS `acs_ecs_dashboard`的实例`i-uf6j91r34rnwawoo****`中的监控项`cpu_total`设置阈值报警规则。该报警规则的报警联系组为`ECS_Group`、报警规则名称为`test123`、报警规则ID为`a151cd6023eacee2f0978e03863cc1697c89508****`、Critical级别的统计方法为`Average`、Critical级别的比较符为`GreaterThanOrEqualToThreshold`、Critical级别的阈值为`90`和Critical级别的报警重试次数为`3`。
       * > 2024-08-15 增加Statistics校验，统计值只能填对应指标的Statistics。关于如何获取该参数的取值，请参见[云产品监控项](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics)。
       *
       * @param request PutResourceMetricRulesRequest
       * @return PutResourceMetricRulesResponse
       */
      Models::PutResourceMetricRulesResponse putResourceMetricRules(const Models::PutResourceMetricRulesRequest &request);

      /**
       * @summary The RemoveTags operation removes one or more tags.
       *
       * @param request RemoveTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTagsWithOptions(const Models::RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The RemoveTags operation removes one or more tags.
       *
       * @param request RemoveTagsRequest
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTags(const Models::RemoveTagsRequest &request);

      /**
       * @summary Debugs a system event of an Alibaba Cloud service.
       *
       * @description Tests whether a system event can be triggered as expected. Simulates a system event and verifies the response when the event triggers an alert.
       *
       * @param request SendDryRunSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendDryRunSystemEventResponse
       */
      Models::SendDryRunSystemEventResponse sendDryRunSystemEventWithOptions(const Models::SendDryRunSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Debugs a system event of an Alibaba Cloud service.
       *
       * @description Tests whether a system event can be triggered as expected. Simulates a system event and verifies the response when the event triggers an alert.
       *
       * @param request SendDryRunSystemEventRequest
       * @return SendDryRunSystemEventResponse
       */
      Models::SendDryRunSystemEventResponse sendDryRunSystemEvent(const Models::SendDryRunSystemEventRequest &request);

      /**
       * @summary Uninstalls the CloudMonitor agent from a third-party host.
       *
       * @description > This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request UninstallMonitoringAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallMonitoringAgentResponse
       */
      Models::UninstallMonitoringAgentResponse uninstallMonitoringAgentWithOptions(const Models::UninstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls the CloudMonitor agent from a third-party host.
       *
       * @description > This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request UninstallMonitoringAgentRequest
       * @return UninstallMonitoringAgentResponse
       */
      Models::UninstallMonitoringAgentResponse uninstallMonitoringAgent(const Models::UninstallMonitoringAgentRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
