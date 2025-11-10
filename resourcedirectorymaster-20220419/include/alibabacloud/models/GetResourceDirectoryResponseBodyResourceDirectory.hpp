// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEDIRECTORYRESPONSEBODYRESOURCEDIRECTORY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEDIRECTORYRESPONSEBODYRESOURCEDIRECTORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetResourceDirectoryResponseBodyResourceDirectory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceDirectoryResponseBodyResourceDirectory& obj) { 
      DARABONBA_PTR_TO_JSON(ControlPolicyStatus, controlPolicyStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(IdentityInformation, identityInformation_);
      DARABONBA_PTR_TO_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_TO_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_TO_JSON(MemberAccountDisplayNameSyncStatus, memberAccountDisplayNameSyncStatus_);
      DARABONBA_PTR_TO_JSON(MemberDeletionStatus, memberDeletionStatus_);
      DARABONBA_PTR_TO_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(RootFolderId, rootFolderId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceDirectoryResponseBodyResourceDirectory& obj) { 
      DARABONBA_PTR_FROM_JSON(ControlPolicyStatus, controlPolicyStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(IdentityInformation, identityInformation_);
      DARABONBA_PTR_FROM_JSON(MasterAccountId, masterAccountId_);
      DARABONBA_PTR_FROM_JSON(MasterAccountName, masterAccountName_);
      DARABONBA_PTR_FROM_JSON(MemberAccountDisplayNameSyncStatus, memberAccountDisplayNameSyncStatus_);
      DARABONBA_PTR_FROM_JSON(MemberDeletionStatus, memberDeletionStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectoryId, resourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(RootFolderId, rootFolderId_);
    };
    GetResourceDirectoryResponseBodyResourceDirectory() = default ;
    GetResourceDirectoryResponseBodyResourceDirectory(const GetResourceDirectoryResponseBodyResourceDirectory &) = default ;
    GetResourceDirectoryResponseBodyResourceDirectory(GetResourceDirectoryResponseBodyResourceDirectory &&) = default ;
    GetResourceDirectoryResponseBodyResourceDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceDirectoryResponseBodyResourceDirectory() = default ;
    GetResourceDirectoryResponseBodyResourceDirectory& operator=(const GetResourceDirectoryResponseBodyResourceDirectory &) = default ;
    GetResourceDirectoryResponseBodyResourceDirectory& operator=(GetResourceDirectoryResponseBodyResourceDirectory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->controlPolicyStatus_ == nullptr
        && return this->createTime_ == nullptr && return this->identityInformation_ == nullptr && return this->masterAccountId_ == nullptr && return this->masterAccountName_ == nullptr && return this->memberAccountDisplayNameSyncStatus_ == nullptr
        && return this->memberDeletionStatus_ == nullptr && return this->resourceDirectoryId_ == nullptr && return this->rootFolderId_ == nullptr; };
    // controlPolicyStatus Field Functions 
    bool hasControlPolicyStatus() const { return this->controlPolicyStatus_ != nullptr;};
    void deleteControlPolicyStatus() { this->controlPolicyStatus_ = nullptr;};
    inline string controlPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(controlPolicyStatus_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setControlPolicyStatus(string controlPolicyStatus) { DARABONBA_PTR_SET_VALUE(controlPolicyStatus_, controlPolicyStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // identityInformation Field Functions 
    bool hasIdentityInformation() const { return this->identityInformation_ != nullptr;};
    void deleteIdentityInformation() { this->identityInformation_ = nullptr;};
    inline string identityInformation() const { DARABONBA_PTR_GET_DEFAULT(identityInformation_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setIdentityInformation(string identityInformation) { DARABONBA_PTR_SET_VALUE(identityInformation_, identityInformation) };


    // masterAccountId Field Functions 
    bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
    void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
    inline string masterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


    // masterAccountName Field Functions 
    bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
    void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
    inline string masterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


    // memberAccountDisplayNameSyncStatus Field Functions 
    bool hasMemberAccountDisplayNameSyncStatus() const { return this->memberAccountDisplayNameSyncStatus_ != nullptr;};
    void deleteMemberAccountDisplayNameSyncStatus() { this->memberAccountDisplayNameSyncStatus_ = nullptr;};
    inline string memberAccountDisplayNameSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(memberAccountDisplayNameSyncStatus_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setMemberAccountDisplayNameSyncStatus(string memberAccountDisplayNameSyncStatus) { DARABONBA_PTR_SET_VALUE(memberAccountDisplayNameSyncStatus_, memberAccountDisplayNameSyncStatus) };


    // memberDeletionStatus Field Functions 
    bool hasMemberDeletionStatus() const { return this->memberDeletionStatus_ != nullptr;};
    void deleteMemberDeletionStatus() { this->memberDeletionStatus_ = nullptr;};
    inline string memberDeletionStatus() const { DARABONBA_PTR_GET_DEFAULT(memberDeletionStatus_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setMemberDeletionStatus(string memberDeletionStatus) { DARABONBA_PTR_SET_VALUE(memberDeletionStatus_, memberDeletionStatus) };


    // resourceDirectoryId Field Functions 
    bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
    void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
    inline string resourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


    // rootFolderId Field Functions 
    bool hasRootFolderId() const { return this->rootFolderId_ != nullptr;};
    void deleteRootFolderId() { this->rootFolderId_ = nullptr;};
    inline string rootFolderId() const { DARABONBA_PTR_GET_DEFAULT(rootFolderId_, "") };
    inline GetResourceDirectoryResponseBodyResourceDirectory& setRootFolderId(string rootFolderId) { DARABONBA_PTR_SET_VALUE(rootFolderId_, rootFolderId) };


  protected:
    // The status of the Control Policy feature. Valid values:
    // 
    // - Enabled: The feature is enabled.
    // - PendingEnable: The feature is being enabled.
    // - Disabled: The feature is disabled.
    // - PendingDisable: The feature is being disabled.
    std::shared_ptr<string> controlPolicyStatus_ = nullptr;
    // The time when the resource directory was enabled.
    std::shared_ptr<string> createTime_ = nullptr;
    // The real-name verification information.
    std::shared_ptr<string> identityInformation_ = nullptr;
    // The ID of the management account.
    std::shared_ptr<string> masterAccountId_ = nullptr;
    // The name of the management account.
    std::shared_ptr<string> masterAccountName_ = nullptr;
    // The status of the Member Display Name Synchronization feature. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    std::shared_ptr<string> memberAccountDisplayNameSyncStatus_ = nullptr;
    // The status of the member deletion feature. Valid values:
    // 
    // - Enabled: The feature is enabled. You can call the [DeleteAccount](~~DeleteAccount~~) operation to delete members of the resource account type.
    // - Disabled: The feature is disabled. You cannot delete members of the resource account type.
    std::shared_ptr<string> memberDeletionStatus_ = nullptr;
    // The ID of the resource directory.
    std::shared_ptr<string> resourceDirectoryId_ = nullptr;
    // The ID of the Root folder.
    std::shared_ptr<string> rootFolderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
