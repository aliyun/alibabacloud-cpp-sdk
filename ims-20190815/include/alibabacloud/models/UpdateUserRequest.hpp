// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
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
      DARABONBA_PTR_TO_JSON(NewUserPrincipalName, newUserPrincipalName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NewComments, newComments_);
      DARABONBA_PTR_FROM_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_FROM_JSON(NewEmail, newEmail_);
      DARABONBA_PTR_FROM_JSON(NewMobilePhone, newMobilePhone_);
      DARABONBA_PTR_FROM_JSON(NewUserPrincipalName, newUserPrincipalName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
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
        && this->newDisplayName_ == nullptr && this->newEmail_ == nullptr && this->newMobilePhone_ == nullptr && this->newUserPrincipalName_ == nullptr && this->userId_ == nullptr
        && this->userPrincipalName_ == nullptr; };
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


    // newUserPrincipalName Field Functions 
    bool hasNewUserPrincipalName() const { return this->newUserPrincipalName_ != nullptr;};
    void deleteNewUserPrincipalName() { this->newUserPrincipalName_ = nullptr;};
    inline string getNewUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(newUserPrincipalName_, "") };
    inline UpdateUserRequest& setNewUserPrincipalName(string newUserPrincipalName) { DARABONBA_PTR_SET_VALUE(newUserPrincipalName_, newUserPrincipalName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline UpdateUserRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    shared_ptr<string> newComments_ {};
    shared_ptr<string> newDisplayName_ {};
    shared_ptr<string> newEmail_ {};
    shared_ptr<string> newMobilePhone_ {};
    shared_ptr<string> newUserPrincipalName_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
