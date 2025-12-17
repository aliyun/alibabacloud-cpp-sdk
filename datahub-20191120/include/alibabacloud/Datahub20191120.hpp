// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DATAHUB20191120_HPP_
#define ALIBABACLOUD_DATAHUB20191120_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Datahub20191120Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Datahub20191120.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Datahub20191120
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Query project list information
       *
       * @param request ListProjectsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjectsWithOptions(const Models::ListProjectsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query project list information
       *
       * @param request ListProjectsRequest
       * @return ListProjectsResponse
       */
      Models::ListProjectsResponse listProjects(const Models::ListProjectsRequest &request);

      /**
       * @summary 开通Datahub服务
       *
       * @param request OpenDataHubServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDataHubServiceResponse
       */
      Models::OpenDataHubServiceResponse openDataHubServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 开通Datahub服务
       *
       * @return OpenDataHubServiceResponse
       */
      Models::OpenDataHubServiceResponse openDataHubService();
  };
} // namespace AlibabaCloud
} // namespace Datahub20191120
#endif
