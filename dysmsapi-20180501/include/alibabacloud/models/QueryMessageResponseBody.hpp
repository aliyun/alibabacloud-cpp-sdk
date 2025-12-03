// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMessageResponseBodyNumberDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class QueryMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorDescription, errorDescription_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(NumberDetail, numberDetail_);
      DARABONBA_PTR_TO_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(ResponseDescription, responseDescription_);
      DARABONBA_PTR_TO_JSON(SendDate, sendDate_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorDescription, errorDescription_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(NumberDetail, numberDetail_);
      DARABONBA_PTR_FROM_JSON(ReceiveDate, receiveDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(ResponseDescription, responseDescription_);
      DARABONBA_PTR_FROM_JSON(SendDate, sendDate_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    QueryMessageResponseBody() = default ;
    QueryMessageResponseBody(const QueryMessageResponseBody &) = default ;
    QueryMessageResponseBody(QueryMessageResponseBody &&) = default ;
    QueryMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageResponseBody() = default ;
    QueryMessageResponseBody& operator=(const QueryMessageResponseBody &) = default ;
    QueryMessageResponseBody& operator=(QueryMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorDescription_ == nullptr && return this->message_ == nullptr && return this->messageId_ == nullptr && return this->numberDetail_ == nullptr && return this->receiveDate_ == nullptr
        && return this->requestId_ == nullptr && return this->responseCode_ == nullptr && return this->responseDescription_ == nullptr && return this->sendDate_ == nullptr && return this->status_ == nullptr
        && return this->to_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryMessageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorDescription Field Functions 
    bool hasErrorDescription() const { return this->errorDescription_ != nullptr;};
    void deleteErrorDescription() { this->errorDescription_ = nullptr;};
    inline string errorDescription() const { DARABONBA_PTR_GET_DEFAULT(errorDescription_, "") };
    inline QueryMessageResponseBody& setErrorDescription(string errorDescription) { DARABONBA_PTR_SET_VALUE(errorDescription_, errorDescription) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline QueryMessageResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // numberDetail Field Functions 
    bool hasNumberDetail() const { return this->numberDetail_ != nullptr;};
    void deleteNumberDetail() { this->numberDetail_ = nullptr;};
    inline const QueryMessageResponseBodyNumberDetail & numberDetail() const { DARABONBA_PTR_GET_CONST(numberDetail_, QueryMessageResponseBodyNumberDetail) };
    inline QueryMessageResponseBodyNumberDetail numberDetail() { DARABONBA_PTR_GET(numberDetail_, QueryMessageResponseBodyNumberDetail) };
    inline QueryMessageResponseBody& setNumberDetail(const QueryMessageResponseBodyNumberDetail & numberDetail) { DARABONBA_PTR_SET_VALUE(numberDetail_, numberDetail) };
    inline QueryMessageResponseBody& setNumberDetail(QueryMessageResponseBodyNumberDetail && numberDetail) { DARABONBA_PTR_SET_RVALUE(numberDetail_, numberDetail) };


    // receiveDate Field Functions 
    bool hasReceiveDate() const { return this->receiveDate_ != nullptr;};
    void deleteReceiveDate() { this->receiveDate_ = nullptr;};
    inline string receiveDate() const { DARABONBA_PTR_GET_DEFAULT(receiveDate_, "") };
    inline QueryMessageResponseBody& setReceiveDate(string receiveDate) { DARABONBA_PTR_SET_VALUE(receiveDate_, receiveDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline string responseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
    inline QueryMessageResponseBody& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // responseDescription Field Functions 
    bool hasResponseDescription() const { return this->responseDescription_ != nullptr;};
    void deleteResponseDescription() { this->responseDescription_ = nullptr;};
    inline string responseDescription() const { DARABONBA_PTR_GET_DEFAULT(responseDescription_, "") };
    inline QueryMessageResponseBody& setResponseDescription(string responseDescription) { DARABONBA_PTR_SET_VALUE(responseDescription_, responseDescription) };


    // sendDate Field Functions 
    bool hasSendDate() const { return this->sendDate_ != nullptr;};
    void deleteSendDate() { this->sendDate_ = nullptr;};
    inline string sendDate() const { DARABONBA_PTR_GET_DEFAULT(sendDate_, "") };
    inline QueryMessageResponseBody& setSendDate(string sendDate) { DARABONBA_PTR_SET_VALUE(sendDate_, sendDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryMessageResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline QueryMessageResponseBody& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The status code of the message.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The description of the status code.
    std::shared_ptr<string> errorDescription_ = nullptr;
    // The content of the message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the message.
    std::shared_ptr<string> messageId_ = nullptr;
    // The details about the mobile phone number.
    std::shared_ptr<QueryMessageResponseBodyNumberDetail> numberDetail_ = nullptr;
    // The time when the delivery receipt was received from the carrier.
    std::shared_ptr<string> receiveDate_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status code of the delivery request.
    std::shared_ptr<string> responseCode_ = nullptr;
    // The description of the delivery request status.
    std::shared_ptr<string> responseDescription_ = nullptr;
    // The time when the message was sent to the carrier.
    std::shared_ptr<string> sendDate_ = nullptr;
    // The delivery status of the message.
    // 
    // *   1: The message was sent.
    // *   2: The message failed to be sent.
    // *   3: The message is being sent.
    std::shared_ptr<string> status_ = nullptr;
    // The mobile phone number to which the message was sent.
    std::shared_ptr<string> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
