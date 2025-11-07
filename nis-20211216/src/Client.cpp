#include <darabonba/Core.hpp>
#include <alibabacloud/Nis20211216.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Nis20211216::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Nis20211216
{

AlibabaCloud::Nis20211216::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("nis", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary Initiates a task for analyzing network reachability.
 *
 * @description You can call this operation to initiate a task for analyzing network reachability by specifying only the information about the source and destination. You do not need to create a network path for reachability analysis. The analysis result is not recorded in the system. If you want to record the path parameters and analysis result in the Network Intelligence Service (NIS) console, we recommend that you call the **createNetworkReachableAnalysis** operation.
 *
 * @param request CreateAndAnalyzeNetworkPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAndAnalyzeNetworkPathResponse
 */
CreateAndAnalyzeNetworkPathResponse Client::createAndAnalyzeNetworkPathWithOptions(const CreateAndAnalyzeNetworkPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAndAnalyzeNetworkPath"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAndAnalyzeNetworkPathResponse>();
}

/**
 * @summary Initiates a task for analyzing network reachability.
 *
 * @description You can call this operation to initiate a task for analyzing network reachability by specifying only the information about the source and destination. You do not need to create a network path for reachability analysis. The analysis result is not recorded in the system. If you want to record the path parameters and analysis result in the Network Intelligence Service (NIS) console, we recommend that you call the **createNetworkReachableAnalysis** operation.
 *
 * @param request CreateAndAnalyzeNetworkPathRequest
 * @return CreateAndAnalyzeNetworkPathResponse
 */
CreateAndAnalyzeNetworkPathResponse Client::createAndAnalyzeNetworkPath(const CreateAndAnalyzeNetworkPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAndAnalyzeNetworkPathWithOptions(request, runtime);
}

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
CreateNetworkPathResponse Client::createNetworkPathWithOptions(const CreateNetworkPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPathDescription()) {
    query["NetworkPathDescription"] = request.networkPathDescription();
  }

  if (!!request.hasNetworkPathName()) {
    query["NetworkPathName"] = request.networkPathName();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.sourceId();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.sourceIpAddress();
  }

  if (!!request.hasSourcePort()) {
    query["SourcePort"] = request.sourcePort();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.targetId();
  }

  if (!!request.hasTargetIpAddress()) {
    query["TargetIpAddress"] = request.targetIpAddress();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.targetPort();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.targetType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkPath"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkPathResponse>();
}

/**
 * @summary Creates a network path in the cloud for reachability analysis.
 *
 * @description *   You can call the **CreateNetworkPath** operation to create network paths in multiple networking scenarios and between multiple resources. After a path is created, the path parameters are saved for repeated analysis.
 * *   You can create up to 100 network paths within one Alibaba Cloud account.
 *
 * @param request CreateNetworkPathRequest
 * @return CreateNetworkPathResponse
 */
CreateNetworkPathResponse Client::createNetworkPath(const CreateNetworkPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkPathWithOptions(request, runtime);
}

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
CreateNetworkReachableAnalysisResponse Client::createNetworkReachableAnalysisWithOptions(const CreateNetworkReachableAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPathId()) {
    query["NetworkPathId"] = request.networkPathId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateNetworkReachableAnalysis"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateNetworkReachableAnalysisResponse>();
}

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
CreateNetworkReachableAnalysisResponse Client::createNetworkReachableAnalysis(const CreateNetworkReachableAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createNetworkReachableAnalysisWithOptions(request, runtime);
}

/**
 * @summary Deletes a network path.
 *
 * @param tmpReq DeleteNetworkPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkPathResponse
 */
DeleteNetworkPathResponse Client::deleteNetworkPathWithOptions(const DeleteNetworkPathRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteNetworkPathShrinkRequest request = DeleteNetworkPathShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetworkPathIds()) {
    request.setNetworkPathIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.networkPathIds(), "NetworkPathIds", "json"));
  }

  json query = {};
  if (!!request.hasNetworkPathIdsShrink()) {
    query["NetworkPathIds"] = request.networkPathIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkPath"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkPathResponse>();
}

