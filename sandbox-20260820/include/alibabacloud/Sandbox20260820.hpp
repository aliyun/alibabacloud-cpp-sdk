// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SANDBOX20260820_HPP_
#define ALIBABACLOUD_SANDBOX20260820_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Sandbox20260820Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Sandbox20260820.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 更新 Template
       *
       * @param request UpdateTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplateWithOptions(const string &templateID, const Models::UpdateTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Template
       *
       * @param request UpdateTemplateRequest
       * @return UpdateTemplateResponse
       */
      Models::UpdateTemplateResponse updateTemplate(const string &templateID, const Models::UpdateTemplateRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
