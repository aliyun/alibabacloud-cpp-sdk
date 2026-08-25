// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERPROVISIONINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERPROVISIONINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class UpdateUserProvisioningRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserProvisioningRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(NewDeletionStrategy, newDeletionStrategy_);
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(NewDuplicationStrategy, newDuplicationStrategy_);
      DARABONBA_PTR_TO_JSON(UserProvisioningId, userProvisioningId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserProvisioningRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(NewDeletionStrategy, newDeletionStrategy_);
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(NewDuplicationStrategy, newDuplicationStrategy_);
      DARABONBA_PTR_FROM_JSON(UserProvisioningId, userProvisioningId_);
    };
    UpdateUserProvisioningRequest() = default ;
    UpdateUserProvisioningRequest(const UpdateUserProvisioningRequest &) = default ;
    UpdateUserProvisioningRequest(UpdateUserProvisioningRequest &&) = default ;
    UpdateUserProvisioningRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserProvisioningRequest() = default ;
    UpdateUserProvisioningRequest& operator=(const UpdateUserProvisioningRequest &) = default ;
    UpdateUserProvisioningRequest& operator=(UpdateUserProvisioningRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->newDeletionStrategy_ == nullptr && this->newDescription_ == nullptr && this->newDuplicationStrategy_ == nullptr && this->userProvisioningId_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline UpdateUserProvisioningRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // newDeletionStrategy Field Functions 
    bool hasNewDeletionStrategy() const { return this->newDeletionStrategy_ != nullptr;};
    void deleteNewDeletionStrategy() { this->newDeletionStrategy_ = nullptr;};
    inline string getNewDeletionStrategy() const { DARABONBA_PTR_GET_DEFAULT(newDeletionStrategy_, "") };
    inline UpdateUserProvisioningRequest& setNewDeletionStrategy(string newDeletionStrategy) { DARABONBA_PTR_SET_VALUE(newDeletionStrategy_, newDeletionStrategy) };


    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string getNewDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateUserProvisioningRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


    // newDuplicationStrategy Field Functions 
    bool hasNewDuplicationStrategy() const { return this->newDuplicationStrategy_ != nullptr;};
    void deleteNewDuplicationStrategy() { this->newDuplicationStrategy_ = nullptr;};
    inline string getNewDuplicationStrategy() const { DARABONBA_PTR_GET_DEFAULT(newDuplicationStrategy_, "") };
    inline UpdateUserProvisioningRequest& setNewDuplicationStrategy(string newDuplicationStrategy) { DARABONBA_PTR_SET_VALUE(newDuplicationStrategy_, newDuplicationStrategy) };


    // userProvisioningId Field Functions 
    bool hasUserProvisioningId() const { return this->userProvisioningId_ != nullptr;};
    void deleteUserProvisioningId() { this->userProvisioningId_ = nullptr;};
    inline string getUserProvisioningId() const { DARABONBA_PTR_GET_DEFAULT(userProvisioningId_, "") };
    inline UpdateUserProvisioningRequest& setUserProvisioningId(string userProvisioningId) { DARABONBA_PTR_SET_VALUE(userProvisioningId_, userProvisioningId) };


  protected:
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The new deletion policy. The policy is used to manage synchronized users when you delete the RAM user provisioning. Valid values:
    // 
    // - Delete: When you delete the RAM user provisioning, the system deletes the synchronized users.
    // 
    // - Keep: When you delete the RAM user provisioning, the system retains the synchronized users.
    shared_ptr<string> newDeletionStrategy_ {};
    // The new description of the RAM user provisioning.
    shared_ptr<string> newDescription_ {};
    // The new conflict handling policy. The policy is used when a RAM user has the same username as the CloudSSO user who is synchronized to RAM. Valid values:
    // 
    // - KeepBoth: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system creates a RAM user whose username is the username of the CloudSSO user plus the suffix `_sso`.
    // 
    // - TakeOver: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system replaces the RAM user with the CloudSSO user.
    shared_ptr<string> newDuplicationStrategy_ {};
    // The ID of the RAM user provisioning.
    shared_ptr<string> userProvisioningId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
