// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBATCHSMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDBATCHSMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class SendBatchSmsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendBatchSmsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendBatchSmsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendBatchSmsResponseBody() = default ;
    SendBatchSmsResponseBody(const SendBatchSmsResponseBody &) = default ;
    SendBatchSmsResponseBody(SendBatchSmsResponseBody &&) = default ;
    SendBatchSmsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendBatchSmsResponseBody() = default ;
    SendBatchSmsResponseBody& operator=(const SendBatchSmsResponseBody &) = default ;
    SendBatchSmsResponseBody& operator=(SendBatchSmsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizId_ != nullptr
        && this->code_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline SendBatchSmsResponseBody& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendBatchSmsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SendBatchSmsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendBatchSmsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the delivery receipt. You can use one of the following methods to query the delivery status of a message based on the ID.
    // 
    // *   Call the [QuerySendDetails](https://help.aliyun.com/document_detail/102352.html) operation.
    // *   Log on to the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview). In the left-side navigation pane, choose **Analytics** > **Delivery Report**.
    std::shared_ptr<string> bizId_ = nullptr;
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   Other values indicate that the request fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
