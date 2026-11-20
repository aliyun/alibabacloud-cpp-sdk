// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QWENB2BMED20261116_HPP_
#define ALIBABACLOUD_QWENB2BMED20261116_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/QwenB2BMed20261116Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/QwenB2BMed20261116.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BMed20261116
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Initiates a conversation with the Qwen medical agent.
       *
       * @param request MedicalAgentChatRequest
       * @param headers MedicalAgentChatHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalAgentChatResponse
       */
      FutureGenerator<Models::MedicalAgentChatResponse> medicalAgentChatWithSSE(const Models::MedicalAgentChatRequest &request, const Models::MedicalAgentChatHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a conversation with the Qwen medical agent.
       *
       * @param request MedicalAgentChatRequest
       * @param headers MedicalAgentChatHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalAgentChatResponse
       */
      Models::MedicalAgentChatResponse medicalAgentChatWithOptions(const Models::MedicalAgentChatRequest &request, const Models::MedicalAgentChatHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a conversation with the Qwen medical agent.
       *
       * @param request MedicalAgentChatRequest
       * @return MedicalAgentChatResponse
       */
      Models::MedicalAgentChatResponse medicalAgentChat(const Models::MedicalAgentChatRequest &request);

      /**
       * @summary Performs inference using the external Qwen medical foundation model.
       *
       * @param request MedicalModelInferenceRequest
       * @param headers MedicalModelInferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalModelInferenceResponse
       */
      FutureGenerator<Models::MedicalModelInferenceResponse> medicalModelInferenceWithSSE(const Models::MedicalModelInferenceRequest &request, const Models::MedicalModelInferenceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs inference using the external Qwen medical foundation model.
       *
       * @param request MedicalModelInferenceRequest
       * @param headers MedicalModelInferenceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return MedicalModelInferenceResponse
       */
      Models::MedicalModelInferenceResponse medicalModelInferenceWithOptions(const Models::MedicalModelInferenceRequest &request, const Models::MedicalModelInferenceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs inference using the external Qwen medical foundation model.
       *
       * @param request MedicalModelInferenceRequest
       * @return MedicalModelInferenceResponse
       */
      Models::MedicalModelInferenceResponse medicalModelInference(const Models::MedicalModelInferenceRequest &request);

      /**
       * @summary Activates the Qwen medical service and returns the current activation status.
       *
       * @param request OpenServiceRequest
       * @param headers OpenServiceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenServiceResponse
       */
      Models::OpenServiceResponse openServiceWithOptions(const Models::OpenServiceRequest &request, const Models::OpenServiceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates the Qwen medical service and returns the current activation status.
       *
       * @param request OpenServiceRequest
       * @return OpenServiceResponse
       */
      Models::OpenServiceResponse openService(const Models::OpenServiceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace QwenB2BMed20261116
#endif
