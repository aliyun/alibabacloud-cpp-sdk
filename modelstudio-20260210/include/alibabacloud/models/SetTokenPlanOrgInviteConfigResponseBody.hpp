// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTOKENPLANORGINVITECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETTOKENPLANORGINVITECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class SetTokenPlanOrgInviteConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTokenPlanOrgInviteConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SetTokenPlanOrgInviteConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SetTokenPlanOrgInviteConfigResponseBody() = default ;
    SetTokenPlanOrgInviteConfigResponseBody(const SetTokenPlanOrgInviteConfigResponseBody &) = default ;
    SetTokenPlanOrgInviteConfigResponseBody(SetTokenPlanOrgInviteConfigResponseBody &&) = default ;
    SetTokenPlanOrgInviteConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTokenPlanOrgInviteConfigResponseBody() = default ;
    SetTokenPlanOrgInviteConfigResponseBody& operator=(const SetTokenPlanOrgInviteConfigResponseBody &) = default ;
    SetTokenPlanOrgInviteConfigResponseBody& operator=(SetTokenPlanOrgInviteConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SetTokenPlanOrgInviteConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SetTokenPlanOrgInviteConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SetTokenPlanOrgInviteConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
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
