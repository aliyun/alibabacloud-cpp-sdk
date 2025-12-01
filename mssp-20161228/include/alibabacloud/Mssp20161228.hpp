// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MSSP20161228_HPP_
#define ALIBABACLOUD_MSSP20161228_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Mssp20161228Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Mssp20161228.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Confirm Receipt of Security Assessment Report
       *
       * @param request ConfirmDjbhReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConfirmDjbhReportResponse
       */
      Models::ConfirmDjbhReportResponse confirmDjbhReportWithOptions(const Models::ConfirmDjbhReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Confirm Receipt of Security Assessment Report
       *
       * @param request ConfirmDjbhReportRequest
       * @return ConfirmDjbhReportResponse
       */
      Models::ConfirmDjbhReportResponse confirmDjbhReport(const Models::ConfirmDjbhReportRequest &request);

      /**
       * @summary Create Service-Linked Role
       *
       * @param request CreateServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRoleWithOptions(const Models::CreateServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Service-Linked Role
       *
       * @param request CreateServiceLinkedRoleRequest
       * @return CreateServiceLinkedRoleResponse
       */
      Models::CreateServiceLinkedRoleResponse createServiceLinkedRole(const Models::CreateServiceLinkedRoleRequest &request);

      /**
       * @summary Create Service Work Order
       *
       * @param request CreateServiceWorkOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateServiceWorkOrderResponse
       */
      Models::CreateServiceWorkOrderResponse createServiceWorkOrderWithOptions(const Models::CreateServiceWorkOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Service Work Order
       *
       * @param request CreateServiceWorkOrderRequest
       * @return CreateServiceWorkOrderResponse
       */
      Models::CreateServiceWorkOrderResponse createServiceWorkOrder(const Models::CreateServiceWorkOrderRequest &request);

      /**
       * @summary Delete Security Assessment Report
       *
       * @param request DeleteDjbhReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDjbhReportResponse
       */
      Models::DeleteDjbhReportResponse deleteDjbhReportWithOptions(const Models::DeleteDjbhReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Security Assessment Report
       *
       * @param request DeleteDjbhReportRequest
       * @return DeleteDjbhReportResponse
       */
      Models::DeleteDjbhReportResponse deleteDjbhReport(const Models::DeleteDjbhReportRequest &request);

      /**
       * @summary Query Service-Linked Role
       *
       * @param request DescribeServiceLinkedRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeServiceLinkedRoleResponse
       */
      Models::DescribeServiceLinkedRoleResponse describeServiceLinkedRoleWithOptions(const Models::DescribeServiceLinkedRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Service-Linked Role
       *
       * @param request DescribeServiceLinkedRoleRequest
       * @return DescribeServiceLinkedRoleResponse
       */
      Models::DescribeServiceLinkedRoleResponse describeServiceLinkedRole(const Models::DescribeServiceLinkedRoleRequest &request);

      /**
       * @summary Process Service Work Order
       *
       * @param request DisposeServiceWorkOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisposeServiceWorkOrderResponse
       */
      Models::DisposeServiceWorkOrderResponse disposeServiceWorkOrderWithOptions(const Models::DisposeServiceWorkOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Process Service Work Order
       *
       * @param request DisposeServiceWorkOrderRequest
       * @return DisposeServiceWorkOrderResponse
       */
      Models::DisposeServiceWorkOrderResponse disposeServiceWorkOrder(const Models::DisposeServiceWorkOrderRequest &request);

      /**
       * @summary Handle Alert Work Order
       *
       * @param tmpReq DisposeWorkTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisposeWorkTaskResponse
       */
      Models::DisposeWorkTaskResponse disposeWorkTaskWithOptions(const Models::DisposeWorkTaskRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Handle Alert Work Order
       *
       * @param request DisposeWorkTaskRequest
       * @return DisposeWorkTaskResponse
       */
      Models::DisposeWorkTaskResponse disposeWorkTask(const Models::DisposeWorkTaskRequest &request);

      /**
       * @summary Query Alarm Details
       *
       * @param request GetAlarmDetailByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAlarmDetailByIdResponse
       */
      Models::GetAlarmDetailByIdResponse getAlarmDetailByIdWithOptions(const Models::GetAlarmDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Alarm Details
       *
       * @param request GetAlarmDetailByIdRequest
       * @return GetAlarmDetailByIdResponse
       */
      Models::GetAlarmDetailByIdResponse getAlarmDetailById(const Models::GetAlarmDetailByIdRequest &request);

      /**
       * @summary Trend of Attacked Asset Convergence
       *
       * @param request GetAttackedAssetDealRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAttackedAssetDealResponse
       */
      Models::GetAttackedAssetDealResponse getAttackedAssetDealWithOptions(const Models::GetAttackedAssetDealRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Trend of Attacked Asset Convergence
       *
       * @param request GetAttackedAssetDealRequest
       * @return GetAttackedAssetDealResponse
       */
      Models::GetAttackedAssetDealResponse getAttackedAssetDeal(const Models::GetAttackedAssetDealRequest &request);

      /**
       * @summary Compliance Risk Convergence Trend
       *
       * @param request GetBaselineSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBaselineSummaryResponse
       */
      Models::GetBaselineSummaryResponse getBaselineSummaryWithOptions(const Models::GetBaselineSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Compliance Risk Convergence Trend
       *
       * @param request GetBaselineSummaryRequest
       * @return GetBaselineSummaryResponse
       */
      Models::GetBaselineSummaryResponse getBaselineSummary(const Models::GetBaselineSummaryRequest &request);

      /**
       * @summary Get Console Score
       *
       * @param request GetConsoleScoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConsoleScoreResponse
       */
      Models::GetConsoleScoreResponse getConsoleScoreWithOptions(const Models::GetConsoleScoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Console Score
       *
       * @param request GetConsoleScoreRequest
       * @return GetConsoleScoreResponse
       */
      Models::GetConsoleScoreResponse getConsoleScore(const Models::GetConsoleScoreRequest &request);

      /**
       * @summary Query Risk Details
       *
       * @param request GetDetailByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDetailByIdResponse
       */
      Models::GetDetailByIdResponse getDetailByIdWithOptions(const Models::GetDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Risk Details
       *
       * @param request GetDetailByIdRequest
       * @return GetDetailByIdResponse
       */
      Models::GetDetailByIdResponse getDetailById(const Models::GetDetailByIdRequest &request);

      /**
       * @summary Single Service Report Download
       *
       * @param request GetDocumentDownloadUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentDownloadUrlResponse
       */
      Models::GetDocumentDownloadUrlResponse getDocumentDownloadUrlWithOptions(const Models::GetDocumentDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Single Service Report Download
       *
       * @param request GetDocumentDownloadUrlRequest
       * @return GetDocumentDownloadUrlResponse
       */
      Models::GetDocumentDownloadUrlResponse getDocumentDownloadUrl(const Models::GetDocumentDownloadUrlRequest &request);

      /**
       * @summary Service Report Query
       *
       * @param request GetDocumentPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentPageResponse
       */
      Models::GetDocumentPageResponse getDocumentPageWithOptions(const Models::GetDocumentPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Service Report Query
       *
       * @param request GetDocumentPageRequest
       * @return GetDocumentPageResponse
       */
      Models::GetDocumentPageResponse getDocumentPage(const Models::GetDocumentPageRequest &request);

      /**
       * @summary Service Report Home Page Statistics Acquisition
       *
       * @param request GetDocumentSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDocumentSummaryResponse
       */
      Models::GetDocumentSummaryResponse getDocumentSummaryWithOptions(const Models::GetDocumentSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Service Report Home Page Statistics Acquisition
       *
       * @param request GetDocumentSummaryRequest
       * @return GetDocumentSummaryResponse
       */
      Models::GetDocumentSummaryResponse getDocumentSummary(const Models::GetDocumentSummaryRequest &request);

      /**
       * @summary Get Recently Uploaded Service Reports
       *
       * @param request GetRecentDocumentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRecentDocumentResponse
       */
      Models::GetRecentDocumentResponse getRecentDocumentWithOptions(const Models::GetRecentDocumentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Recently Uploaded Service Reports
       *
       * @param request GetRecentDocumentRequest
       * @return GetRecentDocumentResponse
       */
      Models::GetRecentDocumentResponse getRecentDocument(const Models::GetRecentDocumentRequest &request);

      /**
       * @summary Get Safety Coverage
       *
       * @param request GetSafetyCoverRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSafetyCoverResponse
       */
      Models::GetSafetyCoverResponse getSafetyCoverWithOptions(const Models::GetSafetyCoverRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Safety Coverage
       *
       * @param request GetSafetyCoverRequest
       * @return GetSafetyCoverResponse
       */
      Models::GetSafetyCoverResponse getSafetyCover(const Models::GetSafetyCoverRequest &request);

      /**
       * @summary Get SOW List
       *
       * @param request GetSowListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSowListResponse
       */
      Models::GetSowListResponse getSowListWithOptions(const Models::GetSowListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get SOW List
       *
       * @param request GetSowListRequest
       * @return GetSowListResponse
       */
      Models::GetSowListResponse getSowList(const Models::GetSowListRequest &request);

      /**
       * @summary Alarm Disposal Query
       *
       * @param request GetSuspEventPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuspEventPageResponse
       */
      Models::GetSuspEventPageResponse getSuspEventPageWithOptions(const Models::GetSuspEventPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alarm Disposal Query
       *
       * @param request GetSuspEventPageRequest
       * @return GetSuspEventPageResponse
       */
      Models::GetSuspEventPageResponse getSuspEventPage(const Models::GetSuspEventPageRequest &request);

      /**
       * @summary Get Alert Statistics
       *
       * @param request GetSuspEventSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuspEventSummaryResponse
       */
      Models::GetSuspEventSummaryResponse getSuspEventSummaryWithOptions(const Models::GetSuspEventSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Alert Statistics
       *
       * @param request GetSuspEventSummaryRequest
       * @return GetSuspEventSummaryResponse
       */
      Models::GetSuspEventSummaryResponse getSuspEventSummary(const Models::GetSuspEventSummaryRequest &request);

      /**
       * @summary Alarm Page Statistics
       *
       * @param request GetSuspPageSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSuspPageSummaryResponse
       */
      Models::GetSuspPageSummaryResponse getSuspPageSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Alarm Page Statistics
       *
       * @return GetSuspPageSummaryResponse
       */
      Models::GetSuspPageSummaryResponse getSuspPageSummary();

      /**
       * @summary Query User Activation Status
       *
       * @param request GetUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserStatusResponse
       */
      Models::GetUserStatusResponse getUserStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query User Activation Status
       *
       * @return GetUserStatusResponse
       */
      Models::GetUserStatusResponse getUserStatus();

      /**
       * @summary Risk Query
       *
       * @param request GetVulItemPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVulItemPageResponse
       */
      Models::GetVulItemPageResponse getVulItemPageWithOptions(const Models::GetVulItemPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Risk Query
       *
       * @param request GetVulItemPageRequest
       * @return GetVulItemPageResponse
       */
      Models::GetVulItemPageResponse getVulItemPage(const Models::GetVulItemPageRequest &request);

      /**
       * @summary Query processed details
       *
       * @param request GetVulListByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVulListByIdResponse
       */
      Models::GetVulListByIdResponse getVulListByIdWithOptions(const Models::GetVulListByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query processed details
       *
       * @param request GetVulListByIdRequest
       * @return GetVulListByIdResponse
       */
      Models::GetVulListByIdResponse getVulListById(const Models::GetVulListByIdRequest &request);

      /**
       * @summary Risk Page Statistics
       *
       * @param request GetVulPageSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVulPageSummaryResponse
       */
      Models::GetVulPageSummaryResponse getVulPageSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Risk Page Statistics
       *
       * @return GetVulPageSummaryResponse
       */
      Models::GetVulPageSummaryResponse getVulPageSummary();

      /**
       * @summary Get Risk Statistics
       *
       * @param request GetVulSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVulSummaryResponse
       */
      Models::GetVulSummaryResponse getVulSummaryWithOptions(const Models::GetVulSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Risk Statistics
       *
       * @param request GetVulSummaryRequest
       * @return GetVulSummaryResponse
       */
      Models::GetVulSummaryResponse getVulSummary(const Models::GetVulSummaryRequest &request);

      /**
       * @summary Get the First Line Work Order Statistics
       *
       * @param request GetWorkTaskSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkTaskSummaryResponse
       */
      Models::GetWorkTaskSummaryResponse getWorkTaskSummaryWithOptions(const Models::GetWorkTaskSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the First Line Work Order Statistics
       *
       * @param request GetWorkTaskSummaryRequest
       * @return GetWorkTaskSummaryResponse
       */
      Models::GetWorkTaskSummaryResponse getWorkTaskSummary(const Models::GetWorkTaskSummaryRequest &request);

      /**
       * @summary Service Customer Information Query
       *
       * @param request PageServiceCustomerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PageServiceCustomerResponse
       */
      Models::PageServiceCustomerResponse pageServiceCustomerWithOptions(const Models::PageServiceCustomerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Service Customer Information Query
       *
       * @param request PageServiceCustomerRequest
       * @return PageServiceCustomerResponse
       */
      Models::PageServiceCustomerResponse pageServiceCustomer(const Models::PageServiceCustomerRequest &request);

      /**
       * @summary Send Custom Alert Event
       *
       * @param request SendCustomEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCustomEventResponse
       */
      Models::SendCustomEventResponse sendCustomEventWithOptions(const Models::SendCustomEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Send Custom Alert Event
       *
       * @param request SendCustomEventRequest
       * @return SendCustomEventResponse
       */
      Models::SendCustomEventResponse sendCustomEvent(const Models::SendCustomEventRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
