#include <darabonba/Core.hpp>
#include <alibabacloud/CodeSec20260401.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::CodeSec20260401::Models;
namespace AlibabaCloud
{
namespace CodeSec20260401
{

AlibabaCloud::CodeSec20260401::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("codesec", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Finalizes a code bundle after the client completes an OSS PUT operation. This operation validates the uploaded object and sets the code bundle status to ready. If CI metadata that triggers an automatic scan was provided during creation, a scanId is returned.
 *
 * @param request CompleteCodeBundleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CompleteCodeBundleResponse
 */
CompleteCodeBundleResponse Client::completeCodeBundleWithOptions(const string &projectId, const string &codeBundleId, const CompleteCodeBundleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasByteSize()) {
    query["byteSize"] = request.getByteSize();
  }

  if (!!request.hasContentType()) {
    query["contentType"] = request.getContentType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CompleteCodeBundle"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/codeBundles/" , Darabonba::Encode::Encoder::percentEncode(codeBundleId) , "/complete")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompleteCodeBundleResponse>();
}

/**
 * @summary Finalizes a code bundle after the client completes an OSS PUT operation. This operation validates the uploaded object and sets the code bundle status to ready. If CI metadata that triggers an automatic scan was provided during creation, a scanId is returned.
 *
 * @param request CompleteCodeBundleRequest
 * @return CompleteCodeBundleResponse
 */
CompleteCodeBundleResponse Client::completeCodeBundle(const string &projectId, const string &codeBundleId, const CompleteCodeBundleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return completeCodeBundleWithOptions(projectId, codeBundleId, request, headers, runtime);
}

/**
 * @summary Creates a function code package in pending status and returns a pre-signed OSS PUT upload credential.
 *
 * @param request CreateCodeBundleRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCodeBundleResponse
 */
CreateCodeBundleResponse Client::createCodeBundleWithOptions(const string &projectId, const CreateCodeBundleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCiMetadata()) {
    query["ciMetadata"] = request.getCiMetadata();
  }

  if (!!request.hasFilename()) {
    query["filename"] = request.getFilename();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCodeBundle"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/codeBundles")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCodeBundleResponse>();
}

/**
 * @summary Creates a function code package in pending status and returns a pre-signed OSS PUT upload credential.
 *
 * @param request CreateCodeBundleRequest
 * @return CreateCodeBundleResponse
 */
CreateCodeBundleResponse Client::createCodeBundle(const string &projectId, const CreateCodeBundleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createCodeBundleWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary Creates a project.
 *
 * @param tmpReq CreateProjectRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProjectWithOptions(const CreateProjectRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateProjectShrinkRequest request = CreateProjectShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEngines()) {
    request.setEnginesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEngines(), "engines", "json"));
  }

  if (!!tmpReq.hasSource()) {
    request.setSourceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSource(), "source", "json"));
  }

  json query = {};
  if (!!request.hasDescription()) {
    query["description"] = request.getDescription();
  }

  if (!!request.hasEnginesShrink()) {
    query["engines"] = request.getEnginesShrink();
  }

  if (!!request.hasInstructionPrompt()) {
    query["instructionPrompt"] = request.getInstructionPrompt();
  }

  if (!!request.hasName()) {
    query["name"] = request.getName();
  }

  if (!!request.hasSourceShrink()) {
    query["source"] = request.getSourceShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateProject"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateProjectResponse>();
}

/**
 * @summary Creates a project.
 *
 * @param request CreateProjectRequest
 * @return CreateProjectResponse
 */
CreateProjectResponse Client::createProject(const CreateProjectRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createProjectWithOptions(request, headers, runtime);
}

/**
 * @summary Creates a scan task based on a code package that is ready.
 *
 * @param request CreateScanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScanResponse
 */
CreateScanResponse Client::createScanWithOptions(const string &projectId, const CreateScanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCodeBundleId()) {
    query["codeBundleId"] = request.getCodeBundleId();
  }

  if (!!request.hasKind()) {
    query["kind"] = request.getKind();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScan"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/scans")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScanResponse>();
}

/**
 * @summary Creates a scan task based on a code package that is ready.
 *
 * @param request CreateScanRequest
 * @return CreateScanResponse
 */
CreateScanResponse Client::createScan(const string &projectId, const CreateScanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createScanWithOptions(projectId, request, headers, runtime);
}

/**
 * @summary 生成 SBOM / 许可证清单的短时下载链接
 *
 * @param request CreateScanSbomExportRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScanSbomExportResponse
 */
