// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_SAFCONSOLE20210112_HPP_
#define ALIBABACLOUD_SAFCONSOLE20210112_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Safconsole20210112Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Safconsole20210112.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20210112
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Used for external deletion of community samples in risk identification services.
       *
       * @param request RevokeFeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeFeedbackResponse
       */
      Models::RevokeFeedbackResponse revokeFeedbackWithOptions(const Models::RevokeFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used for external deletion of community samples in risk identification services.
       *
       * @param request RevokeFeedbackRequest
       * @return RevokeFeedbackResponse
       */
      Models::RevokeFeedbackResponse revokeFeedback(const Models::RevokeFeedbackRequest &request);

      /**
       * @summary Used for the external creation of community samples in risk identification services.
       *
       * @param request SendFeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendFeedbackResponse
       */
      Models::SendFeedbackResponse sendFeedbackWithOptions(const Models::SendFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used for the external creation of community samples in risk identification services.
       *
       * @param request SendFeedbackRequest
       * @return SendFeedbackResponse
       */
      Models::SendFeedbackResponse sendFeedback(const Models::SendFeedbackRequest &request);

      /**
       * @summary Single User API for Sample Creation
       *
       * @param request UploadSampleApiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSampleApiResponse
       */
      Models::UploadSampleApiResponse uploadSampleApiWithOptions(const Models::UploadSampleApiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Single User API for Sample Creation
       *
       * @param request UploadSampleApiRequest
       * @return UploadSampleApiResponse
       */
      Models::UploadSampleApiResponse uploadSampleApi(const Models::UploadSampleApiRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Safconsole20210112
#endif
