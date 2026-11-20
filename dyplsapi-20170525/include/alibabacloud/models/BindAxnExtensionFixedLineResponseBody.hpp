// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDAXNEXTENSIONFIXEDLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxnExtensionFixedLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxnExtensionFixedLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxnExtensionFixedLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindAxnExtensionFixedLineResponseBody() = default ;
    BindAxnExtensionFixedLineResponseBody(const BindAxnExtensionFixedLineResponseBody &) = default ;
    BindAxnExtensionFixedLineResponseBody(BindAxnExtensionFixedLineResponseBody &&) = default ;
    BindAxnExtensionFixedLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxnExtensionFixedLineResponseBody() = default ;
    BindAxnExtensionFixedLineResponseBody& operator=(const BindAxnExtensionFixedLineResponseBody &) = default ;
    BindAxnExtensionFixedLineResponseBody& operator=(BindAxnExtensionFixedLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Subid, subid_);
        DARABONBA_PTR_TO_JSON(TelX, telX_);
        DARABONBA_PTR_TO_JSON(TelXext, telXext_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Subid, subid_);
        DARABONBA_PTR_FROM_JSON(TelX, telX_);
        DARABONBA_PTR_FROM_JSON(TelXext, telXext_);
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
      virtual bool empty() const override { return this->subid_ == nullptr
        && this->telX_ == nullptr && this->telXext_ == nullptr; };
      // subid Field Functions 
      bool hasSubid() const { return this->subid_ != nullptr;};
      void deleteSubid() { this->subid_ = nullptr;};
      inline string getSubid() const { DARABONBA_PTR_GET_DEFAULT(subid_, "") };
      inline Data& setSubid(string subid) { DARABONBA_PTR_SET_VALUE(subid_, subid) };


      // telX Field Functions 
      bool hasTelX() const { return this->telX_ != nullptr;};
      void deleteTelX() { this->telX_ = nullptr;};
      inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
      inline Data& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


      // telXext Field Functions 
      bool hasTelXext() const { return this->telXext_ != nullptr;};
      void deleteTelXext() { this->telXext_ = nullptr;};
      inline string getTelXext() const { DARABONBA_PTR_GET_DEFAULT(telXext_, "") };
      inline Data& setTelXext(string telXext) { DARABONBA_PTR_SET_VALUE(telXext_, telXext) };


    protected:
      // Binding ID.
      shared_ptr<string> subid_ {};
      // Privacy number.
      shared_ptr<string> telX_ {};
      // Extension number, 4 digits only.
      shared_ptr<string> telXext_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline BindAxnExtensionFixedLineResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindAxnExtensionFixedLineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BindAxnExtensionFixedLineResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BindAxnExtensionFixedLineResponseBody::Data) };
    inline BindAxnExtensionFixedLineResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BindAxnExtensionFixedLineResponseBody::Data) };
    inline BindAxnExtensionFixedLineResponseBody& setData(const BindAxnExtensionFixedLineResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BindAxnExtensionFixedLineResponseBody& setData(BindAxnExtensionFixedLineResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindAxnExtensionFixedLineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindAxnExtensionFixedLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline BindAxnExtensionFixedLineResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Access denied detail.
    shared_ptr<string> accessDeniedDetail_ {};
    // API request status code. Valid values:
    // 
    // - 0: Success.
    // 
    // - For other error codes, see [API Error Codes](https://help.aliyun.com/document_detail/59892.html).
    shared_ptr<string> code_ {};
    // Response data.
    shared_ptr<BindAxnExtensionFixedLineResponseBody::Data> data_ {};
    // Description.
    shared_ptr<string> message_ {};
    // The unique request ID generated by Alibaba Cloud for this request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call was successful. Valid values:
    // 
    // - true: Successful.
    // 
    // - false: Failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
