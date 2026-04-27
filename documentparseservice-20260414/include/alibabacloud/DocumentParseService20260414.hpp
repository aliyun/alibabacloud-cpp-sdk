// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DOCUMENTPARSESERVICE20260414_HPP_
#define ALIBABACLOUD_DOCUMENTPARSESERVICE20260414_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/DocumentParseService20260414Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/DocumentParseService20260414.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DocumentParseService20260414
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 文档解析测试接口
       *
       * @param request DocumentParseOnlineApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocumentParseOnlineApiResponse
       */
      Models::DocumentParseOnlineApiResponse documentParseOnlineApiWithOptions(const Models::DocumentParseOnlineApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档解析测试接口
       *
       * @param request DocumentParseOnlineApiRequest
       * @return DocumentParseOnlineApiResponse
       */
      Models::DocumentParseOnlineApiResponse documentParseOnlineApi(const Models::DocumentParseOnlineApiRequest &request);

      /**
       * @summary 文档解析测试接口
       *
       * @param request DocumentParseTestApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DocumentParseTestApiResponse
       */
      Models::DocumentParseTestApiResponse documentParseTestApiWithOptions(const Models::DocumentParseTestApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文档解析测试接口
       *
       * @param request DocumentParseTestApiRequest
       * @return DocumentParseTestApiResponse
       */
      Models::DocumentParseTestApiResponse documentParseTestApi(const Models::DocumentParseTestApiRequest &request);
  };
} // namespace AlibabaCloud
} // namespace DocumentParseService20260414
#endif
