// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENPLANINVITELINKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENPLANINVITELINKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class CreateTokenPlanInviteLinkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenPlanInviteLinkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenPlanInviteLinkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateTokenPlanInviteLinkResponseBody() = default ;
    CreateTokenPlanInviteLinkResponseBody(const CreateTokenPlanInviteLinkResponseBody &) = default ;
    CreateTokenPlanInviteLinkResponseBody(CreateTokenPlanInviteLinkResponseBody &&) = default ;
    CreateTokenPlanInviteLinkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenPlanInviteLinkResponseBody() = default ;
    CreateTokenPlanInviteLinkResponseBody& operator=(const CreateTokenPlanInviteLinkResponseBody &) = default ;
    CreateTokenPlanInviteLinkResponseBody& operator=(CreateTokenPlanInviteLinkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Token, token_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->token_ == nullptr; };
      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline Data& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    protected:
      // The generated token.
      shared_ptr<string> token_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTokenPlanInviteLinkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateTokenPlanInviteLinkResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateTokenPlanInviteLinkResponseBody::Data) };
    inline CreateTokenPlanInviteLinkResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateTokenPlanInviteLinkResponseBody::Data) };
    inline CreateTokenPlanInviteLinkResponseBody& setData(const CreateTokenPlanInviteLinkResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateTokenPlanInviteLinkResponseBody& setData(CreateTokenPlanInviteLinkResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTokenPlanInviteLinkResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateTokenPlanInviteLinkResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The business parameters.
    shared_ptr<CreateTokenPlanInviteLinkResponseBody::Data> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // - true: The call was successful.
    // - false: The call failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
