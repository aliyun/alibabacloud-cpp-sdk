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
    virtual bool empty() const override { this->code_ != nullptr
        && this->createDate_ != nullptr && this->message_ != nullptr && this->reason_ != nullptr && this->requestId_ != nullptr && this->signName_ != nullptr
        && this->signStatus_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsSignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline QuerySmsSignResponseBody& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsSignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline QuerySmsSignResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QuerySmsSignResponseBody& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signStatus Field Functions 
    bool hasSignStatus() const { return this->signStatus_ != nullptr;};
    void deleteSignStatus() { this->signStatus_ = nullptr;};
    inline int32_t signStatus() const { DARABONBA_PTR_GET_DEFAULT(signStatus_, 0) };
    inline QuerySmsSignResponseBody& setSignStatus(int32_t signStatus) { DARABONBA_PTR_SET_VALUE(signStatus_, signStatus) };


  protected:
    // The response code.
    // 
    // *   If OK is returned, the request is successful.
    // *   Other values indicate that the request fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    std::shared_ptr<string> code_ = nullptr;
    // The date and time when the signature was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The remarks of the review. Valid values:
    // 
    // *   If the signature is in the **Approved** or **Pending Approval** state, No Remarks is returned.
    // *   If the signature is in the **Not Approved** state, the reason why the signature is rejected is returned.
    std::shared_ptr<string> reason_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The signature.
    std::shared_ptr<string> signName_ = nullptr;
    // The status of the signature. Valid values:
    // 
    // *   **0**: The signature is pending approval.
    // *   **1**: The signature is approved.
    // *   **2**: The signature is rejected. The Reason parameter indicates the reason why the signature is rejected.
    // *   **10**: The signature is cancelled.
    std::shared_ptr<int32_t> signStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
