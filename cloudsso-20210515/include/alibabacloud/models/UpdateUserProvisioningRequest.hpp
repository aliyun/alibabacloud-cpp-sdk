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
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The new deletion policy. This policy specifies how to handle synchronized Resource Access Management (RAM) users when the Resource Access Management (RAM) user synchronization is deleted. Valid values:
    // 
    // - Delete: Delete the users. When the Resource Access Management (RAM) user synchronization is deleted, the system deletes the Resource Access Management (RAM) users that have been synchronized from CloudSSO to Resource Access Management (RAM).
    // - Keep: Keep the users. When the Resource Access Management (RAM) user synchronization is deleted, the system retains the Resource Access Management (RAM) users that have been synchronized from CloudSSO to Resource Access Management (RAM).
    shared_ptr<string> newDeletionStrategy_ {};
    // The new description of the Resource Access Management (RAM) user synchronization.
    shared_ptr<string> newDescription_ {};
    // The new duplication strategy. This strategy specifies how to handle name conflicts when a CloudSSO user is synchronized to Resource Access Management (RAM) user with the same name already exists. Valid values:
    // 
    // - KeepBoth: Keep both users. When a CloudSSO user is synchronized to Resource Access Management (RAM) user with the same name already exists, the system appends the `_sso` suffix to the CloudSSO username and attempts to create a RAM user with the new username.
    // - TakeOver: Replace the existing user. When a CloudSSO user is synchronized to Resource Access Management (RAM) user with the same name already exists, the system directly replaces the existing RAM user with the synchronized CloudSSO user.
    shared_ptr<string> newDuplicationStrategy_ {};
    // The ID of the Resource Access Management (RAM) user synchronization.
    shared_ptr<string> userProvisioningId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
