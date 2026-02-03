// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NIS20211216_HPP_
#define ALIBABACLOUD_NIS20211216_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Nis20211216Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Nis20211216.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Initiates a task for analyzing network reachability.
       *
       * @description You can call this operation to initiate a task for analyzing network reachability by specifying only the information about the source and destination. You do not need to create a network path for reachability analysis. The analysis result is not recorded in the system. If you want to record the path parameters and analysis result in the Network Intelligence Service (NIS) console, we recommend that you call the **createNetworkReachableAnalysis** operation.
       *
       * @param request CreateAndAnalyzeNetworkPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAndAnalyzeNetworkPathResponse
       */
      Models::CreateAndAnalyzeNetworkPathResponse createAndAnalyzeNetworkPathWithOptions(const Models::CreateAndAnalyzeNetworkPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a task for analyzing network reachability.
       *
       * @description You can call this operation to initiate a task for analyzing network reachability by specifying only the information about the source and destination. You do not need to create a network path for reachability analysis. The analysis result is not recorded in the system. If you want to record the path parameters and analysis result in the Network Intelligence Service (NIS) console, we recommend that you call the **createNetworkReachableAnalysis** operation.
       *
       * @param request CreateAndAnalyzeNetworkPathRequest
       * @return CreateAndAnalyzeNetworkPathResponse
       */
      Models::CreateAndAnalyzeNetworkPathResponse createAndAnalyzeNetworkPath(const Models::CreateAndAnalyzeNetworkPathRequest &request);

      /**
       * @summary Creates a network path in the cloud for reachability analysis.
       *
       * @description *   You can call the **CreateNetworkPath** operation to create network paths in multiple networking scenarios and between multiple resources. After a path is created, the path parameters are saved for repeated analysis.
       * *   You can create up to 100 network paths within one Alibaba Cloud account.
       *
       * @param request CreateNetworkPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkPathResponse
       */
      Models::CreateNetworkPathResponse createNetworkPathWithOptions(const Models::CreateNetworkPathRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network path in the cloud for reachability analysis.
       *
       * @description *   You can call the **CreateNetworkPath** operation to create network paths in multiple networking scenarios and between multiple resources. After a path is created, the path parameters are saved for repeated analysis.
       * *   You can create up to 100 network paths within one Alibaba Cloud account.
       *
       * @param request CreateNetworkPathRequest
       * @return CreateNetworkPathResponse
       */
      Models::CreateNetworkPathResponse createNetworkPath(const Models::CreateNetworkPathRequest &request);

      /**
       * @summary Creates a task for analyzing network reachability.
       *
       * @description *   The **CreateNetworkReachableAnalysis** operation is used to create a task for analyzing the reachability of the network path that is created by calling the **CreateNetworkPath** operation and record the analysis results.
       * *   The **CreateNetworkReachableAnalysis** operation can be called to repeatedly analyze the reachability of a network path.
       * *   You can create up to 1,000 reachability analysis records within one Alibaba Cloud account.
       *
       * @param request CreateNetworkReachableAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkReachableAnalysisResponse
       */
      Models::CreateNetworkReachableAnalysisResponse createNetworkReachableAnalysisWithOptions(const Models::CreateNetworkReachableAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task for analyzing network reachability.
       *
       * @description *   The **CreateNetworkReachableAnalysis** operation is used to create a task for analyzing the reachability of the network path that is created by calling the **CreateNetworkPath** operation and record the analysis results.
       * *   The **CreateNetworkReachableAnalysis** operation can be called to repeatedly analyze the reachability of a network path.
       * *   You can create up to 1,000 reachability analysis records within one Alibaba Cloud account.
       *
       * @param request CreateNetworkReachableAnalysisRequest
       * @return CreateNetworkReachableAnalysisResponse
       */
      Models::CreateNetworkReachableAnalysisResponse createNetworkReachableAnalysis(const Models::CreateNetworkReachableAnalysisRequest &request);

      /**
       * @summary Deletes a network path.
       *
       * @param tmpReq DeleteNetworkPathRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkPathResponse
       */
      Models::DeleteNetworkPathResponse deleteNetworkPathWithOptions(const Models::DeleteNetworkPathRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network path.
       *
       * @param request DeleteNetworkPathRequest
       * @return DeleteNetworkPathResponse
       */
      Models::DeleteNetworkPathResponse deleteNetworkPath(const Models::DeleteNetworkPathRequest &request);

      /**
       * @summary Deletes a task for analyzing network reachability.
       *
       * @param tmpReq DeleteNetworkReachableAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkReachableAnalysisResponse
       */
      Models::DeleteNetworkReachableAnalysisResponse deleteNetworkReachableAnalysisWithOptions(const Models::DeleteNetworkReachableAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a task for analyzing network reachability.
       *
       * @param request DeleteNetworkReachableAnalysisRequest
       * @return DeleteNetworkReachableAnalysisResponse
       */
      Models::DeleteNetworkReachableAnalysisResponse deleteNetworkReachableAnalysis(const Models::DeleteNetworkReachableAnalysisRequest &request);

      /**
       * @summary 删除报告
       *
       * @param request DeleteNisInspectionReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNisInspectionReportResponse
       */
      Models::DeleteNisInspectionReportResponse deleteNisInspectionReportWithOptions(const Models::DeleteNisInspectionReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除报告
       *
       * @param request DeleteNisInspectionReportRequest
       * @return DeleteNisInspectionReportResponse
       */
      Models::DeleteNisInspectionReportResponse deleteNisInspectionReport(const Models::DeleteNisInspectionReportRequest &request);

      /**
       * @summary 删除巡检任务
       *
       * @param request DeleteNisInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNisInspectionTaskResponse
       */
      Models::DeleteNisInspectionTaskResponse deleteNisInspectionTaskWithOptions(const Models::DeleteNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除巡检任务
       *
       * @param request DeleteNisInspectionTaskRequest
       * @return DeleteNisInspectionTaskResponse
       */
      Models::DeleteNisInspectionTaskResponse deleteNisInspectionTask(const Models::DeleteNisInspectionTaskRequest &request);

      /**
       * @summary 受影响资源列表
       *
       * @param request DescribeNisInspectionRecommendationResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNisInspectionRecommendationResourcesResponse
       */
      Models::DescribeNisInspectionRecommendationResourcesResponse describeNisInspectionRecommendationResourcesWithOptions(const Models::DescribeNisInspectionRecommendationResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 受影响资源列表
       *
       * @param request DescribeNisInspectionRecommendationResourcesRequest
       * @return DescribeNisInspectionRecommendationResourcesResponse
       */
      Models::DescribeNisInspectionRecommendationResourcesResponse describeNisInspectionRecommendationResources(const Models::DescribeNisInspectionRecommendationResourcesRequest &request);

      /**
       * @summary 报告巡检项列表
       *
       * @param tmpReq DescribeNisInspectionReportCheckItemsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNisInspectionReportCheckItemsResponse
       */
      Models::DescribeNisInspectionReportCheckItemsResponse describeNisInspectionReportCheckItemsWithOptions(const Models::DescribeNisInspectionReportCheckItemsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 报告巡检项列表
       *
       * @param request DescribeNisInspectionReportCheckItemsRequest
       * @return DescribeNisInspectionReportCheckItemsResponse
       */
      Models::DescribeNisInspectionReportCheckItemsResponse describeNisInspectionReportCheckItems(const Models::DescribeNisInspectionReportCheckItemsRequest &request);

      /**
       * @summary 查询报告状态
       *
       * @param request DescribeNisInspectionReportStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNisInspectionReportStatusResponse
       */
      Models::DescribeNisInspectionReportStatusResponse describeNisInspectionReportStatusWithOptions(const Models::DescribeNisInspectionReportStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询报告状态
       *
       * @param request DescribeNisInspectionReportStatusRequest
       * @return DescribeNisInspectionReportStatusResponse
       */
      Models::DescribeNisInspectionReportStatusResponse describeNisInspectionReportStatus(const Models::DescribeNisInspectionReportStatusRequest &request);

      /**
       * @summary 报告总结信息
       *
       * @param request DescribeNisInspectionReportSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNisInspectionReportSummaryResponse
       */
      Models::DescribeNisInspectionReportSummaryResponse describeNisInspectionReportSummaryWithOptions(const Models::DescribeNisInspectionReportSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 报告总结信息
       *
       * @param request DescribeNisInspectionReportSummaryRequest
       * @return DescribeNisInspectionReportSummaryResponse
       */
      Models::DescribeNisInspectionReportSummaryResponse describeNisInspectionReportSummary(const Models::DescribeNisInspectionReportSummaryRequest &request);

      /**
       * @summary 查询巡检任务
       *
       * @param request DescribeNisInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNisInspectionTaskResponse
       */
      Models::DescribeNisInspectionTaskResponse describeNisInspectionTaskWithOptions(const Models::DescribeNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询巡检任务
       *
       * @param request DescribeNisInspectionTaskRequest
       * @return DescribeNisInspectionTaskResponse
       */
      Models::DescribeNisInspectionTaskResponse describeNisInspectionTask(const Models::DescribeNisInspectionTaskRequest &request);

      /**
       * @summary 查询流量分析topN异步任务结果
       *
       * @param request DescribeNisTrafficRankingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNisTrafficRankingResponse
       */
      Models::DescribeNisTrafficRankingResponse describeNisTrafficRankingWithOptions(const Models::DescribeNisTrafficRankingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询流量分析topN异步任务结果
       *
       * @param request DescribeNisTrafficRankingRequest
       * @return DescribeNisTrafficRankingResponse
       */
      Models::DescribeNisTrafficRankingResponse describeNisTrafficRanking(const Models::DescribeNisTrafficRankingRequest &request);

      /**
       * @deprecated OpenAPI GetInternetTuple is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the rankings of Internet traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Internet traffic data can be ranked by metrics such as traffic volumes and the number of packets.
       *
       * @param tmpReq GetInternetTupleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInternetTupleResponse
       */
      Models::GetInternetTupleResponse getInternetTupleWithOptions(const Models::GetInternetTupleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetInternetTuple is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the rankings of Internet traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Internet traffic data can be ranked by metrics such as traffic volumes and the number of packets.
       *
       * @param request GetInternetTupleRequest
       * @return GetInternetTupleResponse
       */
      Models::GetInternetTupleResponse getInternetTuple(const Models::GetInternetTupleRequest &request);

      /**
       * @deprecated OpenAPI GetNatTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the real-time SNAT performance ranking of a NAT gateway.
       *
       * @param request GetNatTopNRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNatTopNResponse
       */
      Models::GetNatTopNResponse getNatTopNWithOptions(const Models::GetNatTopNRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetNatTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the real-time SNAT performance ranking of a NAT gateway.
       *
       * @param request GetNatTopNRequest
       * @return GetNatTopNResponse
       */
      Models::GetNatTopNResponse getNatTopN(const Models::GetNatTopNRequest &request);

      /**
       * @summary Obtains the results of network reachability analysis.
       *
       * @description **GetNetworkReachableAnalysis** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can query the state of the task for analyzing network reachability.
       * *   The **init** state indicates that the task is in progress.
       * *   The **finish** state indicates that the task is complete. In this state, you can obtain the analysis result.
       *
       * @param request GetNetworkReachableAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkReachableAnalysisResponse
       */
      Models::GetNetworkReachableAnalysisResponse getNetworkReachableAnalysisWithOptions(const Models::GetNetworkReachableAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the results of network reachability analysis.
       *
       * @description **GetNetworkReachableAnalysis** is an asynchronous operation. After a request is sent, the system returns a request ID and runs the task in the background. You can query the state of the task for analyzing network reachability.
       * *   The **init** state indicates that the task is in progress.
       * *   The **finish** state indicates that the task is complete. In this state, you can obtain the analysis result.
       *
       * @param request GetNetworkReachableAnalysisRequest
       * @return GetNetworkReachableAnalysisResponse
       */
      Models::GetNetworkReachableAnalysisResponse getNetworkReachableAnalysis(const Models::GetNetworkReachableAnalysisRequest &request);

      /**
       * @summary 获取云网络指标趋势
       *
       * @param tmpReq GetNisNetworkMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNisNetworkMetricsResponse
       */
      Models::GetNisNetworkMetricsResponse getNisNetworkMetricsWithOptions(const Models::GetNisNetworkMetricsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取云网络指标趋势
       *
       * @param request GetNisNetworkMetricsRequest
       * @return GetNisNetworkMetricsResponse
       */
      Models::GetNisNetworkMetricsResponse getNisNetworkMetrics(const Models::GetNisNetworkMetricsRequest &request);

      /**
       * @summary 获取云网络指标排名
       *
       * @param tmpReq GetNisNetworkRankingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNisNetworkRankingResponse
       */
      Models::GetNisNetworkRankingResponse getNisNetworkRankingWithOptions(const Models::GetNisNetworkRankingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取云网络指标排名
       *
       * @param request GetNisNetworkRankingRequest
       * @return GetNisNetworkRankingResponse
       */
      Models::GetNisNetworkRankingResponse getNisNetworkRanking(const Models::GetNisNetworkRankingRequest &request);

      /**
       * @deprecated OpenAPI GetTransitRouterFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the rankings of inter-region traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Inter-region traffic data can be ranked by metrics such as traffic volumes and the number of packets.
       *
       * @param tmpReq GetTransitRouterFlowTopNRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransitRouterFlowTopNResponse
       */
      Models::GetTransitRouterFlowTopNResponse getTransitRouterFlowTopNWithOptions(const Models::GetTransitRouterFlowTopNRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetTransitRouterFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the rankings of inter-region traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Inter-region traffic data can be ranked by metrics such as traffic volumes and the number of packets.
       *
       * @param request GetTransitRouterFlowTopNRequest
       * @return GetTransitRouterFlowTopNResponse
       */
      Models::GetTransitRouterFlowTopNResponse getTransitRouterFlowTopN(const Models::GetTransitRouterFlowTopNRequest &request);

      /**
       * @deprecated OpenAPI GetVbrFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the rankings of hybrid cloud traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Hybrid cloud traffic data can be ranked by metrics such as traffic volumes and the number of packets.
       *
       * @param tmpReq GetVbrFlowTopNRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVbrFlowTopNResponse
       */
      Models::GetVbrFlowTopNResponse getVbrFlowTopNWithOptions(const Models::GetVbrFlowTopNRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI GetVbrFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
       *
       * @summary Queries the rankings of hybrid cloud traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Hybrid cloud traffic data can be ranked by metrics such as traffic volumes and the number of packets.
       *
       * @param request GetVbrFlowTopNRequest
       * @return GetVbrFlowTopNResponse
       */
      Models::GetVbrFlowTopNResponse getVbrFlowTopN(const Models::GetVbrFlowTopNRequest &request);

      /**
       * @summary 巡检资源类型列表
       *
       * @param request ListNisInspectionResourceTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNisInspectionResourceTypeResponse
       */
      Models::ListNisInspectionResourceTypeResponse listNisInspectionResourceTypeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 巡检资源类型列表
       *
       * @return ListNisInspectionResourceTypeResponse
       */
      Models::ListNisInspectionResourceTypeResponse listNisInspectionResourceType();

      /**
       * @summary 查询巡检报告列表
       *
       * @param request ListNisInspectionTaskReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNisInspectionTaskReportsResponse
       */
      Models::ListNisInspectionTaskReportsResponse listNisInspectionTaskReportsWithOptions(const Models::ListNisInspectionTaskReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询巡检报告列表
       *
       * @param request ListNisInspectionTaskReportsRequest
       * @return ListNisInspectionTaskReportsResponse
       */
      Models::ListNisInspectionTaskReportsResponse listNisInspectionTaskReports(const Models::ListNisInspectionTaskReportsRequest &request);

      /**
       * @summary 巡检任务列表
       *
       * @param request ListNisInspectionTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNisInspectionTasksResponse
       */
      Models::ListNisInspectionTasksResponse listNisInspectionTasksWithOptions(const Models::ListNisInspectionTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 巡检任务列表
       *
       * @param request ListNisInspectionTasksRequest
       * @return ListNisInspectionTasksResponse
       */
      Models::ListNisInspectionTasksResponse listNisInspectionTasks(const Models::ListNisInspectionTasksRequest &request);

      /**
       * @summary 请补充描述开启任务
       *
       * @param request StartNisInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartNisInspectionTaskResponse
       */
      Models::StartNisInspectionTaskResponse startNisInspectionTaskWithOptions(const Models::StartNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 请补充描述开启任务
       *
       * @param request StartNisInspectionTaskRequest
       * @return StartNisInspectionTaskResponse
       */
      Models::StartNisInspectionTaskResponse startNisInspectionTask(const Models::StartNisInspectionTaskRequest &request);

      /**
       * @summary 获取云网络流量指标排名
       *
       * @param tmpReq StartNisTrafficRankingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartNisTrafficRankingResponse
       */
      Models::StartNisTrafficRankingResponse startNisTrafficRankingWithOptions(const Models::StartNisTrafficRankingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取云网络流量指标排名
       *
       * @param request StartNisTrafficRankingRequest
       * @return StartNisTrafficRankingResponse
       */
      Models::StartNisTrafficRankingResponse startNisTrafficRanking(const Models::StartNisTrafficRankingRequest &request);

      /**
       * @summary 修改巡检项
       *
       * @param request UpdateNisInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNisInspectionTaskResponse
       */
      Models::UpdateNisInspectionTaskResponse updateNisInspectionTaskWithOptions(const Models::UpdateNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改巡检项
       *
       * @param request UpdateNisInspectionTaskRequest
       * @return UpdateNisInspectionTaskResponse
       */
      Models::UpdateNisInspectionTaskResponse updateNisInspectionTask(const Models::UpdateNisInspectionTaskRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
