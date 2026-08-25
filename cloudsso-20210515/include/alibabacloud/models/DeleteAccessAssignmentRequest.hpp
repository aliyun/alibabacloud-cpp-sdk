// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEACCESSASSIGNMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEACCESSASSIGNMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class DeleteAccessAssignmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAccessAssignmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_TO_JSON(DeprovisionStrategy, deprovisionStrategy_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAccessAssignmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessConfigurationId, accessConfigurationId_);
      DARABONBA_PTR_FROM_JSON(DeprovisionStrategy, deprovisionStrategy_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(OriginTargetId, originTargetId_);
      DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
      DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    DeleteAccessAssignmentRequest() = default ;
    DeleteAccessAssignmentRequest(const DeleteAccessAssignmentRequest &) = default ;
    DeleteAccessAssignmentRequest(DeleteAccessAssignmentRequest &&) = default ;
    DeleteAccessAssignmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAccessAssignmentRequest() = default ;
    DeleteAccessAssignmentRequest& operator=(const DeleteAccessAssignmentRequest &) = default ;
    DeleteAccessAssignmentRequest& operator=(DeleteAccessAssignmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessConfigurationId_ == nullptr
        && this->deprovisionStrategy_ == nullptr && this->directoryId_ == nullptr && this->originTargetId_ == nullptr && this->principalId_ == nullptr && this->principalType_ == nullptr
        && this->targetId_ == nullptr && this->targetType_ == nullptr; };
    // accessConfigurationId Field Functions 
    bool hasAccessConfigurationId() const { return this->accessConfigurationId_ != nullptr;};
    void deleteAccessConfigurationId() { this->accessConfigurationId_ = nullptr;};
    inline string getAccessConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(accessConfigurationId_, "") };
    inline DeleteAccessAssignmentRequest& setAccessConfigurationId(string accessConfigurationId) { DARABONBA_PTR_SET_VALUE(accessConfigurationId_, accessConfigurationId) };


    // deprovisionStrategy Field Functions 
    bool hasDeprovisionStrategy() const { return this->deprovisionStrategy_ != nullptr;};
    void deleteDeprovisionStrategy() { this->deprovisionStrategy_ = nullptr;};
    inline string getDeprovisionStrategy() const { DARABONBA_PTR_GET_DEFAULT(deprovisionStrategy_, "") };
    inline DeleteAccessAssignmentRequest& setDeprovisionStrategy(string deprovisionStrategy) { DARABONBA_PTR_SET_VALUE(deprovisionStrategy_, deprovisionStrategy) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline DeleteAccessAssignmentRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // originTargetId Field Functions 
    bool hasOriginTargetId() const { return this->originTargetId_ != nullptr;};
    void deleteOriginTargetId() { this->originTargetId_ = nullptr;};
    inline string getOriginTargetId() const { DARABONBA_PTR_GET_DEFAULT(originTargetId_, "") };
    inline DeleteAccessAssignmentRequest& setOriginTargetId(string originTargetId) { DARABONBA_PTR_SET_VALUE(originTargetId_, originTargetId) };


    // principalId Field Functions 
    bool hasPrincipalId() const { return this->principalId_ != nullptr;};
    void deletePrincipalId() { this->principalId_ = nullptr;};
    inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
    inline DeleteAccessAssignmentRequest& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


    // principalType Field Functions 
    bool hasPrincipalType() const { return this->principalType_ != nullptr;};
    void deletePrincipalType() { this->principalType_ = nullptr;};
    inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
    inline DeleteAccessAssignmentRequest& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline DeleteAccessAssignmentRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DeleteAccessAssignmentRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The ID of the access configuration.
    shared_ptr<string> accessConfigurationId_ {};
    // Specifies whether to de-provision the access configuration when you remove the access permissions from the CloudSSO identity. The access configuration is used to assign the access permissions, and the identity is the only one that uses the access configuration and is associated with the account. Valid values:
    // 
    // - DeprovisionForLastAccessAssignmentOnAccount: de-provisions the access configuration.
    // 
    // - None: does not de-provision the access configuration. This is the default value.
    shared_ptr<string> deprovisionStrategy_ {};
    // The ID of the directory.
    shared_ptr<string> directoryId_ {};
    shared_ptr<string> originTargetId_ {};
    // The ID of the CloudSSO identity.
    // 
    // - If you set `PrincipalType` to `User`, set `PrincipalId` to the ID of the CloudSSO user.
    // 
    // - If you set `PrincipalType` to `Group`, set `PrincipalId` to the ID of the CloudSSO group.
    shared_ptr<string> principalId_ {};
    // The type of the CloudSSO identity. Valid values:
    // 
    // - User
    // 
    // - Group
    shared_ptr<string> principalType_ {};
    // The ID of the task object.
    shared_ptr<string> targetId_ {};
    // The type of the task object. Set the value to RD-Account, which specifies the accounts in the resource directory.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
