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
       * @summary Queries the task result list to retrieve detailed SAST or SCA results for a specific scan.
       *
       * @param request DescribeScanResultsByEngineRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeScanResultsByEngineResponse
       */
      Models::DescribeScanResultsByEngineResponse describeScanResultsByEngineWithOptions(const string &projectId, const string &scanId, const string &engine, const Models::DescribeScanResultsByEngineRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task result list to retrieve detailed SAST or SCA results for a specific scan.
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
