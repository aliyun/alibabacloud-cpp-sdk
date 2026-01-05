// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsSignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsSignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SignStatus, signStatus_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsSignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SignStatus, signStatus_);
    };
    QuerySmsSignResponseBody() = default ;
    QuerySmsSignResponseBody(const QuerySmsSignResponseBody &) = default ;
    QuerySmsSignResponseBody(QuerySmsSignResponseBody &&) = default ;
    QuerySmsSignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsSignResponseBody() = default ;
    QuerySmsSignResponseBody& operator=(const QuerySmsSignResponseBody &) = default ;
    QuerySmsSignResponseBody& operator=(QuerySmsSignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->createDate_ == nullptr && this->message_ == nullptr && this->reason_ == nullptr && this->requestId_ == nullptr && this->signName_ == nullptr
        && this->signStatus_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsSignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QuerySmsSignResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsSignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QuerySmsSignResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QuerySmsSignResponseBody& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signStatus Field Functions 
    bool hasSignStatus() const { return this->signStatus_ != nullptr;};
    void deleteSignStatus() { this->signStatus_ = nullptr;};
    inline int32_t getSignStatus() const { DARABONBA_PTR_GET_DEFAULT(signStatus_, 0) };
    inline QuerySmsSignResponseBody& setSignStatus(int32_t signStatus) { DARABONBA_PTR_SET_VALUE(signStatus_, signStatus) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   Other values indicate that the request fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The date and time when the signature was created.
    shared_ptr<string> createDate_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The remarks of the review. Valid values:
    // 
    // *   If the signature is in the **Approved** or **Pending Approval** state, No Remarks is returned.
    // *   If the signature is in the **Not Approved** state, the reason why the signature is rejected is returned.
    shared_ptr<string> reason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The signature.
    shared_ptr<string> signName_ {};
    // The status of the signature. Valid values:
    // 
    // *   **0**: The signature is pending approval.
    // *   **1**: The signature is approved.
    // *   **2**: The signature is rejected. The Reason parameter indicates the reason why the signature is rejected.
    // *   **10**: The signature is cancelled.
    shared_ptr<int32_t> signStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
