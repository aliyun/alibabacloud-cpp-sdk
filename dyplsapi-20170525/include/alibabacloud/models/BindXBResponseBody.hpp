// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDXBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BINDXBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class BindXBResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BindXBResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BindXBResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    BindXBResponseBody() = default ;
    BindXBResponseBody(const BindXBResponseBody &) = default ;
    BindXBResponseBody(BindXBResponseBody &&) = default ;
    BindXBResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BindXBResponseBody() = default ;
    BindXBResponseBody& operator=(const BindXBResponseBody &) = default ;
    BindXBResponseBody& operator=(BindXBResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuthId, authId_);
        DARABONBA_PTR_TO_JSON(TelX, telX_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthId, authId_);
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
      virtual bool empty() const override { return this->authId_ == nullptr
        && this->telX_ == nullptr; };
      // authId Field Functions 
      bool hasAuthId() const { return this->authId_ != nullptr;};
      void deleteAuthId() { this->authId_ = nullptr;};
      inline string getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, "") };
      inline Data& setAuthId(string authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


      // telX Field Functions 
      bool hasTelX() const { return this->telX_ != nullptr;};
      void deleteTelX() { this->telX_ = nullptr;};
      inline string getTelX() const { DARABONBA_PTR_GET_DEFAULT(telX_, "") };
      inline Data& setTelX(string telX) { DARABONBA_PTR_SET_VALUE(telX_, telX) };


    protected:
      // The unique identifier of the work number binding.
      shared_ptr<string> authId_ {};
      // The work number X.
      shared_ptr<string> telX_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline BindXBResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BindXBResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BindXBResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, BindXBResponseBody::Data) };
    inline BindXBResponseBody::Data getData() { DARABONBA_PTR_GET(data_, BindXBResponseBody::Data) };
    inline BindXBResponseBody& setData(const BindXBResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BindXBResponseBody& setData(BindXBResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BindXBResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BindXBResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code. Valid values:
    // 
    // - 0000: Success.
    // 
    // Other values indicate failure.
    shared_ptr<string> code_ {};
    // The work number binding result.
    shared_ptr<BindXBResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - true: Successful.
    // 
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
