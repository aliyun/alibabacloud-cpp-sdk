// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_TO_JSON(NewEmail, newEmail_);
      DARABONBA_PTR_TO_JSON(NewFirstName, newFirstName_);
      DARABONBA_PTR_TO_JSON(NewLastName, newLastName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(NewDisplayName, newDisplayName_);
      DARABONBA_PTR_FROM_JSON(NewEmail, newEmail_);
      DARABONBA_PTR_FROM_JSON(NewFirstName, newFirstName_);
      DARABONBA_PTR_FROM_JSON(NewLastName, newLastName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->newDescription_ == nullptr && this->newDisplayName_ == nullptr && this->newEmail_ == nullptr && this->newFirstName_ == nullptr && this->newLastName_ == nullptr
        && this->userId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateUserRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string getNewDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateUserRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


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


    // newFirstName Field Functions 
    bool hasNewFirstName() const { return this->newFirstName_ != nullptr;};
    void deleteNewFirstName() { this->newFirstName_ = nullptr;};
    inline string getNewFirstName() const { DARABONBA_PTR_GET_DEFAULT(newFirstName_, "") };
    inline UpdateUserRequest& setNewFirstName(string newFirstName) { DARABONBA_PTR_SET_VALUE(newFirstName_, newFirstName) };


    // newLastName Field Functions 
    bool hasNewLastName() const { return this->newLastName_ != nullptr;};
    void deleteNewLastName() { this->newLastName_ = nullptr;};
    inline string getNewLastName() const { DARABONBA_PTR_GET_DEFAULT(newLastName_, "") };
    inline UpdateUserRequest& setNewLastName(string newLastName) { DARABONBA_PTR_SET_VALUE(newLastName_, newLastName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateUserRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    // The new description of the user.
    shared_ptr<string> newDescription_ {};
    // The new display name of the user.
    shared_ptr<string> newDisplayName_ {};
    // The new email address of the user.
    shared_ptr<string> newEmail_ {};
    // The new first name of the user.
    shared_ptr<string> newFirstName_ {};
    // The new last name of the user.
    shared_ptr<string> newLastName_ {};
    // The ID of the user.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
