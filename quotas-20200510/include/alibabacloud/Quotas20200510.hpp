// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QUOTAS20200510_HPP_
#define ALIBABACLOUD_QUOTAS20200510_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Quotas20200510Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Quotas20200510.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a quota alert.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to create a quota alert of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request CreateQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaAlarmResponse
       */
      Models::CreateQuotaAlarmResponse createQuotaAlarmWithOptions(const Models::CreateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quota alert.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to create a quota alert of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request CreateQuotaAlarmRequest
       * @return CreateQuotaAlarmResponse
       */
      Models::CreateQuotaAlarmResponse createQuotaAlarm(const Models::CreateQuotaAlarmRequest &request);

      /**
       * @summary Submits an application to increase a quota.
       *
       * @description In this example, the operation is called to submit an application to increase the value of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. The quota belongs to Elastic Compute Service (ECS). The expected value of the quota is `804`, the application reason is `Scale Out`, and the ID of the region to which the quota belongs is `cn-hangzhou`.
       *
       * @param request CreateQuotaApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaApplicationResponse
       */
      Models::CreateQuotaApplicationResponse createQuotaApplicationWithOptions(const Models::CreateQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an application to increase a quota.
       *
       * @description In this example, the operation is called to submit an application to increase the value of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. The quota belongs to Elastic Compute Service (ECS). The expected value of the quota is `804`, the application reason is `Scale Out`, and the ID of the region to which the quota belongs is `cn-hangzhou`.
       *
       * @param request CreateQuotaApplicationRequest
       * @return CreateQuotaApplicationResponse
       */
      Models::CreateQuotaApplicationResponse createQuotaApplication(const Models::CreateQuotaApplicationRequest &request);

      /**
       * @summary Submits a quota increase application. After you add a quota item to a quota template, the system automatically submits quota applications only for new members of the resource directory. The quota values for existing members remain unchanged. If you want to increase the quota values of existing members, you can submit a quota application for the members by applying quota templates to the members. Only the management account of a resource directory can create multiple quota applications at a time.
       *
       * @description ### [](#)QPS limit
       * You can add a maximum of 10 quota items to a quota template at a time.
       *
       * @param request CreateQuotaApplicationsForTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaApplicationsForTemplateResponse
       */
      Models::CreateQuotaApplicationsForTemplateResponse createQuotaApplicationsForTemplateWithOptions(const Models::CreateQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a quota increase application. After you add a quota item to a quota template, the system automatically submits quota applications only for new members of the resource directory. The quota values for existing members remain unchanged. If you want to increase the quota values of existing members, you can submit a quota application for the members by applying quota templates to the members. Only the management account of a resource directory can create multiple quota applications at a time.
       *
       * @description ### [](#)QPS limit
       * You can add a maximum of 10 quota items to a quota template at a time.
       *
       * @param request CreateQuotaApplicationsForTemplateRequest
       * @return CreateQuotaApplicationsForTemplateResponse
       */
      Models::CreateQuotaApplicationsForTemplateResponse createQuotaApplicationsForTemplate(const Models::CreateQuotaApplicationsForTemplateRequest &request);

      /**
       * @summary Creates a quota template by using the management account of a resource directory. After you create a quota template, if a member is added to the resource directory, the quota template automatically submits a quota increase request for the member. The quota values for existing members remain unchanged. You can use a quota template to apply for increases on multiple quotas at the same time. This automated approach improves the efficiency of quota management across your organization. Only the management account of a resource directory can create quota templates.
       *
       * @description ### [](#)Usage notes
       * You must set the `ServiceStatus` parameter to `1`. This ensures that the quota template is enabled.
       * You can call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of a quota template. If the value of the `ServiceStatus` parameter in the response is `0` or `-1`, you must call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to modify the value to `1`. A value of 0 indicates that the quota template is not configured. A value of -1 indicates that the quota template is disabled. A value of 1 indicates that the quota template is enabled.
       * ### [](#)
       * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If the value of the `Status` parameter in the response is `Agree`, the quota template is approved.
       *
       * @param request CreateTemplateQuotaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateQuotaItemResponse
       */
      Models::CreateTemplateQuotaItemResponse createTemplateQuotaItemWithOptions(const Models::CreateTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quota template by using the management account of a resource directory. After you create a quota template, if a member is added to the resource directory, the quota template automatically submits a quota increase request for the member. The quota values for existing members remain unchanged. You can use a quota template to apply for increases on multiple quotas at the same time. This automated approach improves the efficiency of quota management across your organization. Only the management account of a resource directory can create quota templates.
       *
       * @description ### [](#)Usage notes
       * You must set the `ServiceStatus` parameter to `1`. This ensures that the quota template is enabled.
       * You can call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of a quota template. If the value of the `ServiceStatus` parameter in the response is `0` or `-1`, you must call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to modify the value to `1`. A value of 0 indicates that the quota template is not configured. A value of -1 indicates that the quota template is disabled. A value of 1 indicates that the quota template is enabled.
       * ### [](#)
       * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If the value of the `Status` parameter in the response is `Agree`, the quota template is approved.
       *
       * @param request CreateTemplateQuotaItemRequest
       * @return CreateTemplateQuotaItemResponse
       */
      Models::CreateTemplateQuotaItemResponse createTemplateQuotaItem(const Models::CreateTemplateQuotaItemRequest &request);

      /**
       * @summary Deletes a quota alert.
       *
       * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to delete a quota alert rule of the old version. If you want to delete a quota alert rule of the new version, call the CloudMonitor API operation [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) or [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       * *   In this example, the API operation is called to delete a quota alert rule whose ID is `6b512ab7-da3a-4142-b529-2b2a9294****`.
       *
       * @param request DeleteQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaAlarmResponse
       */
      Models::DeleteQuotaAlarmResponse deleteQuotaAlarmWithOptions(const Models::DeleteQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quota alert.
       *
       * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to delete a quota alert rule of the old version. If you want to delete a quota alert rule of the new version, call the CloudMonitor API operation [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) or [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       * *   In this example, the API operation is called to delete a quota alert rule whose ID is `6b512ab7-da3a-4142-b529-2b2a9294****`.
       *
       * @param request DeleteQuotaAlarmRequest
       * @return DeleteQuotaAlarmResponse
       */
      Models::DeleteQuotaAlarmResponse deleteQuotaAlarm(const Models::DeleteQuotaAlarmRequest &request);

      /**
       * @summary Deletes a quota template by using the management account of a resource directory. After you delete a quota template, if a member is added to the resource directory, the quota template no longer automatically submits a quota increase request for the member. Only the management account of a resource directory can delete quota templates.
       *
       * @param request DeleteTemplateQuotaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateQuotaItemResponse
       */
      Models::DeleteTemplateQuotaItemResponse deleteTemplateQuotaItemWithOptions(const Models::DeleteTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quota template by using the management account of a resource directory. After you delete a quota template, if a member is added to the resource directory, the quota template no longer automatically submits a quota increase request for the member. Only the management account of a resource directory can delete quota templates.
       *
       * @param request DeleteTemplateQuotaItemRequest
       * @return DeleteTemplateQuotaItemResponse
       */
      Models::DeleteTemplateQuotaItemResponse deleteTemplateQuotaItem(const Models::DeleteTemplateQuotaItemRequest &request);

      /**
       * @summary Queries the details of a quota of a cloud service.
       *
       * @description In this example, the operation is called to query the details of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. This quota belongs to Elastic Compute Service (ECS). The query result shows the details of the quota. The details include the name, ID, description, quota value, used quota, unit, and dimension of the quota. In this example, the quota name is `Maximum Number of Security Groups`. The quota ID is `q_security-groups`. The description is `The maximum number of security groups that can be created for the current account`. The quota value is `801`. The used quota is `26`. The quota unit is `Number of security groups`. The quota dimension is `{"regionId":"cn-hangzhou"}`.
       *
       * @param request GetProductQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductQuotaResponse
       */
      Models::GetProductQuotaResponse getProductQuotaWithOptions(const Models::GetProductQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a quota of a cloud service.
       *
       * @description In this example, the operation is called to query the details of a quota whose ID is `q_security-groups` and whose name is Maximum Number of Security Groups. This quota belongs to Elastic Compute Service (ECS). The query result shows the details of the quota. The details include the name, ID, description, quota value, used quota, unit, and dimension of the quota. In this example, the quota name is `Maximum Number of Security Groups`. The quota ID is `q_security-groups`. The description is `The maximum number of security groups that can be created for the current account`. The quota value is `801`. The used quota is `26`. The quota unit is `Number of security groups`. The quota dimension is `{"regionId":"cn-hangzhou"}`.
       *
       * @param request GetProductQuotaRequest
       * @return GetProductQuotaResponse
       */
      Models::GetProductQuotaResponse getProductQuota(const Models::GetProductQuotaRequest &request);

      /**
       * @summary Queries the details of a quota dimension that is supported by an Alibaba Cloud service.
       *
       * @description In this example, the operation is called to query the details of a quota dimension whose key is `regionId`. The quota dimension belongs to Elastic Compute Service (ECS) Quotas by Instance Type whose service code is ecs-spec. The following query results are returned:
       * *   The values of the quota dimension include `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
       * *   The name of the quota dimension is `region`.
       *
       * @param request GetProductQuotaDimensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductQuotaDimensionResponse
       */
      Models::GetProductQuotaDimensionResponse getProductQuotaDimensionWithOptions(const Models::GetProductQuotaDimensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a quota dimension that is supported by an Alibaba Cloud service.
       *
       * @description In this example, the operation is called to query the details of a quota dimension whose key is `regionId`. The quota dimension belongs to Elastic Compute Service (ECS) Quotas by Instance Type whose service code is ecs-spec. The following query results are returned:
       * *   The values of the quota dimension include `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
       * *   The name of the quota dimension is `region`.
       *
       * @param request GetProductQuotaDimensionRequest
       * @return GetProductQuotaDimensionResponse
       */
      Models::GetProductQuotaDimensionResponse getProductQuotaDimension(const Models::GetProductQuotaDimensionRequest &request);

      /**
       * @summary In this example, the operation is called to query the details of a quota alert. The details of the alert are returned. The query results include the alert ID, alert name, alert contact, and time when the quota alert was created.
       *
       * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the details about the quota alert rules of the old version. If you want to query the details about the quota alert rules of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
       * *   In this example, the operation is called to query the details of a quota alert rule whose ID is `78d7e436-4b25-4897-84b5-d7b656bb****`. The details of the alert rule are returned. The query result includes the alert ID, alert name, alert contact, and the time when the quota alert rule was created.
       *
       * @param request GetQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaAlarmResponse
       */
      Models::GetQuotaAlarmResponse getQuotaAlarmWithOptions(const Models::GetQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary In this example, the operation is called to query the details of a quota alert. The details of the alert are returned. The query results include the alert ID, alert name, alert contact, and time when the quota alert was created.
       *
       * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the details about the quota alert rules of the old version. If you want to query the details about the quota alert rules of the new version, call CloudMonitor API operations. For more information, see [Use API operations to manage new quota alert rules](https://help.aliyun.com/document_detail/2863234.html).
       * *   In this example, the operation is called to query the details of a quota alert rule whose ID is `78d7e436-4b25-4897-84b5-d7b656bb****`. The details of the alert rule are returned. The query result includes the alert ID, alert name, alert contact, and the time when the quota alert rule was created.
       *
       * @param request GetQuotaAlarmRequest
       * @return GetQuotaAlarmResponse
       */
      Models::GetQuotaAlarmResponse getQuotaAlarm(const Models::GetQuotaAlarmRequest &request);

      /**
       * @summary Queries the details about a specified application that is submitted to increase a quota.
       *
       * @description In this example, the operation is called to query the details about an application whose ID is `d314d6ae-867d-484c-9009-3d421a80****`. The query result shows the details about the application. The details include the application ID, application time, expected quota value, and application result.
       *
       * @param request GetQuotaApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaApplicationResponse
       */
      Models::GetQuotaApplicationResponse getQuotaApplicationWithOptions(const Models::GetQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a specified application that is submitted to increase a quota.
       *
       * @description In this example, the operation is called to query the details about an application whose ID is `d314d6ae-867d-484c-9009-3d421a80****`. The query result shows the details about the application. The details include the application ID, application time, expected quota value, and application result.
       *
       * @param request GetQuotaApplicationRequest
       * @return GetQuotaApplicationResponse
       */
      Models::GetQuotaApplicationResponse getQuotaApplication(const Models::GetQuotaApplicationRequest &request);

      /**
       * @summary Queries the information about quota application approval, such as the average amount of time required for approval, whether approval reminders are supported, and the interval between two consecutive approval reminders.
       *
       * @description ### [](#)Prerequisites
       * Make sure that you have created an application for quota increase. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
       *
       * @param request GetQuotaApplicationApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaApplicationApprovalResponse
       */
      Models::GetQuotaApplicationApprovalResponse getQuotaApplicationApprovalWithOptions(const Models::GetQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about quota application approval, such as the average amount of time required for approval, whether approval reminders are supported, and the interval between two consecutive approval reminders.
       *
       * @description ### [](#)Prerequisites
       * Make sure that you have created an application for quota increase. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
       *
       * @param request GetQuotaApplicationApprovalRequest
       * @return GetQuotaApplicationApprovalResponse
       */
      Models::GetQuotaApplicationApprovalResponse getQuotaApplicationApproval(const Models::GetQuotaApplicationApprovalRequest &request);

      /**
       * @summary Queries the status of a quota template.
       *
       * @description By default, the value of `ServiceStatus` is `0`, which indicates that no quota template is specified. If you want to use a quota template, make sure that the quota template is enabled. In this case, the value of `ServiceStatus` is `1`.
       *
       * @param request GetQuotaTemplateServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaTemplateServiceStatusResponse
       */
      Models::GetQuotaTemplateServiceStatusResponse getQuotaTemplateServiceStatusWithOptions(const Models::GetQuotaTemplateServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a quota template.
       *
       * @description By default, the value of `ServiceStatus` is `0`, which indicates that no quota template is specified. If you want to use a quota template, make sure that the quota template is enabled. In this case, the value of `ServiceStatus` is `1`.
       *
       * @param request GetQuotaTemplateServiceStatusRequest
       * @return GetQuotaTemplateServiceStatusResponse
       */
      Models::GetQuotaTemplateServiceStatusResponse getQuotaTemplateServiceStatus(const Models::GetQuotaTemplateServiceStatusRequest &request);

      /**
       * @summary Queries the alert records.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the historical records of quota alert rules of the old version. If you want to query the historical records of quota alert rules of the new version, call the CloudMonitor API operation [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) or [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request ListAlarmHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlarmHistoriesResponse
       */
      Models::ListAlarmHistoriesResponse listAlarmHistoriesWithOptions(const Models::ListAlarmHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alert records.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query the historical records of quota alert rules of the old version. If you want to query the historical records of quota alert rules of the new version, call the CloudMonitor API operation [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) or [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request ListAlarmHistoriesRequest
       * @return ListAlarmHistoriesResponse
       */
      Models::ListAlarmHistoriesResponse listAlarmHistories(const Models::ListAlarmHistoriesRequest &request);

      /**
       * @summary Queries the quotas on which a specified quota depends.
       *
       * @description In this example, the operation is called to query the quotas on which a Container Service for Kubernetes (ACK) quota whose ID is `q_i5uzm3` depends. This quota is the maximum number of nodes that can be created in an ACK cluster. The query result indicates that the specified quota depends on the following three quotas:
       * *   An Elastic Compute Service (ECS) quota whose ID is `q_elastic-network-interfaces`. This quota is the maximum number of ENIs (Secondary ENIs) that can be owned by an Alibaba Cloud account. The quota is available in the following regions: `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
       * *   A Server Load Balancer (SLB) quota whose ID is `q_fh20b0`. This quota is the number of servers that can be attached to the backend of an SLB instance.
       * *   An SLB quota whose ID is `q_3mmbsp`. This quota is the number of SLB instances that can be owned by an Alibaba Cloud account.
       *
       * @param request ListDependentQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDependentQuotasResponse
       */
      Models::ListDependentQuotasResponse listDependentQuotasWithOptions(const Models::ListDependentQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas on which a specified quota depends.
       *
       * @description In this example, the operation is called to query the quotas on which a Container Service for Kubernetes (ACK) quota whose ID is `q_i5uzm3` depends. This quota is the maximum number of nodes that can be created in an ACK cluster. The query result indicates that the specified quota depends on the following three quotas:
       * *   An Elastic Compute Service (ECS) quota whose ID is `q_elastic-network-interfaces`. This quota is the maximum number of ENIs (Secondary ENIs) that can be owned by an Alibaba Cloud account. The quota is available in the following regions: `cn-shenzhen`, `cn-beijing`, and `cn-hangzhou`.
       * *   A Server Load Balancer (SLB) quota whose ID is `q_fh20b0`. This quota is the number of servers that can be attached to the backend of an SLB instance.
       * *   An SLB quota whose ID is `q_3mmbsp`. This quota is the number of SLB instances that can be owned by an Alibaba Cloud account.
       *
       * @param request ListDependentQuotasRequest
       * @return ListDependentQuotasResponse
       */
      Models::ListDependentQuotasResponse listDependentQuotas(const Models::ListDependentQuotasRequest &request);

      /**
       * @summary Queries the dimension groups of an Alibaba Cloud service.
       *
       * @description This topic provides an example on how to call the ListProductDimensionGroups operation to query the dimension groups of Object Storage Service (OSS). In this example, a dimension group is returned. The group name is `OSS_Group`, the group code is `oss_wf1ngqmd7q`, and the group key is `chargeType`.
       *
       * @param request ListProductDimensionGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductDimensionGroupsResponse
       */
      Models::ListProductDimensionGroupsResponse listProductDimensionGroupsWithOptions(const Models::ListProductDimensionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the dimension groups of an Alibaba Cloud service.
       *
       * @description This topic provides an example on how to call the ListProductDimensionGroups operation to query the dimension groups of Object Storage Service (OSS). In this example, a dimension group is returned. The group name is `OSS_Group`, the group code is `oss_wf1ngqmd7q`, and the group key is `chargeType`.
       *
       * @param request ListProductDimensionGroupsRequest
       * @return ListProductDimensionGroupsResponse
       */
      Models::ListProductDimensionGroupsResponse listProductDimensionGroups(const Models::ListProductDimensionGroupsRequest &request);

      /**
       * @summary Queries the quota dimensions that are supported by the specified Alibaba Cloud service.
       *
       * @description In this example, the operation is called to query the quota dimensions that are supported by Elastic Compute Service (ECS). The query results show all the quota dimensions that are supported by ECS.
       *
       * @param request ListProductQuotaDimensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductQuotaDimensionsResponse
       */
      Models::ListProductQuotaDimensionsResponse listProductQuotaDimensionsWithOptions(const Models::ListProductQuotaDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota dimensions that are supported by the specified Alibaba Cloud service.
       *
       * @description In this example, the operation is called to query the quota dimensions that are supported by Elastic Compute Service (ECS). The query results show all the quota dimensions that are supported by ECS.
       *
       * @param request ListProductQuotaDimensionsRequest
       * @return ListProductQuotaDimensionsResponse
       */
      Models::ListProductQuotaDimensionsResponse listProductQuotaDimensions(const Models::ListProductQuotaDimensionsRequest &request);

      /**
       * @summary Queries the quotas of a specific Alibaba Cloud service.
       *
       * @description In this example, the operation is called to query the quotas whose instance type is `ecs.g5.2xlarge`. The quotas belong to Elastic Compute Service (ECS) Quotas by Instance Type. The query result includes the name, ID, unit, dimensions, and cycle of each quota.
       *
       * @param request ListProductQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductQuotasResponse
       */
      Models::ListProductQuotasResponse listProductQuotasWithOptions(const Models::ListProductQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas of a specific Alibaba Cloud service.
       *
       * @description In this example, the operation is called to query the quotas whose instance type is `ecs.g5.2xlarge`. The quotas belong to Elastic Compute Service (ECS) Quotas by Instance Type. The query result includes the name, ID, unit, dimensions, and cycle of each quota.
       *
       * @param request ListProductQuotasRequest
       * @return ListProductQuotasResponse
       */
      Models::ListProductQuotasResponse listProductQuotas(const Models::ListProductQuotasRequest &request);

      /**
       * @summary Queries the Alibaba Cloud services that support Quota Center.
       *
       * @description The services in the query result are the same as the services listed in [Alibaba Cloud services that support Quota Center](https://help.aliyun.com/document_detail/182368.html).
       *
       * @param request ListProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Alibaba Cloud services that support Quota Center.
       *
       * @description The services in the query result are the same as the services listed in [Alibaba Cloud services that support Quota Center](https://help.aliyun.com/document_detail/182368.html).
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary Queries quota alerts.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query quota alert rules of the old version. If you want to query quota alert rules of the new version, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request ListQuotaAlarmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaAlarmsResponse
       */
      Models::ListQuotaAlarmsResponse listQuotaAlarmsWithOptions(const Models::ListQuotaAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quota alerts.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. You can call this operation only to query quota alert rules of the old version. If you want to query quota alert rules of the new version, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request ListQuotaAlarmsRequest
       * @return ListQuotaAlarmsResponse
       */
      Models::ListQuotaAlarmsResponse listQuotaAlarms(const Models::ListQuotaAlarmsRequest &request);

      /**
       * @summary Queries quota templates by using the management account of a resource directory.
       *
       * @param request ListQuotaApplicationTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaApplicationTemplatesResponse
       */
      Models::ListQuotaApplicationTemplatesResponse listQuotaApplicationTemplatesWithOptions(const Models::ListQuotaApplicationTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quota templates by using the management account of a resource directory.
       *
       * @param request ListQuotaApplicationTemplatesRequest
       * @return ListQuotaApplicationTemplatesResponse
       */
      Models::ListQuotaApplicationTemplatesResponse listQuotaApplicationTemplates(const Models::ListQuotaApplicationTemplatesRequest &request);

      /**
       * @summary Queries the details of an application that is submitted to increase a quota.
       *
       * @description In this example, the operation is called to query the details of an application that is submitted to increase a quota whose ID is `q_i5uzm3` and whose name is Maximum Number of Nodes. This quota belongs to Container Service for Kubernetes (ACK). The query result shows the details of the application. The details include the application ID, application time, requested quota, and application result. In this example, the application ID is `b926571d-cc09-4711-b547-58a615f0****`. The application time is `2021-01-15T09:13:53Z`. The expected quota value is `101`. The application result is `Agree`.
       *
       * @param request ListQuotaApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaApplicationsResponse
       */
      Models::ListQuotaApplicationsResponse listQuotaApplicationsWithOptions(const Models::ListQuotaApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an application that is submitted to increase a quota.
       *
       * @description In this example, the operation is called to query the details of an application that is submitted to increase a quota whose ID is `q_i5uzm3` and whose name is Maximum Number of Nodes. This quota belongs to Container Service for Kubernetes (ACK). The query result shows the details of the application. The details include the application ID, application time, requested quota, and application result. In this example, the application ID is `b926571d-cc09-4711-b547-58a615f0****`. The application time is `2021-01-15T09:13:53Z`. The expected quota value is `101`. The application result is `Agree`.
       *
       * @param request ListQuotaApplicationsRequest
       * @return ListQuotaApplicationsResponse
       */
      Models::ListQuotaApplicationsResponse listQuotaApplications(const Models::ListQuotaApplicationsRequest &request);

      /**
       * @summary Queries the details of a quota increase application for member accounts in a resource directory.
       *
       * @param request ListQuotaApplicationsDetailForTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaApplicationsDetailForTemplateResponse
       */
      Models::ListQuotaApplicationsDetailForTemplateResponse listQuotaApplicationsDetailForTemplateWithOptions(const Models::ListQuotaApplicationsDetailForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a quota increase application for member accounts in a resource directory.
       *
       * @param request ListQuotaApplicationsDetailForTemplateRequest
       * @return ListQuotaApplicationsDetailForTemplateResponse
       */
      Models::ListQuotaApplicationsDetailForTemplateResponse listQuotaApplicationsDetailForTemplate(const Models::ListQuotaApplicationsDetailForTemplateRequest &request);

      /**
       * @summary Queries the application records of a quota template that is used to apply for quotas for member accounts.
       *
       * @param request ListQuotaApplicationsForTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaApplicationsForTemplateResponse
       */
      Models::ListQuotaApplicationsForTemplateResponse listQuotaApplicationsForTemplateWithOptions(const Models::ListQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the application records of a quota template that is used to apply for quotas for member accounts.
       *
       * @param request ListQuotaApplicationsForTemplateRequest
       * @return ListQuotaApplicationsForTemplateResponse
       */
      Models::ListQuotaApplicationsForTemplateResponse listQuotaApplicationsForTemplate(const Models::ListQuotaApplicationsForTemplateRequest &request);

      /**
       * @summary Changes the status of a quota template. By default, the quota template is not configured. If the management account of a resource directory uses a quota template for the first time, you must enable the quota template. Only the management account of a resource directory can change the status of quota templates.
       *
       * @description ### [](#)Prerequisites
       * A resource directory is enabled. For more information, see [EnableResourceDirectory](https://help.aliyun.com/document_detail/604185.html).
       * ### [](#)Usage notes
       * If the `ServiceStatus` parameter is set to `0` or `-1`, you can call this operation to set the parameter to `1`. Then, you can call the [CreateTemplateQuotaItem](https://help.aliyun.com/document_detail/450615.html) operation to create a quota template.
       *
       * @param request ModifyQuotaTemplateServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyQuotaTemplateServiceStatusResponse
       */
      Models::ModifyQuotaTemplateServiceStatusResponse modifyQuotaTemplateServiceStatusWithOptions(const Models::ModifyQuotaTemplateServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a quota template. By default, the quota template is not configured. If the management account of a resource directory uses a quota template for the first time, you must enable the quota template. Only the management account of a resource directory can change the status of quota templates.
       *
       * @description ### [](#)Prerequisites
       * A resource directory is enabled. For more information, see [EnableResourceDirectory](https://help.aliyun.com/document_detail/604185.html).
       * ### [](#)Usage notes
       * If the `ServiceStatus` parameter is set to `0` or `-1`, you can call this operation to set the parameter to `1`. Then, you can call the [CreateTemplateQuotaItem](https://help.aliyun.com/document_detail/450615.html) operation to create a quota template.
       *
       * @param request ModifyQuotaTemplateServiceStatusRequest
       * @return ModifyQuotaTemplateServiceStatusResponse
       */
      Models::ModifyQuotaTemplateServiceStatusResponse modifyQuotaTemplateServiceStatus(const Models::ModifyQuotaTemplateServiceStatusRequest &request);

      /**
       * @summary The ID of the quota template.
       *
       * @param request ModifyTemplateQuotaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateQuotaItemResponse
       */
      Models::ModifyTemplateQuotaItemResponse modifyTemplateQuotaItemWithOptions(const Models::ModifyTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the quota template.
       *
       * @param request ModifyTemplateQuotaItemRequest
       * @return ModifyTemplateQuotaItemResponse
       */
      Models::ModifyTemplateQuotaItemResponse modifyTemplateQuotaItem(const Models::ModifyTemplateQuotaItemRequest &request);

      /**
       * @summary Reminds the approver of a quota application to review the application. This operation is applicable to quota applications that support the approval reminding feature.
       *
       * @description >  You can call this operation to enable the approval reminder feature for quota applications that support this feature. To check whether this feature is supported, you can view the value of `SupportReminder` in the GetQuotaApplicationApproval operation. If the value of SupportReminder is `true`, this feature is supported.
       *
       * @param request RemindQuotaApplicationApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemindQuotaApplicationApprovalResponse
       */
      Models::RemindQuotaApplicationApprovalResponse remindQuotaApplicationApprovalWithOptions(const Models::RemindQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reminds the approver of a quota application to review the application. This operation is applicable to quota applications that support the approval reminding feature.
       *
       * @description >  You can call this operation to enable the approval reminder feature for quota applications that support this feature. To check whether this feature is supported, you can view the value of `SupportReminder` in the GetQuotaApplicationApproval operation. If the value of SupportReminder is `true`, this feature is supported.
       *
       * @param request RemindQuotaApplicationApprovalRequest
       * @return RemindQuotaApplicationApprovalResponse
       */
      Models::RemindQuotaApplicationApprovalResponse remindQuotaApplicationApproval(const Models::RemindQuotaApplicationApprovalRequest &request);

      /**
       * @summary Modifies a quota alert rule.
       *
       * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to modify the information about a specific quota alert rule of the new version, call the CloudMonitor API operation [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) or [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       * *   In this example, the API operation is called to modify the information about a quota alert rule whose ID is `a2efa7fc-832f-47bb-8054-39e28012****` and whose name is `rules`. The alert threshold is changed from `150` to `160`.
       *
       * @param request UpdateQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaAlarmResponse
       */
      Models::UpdateQuotaAlarmResponse updateQuotaAlarmWithOptions(const Models::UpdateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a quota alert rule.
       *
       * @description *   The quota alerting feature has been upgraded and this API operation will be deprecated. If you want to modify the information about a specific quota alert rule of the new version, call the CloudMonitor API operation [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) or [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about how to call API operations to manage quota alert rules of the new version, see [Manage quota alerts of the new version by calling API operations](https://help.aliyun.com/document_detail/2863234.html).
       * *   In this example, the API operation is called to modify the information about a quota alert rule whose ID is `a2efa7fc-832f-47bb-8054-39e28012****` and whose name is `rules`. The alert threshold is changed from `150` to `160`.
       *
       * @param request UpdateQuotaAlarmRequest
       * @return UpdateQuotaAlarmResponse
       */
      Models::UpdateQuotaAlarmResponse updateQuotaAlarm(const Models::UpdateQuotaAlarmRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
