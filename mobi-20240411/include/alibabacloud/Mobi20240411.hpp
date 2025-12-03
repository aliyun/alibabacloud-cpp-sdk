// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MOBI20240411_HPP_
#define ALIBABACLOUD_MOBI20240411_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Mobi20240411Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Mobi20240411.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mobi20240411
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 通过模板创建应用
       *
       * @param request CreateAppFromTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppFromTemplateResponse
       */
      Models::CreateAppFromTemplateResponse createAppFromTemplateWithOptions(const Models::CreateAppFromTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过模板创建应用
       *
       * @param request CreateAppFromTemplateRequest
       * @return CreateAppFromTemplateResponse
       */
      Models::CreateAppFromTemplateResponse createAppFromTemplate(const Models::CreateAppFromTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Mobi20240411
#endif
