// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EDUAISERVICE20231218_HPP_
#define ALIBABACLOUD_EDUAISERVICE20231218_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Eduaiservice20231218Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Eduaiservice20231218.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eduaiservice20231218
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 查询指定学生实验记录
       *
       * @param request QueryOrgLabRecordListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryOrgLabRecordListResponse
       */
      Models::QueryOrgLabRecordListResponse queryOrgLabRecordListWithOptions(const Models::QueryOrgLabRecordListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定学生实验记录
       *
       * @param request QueryOrgLabRecordListRequest
       * @return QueryOrgLabRecordListResponse
       */
      Models::QueryOrgLabRecordListResponse queryOrgLabRecordList(const Models::QueryOrgLabRecordListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Eduaiservice20231218
#endif
