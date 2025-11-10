// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEACCOUNTEMAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEACCOUNTEMAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ChangeAccountEmailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeAccountEmailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(Email, email_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeAccountEmailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
    };
    ChangeAccountEmailRequest() = default ;
    ChangeAccountEmailRequest(const ChangeAccountEmailRequest &) = default ;
    ChangeAccountEmailRequest(ChangeAccountEmailRequest &&) = default ;
    ChangeAccountEmailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeAccountEmailRequest() = default ;
    ChangeAccountEmailRequest& operator=(const ChangeAccountEmailRequest &) = default ;
    ChangeAccountEmailRequest& operator=(ChangeAccountEmailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->email_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ChangeAccountEmailRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ChangeAccountEmailRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


  protected:
    // The Alibaba Cloud account ID of the member.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The email address to be bound to the member.
    // 
    // > The system automatically sends a verification email to the email address. After the verification is passed, the email address takes effect, and the system changes both the logon email address and secure email address of the member.
    // 
    // This parameter is required.
    std::shared_ptr<string> email_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
