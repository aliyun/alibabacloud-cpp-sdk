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
       * @summary Adds tags to an application group.
       *
       * @description This topic provides an example on how to add a tag to an application group whose ID is `7301****`. In this example, the key of the tag is `key1` and the value of the tag is `value1`.
       *
       * @param request AddTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddTagsResponse
       */
      Models::AddTagsResponse addTagsWithOptions(const Models::AddTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to an application group.
       *
       * @description This topic provides an example on how to add a tag to an application group whose ID is `7301****`. In this example, the key of the tag is `key1` and the value of the tag is `value1`.
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
       * @summary Creates site monitoring tasks.
       *
       * @description This topic provides an example on how to create a site monitoring task named `HangZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTP`. The returned result shows that the site monitoring task is created. The name of the site monitoring task is `HangZhou_ECS1` and the task ID is `679fbe4f-b80b-4706-91b2-5427b43e****`.
       *
       * @param request BatchCreateInstantSiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateInstantSiteMonitorResponse
       */
      Models::BatchCreateInstantSiteMonitorResponse batchCreateInstantSiteMonitorWithOptions(const Models::BatchCreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates site monitoring tasks.
       *
       * @description This topic provides an example on how to create a site monitoring task named `HangZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTP`. The returned result shows that the site monitoring task is created. The name of the site monitoring task is `HangZhou_ECS1` and the task ID is `679fbe4f-b80b-4706-91b2-5427b43e****`.
       *
       * @param request BatchCreateInstantSiteMonitorRequest
       * @return BatchCreateInstantSiteMonitorResponse
       */
      Models::BatchCreateInstantSiteMonitorResponse batchCreateInstantSiteMonitor(const Models::BatchCreateInstantSiteMonitorRequest &request);

      /**
       * @summary Exports the monitoring data that is defined in the Cursor operation.
       *
       * @description ### [](#)Prerequisites
       * The `Cursor` information is returned by calling the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation.
       * ### [](#)Description
       * This topic provides an example on how to export the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The `Cursor` information is specified. A maximum of 1,000 data entries can be returned in each response.
       *
       * @param tmpReq BatchExportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchExportResponse
       */
      Models::BatchExportResponse batchExportWithOptions(const Models::BatchExportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Exports the monitoring data that is defined in the Cursor operation.
       *
       * @description ### [](#)Prerequisites
       * The `Cursor` information is returned by calling the [Cursor](https://help.aliyun.com/document_detail/2330730.html) operation.
       * ### [](#)Description
       * This topic provides an example on how to export the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The `Cursor` information is specified. A maximum of 1,000 data entries can be returned in each response.
       *
       * @param request BatchExportRequest
       * @return BatchExportResponse
       */
      Models::BatchExportResponse batchExport(const Models::BatchExportRequest &request);

      /**
       * @summary Creates an application group based on the tags of cloud resources.
       *
       * @description This operation is available for Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
       * This topic provides an example to show how to create an application group for resources whose tag key is `ecs_instance`. In this example, the alert contact group of the application group is `ECS_Group`.
       *
       * @param request CreateDynamicTagGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDynamicTagGroupResponse
       */
      Models::CreateDynamicTagGroupResponse createDynamicTagGroupWithOptions(const Models::CreateDynamicTagGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application group based on the tags of cloud resources.
       *
       * @description This operation is available for Elastic Compute Service (ECS), ApsaraDB RDS, and Server Load Balancer (SLB).
       * This topic provides an example to show how to create an application group for resources whose tag key is `ecs_instance`. In this example, the alert contact group of the application group is `ECS_Group`.
       *
       * @param request CreateDynamicTagGroupRequest
       * @return CreateDynamicTagGroupResponse
       */
      Models::CreateDynamicTagGroupResponse createDynamicTagGroup(const Models::CreateDynamicTagGroupRequest &request);

      /**
       * @summary Creates one or more alert rules for a specified application group.
       *
       * @description This topic provides an example to show how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `123456` application group. The ID of the alert rule is `456789`. The name of the alert rule is `ECS_Rule1`. The alert level is `Critical`. The statistical method is `Average`. The comparison operator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The response shows that the alert rule named `ECS_Rule1` is created.
       *
       * @param request CreateGroupMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupMetricRulesResponse
       */
      Models::CreateGroupMetricRulesResponse createGroupMetricRulesWithOptions(const Models::CreateGroupMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates one or more alert rules for a specified application group.
       *
       * @description This topic provides an example to show how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `123456` application group. The ID of the alert rule is `456789`. The name of the alert rule is `ECS_Rule1`. The alert level is `Critical`. The statistical method is `Average`. The comparison operator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The response shows that the alert rule named `ECS_Rule1` is created.
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
       * @summary Creates an availability monitoring task.
       *
       * @description This topic provides an example on how to create an availability monitoring task named `task1` in an application group named `123456`. The TaskType parameter of the task is set to `HTTP`. After you start the task, the system sends alerts by using the specified email address and DingTalk chatbot.
       *
       * @param request CreateHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHostAvailabilityResponse
       */
      Models::CreateHostAvailabilityResponse createHostAvailabilityWithOptions(const Models::CreateHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an availability monitoring task.
       *
       * @description This topic provides an example on how to create an availability monitoring task named `task1` in an application group named `123456`. The TaskType parameter of the task is set to `HTTP`. After you start the task, the system sends alerts by using the specified email address and DingTalk chatbot.
       *
       * @param request CreateHostAvailabilityRequest
       * @return CreateHostAvailabilityResponse
       */
      Models::CreateHostAvailabilityResponse createHostAvailability(const Models::CreateHostAvailabilityRequest &request);

      /**
       * @summary Creates a namespace.
       *
       * @description ## [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## [](#)Operation description
       * This topic provides an example on how to create a namespace named `aliyun`. In this example, the data retention period of the namespace is set to `cms.s1.3xlarge`. The returned result indicates that the namespace is created.
       *
       * @param request CreateHybridMonitorNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridMonitorNamespaceResponse
       */
      Models::CreateHybridMonitorNamespaceResponse createHybridMonitorNamespaceWithOptions(const Models::CreateHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a namespace.
       *
       * @description ## [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## [](#)Operation description
       * This topic provides an example on how to create a namespace named `aliyun`. In this example, the data retention period of the namespace is set to `cms.s1.3xlarge`. The returned result indicates that the namespace is created.
       *
       * @param request CreateHybridMonitorNamespaceRequest
       * @return CreateHybridMonitorNamespaceResponse
       */
      Models::CreateHybridMonitorNamespaceResponse createHybridMonitorNamespace(const Models::CreateHybridMonitorNamespaceRequest &request);

      /**
       * @summary Creates a Logstore group of Hybrid Cloud Monitoring.
       *
       * @description ### [](#)Prerequisites
       * Simple Log Service is activated. A project and a Logstore are created in Simple Log Service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
       * ### [](#)Operation description
       * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region ID is `cn-hangzhou`. The project is `aliyun-project`. The Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
       *
       * @param request CreateHybridMonitorSLSGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridMonitorSLSGroupResponse
       */
      Models::CreateHybridMonitorSLSGroupResponse createHybridMonitorSLSGroupWithOptions(const Models::CreateHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Logstore group of Hybrid Cloud Monitoring.
       *
       * @description ### [](#)Prerequisites
       * Simple Log Service is activated. A project and a Logstore are created in Simple Log Service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
       * ### [](#)Operation description
       * This topic provides an example on how to create a Logstore group named `Logstore_test`. The region ID is `cn-hangzhou`. The project is `aliyun-project`. The Logstore is `Logstore-ECS`. The response shows that the Logstore group is created.
       *
       * @param request CreateHybridMonitorSLSGroupRequest
       * @return CreateHybridMonitorSLSGroupResponse
       */
      Models::CreateHybridMonitorSLSGroupResponse createHybridMonitorSLSGroup(const Models::CreateHybridMonitorSLSGroupRequest &request);

      /**
       * @summary Creates a metric import task for an Alibaba Cloud service or creates a metric for logs imported from Simple Log Service.
       *
       * @description # [](#)Prerequisites
       * *   Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * *   If you want to create a metric for logs imported from Simple Log Service, make sure that you have activated Simple Log Service and created a project and a Logstore. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
       * # [](#)Description
       * This topic provides an example on how to create a metric import task named `aliyun_task` for Elastic Compute Service (ECS). The task imports the `cpu_total` metric to the `aliyun` namespace. The response shows that the metric import task is created.
       *
       * @param request CreateHybridMonitorTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateHybridMonitorTaskResponse
       */
      Models::CreateHybridMonitorTaskResponse createHybridMonitorTaskWithOptions(const Models::CreateHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a metric import task for an Alibaba Cloud service or creates a metric for logs imported from Simple Log Service.
       *
       * @description # [](#)Prerequisites
       * *   Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * *   If you want to create a metric for logs imported from Simple Log Service, make sure that you have activated Simple Log Service and created a project and a Logstore. For more information, see [Getting Started](https://help.aliyun.com/document_detail/54604.html).
       * # [](#)Description
       * This topic provides an example on how to create a metric import task named `aliyun_task` for Elastic Compute Service (ECS). The task imports the `cpu_total` metric to the `aliyun` namespace. The response shows that the metric import task is created.
       *
       * @param request CreateHybridMonitorTaskRequest
       * @return CreateHybridMonitorTaskResponse
       */
      Models::CreateHybridMonitorTaskResponse createHybridMonitorTask(const Models::CreateHybridMonitorTaskRequest &request);

      /**
       * @summary Creates an instant test task.
       *
       * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring. 
       * This topic provides an example to show how to create an instant test task. The name of the task is `task1`. The tested address is `http://www.aliyun.com`. The test type is `HTTP`. The number of detection points is `1`.
       *
       * @param request CreateInstantSiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstantSiteMonitorResponse
       */
      Models::CreateInstantSiteMonitorResponse createInstantSiteMonitorWithOptions(const Models::CreateInstantSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instant test task.
       *
       * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring. 
       * This topic provides an example to show how to create an instant test task. The name of the task is `task1`. The tested address is `http://www.aliyun.com`. The test type is `HTTP`. The number of detection points is `1`.
       *
       * @param request CreateInstantSiteMonitorRequest
       * @return CreateInstantSiteMonitorResponse
       */
      Models::CreateInstantSiteMonitorResponse createInstantSiteMonitor(const Models::CreateInstantSiteMonitorRequest &request);

      /**
       * @summary Creates a blacklist policy.
       *
       * @description ### Background information
       * *   CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
       * *   CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
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
       * *   CloudMonitor blocks alert notifications based on the blacklist policies that take effect. To block alert notifications when the value of a metric that belongs to a cloud service reaches the threshold that you specified, add the metric to a blacklist policy.
       * *   CloudMonitor allows you to create blacklist policies only based on threshold metrics. You cannot create blacklist policies based on system events. For more information about the cloud services and the thresholds of the metrics that are supported by CloudMonitor, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
       *
       * @param request CreateMetricRuleBlackListRequest
       * @return CreateMetricRuleBlackListResponse
       */
      Models::CreateMetricRuleBlackListResponse createMetricRuleBlackList(const Models::CreateMetricRuleBlackListRequest &request);

      /**
       * @summary Associates resources with an alert rule.
       *
       * @param request CreateMetricRuleResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMetricRuleResourcesResponse
       */
      Models::CreateMetricRuleResourcesResponse createMetricRuleResourcesWithOptions(const Models::CreateMetricRuleResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates resources with an alert rule.
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
       * @summary Creates a policy to pause alert notifications for an application group.
       *
       * @description If the policy is valid, no alert notifications are sent for the application group.
       * This topic describes how to create a `PauseNotify` policy to pause alert notifications for the `7301****` application group. The StartTime parameter is set to `1622949300000` and the EndTime parameter is set to `1623208500000`. This indicates that the policy is valid from `2021-06-06 11:15:00 UTC+8` to `2021-06-09 11:15:00 UTC+8`.
       *
       * @param request CreateMonitorGroupNotifyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMonitorGroupNotifyPolicyResponse
       */
      Models::CreateMonitorGroupNotifyPolicyResponse createMonitorGroupNotifyPolicyWithOptions(const Models::CreateMonitorGroupNotifyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a policy to pause alert notifications for an application group.
       *
       * @description If the policy is valid, no alert notifications are sent for the application group.
       * This topic describes how to create a `PauseNotify` policy to pause alert notifications for the `7301****` application group. The StartTime parameter is set to `1622949300000` and the EndTime parameter is set to `1623208500000`. This indicates that the policy is valid from `2021-06-06 11:15:00 UTC+8` to `2021-06-09 11:15:00 UTC+8`.
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
       * @description This topic provides an example on how to create a site monitoring task named `HanZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTPS`.
       *
       * @param request CreateSiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSiteMonitorResponse
       */
      Models::CreateSiteMonitorResponse createSiteMonitorWithOptions(const Models::CreateSiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a site monitoring task.
       *
       * @description This topic provides an example on how to create a site monitoring task named `HanZhou_ECS1`. The URL that is monitored by the task is `https://www.aliyun.com` and the type of the task is `HTTPS`.
       *
       * @param request CreateSiteMonitorRequest
       * @return CreateSiteMonitorResponse
       */
      Models::CreateSiteMonitorResponse createSiteMonitor(const Models::CreateSiteMonitorRequest &request);

      /**
       * @summary Defines the range of monitoring data that you want to export. The Cursor information is returned. When you call the BatchExport operation for the first time, you must specify the Cursor information.
       *
       * @description ### [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ### [](#)Background information
       * You can call this operation to obtain the Cursor information and then call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export the monitoring data.
       * ### [](#)Description
       * This topic provides an example on how to define the monitoring data of a specified metric for a specified cloud service. In this example, the namespace of the cloud service is set to `acs_ecs_dashboard`, the metric is set to `cpu_idle`, the start time is set to `1641627000000`, and the end time is set to `1641645000000`. The number of idle CPU cores on your Elastic Compute Service (ECS) instances is measured every 60 seconds from 15:30:00, January 8, 2022 to 20:30:00, January 8, 2022. The `Cursor` information is returned.
       *
       * @param tmpReq CursorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CursorResponse
       */
      Models::CursorResponse cursorWithOptions(const Models::CursorRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Defines the range of monitoring data that you want to export. The Cursor information is returned. When you call the BatchExport operation for the first time, you must specify the Cursor information.
       *
       * @description ### [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ### [](#)Background information
       * You can call this operation to obtain the Cursor information and then call the [BatchExport](https://help.aliyun.com/document_detail/2329847.html) operation to export the monitoring data.
       * ### [](#)Description
       * This topic provides an example on how to define the monitoring data of a specified metric for a specified cloud service. In this example, the namespace of the cloud service is set to `acs_ecs_dashboard`, the metric is set to `cpu_idle`, the start time is set to `1641627000000`, and the end time is set to `1641645000000`. The number of idle CPU cores on your Elastic Compute Service (ECS) instances is measured every 60 seconds from 15:30:00, January 8, 2022 to 20:30:00, January 8, 2022. The `Cursor` information is returned.
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
       * @summary Deletes an alert contact group.
       *
       * @param request DeleteContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactGroupResponse
       */
      Models::DeleteContactGroupResponse deleteContactGroupWithOptions(const Models::DeleteContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert contact group.
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
       * @summary Deletes event-triggered alert rules.
       *
       * @param request DeleteEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteEventRulesResponse
       */
      Models::DeleteEventRulesResponse deleteEventRulesWithOptions(const Models::DeleteEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes event-triggered alert rules.
       *
       * @param request DeleteEventRulesRequest
       * @return DeleteEventRulesResponse
       */
      Models::DeleteEventRulesResponse deleteEventRules(const Models::DeleteEventRulesRequest &request);

      /**
       * @summary Deletes a configuration set that is used to export monitoring data.
       *
       * @param request DeleteExporterOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExporterOutputResponse
       */
      Models::DeleteExporterOutputResponse deleteExporterOutputWithOptions(const Models::DeleteExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a configuration set that is used to export monitoring data.
       *
       * @param request DeleteExporterOutputRequest
       * @return DeleteExporterOutputResponse
       */
      Models::DeleteExporterOutputResponse deleteExporterOutput(const Models::DeleteExporterOutputRequest &request);

      /**
       * @summary Deletes a data export rule.
       *
       * @param request DeleteExporterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExporterRuleResponse
       */
      Models::DeleteExporterRuleResponse deleteExporterRuleWithOptions(const Models::DeleteExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data export rule.
       *
       * @param request DeleteExporterRuleRequest
       * @return DeleteExporterRuleResponse
       */
      Models::DeleteExporterRuleResponse deleteExporterRule(const Models::DeleteExporterRuleRequest &request);

      /**
       * @summary Deletes a process monitoring task for an application group.
       *
       * @param request DeleteGroupMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupMonitoringAgentProcessResponse
       */
      Models::DeleteGroupMonitoringAgentProcessResponse deleteGroupMonitoringAgentProcessWithOptions(const Models::DeleteGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a process monitoring task for an application group.
       *
       * @param request DeleteGroupMonitoringAgentProcessRequest
       * @return DeleteGroupMonitoringAgentProcessResponse
       */
      Models::DeleteGroupMonitoringAgentProcessResponse deleteGroupMonitoringAgentProcess(const Models::DeleteGroupMonitoringAgentProcessRequest &request);

      /**
       * @summary Deletes availability monitoring tasks.
       *
       * @param request DeleteHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteHostAvailabilityResponse
       */
      Models::DeleteHostAvailabilityResponse deleteHostAvailabilityWithOptions(const Models::DeleteHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes availability monitoring tasks.
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
       * @summary Deletes multiple blacklist policies at a time.
       *
       * @param request DeleteMetricRuleBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRuleBlackListResponse
       */
      Models::DeleteMetricRuleBlackListResponse deleteMetricRuleBlackListWithOptions(const Models::DeleteMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple blacklist policies at a time.
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
       * @summary Deletes an alert template.
       *
       * @param request DeleteMetricRuleTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRuleTemplateResponse
       */
      Models::DeleteMetricRuleTemplateResponse deleteMetricRuleTemplateWithOptions(const Models::DeleteMetricRuleTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an alert template.
       *
       * @param request DeleteMetricRuleTemplateRequest
       * @return DeleteMetricRuleTemplateResponse
       */
      Models::DeleteMetricRuleTemplateResponse deleteMetricRuleTemplate(const Models::DeleteMetricRuleTemplateRequest &request);

      /**
       * @summary Deletes one or more alert rules.
       *
       * @param request DeleteMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMetricRulesResponse
       */
      Models::DeleteMetricRulesResponse deleteMetricRulesWithOptions(const Models::DeleteMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more alert rules.
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
       * @summary Disables monitoring on a process.
       *
       * @param request DeleteMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMonitoringAgentProcessResponse
       */
      Models::DeleteMonitoringAgentProcessResponse deleteMonitoringAgentProcessWithOptions(const Models::DeleteMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables monitoring on a process.
       *
       * @param request DeleteMonitoringAgentProcessRequest
       * @return DeleteMonitoringAgentProcessResponse
       */
      Models::DeleteMonitoringAgentProcessResponse deleteMonitoringAgentProcess(const Models::DeleteMonitoringAgentProcessRequest &request);

      /**
       * @summary Deletes one or more site monitoring tasks.
       *
       * @param request DeleteSiteMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSiteMonitorsResponse
       */
      Models::DeleteSiteMonitorsResponse deleteSiteMonitorsWithOptions(const Models::DeleteSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more site monitoring tasks.
       *
       * @param request DeleteSiteMonitorsRequest
       * @return DeleteSiteMonitorsResponse
       */
      Models::DeleteSiteMonitorsResponse deleteSiteMonitors(const Models::DeleteSiteMonitorsRequest &request);

      /**
       * @summary Queries the details of initiative alert rules.
       *
       * @param request DescribeActiveMetricRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeActiveMetricRuleListResponse
       */
      Models::DescribeActiveMetricRuleListResponse describeActiveMetricRuleListWithOptions(const Models::DescribeActiveMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of initiative alert rules.
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
       * @summary Queries alert logs.
       *
       * @description You can call the operation to query only the alert logs within the last year.
       * This topic provides an example to show how to query the alert logs of Elastic Compute Service (ECS) based on the `product` dimension.
       *
       * @param request DescribeAlertLogListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAlertLogListResponse
       */
      Models::DescribeAlertLogListResponse describeAlertLogListWithOptions(const Models::DescribeAlertLogListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert logs.
       *
       * @description You can call the operation to query only the alert logs within the last year.
       * This topic provides an example to show how to query the alert logs of Elastic Compute Service (ECS) based on the `product` dimension.
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
       * @summary Queries alert groups.
       *
       * @param request DescribeContactGroupListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContactGroupListResponse
       */
      Models::DescribeContactGroupListResponse describeContactGroupListWithOptions(const Models::DescribeContactGroupListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert groups.
       *
       * @param request DescribeContactGroupListRequest
       * @return DescribeContactGroupListResponse
       */
      Models::DescribeContactGroupListResponse describeContactGroupList(const Models::DescribeContactGroupListRequest &request);

      /**
       * @summary Queries alert contacts.
       *
       * @param request DescribeContactListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeContactListResponse
       */
      Models::DescribeContactListResponse describeContactListWithOptions(const Models::DescribeContactListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert contacts.
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
       * @summary Queries the details of a custom event.
       *
       * @param request DescribeCustomEventAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomEventAttributeResponse
       */
      Models::DescribeCustomEventAttributeResponse describeCustomEventAttributeWithOptions(const Models::DescribeCustomEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom event.
       *
       * @param request DescribeCustomEventAttributeRequest
       * @return DescribeCustomEventAttributeResponse
       */
      Models::DescribeCustomEventAttributeResponse describeCustomEventAttribute(const Models::DescribeCustomEventAttributeRequest &request);

      /**
       * @summary Queries the number of times that a custom event occurred within a period of time.
       *
       * @description >  This operation queries the number of times that a custom event occurred for each service.
       *
       * @param request DescribeCustomEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomEventCountResponse
       */
      Models::DescribeCustomEventCountResponse describeCustomEventCountWithOptions(const Models::DescribeCustomEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times that a custom event occurred within a period of time.
       *
       * @description >  This operation queries the number of times that a custom event occurred for each service.
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
       * @description >  You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
       *
       * @param request DescribeCustomMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomMetricListResponse
       */
      Models::DescribeCustomMetricListResponse describeCustomMetricListWithOptions(const Models::DescribeCustomMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the reported monitoring data.
       *
       * @description >  You can call the DescribeMetricList operation to query the metrics of cloud services. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html).
       *
       * @param request DescribeCustomMetricListRequest
       * @return DescribeCustomMetricListResponse
       */
      Models::DescribeCustomMetricListResponse describeCustomMetricList(const Models::DescribeCustomMetricListRequest &request);

      /**
       * @summary Queries tag rules.
       *
       * @description This topic provides an example to show how to query tag rules that are related to `tagkey1`. The sample responses indicate that two tag rules are found. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
       *
       * @param request DescribeDynamicTagRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDynamicTagRuleListResponse
       */
      Models::DescribeDynamicTagRuleListResponse describeDynamicTagRuleListWithOptions(const Models::DescribeDynamicTagRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag rules.
       *
       * @description This topic provides an example to show how to query tag rules that are related to `tagkey1`. The sample responses indicate that two tag rules are found. The rule IDs are `1536df65-a719-429d-8813-73cc40d7****` and `56e8cebb-b3d7-4a91-9880-78a8c84f****`.
       *
       * @param request DescribeDynamicTagRuleListRequest
       * @return DescribeDynamicTagRuleListResponse
       */
      Models::DescribeDynamicTagRuleListResponse describeDynamicTagRuleList(const Models::DescribeDynamicTagRuleListRequest &request);

      /**
       * @summary Queries the details of an event-triggered alert rule.
       *
       * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
       *
       * @param request DescribeEventRuleAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventRuleAttributeResponse
       */
      Models::DescribeEventRuleAttributeResponse describeEventRuleAttributeWithOptions(const Models::DescribeEventRuleAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an event-triggered alert rule.
       *
       * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
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
       * @summary Queries event-triggered alert rules.
       *
       * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
       *
       * @param request DescribeEventRuleTargetListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventRuleTargetListResponse
       */
      Models::DescribeEventRuleTargetListResponse describeEventRuleTargetListWithOptions(const Models::DescribeEventRuleTargetListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries event-triggered alert rules.
       *
       * @description This topic provides an example to show how to query the details of an event-triggered alert rule named `testRule`.
       *
       * @param request DescribeEventRuleTargetListRequest
       * @return DescribeEventRuleTargetListResponse
       */
      Models::DescribeEventRuleTargetListResponse describeEventRuleTargetList(const Models::DescribeEventRuleTargetListRequest &request);

      /**
       * @summary Queries configuration sets that are used to export monitoring data.
       *
       * @param request DescribeExporterOutputListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExporterOutputListResponse
       */
      Models::DescribeExporterOutputListResponse describeExporterOutputListWithOptions(const Models::DescribeExporterOutputListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configuration sets that are used to export monitoring data.
       *
       * @param request DescribeExporterOutputListRequest
       * @return DescribeExporterOutputListResponse
       */
      Models::DescribeExporterOutputListResponse describeExporterOutputList(const Models::DescribeExporterOutputListRequest &request);

      /**
       * @summary Queries data export rules.
       *
       * @param request DescribeExporterRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeExporterRuleListResponse
       */
      Models::DescribeExporterRuleListResponse describeExporterRuleListWithOptions(const Models::DescribeExporterRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries data export rules.
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
       * @summary Queries namespaces and the details of the related metric import tasks.
       *
       * @description In this example, all namespaces within the current account are queried. The response shows that the current account has only one namespace named `aliyun-test`.
       *
       * @param request DescribeHybridMonitorNamespaceListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridMonitorNamespaceListResponse
       */
      Models::DescribeHybridMonitorNamespaceListResponse describeHybridMonitorNamespaceListWithOptions(const Models::DescribeHybridMonitorNamespaceListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries namespaces and the details of the related metric import tasks.
       *
       * @description In this example, all namespaces within the current account are queried. The response shows that the current account has only one namespace named `aliyun-test`.
       *
       * @param request DescribeHybridMonitorNamespaceListRequest
       * @return DescribeHybridMonitorNamespaceListResponse
       */
      Models::DescribeHybridMonitorNamespaceListResponse describeHybridMonitorNamespaceList(const Models::DescribeHybridMonitorNamespaceListRequest &request);

      /**
       * @summary Queries Logstore groups.
       *
       * @description In this example, all Logstore groups within the current account are queried. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
       *
       * @param request DescribeHybridMonitorSLSGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHybridMonitorSLSGroupResponse
       */
      Models::DescribeHybridMonitorSLSGroupResponse describeHybridMonitorSLSGroupWithOptions(const Models::DescribeHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Logstore groups.
       *
       * @description In this example, all Logstore groups within the current account are queried. The response shows that the current account has two Logstore groups: `Logstore_test` and `Logstore_aliyun`.
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
       * @summary Queries the details of a log monitoring metric.
       *
       * @param request DescribeLogMonitorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeLogMonitorAttributeResponse
       */
      Models::DescribeLogMonitorAttributeResponse describeLogMonitorAttributeWithOptions(const Models::DescribeLogMonitorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a log monitoring metric.
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
       * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Description
       * >  Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
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
       * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. If the free quota is used up, you are automatically charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Description
       * >  Different from [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html), the DescribeMetricData operation provides statistical features. You can set the Dimension parameter to `{"instanceId": "i-abcdefgh12****"}` to aggregate all data of your Alibaba Cloud account.
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
       * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * *   Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * >  If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * *   The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
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
       * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * *   Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * >  If `Throttling.User` or `Request was denied due to user flow control` is returned when you call an API operation, the API operation is throttled. For more information about how to handle the issue, see [How do I handle the throttling of a query API?](https://help.aliyun.com/document_detail/2615031.html)
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * *   The storage duration is 91 days if the value of the `Period` parameter is greater than or equal to 300 seconds.
       * ### [](#)Operation description
       * This topic provides an example on how to query the latest monitoring data of the `CPUUtilization` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `123456789876****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
       *
       * @param request DescribeMetricLastRequest
       * @return DescribeMetricLastResponse
       */
      Models::DescribeMetricLastResponse describeMetricLast(const Models::DescribeMetricLastRequest &request);

      /**
       * @summary Queries the monitoring data of a metric for a specified cloud service.
       *
       * @description ## Limits
       * Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the RAM users within the account share the quota. 
       * >This topic provides an example to show how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `120886317861****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
       *
       * @param request DescribeMetricListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricListWithOptions(const Models::DescribeMetricListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of a metric for a specified cloud service.
       *
       * @description ## Limits
       * Each API operation can be called up to 50 times per second. An Alibaba Cloud account and the RAM users within the account share the quota. 
       * >This topic provides an example to show how to query the monitoring data of the `cpu_idle` metric for Elastic Compute Service (ECS). The namespace of ECS is `acs_ecs_dashboard`. The returned result indicates that the monitoring data for the instance `i-abcdefgh12****` of the account `120886317861****` is queried at an interval of 60 seconds. The maximum, minimum, and average values of the metric are 100, 93.1, and 99.52.
       *
       * @param request DescribeMetricListRequest
       * @return DescribeMetricListResponse
       */
      Models::DescribeMetricListResponse describeMetricList(const Models::DescribeMetricListRequest &request);

      /**
       * @summary Queries the details of metrics that are supported in CloudMonitor.
       *
       * @description This operation is used together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
       *
       * @param request DescribeMetricMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricMetaListResponse
       */
      Models::DescribeMetricMetaListResponse describeMetricMetaListWithOptions(const Models::DescribeMetricMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of metrics that are supported in CloudMonitor.
       *
       * @description This operation is used together with DescribeMetricList and DescribeMetricLast. For more information, see [DescribeMetricList](https://help.aliyun.com/document_detail/51936.html) and [DescribeMetricLast](https://help.aliyun.com/document_detail/51939.html).
       *
       * @param request DescribeMetricMetaListRequest
       * @return DescribeMetricMetaListResponse
       */
      Models::DescribeMetricMetaListResponse describeMetricMetaList(const Models::DescribeMetricMetaListRequest &request);

      /**
       * @param request DescribeMetricRuleBlackListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleBlackListResponse
       */
      Models::DescribeMetricRuleBlackListResponse describeMetricRuleBlackListWithOptions(const Models::DescribeMetricRuleBlackListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @summary Queries alert rules.
       *
       * @description This topic provides an example on how to query all alert rules within your Alibaba Cloud account. The returned result shows that only one alert rule is found. The name of the alert rule is `Rule_01` and the ID is `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
       *
       * @param request DescribeMetricRuleListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleListResponse
       */
      Models::DescribeMetricRuleListResponse describeMetricRuleListWithOptions(const Models::DescribeMetricRuleListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries alert rules.
       *
       * @description This topic provides an example on how to query all alert rules within your Alibaba Cloud account. The returned result shows that only one alert rule is found. The name of the alert rule is `Rule_01` and the ID is `applyTemplate344cfd42-0f32-4fd6-805a-88d7908a****`.
       *
       * @param request DescribeMetricRuleListRequest
       * @return DescribeMetricRuleListResponse
       */
      Models::DescribeMetricRuleListResponse describeMetricRuleList(const Models::DescribeMetricRuleListRequest &request);

      /**
       * @summary Queries the resources that are associated with a specified alert rule.
       *
       * @description ## Limit
       * This operation supports only Message Service (MNS) resources. 
       * >This topic provides an example on how to query the resources that are associated with an alert rule whose ID is `ae06917_75a8c43178ab66****`.
       *
       * @param request DescribeMetricRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleTargetsResponse
       */
      Models::DescribeMetricRuleTargetsResponse describeMetricRuleTargetsWithOptions(const Models::DescribeMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resources that are associated with a specified alert rule.
       *
       * @description ## Limit
       * This operation supports only Message Service (MNS) resources. 
       * >This topic provides an example on how to query the resources that are associated with an alert rule whose ID is `ae06917_75a8c43178ab66****`.
       *
       * @param request DescribeMetricRuleTargetsRequest
       * @return DescribeMetricRuleTargetsResponse
       */
      Models::DescribeMetricRuleTargetsResponse describeMetricRuleTargets(const Models::DescribeMetricRuleTargetsRequest &request);

      /**
       * @summary Queries the details of an alert template.
       *
       * @description This topic provides an example on how to query the details of an alert template whose ID is `70****`.
       *
       * @param request DescribeMetricRuleTemplateAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMetricRuleTemplateAttributeResponse
       */
      Models::DescribeMetricRuleTemplateAttributeResponse describeMetricRuleTemplateAttributeWithOptions(const Models::DescribeMetricRuleTemplateAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an alert template.
       *
       * @description This topic provides an example on how to query the details of an alert template whose ID is `70****`.
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
       * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * *   The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
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
       * *   The total free quota is 1 million calls per month for the DescribeMetricLast, DescribeMetricList, DescribeMetricData, and DescribeMetricTop operations. If the free quota is used up and CloudMonitor Basic (pay-as-you-go) is not activated, these API operations can no longer be called as expected. If you have activated CloudMonitor Basic (pay-as-you-go), these API operations can still be called even if the free quota is used up. After the free quota is used up, you are charged for the excess usage based on the pay-as-you-go billing method. For more information about how to activate CloudMonitor Basic (pay-as-you-go), see [Enable the pay-as-you-go billing method](https://common-buy.aliyun.com/?spm=a2c4g.11186623.0.0.6c8f3481IbSHgG\\&commodityCode=cms_basic_public_cn\\&from_biz_channel=help_bill).
       * *   Each API operation can be called up to 10 times per second. An Alibaba Cloud account and the Resource Access Management (RAM) users within the account share the quota.
       * ### [](#)Precautions
       * The storage duration of the monitoring data of each cloud service is related to the `Period` parameter (statistical period). A larger value of the `Period` parameter indicates that the monitoring data is distributed in a larger time range and the storage duration of the monitoring data is longer. The following list describes the specific relationships:
       * *   The storage duration is 7 days if the value of the `Period` parameter is less than 60 seconds.
       * *   The storage duration is 31 days if the value of the `Period` parameter is 60 seconds.
       * *   The storage duration is 91 days if the value of the `Period` is greater than or equal to 300 seconds.
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
       * @summary Queries the details of the resources in an application group.
       *
       * @param request DescribeMonitorGroupInstanceAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupInstanceAttributeResponse
       */
      Models::DescribeMonitorGroupInstanceAttributeResponse describeMonitorGroupInstanceAttributeWithOptions(const Models::DescribeMonitorGroupInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the resources in an application group.
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
       * @summary Queries the policies that are used to pause alert notifications for an application group.
       *
       * @param request DescribeMonitorGroupNotifyPolicyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupNotifyPolicyListResponse
       */
      Models::DescribeMonitorGroupNotifyPolicyListResponse describeMonitorGroupNotifyPolicyListWithOptions(const Models::DescribeMonitorGroupNotifyPolicyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policies that are used to pause alert notifications for an application group.
       *
       * @param request DescribeMonitorGroupNotifyPolicyListRequest
       * @return DescribeMonitorGroupNotifyPolicyListResponse
       */
      Models::DescribeMonitorGroupNotifyPolicyListResponse describeMonitorGroupNotifyPolicyList(const Models::DescribeMonitorGroupNotifyPolicyListRequest &request);

      /**
       * @summary Queries application groups.
       *
       * @description This topic provides an example of how to query the application groups of the current account. The response shows that the current account has two application groups: `testGroup124` and `test123`.
       *
       * @param request DescribeMonitorGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitorGroupsResponse
       */
      Models::DescribeMonitorGroupsResponse describeMonitorGroupsWithOptions(const Models::DescribeMonitorGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries application groups.
       *
       * @description This topic provides an example of how to query the application groups of the current account. The response shows that the current account has two application groups: `testGroup124` and `test123`.
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
       * @summary Queries all hosts within the current Alibaba Cloud account, including hosts on which the CloudMonitor agent is installed and uninstalled.
       *
       * @param request DescribeMonitoringAgentHostsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentHostsResponse
       */
      Models::DescribeMonitoringAgentHostsResponse describeMonitoringAgentHostsWithOptions(const Models::DescribeMonitoringAgentHostsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all hosts within the current Alibaba Cloud account, including hosts on which the CloudMonitor agent is installed and uninstalled.
       *
       * @param request DescribeMonitoringAgentHostsRequest
       * @return DescribeMonitoringAgentHostsResponse
       */
      Models::DescribeMonitoringAgentHostsResponse describeMonitoringAgentHosts(const Models::DescribeMonitoringAgentHostsRequest &request);

      /**
       * @description >  Before you call this operation, call the CreateMonitoringAgentProcess operation to create processes. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/114951.html~).
       * This topic provides an example of how to query the processes of the `i-hp3hl3cx1pbahzy8****` instance. The response indicates the details of the `NGINX` and `HTTP` processes.
       *
       * @param request DescribeMonitoringAgentProcessesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentProcessesResponse
       */
      Models::DescribeMonitoringAgentProcessesResponse describeMonitoringAgentProcessesWithOptions(const Models::DescribeMonitoringAgentProcessesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description >  Before you call this operation, call the CreateMonitoringAgentProcess operation to create processes. For more information, see [CreateMonitoringAgentProcess](https://help.aliyun.com/document_detail/114951.html~).
       * This topic provides an example of how to query the processes of the `i-hp3hl3cx1pbahzy8****` instance. The response indicates the details of the `NGINX` and `HTTP` processes.
       *
       * @param request DescribeMonitoringAgentProcessesRequest
       * @return DescribeMonitoringAgentProcessesResponse
       */
      Models::DescribeMonitoringAgentProcessesResponse describeMonitoringAgentProcesses(const Models::DescribeMonitoringAgentProcessesRequest &request);

      /**
       * @summary Queries the status of the CloudMonitor agent.
       *
       * @description This topic describes how to query the status of the CloudMonitor agent that is installed on the `i-hp3dunahluwajv6f****` instance. The result indicates that the CloudMonitor agent is in the `running` state.
       *
       * @param request DescribeMonitoringAgentStatusesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMonitoringAgentStatusesResponse
       */
      Models::DescribeMonitoringAgentStatusesResponse describeMonitoringAgentStatusesWithOptions(const Models::DescribeMonitoringAgentStatusesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the CloudMonitor agent.
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
       * @summary Queries the keys of all tags that are attached to cloud resources in a region.
       *
       * @description >  If a tag is attached to multiple cloud resources in the region, the key of the tag is returned only once.
       *
       * @param request DescribeProductResourceTagKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProductResourceTagKeyListResponse
       */
      Models::DescribeProductResourceTagKeyListResponse describeProductResourceTagKeyListWithOptions(const Models::DescribeProductResourceTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the keys of all tags that are attached to cloud resources in a region.
       *
       * @description >  If a tag is attached to multiple cloud resources in the region, the key of the tag is returned only once.
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
       * @summary Queries the information about monitored services in CloudMonitor.
       *
       * @description The information obtained by this operation includes the service description, namespace, and tags.
       *
       * @param request DescribeProjectMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectMetaResponse
       */
      Models::DescribeProjectMetaResponse describeProjectMetaWithOptions(const Models::DescribeProjectMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about monitored services in CloudMonitor.
       *
       * @description The information obtained by this operation includes the service description, namespace, and tags.
       *
       * @param request DescribeProjectMetaRequest
       * @return DescribeProjectMetaResponse
       */
      Models::DescribeProjectMetaResponse describeProjectMeta(const Models::DescribeProjectMetaRequest &request);

      /**
       * @summary Queries the details of a site monitoring task.
       *
       * @description This topic provides an example on how to query the details of a site monitoring task whose ID is `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The returned result indicates that the task name is `test123`, the URL that is monitored by the task is `https://aliyun.com`, and the name of the carrier is `Alibaba`.
       *
       * @param request DescribeSiteMonitorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorAttributeResponse
       */
      Models::DescribeSiteMonitorAttributeResponse describeSiteMonitorAttributeWithOptions(const Models::DescribeSiteMonitorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a site monitoring task.
       *
       * @description This topic provides an example on how to query the details of a site monitoring task whose ID is `cc641dff-c19d-45f3-ad0a-818a0c4f****`. The returned result indicates that the task name is `test123`, the URL that is monitored by the task is `https://aliyun.com`, and the name of the carrier is `Alibaba`.
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
       * @summary Queries the detection points that are provided by carriers.
       *
       * @description This topic provides an example on how to query the detection points that are provided by China Unicom in Guiyang.
       *
       * @param request DescribeSiteMonitorISPCityListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorISPCityListResponse
       */
      Models::DescribeSiteMonitorISPCityListResponse describeSiteMonitorISPCityListWithOptions(const Models::DescribeSiteMonitorISPCityListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detection points that are provided by carriers.
       *
       * @description This topic provides an example on how to query the detection points that are provided by China Unicom in Guiyang.
       *
       * @param request DescribeSiteMonitorISPCityListRequest
       * @return DescribeSiteMonitorISPCityListResponse
       */
      Models::DescribeSiteMonitorISPCityListResponse describeSiteMonitorISPCityList(const Models::DescribeSiteMonitorISPCityListRequest &request);

      /**
       * @summary Queries site monitoring tasks.
       *
       * @description This topic provides an example on how to query all the site monitoring tasks of your Alibaba Cloud account. In this example, the returned result indicates that the Alibaba Cloud account has one site monitoring task named `HanZhou_ECS2`.
       *
       * @param request DescribeSiteMonitorListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorListResponse
       */
      Models::DescribeSiteMonitorListResponse describeSiteMonitorListWithOptions(const Models::DescribeSiteMonitorListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries site monitoring tasks.
       *
       * @description This topic provides an example on how to query all the site monitoring tasks of your Alibaba Cloud account. In this example, the returned result indicates that the Alibaba Cloud account has one site monitoring task named `HanZhou_ECS2`.
       *
       * @param request DescribeSiteMonitorListRequest
       * @return DescribeSiteMonitorListResponse
       */
      Models::DescribeSiteMonitorListResponse describeSiteMonitorList(const Models::DescribeSiteMonitorListRequest &request);

      /**
       * @summary Queries the logs of one or more instant test tasks.
       *
       * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring.
       * This topic provides an example to show how to query the logs of an instant test task whose ID is `afa5c3ce-f944-4363-9edb-ce919a29****`.
       *
       * @param request DescribeSiteMonitorLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorLogResponse
       */
      Models::DescribeSiteMonitorLogResponse describeSiteMonitorLogWithOptions(const Models::DescribeSiteMonitorLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logs of one or more instant test tasks.
       *
       * @description You can create an instant test task only by using the Alibaba Cloud account that you used to enable Network Analysis and Monitoring.
       * This topic provides an example to show how to query the logs of an instant test task whose ID is `afa5c3ce-f944-4363-9edb-ce919a29****`.
       *
       * @param request DescribeSiteMonitorLogRequest
       * @return DescribeSiteMonitorLogResponse
       */
      Models::DescribeSiteMonitorLogResponse describeSiteMonitorLog(const Models::DescribeSiteMonitorLogRequest &request);

      /**
       * @summary Queries the quotas and version of site monitoring.
       *
       * @param request DescribeSiteMonitorQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorQuotaResponse
       */
      Models::DescribeSiteMonitorQuotaResponse describeSiteMonitorQuotaWithOptions(const Models::DescribeSiteMonitorQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas and version of site monitoring.
       *
       * @param request DescribeSiteMonitorQuotaRequest
       * @return DescribeSiteMonitorQuotaResponse
       */
      Models::DescribeSiteMonitorQuotaResponse describeSiteMonitorQuota(const Models::DescribeSiteMonitorQuotaRequest &request);

      /**
       * @summary Queries the statistics of a specified metric for a specified site monitoring task.
       *
       * @description This topic provides an example on how to query the statistics of the `Availability` metric for a site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The result indicates that the availability rate of the site is `100%`.
       *
       * @param request DescribeSiteMonitorStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSiteMonitorStatisticsResponse
       */
      Models::DescribeSiteMonitorStatisticsResponse describeSiteMonitorStatisticsWithOptions(const Models::DescribeSiteMonitorStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of a specified metric for a specified site monitoring task.
       *
       * @description This topic provides an example on how to query the statistics of the `Availability` metric for a site monitoring task whose ID is `ef4cdc8b-9dc7-43e7-810e-f950e56c****`. The result indicates that the availability rate of the site is `100%`.
       *
       * @param request DescribeSiteMonitorStatisticsRequest
       * @return DescribeSiteMonitorStatisticsResponse
       */
      Models::DescribeSiteMonitorStatisticsResponse describeSiteMonitorStatistics(const Models::DescribeSiteMonitorStatisticsRequest &request);

      /**
       * @summary 查询拨测探测节点列表
       *
       * @param request DescribeSyntheticProbeListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSyntheticProbeListResponse
       */
      Models::DescribeSyntheticProbeListResponse describeSyntheticProbeListWithOptions(const Models::DescribeSyntheticProbeListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询拨测探测节点列表
       *
       * @param request DescribeSyntheticProbeListRequest
       * @return DescribeSyntheticProbeListResponse
       */
      Models::DescribeSyntheticProbeListResponse describeSyntheticProbeList(const Models::DescribeSyntheticProbeListRequest &request);

      /**
       * @summary Queries the details of a system event.
       *
       * @param request DescribeSystemEventAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemEventAttributeResponse
       */
      Models::DescribeSystemEventAttributeResponse describeSystemEventAttributeWithOptions(const Models::DescribeSystemEventAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a system event.
       *
       * @param request DescribeSystemEventAttributeRequest
       * @return DescribeSystemEventAttributeResponse
       */
      Models::DescribeSystemEventAttributeResponse describeSystemEventAttribute(const Models::DescribeSystemEventAttributeRequest &request);

      /**
       * @summary Queries the number of times that a system event of a cloud service has occurred.
       *
       * @description ### [](#)Background information
       * You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the cloud services supported by CloudMonitor and their system events.
       * ### [](#)Description
       * This topic provides an example on how to query the number of times that a system event of `Elastic Compute Service (ECS)` has occurred. The returned result shows that the specified system event has occurred three times.
       *
       * @param request DescribeSystemEventCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemEventCountResponse
       */
      Models::DescribeSystemEventCountResponse describeSystemEventCountWithOptions(const Models::DescribeSystemEventCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times that a system event of a cloud service has occurred.
       *
       * @description ### [](#)Background information
       * You can call the [DescribeSystemEventMetaList](https://help.aliyun.com/document_detail/114972.html) operation to query the cloud services supported by CloudMonitor and their system events.
       * ### [](#)Description
       * This topic provides an example on how to query the number of times that a system event of `Elastic Compute Service (ECS)` has occurred. The returned result shows that the specified system event has occurred three times.
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
       * @summary Queries the meta information about system events.
       *
       * @param request DescribeSystemEventMetaListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeSystemEventMetaListResponse
       */
      Models::DescribeSystemEventMetaListResponse describeSystemEventMetaListWithOptions(const Models::DescribeSystemEventMetaListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the meta information about system events.
       *
       * @param request DescribeSystemEventMetaListRequest
       * @return DescribeSystemEventMetaListResponse
       */
      Models::DescribeSystemEventMetaListResponse describeSystemEventMetaList(const Models::DescribeSystemEventMetaListRequest &request);

      /**
       * @summary Queries tag keys.
       *
       * @param request DescribeTagKeyListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagKeyListResponse
       */
      Models::DescribeTagKeyListResponse describeTagKeyListWithOptions(const Models::DescribeTagKeyListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag keys.
       *
       * @param request DescribeTagKeyListRequest
       * @return DescribeTagKeyListResponse
       */
      Models::DescribeTagKeyListResponse describeTagKeyList(const Models::DescribeTagKeyListRequest &request);

      /**
       * @summary Queries the tag values corresponding to a specified tag key.
       *
       * @description This topic provides an example of how to query the tag values corresponding to `tagKey1`. The return results are `tagValue1` and `tagValue2`.
       *
       * @param request DescribeTagValueListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagValueListResponse
       */
      Models::DescribeTagValueListResponse describeTagValueListWithOptions(const Models::DescribeTagValueListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag values corresponding to a specified tag key.
       *
       * @description This topic provides an example of how to query the tag values corresponding to `tagKey1`. The return results are `tagValue1` and `tagValue2`.
       *
       * @param request DescribeTagValueListRequest
       * @return DescribeTagValueListResponse
       */
      Models::DescribeTagValueListResponse describeTagValueList(const Models::DescribeTagValueListRequest &request);

      /**
       * @summary Queries unhealthy instances detected by availability monitoring tasks.
       *
       * @param request DescribeUnhealthyHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUnhealthyHostAvailabilityResponse
       */
      Models::DescribeUnhealthyHostAvailabilityResponse describeUnhealthyHostAvailabilityWithOptions(const Models::DescribeUnhealthyHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries unhealthy instances detected by availability monitoring tasks.
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
       * @param request DisableEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableEventRulesResponse
       */
      Models::DisableEventRulesResponse disableEventRulesWithOptions(const Models::DisableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DisableEventRulesRequest
       * @return DisableEventRulesResponse
       */
      Models::DisableEventRulesResponse disableEventRules(const Models::DisableEventRulesRequest &request);

      /**
       * @summary Disables availability monitoring tasks.
       *
       * @param request DisableHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableHostAvailabilityResponse
       */
      Models::DisableHostAvailabilityResponse disableHostAvailabilityWithOptions(const Models::DisableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables availability monitoring tasks.
       *
       * @param request DisableHostAvailabilityRequest
       * @return DisableHostAvailabilityResponse
       */
      Models::DisableHostAvailabilityResponse disableHostAvailability(const Models::DisableHostAvailabilityRequest &request);

      /**
       * @summary Disables alert rules.
       *
       * @param request DisableMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableMetricRulesResponse
       */
      Models::DisableMetricRulesResponse disableMetricRulesWithOptions(const Models::DisableMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables alert rules.
       *
       * @param request DisableMetricRulesRequest
       * @return DisableMetricRulesResponse
       */
      Models::DisableMetricRulesResponse disableMetricRules(const Models::DisableMetricRulesRequest &request);

      /**
       * @summary Disables site monitoring tasks.
       *
       * @param request DisableSiteMonitorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableSiteMonitorsResponse
       */
      Models::DisableSiteMonitorsResponse disableSiteMonitorsWithOptions(const Models::DisableSiteMonitorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables site monitoring tasks.
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
       * @param request EnableEventRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableEventRulesResponse
       */
      Models::EnableEventRulesResponse enableEventRulesWithOptions(const Models::EnableEventRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnableEventRulesRequest
       * @return EnableEventRulesResponse
       */
      Models::EnableEventRulesResponse enableEventRules(const Models::EnableEventRulesRequest &request);

      /**
       * @summary Enables availability monitoring tasks.
       *
       * @param request EnableHostAvailabilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableHostAvailabilityResponse
       */
      Models::EnableHostAvailabilityResponse enableHostAvailabilityWithOptions(const Models::EnableHostAvailabilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables availability monitoring tasks.
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
       * @summary InstallMonitoringAgent
       *
       * @description ## Prerequisites
       * The Cloud Assistant client is installed on an ECS instance. For more information about how to install the Cloud Assistant client, see [Overview](https://help.aliyun.com/document_detail/64601.html).
       *
       * @param request InstallMonitoringAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallMonitoringAgentResponse
       */
      Models::InstallMonitoringAgentResponse installMonitoringAgentWithOptions(const Models::InstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary InstallMonitoringAgent
       *
       * @description ## Prerequisites
       * The Cloud Assistant client is installed on an ECS instance. For more information about how to install the Cloud Assistant client, see [Overview](https://help.aliyun.com/document_detail/64601.html).
       *
       * @param request InstallMonitoringAgentRequest
       * @return InstallMonitoringAgentResponse
       */
      Models::InstallMonitoringAgentResponse installMonitoringAgent(const Models::InstallMonitoringAgentRequest &request);

      /**
       * @param request ModifyGroupMonitoringAgentProcessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupMonitoringAgentProcessResponse
       */
      Models::ModifyGroupMonitoringAgentProcessResponse modifyGroupMonitoringAgentProcessWithOptions(const Models::ModifyGroupMonitoringAgentProcessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
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
       * @description ****
       *
       * @param request ModifyHostInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHostInfoResponse
       */
      Models::ModifyHostInfoResponse modifyHostInfoWithOptions(const Models::ModifyHostInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description ****
       *
       * @param request ModifyHostInfoRequest
       * @return ModifyHostInfoResponse
       */
      Models::ModifyHostInfoResponse modifyHostInfo(const Models::ModifyHostInfoRequest &request);

      /**
       * @summary Modifies a namespace.
       *
       * @description This topic provides an example on how to change the data retention period of the `aliyun` namespace to `cms.s1.2xlarge`. The response shows that the namespace is modified.
       *
       * @param request ModifyHybridMonitorNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridMonitorNamespaceResponse
       */
      Models::ModifyHybridMonitorNamespaceResponse modifyHybridMonitorNamespaceWithOptions(const Models::ModifyHybridMonitorNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a namespace.
       *
       * @description This topic provides an example on how to change the data retention period of the `aliyun` namespace to `cms.s1.2xlarge`. The response shows that the namespace is modified.
       *
       * @param request ModifyHybridMonitorNamespaceRequest
       * @return ModifyHybridMonitorNamespaceResponse
       */
      Models::ModifyHybridMonitorNamespaceResponse modifyHybridMonitorNamespace(const Models::ModifyHybridMonitorNamespaceRequest &request);

      /**
       * @summary Modifies a Logstore group.
       *
       * @description In this example, a Logstore group named `Logstore_test` is modified. The Logstore of the `aliyun-project` project in the `cn-hangzhou` region is changed to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
       *
       * @param request ModifyHybridMonitorSLSGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridMonitorSLSGroupResponse
       */
      Models::ModifyHybridMonitorSLSGroupResponse modifyHybridMonitorSLSGroupWithOptions(const Models::ModifyHybridMonitorSLSGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Logstore group.
       *
       * @description In this example, a Logstore group named `Logstore_test` is modified. The Logstore of the `aliyun-project` project in the `cn-hangzhou` region is changed to `Logstore-aliyun-all`. The response shows that the Logstore group is modified.
       *
       * @param request ModifyHybridMonitorSLSGroupRequest
       * @return ModifyHybridMonitorSLSGroupResponse
       */
      Models::ModifyHybridMonitorSLSGroupResponse modifyHybridMonitorSLSGroup(const Models::ModifyHybridMonitorSLSGroupRequest &request);

      /**
       * @summary Modifies a metric for the logs that are imported from Log Service.
       *
       * @description This topic provides an example on how to change the collection period of a metric import task whose ID is `36****` to `15` seconds. The task is used to monitor the logs that are imported from Log Service. The returned result indicates that the metric is modified.
       *
       * @param request ModifyHybridMonitorTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyHybridMonitorTaskResponse
       */
      Models::ModifyHybridMonitorTaskResponse modifyHybridMonitorTaskWithOptions(const Models::ModifyHybridMonitorTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a metric for the logs that are imported from Log Service.
       *
       * @description This topic provides an example on how to change the collection period of a metric import task whose ID is `36****` to `15` seconds. The task is used to monitor the logs that are imported from Log Service. The returned result indicates that the metric is modified.
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
       * @param request ModifyMonitorGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMonitorGroupResponse
       */
      Models::ModifyMonitorGroupResponse modifyMonitorGroupWithOptions(const Models::ModifyMonitorGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ModifyMonitorGroupRequest
       * @return ModifyMonitorGroupResponse
       */
      Models::ModifyMonitorGroupResponse modifyMonitorGroup(const Models::ModifyMonitorGroupRequest &request);

      /**
       * @summary ModifyMonitorGroupInstances
       *
       * @param request ModifyMonitorGroupInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMonitorGroupInstancesResponse
       */
      Models::ModifyMonitorGroupInstancesResponse modifyMonitorGroupInstancesWithOptions(const Models::ModifyMonitorGroupInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ModifyMonitorGroupInstances
       *
       * @param request ModifyMonitorGroupInstancesRequest
       * @return ModifyMonitorGroupInstancesResponse
       */
      Models::ModifyMonitorGroupInstancesResponse modifyMonitorGroupInstances(const Models::ModifyMonitorGroupInstancesRequest &request);

      /**
       * @summary Modifies a site monitoring task.
       *
       * @description The number of site monitoring tasks.
       *
       * @param request ModifySiteMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySiteMonitorResponse
       */
      Models::ModifySiteMonitorResponse modifySiteMonitorWithOptions(const Models::ModifySiteMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a site monitoring task.
       *
       * @description The number of site monitoring tasks.
       *
       * @param request ModifySiteMonitorRequest
       * @return ModifySiteMonitorResponse
       */
      Models::ModifySiteMonitorResponse modifySiteMonitor(const Models::ModifySiteMonitorRequest &request);

      /**
       * @summary Creates or modifies an alert contact.
       *
       * @param request PutContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutContactResponse
       */
      Models::PutContactResponse putContactWithOptions(const Models::PutContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert contact.
       *
       * @param request PutContactRequest
       * @return PutContactResponse
       */
      Models::PutContactResponse putContact(const Models::PutContactRequest &request);

      /**
       * @summary Creates or modifies an alert contact group.
       *
       * @description This topic provides an example on how to create an alert contact group named `ECS_Group`.
       *
       * @param request PutContactGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutContactGroupResponse
       */
      Models::PutContactGroupResponse putContactGroupWithOptions(const Models::PutContactGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert contact group.
       *
       * @description This topic provides an example on how to create an alert contact group named `ECS_Group`.
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
       * @description Before you call this operation, call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
       *
       * @param request PutCustomEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCustomEventRuleResponse
       */
      Models::PutCustomEventRuleResponse putCustomEventRuleWithOptions(const Models::PutCustomEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @description Before you call this operation, call the PutCustomEvent operation to report the monitoring data of the custom event. For more information, see [PutCustomEvent](https://help.aliyun.com/document_detail/115012.html).
       *
       * @param request PutCustomEventRuleRequest
       * @return PutCustomEventRuleResponse
       */
      Models::PutCustomEventRuleResponse putCustomEventRule(const Models::PutCustomEventRuleRequest &request);

      /**
       * @summary Reports monitoring data.
       *
       * @description >  We recommend that you call the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation of Hybrid Cloud Monitoring to report monitoring data.
       *
       * @param request PutCustomMetricRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCustomMetricResponse
       */
      Models::PutCustomMetricResponse putCustomMetricWithOptions(const Models::PutCustomMetricRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports monitoring data.
       *
       * @description >  We recommend that you call the [PutHybridMonitorMetricData](https://help.aliyun.com/document_detail/383455.html) operation of Hybrid Cloud Monitoring to report monitoring data.
       *
       * @param request PutCustomMetricRequest
       * @return PutCustomMetricResponse
       */
      Models::PutCustomMetricResponse putCustomMetric(const Models::PutCustomMetricRequest &request);

      /**
       * @summary Creates a custom alert rule.
       *
       * @description Before you call this operation, call the PutCustomMetric operation to report custom monitoring data. For more information, see [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html).
       *
       * @param request PutCustomMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutCustomMetricRuleResponse
       */
      Models::PutCustomMetricRuleResponse putCustomMetricRuleWithOptions(const Models::PutCustomMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom alert rule.
       *
       * @description Before you call this operation, call the PutCustomMetric operation to report custom monitoring data. For more information, see [PutCustomMetric](https://help.aliyun.com/document_detail/115004.html).
       *
       * @param request PutCustomMetricRuleRequest
       * @return PutCustomMetricRuleResponse
       */
      Models::PutCustomMetricRuleResponse putCustomMetricRule(const Models::PutCustomMetricRuleRequest &request);

      /**
       * @summary 创建或者修改事件监控
       *
       * @description If the specified rule name does not exist, an event-triggered alert rule is created. If the specified rule name exists, the specified event-triggered alert rule is modified.
       * In this example, the `myRuleName` alert rule is created for the `ecs` cloud service.
       *
       * @param request PutEventRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutEventRuleResponse
       */
      Models::PutEventRuleResponse putEventRuleWithOptions(const Models::PutEventRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建或者修改事件监控
       *
       * @description If the specified rule name does not exist, an event-triggered alert rule is created. If the specified rule name exists, the specified event-triggered alert rule is modified.
       * In this example, the `myRuleName` alert rule is created for the `ecs` cloud service.
       *
       * @param request PutEventRuleRequest
       * @return PutEventRuleResponse
       */
      Models::PutEventRuleResponse putEventRule(const Models::PutEventRuleRequest &request);

      /**
       * @summary Adds or modifies the push channels of an event-triggered alert rule.
       *
       * @param request PutEventRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutEventRuleTargetsResponse
       */
      Models::PutEventRuleTargetsResponse putEventRuleTargetsWithOptions(const Models::PutEventRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies the push channels of an event-triggered alert rule.
       *
       * @param request PutEventRuleTargetsRequest
       * @return PutEventRuleTargetsResponse
       */
      Models::PutEventRuleTargetsResponse putEventRuleTargets(const Models::PutEventRuleTargetsRequest &request);

      /**
       * @summary Creates or modifies a configuration set for exporting monitoring data.
       *
       * @description > The monitoring data can be exported only to Log Service. More services will be supported in the future.
       *
       * @param request PutExporterOutputRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutExporterOutputResponse
       */
      Models::PutExporterOutputResponse putExporterOutputWithOptions(const Models::PutExporterOutputRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a configuration set for exporting monitoring data.
       *
       * @description > The monitoring data can be exported only to Log Service. More services will be supported in the future.
       *
       * @param request PutExporterOutputRequest
       * @return PutExporterOutputResponse
       */
      Models::PutExporterOutputResponse putExporterOutput(const Models::PutExporterOutputRequest &request);

      /**
       * @summary Creates or modifies a data export rule.
       *
       * @param request PutExporterRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutExporterRuleResponse
       */
      Models::PutExporterRuleResponse putExporterRuleWithOptions(const Models::PutExporterRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a data export rule.
       *
       * @param request PutExporterRuleRequest
       * @return PutExporterRuleResponse
       */
      Models::PutExporterRuleResponse putExporterRule(const Models::PutExporterRuleRequest &request);

      /**
       * @summary Creates or modifies an alert rule for an application group.
       *
       * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `17285****` application group. The ID of the alert rule is `123456`. The name of the alert rule is `Rule_test`. The alert level is `Critical`. The statistical method is `Average`. The alert threshold comparator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The returned result shows that the alert rule is created and the alert rule ID is `123456`.
       *
       * @param request PutGroupMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutGroupMetricRuleResponse
       */
      Models::PutGroupMetricRuleResponse putGroupMetricRuleWithOptions(const Models::PutGroupMetricRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies an alert rule for an application group.
       *
       * @description This topic provides an example on how to create an alert rule for the `cpu_total` metric of Elastic Compute Service (ECS) in the `17285****` application group. The ID of the alert rule is `123456`. The name of the alert rule is `Rule_test`. The alert level is `Critical`. The statistical method is `Average`. The alert threshold comparator is `GreaterThanOrEqualToThreshold`. The alert threshold is `90`. The number of alert retries is `3`. The returned result shows that the alert rule is created and the alert rule ID is `123456`.
       *
       * @param request PutGroupMetricRuleRequest
       * @return PutGroupMetricRuleResponse
       */
      Models::PutGroupMetricRuleResponse putGroupMetricRule(const Models::PutGroupMetricRuleRequest &request);

      /**
       * @summary Imports the monitoring data of a metric to a namespace of Hybrid Cloud Monitoring.
       *
       * @description ## [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## [](#)Limits
       * The size of the monitoring data that you import at a time must be less than or equal to 1 MB.
       * ## [](#)Operation description
       * This topic provides an example on how to import the monitoring data of the `CPU_Usage` metric to the `default-aliyun` namespace of Hybrid Cloud Monitoring.
       *
       * @param request PutHybridMonitorMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutHybridMonitorMetricDataResponse
       */
      Models::PutHybridMonitorMetricDataResponse putHybridMonitorMetricDataWithOptions(const Models::PutHybridMonitorMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports the monitoring data of a metric to a namespace of Hybrid Cloud Monitoring.
       *
       * @description ## [](#)Prerequisites
       * Hybrid Cloud Monitoring is activated. For more information, see [Activate Hybrid Cloud Monitoring](https://help.aliyun.com/document_detail/250773.html).
       * ## [](#)Limits
       * The size of the monitoring data that you import at a time must be less than or equal to 1 MB.
       * ## [](#)Operation description
       * This topic provides an example on how to import the monitoring data of the `CPU_Usage` metric to the `default-aliyun` namespace of Hybrid Cloud Monitoring.
       *
       * @param request PutHybridMonitorMetricDataRequest
       * @return PutHybridMonitorMetricDataResponse
       */
      Models::PutHybridMonitorMetricDataResponse putHybridMonitorMetricData(const Models::PutHybridMonitorMetricDataRequest &request);

      /**
       * @summary Creates or modifies a log monitoring metric.
       *
       * @description In the example of this topic, the `cpu_total` log monitoring metric is created. The response shows that the log monitoring metric is created and the metric ID is `16****`.
       *
       * @param request PutLogMonitorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutLogMonitorResponse
       */
      Models::PutLogMonitorResponse putLogMonitorWithOptions(const Models::PutLogMonitorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates or modifies a log monitoring metric.
       *
       * @description In the example of this topic, the `cpu_total` log monitoring metric is created. The response shows that the log monitoring metric is created and the metric ID is `16****`.
       *
       * @param request PutLogMonitorRequest
       * @return PutLogMonitorResponse
       */
      Models::PutLogMonitorResponse putLogMonitor(const Models::PutLogMonitorRequest &request);

      /**
       * @summary Adds or modifies the push channels of an alert rule.
       *
       * @description # [](#)
       * This topic provides an example on how to associate an alert rule with a resource. In this example, the alert rule is `ae06917_75a8c43178ab66****`, the resource is `acs:mns:cn-hangzhou:120886317861****:/queues/test/message`, and the ID of the resource for which alerts are triggered is `1`. The response indicates that the resource is associated with the specified alert rule.
       *
       * @param request PutMetricRuleTargetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutMetricRuleTargetsResponse
       */
      Models::PutMetricRuleTargetsResponse putMetricRuleTargetsWithOptions(const Models::PutMetricRuleTargetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds or modifies the push channels of an alert rule.
       *
       * @description # [](#)
       * This topic provides an example on how to associate an alert rule with a resource. In this example, the alert rule is `ae06917_75a8c43178ab66****`, the resource is `acs:mns:cn-hangzhou:120886317861****:/queues/test/message`, and the ID of the resource for which alerts are triggered is `1`. The response indicates that the resource is associated with the specified alert rule.
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
       * @summary Configures an alert rule.
       *
       * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
       * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
       *
       * @param tmpReq PutResourceMetricRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutResourceMetricRuleResponse
       */
      Models::PutResourceMetricRuleResponse putResourceMetricRuleWithOptions(const Models::PutResourceMetricRuleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures an alert rule.
       *
       * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
       * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
       *
       * @param request PutResourceMetricRuleRequest
       * @return PutResourceMetricRuleResponse
       */
      Models::PutResourceMetricRuleResponse putResourceMetricRule(const Models::PutResourceMetricRuleRequest &request);

      /**
       * @summary Creates multiple alert rules for the specified metric of a specified resource.
       *
       * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
       * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
       *
       * @param request PutResourceMetricRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutResourceMetricRulesResponse
       */
      Models::PutResourceMetricRulesResponse putResourceMetricRulesWithOptions(const Models::PutResourceMetricRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates multiple alert rules for the specified metric of a specified resource.
       *
       * @description This topic provides an example on how to create a threshold-triggered alert rule for the `cpu_total` metric of an Elastic Compute Service (ECS) instance whose ID is `i-uf6j91r34rnwawoo****`. The namespace of ECS metrics is `acs_ecs_dashboard`. The alert contact group of the alert rule is `ECS_Group`. The name of the alert rule is `test123`. The ID of the alert rule is `a151cd6023eacee2f0978e03863cc1697c89508****`. The statistical method for Critical-level alerts is `Average`. The comparison operator for Critical-level alerts is `GreaterThanOrEqualToThreshold`. The threshold for Critical-level alerts is `90`. The consecutive number of times for which the metric value meets the trigger condition before a Critical-level alert is triggered is `3`.
       * >  Statistics verification was added on August 15, 2024. Only the statistical value of the corresponding metric can be set for the Statistics parameter. For more information about how to obtain the value of this parameter, see [Appendix 1: Metrics](https://www.alibabacloud.com/help/en/cms/support/appendix-1-metrics).
       *
       * @param request PutResourceMetricRulesRequest
       * @return PutResourceMetricRulesResponse
       */
      Models::PutResourceMetricRulesResponse putResourceMetricRules(const Models::PutResourceMetricRulesRequest &request);

      /**
       * @summary Deletes tags.
       *
       * @param request RemoveTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTagsWithOptions(const Models::RemoveTagsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes tags.
       *
       * @param request RemoveTagsRequest
       * @return RemoveTagsResponse
       */
      Models::RemoveTagsResponse removeTags(const Models::RemoveTagsRequest &request);

      /**
       * @summary Debugs a system event of an Alibaba Cloud service.
       *
       * @description This operation is used to test whether a system event can be triggered as expected. You can call this operation to simulate a system event and check whether an expected response is returned after the system event triggers an alert.
       *
       * @param request SendDryRunSystemEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendDryRunSystemEventResponse
       */
      Models::SendDryRunSystemEventResponse sendDryRunSystemEventWithOptions(const Models::SendDryRunSystemEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Debugs a system event of an Alibaba Cloud service.
       *
       * @description This operation is used to test whether a system event can be triggered as expected. You can call this operation to simulate a system event and check whether an expected response is returned after the system event triggers an alert.
       *
       * @param request SendDryRunSystemEventRequest
       * @return SendDryRunSystemEventResponse
       */
      Models::SendDryRunSystemEventResponse sendDryRunSystemEvent(const Models::SendDryRunSystemEventRequest &request);

      /**
       * @summary Uninstalls the CloudMonitor agent from a third-party host.
       *
       * @description >  This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request UninstallMonitoringAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UninstallMonitoringAgentResponse
       */
      Models::UninstallMonitoringAgentResponse uninstallMonitoringAgentWithOptions(const Models::UninstallMonitoringAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls the CloudMonitor agent from a third-party host.
       *
       * @description >  This API operation is not applicable to Elastic Compute Service (ECS) instances. To uninstall the agent from an ECS instance, see [Install and uninstall the CloudMonitor agent](https://help.aliyun.com/document_detail/183482.html).
       *
       * @param request UninstallMonitoringAgentRequest
       * @return UninstallMonitoringAgentResponse
       */
      Models::UninstallMonitoringAgentResponse uninstallMonitoringAgent(const Models::UninstallMonitoringAgentRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
