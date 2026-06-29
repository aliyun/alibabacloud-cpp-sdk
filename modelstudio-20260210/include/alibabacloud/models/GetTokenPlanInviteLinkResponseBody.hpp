// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENPLANINVITELINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENPLANINVITELINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class GetTokenPlanInviteLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenPlanInviteLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenPlanInviteLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTokenPlanInviteLinkResponseBody() = default ;
    GetTokenPlanInviteLinkResponseBody(const GetTokenPlanInviteLinkResponseBody &) = default ;
    GetTokenPlanInviteLinkResponseBody(GetTokenPlanInviteLinkResponseBody &&) = default ;
    GetTokenPlanInviteLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenPlanInviteLinkResponseBody() = default ;
    GetTokenPlanInviteLinkResponseBody& operator=(const GetTokenPlanInviteLinkResponseBody &) = default ;
    GetTokenPlanInviteLinkResponseBody& operator=(GetTokenPlanInviteLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
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
      virtual bool empty() const override { return this->expireTime_ == nullptr
        && this->token_ == nullptr; };
      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      // The expiration time. Unit: milliseconds.
      shared_ptr<int64_t> expireTime_ {};
      // The generated token.
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTokenPlanInviteLinkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTokenPlanInviteLinkResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTokenPlanInviteLinkResponseBody::Data) };
    inline GetTokenPlanInviteLinkResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTokenPlanInviteLinkResponseBody::Data) };
    inline GetTokenPlanInviteLinkResponseBody& setData(const GetTokenPlanInviteLinkResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTokenPlanInviteLinkResponseBody& setData(GetTokenPlanInviteLinkResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTokenPlanInviteLinkResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTokenPlanInviteLinkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetTokenPlanInviteLinkResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // - true: Successful.
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