/**
 * @summary Deletes a network path.
 *
 * @param request DeleteNetworkPathRequest
 * @return DeleteNetworkPathResponse
 */
DeleteNetworkPathResponse Client::deleteNetworkPath(const DeleteNetworkPathRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkPathWithOptions(request, runtime);
}

/**
 * @summary Deletes a task for analyzing network reachability.
 *
 * @param tmpReq DeleteNetworkReachableAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNetworkReachableAnalysisResponse
 */
DeleteNetworkReachableAnalysisResponse Client::deleteNetworkReachableAnalysisWithOptions(const DeleteNetworkReachableAnalysisRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteNetworkReachableAnalysisShrinkRequest request = DeleteNetworkReachableAnalysisShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasNetworkReachableAnalysisIds()) {
    request.setNetworkReachableAnalysisIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.networkReachableAnalysisIds(), "NetworkReachableAnalysisIds", "json"));
  }

  json query = {};
  if (!!request.hasNetworkReachableAnalysisIdsShrink()) {
    query["NetworkReachableAnalysisIds"] = request.networkReachableAnalysisIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNetworkReachableAnalysis"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNetworkReachableAnalysisResponse>();
}

/**
 * @summary Deletes a task for analyzing network reachability.
 *
 * @param request DeleteNetworkReachableAnalysisRequest
 * @return DeleteNetworkReachableAnalysisResponse
 */
DeleteNetworkReachableAnalysisResponse Client::deleteNetworkReachableAnalysis(const DeleteNetworkReachableAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNetworkReachableAnalysisWithOptions(request, runtime);
}

/**
 * @summary 删除报告
 *
 * @param request DeleteNisInspectionReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNisInspectionReportResponse
 */
DeleteNisInspectionReportResponse Client::deleteNisInspectionReportWithOptions(const DeleteNisInspectionReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.inspectionReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNisInspectionReport"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNisInspectionReportResponse>();
}

/**
 * @summary 删除报告
 *
 * @param request DeleteNisInspectionReportRequest
 * @return DeleteNisInspectionReportResponse
 */
DeleteNisInspectionReportResponse Client::deleteNisInspectionReport(const DeleteNisInspectionReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNisInspectionReportWithOptions(request, runtime);
}

/**
 * @summary 删除巡检任务
 *
 * @param request DeleteNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNisInspectionTaskResponse
 */
DeleteNisInspectionTaskResponse Client::deleteNisInspectionTaskWithOptions(const DeleteNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.inspectionTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteNisInspectionTask"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteNisInspectionTaskResponse>();
}

/**
 * @summary 删除巡检任务
 *
 * @param request DeleteNisInspectionTaskRequest
 * @return DeleteNisInspectionTaskResponse
 */
DeleteNisInspectionTaskResponse Client::deleteNisInspectionTask(const DeleteNisInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNisInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary 受影响资源列表
 *
 * @param request DescribeNisInspectionRecommendationResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionRecommendationResourcesResponse
 */
DescribeNisInspectionRecommendationResourcesResponse Client::describeNisInspectionRecommendationResourcesWithOptions(const DescribeNisInspectionRecommendationResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.inspectionReportId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRecommendationCode()) {
    query["RecommendationCode"] = request.recommendationCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNisInspectionRecommendationResources"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNisInspectionRecommendationResourcesResponse>();
}

/**
 * @summary 受影响资源列表
 *
 * @param request DescribeNisInspectionRecommendationResourcesRequest
 * @return DescribeNisInspectionRecommendationResourcesResponse
 */
DescribeNisInspectionRecommendationResourcesResponse Client::describeNisInspectionRecommendationResources(const DescribeNisInspectionRecommendationResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionRecommendationResourcesWithOptions(request, runtime);
}

/**
 * @summary 报告巡检项列表
 *
 * @param tmpReq DescribeNisInspectionReportCheckItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionReportCheckItemsResponse
 */
DescribeNisInspectionReportCheckItemsResponse Client::describeNisInspectionReportCheckItemsWithOptions(const DescribeNisInspectionReportCheckItemsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeNisInspectionReportCheckItemsShrinkRequest request = DescribeNisInspectionReportCheckItemsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResourceType()) {
    request.setResourceTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.resourceType(), "ResourceType", "json"));
  }

  if (!!tmpReq.hasRiskLevel()) {
    request.setRiskLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.riskLevel(), "RiskLevel", "json"));
  }

  json query = {};
  if (!!request.hasCategoryCode()) {
    query["CategoryCode"] = request.categoryCode();
  }

  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.inspectionReportId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.language();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasResourceTypeShrink()) {
    query["ResourceType"] = request.resourceTypeShrink();
  }

  if (!!request.hasRiskLevelShrink()) {
    query["RiskLevel"] = request.riskLevelShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNisInspectionReportCheckItems"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNisInspectionReportCheckItemsResponse>();
}

