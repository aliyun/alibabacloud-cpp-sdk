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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "nis.aliyuncs.com"},
    {"ap-southeast-1" , "nis-intl.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Creates a network path for reachability analysis.
 *
 * @description - You can call the **CreateNetworkPath** operation to create network paths in multiple networking scenarios and between multiple resources. After a path is created, the path parameters are saved for repeated analysis.
 * - You can create up to 100 network paths within one Alibaba Cloud account.
 *
 * @param request CreateNetworkPathRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkPathResponse
 */
CreateNetworkPathResponse Client::createNetworkPathWithOptions(const CreateNetworkPathRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPathDescription()) {
    query["NetworkPathDescription"] = request.getNetworkPathDescription();
  }

  if (!!request.hasNetworkPathName()) {
    query["NetworkPathName"] = request.getNetworkPathName();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasSourceIpAddress()) {
    query["SourceIpAddress"] = request.getSourceIpAddress();
  }

  if (!!request.hasSourcePort()) {
    query["SourcePort"] = request.getSourcePort();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetIpAddress()) {
    query["TargetIpAddress"] = request.getTargetIpAddress();
  }

  if (!!request.hasTargetPort()) {
    query["TargetPort"] = request.getTargetPort();
  }

  if (!!request.hasTargetType()) {
    query["TargetType"] = request.getTargetType();
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
 * @summary Creates a network path for reachability analysis.
 *
 * @description - You can call the **CreateNetworkPath** operation to create network paths in multiple networking scenarios and between multiple resources. After a path is created, the path parameters are saved for repeated analysis.
 * - You can create up to 100 network paths within one Alibaba Cloud account.
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
 * @description - The **CreateNetworkReachableAnalysis** operation is used to create a task for analyzing the reachability of the network path that is created by calling the **CreateNetworkPath** operation and record the analysis results.
 * - The **CreateNetworkReachableAnalysis** operation can be called to repeatedly analyze the reachability of a network path.
 * - You can create up to 1,000 reachability analysis records within one Alibaba Cloud account.
 *
 * @param request CreateNetworkReachableAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateNetworkReachableAnalysisResponse
 */
CreateNetworkReachableAnalysisResponse Client::createNetworkReachableAnalysisWithOptions(const CreateNetworkReachableAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkPathId()) {
    query["NetworkPathId"] = request.getNetworkPathId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @description - The **CreateNetworkReachableAnalysis** operation is used to create a task for analyzing the reachability of the network path that is created by calling the **CreateNetworkPath** operation and record the analysis results.
 * - The **CreateNetworkReachableAnalysis** operation can be called to repeatedly analyze the reachability of a network path.
 * - You can create up to 1,000 reachability analysis records within one Alibaba Cloud account.
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
    request.setNetworkPathIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworkPathIds(), "NetworkPathIds", "json"));
  }

  json query = {};
  if (!!request.hasNetworkPathIdsShrink()) {
    query["NetworkPathIds"] = request.getNetworkPathIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
    request.setNetworkReachableAnalysisIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getNetworkReachableAnalysisIds(), "NetworkReachableAnalysisIds", "json"));
  }

  json query = {};
  if (!!request.hasNetworkReachableAnalysisIdsShrink()) {
    query["NetworkReachableAnalysisIds"] = request.getNetworkReachableAnalysisIdsShrink();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes an inspection report.
 *
 * @param request DeleteNisInspectionReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNisInspectionReportResponse
 */
DeleteNisInspectionReportResponse Client::deleteNisInspectionReportWithOptions(const DeleteNisInspectionReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.getInspectionReportId();
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
 * @summary Deletes an inspection report.
 *
 * @param request DeleteNisInspectionReportRequest
 * @return DeleteNisInspectionReportResponse
 */
DeleteNisInspectionReportResponse Client::deleteNisInspectionReport(const DeleteNisInspectionReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNisInspectionReportWithOptions(request, runtime);
}

/**
 * @summary Deletes an inspection task.
 *
 * @param request DeleteNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteNisInspectionTaskResponse
 */
DeleteNisInspectionTaskResponse Client::deleteNisInspectionTaskWithOptions(const DeleteNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.getInspectionTaskId();
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
 * @summary Deletes an inspection task.
 *
 * @param request DeleteNisInspectionTaskRequest
 * @return DeleteNisInspectionTaskResponse
 */
DeleteNisInspectionTaskResponse Client::deleteNisInspectionTask(const DeleteNisInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteNisInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the instances of abnormal items identified in an inspection report.
 *
 * @param request DescribeNisInspectionRecommendationResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionRecommendationResourcesResponse
 */
DescribeNisInspectionRecommendationResourcesResponse Client::describeNisInspectionRecommendationResourcesWithOptions(const DescribeNisInspectionRecommendationResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.getInspectionReportId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRecommendationCode()) {
    query["RecommendationCode"] = request.getRecommendationCode();
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
 * @summary Queries the instances of abnormal items identified in an inspection report.
 *
 * @param request DescribeNisInspectionRecommendationResourcesRequest
 * @return DescribeNisInspectionRecommendationResourcesResponse
 */
DescribeNisInspectionRecommendationResourcesResponse Client::describeNisInspectionRecommendationResources(const DescribeNisInspectionRecommendationResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionRecommendationResourcesWithOptions(request, runtime);
}

/**
 * @summary Describes the details of check items in an inspection report.
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
    request.setResourceTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResourceType(), "ResourceType", "json"));
  }

  if (!!tmpReq.hasRiskLevel()) {
    request.setRiskLevelShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRiskLevel(), "RiskLevel", "json"));
  }

  json query = {};
  if (!!request.hasCategoryCode()) {
    query["CategoryCode"] = request.getCategoryCode();
  }

  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.getInspectionReportId();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasResourceTypeShrink()) {
    query["ResourceType"] = request.getResourceTypeShrink();
  }

  if (!!request.hasRiskLevelShrink()) {
    query["RiskLevel"] = request.getRiskLevelShrink();
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
 * @summary Describes the details of check items in an inspection report.
 *
 * @param request DescribeNisInspectionReportCheckItemsRequest
 * @return DescribeNisInspectionReportCheckItemsResponse
 */
DescribeNisInspectionReportCheckItemsResponse Client::describeNisInspectionReportCheckItems(const DescribeNisInspectionReportCheckItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionReportCheckItemsWithOptions(request, runtime);
}

/**
 * @summary Describes the status of an inspection report.
 *
 * @param request DescribeNisInspectionReportStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionReportStatusResponse
 */
DescribeNisInspectionReportStatusResponse Client::describeNisInspectionReportStatusWithOptions(const DescribeNisInspectionReportStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.getInspectionReportId();
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
 * @summary Describes the status of an inspection report.
 *
 * @param request DescribeNisInspectionReportStatusRequest
 * @return DescribeNisInspectionReportStatusResponse
 */
DescribeNisInspectionReportStatusResponse Client::describeNisInspectionReportStatus(const DescribeNisInspectionReportStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionReportStatusWithOptions(request, runtime);
}

/**
 * @summary Queries an inspection report summary.
 *
 * @param request DescribeNisInspectionReportSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionReportSummaryResponse
 */
DescribeNisInspectionReportSummaryResponse Client::describeNisInspectionReportSummaryWithOptions(const DescribeNisInspectionReportSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionReportId()) {
    query["InspectionReportId"] = request.getInspectionReportId();
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
 * @summary Queries an inspection report summary.
 *
 * @param request DescribeNisInspectionReportSummaryRequest
 * @return DescribeNisInspectionReportSummaryResponse
 */
DescribeNisInspectionReportSummaryResponse Client::describeNisInspectionReportSummary(const DescribeNisInspectionReportSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionReportSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an inspection task.
 *
 * @param request DescribeNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisInspectionTaskResponse
 */
DescribeNisInspectionTaskResponse Client::describeNisInspectionTaskWithOptions(const DescribeNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.getInspectionTaskId();
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
 * @summary Queries the details of an inspection task.
 *
 * @param request DescribeNisInspectionTaskRequest
 * @return DescribeNisInspectionTaskResponse
 */
DescribeNisInspectionTaskResponse Client::describeNisInspectionTask(const DescribeNisInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Queries the results of NIS traffic ranking analysis.
 *
 * @description [Before using this operation, make sure that you fully understand the billing method and pricing of the NIS Traffic Analyzer.](https://www.alibabacloud.com/help/en/nis/product-overview/billing-method-new-version)
 * Supported analysis scenarios: 
 * - All VPC network traffic analysis
 * - Public VPC network traffic analysis
 * - All TR network traffic analysis
 * - Internet Shared Bandwidth metric analysis
 * ## VPC flow log - All VPC flow log query and analysis results
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name               | Type   | Description                                                                                       | Example            | Valid values   |
 * |--------------------|--------|---------------------------------------------------------------------------------------------------|--------------------|----------|
 * | RegionId           | string | The region where the flow log resides.                                                            | ap-southeast-1     |          |
 * | VpcId              | string | The VPC ID.                                                                                       | vpc-m5ec6i0h5xss*** |         |
 * | VSwitchId          | string | The vSwitch ID.                                                                                   | vsw-2zeekevlh****  |          |
 * | NetworkInterfaceId | string | The elastic network interface (ENI) ID.                                                           | eni-8vbf2jxul***   |          |
 * | EcsId              | string | The ECS instance ID of the management node.                                                       | i-uf6i1zi6yhq7h*** |          |
 * | TrafficPath        | string | The traffic path.                                                                                 | all                |          |
 * | Direction          | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                 | -in / -out |
 * | SourceIp           | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***      |          |
 * | SourcePort         | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432               |          |
 * | DestinationIp      | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0      |          |
 * | DestinationPort    | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                 |          |
 * | Protocol           | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                |          |
 * | Bytes              | number | The bandwidth.                                                                                    | 100                |          |
 * | Packets            | number | The number of packets.                                                                            | 100                |          |
 * | RoundTripTime      | number | The TCP RTT.                                                                                      | 2                  |          |
 * | BytesRate          | number | The traffic ratio.                                                                                | 0.2                |          |
 * ---
 * ## VPC flow log - Public VPC flow log query and analysis results
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name               | Type   | Description                                                                                       | Example                | Valid values   |
 * |--------------------|--------|---------------------------------------------------------------------------------------------------|------------------------|----------|
 * | RegionId           | string | The region where the flow log resides.                                                            | ap-southeast-1         |          |
 * | VpcId              | string | The VPC ID.                                                                                       | vpc-m5ec6i0h5xss***    |          |
 * | VSwitchId          | string | The vSwitch ID.                                                                                   | vsw-2zeekevlh****      |          |
 * | NetworkInterfaceId | string | The elastic network interface (ENI) ID.                                                           | eni-8vbf2jxul***       |          |
 * | EcsId              | string | The ECS instance ID of the management node.                                                       | i-uf6i1zi6yhq7h***     |          |
 * | TrafficPath        | string | The traffic path.                                                                                 | all                    |          |
 * | Direction          | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                     | -in / -out |
 * | SourceIp           | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***          |          |
 * | SourcePort         | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                   |          |
 * | DestinationIp      | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0          |          |
 * | DestinationPort    | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                     |          |
 * | Protocol           | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                    |          |
 * | ClientCountry      | string | The country of the client.                                                                        | China                  |          |
 * | ClientProvince     | string | The province of the client.                                                                       | Hong Kong SAR          |          |
 * | ClientCity         | string | The city of the client.                                                                           | Kowloon                |          |
 * | ClientIsp          | string | The network service provider.                                                                     | Alibaba Cloud          |          |
 * | ClientAsn          | string | The autonomous system number.                                                                     | 45102                  |          |
 * | Bytes              | number | The bandwidth.                                                                                    | 100                    |          |
 * | Packets            | number | The number of packets.                                                                            | 100                    |          |
 * | RoundTripTime      | number | The TCP RTT.                                                                                      | 2                      |          |
 * | BytesRate          | number | The traffic ratio.                                                                                | 0.2                    |          |
 * ---
 * ## TR flow log - TR cross-region scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                      | Type   | Description                                                                                       | Example                 | Valid values   |
 * |---------------------------|--------|---------------------------------------------------------------------------------------------------|-------------------------|----------|
 * | Direction                 | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                      | -in / -out |
 * | SourceIp                  | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***           |          |
 * | SourcePort                | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                    |          |
 * | DestinationIp             | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0           |          |
 * | DestinationPort           | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                      |          |
 * | Protocol                  | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                     |          |
 * | Dscp                      | string | The Differentiated Services Code Point (DSCP) value.                                              | 0                       |          |
 * | DestinationRegionNo       | string | The destination region ID.                                                                        | ap-southeast-1          |          |
 * | SourceRegionNo            | string | The source region ID.                                                                             | ap-southeast-1          |          |
 * | TransitRouterAttachmentId | string | The network instance connection ID.                                                               | tr-attach-bfde1cd4cj*** |          |
 * | TransitRouterId           | string | The transit router instance ID.                                                                   | tr-2zefvwy2fz3444***    |          |
 * | TransitRouterPairAttachmentId | string | The transit router peering connection instance ID.                                            | tr-attach-okvj1cd4cjp*** |         |
 * | Bytes                     | number | The bandwidth.                                                                                    | 100                     |          |
 * | Packets                   | number | The number of packets.                                                                            | 100                     |          |
 * | BytesRate                 | number | The traffic ratio.                                                                                | 0.2                     |          |
 * | PacketsLostNoRoute        | number | The number of packets dropped due to no route.                                                    | 2                       |          |
 * | PacketsLostBlackhole      | number | The number of packets dropped due to blackhole routes.                                            | 4                       |          |
 * | PacketsLostTTLExpired     | number | The number of packets dropped due to TTL expiration.                                              | 7                       |          |
 * ---
 * ## TR flow log - VPC connection traffic scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                                   | Type   | Description                                                                                       | Example                         | Valid values   |
 * |----------------------------------------|--------|---------------------------------------------------------------------------------------------------|---------------------------------|----------|
 * | Direction                              | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                              | -in / -out |
 * | SourceIp                               | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***                   |          |
 * | SourcePort                             | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                            |          |
 * | DestinationIp                          | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0                   |          |
 * | DestinationPort                        | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                              |          |
 * | Protocol                               | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                             |          |
 * | Dscp                                   | string | The Differentiated Services Code Point (DSCP) value.                                              | 0                               |          |
 * | DestinationRegionNo                    | string | The destination region ID.                                                                        | ap-southeast-1                  |          |
 * | SourceRegionNo                         | string | The source region ID.                                                                             | ap-southeast-1                  |          |
 * | TransitRouterAttachmentId              | string | The network instance connection ID.                                                               | tr-attach-bfde1cd4cj***         |          |
 * | TransitRouterId                        | string | The transit router instance ID.                                                                   | tr-2zefvwy2fz3444***            |          |
 * | TransitRouterPairAttachmentId          | string | The transit router peering connection instance ID.                                                 | tr-attach-okvj1cd4cjp***        |          |
 * | TransitRouterSourceResourceId          | string | The source network instance ID.                                                                   | tr-attach-hvve1cd4cjpj***       |          |
 * | TransitRouterSourceAccountId           | string | The account ID of the source network instance.                                                    | 1906814138***                   |          |
 * | TransitRouterSourceVSwitchId           | string | The vSwitch ID of the source TR ENI.                                                              | vsw-ikfdkevlhxpqxuz****         |          |
 * | TransitRouterSourceNetworkInterface    | string | The source TR ENI.                                                                                | eni-8vbf2jxulma***              |          |
 * | TransitRouterSourceAvailableZone       | string | The source zone ID.                                                                               | ap-southeast-1-j                |          |
 * | TransitRouterDestinationResourceId     | string | The destination network instance ID.                                                              | tr-attach-bfve1cd4cjp****       |          |
 * | TransitRouterDestinationAccountId      | string | The account ID of the destination network instance.                                               | 1906814138***                   |          |
 * | TransitRouterDestinationVSwitchId      | string | The vSwitch ID of the destination TR ENI.                                                         | vsw-ikfdkevlhxpqxuz****         |          |
 * | TransitRouterDestinationNetworkInterface | string | The destination TR ENI.                                                                         | eni-7kcf2jxulma***              |          |
 * | TransitRouterDestinationAvailableZone  | string | The destination zone ID.                                                                          | ap-southeast-1-j                |          |
 * | Bytes                                  | number | The bandwidth.                                                                                    | 100                             |          |
 * | Packets                                | number | The number of packets.                                                                            | 100                             |          |
 * | BytesRate                              | number | The traffic ratio.                                                                                | 0.2                             |          |
 * | PacketsLostNoRoute                     | number | The number of packets dropped due to no route.                                                    | 2                               |          |
 * | PacketsLostBlackhole                   | number | The number of packets dropped due to blackhole routes.                                            | 4                               |          |
 * | PacketsLostTTLExpired                  | number | The number of packets dropped due to TTL expiration.                                              | 7                               |          |
 * ---
 * ## TR flow log - VBR traffic scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                              | Type   | Description                                                                                       | Example                         | Valid values   |
 * |-----------------------------------|--------|---------------------------------------------------------------------------------------------------|---------------------------------|----------|
 * | Direction                         | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                              | -in / -out |
 * | SourceIp                          | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***                   |          |
 * | SourcePort                        | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                            |          |
 * | DestinationIp                     | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0                   |          |
 * | DestinationPort                   | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                              |          |
 * | Protocol                          | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                             |          |
 * | Dscp                              | string | The Differentiated Services Code Point (DSCP) value.                                              | 0                               |          |
 * | DestinationRegionNo               | string | The destination region ID.                                                                        | ap-southeast-1                  |          |
 * | SourceRegionNo                    | string | The source region ID.                                                                             | ap-southeast-1                  |          |
 * | TransitRouterAttachmentId         | string | The network instance connection ID.                                                               | tr-attach-bfde1cd4cj***         |          |
 * | TransitRouterId                   | string | The transit router instance ID.                                                                   | tr-2zefvwy2fz3444***            |          |
 * | TransitRouterPairAttachmentId     | string | The transit router peering connection instance ID.                                                 | tr-attach-okvj1cd4cjp***        |          |
 * | TransitRouterSourceResourceId     | string | The source network instance ID.                                                                   | tr-attach-hvve1cd4cjpj***       |          |
 * | TransitRouterSourceAccountId      | string | The account ID of the source network instance.                                                    | 1906814138***                   |          |
 * | TransitRouterDestinationResourceId| string | The destination network instance ID.                                                              | tr-attach-bfve1cd4cjp****       |          |
 * | TransitRouterDestinationAccountId | string | The account ID of the destination network instance.                                               | 1906814138***                   |          |
 * | Bytes                             | number | The bandwidth.                                                                                    | 100                             |          |
 * | Packets                           | number | The number of packets.                                                                            | 100                             |          |
 * | BytesRate                         | number | The traffic ratio.                                                                                | 0.2                             |          |
 * | PacketsLostNoRoute                | number | The number of packets dropped due to no route.                                                    | 2                               |          |
 * | PacketsLostBlackhole              | number | The number of packets dropped due to blackhole routes.                                            | 4                               |          |
 * | PacketsLostTTLExpired             | number | The number of packets dropped due to TTL expiration.                                              | 7                               |          |
 * ---
 * ## TR flow log - ECR traffic scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                              | Type   | Description                                                                                       | Example                         | Valid values   |
 * |-----------------------------------|--------|---------------------------------------------------------------------------------------------------|---------------------------------|----------|
 * | Direction                         | string | The traffic direction based on the
 *
 * @param request DescribeNisTrafficRankingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNisTrafficRankingResponse
 */
DescribeNisTrafficRankingResponse Client::describeNisTrafficRankingWithOptions(const DescribeNisTrafficRankingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasNisTrafficRankingId()) {
    query["NisTrafficRankingId"] = request.getNisTrafficRankingId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNisTrafficRanking"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNisTrafficRankingResponse>();
}

/**
 * @summary Queries the results of NIS traffic ranking analysis.
 *
 * @description [Before using this operation, make sure that you fully understand the billing method and pricing of the NIS Traffic Analyzer.](https://www.alibabacloud.com/help/en/nis/product-overview/billing-method-new-version)
 * Supported analysis scenarios: 
 * - All VPC network traffic analysis
 * - Public VPC network traffic analysis
 * - All TR network traffic analysis
 * - Internet Shared Bandwidth metric analysis
 * ## VPC flow log - All VPC flow log query and analysis results
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name               | Type   | Description                                                                                       | Example            | Valid values   |
 * |--------------------|--------|---------------------------------------------------------------------------------------------------|--------------------|----------|
 * | RegionId           | string | The region where the flow log resides.                                                            | ap-southeast-1     |          |
 * | VpcId              | string | The VPC ID.                                                                                       | vpc-m5ec6i0h5xss*** |         |
 * | VSwitchId          | string | The vSwitch ID.                                                                                   | vsw-2zeekevlh****  |          |
 * | NetworkInterfaceId | string | The elastic network interface (ENI) ID.                                                           | eni-8vbf2jxul***   |          |
 * | EcsId              | string | The ECS instance ID of the management node.                                                       | i-uf6i1zi6yhq7h*** |          |
 * | TrafficPath        | string | The traffic path.                                                                                 | all                |          |
 * | Direction          | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                 | -in / -out |
 * | SourceIp           | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***      |          |
 * | SourcePort         | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432               |          |
 * | DestinationIp      | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0      |          |
 * | DestinationPort    | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                 |          |
 * | Protocol           | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                |          |
 * | Bytes              | number | The bandwidth.                                                                                    | 100                |          |
 * | Packets            | number | The number of packets.                                                                            | 100                |          |
 * | RoundTripTime      | number | The TCP RTT.                                                                                      | 2                  |          |
 * | BytesRate          | number | The traffic ratio.                                                                                | 0.2                |          |
 * ---
 * ## VPC flow log - Public VPC flow log query and analysis results
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name               | Type   | Description                                                                                       | Example                | Valid values   |
 * |--------------------|--------|---------------------------------------------------------------------------------------------------|------------------------|----------|
 * | RegionId           | string | The region where the flow log resides.                                                            | ap-southeast-1         |          |
 * | VpcId              | string | The VPC ID.                                                                                       | vpc-m5ec6i0h5xss***    |          |
 * | VSwitchId          | string | The vSwitch ID.                                                                                   | vsw-2zeekevlh****      |          |
 * | NetworkInterfaceId | string | The elastic network interface (ENI) ID.                                                           | eni-8vbf2jxul***       |          |
 * | EcsId              | string | The ECS instance ID of the management node.                                                       | i-uf6i1zi6yhq7h***     |          |
 * | TrafficPath        | string | The traffic path.                                                                                 | all                    |          |
 * | Direction          | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                     | -in / -out |
 * | SourceIp           | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***          |          |
 * | SourcePort         | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                   |          |
 * | DestinationIp      | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0          |          |
 * | DestinationPort    | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                     |          |
 * | Protocol           | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                    |          |
 * | ClientCountry      | string | The country of the client.                                                                        | China                  |          |
 * | ClientProvince     | string | The province of the client.                                                                       | Hong Kong SAR          |          |
 * | ClientCity         | string | The city of the client.                                                                           | Kowloon                |          |
 * | ClientIsp          | string | The network service provider.                                                                     | Alibaba Cloud          |          |
 * | ClientAsn          | string | The autonomous system number.                                                                     | 45102                  |          |
 * | Bytes              | number | The bandwidth.                                                                                    | 100                    |          |
 * | Packets            | number | The number of packets.                                                                            | 100                    |          |
 * | RoundTripTime      | number | The TCP RTT.                                                                                      | 2                      |          |
 * | BytesRate          | number | The traffic ratio.                                                                                | 0.2                    |          |
 * ---
 * ## TR flow log - TR cross-region scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                      | Type   | Description                                                                                       | Example                 | Valid values   |
 * |---------------------------|--------|---------------------------------------------------------------------------------------------------|-------------------------|----------|
 * | Direction                 | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                      | -in / -out |
 * | SourceIp                  | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***           |          |
 * | SourcePort                | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                    |          |
 * | DestinationIp             | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0           |          |
 * | DestinationPort           | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                      |          |
 * | Protocol                  | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                     |          |
 * | Dscp                      | string | The Differentiated Services Code Point (DSCP) value.                                              | 0                       |          |
 * | DestinationRegionNo       | string | The destination region ID.                                                                        | ap-southeast-1          |          |
 * | SourceRegionNo            | string | The source region ID.                                                                             | ap-southeast-1          |          |
 * | TransitRouterAttachmentId | string | The network instance connection ID.                                                               | tr-attach-bfde1cd4cj*** |          |
 * | TransitRouterId           | string | The transit router instance ID.                                                                   | tr-2zefvwy2fz3444***    |          |
 * | TransitRouterPairAttachmentId | string | The transit router peering connection instance ID.                                            | tr-attach-okvj1cd4cjp*** |         |
 * | Bytes                     | number | The bandwidth.                                                                                    | 100                     |          |
 * | Packets                   | number | The number of packets.                                                                            | 100                     |          |
 * | BytesRate                 | number | The traffic ratio.                                                                                | 0.2                     |          |
 * | PacketsLostNoRoute        | number | The number of packets dropped due to no route.                                                    | 2                       |          |
 * | PacketsLostBlackhole      | number | The number of packets dropped due to blackhole routes.                                            | 4                       |          |
 * | PacketsLostTTLExpired     | number | The number of packets dropped due to TTL expiration.                                              | 7                       |          |
 * ---
 * ## TR flow log - VPC connection traffic scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                                   | Type   | Description                                                                                       | Example                         | Valid values   |
 * |----------------------------------------|--------|---------------------------------------------------------------------------------------------------|---------------------------------|----------|
 * | Direction                              | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                              | -in / -out |
 * | SourceIp                               | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***                   |          |
 * | SourcePort                             | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                            |          |
 * | DestinationIp                          | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0                   |          |
 * | DestinationPort                        | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                              |          |
 * | Protocol                               | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                             |          |
 * | Dscp                                   | string | The Differentiated Services Code Point (DSCP) value.                                              | 0                               |          |
 * | DestinationRegionNo                    | string | The destination region ID.                                                                        | ap-southeast-1                  |          |
 * | SourceRegionNo                         | string | The source region ID.                                                                             | ap-southeast-1                  |          |
 * | TransitRouterAttachmentId              | string | The network instance connection ID.                                                               | tr-attach-bfde1cd4cj***         |          |
 * | TransitRouterId                        | string | The transit router instance ID.                                                                   | tr-2zefvwy2fz3444***            |          |
 * | TransitRouterPairAttachmentId          | string | The transit router peering connection instance ID.                                                 | tr-attach-okvj1cd4cjp***        |          |
 * | TransitRouterSourceResourceId          | string | The source network instance ID.                                                                   | tr-attach-hvve1cd4cjpj***       |          |
 * | TransitRouterSourceAccountId           | string | The account ID of the source network instance.                                                    | 1906814138***                   |          |
 * | TransitRouterSourceVSwitchId           | string | The vSwitch ID of the source TR ENI.                                                              | vsw-ikfdkevlhxpqxuz****         |          |
 * | TransitRouterSourceNetworkInterface    | string | The source TR ENI.                                                                                | eni-8vbf2jxulma***              |          |
 * | TransitRouterSourceAvailableZone       | string | The source zone ID.                                                                               | ap-southeast-1-j                |          |
 * | TransitRouterDestinationResourceId     | string | The destination network instance ID.                                                              | tr-attach-bfve1cd4cjp****       |          |
 * | TransitRouterDestinationAccountId      | string | The account ID of the destination network instance.                                               | 1906814138***                   |          |
 * | TransitRouterDestinationVSwitchId      | string | The vSwitch ID of the destination TR ENI.                                                         | vsw-ikfdkevlhxpqxuz****         |          |
 * | TransitRouterDestinationNetworkInterface | string | The destination TR ENI.                                                                         | eni-7kcf2jxulma***              |          |
 * | TransitRouterDestinationAvailableZone  | string | The destination zone ID.                                                                          | ap-southeast-1-j                |          |
 * | Bytes                                  | number | The bandwidth.                                                                                    | 100                             |          |
 * | Packets                                | number | The number of packets.                                                                            | 100                             |          |
 * | BytesRate                              | number | The traffic ratio.                                                                                | 0.2                             |          |
 * | PacketsLostNoRoute                     | number | The number of packets dropped due to no route.                                                    | 2                               |          |
 * | PacketsLostBlackhole                   | number | The number of packets dropped due to blackhole routes.                                            | 4                               |          |
 * | PacketsLostTTLExpired                  | number | The number of packets dropped due to TTL expiration.                                              | 7                               |          |
 * ---
 * ## TR flow log - VBR traffic scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                              | Type   | Description                                                                                       | Example                         | Valid values   |
 * |-----------------------------------|--------|---------------------------------------------------------------------------------------------------|---------------------------------|----------|
 * | Direction                         | string | The traffic direction based on the Alibaba Cloud network resource instance. Valid values:
 * ● in: inbound traffic.
 * ● out: outbound traffic. | in                              | -in / -out |
 * | SourceIp                          | string | The source IP address.
 * ● This field is returned only when 2-tuple statistics are collected.    | 47.92.245.***                   |          |
 * | SourcePort                        | string | The source port.
 * ● This field is returned only when 5-tuple statistics are collected.          | 5432                            |          |
 * | DestinationIp                     | string | The destination IP address.
 * ● This field is returned only when 2-tuple statistics are collected.| 192.168.***.0                   |          |
 * | DestinationPort                   | string | The destination port.
 * ● This field is returned only when 5-tuple statistics are collected.     | 23                              |          |
 * | Protocol                          | string | The network protocol.
 * ● This field is returned only when 5-tuple statistics are collected.     | TCP                             |          |
 * | Dscp                              | string | The Differentiated Services Code Point (DSCP) value.                                              | 0                               |          |
 * | DestinationRegionNo               | string | The destination region ID.                                                                        | ap-southeast-1                  |          |
 * | SourceRegionNo                    | string | The source region ID.                                                                             | ap-southeast-1                  |          |
 * | TransitRouterAttachmentId         | string | The network instance connection ID.                                                               | tr-attach-bfde1cd4cj***         |          |
 * | TransitRouterId                   | string | The transit router instance ID.                                                                   | tr-2zefvwy2fz3444***            |          |
 * | TransitRouterPairAttachmentId     | string | The transit router peering connection instance ID.                                                 | tr-attach-okvj1cd4cjp***        |          |
 * | TransitRouterSourceResourceId     | string | The source network instance ID.                                                                   | tr-attach-hvve1cd4cjpj***       |          |
 * | TransitRouterSourceAccountId      | string | The account ID of the source network instance.                                                    | 1906814138***                   |          |
 * | TransitRouterDestinationResourceId| string | The destination network instance ID.                                                              | tr-attach-bfve1cd4cjp****       |          |
 * | TransitRouterDestinationAccountId | string | The account ID of the destination network instance.                                               | 1906814138***                   |          |
 * | Bytes                             | number | The bandwidth.                                                                                    | 100                             |          |
 * | Packets                           | number | The number of packets.                                                                            | 100                             |          |
 * | BytesRate                         | number | The traffic ratio.                                                                                | 0.2                             |          |
 * | PacketsLostNoRoute                | number | The number of packets dropped due to no route.                                                    | 2                               |          |
 * | PacketsLostBlackhole              | number | The number of packets dropped due to blackhole routes.                                            | 4                               |          |
 * | PacketsLostTTLExpired             | number | The number of packets dropped due to TTL expiration.                                              | 7                               |          |
 * ---
 * ## TR flow log - ECR traffic scenario analysis results.
 * ### Request parameters
 * | Name                | Type    | Required | Description                                                                 | Example                                      | Valid values |
 * |---------------------|---------|----------|-----------------------------------------------------------------------------|---------------------------------------------|--------|
 * | NisTrafficRankingId | string  | Yes      | The ID of the network traffic analysis result.                              | task-6462a7b4c4a54b****                     |        |
 * | NextToken           | string  | No       | The paging token. Set this parameter to the NextToken value returned in the previous API call. | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | No       | The paging size. Valid values: 1 to 100. Default value: 20.                 | 20                                          |        |
 * ### Response parameters
 * | Name                | Type    | Description                                    | Example                                      | Valid values |
 * |---------------------|---------|------------------------------------------------|---------------------------------------------|--------|
 * | -                   | object  | RpcResponse                                    |                                             |        |
 * | RequestId           | string  | The request ID.                                | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941        |        |
 * | NisTrafficRankingId | string  | The ID of the network traffic analysis result. | task-7619ecb1db9148bab9f4                   |        |
 * | Status              | string  | The task running status.                       | Complete                                    |        |
 * | NextToken           | string  | The token for the next query.                  | LoeJLhK0fsDqYoXkXieZUqB2vWnccJtVnsyKu9KxFFOMQxtV8XckOg5lk7F2bhC+ |        |
 * | MaxResults          | integer | The paging size. Valid values: 1 to 100. Default value: 20. | 20                                          |        |
 * | TotalCount          | integer | The total number of entries returned.          | 72                                          |        |
 * | FlowRankingList     | array   | The list of network traffic analysis results.  |                                             |        |
 * #### FlowRankingList element structure
 * | Name                              | Type   | Description                                                                                       | Example                         | Valid values   |
 * |-----------------------------------|--------|---------------------------------------------------------------------------------------------------|---------------------------------|----------|
 * | Direction                         | string | The traffic direction based on the
 *
 * @param request DescribeNisTrafficRankingRequest
 * @return DescribeNisTrafficRankingResponse
 */
DescribeNisTrafficRankingResponse Client::describeNisTrafficRanking(const DescribeNisTrafficRankingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNisTrafficRankingWithOptions(request, runtime);
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
    request.setCloudIpListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCloudIpList(), "CloudIpList", "json"));
  }

  if (!!tmpReq.hasInstanceList()) {
    request.setInstanceListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceList(), "InstanceList", "json"));
  }

  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.getAccountIds();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCloudIp()) {
    query["CloudIp"] = request.getCloudIp();
  }

  if (!!request.hasCloudIpListShrink()) {
    query["CloudIpList"] = request.getCloudIpListShrink();
  }

  if (!!request.hasCloudIsp()) {
    query["CloudIsp"] = request.getCloudIsp();
  }

  if (!!request.hasCloudPort()) {
    query["CloudPort"] = request.getCloudPort();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceListShrink()) {
    query["InstanceList"] = request.getInstanceListShrink();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOtherCity()) {
    query["OtherCity"] = request.getOtherCity();
  }

  if (!!request.hasOtherCountry()) {
    query["OtherCountry"] = request.getOtherCountry();
  }

  if (!!request.hasOtherIp()) {
    query["OtherIp"] = request.getOtherIp();
  }

  if (!!request.hasOtherIsp()) {
    query["OtherIsp"] = request.getOtherIsp();
  }

  if (!!request.hasOtherPort()) {
    query["OtherPort"] = request.getOtherPort();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.getTopN();
  }

  if (!!request.hasTupleType()) {
    query["TupleType"] = request.getTupleType();
  }

  if (!!request.hasUseMultiAccount()) {
    query["UseMultiAccount"] = request.getUseMultiAccount();
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
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNatGatewayId()) {
    query["NatGatewayId"] = request.getNatGatewayId();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.getTopN();
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
 * - The **init** state indicates that the task is in progress.
 * - The **finish** state indicates that the task is complete. In this state, you can obtain the analysis result.
 *
 * @param request GetNetworkReachableAnalysisRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNetworkReachableAnalysisResponse
 */
GetNetworkReachableAnalysisResponse Client::getNetworkReachableAnalysisWithOptions(const GetNetworkReachableAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNetworkReachableAnalysisId()) {
    query["NetworkReachableAnalysisId"] = request.getNetworkReachableAnalysisId();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * - The **init** state indicates that the task is in progress.
 * - The **finish** state indicates that the task is complete. In this state, you can obtain the analysis result.
 *
 * @param request GetNetworkReachableAnalysisRequest
 * @return GetNetworkReachableAnalysisResponse
 */
GetNetworkReachableAnalysisResponse Client::getNetworkReachableAnalysis(const GetNetworkReachableAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNetworkReachableAnalysisWithOptions(request, runtime);
}

/**
 * @summary Retrieves detailed monitoring metric trends data for a specified NIS network analysis scenario, including traffic metric trends for network traffic analysis scenarios and performance metric trends for performance observation scenarios.
 *
 * @description Data query result synchronization:
 * - API data is synchronized every 6 hours. You can query current network analysis data only after 6 hours.
 * Supported analysis scenarios: 
 * - Internet performance observation dashboard scenario
 * - Cross-zone internal network performance observation dashboard scenario
 * - Cross-region internal network performance observation dashboard scenario
 * ## Internet performance observation dashboard scenario
 * **Note**
 * The maximum query time span is 24 hours. If not specified, the most recent 1 hour is queried by default. The query result contains one data point per minute.
 * ### **Request parameters**
 * | **Name** | **Type** | **Required** | **Description** |
 * | --- | --- | --- | --- |
 * | RegionNo | string | Yes | The Alibaba Cloud region where the probing source is located. |
 * | ResourceType | string | Yes | Set to **InternetProbing** to query Internet performance monitoring trends. |
 * | MetricName | string | Yes | The metric for which to query trends. Valid value: **rtt**, the round-trip time of probing. |
 * | Dimensions | object[\\] | Yes | The filter information. |
 * | \\-Name | string | Yes | The filter condition. Valid values:
 *  - **Country**: the probing country.
 *  - **Province**: the probing province.
 *  - **Isp**: the probing ISP.
 *  **Note:** Specify at least one of the preceding parameters. |
 * | \\-Value | string | Yes | The filter value corresponding to the filter condition. Examples:
 *  - Country: China
 *  - Province: Zhejiang 
 * - Isp: Alibaba 
 * **Note:** Country and province values are capitalized. The ISP parameter value must match the name displayed in the console. |
 * ### **Response parameters**
 * | **Name** | **Type** | **Description** |
 * | --- | --- | --- |
 * | RequestId | string | The request ID. |
 * | Data | object | The cloud network metric trends data object. |
 * | Metrics | array | The collection of metric trends data. |
 * | \\-TimeStamp | long | The UNIX timestamp in milliseconds. |
 * | \\-Value | double | The metric value corresponding to the **MetricName** input parameter. |
 * | Unit | String | The unit of **Value**. |
 * ## Cross-zone internal network performance observation dashboard scenario
 * **Note**
 * -   If the query time span exceeds 5 days, the query result contains one data point per day.
 *     
 * -   If the query time span exceeds 1 day, the query result contains one data point per hour.
 *     
 * -   If the query time span is less than 1 day, the query result contains one data point per 5 minutes.
 * ### **Request parameters**
 * | **Name** | **Type** | **Required** | **Description** |
 * | --- | --- | --- | --- |
 * | RegionNo | string | Yes | The Alibaba Cloud region. |
 * | ResourceType | string | Yes | Set to **IntranetProbing** to query cross-zone performance monitoring trends. |
 * | MetricName | string | Yes | The metric for which to query trends. Valid value: **rtt**, the round-trip time of probing. |
 * | Dimensions | object[\\] | Yes | The filter information. |
 * | \\-Name | string | Yes | The filter condition. Valid values:
 *  - **SourceZone**: the source zone for probing. This parameter is required.
 *  - **DestinationZone**: the destination zone for probing. This parameter is required. |
 * | \\-Value | string | Yes | The filter value corresponding to the filter condition. Examples:
 *  - SourceZone: cn-hangzhou-j
 *  - DestinationZone: cn-hangzhou-k |
 * ### **Response parameters**
 * | **Name** | **Type** | **Description** |
 * | --- | --- | --- |
 * | RequestId | string | The request ID. |
 * | Data | object | The cloud network metric trends data object. |
 * | Metrics | array | The collection of metric trends data. |
 * | \\-TimeStamp | long | The UNIX timestamp in milliseconds. |
 * | \\-Value | double | The metric value corresponding to the **MetricName** input parameter. |
 * | Unit | String | The unit of **Value**. |
 * ## **Cross-region internal network performance observation dashboard scenario**
 * **Note**
 * -   If the query time span exceeds 5 days, the query result contains one data point per day.
 *     
 * -   If the query time span exceeds 1 day, the query result contains one data point per hour.
 *     
 * -   If the query time span is less than 1 day, the query result contains one data point per 5 minutes.
 * ### **Request parameters**
 * | **Name** | **Type** | **Required** | **Description** |
 * | --- | --- | --- | --- |
 * | RegionNo | string | Yes | The Alibaba Cloud region. |
 * | ResourceType | string | Yes | Set to **IntranetProbing** to query cross-region performance observation rankings. |
 * | Direction | string | Yes | The probing direction. Valid values:
 *  - **in**: probing with RegionNo as the destination.
 *  - **out**: probing with RegionNo as the source. |
 * | MetricName | string | Yes | The metric for which to query trends. Valid value: **rtt**, the round-trip time of probing. |
 * | Dimensions | object[\\] | No | The filter information. |
 * | \\-Name | string | No | The filter condition. Valid value: **DestinationRegionNo**, the destination region for probing. This parameter is required. |
 * | \\-Value | string | No | The destination region ID. Example: DestinationRegionNo: cn-shenzhen |
 * ### **Response parameters**
 * | **Name** | **Type** | **Description** |
 * | --- | --- | --- |
 * | RequestId | string | The request ID. |
 * | Data | object | The cloud network metric trends data object. |
 * | Metrics | array | The collection of metric trends data. |
 * | \\-TimeStamp | long | The UNIX timestamp in milliseconds. |
 * | \\-Value | double | The metric value corresponding to the **MetricName** input parameter. |
 * | Unit | String | The unit of **Value**. |
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
    request.setDimensionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDimensions(), "Dimensions", "json"));
  }

  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.getAccountIds();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDimensionsShrink()) {
    query["Dimensions"] = request.getDimensionsShrink();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasScanBy()) {
    query["ScanBy"] = request.getScanBy();
  }

  if (!!request.hasStepMinutes()) {
    query["StepMinutes"] = request.getStepMinutes();
  }

  if (!!request.hasUseCrossAccount()) {
    query["UseCrossAccount"] = request.getUseCrossAccount();
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
 * @summary Retrieves detailed monitoring metric trends data for a specified NIS network analysis scenario, including traffic metric trends for network traffic analysis scenarios and performance metric trends for performance observation scenarios.
 *
 * @description Data query result synchronization:
 * - API data is synchronized every 6 hours. You can query current network analysis data only after 6 hours.
 * Supported analysis scenarios: 
 * - Internet performance observation dashboard scenario
 * - Cross-zone internal network performance observation dashboard scenario
 * - Cross-region internal network performance observation dashboard scenario
 * ## Internet performance observation dashboard scenario
 * **Note**
 * The maximum query time span is 24 hours. If not specified, the most recent 1 hour is queried by default. The query result contains one data point per minute.
 * ### **Request parameters**
 * | **Name** | **Type** | **Required** | **Description** |
 * | --- | --- | --- | --- |
 * | RegionNo | string | Yes | The Alibaba Cloud region where the probing source is located. |
 * | ResourceType | string | Yes | Set to **InternetProbing** to query Internet performance monitoring trends. |
 * | MetricName | string | Yes | The metric for which to query trends. Valid value: **rtt**, the round-trip time of probing. |
 * | Dimensions | object[\\] | Yes | The filter information. |
 * | \\-Name | string | Yes | The filter condition. Valid values:
 *  - **Country**: the probing country.
 *  - **Province**: the probing province.
 *  - **Isp**: the probing ISP.
 *  **Note:** Specify at least one of the preceding parameters. |
 * | \\-Value | string | Yes | The filter value corresponding to the filter condition. Examples:
 *  - Country: China
 *  - Province: Zhejiang 
 * - Isp: Alibaba 
 * **Note:** Country and province values are capitalized. The ISP parameter value must match the name displayed in the console. |
 * ### **Response parameters**
 * | **Name** | **Type** | **Description** |
 * | --- | --- | --- |
 * | RequestId | string | The request ID. |
 * | Data | object | The cloud network metric trends data object. |
 * | Metrics | array | The collection of metric trends data. |
 * | \\-TimeStamp | long | The UNIX timestamp in milliseconds. |
 * | \\-Value | double | The metric value corresponding to the **MetricName** input parameter. |
 * | Unit | String | The unit of **Value**. |
 * ## Cross-zone internal network performance observation dashboard scenario
 * **Note**
 * -   If the query time span exceeds 5 days, the query result contains one data point per day.
 *     
 * -   If the query time span exceeds 1 day, the query result contains one data point per hour.
 *     
 * -   If the query time span is less than 1 day, the query result contains one data point per 5 minutes.
 * ### **Request parameters**
 * | **Name** | **Type** | **Required** | **Description** |
 * | --- | --- | --- | --- |
 * | RegionNo | string | Yes | The Alibaba Cloud region. |
 * | ResourceType | string | Yes | Set to **IntranetProbing** to query cross-zone performance monitoring trends. |
 * | MetricName | string | Yes | The metric for which to query trends. Valid value: **rtt**, the round-trip time of probing. |
 * | Dimensions | object[\\] | Yes | The filter information. |
 * | \\-Name | string | Yes | The filter condition. Valid values:
 *  - **SourceZone**: the source zone for probing. This parameter is required.
 *  - **DestinationZone**: the destination zone for probing. This parameter is required. |
 * | \\-Value | string | Yes | The filter value corresponding to the filter condition. Examples:
 *  - SourceZone: cn-hangzhou-j
 *  - DestinationZone: cn-hangzhou-k |
 * ### **Response parameters**
 * | **Name** | **Type** | **Description** |
 * | --- | --- | --- |
 * | RequestId | string | The request ID. |
 * | Data | object | The cloud network metric trends data object. |
 * | Metrics | array | The collection of metric trends data. |
 * | \\-TimeStamp | long | The UNIX timestamp in milliseconds. |
 * | \\-Value | double | The metric value corresponding to the **MetricName** input parameter. |
 * | Unit | String | The unit of **Value**. |
 * ## **Cross-region internal network performance observation dashboard scenario**
 * **Note**
 * -   If the query time span exceeds 5 days, the query result contains one data point per day.
 *     
 * -   If the query time span exceeds 1 day, the query result contains one data point per hour.
 *     
 * -   If the query time span is less than 1 day, the query result contains one data point per 5 minutes.
 * ### **Request parameters**
 * | **Name** | **Type** | **Required** | **Description** |
 * | --- | --- | --- | --- |
 * | RegionNo | string | Yes | The Alibaba Cloud region. |
 * | ResourceType | string | Yes | Set to **IntranetProbing** to query cross-region performance observation rankings. |
 * | Direction | string | Yes | The probing direction. Valid values:
 *  - **in**: probing with RegionNo as the destination.
 *  - **out**: probing with RegionNo as the source. |
 * | MetricName | string | Yes | The metric for which to query trends. Valid value: **rtt**, the round-trip time of probing. |
 * | Dimensions | object[\\] | No | The filter information. |
 * | \\-Name | string | No | The filter condition. Valid value: **DestinationRegionNo**, the destination region for probing. This parameter is required. |
 * | \\-Value | string | No | The destination region ID. Example: DestinationRegionNo: cn-shenzhen |
 * ### **Response parameters**
 * | **Name** | **Type** | **Description** |
 * | --- | --- | --- |
 * | RequestId | string | The request ID. |
 * | Data | object | The cloud network metric trends data object. |
 * | Metrics | array | The collection of metric trends data. |
 * | \\-TimeStamp | long | The UNIX timestamp in milliseconds. |
 * | \\-Value | double | The metric value corresponding to the **MetricName** input parameter. |
 * | Unit | String | The unit of **Value**. |
 *
 * @param request GetNisNetworkMetricsRequest
 * @return GetNisNetworkMetricsResponse
 */
GetNisNetworkMetricsResponse Client::getNisNetworkMetrics(const GetNisNetworkMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNisNetworkMetricsWithOptions(request, runtime);
}

/**
 * @summary Supports ranking analysis of traffic flowing through different cloud network resources by using sorting algorithms and data processing capabilities, and sorts detection metrics of Alibaba Cloud performance observation to help you quickly identify network bottlenecks, optimize resource configurations, and improve overall network performance.
 *
 * @description Supported analysis scenarios:
 * ## Internet performance observation dashboard scenario.
 * ### **Request parameters**
 * ### **Response parameters**
 * ## Cross-zone internal network performance observation dashboard scenario.
 * ### **Request parameters**
 * ### **Response parameters**
 * ## **Cross-region internal network performance observation dashboard scenario**
 * ### **Request parameters**
 * ### **Response parameters**
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
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasAccountIds()) {
    query["AccountIds"] = request.getAccountIds();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.getTopN();
  }

  if (!!request.hasUseCrossAccount()) {
    query["UseCrossAccount"] = request.getUseCrossAccount();
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
 * @summary Supports ranking analysis of traffic flowing through different cloud network resources by using sorting algorithms and data processing capabilities, and sorts detection metrics of Alibaba Cloud performance observation to help you quickly identify network bottlenecks, optimize resource configurations, and improve overall network performance.
 *
 * @description Supported analysis scenarios:
 * ## Internet performance observation dashboard scenario.
 * ### **Request parameters**
 * ### **Response parameters**
 * ## Cross-zone internal network performance observation dashboard scenario.
 * ### **Request parameters**
 * ### **Response parameters**
 * ## **Cross-region internal network performance observation dashboard scenario**
 * ### **Request parameters**
 * ### **Response parameters**
 *
 * @param request GetNisNetworkRankingRequest
 * @return GetNisNetworkRankingResponse
 */
GetNisNetworkRankingResponse Client::getNisNetworkRanking(const GetNisNetworkRankingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNisNetworkRankingWithOptions(request, runtime);
}

/**
 * @summary Retrieves the metric trends for network traffic analysis.
 *
 * @param tmpReq GetNisTrafficMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetNisTrafficMetricsResponse
 */
GetNisTrafficMetricsResponse Client::getNisTrafficMetricsWithOptions(const GetNisTrafficMetricsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetNisTrafficMetricsShrinkRequest request = GetNisTrafficMetricsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMetricName()) {
    query["MetricName"] = request.getMetricName();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasScanBy()) {
    query["ScanBy"] = request.getScanBy();
  }

  if (!!request.hasStepMinutes()) {
    query["StepMinutes"] = request.getStepMinutes();
  }

  if (!!request.hasStorageInterval()) {
    query["StorageInterval"] = request.getStorageInterval();
  }

  if (!!request.hasTrafficAnalyzerId()) {
    query["TrafficAnalyzerId"] = request.getTrafficAnalyzerId();
  }

  if (!!request.hasTrafficScenario()) {
    query["TrafficScenario"] = request.getTrafficScenario();
  }

  if (!!request.hasTupleDimension()) {
    query["TupleDimension"] = request.getTupleDimension();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetNisTrafficMetrics"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetNisTrafficMetricsResponse>();
}

/**
 * @summary Retrieves the metric trends for network traffic analysis.
 *
 * @param request GetNisTrafficMetricsRequest
 * @return GetNisTrafficMetricsResponse
 */
GetNisTrafficMetricsResponse Client::getNisTrafficMetrics(const GetNisTrafficMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getNisTrafficMetricsWithOptions(request, runtime);
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
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccountIds(), "AccountIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.getAccountIdsShrink();
  }

  if (!!request.hasBandwithPackageId()) {
    query["BandwithPackageId"] = request.getBandwithPackageId();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOtherIp()) {
    query["OtherIp"] = request.getOtherIp();
  }

  if (!!request.hasOtherPort()) {
    query["OtherPort"] = request.getOtherPort();
  }

  if (!!request.hasOtherRegion()) {
    query["OtherRegion"] = request.getOtherRegion();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasThisIp()) {
    query["ThisIp"] = request.getThisIp();
  }

  if (!!request.hasThisPort()) {
    query["ThisPort"] = request.getThisPort();
  }

  if (!!request.hasThisRegion()) {
    query["ThisRegion"] = request.getThisRegion();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.getTopN();
  }

  if (!!request.hasUseMultiAccount()) {
    query["UseMultiAccount"] = request.getUseMultiAccount();
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
    request.setAccountIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAccountIds(), "AccountIds", "json"));
  }

  json query = {};
  if (!!request.hasAccountIdsShrink()) {
    query["AccountIds"] = request.getAccountIdsShrink();
  }

  if (!!request.hasAttachmentId()) {
    query["AttachmentId"] = request.getAttachmentId();
  }

  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasCenId()) {
    query["CenId"] = request.getCenId();
  }

  if (!!request.hasCloudIp()) {
    query["CloudIp"] = request.getCloudIp();
  }

  if (!!request.hasCloudPort()) {
    query["CloudPort"] = request.getCloudPort();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasGroupBy()) {
    query["GroupBy"] = request.getGroupBy();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasOtherIp()) {
    query["OtherIp"] = request.getOtherIp();
  }

  if (!!request.hasOtherPort()) {
    query["OtherPort"] = request.getOtherPort();
  }

  if (!!request.hasProtocol()) {
    query["Protocol"] = request.getProtocol();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.getTopN();
  }

  if (!!request.hasUseMultiAccount()) {
    query["UseMultiAccount"] = request.getUseMultiAccount();
  }

  if (!!request.hasVirtualBorderRouterId()) {
    query["VirtualBorderRouterId"] = request.getVirtualBorderRouterId();
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
 * @summary Lists the resource types available for inspection.
 *
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
 * @summary Lists the resource types available for inspection.
 *
 * @return ListNisInspectionResourceTypeResponse
 */
ListNisInspectionResourceTypeResponse Client::listNisInspectionResourceType() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNisInspectionResourceTypeWithOptions(runtime);
}

/**
 * @summary Queries a list of inspection task reports.
 *
 * @param request ListNisInspectionTaskReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNisInspectionTaskReportsResponse
 */
ListNisInspectionTaskReportsResponse Client::listNisInspectionTaskReportsWithOptions(const ListNisInspectionTaskReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.getInspectionTaskId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
 * @summary Queries a list of inspection task reports.
 *
 * @param request ListNisInspectionTaskReportsRequest
 * @return ListNisInspectionTaskReportsResponse
 */
ListNisInspectionTaskReportsResponse Client::listNisInspectionTaskReports(const ListNisInspectionTaskReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNisInspectionTaskReportsWithOptions(request, runtime);
}

/**
 * @summary Lists the network inspection tasks.
 *
 * @param request ListNisInspectionTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNisInspectionTasksResponse
 */
ListNisInspectionTasksResponse Client::listNisInspectionTasksWithOptions(const ListNisInspectionTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionName()) {
    query["InspectionName"] = request.getInspectionName();
  }

  if (!!request.hasInspectionProject()) {
    query["InspectionProject"] = request.getInspectionProject();
  }

  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.getInspectionTaskId();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Lists the network inspection tasks.
 *
 * @param request ListNisInspectionTasksRequest
 * @return ListNisInspectionTasksResponse
 */
ListNisInspectionTasksResponse Client::listNisInspectionTasks(const ListNisInspectionTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNisInspectionTasksWithOptions(request, runtime);
}

/**
 * @summary Starts an inspection task to generate an inspection report.
 *
 * @param request StartNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartNisInspectionTaskResponse
 */
StartNisInspectionTaskResponse Client::startNisInspectionTaskWithOptions(const StartNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.getInspectionTaskId();
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
 * @summary Starts an inspection task to generate an inspection report.
 *
 * @param request StartNisInspectionTaskRequest
 * @return StartNisInspectionTaskResponse
 */
StartNisInspectionTaskResponse Client::startNisInspectionTask(const StartNisInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startNisInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Triggers the NIS traffic analyzer to execute a traffic sorting task within a specified scope.
 *
 * @description [Before using this operation, make sure that you fully understand the billing method and pricing of the NIS traffic analyzer.](https://www.alibabacloud.com/help/en/nis/product-overview/billing-method-new-version)
 * Before using this operation, create a traffic analyzer and add a data source.
 * [Create a traffic analyzer](https://www.alibabacloud.com/help/en/nis/user-guide/traffic-analyzer-management#39d1693bce6yp)
 * [Add a data source](https://www.alibabacloud.com/help/en/nis/user-guide/data-source-management#73845748bfstv)
 * Supported analysis scenarios: 
 * - All VPC network traffic analysis
 * - Internet VPC network traffic analysis
 * - All TR network traffic analysis
 * - Internet Shared Bandwidth metric analysis
 * ## All VPC flow log analysis.
 * ### Request parameters
 * | Name              | Type     | Required | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    | Example                                     | Valid values                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
 * |-------------------|----------|------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
 * | RegionNo          | string   | Yes   | The region where the resource resides.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        | cn-shanghai                              | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | TrafficAnalyzerId | string   | Yes   | The traffic analyzer ID.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       | nta-262****ca07f                         | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | TrafficScenario   | string   | Yes   | The supported analysis scenario:
 * ● All VPC flow log analysis                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                | Fixed value: VpcFlowLogAll                    | VpcFlowLogAll                                                                                                                                                                                                                                                                                                                                                                                                                                         |
 * | Direction         | string   | Yes   | The network traffic direction based on Alibaba Cloud resources. ● In: Traffic flowing into the elastic network interface (ENI).
 * ● Out: Traffic flowing out of the elastic network interface (ENI).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         | In                         |  - In 
 * - Out                                                                                                                                                                                                                                                                                                                                                                                                                                            |
 * | TupleDimension    | string   | Yes   | The traffic storage aggregation dimension.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | Tuple1                 | - Tuple1 
 * - Tuple2 
 * - Tuple5                                                                                                                                                                                                                                                                                                                                                                                                                              |
 * | GroupBy           | array    | No   | Specifies multiple traffic dimensions for aggregation and sorting.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |  | -                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
 * |                   | string   | No   | Based on the TupleDimension field, you can specify the following aggregation dimensions:
 * ● When TupleDimension = Tuple1:
 * 　■  VpcId: VPC ID
 * 　■  VSwitchId: vSwitch ID
 * 　■  NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■  EcsId: ECS instance ID
 * 　■  CloudIp: Cloud IP
 * ● When TupleDimension = Tuple2:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * ● When TupleDimension = Tuple5:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * 　■ SourcePort: Source port
 * 　■ DestinationPort: Destination port
 * 　■ Protocol: Network protocol | ["VpcId"]                                | - VpcId
 * - VSwitchId
 * - CloudIp
 * - SourceIp
 * - DestinationIp
 * - Protocol
 * - SourcePort
 * - DestinationPort
 * - TrafficPath
 * - Country
 * - Province
 * - City
 * - Isp
 * - Asn                                                                                                                                                                                                                                          |
 * | OrderBy           | string   | Yes   | Based on the TrafficScenario field, the following traffic metrics are supported for sorting:
 * TrafficScenario = VpcFlowLogAll / VpcFlowLogInternet (VPC flow log scenario):
 * ● Bytes: Bandwidth
 * ● Packets: Packet count
 * ● RoundTripTime: TCP RTT                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         | Bytes                                    | - Bytes
 * - Packets
 * - RoundTripTime                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | Filter            | array    | No   | Specifies additional filter conditions for focused traffic analysis.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |                                          | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * |                   | object   | No   | The filter condition for traffic, a Key-Value-Operator object.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |                                          | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | key               | string   | No   | The supported filter condition label keys are as follows:
 * - When `TupleDimension` is 1-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (**required**, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `CloudIp`: Cloud IP (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 2-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (**required**, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP (the corresponding value supports multiple selections)
 * 　- `DestinationIp`: Destination IP (the corresponding value supports multiple selections)
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 5-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (**required**, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP
 * 　- `DestinationIp`: Destination IP
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * 　- `SourcePort`: Source port (the corresponding value supports multiple selections)
 * 　- `DestinationPort`: Destination port (the corresponding value supports multiple selections)
 * 　- `Protocol`: Network protocol (the corresponding value supports multiple selections)
 * - In VPC scenarios, you can also filter by traffic metrics:
 * 　- `MinBytes`: The minimum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
 * 　- `MaxBytes`: The maximum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
 * 　- `MinRoundTripTime`: The minimum RTT for sorting, in ms (the corresponding value does not support multiple selections)
 * 　- `MaxRoundTripTime`: The maximum RTT for sorting, in ms (the corresponding value does not support multiple selections)
 * 　- `MinPackages`: The minimum packet count for sorting (the corresponding value does not support multiple selections)
 * 　- `MaxPackages`: The maximum packet count for sorting (the corresponding value does not support multiple selections) | FlowAction                               | - FlowAction
 * - VpcId
 * - VSwitchId
 * - NetworkInterfaceId
 * - CloudIp
 * - DestinationIp
 * - SourceIp
 * - EcsId
 * - TrafficPath
 * - SourcePort
 * - DestinationPort
 * - Protocol
 * - MinBytes
 * - MaxBytes
 * - MinRoundTripTime
 * - MaxRoundTripTime
 * - MinPackages
 * - MaxPackages                                                                                                                |
 * | value             | array    | No   | The filter condition values.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |                                          | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * |                   | string   | No   | The filter value corresponding to the specified key type.
 * When the key is `FlowAction`, the valid values are:
 * 　- `ACCEPT` (default: `Accept`): Traffic allowed by security groups and network ACLs
 * 　- `REJECT`: Traffic denied by security groups and network ACLs                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              | Accept                                   | When the key is FlowAction: ACCEPT / REJECT                                                                                                                                                                                                                                                                                                                                                              |
 * | Operator          | string   | No   | For specified key types, some support operators for character string matching on the passed value. The supported values are as follows (default: in):
 * ● in: Equals
 * ● not in: Not equals
 * ● like: Contains
 * Based on the TupleDimension and TrafficScenario fields, the support for `like` is as follows:
 * TrafficScenario = VpcFlowLogAll / VpcFlowLogInternet (VPC flow log scenario):
 * The following keys support `like`:
 * 　○ CloudIp
 * 　○ SourceIp
 * 　○ DestinationIp
 * All other keys support only `in` and `not in` operators.                                                                                                                                                                                                                                                                                                                                                                                                                           | in                                       | - not in
 * - in
 * - like                                                                                                                                                                                                                                                                                                                                                                                                                                   |
 * | BeginTime         | long     | Yes   | The start time of the query as a millisecond UNIX timestamp.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            | 1638239092000                            | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | EndTime           | long     | Yes   | The end time of the query as a millisecond UNIX timestamp.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            | 1684373700099                            | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | Sort              | string   | No   | The sorting order for traffic analysis:
 * ● ASC: Ascending order.
 * ● DESC: Descending order.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | Desc                                     | - Desc
 * - Asc                                                                                                                                                                                                                                                                                                                                                                                                                                           |
 * | TopN              | integer  | No   | The number of entries to return for the traffic sorting query.
 * You can specify a custom number. If this field is not specified, all traffic data that meets the specified conditions is sorted and analyzed within the performance limits of traffic analysis data.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   | 10                                       | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | Language          | string   | No   | The language. Valid values: zh-CN, en-US.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              | zh-CN                                    | - zh-CN
 * - en-US                                                                                                                                                                                                                                                                                                                                                                                                                                        |
 * | NextToken         | string   | No   | The pagination token. Leave this parameter empty for the first query or when no more results are available. If more results exist, set this to the NextToken value returned by the previous API call.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | MaxResults        | integer  | No   | The page size. Valid values: 1 to 100. Default value: 20.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               | 20                                       |                                                                                                                                                                                                                                                                                                                                                                                                                                         |
 * | StorageInterval   | integer  | No   | The storage bucket granularity property.
 * The storage bucket granularity specifies the storage aggregation period for the query. Two granularity levels are supported: high-precision (such as 1 minute) and long-period (such as 1 day). The specific granularity is determined by the traffic analysis sampling interval configured for high-precision or long-period traffic statistics when creating or editing the traffic analyzer.
 * - The supported storage granularity values for the traffic analyzer tuple are:
 * 　- `1`: In minutes (1 minute)
 * 　- `10`: In minutes (10 minutes)
 * 　- `60`: In minutes (60 minutes, i.e., 1 hour)
 * 　- `1440`: In minutes (1440 minutes, i.e., 1 day)
 * - The storage bucket granularity serves two typical purposes:
 * 　- High-precision traffic statistics: such as 1-minute, 10-minute, or 60-minute aggregation
 * 　- Long-period traffic statistics: such as 1440-minute (1-day) aggregation
 * - Specify this field during the query to select the storage aggregation period. For example:
 * 　- Pass `10`: Query short-period data aggregated at 10-minute granularity
 * 　- Pass `1440`: Query long-period data aggregated at 1-day granularity | 10                                       | - 1
 * - 10
 * - 60
 * - 1440                                                                                                                                                                                                                                                                                                                                                                                                                                   |
 * ### Response elements
 * | Name                | Type   | Description                                                                                       | Example value                    | Valid values |
 * |---------------------|--------|--------------------------------------------------------------------------------------------|---------------------------|--------|
 * |       | object | RpcResponse <ArrayList>                                                                    |                           | -      |
 * | RequestId           | string | The request ID.                                                                                   | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941 | -      |
 * | NisTrafficRankingId | string | The result ID of this traffic ranking analysis. Call the DescribeNisTrafficRanking operation to obtain the final analysis results.    | task-6462a7b4c4a54b****   | -      |
 * ## Internet VPC flow log analysis.
 * ### Request parameters
 * | Name              | Type    | Required | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  | Example                                     | Valid values                                                                                                                                                                                                                                                                                                           |
 * |-------------------|---------|------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
 * | RegionNo          | string  | Yes   | The region where the resource resides.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      | cn-shanghai                              | -                                                                                                                                                                                                                                                                                                                |
 * | TrafficAnalyzerId | string  | Yes   | The traffic analyzer ID.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | nta-262****ca07f                         | -                                                                                                                                                                                                                                                                                                                |
 * | TrafficScenario   | string  | Yes   | The supported analysis scenario:
 * ● Internet VPC flow log analysis                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             | Fixed value: VpcFlowLogInternet              | VpcFlowLogInternet                                                                                                                                                                                                                                                                                               |
 * | Direction         | string  | Yes   | The network traffic direction based on Alibaba Cloud resources. ● In: Traffic flowing into the elastic network interfaces (ENIs).
 * ● Out: Traffic flowing out of the elastic network interfaces (ENIs).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      | In                                       | - In
 * - Out                                                                                                                                                                                                                                                                                                      |
 * | TupleDimension    | string  | Yes   | The traffic storage aggregation dimension.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  | Tuple1                                   | - Tuple1
 * - Tuple2
 * - Tuple5                                                                                                                                                                                                                                                                                    |
 * | GroupBy           | array   | No   | Specifies multiple traffic dimensions for aggregation and sorting.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |                                          | -                                                                                                                                                                                                                                                                                                                |
 * |                   | string  | No   | Based on the TupleDimension field, you can specify the following aggregation dimensions:
 * ● When TupleDimension = Tuple1:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ CloudIp: Cloud IP
 * ● When TupleDimension = Tuple2:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * 　■ `Country`: Client country
 * 　■ `Province`: Client province
 * 　■ `City`: Client city
 * 　■ `Isp`: Internet service provider
 * 　■ `Asn`: Autonomous system number
 * ● When TupleDimension = Tuple5:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * 　■ SourcePort: Source port
 * 　■ DestinationPort: Destination port
 * 　■ Protocol: Network protocol
 * 　■ Country: Client country
 * 　■ Province: Client province
 * 　■ City: Client city
 * 　■ Isp: Internet service provider
 * 　■ Asn: Autonomous system number | ["VpcId"]                                | - VpcId
 * - VSwitchId
 * - CloudIp
 * - SourceIp
 * - DestinationIp
 * - Protocol
 * - SourcePort
 * - DestinationPort
 * - TrafficPath
 * - Country
 * - Province
 * - City
 * - Isp
 * - Asn                                                                                         |
 * | OrderBy           | string  | Yes   | The following traffic metrics are supported for sorting: Bytes, Packets, RoundTripTime.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        | Bytes                                    | - Bytes
 * - Packets
 * - RoundTripTime                                                                                                                                                                                                                                                                         |
 * | Filter            | array   | No   | Specifies additional filter conditions for focused traffic analysis.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |                                          | -                                                                                                                                                                                                                                                                                                                |
 * |                   | object  | No   | The filter condition for traffic, a Key-Value-Operator object.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |                                          | -                                                                                                                                                                                                                                                                                                                |
 * | key               | string  | No   | The supported filter condition label keys are as follows:
 * - When `TupleDimension` is 1-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (required, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `CloudIp`: Cloud IP (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 2-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (required, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP (the corresponding value supports multiple selections)
 * 　- `DestinationIp`: Destination IP (the corresponding value supports multiple selections)
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * 　- `ClientCountry`: Filter traffic analysis scope by country (the corresponding value supports multiple selections)
 * 　- `ClientCity`: Filter traffic analysis scope by city (the corresponding value supports multiple selections)
 * 　- `ClientAsn`: Filter traffic analysis scope by ASN (the corresponding value supports multiple selections)
 * 　- `ClientIsp`: Filter traffic analysis scope by client ISP (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 5-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (required, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP
 * 　- `DestinationIp`: Destination IP
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * 　- `SourcePort`: Source port (the corresponding value supports multiple selections)
 * 　- `DestinationPort`: Destination port (the corresponding value supports multiple selections)
 *
 * @param tmpReq StartNisTrafficRankingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartNisTrafficRankingResponse
 */
StartNisTrafficRankingResponse Client::startNisTrafficRankingWithOptions(const StartNisTrafficRankingRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartNisTrafficRankingShrinkRequest request = StartNisTrafficRankingShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilter()) {
    request.setFilterShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilter(), "Filter", "json"));
  }

  if (!!tmpReq.hasGroupBy()) {
    request.setGroupByShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getGroupBy(), "GroupBy", "json"));
  }

  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasDirection()) {
    query["Direction"] = request.getDirection();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasFilterShrink()) {
    query["Filter"] = request.getFilterShrink();
  }

  if (!!request.hasGroupByShrink()) {
    query["GroupBy"] = request.getGroupByShrink();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasRegionNo()) {
    query["RegionNo"] = request.getRegionNo();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasStorageInterval()) {
    query["StorageInterval"] = request.getStorageInterval();
  }

  if (!!request.hasTopN()) {
    query["TopN"] = request.getTopN();
  }

  if (!!request.hasTrafficAnalyzerId()) {
    query["TrafficAnalyzerId"] = request.getTrafficAnalyzerId();
  }

  if (!!request.hasTrafficScenario()) {
    query["TrafficScenario"] = request.getTrafficScenario();
  }

  if (!!request.hasTupleDimension()) {
    query["TupleDimension"] = request.getTupleDimension();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartNisTrafficRanking"},
    {"version" , "2021-12-16"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartNisTrafficRankingResponse>();
}

/**
 * @summary Triggers the NIS traffic analyzer to execute a traffic sorting task within a specified scope.
 *
 * @description [Before using this operation, make sure that you fully understand the billing method and pricing of the NIS traffic analyzer.](https://www.alibabacloud.com/help/en/nis/product-overview/billing-method-new-version)
 * Before using this operation, create a traffic analyzer and add a data source.
 * [Create a traffic analyzer](https://www.alibabacloud.com/help/en/nis/user-guide/traffic-analyzer-management#39d1693bce6yp)
 * [Add a data source](https://www.alibabacloud.com/help/en/nis/user-guide/data-source-management#73845748bfstv)
 * Supported analysis scenarios: 
 * - All VPC network traffic analysis
 * - Internet VPC network traffic analysis
 * - All TR network traffic analysis
 * - Internet Shared Bandwidth metric analysis
 * ## All VPC flow log analysis.
 * ### Request parameters
 * | Name              | Type     | Required | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    | Example                                     | Valid values                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
 * |-------------------|----------|------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
 * | RegionNo          | string   | Yes   | The region where the resource resides.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        | cn-shanghai                              | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | TrafficAnalyzerId | string   | Yes   | The traffic analyzer ID.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       | nta-262****ca07f                         | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | TrafficScenario   | string   | Yes   | The supported analysis scenario:
 * ● All VPC flow log analysis                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                | Fixed value: VpcFlowLogAll                    | VpcFlowLogAll                                                                                                                                                                                                                                                                                                                                                                                                                                         |
 * | Direction         | string   | Yes   | The network traffic direction based on Alibaba Cloud resources. ● In: Traffic flowing into the elastic network interface (ENI).
 * ● Out: Traffic flowing out of the elastic network interface (ENI).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         | In                         |  - In 
 * - Out                                                                                                                                                                                                                                                                                                                                                                                                                                            |
 * | TupleDimension    | string   | Yes   | The traffic storage aggregation dimension.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | Tuple1                 | - Tuple1 
 * - Tuple2 
 * - Tuple5                                                                                                                                                                                                                                                                                                                                                                                                                              |
 * | GroupBy           | array    | No   | Specifies multiple traffic dimensions for aggregation and sorting.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |  | -                                                                                                                                                                                                                                                                                                                                                                                                                                                  |
 * |                   | string   | No   | Based on the TupleDimension field, you can specify the following aggregation dimensions:
 * ● When TupleDimension = Tuple1:
 * 　■  VpcId: VPC ID
 * 　■  VSwitchId: vSwitch ID
 * 　■  NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■  EcsId: ECS instance ID
 * 　■  CloudIp: Cloud IP
 * ● When TupleDimension = Tuple2:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * ● When TupleDimension = Tuple5:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * 　■ SourcePort: Source port
 * 　■ DestinationPort: Destination port
 * 　■ Protocol: Network protocol | ["VpcId"]                                | - VpcId
 * - VSwitchId
 * - CloudIp
 * - SourceIp
 * - DestinationIp
 * - Protocol
 * - SourcePort
 * - DestinationPort
 * - TrafficPath
 * - Country
 * - Province
 * - City
 * - Isp
 * - Asn                                                                                                                                                                                                                                          |
 * | OrderBy           | string   | Yes   | Based on the TrafficScenario field, the following traffic metrics are supported for sorting:
 * TrafficScenario = VpcFlowLogAll / VpcFlowLogInternet (VPC flow log scenario):
 * ● Bytes: Bandwidth
 * ● Packets: Packet count
 * ● RoundTripTime: TCP RTT                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         | Bytes                                    | - Bytes
 * - Packets
 * - RoundTripTime                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | Filter            | array    | No   | Specifies additional filter conditions for focused traffic analysis.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     |                                          | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * |                   | object   | No   | The filter condition for traffic, a Key-Value-Operator object.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |                                          | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | key               | string   | No   | The supported filter condition label keys are as follows:
 * - When `TupleDimension` is 1-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (**required**, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `CloudIp`: Cloud IP (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 2-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (**required**, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP (the corresponding value supports multiple selections)
 * 　- `DestinationIp`: Destination IP (the corresponding value supports multiple selections)
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 5-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (**required**, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP
 * 　- `DestinationIp`: Destination IP
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * 　- `SourcePort`: Source port (the corresponding value supports multiple selections)
 * 　- `DestinationPort`: Destination port (the corresponding value supports multiple selections)
 * 　- `Protocol`: Network protocol (the corresponding value supports multiple selections)
 * - In VPC scenarios, you can also filter by traffic metrics:
 * 　- `MinBytes`: The minimum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
 * 　- `MaxBytes`: The maximum traffic volume for sorting, in bytes (the corresponding value does not support multiple selections)
 * 　- `MinRoundTripTime`: The minimum RTT for sorting, in ms (the corresponding value does not support multiple selections)
 * 　- `MaxRoundTripTime`: The maximum RTT for sorting, in ms (the corresponding value does not support multiple selections)
 * 　- `MinPackages`: The minimum packet count for sorting (the corresponding value does not support multiple selections)
 * 　- `MaxPackages`: The maximum packet count for sorting (the corresponding value does not support multiple selections) | FlowAction                               | - FlowAction
 * - VpcId
 * - VSwitchId
 * - NetworkInterfaceId
 * - CloudIp
 * - DestinationIp
 * - SourceIp
 * - EcsId
 * - TrafficPath
 * - SourcePort
 * - DestinationPort
 * - Protocol
 * - MinBytes
 * - MaxBytes
 * - MinRoundTripTime
 * - MaxRoundTripTime
 * - MinPackages
 * - MaxPackages                                                                                                                |
 * | value             | array    | No   | The filter condition values.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |                                          | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * |                   | string   | No   | The filter value corresponding to the specified key type.
 * When the key is `FlowAction`, the valid values are:
 * 　- `ACCEPT` (default: `Accept`): Traffic allowed by security groups and network ACLs
 * 　- `REJECT`: Traffic denied by security groups and network ACLs                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              | Accept                                   | When the key is FlowAction: ACCEPT / REJECT                                                                                                                                                                                                                                                                                                                                                              |
 * | Operator          | string   | No   | For specified key types, some support operators for character string matching on the passed value. The supported values are as follows (default: in):
 * ● in: Equals
 * ● not in: Not equals
 * ● like: Contains
 * Based on the TupleDimension and TrafficScenario fields, the support for `like` is as follows:
 * TrafficScenario = VpcFlowLogAll / VpcFlowLogInternet (VPC flow log scenario):
 * The following keys support `like`:
 * 　○ CloudIp
 * 　○ SourceIp
 * 　○ DestinationIp
 * All other keys support only `in` and `not in` operators.                                                                                                                                                                                                                                                                                                                                                                                                                           | in                                       | - not in
 * - in
 * - like                                                                                                                                                                                                                                                                                                                                                                                                                                   |
 * | BeginTime         | long     | Yes   | The start time of the query as a millisecond UNIX timestamp.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            | 1638239092000                            | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | EndTime           | long     | Yes   | The end time of the query as a millisecond UNIX timestamp.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            | 1684373700099                            | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | Sort              | string   | No   | The sorting order for traffic analysis:
 * ● ASC: Ascending order.
 * ● DESC: Descending order.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | Desc                                     | - Desc
 * - Asc                                                                                                                                                                                                                                                                                                                                                                                                                                           |
 * | TopN              | integer  | No   | The number of entries to return for the traffic sorting query.
 * You can specify a custom number. If this field is not specified, all traffic data that meets the specified conditions is sorted and analyzed within the performance limits of traffic analysis data.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   | 10                                       | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | Language          | string   | No   | The language. Valid values: zh-CN, en-US.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              | zh-CN                                    | - zh-CN
 * - en-US                                                                                                                                                                                                                                                                                                                                                                                                                                        |
 * | NextToken         | string   | No   | The pagination token. Leave this parameter empty for the first query or when no more results are available. If more results exist, set this to the NextToken value returned by the previous API call.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             | 2A07PfBPlzmmNi/75Qca9SK73UfY48/+WBiREjfVfXqMQxtV8XckOg5lk7F2bhC+ | -                                                                                                                                                                                                                                                                                                                                                                                                                                                     |
 * | MaxResults        | integer  | No   | The page size. Valid values: 1 to 100. Default value: 20.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               | 20                                       |                                                                                                                                                                                                                                                                                                                                                                                                                                         |
 * | StorageInterval   | integer  | No   | The storage bucket granularity property.
 * The storage bucket granularity specifies the storage aggregation period for the query. Two granularity levels are supported: high-precision (such as 1 minute) and long-period (such as 1 day). The specific granularity is determined by the traffic analysis sampling interval configured for high-precision or long-period traffic statistics when creating or editing the traffic analyzer.
 * - The supported storage granularity values for the traffic analyzer tuple are:
 * 　- `1`: In minutes (1 minute)
 * 　- `10`: In minutes (10 minutes)
 * 　- `60`: In minutes (60 minutes, i.e., 1 hour)
 * 　- `1440`: In minutes (1440 minutes, i.e., 1 day)
 * - The storage bucket granularity serves two typical purposes:
 * 　- High-precision traffic statistics: such as 1-minute, 10-minute, or 60-minute aggregation
 * 　- Long-period traffic statistics: such as 1440-minute (1-day) aggregation
 * - Specify this field during the query to select the storage aggregation period. For example:
 * 　- Pass `10`: Query short-period data aggregated at 10-minute granularity
 * 　- Pass `1440`: Query long-period data aggregated at 1-day granularity | 10                                       | - 1
 * - 10
 * - 60
 * - 1440                                                                                                                                                                                                                                                                                                                                                                                                                                   |
 * ### Response elements
 * | Name                | Type   | Description                                                                                       | Example value                    | Valid values |
 * |---------------------|--------|--------------------------------------------------------------------------------------------|---------------------------|--------|
 * |       | object | RpcResponse <ArrayList>                                                                    |                           | -      |
 * | RequestId           | string | The request ID.                                                                                   | 4DAC4BE1-BEEA-5D84-BE06-E1B796F3B941 | -      |
 * | NisTrafficRankingId | string | The result ID of this traffic ranking analysis. Call the DescribeNisTrafficRanking operation to obtain the final analysis results.    | task-6462a7b4c4a54b****   | -      |
 * ## Internet VPC flow log analysis.
 * ### Request parameters
 * | Name              | Type    | Required | Description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  | Example                                     | Valid values                                                                                                                                                                                                                                                                                                           |
 * |-------------------|---------|------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
 * | RegionNo          | string  | Yes   | The region where the resource resides.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      | cn-shanghai                              | -                                                                                                                                                                                                                                                                                                                |
 * | TrafficAnalyzerId | string  | Yes   | The traffic analyzer ID.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     | nta-262****ca07f                         | -                                                                                                                                                                                                                                                                                                                |
 * | TrafficScenario   | string  | Yes   | The supported analysis scenario:
 * ● Internet VPC flow log analysis                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             | Fixed value: VpcFlowLogInternet              | VpcFlowLogInternet                                                                                                                                                                                                                                                                                               |
 * | Direction         | string  | Yes   | The network traffic direction based on Alibaba Cloud resources. ● In: Traffic flowing into the elastic network interfaces (ENIs).
 * ● Out: Traffic flowing out of the elastic network interfaces (ENIs).                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      | In                                       | - In
 * - Out                                                                                                                                                                                                                                                                                                      |
 * | TupleDimension    | string  | Yes   | The traffic storage aggregation dimension.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  | Tuple1                                   | - Tuple1
 * - Tuple2
 * - Tuple5                                                                                                                                                                                                                                                                                    |
 * | GroupBy           | array   | No   | Specifies multiple traffic dimensions for aggregation and sorting.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            |                                          | -                                                                                                                                                                                                                                                                                                                |
 * |                   | string  | No   | Based on the TupleDimension field, you can specify the following aggregation dimensions:
 * ● When TupleDimension = Tuple1:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ CloudIp: Cloud IP
 * ● When TupleDimension = Tuple2:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * 　■ `Country`: Client country
 * 　■ `Province`: Client province
 * 　■ `City`: Client city
 * 　■ `Isp`: Internet service provider
 * 　■ `Asn`: Autonomous system number
 * ● When TupleDimension = Tuple5:
 * 　■ VpcId: VPC ID
 * 　■ VSwitchId: vSwitch ID
 * 　■ NetworkInterfaceId: elastic network interfaces (ENIs) ID
 * 　■ EcsId: ECS instance ID
 * 　■ SourceIp: Source IP
 * 　■ DestinationIp: Destination IP
 * 　■ TrafficPath: Traffic path
 * 　■ SourcePort: Source port
 * 　■ DestinationPort: Destination port
 * 　■ Protocol: Network protocol
 * 　■ Country: Client country
 * 　■ Province: Client province
 * 　■ City: Client city
 * 　■ Isp: Internet service provider
 * 　■ Asn: Autonomous system number | ["VpcId"]                                | - VpcId
 * - VSwitchId
 * - CloudIp
 * - SourceIp
 * - DestinationIp
 * - Protocol
 * - SourcePort
 * - DestinationPort
 * - TrafficPath
 * - Country
 * - Province
 * - City
 * - Isp
 * - Asn                                                                                         |
 * | OrderBy           | string  | Yes   | The following traffic metrics are supported for sorting: Bytes, Packets, RoundTripTime.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        | Bytes                                    | - Bytes
 * - Packets
 * - RoundTripTime                                                                                                                                                                                                                                                                         |
 * | Filter            | array   | No   | Specifies additional filter conditions for focused traffic analysis.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  |                                          | -                                                                                                                                                                                                                                                                                                                |
 * |                   | object  | No   | The filter condition for traffic, a Key-Value-Operator object.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      |                                          | -                                                                                                                                                                                                                                                                                                                |
 * | key               | string  | No   | The supported filter condition label keys are as follows:
 * - When `TupleDimension` is 1-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (required, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `CloudIp`: Cloud IP (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 2-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (required, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP (the corresponding value supports multiple selections)
 * 　- `DestinationIp`: Destination IP (the corresponding value supports multiple selections)
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * 　- `ClientCountry`: Filter traffic analysis scope by country (the corresponding value supports multiple selections)
 * 　- `ClientCity`: Filter traffic analysis scope by city (the corresponding value supports multiple selections)
 * 　- `ClientAsn`: Filter traffic analysis scope by ASN (the corresponding value supports multiple selections)
 * 　- `ClientIsp`: Filter traffic analysis scope by client ISP (the corresponding value supports multiple selections)
 * - When `TupleDimension` is 5-tuple:
 * 　- `FlowAction`: The action type executed on traffic after matching the corresponding rule or policy (required, the corresponding value does not support multiple selections)
 * 　- `VpcId`: VPC ID (the corresponding value supports multiple selections)
 * 　- `VSwitchId`: vSwitch ID (the corresponding value supports multiple selections)
 * 　- `NetworkInterfaceId`: elastic network interfaces (ENIs) ID (the corresponding value supports multiple selections)
 * 　- `EcsId`: ECS instance ID (the corresponding value supports multiple selections)
 * 　- `SourceIp`: Source IP
 * 　- `DestinationIp`: Destination IP
 * 　- `TrafficPath`: Traffic path (the corresponding value supports multiple selections)
 * 　- `SourcePort`: Source port (the corresponding value supports multiple selections)
 * 　- `DestinationPort`: Destination port (the corresponding value supports multiple selections)
 *
 * @param request StartNisTrafficRankingRequest
 * @return StartNisTrafficRankingResponse
 */
StartNisTrafficRankingResponse Client::startNisTrafficRanking(const StartNisTrafficRankingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startNisTrafficRankingWithOptions(request, runtime);
}

/**
 * @summary Updates an inspection task.
 *
 * @param request UpdateNisInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateNisInspectionTaskResponse
 */
UpdateNisInspectionTaskResponse Client::updateNisInspectionTaskWithOptions(const UpdateNisInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInspectionTaskId()) {
    query["InspectionTaskId"] = request.getInspectionTaskId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Updates an inspection task.
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