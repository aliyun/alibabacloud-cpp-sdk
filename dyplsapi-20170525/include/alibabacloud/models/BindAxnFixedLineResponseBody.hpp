// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDAXNFIXEDLINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDAXNFIXEDLINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindAxnFixedLineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindAxnFixedLineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindAxnFixedLineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindAxnFixedLineResponseBody() = default ;
    BindAxnFixedLineResponseBody(const BindAxnFixedLineResponseBody &) = default ;
    BindAxnFixedLineResponseBody(BindAxnFixedLineResponseBody &&) = default ;
    BindAxnFixedLineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindAxnFixedLineResponseBody() = default ;
    BindAxnFixedLineResponseBody& operator=(const BindAxnFixedLineResponseBody &) = default ;
    BindAxnFixedLineResponseBody& operator=(BindAxnFixedLineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Subid, subid_);
        DARABONBA_PTR_TO_JSON(TelX, telX_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Subid, subid_);
        DARABONBA_PTR_FROM_JSON(TelX, telX_);
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
        && this->telX_ == nullptr; };
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


    protected:
      // The binding ID.
      shared_ptr<string> subid_ {};
      // The privacy number.
      shared_ptr<string> telX_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline BindAxnFixedLineResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindAxnFixedLineResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BindAxnFixedLineResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BindAxnFixedLineResponseBody::Data) };
    inline BindAxnFixedLineResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BindAxnFixedLineResponseBody::Data) };
    inline BindAxnFixedLineResponseBody& setData(const BindAxnFixedLineResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BindAxnFixedLineResponseBody& setData(BindAxnFixedLineResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindAxnFixedLineResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindAxnFixedLineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BindAxnFixedLineResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code of the request. Valid values:
    // 
    // - 0: The request is successful.
    // 
    // - Other error codes: For more information, see [API error codes](https://help.aliyun.com/document_detail/59892.html).
    shared_ptr<string> code_ {};
    // The response data.
    shared_ptr<BindAxnFixedLineResponseBody::Data> data_ {};
    // The description.
    shared_ptr<string> message_ {};
    // The ID of the request, which is a unique identifier generated by Alibaba Cloud for the request. You can use this ID to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: The request is successful.
    // 
    // - false: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
