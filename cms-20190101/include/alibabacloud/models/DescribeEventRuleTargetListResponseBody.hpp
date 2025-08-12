// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTRULETARGETLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyContactParameters.hpp>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyFcParameters.hpp>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyMnsParameters.hpp>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyOpenApiParameters.hpp>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodySlsParameters.hpp>
#include <alibabacloud/models/DescribeEventRuleTargetListResponseBodyWebhookParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeEventRuleTargetListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventRuleTargetListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_TO_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_TO_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_TO_JSON(WebhookParameters, webhookParameters_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventRuleTargetListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ContactParameters, contactParameters_);
      DARABONBA_PTR_FROM_JSON(FcParameters, fcParameters_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MnsParameters, mnsParameters_);
      DARABONBA_PTR_FROM_JSON(OpenApiParameters, openApiParameters_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlsParameters, slsParameters_);
      DARABONBA_PTR_FROM_JSON(WebhookParameters, webhookParameters_);
    };
    DescribeEventRuleTargetListResponseBody() = default ;
    DescribeEventRuleTargetListResponseBody(const DescribeEventRuleTargetListResponseBody &) = default ;
    DescribeEventRuleTargetListResponseBody(DescribeEventRuleTargetListResponseBody &&) = default ;
    DescribeEventRuleTargetListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventRuleTargetListResponseBody() = default ;
    DescribeEventRuleTargetListResponseBody& operator=(const DescribeEventRuleTargetListResponseBody &) = default ;
    DescribeEventRuleTargetListResponseBody& operator=(DescribeEventRuleTargetListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->contactParameters_ != nullptr && this->fcParameters_ != nullptr && this->message_ != nullptr && this->mnsParameters_ != nullptr && this->openApiParameters_ != nullptr
        && this->requestId_ != nullptr && this->slsParameters_ != nullptr && this->webhookParameters_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeEventRuleTargetListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // contactParameters Field Functions 
    bool hasContactParameters() const { return this->contactParameters_ != nullptr;};
    void deleteContactParameters() { this->contactParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBodyContactParameters & contactParameters() const { DARABONBA_PTR_GET_CONST(contactParameters_, DescribeEventRuleTargetListResponseBodyContactParameters) };
    inline DescribeEventRuleTargetListResponseBodyContactParameters contactParameters() { DARABONBA_PTR_GET(contactParameters_, DescribeEventRuleTargetListResponseBodyContactParameters) };
    inline DescribeEventRuleTargetListResponseBody& setContactParameters(const DescribeEventRuleTargetListResponseBodyContactParameters & contactParameters) { DARABONBA_PTR_SET_VALUE(contactParameters_, contactParameters) };
    inline DescribeEventRuleTargetListResponseBody& setContactParameters(DescribeEventRuleTargetListResponseBodyContactParameters && contactParameters) { DARABONBA_PTR_SET_RVALUE(contactParameters_, contactParameters) };


    // fcParameters Field Functions 
    bool hasFcParameters() const { return this->fcParameters_ != nullptr;};
    void deleteFcParameters() { this->fcParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBodyFcParameters & fcParameters() const { DARABONBA_PTR_GET_CONST(fcParameters_, DescribeEventRuleTargetListResponseBodyFcParameters) };
    inline DescribeEventRuleTargetListResponseBodyFcParameters fcParameters() { DARABONBA_PTR_GET(fcParameters_, DescribeEventRuleTargetListResponseBodyFcParameters) };
    inline DescribeEventRuleTargetListResponseBody& setFcParameters(const DescribeEventRuleTargetListResponseBodyFcParameters & fcParameters) { DARABONBA_PTR_SET_VALUE(fcParameters_, fcParameters) };
    inline DescribeEventRuleTargetListResponseBody& setFcParameters(DescribeEventRuleTargetListResponseBodyFcParameters && fcParameters) { DARABONBA_PTR_SET_RVALUE(fcParameters_, fcParameters) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeEventRuleTargetListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // mnsParameters Field Functions 
    bool hasMnsParameters() const { return this->mnsParameters_ != nullptr;};
    void deleteMnsParameters() { this->mnsParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBodyMnsParameters & mnsParameters() const { DARABONBA_PTR_GET_CONST(mnsParameters_, DescribeEventRuleTargetListResponseBodyMnsParameters) };
    inline DescribeEventRuleTargetListResponseBodyMnsParameters mnsParameters() { DARABONBA_PTR_GET(mnsParameters_, DescribeEventRuleTargetListResponseBodyMnsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setMnsParameters(const DescribeEventRuleTargetListResponseBodyMnsParameters & mnsParameters) { DARABONBA_PTR_SET_VALUE(mnsParameters_, mnsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setMnsParameters(DescribeEventRuleTargetListResponseBodyMnsParameters && mnsParameters) { DARABONBA_PTR_SET_RVALUE(mnsParameters_, mnsParameters) };


    // openApiParameters Field Functions 
    bool hasOpenApiParameters() const { return this->openApiParameters_ != nullptr;};
    void deleteOpenApiParameters() { this->openApiParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBodyOpenApiParameters & openApiParameters() const { DARABONBA_PTR_GET_CONST(openApiParameters_, DescribeEventRuleTargetListResponseBodyOpenApiParameters) };
    inline DescribeEventRuleTargetListResponseBodyOpenApiParameters openApiParameters() { DARABONBA_PTR_GET(openApiParameters_, DescribeEventRuleTargetListResponseBodyOpenApiParameters) };
    inline DescribeEventRuleTargetListResponseBody& setOpenApiParameters(const DescribeEventRuleTargetListResponseBodyOpenApiParameters & openApiParameters) { DARABONBA_PTR_SET_VALUE(openApiParameters_, openApiParameters) };
    inline DescribeEventRuleTargetListResponseBody& setOpenApiParameters(DescribeEventRuleTargetListResponseBodyOpenApiParameters && openApiParameters) { DARABONBA_PTR_SET_RVALUE(openApiParameters_, openApiParameters) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEventRuleTargetListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slsParameters Field Functions 
    bool hasSlsParameters() const { return this->slsParameters_ != nullptr;};
    void deleteSlsParameters() { this->slsParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBodySlsParameters & slsParameters() const { DARABONBA_PTR_GET_CONST(slsParameters_, DescribeEventRuleTargetListResponseBodySlsParameters) };
    inline DescribeEventRuleTargetListResponseBodySlsParameters slsParameters() { DARABONBA_PTR_GET(slsParameters_, DescribeEventRuleTargetListResponseBodySlsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setSlsParameters(const DescribeEventRuleTargetListResponseBodySlsParameters & slsParameters) { DARABONBA_PTR_SET_VALUE(slsParameters_, slsParameters) };
    inline DescribeEventRuleTargetListResponseBody& setSlsParameters(DescribeEventRuleTargetListResponseBodySlsParameters && slsParameters) { DARABONBA_PTR_SET_RVALUE(slsParameters_, slsParameters) };


    // webhookParameters Field Functions 
    bool hasWebhookParameters() const { return this->webhookParameters_ != nullptr;};
    void deleteWebhookParameters() { this->webhookParameters_ = nullptr;};
    inline const DescribeEventRuleTargetListResponseBodyWebhookParameters & webhookParameters() const { DARABONBA_PTR_GET_CONST(webhookParameters_, DescribeEventRuleTargetListResponseBodyWebhookParameters) };
    inline DescribeEventRuleTargetListResponseBodyWebhookParameters webhookParameters() { DARABONBA_PTR_GET(webhookParameters_, DescribeEventRuleTargetListResponseBodyWebhookParameters) };
    inline DescribeEventRuleTargetListResponseBody& setWebhookParameters(const DescribeEventRuleTargetListResponseBodyWebhookParameters & webhookParameters) { DARABONBA_PTR_SET_VALUE(webhookParameters_, webhookParameters) };
    inline DescribeEventRuleTargetListResponseBody& setWebhookParameters(DescribeEventRuleTargetListResponseBodyWebhookParameters && webhookParameters) { DARABONBA_PTR_SET_RVALUE(webhookParameters_, webhookParameters) };


  protected:
    // The HTTP status code.
    // 
    // >  The status code 200 indicates that the call was successful.
    std::shared_ptr<string> code_ = nullptr;
    // The information about the recipients if alert notifications are sent to the alert contacts of an alert contact group.
    std::shared_ptr<DescribeEventRuleTargetListResponseBodyContactParameters> contactParameters_ = nullptr;
    // The information about the recipients in Function Compute.
    std::shared_ptr<DescribeEventRuleTargetListResponseBodyFcParameters> fcParameters_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The notifications of Simple Message Queue (formerly MNS) (SMQ).
    std::shared_ptr<DescribeEventRuleTargetListResponseBodyMnsParameters> mnsParameters_ = nullptr;
    // The information about the recipients in OpenAPI Explorer.
    std::shared_ptr<DescribeEventRuleTargetListResponseBodyOpenApiParameters> openApiParameters_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the recipients in Log Service.
    std::shared_ptr<DescribeEventRuleTargetListResponseBodySlsParameters> slsParameters_ = nullptr;
    // The information about the recipients if alert notifications are sent by sending a request to a callback URL.
    std::shared_ptr<DescribeEventRuleTargetListResponseBodyWebhookParameters> webhookParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
