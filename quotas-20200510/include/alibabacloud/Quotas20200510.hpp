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
       * @summary Creates an alert rule for a quota item.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. Use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html) to create alert rules for the new version of quota alerting.
       * For more information about how to use API operations to manage the new version of quota alerting, see [Manage new quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request CreateQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaAlarmResponse
       */
      Models::CreateQuotaAlarmResponse createQuotaAlarmWithOptions(const Models::CreateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an alert rule for a quota item.
       *
       * @description The quota alerting feature has been upgraded and this API operation will be deprecated. Use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html) to create alert rules for the new version of quota alerting.
       * For more information about how to use API operations to manage the new version of quota alerting, see [Manage new quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request CreateQuotaAlarmRequest
       * @return CreateQuotaAlarmResponse
       */
      Models::CreateQuotaAlarmResponse createQuotaAlarm(const Models::CreateQuotaAlarmRequest &request);

      /**
       * @summary Creates a quota increase request.
       *
       * @description > After you create a quota increase request, you can call the [ListQuotaApplications](https://help.aliyun.com/document_detail/440568.html) operation to view the approval result. If the value of `Status` is `Agree`, the request is approved.
       *
       * @param request CreateQuotaApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaApplicationResponse
       */
      Models::CreateQuotaApplicationResponse createQuotaApplicationWithOptions(const Models::CreateQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quota increase request.
       *
       * @description > After you create a quota increase request, you can call the [ListQuotaApplications](https://help.aliyun.com/document_detail/440568.html) operation to view the approval result. If the value of `Status` is `Agree`, the request is approved.
       *
       * @param request CreateQuotaApplicationRequest
       * @return CreateQuotaApplicationResponse
       */
      Models::CreateQuotaApplicationResponse createQuotaApplication(const Models::CreateQuotaApplicationRequest &request);

      /**
       * @summary Creates batch quota increase applications for members in a resource folder. When you add a quota item to a quota template, only new members in the resource folder autocommit quota increase applications, and existing members remain unchanged. To increase quotas for existing members by using a quota template, you can select the quota template to commit batch quota increase applications for multiple members in the resource folder. Only the administrator account of the resource folder can create batch quota applications.
       *
       * @description ### Limits
       * A single application can include a maximum of 10 quota items.
       *
       * @param request CreateQuotaApplicationsForTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateQuotaApplicationsForTemplateResponse
       */
      Models::CreateQuotaApplicationsForTemplateResponse createQuotaApplicationsForTemplateWithOptions(const Models::CreateQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates batch quota increase applications for members in a resource folder. When you add a quota item to a quota template, only new members in the resource folder autocommit quota increase applications, and existing members remain unchanged. To increase quotas for existing members by using a quota template, you can select the quota template to commit batch quota increase applications for multiple members in the resource folder. Only the administrator account of the resource folder can create batch quota applications.
       *
       * @description ### Limits
       * A single application can include a maximum of 10 quota items.
       *
       * @param request CreateQuotaApplicationsForTemplateRequest
       * @return CreateQuotaApplicationsForTemplateResponse
       */
      Models::CreateQuotaApplicationsForTemplateResponse createQuotaApplicationsForTemplate(const Models::CreateQuotaApplicationsForTemplateRequest &request);

      /**
       * @summary Creates a quota template. After the management account creates a quota template, the template automatically submits quota increase applications for new members added to the resource directory. Existing members remain unaffected. You can use a quota template to apply for increases to multiple quota items at a time, improving the efficiency and automation of quota management across the organization. Only the management account of a resource directory can create a quota template.
       *
       * @description ### Before you begin
       * Make sure that the status of the quota template is enabled (that is, `ServiceStatus` is `1`).
       * Call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of the quota template. If the `ServiceStatus` of the quota template is `0` (not configured) or `-1` (disabled), call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to change the status to `1` (enabled).
       * ### Usage notes
       * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If `Status` is displayed as `Agree`, the application is approved.
       *
       * @param request CreateTemplateQuotaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTemplateQuotaItemResponse
       */
      Models::CreateTemplateQuotaItemResponse createTemplateQuotaItemWithOptions(const Models::CreateTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a quota template. After the management account creates a quota template, the template automatically submits quota increase applications for new members added to the resource directory. Existing members remain unaffected. You can use a quota template to apply for increases to multiple quota items at a time, improving the efficiency and automation of quota management across the organization. Only the management account of a resource directory can create a quota template.
       *
       * @description ### Before you begin
       * Make sure that the status of the quota template is enabled (that is, `ServiceStatus` is `1`).
       * Call the [GetQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450407.html) operation to query the status of the quota template. If the `ServiceStatus` of the quota template is `0` (not configured) or `-1` (disabled), call the [ModifyQuotaTemplateServiceStatus](https://help.aliyun.com/document_detail/450406.html) operation to change the status to `1` (enabled).
       * ### Usage notes
       * After you create a quota template, you can call the [ListQuotaApplicationsForTemplate](https://help.aliyun.com/document_detail/2584864.html) operation to view the approval result. If `Status` is displayed as `Agree`, the application is approved.
       *
       * @param request CreateTemplateQuotaItemRequest
       * @return CreateTemplateQuotaItemResponse
       */
      Models::CreateTemplateQuotaItemResponse createTemplateQuotaItem(const Models::CreateTemplateQuotaItemRequest &request);

      /**
       * @summary Deletes a quota usage alert.
       *
       * @description The quota alerting feature has been upgraded, and this API operation will be deprecated soon. This API operation can only delete legacy quota usage alerts. To delete new-version quota usage alerts, use the CloudMonitor API operations [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) and [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html).
       * For more information about managing new-version quota alerts by using API operations, see [Manage new-version quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request DeleteQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteQuotaAlarmResponse
       */
      Models::DeleteQuotaAlarmResponse deleteQuotaAlarmWithOptions(const Models::DeleteQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quota usage alert.
       *
       * @description The quota alerting feature has been upgraded, and this API operation will be deprecated soon. This API operation can only delete legacy quota usage alerts. To delete new-version quota usage alerts, use the CloudMonitor API operations [DeleteMetricRules](https://help.aliyun.com/document_detail/2513295.html) and [DeleteMetricRuleTargets](https://help.aliyun.com/document_detail/2513294.html).
       * For more information about managing new-version quota alerts by using API operations, see [Manage new-version quota alerts by using API operations](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request DeleteQuotaAlarmRequest
       * @return DeleteQuotaAlarmResponse
       */
      Models::DeleteQuotaAlarmResponse deleteQuotaAlarm(const Models::DeleteQuotaAlarmRequest &request);

      /**
       * @summary Deletes a quota template. After the management account deletes a quota template, the template no longer automatically submits quota increase requests for new members added to the resource directory. Only the management account of the resource directory can delete quota templates.
       *
       * @param request DeleteTemplateQuotaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTemplateQuotaItemResponse
       */
      Models::DeleteTemplateQuotaItemResponse deleteTemplateQuotaItemWithOptions(const Models::DeleteTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a quota template. After the management account deletes a quota template, the template no longer automatically submits quota increase requests for new members added to the resource directory. Only the management account of the resource directory can delete quota templates.
       *
       * @param request DeleteTemplateQuotaItemRequest
       * @return DeleteTemplateQuotaItemResponse
       */
      Models::DeleteTemplateQuotaItemResponse deleteTemplateQuotaItem(const Models::DeleteTemplateQuotaItemRequest &request);

      /**
       * @summary Queries the quota details of a specified cloud service.
       *
       * @param request GetProductQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductQuotaResponse
       */
      Models::GetProductQuotaResponse getProductQuotaWithOptions(const Models::GetProductQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota details of a specified cloud service.
       *
       * @param request GetProductQuotaRequest
       * @return GetProductQuotaResponse
       */
      Models::GetProductQuotaResponse getProductQuota(const Models::GetProductQuotaRequest &request);

      /**
       * @summary Queries the details of the quota dimensions supported by the target cloud service.
       *
       * @param request GetProductQuotaDimensionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductQuotaDimensionResponse
       */
      Models::GetProductQuotaDimensionResponse getProductQuotaDimensionWithOptions(const Models::GetProductQuotaDimensionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the quota dimensions supported by the target cloud service.
       *
       * @param request GetProductQuotaDimensionRequest
       * @return GetProductQuotaDimensionResponse
       */
      Models::GetProductQuotaDimensionResponse getProductQuotaDimension(const Models::GetProductQuotaDimensionRequest &request);

      /**
       * @summary Queries the details of a specified quota alert.
       *
       * @description The quota alert feature has been upgraded. This API operation will be deprecated soon. This API operation can only query the details of legacy quota usage alerts. To query the details of new-version quota usage alerts, use the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to use API operations to manage new-version quota alerts, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request GetQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaAlarmResponse
       */
      Models::GetQuotaAlarmResponse getQuotaAlarmWithOptions(const Models::GetQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified quota alert.
       *
       * @description The quota alert feature has been upgraded. This API operation will be deprecated soon. This API operation can only query the details of legacy quota usage alerts. To query the details of new-version quota usage alerts, use the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to use API operations to manage new-version quota alerts, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request GetQuotaAlarmRequest
       * @return GetQuotaAlarmResponse
       */
      Models::GetQuotaAlarmResponse getQuotaAlarm(const Models::GetQuotaAlarmRequest &request);

      /**
       * @summary Queries the details of a quota increase application.
       *
       * @param request GetQuotaApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaApplicationResponse
       */
      Models::GetQuotaApplicationResponse getQuotaApplicationWithOptions(const Models::GetQuotaApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a quota increase application.
       *
       * @param request GetQuotaApplicationRequest
       * @return GetQuotaApplicationResponse
       */
      Models::GetQuotaApplicationResponse getQuotaApplication(const Models::GetQuotaApplicationRequest &request);

      /**
       * @summary Queries the approval information of a quota application, including the average approval time, whether approval reminders are supported, and the approval reminder interval.
       *
       * @description ### Before you begin
       * Make sure that you have created a quota increase application. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
       *
       * @param request GetQuotaApplicationApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaApplicationApprovalResponse
       */
      Models::GetQuotaApplicationApprovalResponse getQuotaApplicationApprovalWithOptions(const Models::GetQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the approval information of a quota application, including the average approval time, whether approval reminders are supported, and the approval reminder interval.
       *
       * @description ### Before you begin
       * Make sure that you have created a quota increase application. For more information, see [CreateQuotaApplication](https://help.aliyun.com/document_detail/440566.html).
       *
       * @param request GetQuotaApplicationApprovalRequest
       * @return GetQuotaApplicationApprovalResponse
       */
      Models::GetQuotaApplicationApprovalResponse getQuotaApplicationApproval(const Models::GetQuotaApplicationApprovalRequest &request);

      /**
       * @summary Queries the status of the quota template.
       *
       * @description The default status of a quota template is unset (that is, `ServiceStatus` is `0`). You can use the features of the quota template only when its status is enabled (that is, `ServiceStatus` is `1`).
       *
       * @param request GetQuotaTemplateServiceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaTemplateServiceStatusResponse
       */
      Models::GetQuotaTemplateServiceStatusResponse getQuotaTemplateServiceStatusWithOptions(const Models::GetQuotaTemplateServiceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the quota template.
       *
       * @description The default status of a quota template is unset (that is, `ServiceStatus` is `0`). You can use the features of the quota template only when its status is enabled (that is, `ServiceStatus` is `1`).
       *
       * @param request GetQuotaTemplateServiceStatusRequest
       * @return GetQuotaTemplateServiceStatusResponse
       */
      Models::GetQuotaTemplateServiceStatusResponse getQuotaTemplateServiceStatus(const Models::GetQuotaTemplateServiceStatusRequest &request);

      /**
       * @summary 获取配额使用率概览
       *
       * @param request GetQuotaUtilizationOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQuotaUtilizationOverviewResponse
       */
      Models::GetQuotaUtilizationOverviewResponse getQuotaUtilizationOverviewWithOptions(const Models::GetQuotaUtilizationOverviewRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取配额使用率概览
       *
       * @param request GetQuotaUtilizationOverviewRequest
       * @return GetQuotaUtilizationOverviewResponse
       */
      Models::GetQuotaUtilizationOverviewResponse getQuotaUtilizationOverview(const Models::GetQuotaUtilizationOverviewRequest &request);

      /**
       * @summary Queries the history of quota alerts.
       *
       * @description The quota alert feature has been upgraded and this API operation will be deprecated. This API operation can only query the history of legacy quota usage alerts. To query the history of new quota usage alerts, use the CloudMonitor API operations [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) and [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to use API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request ListAlarmHistoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAlarmHistoriesResponse
       */
      Models::ListAlarmHistoriesResponse listAlarmHistoriesWithOptions(const Models::ListAlarmHistoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the history of quota alerts.
       *
       * @description The quota alert feature has been upgraded and this API operation will be deprecated. This API operation can only query the history of legacy quota usage alerts. To query the history of new quota usage alerts, use the CloudMonitor API operations [DescribeAlertLogCount](https://help.aliyun.com/document_detail/2513275.html) and [DescribeAlertLogList](https://help.aliyun.com/document_detail/2513276.html). For more information about how to use API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request ListAlarmHistoriesRequest
       * @return ListAlarmHistoriesResponse
       */
      Models::ListAlarmHistoriesResponse listAlarmHistories(const Models::ListAlarmHistoriesRequest &request);

      /**
       * @summary Queries the list of quotas associated with a specific quota. Some quotas are interdependent and should be increased simultaneously.
       *
       * @param request ListDependentQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDependentQuotasResponse
       */
      Models::ListDependentQuotasResponse listDependentQuotasWithOptions(const Models::ListDependentQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of quotas associated with a specific quota. Some quotas are interdependent and should be increased simultaneously.
       *
       * @param request ListDependentQuotasRequest
       * @return ListDependentQuotasResponse
       */
      Models::ListDependentQuotasResponse listDependentQuotas(const Models::ListDependentQuotasRequest &request);

      /**
       * @summary This operation queries the dimension groups of a specified Alibaba Cloud service.
       *
       * @param request ListProductDimensionGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductDimensionGroupsResponse
       */
      Models::ListProductDimensionGroupsResponse listProductDimensionGroupsWithOptions(const Models::ListProductDimensionGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation queries the dimension groups of a specified Alibaba Cloud service.
       *
       * @param request ListProductDimensionGroupsRequest
       * @return ListProductDimensionGroupsResponse
       */
      Models::ListProductDimensionGroupsResponse listProductDimensionGroups(const Models::ListProductDimensionGroupsRequest &request);

      /**
       * @summary Queries the quota dimensions supported by the specified cloud service.
       *
       * @param request ListProductQuotaDimensionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductQuotaDimensionsResponse
       */
      Models::ListProductQuotaDimensionsResponse listProductQuotaDimensionsWithOptions(const Models::ListProductQuotaDimensionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota dimensions supported by the specified cloud service.
       *
       * @param request ListProductQuotaDimensionsRequest
       * @return ListProductQuotaDimensionsResponse
       */
      Models::ListProductQuotaDimensionsResponse listProductQuotaDimensions(const Models::ListProductQuotaDimensionsRequest &request);

      /**
       * @summary Queries the quotas of a specified cloud service.
       *
       * @param request ListProductQuotasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductQuotasResponse
       */
      Models::ListProductQuotasResponse listProductQuotasWithOptions(const Models::ListProductQuotasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas of a specified cloud service.
       *
       * @param request ListProductQuotasRequest
       * @return ListProductQuotasResponse
       */
      Models::ListProductQuotasResponse listProductQuotas(const Models::ListProductQuotasRequest &request);

      /**
       * @summary Queries the list of Alibaba Cloud services supported by Quota Center.
       *
       * @description The query results are the same as those in [Alibaba Cloud services supported by Quota Center](https://help.aliyun.com/document_detail/182368.html).
       *
       * @param request ListProductsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProductsWithOptions(const Models::ListProductsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Alibaba Cloud services supported by Quota Center.
       *
       * @description The query results are the same as those in [Alibaba Cloud services supported by Quota Center](https://help.aliyun.com/document_detail/182368.html).
       *
       * @param request ListProductsRequest
       * @return ListProductsResponse
       */
      Models::ListProductsResponse listProducts(const Models::ListProductsRequest &request);

      /**
       * @summary Queries quota usage alerts.
       *
       * @description The quota alert feature has been upgraded. This API operation is scheduled for deprecation and queries only earlier-version quota usage alerts. To query new-version quota usage alerts, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to manage new-version quota alerts using API operations, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request ListQuotaAlarmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaAlarmsResponse
       */
      Models::ListQuotaAlarmsResponse listQuotaAlarmsWithOptions(const Models::ListQuotaAlarmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries quota usage alerts.
       *
       * @description The quota alert feature has been upgraded. This API operation is scheduled for deprecation and queries only earlier-version quota usage alerts. To query new-version quota usage alerts, call the CloudMonitor API operation [DescribeMetricRuleList](https://help.aliyun.com/document_detail/2513291.html). For more information about how to manage new-version quota alerts using API operations, see [Use API operations to manage new-version quota alerts](https://help.aliyun.com/document_detail/2863234.html).
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
       * @summary Queries the list of quota increase applications.
       *
       * @param request ListQuotaApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaApplicationsResponse
       */
      Models::ListQuotaApplicationsResponse listQuotaApplicationsWithOptions(const Models::ListQuotaApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of quota increase applications.
       *
       * @param request ListQuotaApplicationsRequest
       * @return ListQuotaApplicationsResponse
       */
      Models::ListQuotaApplicationsResponse listQuotaApplications(const Models::ListQuotaApplicationsRequest &request);

      /**
       * @summary Queries the details of quota increase applications for a member in a resource directory.
       *
       * @param request ListQuotaApplicationsDetailForTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaApplicationsDetailForTemplateResponse
       */
      Models::ListQuotaApplicationsDetailForTemplateResponse listQuotaApplicationsDetailForTemplateWithOptions(const Models::ListQuotaApplicationsDetailForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of quota increase applications for a member in a resource directory.
       *
       * @param request ListQuotaApplicationsDetailForTemplateRequest
       * @return ListQuotaApplicationsDetailForTemplateResponse
       */
      Models::ListQuotaApplicationsDetailForTemplateResponse listQuotaApplicationsDetailForTemplate(const Models::ListQuotaApplicationsDetailForTemplateRequest &request);

      /**
       * @summary Queries the history of batch requests for member quotas submitted using a quota template.
       *
       * @param request ListQuotaApplicationsForTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaApplicationsForTemplateResponse
       */
      Models::ListQuotaApplicationsForTemplateResponse listQuotaApplicationsForTemplateWithOptions(const Models::ListQuotaApplicationsForTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the history of batch requests for member quotas submitted using a quota template.
       *
       * @param request ListQuotaApplicationsForTemplateRequest
       * @return ListQuotaApplicationsForTemplateResponse
       */
      Models::ListQuotaApplicationsForTemplateResponse listQuotaApplicationsForTemplate(const Models::ListQuotaApplicationsForTemplateRequest &request);

      /**
       * @summary 列举配额使用率报告
       *
       * @param request ListQuotaUtilizationReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListQuotaUtilizationReportResponse
       */
      Models::ListQuotaUtilizationReportResponse listQuotaUtilizationReportWithOptions(const Models::ListQuotaUtilizationReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列举配额使用率报告
       *
       * @param request ListQuotaUtilizationReportRequest
       * @return ListQuotaUtilizationReportResponse
       */
      Models::ListQuotaUtilizationReportResponse listQuotaUtilizationReport(const Models::ListQuotaUtilizationReportRequest &request);

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
       * @summary Only the administrator account of a resource directory can modify a quota template. Modifications to a quota template apply only to new members that are added to the resource directory and do not affect existing members.
       *
       * @param request ModifyTemplateQuotaItemRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyTemplateQuotaItemResponse
       */
      Models::ModifyTemplateQuotaItemResponse modifyTemplateQuotaItemWithOptions(const Models::ModifyTemplateQuotaItemRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Only the administrator account of a resource directory can modify a quota template. Modifications to a quota template apply only to new members that are added to the resource directory and do not affect existing members.
       *
       * @param request ModifyTemplateQuotaItemRequest
       * @return ModifyTemplateQuotaItemResponse
       */
      Models::ModifyTemplateQuotaItemResponse modifyTemplateQuotaItem(const Models::ModifyTemplateQuotaItemRequest &request);

      /**
       * @summary Sends a reminder for a quota application that is pending approval.
       *
       * @description > This operation applies only to quota applications that support reminders. In the GetQuotaApplicationApproval response, the `SupportReminder` parameter for these applications is `true`.
       *
       * @param request RemindQuotaApplicationApprovalRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemindQuotaApplicationApprovalResponse
       */
      Models::RemindQuotaApplicationApprovalResponse remindQuotaApplicationApprovalWithOptions(const Models::RemindQuotaApplicationApprovalRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a reminder for a quota application that is pending approval.
       *
       * @description > This operation applies only to quota applications that support reminders. In the GetQuotaApplicationApproval response, the `SupportReminder` parameter for these applications is `true`.
       *
       * @param request RemindQuotaApplicationApprovalRequest
       * @return RemindQuotaApplicationApprovalResponse
       */
      Models::RemindQuotaApplicationApprovalResponse remindQuotaApplicationApproval(const Models::RemindQuotaApplicationApprovalRequest &request);

      /**
       * @summary 发起配额使用率报告查询
       *
       * @param request StartQuotaUtilizationReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartQuotaUtilizationReportResponse
       */
      Models::StartQuotaUtilizationReportResponse startQuotaUtilizationReportWithOptions(const Models::StartQuotaUtilizationReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发起配额使用率报告查询
       *
       * @param request StartQuotaUtilizationReportRequest
       * @return StartQuotaUtilizationReportResponse
       */
      Models::StartQuotaUtilizationReportResponse startQuotaUtilizationReport(const Models::StartQuotaUtilizationReportRequest &request);

      /**
       * @summary Modifies quota alert information.
       *
       * @description This API operation is deprecated because the quota alert feature has been upgraded. To modify information about new quota usage alerts, use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about using API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request UpdateQuotaAlarmRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateQuotaAlarmResponse
       */
      Models::UpdateQuotaAlarmResponse updateQuotaAlarmWithOptions(const Models::UpdateQuotaAlarmRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies quota alert information.
       *
       * @description This API operation is deprecated because the quota alert feature has been upgraded. To modify information about new quota usage alerts, use the CloudMonitor API operations [PutResourceMetricRules](https://help.aliyun.com/document_detail/2513316.html) and [PutMetricRuleTargets](https://help.aliyun.com/document_detail/2513302.html). For more information about using API operations to manage new quota alerts, see [Use API operations to manage new quota alerts](https://help.aliyun.com/document_detail/2863234.html).
       *
       * @param request UpdateQuotaAlarmRequest
       * @return UpdateQuotaAlarmResponse
       */
      Models::UpdateQuotaAlarmResponse updateQuotaAlarm(const Models::UpdateQuotaAlarmRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