/**
 * @summary 报告巡检项列表
 *
 * @param request DescribeNisInspectionReportCheckItemsRequest
 * @return DescribeNisInspectionReportCheckItemsResponse
 */
DescribeNisInspectionReportCheckItemsResponse Client::describeNisInspectionReportCheckItems(const DescribeNisInspectionReportCheckItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionReportCheckItemsWithOptions(request, runtime);
}

/**
 * @summary 查询报告状态
 *
 * @param request DescribeNisInspectionReportStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionReportStatusResponse
 */
DescribeNisInspectionReportStatusResponse Client::describeNisInspectionReportStatusWithOptions(const DescribeNisInspectionReportStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.inspectionReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNisInspectionReportStatus"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNisInspectionReportStatusResponse>();
}

/**
 * @summary 查询报告状态
 *
 * @param request DescribeNisInspectionReportStatusRequest
 * @return DescribeNisInspectionReportStatusResponse
 */
DescribeNisInspectionReportStatusResponse Client::describeNisInspectionReportStatus(const DescribeNisInspectionReportStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionReportStatusWithOptions(request, runtime);
}

/**
 * @summary 报告总结信息
 *
 * @param request DescribeNisInspectionReportSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionReportSummaryResponse
 */
DescribeNisInspectionReportSummaryResponse Client::describeNisInspectionReportSummaryWithOptions(const DescribeNisInspectionReportSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.inspectionReportId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNisInspectionReportSummary"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNisInspectionReportSummaryResponse>();
}

/**
 * @summary 报告总结信息
 *
 * @param request DescribeNisInspectionReportSummaryRequest
 * @return DescribeNisInspectionReportSummaryResponse
 */
DescribeNisInspectionReportSummaryResponse Client::describeNisInspectionReportSummary(const DescribeNisInspectionReportSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionReportSummaryWithOptions(request, runtime);
}

/**
 * @summary 查询巡检任务
 *
 * @param request DescribeNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionTaskResponse
 */
DescribeNisInspectionTaskResponse Client::describeNisInspectionTaskWithOptions(const DescribeNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.inspectionTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNisInspectionTask"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNisInspectionTaskResponse>();
}

/**
 * @summary 查询巡检任务
 *
 * @param request DescribeNisInspectionTaskRequest
 * @return DescribeNisInspectionTaskResponse
 */
