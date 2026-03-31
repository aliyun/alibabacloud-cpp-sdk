// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class UpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NewComments, newComments_);
      DARABONBA_PTR_TO_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_TO_JSON(NewEmail, newEmail_);
      DARABONBA_PTR_TO_JSON(NewMobilePhone, newMobilePhone_);
      DARABONBA_PTR_TO_JSON(NewUserName, newUserName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewComments, newComments_);
      DARABONBA_PTR_FROM_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_FROM_JSON(NewEmail, newEmail_);
      DARABONBA_PTR_FROM_JSON(NewMobilePhone, newMobilePhone_);
      DARABONBA_PTR_FROM_JSON(NewUserName, newUserName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    UpdateUserRequest() = default ;
    UpdateUserRequest(const UpdateUserRequest &) = default ;
    UpdateUserRequest(UpdateUserRequest &&) = default ;
    UpdateUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserRequest() = default ;
    UpdateUserRequest& operator=(const UpdateUserRequest &) = default ;
    UpdateUserRequest& operator=(UpdateUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->newComments_ == nullptr
        && this->newDisplayName_ == nullptr && this->newEmail_ == nullptr && this->newMobilePhone_ == nullptr && this->newUserName_ == nullptr && this->userName_ == nullptr; };
    // newComments Field Functions 
    bool hasNewComments() const { return this->newComments_ != nullptr;};
    void deleteNewComments() { this->newComments_ = nullptr;};
    inline string getNewComments() const { DARABONBA_PTR_GET_DEFAULT(newComments_, "") };
    inline UpdateUserRequest& setNewComments(string newComments) { DARABONBA_PTR_SET_VALUE(newComments_, newComments) };


    // newDisplayName Field Functions 
    bool hasNewDisplayName() const { return this->newDisplayName_ != nullptr;};
    void deleteNewDisplayName() { this->newDisplayName_ = nullptr;};
    inline string getNewDisplayName() const { DARABONBA_PTR_GET_DEFAULT(newDisplayName_, "") };
    inline UpdateUserRequest& setNewDisplayName(string newDisplayName) { DARABONBA_PTR_SET_VALUE(newDisplayName_, newDisplayName) };


    // newEmail Field Functions 
    bool hasNewEmail() const { return this->newEmail_ != nullptr;};
    void deleteNewEmail() { this->newEmail_ = nullptr;};
    inline string getNewEmail() const { DARABONBA_PTR_GET_DEFAULT(newEmail_, "") };
    inline UpdateUserRequest& setNewEmail(string newEmail) { DARABONBA_PTR_SET_VALUE(newEmail_, newEmail) };


    // newMobilePhone Field Functions 
    bool hasNewMobilePhone() const { return this->newMobilePhone_ != nullptr;};
    void deleteNewMobilePhone() { this->newMobilePhone_ = nullptr;};
    inline string getNewMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(newMobilePhone_, "") };
    inline UpdateUserRequest& setNewMobilePhone(string newMobilePhone) { DARABONBA_PTR_SET_VALUE(newMobilePhone_, newMobilePhone) };


    // newUserName Field Functions 
    bool hasNewUserName() const { return this->newUserName_ != nullptr;};
    void deleteNewUserName() { this->newUserName_ = nullptr;};
    inline string getNewUserName() const { DARABONBA_PTR_GET_DEFAULT(newUserName_, "") };
    inline UpdateUserRequest& setNewUserName(string newUserName) { DARABONBA_PTR_SET_VALUE(newUserName_, newUserName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline UpdateUserRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The new description of the RAM user.
    // 
    // The description must be 1 to 128 characters in length.
    shared_ptr<string> newComments_ {};
    // The new display name of the RAM user.
    // 
    // The name must be 1 to 128 characters in length.
    shared_ptr<string> newDisplayName_ {};
    // The new email address of the RAM user.
    // 
    // >  This parameter applies only to the China site (aliyun.com).
    shared_ptr<string> newEmail_ {};
    // The new mobile phone number of the RAM user.
    // 
    // Format: \\<Country code>-\\<Mobile phone number>.
    // 
    // >  This parameter applies only to the China site (aliyun.com).
    shared_ptr<string> newMobilePhone_ {};
    // The new username of the RAM user.
    // 
    // The username must be 1 to 64 characters in length, and can contain letters, digits, periods (.), hyphens (-), and underscores (_).
    shared_ptr<string> newUserName_ {};
    // The username of the RAM user.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
