// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HIMARKETIDENTITYMAPPING_HPP_
#define ALIBABACLOUD_MODELS_HIMARKETIDENTITYMAPPING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HiMarketIdentityMapping : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HiMarketIdentityMapping& obj) { 
      DARABONBA_PTR_TO_JSON(emailField, emailField_);
      DARABONBA_PTR_TO_JSON(userIdField, userIdField_);
      DARABONBA_PTR_TO_JSON(userNameField, userNameField_);
    };
    friend void from_json(const Darabonba::Json& j, HiMarketIdentityMapping& obj) { 
      DARABONBA_PTR_FROM_JSON(emailField, emailField_);
      DARABONBA_PTR_FROM_JSON(userIdField, userIdField_);
      DARABONBA_PTR_FROM_JSON(userNameField, userNameField_);
    };
    HiMarketIdentityMapping() = default ;
    HiMarketIdentityMapping(const HiMarketIdentityMapping &) = default ;
    HiMarketIdentityMapping(HiMarketIdentityMapping &&) = default ;
    HiMarketIdentityMapping(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HiMarketIdentityMapping() = default ;
    HiMarketIdentityMapping& operator=(const HiMarketIdentityMapping &) = default ;
    HiMarketIdentityMapping& operator=(HiMarketIdentityMapping &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->emailField_ == nullptr
        && this->userIdField_ == nullptr && this->userNameField_ == nullptr; };
    // emailField Field Functions 
    bool hasEmailField() const { return this->emailField_ != nullptr;};
    void deleteEmailField() { this->emailField_ = nullptr;};
    inline string getEmailField() const { DARABONBA_PTR_GET_DEFAULT(emailField_, "") };
    inline HiMarketIdentityMapping& setEmailField(string emailField) { DARABONBA_PTR_SET_VALUE(emailField_, emailField) };


    // userIdField Field Functions 
    bool hasUserIdField() const { return this->userIdField_ != nullptr;};
    void deleteUserIdField() { this->userIdField_ = nullptr;};
    inline string getUserIdField() const { DARABONBA_PTR_GET_DEFAULT(userIdField_, "") };
    inline HiMarketIdentityMapping& setUserIdField(string userIdField) { DARABONBA_PTR_SET_VALUE(userIdField_, userIdField) };


    // userNameField Field Functions 
    bool hasUserNameField() const { return this->userNameField_ != nullptr;};
    void deleteUserNameField() { this->userNameField_ = nullptr;};
    inline string getUserNameField() const { DARABONBA_PTR_GET_DEFAULT(userNameField_, "") };
    inline HiMarketIdentityMapping& setUserNameField(string userNameField) { DARABONBA_PTR_SET_VALUE(userNameField_, userNameField) };


  protected:
    // The identity field name that corresponds to the mailbox.
    shared_ptr<string> emailField_ {};
    // The identity field name that corresponds to the user ID.
    shared_ptr<string> userIdField_ {};
    // The identity field name that corresponds to the username.
    shared_ptr<string> userNameField_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
