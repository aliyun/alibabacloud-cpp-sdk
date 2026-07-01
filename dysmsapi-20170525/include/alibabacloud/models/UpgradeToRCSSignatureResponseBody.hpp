// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADETORCSSIGNATURERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADETORCSSIGNATURERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class UpgradeToRCSSignatureResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeToRCSSignatureResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeToRCSSignatureResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpgradeToRCSSignatureResponseBody() = default ;
    UpgradeToRCSSignatureResponseBody(const UpgradeToRCSSignatureResponseBody &) = default ;
    UpgradeToRCSSignatureResponseBody(UpgradeToRCSSignatureResponseBody &&) = default ;
    UpgradeToRCSSignatureResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeToRCSSignatureResponseBody() = default ;
    UpgradeToRCSSignatureResponseBody& operator=(const UpgradeToRCSSignatureResponseBody &) = default ;
    UpgradeToRCSSignatureResponseBody& operator=(UpgradeToRCSSignatureResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ChatbotCode, chatbotCode_);
        DARABONBA_PTR_TO_JSON(SignId, signId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ChatbotCode, chatbotCode_);
        DARABONBA_PTR_FROM_JSON(SignId, signId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->chatbotCode_ == nullptr
        && this->signId_ == nullptr; };
      // chatbotCode Field Functions 
      bool hasChatbotCode() const { return this->chatbotCode_ != nullptr;};
      void deleteChatbotCode() { this->chatbotCode_ = nullptr;};
      inline string getChatbotCode() const { DARABONBA_PTR_GET_DEFAULT(chatbotCode_, "") };
      inline Data& setChatbotCode(string chatbotCode) { DARABONBA_PTR_SET_VALUE(chatbotCode_, chatbotCode) };


      // signId Field Functions 
      bool hasSignId() const { return this->signId_ != nullptr;};
      void deleteSignId() { this->signId_ = nullptr;};
      inline int64_t getSignId() const { DARABONBA_PTR_GET_DEFAULT(signId_, 0L) };
      inline Data& setSignId(int64_t signId) { DARABONBA_PTR_SET_VALUE(signId_, signId) };


    protected:
      shared_ptr<string> chatbotCode_ {};
      shared_ptr<int64_t> signId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline UpgradeToRCSSignatureResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpgradeToRCSSignatureResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpgradeToRCSSignatureResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpgradeToRCSSignatureResponseBody::Data) };
    inline UpgradeToRCSSignatureResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpgradeToRCSSignatureResponseBody::Data) };
    inline UpgradeToRCSSignatureResponseBody& setData(const UpgradeToRCSSignatureResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpgradeToRCSSignatureResponseBody& setData(UpgradeToRCSSignatureResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpgradeToRCSSignatureResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeToRCSSignatureResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpgradeToRCSSignatureResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<UpgradeToRCSSignatureResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
