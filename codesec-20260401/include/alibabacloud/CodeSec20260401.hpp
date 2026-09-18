// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CODESEC20260401_HPP_
#define ALIBABACLOUD_CODESEC20260401_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/CodeSec20260401Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/CodeSec20260401.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CodeSec20260401
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Finalizes a code bundle after the client completes an OSS PUT operation. This operation validates the uploaded object and sets the code bundle status to ready. If CI metadata that triggers an automatic scan was provided during creation, a scanId is returned.
       *
       * @param request CompleteCodeBundleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteCodeBundleResponse
       */
      Models::CompleteCodeBundleResponse completeCodeBundleWithOptions(const string &projectId, const string &codeBundleId, const Models::CompleteCodeBundleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Finalizes a code bundle after the client completes an OSS PUT operation. This operation validates the uploaded object and sets the code bundle status to ready. If CI metadata that triggers an automatic scan was provided during creation, a scanId is returned.
       *
       * @param request CompleteCodeBundleRequest
       * @return CompleteCodeBundleResponse
       */
      Models::CompleteCodeBundleResponse completeCodeBundle(const string &projectId, const string &codeBundleId, const Models::CompleteCodeBundleRequest &request);

      /**
       * @summary Creates a function code package in pending status and returns a pre-signed OSS PUT upload credential.
       *
       * @param request CreateCodeBundleRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCodeBundleResponse
       */
      Models::CreateCodeBundleResponse createCodeBundleWithOptions(const string &projectId, const Models::CreateCodeBundleRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a function code package in pending status and returns a pre-signed OSS PUT upload credential.
       *
       * @param request CreateCodeBundleRequest
       * @return CreateCodeBundleResponse
       */
      Models::CreateCodeBundleResponse createCodeBundle(const string &projectId, const Models::CreateCodeBundleRequest &request);

      /**
       * @summary Creates a project.
       *
       * @param tmpReq CreateProjectRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProjectWithOptions(const Models::CreateProjectRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a project.
       *
       * @param request CreateProjectRequest
       * @return CreateProjectResponse
       */
      Models::CreateProjectResponse createProject(const Models::CreateProjectRequest &request);

      /**
       * @summary Creates a scan task based on a code package that is ready.
       *
       * @param request CreateScanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScanResponse
       */
      Models::CreateScanResponse createScanWithOptions(const string &projectId, const Models::CreateScanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scan task based on a code package that is ready.
       *
       * @param request CreateScanRequest
       * @return CreateScanResponse
       */
      Models::CreateScanResponse createScan(const string &projectId, const Models::CreateScanRequest &request);

      /**
       * @summary 生成 SBOM / 许可证清单的短时下载链接
       *
       * @param request CreateScanSbomExportRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateScanSbomExportResponse
       */
      Models::CreateScanSbomExportResponse createScanSbomExportWithOptions(const string &projectId, const string &scanId, const Models::CreateScanSbomExportRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成 SBOM / 许可证清单的短时下载链接
       *
       * @param request CreateScanSbomExportRequest
       * @return CreateScanSbomExportResponse
       */
      Models::CreateScanSbomExportResponse createScanSbomExport(const string &projectId, const string &scanId, const Models::CreateScanSbomExportRequest &request);

      /**
       * @summary Lists projects under a tenant by page, with support for fuzzy search by name or prompt.
       *
       * @param request DescribeProjectsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeProjectsResponse
       */
      Models::DescribeProjectsResponse describeProjectsWithOptions(const Models::DescribeProjectsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists projects under a tenant by page, with support for fuzzy search by name or prompt.
       *
       * @param request DescribeProjectsRequest
       * @return DescribeProjectsResponse
       */
      Models::DescribeProjectsResponse describeProjects(const Models::DescribeProjectsRequest &request);

      /**
       * @summary Queries the details of a scan task.
       *
       * @param request DescribeScanRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScanResponse
       */
      Models::DescribeScanResponse describeScanWithOptions(const string &projectId, const string &scanId, const Models::DescribeScanRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a scan task.
       *
       * @param request DescribeScanRequest
       * @return DescribeScanResponse
       */
      Models::DescribeScanResponse describeScan(const string &projectId, const string &scanId, const Models::DescribeScanRequest &request);

      /**
       * @summary Queries the task result list to retrieve detailed SAST or SCA results of a specific scan.
       *
       * @param request DescribeScanResultsByEngineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScanResultsByEngineResponse
       */
      Models::DescribeScanResultsByEngineResponse describeScanResultsByEngineWithOptions(const string &projectId, const string &scanId, const string &engine, const Models::DescribeScanResultsByEngineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task result list to retrieve detailed SAST or SCA results of a specific scan.
       *
       * @param request DescribeScanResultsByEngineRequest
       * @return DescribeScanResultsByEngineResponse
       */
      Models::DescribeScanResultsByEngineResponse describeScanResultsByEngine(const string &projectId, const string &scanId, const string &engine, const Models::DescribeScanResultsByEngineRequest &request);

      /**
       * @summary Lists scan tasks under a specified project with pagination.
       *
       * @param request DescribeScansRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScansResponse
       */
      Models::DescribeScansResponse describeScansWithOptions(const string &projectId, const Models::DescribeScansRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists scan tasks under a specified project with pagination.
       *
       * @param request DescribeScansRequest
       * @return DescribeScansResponse
       */
      Models::DescribeScansResponse describeScans(const string &projectId, const Models::DescribeScansRequest &request);
  };
} // namespace AlibabaCloud
} // namespace CodeSec20260401
#endif
