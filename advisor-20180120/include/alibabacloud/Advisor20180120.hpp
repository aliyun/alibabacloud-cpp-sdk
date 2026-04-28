// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ADVISOR20180120_HPP_
#define ALIBABACLOUD_ADVISOR20180120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Advisor20180120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Advisor20180120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 根据多个维度获取用户最新的巡检结果，全量返回-openApi
       *
       * @param request DescribeAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvicesResponse
       */
      Models::DescribeAdvicesResponse describeAdvicesWithOptions(const Models::DescribeAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据多个维度获取用户最新的巡检结果，全量返回-openApi
       *
       * @param request DescribeAdvicesRequest
       * @return DescribeAdvicesResponse
       */
      Models::DescribeAdvicesResponse describeAdvices(const Models::DescribeAdvicesRequest &request);

      /**
       * @summary DescribeAdvicesFlat分页
       *
       * @param request DescribeAdvicesFlatPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvicesFlatPageResponse
       */
      Models::DescribeAdvicesFlatPageResponse describeAdvicesFlatPageWithOptions(const Models::DescribeAdvicesFlatPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeAdvicesFlat分页
       *
       * @param request DescribeAdvicesFlatPageRequest
       * @return DescribeAdvicesFlatPageResponse
       */
      Models::DescribeAdvicesFlatPageResponse describeAdvicesFlatPage(const Models::DescribeAdvicesFlatPageRequest &request);

      /**
       * @summary DescribeAdvices分页
       *
       * @param request DescribeAdvicesPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvicesPageResponse
       */
      Models::DescribeAdvicesPageResponse describeAdvicesPageWithOptions(const Models::DescribeAdvicesPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeAdvices分页
       *
       * @param request DescribeAdvicesPageRequest
       * @return DescribeAdvicesPageResponse
       */
      Models::DescribeAdvicesPageResponse describeAdvicesPage(const Models::DescribeAdvicesPageRequest &request);

      /**
       * @summary 巡检
       *
       * @param request DescribeAdvisorChecksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvisorChecksResponse
       */
      Models::DescribeAdvisorChecksResponse describeAdvisorChecksWithOptions(const Models::DescribeAdvisorChecksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 巡检
       *
       * @param request DescribeAdvisorChecksRequest
       * @return DescribeAdvisorChecksResponse
       */
      Models::DescribeAdvisorChecksResponse describeAdvisorChecks(const Models::DescribeAdvisorChecksRequest &request);

      /**
       * @summary 巡检项设置-分页
       *
       * @param tmpReq DescribeAdvisorChecksFoPagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvisorChecksFoPagesResponse
       */
      Models::DescribeAdvisorChecksFoPagesResponse describeAdvisorChecksFoPagesWithOptions(const Models::DescribeAdvisorChecksFoPagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 巡检项设置-分页
       *
       * @param request DescribeAdvisorChecksFoPagesRequest
       * @return DescribeAdvisorChecksFoPagesResponse
       */
      Models::DescribeAdvisorChecksFoPagesResponse describeAdvisorChecksFoPages(const Models::DescribeAdvisorChecksFoPagesRequest &request);

      /**
       * @summary 查询资源
       *
       * @param request DescribeAdvisorResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeAdvisorResourcesResponse
       */
      Models::DescribeAdvisorResourcesResponse describeAdvisorResourcesWithOptions(const Models::DescribeAdvisorResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源
       *
       * @param request DescribeAdvisorResourcesRequest
       * @return DescribeAdvisorResourcesResponse
       */
      Models::DescribeAdvisorResourcesResponse describeAdvisorResources(const Models::DescribeAdvisorResourcesRequest &request);

      /**
       * @summary 查询成本优化结果详情
       *
       * @param tmpReq DescribeCostCheckAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCostCheckAdvicesResponse
       */
      Models::DescribeCostCheckAdvicesResponse describeCostCheckAdvicesWithOptions(const Models::DescribeCostCheckAdvicesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询成本优化结果详情
       *
       * @param request DescribeCostCheckAdvicesRequest
       * @return DescribeCostCheckAdvicesResponse
       */
      Models::DescribeCostCheckAdvicesResponse describeCostCheckAdvices(const Models::DescribeCostCheckAdvicesRequest &request);

      /**
       * @summary 查询巡检项聚合成本优化结果概览
       *
       * @param tmpReq DescribeCostCheckResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCostCheckResultsResponse
       */
      Models::DescribeCostCheckResultsResponse describeCostCheckResultsWithOptions(const Models::DescribeCostCheckResultsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询巡检项聚合成本优化结果概览
       *
       * @param request DescribeCostCheckResultsRequest
       * @return DescribeCostCheckResultsResponse
       */
      Models::DescribeCostCheckResultsResponse describeCostCheckResults(const Models::DescribeCostCheckResultsRequest &request);

      /**
       * @summary 成本优化-概览
       *
       * @param tmpReq DescribeCostOptimizationOverviewRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCostOptimizationOverviewResponse
       */
      Models::DescribeCostOptimizationOverviewResponse describeCostOptimizationOverviewWithOptions(const Models::DescribeCostOptimizationOverviewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 成本优化-概览
       *
       * @param request DescribeCostOptimizationOverviewRequest
       * @return DescribeCostOptimizationOverviewResponse
       */
      Models::DescribeCostOptimizationOverviewResponse describeCostOptimizationOverview(const Models::DescribeCostOptimizationOverviewRequest &request);

      /**
       * @summary 历史
       *
       * @param request GetHistoryAdvicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetHistoryAdvicesResponse
       */
      Models::GetHistoryAdvicesResponse getHistoryAdvicesWithOptions(const Models::GetHistoryAdvicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 历史
       *
       * @param request GetHistoryAdvicesRequest
       * @return GetHistoryAdvicesResponse
       */
      Models::GetHistoryAdvicesResponse getHistoryAdvices(const Models::GetHistoryAdvicesRequest &request);

      /**
       * @summary 获取任务执行进度(普通用户、RD单账号)
       *
       * @param request GetInspectProgressRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInspectProgressResponse
       */
      Models::GetInspectProgressResponse getInspectProgressWithOptions(const Models::GetInspectProgressRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取任务执行进度(普通用户、RD单账号)
       *
       * @param request GetInspectProgressRequest
       * @return GetInspectProgressResponse
       */
      Models::GetInspectProgressResponse getInspectProgress(const Models::GetInspectProgressRequest &request);

      /**
       * @summary 获取云产品的列表
       *
       * @param request GetProductListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetProductListResponse
       */
      Models::GetProductListResponse getProductListWithOptions(const Models::GetProductListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取云产品的列表
       *
       * @param request GetProductListRequest
       * @return GetProductListResponse
       */
      Models::GetProductListResponse getProductList(const Models::GetProductListRequest &request);

      /**
       * @summary 根据id获取任务状态
       *
       * @param request GetTaskStatusByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatusByIdResponse
       */
      Models::GetTaskStatusByIdResponse getTaskStatusByIdWithOptions(const Models::GetTaskStatusByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据id获取任务状态
       *
       * @param request GetTaskStatusByIdRequest
       * @return GetTaskStatusByIdResponse
       */
      Models::GetTaskStatusByIdResponse getTaskStatusById(const Models::GetTaskStatusByIdRequest &request);

      /**
       * @summary 触发立即巡检
       *
       * @param tmpReq RefreshAdvisorCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAdvisorCheckResponse
       */
      Models::RefreshAdvisorCheckResponse refreshAdvisorCheckWithOptions(const Models::RefreshAdvisorCheckRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 触发立即巡检
       *
       * @param request RefreshAdvisorCheckRequest
       * @return RefreshAdvisorCheckResponse
       */
      Models::RefreshAdvisorCheckResponse refreshAdvisorCheck(const Models::RefreshAdvisorCheckRequest &request);

      /**
       * @summary 发起成本优化巡检
       *
       * @param tmpReq RefreshAdvisorCostCheckRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAdvisorCostCheckResponse
       */
      Models::RefreshAdvisorCostCheckResponse refreshAdvisorCostCheckWithOptions(const Models::RefreshAdvisorCostCheckRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发起成本优化巡检
       *
       * @param request RefreshAdvisorCostCheckRequest
       * @return RefreshAdvisorCostCheckResponse
       */
      Models::RefreshAdvisorCostCheckResponse refreshAdvisorCostCheck(const Models::RefreshAdvisorCostCheckRequest &request);

      /**
       * @summary RefreshAdvisorResource
       *
       * @param request RefreshAdvisorResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshAdvisorResourceResponse
       */
      Models::RefreshAdvisorResourceResponse refreshAdvisorResourceWithOptions(const Models::RefreshAdvisorResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary RefreshAdvisorResource
       *
       * @param request RefreshAdvisorResourceRequest
       * @return RefreshAdvisorResourceResponse
       */
      Models::RefreshAdvisorResourceResponse refreshAdvisorResource(const Models::RefreshAdvisorResourceRequest &request);

      /**
       * @summary 上报用户业务报警信息
       *
       * @param tmpReq ReportBizAlertInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReportBizAlertInfoResponse
       */
      Models::ReportBizAlertInfoResponse reportBizAlertInfoWithOptions(const Models::ReportBizAlertInfoRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上报用户业务报警信息
       *
       * @param request ReportBizAlertInfoRequest
       * @return ReportBizAlertInfoResponse
       */
      Models::ReportBizAlertInfoResponse reportBizAlertInfo(const Models::ReportBizAlertInfoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
