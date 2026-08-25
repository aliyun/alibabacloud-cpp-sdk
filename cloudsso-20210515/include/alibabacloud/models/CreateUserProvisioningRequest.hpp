// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERPROVISIONINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERPROVISIONINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class CreateUserProvisioningRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserProvisioningRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionStrategy, deletionStrategy_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DuplicationStrategy, duplicationStrategy_);
      DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserProvisioningRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionStrategy, deletionStrategy_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DuplicationStrategy, duplicationStrategy_);
      DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateUserProvisioningRequest() = default ;
    CreateUserProvisioningRequest(const CreateUserProvisioningRequest &) = default ;
    CreateUserProvisioningRequest(CreateUserProvisioningRequest &&) = default ;
    CreateUserProvisioningRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserProvisioningRequest() = default ;
    CreateUserProvisioningRequest& operator=(const CreateUserProvisioningRequest &) = default ;
    CreateUserProvisioningRequest& operator=(CreateUserProvisioningRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionStrategy_ == nullptr
        && this->description_ == nullptr && this->directoryId_ == nullptr && this->duplicationStrategy_ == nullptr && this->principalId_ == nullptr && this->principalType_ == nullptr
        && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // deletionStrategy Field Functions 
    bool hasDeletionStrategy() const { return this->deletionStrategy_ != nullptr;};
    void deleteDeletionStrategy() { this->deletionStrategy_ = nullptr;};
    inline string getDeletionStrategy() const { DARABONBA_PTR_GET_DEFAULT(deletionStrategy_, "") };
    inline CreateUserProvisioningRequest& setDeletionStrategy(string deletionStrategy) { DARABONBA_PTR_SET_VALUE(deletionStrategy_, deletionStrategy) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserProvisioningRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline CreateUserProvisioningRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // duplicationStrategy Field Functions 
    bool hasDuplicationStrategy() const { return this->duplicationStrategy_ != nullptr;};
    void deleteDuplicationStrategy() { this->duplicationStrategy_ = nullptr;};
    inline string getDuplicationStrategy() const { DARABONBA_PTR_GET_DEFAULT(duplicationStrategy_, "") };
    inline CreateUserProvisioningRequest& setDuplicationStrategy(string duplicationStrategy) { DARABONBA_PTR_SET_VALUE(duplicationStrategy_, duplicationStrategy) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline CreateUserProvisioningRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline CreateUserProvisioningRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateUserProvisioningRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateUserProvisioningRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The deletion policy. The policy is used to manage synchronized users when you delete the RAM user provisioning. Valid values:
    // 
    // - Delete: When you delete the RAM user provisioning, the system deletes the synchronized users.
    // 
    // - Keep: When you delete the RAM user provisioning, the system retains the synchronized users.
    shared_ptr<string> deletionStrategy_ {};
    // The description.
    shared_ptr<string> description_ {};
    // The ID of the resource directory.
    shared_ptr<string> directoryId_ {};
    // The conflict handling policy. The policy is used when a RAM user has the same username as the CloudSSO user who is synchronized to RAM. Valid values:
    // 
    // - KeepBoth: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system creates a RAM user whose username is the username of the CloudSSO user plus the suffix `_sso`.
    // 
    // - TakeOver: When a CloudSSO user is synchronized to RAM, if a RAM user who has the same username as the CloudSSO user exists, the system replaces the RAM user with the CloudSSO user.
    shared_ptr<string> duplicationStrategy_ {};
    // The identity ID of the RAM user provisioning. Valid values:
    // 
    // - If you set the `PrincipalType` parameter to `Group`, the value of this parameter is the ID of a CloudSSO user group (g-\\*\\*\\*\\*\\*\\*\\*\\*).
    // 
    // - If you set the `PrincipalType` parameter to `User`, the value of this parameter is the ID of a CloudSSO user (u-\\*\\*\\*\\*\\*\\*\\*\\*).
    shared_ptr<string> principalId_ {};
    // The identity type of the RAM user provisioning. Valid values:
    // 
    // - User: The identity of the RAM user provisioning is a CloudSSO user.
    // 
    // - Group: The identity of the RAM user provisioning is a CloudSSO user group.
    shared_ptr<string> principalType_ {};
    // The ID of the object for which you create the RAM user provisioning. The value is fixed as the ID of the member in the resource directory.
    shared_ptr<string> targetId_ {};
    // The object for which you create the RAM user provisioning. The value is fixed as `RD-Account`.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
