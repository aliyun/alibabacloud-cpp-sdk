// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERPROVISIONINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERPROVISIONINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class DeleteUserProvisioningRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserProvisioningRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionStrategy, deletionStrategy_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(UserProvisioningId, userProvisioningId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserProvisioningRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionStrategy, deletionStrategy_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(UserProvisioningId, userProvisioningId_);
    };
    DeleteUserProvisioningRequest() = default ;
    DeleteUserProvisioningRequest(const DeleteUserProvisioningRequest &) = default ;
    DeleteUserProvisioningRequest(DeleteUserProvisioningRequest &&) = default ;
    DeleteUserProvisioningRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserProvisioningRequest() = default ;
    DeleteUserProvisioningRequest& operator=(const DeleteUserProvisioningRequest &) = default ;
    DeleteUserProvisioningRequest& operator=(DeleteUserProvisioningRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionStrategy_ == nullptr
        && this->directoryId_ == nullptr && this->userProvisioningId_ == nullptr; };
    // deletionStrategy Field Functions 
    bool hasDeletionStrategy() const { return this->deletionStrategy_ != nullptr;};
    void deleteDeletionStrategy() { this->deletionStrategy_ = nullptr;};
    inline string getDeletionStrategy() const { DARABONBA_PTR_GET_DEFAULT(deletionStrategy_, "") };
    inline DeleteUserProvisioningRequest& setDeletionStrategy(string deletionStrategy) { DARABONBA_PTR_SET_VALUE(deletionStrategy_, deletionStrategy) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteUserProvisioningRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // userProvisioningId Field Functions 
    bool hasUserProvisioningId() const { return this->userProvisioningId_ != nullptr;};
    void deleteUserProvisioningId() { this->userProvisioningId_ = nullptr;};
    inline string getUserProvisioningId() const { DARABONBA_PTR_GET_DEFAULT(userProvisioningId_, "") };
    inline DeleteUserProvisioningRequest& setUserProvisioningId(string userProvisioningId) { DARABONBA_PTR_SET_VALUE(userProvisioningId_, userProvisioningId) };


  protected:
    // The deletion policy. The policy is used to manage synchronized users when you delete the RAM user provisioning. Valid values:
    // 
    // - Delete: When you delete the RAM user provisioning, the system deletes the synchronized users.
    // 
    // - Keep: When you delete the RAM user provisioning, the system retains the synchronized users.
    // 
    // > If you do not specify this parameter, the deletion policy that is configured when you create the RAM user provisioning is used.
    shared_ptr<string> deletionStrategy_ {};
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The ID of the RAM user provisioning.
    shared_ptr<string> userProvisioningId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
