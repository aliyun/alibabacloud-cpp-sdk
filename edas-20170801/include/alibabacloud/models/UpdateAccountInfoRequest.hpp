// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCOUNTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCOUNTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateAccountInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccountInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Telephone, telephone_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccountInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Telephone, telephone_);
    };
    UpdateAccountInfoRequest() = default ;
    UpdateAccountInfoRequest(const UpdateAccountInfoRequest &) = default ;
    UpdateAccountInfoRequest(UpdateAccountInfoRequest &&) = default ;
    UpdateAccountInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccountInfoRequest() = default ;
    UpdateAccountInfoRequest& operator=(const UpdateAccountInfoRequest &) = default ;
    UpdateAccountInfoRequest& operator=(UpdateAccountInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->name_ == nullptr && return this->telephone_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateAccountInfoRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAccountInfoRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // telephone Field Functions 
    bool hasTelephone() const { return this->telephone_ != nullptr;};
    void deleteTelephone() { this->telephone_ = nullptr;};
    inline string telephone() const { DARABONBA_PTR_GET_DEFAULT(telephone_, "") };
    inline UpdateAccountInfoRequest& setTelephone(string telephone) { DARABONBA_PTR_SET_VALUE(telephone_, telephone) };


  protected:
    // The email address of the account.
    std::shared_ptr<string> email_ = nullptr;
    // The name of the account.
    std::shared_ptr<string> name_ = nullptr;
    // The contact information of the account.
    std::shared_ptr<string> telephone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
