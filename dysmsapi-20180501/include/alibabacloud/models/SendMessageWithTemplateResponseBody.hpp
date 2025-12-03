// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEWITHTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEWITHTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SendMessageWithTemplateResponseBodyNumberDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class SendMessageWithTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageWithTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(NumberDetail, numberDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(ResponseDescription, responseDescription_);
      DARABONBA_PTR_TO_JSON(Segments, segments_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageWithTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(NumberDetail, numberDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(ResponseDescription, responseDescription_);
      DARABONBA_PTR_FROM_JSON(Segments, segments_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    SendMessageWithTemplateResponseBody() = default ;
    SendMessageWithTemplateResponseBody(const SendMessageWithTemplateResponseBody &) = default ;
    SendMessageWithTemplateResponseBody(SendMessageWithTemplateResponseBody &&) = default ;
    SendMessageWithTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageWithTemplateResponseBody() = default ;
    SendMessageWithTemplateResponseBody& operator=(const SendMessageWithTemplateResponseBody &) = default ;
    SendMessageWithTemplateResponseBody& operator=(SendMessageWithTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messageId_ == nullptr
        && return this->numberDetail_ == nullptr && return this->requestId_ == nullptr && return this->responseCode_ == nullptr && return this->responseDescription_ == nullptr && return this->segments_ == nullptr
        && return this->to_ == nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline SendMessageWithTemplateResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // numberDetail Field Functions 
    bool hasNumberDetail() const { return this->numberDetail_ != nullptr;};
    void deleteNumberDetail() { this->numberDetail_ = nullptr;};
    inline const SendMessageWithTemplateResponseBodyNumberDetail & numberDetail() const { DARABONBA_PTR_GET_CONST(numberDetail_, SendMessageWithTemplateResponseBodyNumberDetail) };
    inline SendMessageWithTemplateResponseBodyNumberDetail numberDetail() { DARABONBA_PTR_GET(numberDetail_, SendMessageWithTemplateResponseBodyNumberDetail) };
    inline SendMessageWithTemplateResponseBody& setNumberDetail(const SendMessageWithTemplateResponseBodyNumberDetail & numberDetail) { DARABONBA_PTR_SET_VALUE(numberDetail_, numberDetail) };
    inline SendMessageWithTemplateResponseBody& setNumberDetail(SendMessageWithTemplateResponseBodyNumberDetail && numberDetail) { DARABONBA_PTR_SET_RVALUE(numberDetail_, numberDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendMessageWithTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline string responseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
    inline SendMessageWithTemplateResponseBody& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // responseDescription Field Functions 
    bool hasResponseDescription() const { return this->responseDescription_ != nullptr;};
    void deleteResponseDescription() { this->responseDescription_ = nullptr;};
    inline string responseDescription() const { DARABONBA_PTR_GET_DEFAULT(responseDescription_, "") };
    inline SendMessageWithTemplateResponseBody& setResponseDescription(string responseDescription) { DARABONBA_PTR_SET_VALUE(responseDescription_, responseDescription) };


    // segments Field Functions 
    bool hasSegments() const { return this->segments_ != nullptr;};
    void deleteSegments() { this->segments_ = nullptr;};
    inline string segments() const { DARABONBA_PTR_GET_DEFAULT(segments_, "") };
    inline SendMessageWithTemplateResponseBody& setSegments(string segments) { DARABONBA_PTR_SET_VALUE(segments_, segments) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline SendMessageWithTemplateResponseBody& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The ID of the message.
    std::shared_ptr<string> messageId_ = nullptr;
    // The details about the mobile phone number of the recipient.
    std::shared_ptr<SendMessageWithTemplateResponseBodyNumberDetail> numberDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status code of the delivery request.
    std::shared_ptr<string> responseCode_ = nullptr;
    // The description of the delivery request status.
    std::shared_ptr<string> responseDescription_ = nullptr;
    // The number of messages that incurred fees.
    std::shared_ptr<string> segments_ = nullptr;
    // The mobile phone number to which the message was sent. The dialing code was added to the beginning of the mobile phone number. Example: 861503871\\*\\*\\*\\*.
    std::shared_ptr<string> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
