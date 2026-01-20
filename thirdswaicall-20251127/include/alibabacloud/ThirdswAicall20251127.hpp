// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_THIRDSWAICALL20251127_HPP_
#define ALIBABACLOUD_THIRDSWAICALL20251127_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ThirdswAicall20251127Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ThirdswAicall20251127.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ThirdswAicall20251127
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 外呼任务通话列表查询
       *
       * @param tmpReq ReadOutboundTaskCallListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReadOutboundTaskCallListResponse
       */
      Models::ReadOutboundTaskCallListResponse readOutboundTaskCallListWithOptions(const Models::ReadOutboundTaskCallListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 外呼任务通话列表查询
       *
       * @param request ReadOutboundTaskCallListRequest
       * @return ReadOutboundTaskCallListResponse
       */
      Models::ReadOutboundTaskCallListResponse readOutboundTaskCallList(const Models::ReadOutboundTaskCallListRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ThirdswAicall20251127
#endif