DescribeNisInspectionTaskResponse Client::describeNisInspectionTask(const DescribeNisInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionTaskWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetInternetTuple is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the rankings of Internet traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Internet traffic data can be ranked by metrics such as traffic volumes and the number of packets.
 *
 * @param tmpReq GetInternetTupleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInternetTupleResponse
 */
GetInternetTupleResponse Client::getInternetTupleWithOptions(const GetInternetTupleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetInternetTupleShrinkRequest request = GetInternetTupleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCloudIpList()) {
    request.setCloudIpListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.cloudIpList(), "CloudIpList", "json"));
  }

  if (!!tmpReq.hasInstanceList()) {
    request.setInstanceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.instanceList(), "InstanceList", "json"));
  }

  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.accountIds();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasCloudIp()) {
    query["CloudIp"] = request.cloudIp();
  }

  if (!!request.hasCloudIpListShrink()) {
    query["CloudIpList"] = request.cloudIpListShrink();
  }

  if (!!request.hasCloudIsp()) {
    query["CloudIsp"] = request.cloudIsp();
  }

  if (!!request.hasCloudPort()) {
    query["CloudPort"] = request.cloudPort();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasInstanceListShrink()) {
    query["InstanceList"] = request.instanceListShrink();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOtherCity()) {
    query["OtherCity"] = request.otherCity();
  }

  if (!!request.hasOtherCountry()) {
    query["OtherCountry"] = request.otherCountry();
  }

  if (!!request.hasOtherIp()) {
    query["OtherIp"] = request.otherIp();
  }

  if (!!request.hasOtherIsp()) {
    query["OtherIsp"] = request.otherIsp();
  }

  if (!!request.hasOtherPort()) {
    query["OtherPort"] = request.otherPort();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.topN();
  }

  if (!!request.hasTupleType()) {
    query["TupleType"] = request.tupleType();
  }

  if (!!request.hasUseMultiAccount()) {
    query["UseMultiAccount"] = request.useMultiAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInternetTuple"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInternetTupleResponse>();
}

/**
 * @deprecated OpenAPI GetInternetTuple is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the rankings of Internet traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Internet traffic data can be ranked by metrics such as traffic volumes and the number of packets.
 *
 * @param request GetInternetTupleRequest
 * @return GetInternetTupleResponse
 */
GetInternetTupleResponse Client::getInternetTuple(const GetInternetTupleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInternetTupleWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetNatTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the real-time SNAT performance ranking of a NAT gateway.
 *
 * @param request GetNatTopNRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNatTopNResponse
 */
GetNatTopNResponse Client::getNatTopNWithOptions(const GetNatTopNRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.ip();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.natGatewayId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.topN();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNatTopN"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNatTopNResponse>();
}

/**
 * @deprecated OpenAPI GetNatTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the real-time SNAT performance ranking of a NAT gateway.
 *
 * @param request GetNatTopNRequest
 * @return GetNatTopNResponse
 */
GetNatTopNResponse Client::getNatTopN(const GetNatTopNRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNatTopNWithOptions(request, runtime);
}

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
GetNetworkReachableAnalysisResponse Client::getNetworkReachableAnalysisWithOptions(const GetNetworkReachableAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkReachableAnalysisId()) {
    query["NetworkReachableAnalysisId"] = request.networkReachableAnalysisId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNetworkReachableAnalysis"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNetworkReachableAnalysisResponse>();
}

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
GetNetworkReachableAnalysisResponse Client::getNetworkReachableAnalysis(const GetNetworkReachableAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkReachableAnalysisWithOptions(request, runtime);
}

/**
 * @summary 获取云网络指标趋势
 *
 * @param tmpReq GetNisNetworkMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNisNetworkMetricsResponse
 */
GetNisNetworkMetricsResponse Client::getNisNetworkMetricsWithOptions(const GetNisNetworkMetricsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNisNetworkMetricsShrinkRequest request = GetNisNetworkMetricsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDimensions()) {
    request.setDimensionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.dimensions(), "Dimensions", "json"));
  }

  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.accountIds();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasDimensionsShrink()) {
    query["Dimensions"] = request.dimensionsShrink();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.metricName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasScanBy()) {
    query["ScanBy"] = request.scanBy();
  }

  if (!!request.hasStepMinutes()) {
    query["StepMinutes"] = request.stepMinutes();
  }

  if (!!request.hasUseCrossAccount()) {
    query["UseCrossAccount"] = request.useCrossAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNisNetworkMetrics"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNisNetworkMetricsResponse>();
}

/**
 * @summary 获取云网络指标趋势
 *
 * @param request GetNisNetworkMetricsRequest
 * @return GetNisNetworkMetricsResponse
 */
GetNisNetworkMetricsResponse Client::getNisNetworkMetrics(const GetNisNetworkMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNisNetworkMetricsWithOptions(request, runtime);
}

/**
 * @summary 获取云网络指标排名
 *
 * @param tmpReq GetNisNetworkRankingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNisNetworkRankingResponse
 */
