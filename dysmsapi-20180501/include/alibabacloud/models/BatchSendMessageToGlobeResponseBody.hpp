// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSENDMESSAGETOGLOBERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHSENDMESSAGETOGLOBERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20180501
{
namespace Models
{
  class BatchSendMessageToGlobeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchSendMessageToGlobeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedList, failedList_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(MessageIdList, messageIdList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_TO_JSON(ResponseDescription, responseDescription_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
    };
    friend void from_json(const Darabonba::Json& j, BatchSendMessageToGlobeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedList, failedList_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(MessageIdList, messageIdList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseCode, responseCode_);
      DARABONBA_PTR_FROM_JSON(ResponseDescription, responseDescription_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
    };
    BatchSendMessageToGlobeResponseBody() = default ;
    BatchSendMessageToGlobeResponseBody(const BatchSendMessageToGlobeResponseBody &) = default ;
    BatchSendMessageToGlobeResponseBody(BatchSendMessageToGlobeResponseBody &&) = default ;
    BatchSendMessageToGlobeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchSendMessageToGlobeResponseBody() = default ;
    BatchSendMessageToGlobeResponseBody& operator=(const BatchSendMessageToGlobeResponseBody &) = default ;
    BatchSendMessageToGlobeResponseBody& operator=(BatchSendMessageToGlobeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failedList_ == nullptr
        && return this->from_ == nullptr && return this->messageIdList_ == nullptr && return this->requestId_ == nullptr && return this->responseCode_ == nullptr && return this->responseDescription_ == nullptr
        && return this->successCount_ == nullptr; };
    // failedList Field Functions 
    bool hasFailedList() const { return this->failedList_ != nullptr;};
    void deleteFailedList() { this->failedList_ = nullptr;};
    inline string failedList() const { DARABONBA_PTR_GET_DEFAULT(failedList_, "") };
    inline BatchSendMessageToGlobeResponseBody& setFailedList(string failedList) { DARABONBA_PTR_SET_VALUE(failedList_, failedList) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline BatchSendMessageToGlobeResponseBody& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // messageIdList Field Functions 
    bool hasMessageIdList() const { return this->messageIdList_ != nullptr;};
    void deleteMessageIdList() { this->messageIdList_ = nullptr;};
    inline string messageIdList() const { DARABONBA_PTR_GET_DEFAULT(messageIdList_, "") };
    inline BatchSendMessageToGlobeResponseBody& setMessageIdList(string messageIdList) { DARABONBA_PTR_SET_VALUE(messageIdList_, messageIdList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchSendMessageToGlobeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseCode Field Functions 
    bool hasResponseCode() const { return this->responseCode_ != nullptr;};
    void deleteResponseCode() { this->responseCode_ = nullptr;};
    inline string responseCode() const { DARABONBA_PTR_GET_DEFAULT(responseCode_, "") };
    inline BatchSendMessageToGlobeResponseBody& setResponseCode(string responseCode) { DARABONBA_PTR_SET_VALUE(responseCode_, responseCode) };


    // responseDescription Field Functions 
    bool hasResponseDescription() const { return this->responseDescription_ != nullptr;};
    void deleteResponseDescription() { this->responseDescription_ = nullptr;};
    inline string responseDescription() const { DARABONBA_PTR_GET_DEFAULT(responseDescription_, "") };
    inline BatchSendMessageToGlobeResponseBody& setResponseDescription(string responseDescription) { DARABONBA_PTR_SET_VALUE(responseDescription_, responseDescription) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline string successCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, "") };
    inline BatchSendMessageToGlobeResponseBody& setSuccessCount(string successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


  protected:
    // The list of the mobile phone numbers that failed to receive the messages.
    std::shared_ptr<string> failedList_ = nullptr;
    // The sender ID that was returned. The API operation returns the sender ID that you have specified in the request parameters.
    std::shared_ptr<string> from_ = nullptr;
    // The ID of the sent message.
    std::shared_ptr<string> messageIdList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The HTTP status code. If OK is returned, the request is successful. For more information, see [Error codes](https://help.aliyun.com/document_detail/180674.html).
    std::shared_ptr<string> responseCode_ = nullptr;
    // The description of the status code.
    std::shared_ptr<string> responseDescription_ = nullptr;
    // The number of sent messages.
    std::shared_ptr<string> successCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20180501
#endif
