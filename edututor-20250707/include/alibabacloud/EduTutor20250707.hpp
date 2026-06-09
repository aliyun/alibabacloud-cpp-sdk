// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EDUTUTOR20250707_HPP_
#define ALIBABACLOUD_EDUTUTOR20250707_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EduTutor20250707Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EduTutor20250707.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EduTutor20250707
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary AnswerSSE
       *
       * @param request AnswerSSERequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnswerSSEResponse
       */
      FutureGenerator<Models::AnswerSSEResponse> answerSSEWithSSE(const Models::AnswerSSERequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AnswerSSE
       *
       * @param request AnswerSSERequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AnswerSSEResponse
       */
      Models::AnswerSSEResponse answerSSEWithOptions(const Models::AnswerSSERequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary AnswerSSE
       *
       * @param request AnswerSSERequest
       * @return AnswerSSEResponse
       */
      Models::AnswerSSEResponse answerSSE(const Models::AnswerSSERequest &request);

      /**
       * @summary CutQuestions
       *
       * @param request CutQuestionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CutQuestionsResponse
       */
      Models::CutQuestionsResponse cutQuestionsWithOptions(const Models::CutQuestionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CutQuestions
       *
       * @param request CutQuestionsRequest
       * @return CutQuestionsResponse
       */
      Models::CutQuestionsResponse cutQuestions(const Models::CutQuestionsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EduTutor20250707
#endif