GetNisNetworkRankingResponse Client::getNisNetworkRankingWithOptions(const GetNisNetworkRankingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNisNetworkRankingShrinkRequest request = GetNisNetworkRankingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.filter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.accountIds();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.filterShrink();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.groupBy();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.regionNo();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.topN();
  }

  if (!!request.hasUseCrossAccount()) {
    query["UseCrossAccount"] = request.useCrossAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNisNetworkRanking"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNisNetworkRankingResponse>();
}

/**
 * @summary 获取云网络指标排名
 *
 * @param request GetNisNetworkRankingRequest
 * @return GetNisNetworkRankingResponse
 */
GetNisNetworkRankingResponse Client::getNisNetworkRanking(const GetNisNetworkRankingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNisNetworkRankingWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetTransitRouterFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the rankings of inter-region traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Inter-region traffic data can be ranked by metrics such as traffic volumes and the number of packets.
 *
 * @param tmpReq GetTransitRouterFlowTopNRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetTransitRouterFlowTopNResponse
 */
GetTransitRouterFlowTopNResponse Client::getTransitRouterFlowTopNWithOptions(const GetTransitRouterFlowTopNRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetTransitRouterFlowTopNShrinkRequest request = GetTransitRouterFlowTopNShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountIds(), "AccountIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.accountIdsShrink();
  }

  if (!!request.hasBandwithPackageId()) {
    query["BandwithPackageId"] = request.bandwithPackageId();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.groupBy();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOtherIp()) {
    query["OtherIp"] = request.otherIp();
  }

  if (!!request.hasOtherPort()) {
    query["OtherPort"] = request.otherPort();
  }

  if (!!request.hasOtherRegion()) {
    query["OtherRegion"] = request.otherRegion();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasThisIp()) {
    query["ThisIp"] = request.thisIp();
  }

  if (!!request.hasThisPort()) {
    query["ThisPort"] = request.thisPort();
  }

  if (!!request.hasThisRegion()) {
    query["ThisRegion"] = request.thisRegion();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.topN();
  }

  if (!!request.hasUseMultiAccount()) {
    query["UseMultiAccount"] = request.useMultiAccount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetTransitRouterFlowTopN"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetTransitRouterFlowTopNResponse>();
}

/**
 * @deprecated OpenAPI GetTransitRouterFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the rankings of inter-region traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Inter-region traffic data can be ranked by metrics such as traffic volumes and the number of packets.
 *
 * @param request GetTransitRouterFlowTopNRequest
 * @return GetTransitRouterFlowTopNResponse
 */
GetTransitRouterFlowTopNResponse Client::getTransitRouterFlowTopN(const GetTransitRouterFlowTopNRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getTransitRouterFlowTopNWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI GetVbrFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the rankings of hybrid cloud traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Hybrid cloud traffic data can be ranked by metrics such as traffic volumes and the number of packets.
 *
 * @param tmpReq GetVbrFlowTopNRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVbrFlowTopNResponse
 */
GetVbrFlowTopNResponse Client::getVbrFlowTopNWithOptions(const GetVbrFlowTopNRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetVbrFlowTopNShrinkRequest request = GetVbrFlowTopNShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAccountIds()) {
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.accountIds(), "AccountIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.accountIdsShrink();
  }

  if (!!request.hasAttachmentId()) {
    query["AttachmentId"] = request.attachmentId();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.beginTime();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.cenId();
  }

  if (!!request.hasCloudIp()) {
    query["CloudIp"] = request.cloudIp();
  }

  if (!!request.hasCloudPort()) {
    query["CloudPort"] = request.cloudPort();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.direction();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.groupBy();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasOtherIp()) {
    query["OtherIp"] = request.otherIp();
  }

  if (!!request.hasOtherPort()) {
    query["OtherPort"] = request.otherPort();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.protocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.sort();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.topN();
  }

  if (!!request.hasUseMultiAccount()) {
    query["UseMultiAccount"] = request.useMultiAccount();
  }

  if (!!request.hasVirtualBorderRouterId()) {
    query["VirtualBorderRouterId"] = request.virtualBorderRouterId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetVbrFlowTopN"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVbrFlowTopNResponse>();
}

/**
 * @deprecated OpenAPI GetVbrFlowTopN is deprecated, please use nis::2021-12-16::GetNisNetworkRanking instead.
 *
 * @summary Queries the rankings of hybrid cloud traffic data in the form of 1-tuple, 2-tuple, or 5-tuple. Hybrid cloud traffic data can be ranked by metrics such as traffic volumes and the number of packets.
 *
 * @param request GetVbrFlowTopNRequest
 * @return GetVbrFlowTopNResponse
 */
GetVbrFlowTopNResponse Client::getVbrFlowTopN(const GetVbrFlowTopNRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVbrFlowTopNWithOptions(request, runtime);
}

/**
 * @summary 巡检资源类型列表
 *
 * @param request ListNisInspectionResourceTypeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNisInspectionResourceTypeResponse
 */
ListNisInspectionResourceTypeResponse Client::listNisInspectionResourceTypeWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListNisInspectionResourceType"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNisInspectionResourceTypeResponse>();
}

/**
 * @summary 巡检资源类型列表
 *
 * @return ListNisInspectionResourceTypeResponse
 */
ListNisInspectionResourceTypeResponse Client::listNisInspectionResourceType() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNisInspectionResourceTypeWithOptions(runtime);
}

