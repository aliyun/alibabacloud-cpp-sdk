// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SAF20190521_HPP_
#define ALIBABACLOUD_SAF20190521_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Saf20190521Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Saf20190521.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Saf20190521
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Detects risks. This API operation supports public service invocation and allows you to invoke custom events.
       *
       * @param request ExecuteRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteRequestResponse
       */
      Models::ExecuteRequestResponse executeRequestWithOptions(const Models::ExecuteRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects risks. This API operation supports public service invocation and allows you to invoke custom events.
       *
       * @param request ExecuteRequestRequest
       * @return ExecuteRequestResponse
       */
      Models::ExecuteRequestResponse executeRequest(const Models::ExecuteRequestRequest &request);

      /**
       * @summary Detects risks. This operation supports only custom event calls and is available only in the Malaysia region.
       *
       * @param request ExecuteRequestMLRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteRequestMLResponse
       */
      Models::ExecuteRequestMLResponse executeRequestMLWithOptions(const Models::ExecuteRequestMLRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects risks. This operation supports only custom event calls and is available only in the Malaysia region.
       *
       * @param request ExecuteRequestMLRequest
       * @return ExecuteRequestMLResponse
       */
      Models::ExecuteRequestMLResponse executeRequestML(const Models::ExecuteRequestMLRequest &request);

      /**
       * @summary Detects risks. This API allows you to invoke public services and custom events.
       *
       * @param request ExecuteRequestSGRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecuteRequestSGResponse
       */
      Models::ExecuteRequestSGResponse executeRequestSGWithOptions(const Models::ExecuteRequestSGRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects risks. This API allows you to invoke public services and custom events.
       *
       * @param request ExecuteRequestSGRequest
       * @return ExecuteRequestSGResponse
       */
      Models::ExecuteRequestSGResponse executeRequestSG(const Models::ExecuteRequestSGRequest &request);

      /**
       * @summary Detects risks. This operation supports only custom event calls.
       *
       * @param request RequestDecisionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequestDecisionResponse
       */
      Models::RequestDecisionResponse requestDecisionWithOptions(const Models::RequestDecisionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects risks. This operation supports only custom event calls.
       *
       * @param request RequestDecisionRequest
       * @return RequestDecisionResponse
       */
      Models::RequestDecisionResponse requestDecision(const Models::RequestDecisionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Saf20190521
#endif
