// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDGXB700RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDGXB700RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindGxb700ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindGxb700ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindGxb700ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindGxb700ResponseBody() = default ;
    BindGxb700ResponseBody(const BindGxb700ResponseBody &) = default ;
    BindGxb700ResponseBody(BindGxb700ResponseBody &&) = default ;
    BindGxb700ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindGxb700ResponseBody() = default ;
    BindGxb700ResponseBody& operator=(const BindGxb700ResponseBody &) = default ;
    BindGxb700ResponseBody& operator=(BindGxb700ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SecretNo, secretNo_);
        DARABONBA_PTR_TO_JSON(SubsId, subsId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SecretNo, secretNo_);
        DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
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
      virtual bool empty() const override { return this->secretNo_ == nullptr
        && this->subsId_ == nullptr; };
      // secretNo Field Functions 
      bool hasSecretNo() const { return this->secretNo_ != nullptr;};
      void deleteSecretNo() { this->secretNo_ = nullptr;};
      inline string getSecretNo() const { DARABONBA_PTR_GET_DEFAULT(secretNo_, "") };
      inline Data& setSecretNo(string secretNo) { DARABONBA_PTR_SET_VALUE(secretNo_, secretNo) };


      // subsId Field Functions 
      bool hasSubsId() const { return this->subsId_ != nullptr;};
      void deleteSubsId() { this->subsId_ = nullptr;};
      inline int64_t getSubsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, 0L) };
      inline Data& setSubsId(int64_t subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


    protected:
      // The purchased 700 private number, which is the X number.
      shared_ptr<string> secretNo_ {};
      // The number binding ID.
      shared_ptr<int64_t> subsId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline BindGxb700ResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindGxb700ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BindGxb700ResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BindGxb700ResponseBody::Data) };
    inline BindGxb700ResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BindGxb700ResponseBody::Data) };
    inline BindGxb700ResponseBody& setData(const BindGxb700ResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BindGxb700ResponseBody& setData(BindGxb700ResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindGxb700ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BindGxb700ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BindGxb700ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The access denied details.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response code. Valid values:
    // OK: The request was successful.
    // Other values indicate failure.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<BindGxb700ResponseBody::Data> data_ {};
    // The description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation was successful. Valid values:
    // true: Successful.
    // false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