/**
 * @summary 查询巡检报告列表
 *
 * @param request ListNisInspectionTaskReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNisInspectionTaskReportsResponse
 */
ListNisInspectionTaskReportsResponse Client::listNisInspectionTaskReportsWithOptions(const ListNisInspectionTaskReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.inspectionTaskId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNisInspectionTaskReports"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNisInspectionTaskReportsResponse>();
}

/**
 * @summary 查询巡检报告列表
 *
 * @param request ListNisInspectionTaskReportsRequest
 * @return ListNisInspectionTaskReportsResponse
 */
ListNisInspectionTaskReportsResponse Client::listNisInspectionTaskReports(const ListNisInspectionTaskReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNisInspectionTaskReportsWithOptions(request, runtime);
}

/**
 * @summary 巡检任务列表
 *
 * @param request ListNisInspectionTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNisInspectionTasksResponse
 */
ListNisInspectionTasksResponse Client::listNisInspectionTasksWithOptions(const ListNisInspectionTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionName()) {
    query["InspectionName"] = request.inspectionName();
  }

  if (!!request.hasInspectionProject()) {
    query["InspectionProject"] = request.inspectionProject();
  }

  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.inspectionTaskId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListNisInspectionTasks"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNisInspectionTasksResponse>();
}

/**
 * @summary 巡检任务列表
 *
 * @param request ListNisInspectionTasksRequest
 * @return ListNisInspectionTasksResponse
 */
ListNisInspectionTasksResponse Client::listNisInspectionTasks(const ListNisInspectionTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNisInspectionTasksWithOptions(request, runtime);
}

/**
 * @summary 请补充描述开启任务
 *
 * @param request StartNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartNisInspectionTaskResponse
 */
StartNisInspectionTaskResponse Client::startNisInspectionTaskWithOptions(const StartNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.inspectionTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartNisInspectionTask"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartNisInspectionTaskResponse>();
}

/**
 * @summary 请补充描述开启任务
 *
 * @param request StartNisInspectionTaskRequest
 * @return StartNisInspectionTaskResponse
 */
StartNisInspectionTaskResponse Client::startNisInspectionTask(const StartNisInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startNisInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary 修改巡检项
 *
 * @param request UpdateNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNisInspectionTaskResponse
 */
UpdateNisInspectionTaskResponse Client::updateNisInspectionTaskWithOptions(const UpdateNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.inspectionTaskId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateNisInspectionTask"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateNisInspectionTaskResponse>();
}

/**
 * @summary 修改巡检项
 *
 * @param request UpdateNisInspectionTaskRequest
 * @return UpdateNisInspectionTaskResponse
 */
UpdateNisInspectionTaskResponse Client::updateNisInspectionTask(const UpdateNisInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateNisInspectionTaskWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Nis20211216