CreateScanSbomExportResponse Client::createScanSbomExportWithOptions(const string &projectId, const string &scanId, const CreateScanSbomExportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFileName()) {
    query["fileName"] = request.getFileName();
  }

  if (!!request.hasFormat()) {
    query["format"] = request.getFormat();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScanSbomExport"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/scans/" , Darabonba::Encode::Encoder::percentEncode(scanId) , "/reports/sbomExports")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScanSbomExportResponse>();
}

/**
 * @summary 生成 SBOM / 许可证清单的短时下载链接
 *
 * @param request CreateScanSbomExportRequest
 * @return CreateScanSbomExportResponse
 */
CreateScanSbomExportResponse Client::createScanSbomExport(const string &projectId, const string &scanId, const CreateScanSbomExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createScanSbomExportWithOptions(projectId, scanId, request, headers, runtime);
}

/**
 * @summary Lists projects under a tenant by page, with support for fuzzy search by name or prompt.
 *
 * @param request DescribeProjectsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeProjectsResponse
 */
DescribeProjectsResponse Client::describeProjectsWithOptions(const DescribeProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasQuery()) {
    query["query"] = request.getQuery();
  }

  if (!!request.hasSortBy()) {
    query["sortBy"] = request.getSortBy();
  }

  if (!!request.hasSortOrder()) {
    query["sortOrder"] = request.getSortOrder();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeProjects"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeProjectsResponse>();
}

/**
 * @summary Lists projects under a tenant by page, with support for fuzzy search by name or prompt.
 *
 * @param request DescribeProjectsRequest
 * @return DescribeProjectsResponse
 */
DescribeProjectsResponse Client::describeProjects(const DescribeProjectsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeProjectsWithOptions(request, headers, runtime);
}

/**
 * @summary Queries the details of a scan task.
 *
 * @param request DescribeScanRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScanResponse
 */
DescribeScanResponse Client::describeScanWithOptions(const string &projectId, const string &scanId, const DescribeScanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScan"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/scans/" , Darabonba::Encode::Encoder::percentEncode(scanId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScanResponse>();
}

/**
 * @summary Queries the details of a scan task.
 *
 * @param request DescribeScanRequest
 * @return DescribeScanResponse
 */
DescribeScanResponse Client::describeScan(const string &projectId, const string &scanId, const DescribeScanRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeScanWithOptions(projectId, scanId, request, headers, runtime);
}

/**
 * @summary Queries the task result list to retrieve detailed SAST or SCA results of a specific scan.
 *
 * @param request DescribeScanResultsByEngineRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScanResultsByEngineResponse
 */
DescribeScanResultsByEngineResponse Client::describeScanResultsByEngineWithOptions(const string &projectId, const string &scanId, const string &engine, const DescribeScanResultsByEngineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBaselineState()) {
    query["baselineState"] = request.getBaselineState();
  }

  if (!!request.hasLang()) {
    query["lang"] = request.getLang();
  }

  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasPackageName()) {
    query["packageName"] = request.getPackageName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScanResultsByEngine"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/scans/" , Darabonba::Encode::Encoder::percentEncode(scanId) , "/results/" , Darabonba::Encode::Encoder::percentEncode(engine))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScanResultsByEngineResponse>();
}

/**
 * @summary Queries the task result list to retrieve detailed SAST or SCA results of a specific scan.
 *
 * @param request DescribeScanResultsByEngineRequest
 * @return DescribeScanResultsByEngineResponse
 */
DescribeScanResultsByEngineResponse Client::describeScanResultsByEngine(const string &projectId, const string &scanId, const string &engine, const DescribeScanResultsByEngineRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeScanResultsByEngineWithOptions(projectId, scanId, engine, request, headers, runtime);
}

/**
 * @summary Lists scan tasks under a specified project with pagination.
 *
 * @param request DescribeScansRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeScansResponse
 */
DescribeScansResponse Client::describeScansWithOptions(const string &projectId, const DescribeScansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["status"] = request.getStatus();
  }

  if (!!request.hasTaskName()) {
    query["taskName"] = request.getTaskName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeScans"},
    {"version" , "2026-04-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/projects/" , Darabonba::Encode::Encoder::percentEncode(projectId) , "/scans")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeScansResponse>();
}

/**
 * @summary Lists scan tasks under a specified project with pagination.
 *
 * @param request DescribeScansRequest
 * @return DescribeScansResponse
 */
DescribeScansResponse Client::describeScans(const string &projectId, const DescribeScansRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return describeScansWithOptions(projectId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace CodeSec20260401