// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEDIRECTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEDIRECTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class GetResourceDirectoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceDirectory, resourceDirectory_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceDirectoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceDirectory, resourceDirectory_);
    };
    GetResourceDirectoryResponseBody() = default ;
    GetResourceDirectoryResponseBody(const GetResourceDirectoryResponseBody &) = default ;
    GetResourceDirectoryResponseBody(GetResourceDirectoryResponseBody &&) = default ;
    GetResourceDirectoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceDirectoryResponseBody() = default ;
    GetResourceDirectoryResponseBody& operator=(const GetResourceDirectoryResponseBody &) = default ;
    GetResourceDirectoryResponseBody& operator=(GetResourceDirectoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceDirectory : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceDirectory& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResourceDirectory& obj) { 
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
      ResourceDirectory() = default ;
      ResourceDirectory(const ResourceDirectory &) = default ;
      ResourceDirectory(ResourceDirectory &&) = default ;
      ResourceDirectory(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceDirectory() = default ;
      ResourceDirectory& operator=(const ResourceDirectory &) = default ;
      ResourceDirectory& operator=(ResourceDirectory &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->controlPolicyStatus_ == nullptr
        && this->createTime_ == nullptr && this->identityInformation_ == nullptr && this->masterAccountId_ == nullptr && this->masterAccountName_ == nullptr && this->memberAccountDisplayNameSyncStatus_ == nullptr
        && this->memberDeletionStatus_ == nullptr && this->resourceDirectoryId_ == nullptr && this->rootFolderId_ == nullptr; };
      // controlPolicyStatus Field Functions 
      bool hasControlPolicyStatus() const { return this->controlPolicyStatus_ != nullptr;};
      void deleteControlPolicyStatus() { this->controlPolicyStatus_ = nullptr;};
      inline string getControlPolicyStatus() const { DARABONBA_PTR_GET_DEFAULT(controlPolicyStatus_, "") };
      inline ResourceDirectory& setControlPolicyStatus(string controlPolicyStatus) { DARABONBA_PTR_SET_VALUE(controlPolicyStatus_, controlPolicyStatus) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceDirectory& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // identityInformation Field Functions 
      bool hasIdentityInformation() const { return this->identityInformation_ != nullptr;};
      void deleteIdentityInformation() { this->identityInformation_ = nullptr;};
      inline string getIdentityInformation() const { DARABONBA_PTR_GET_DEFAULT(identityInformation_, "") };
      inline ResourceDirectory& setIdentityInformation(string identityInformation) { DARABONBA_PTR_SET_VALUE(identityInformation_, identityInformation) };


      // masterAccountId Field Functions 
      bool hasMasterAccountId() const { return this->masterAccountId_ != nullptr;};
      void deleteMasterAccountId() { this->masterAccountId_ = nullptr;};
      inline string getMasterAccountId() const { DARABONBA_PTR_GET_DEFAULT(masterAccountId_, "") };
      inline ResourceDirectory& setMasterAccountId(string masterAccountId) { DARABONBA_PTR_SET_VALUE(masterAccountId_, masterAccountId) };


      // masterAccountName Field Functions 
      bool hasMasterAccountName() const { return this->masterAccountName_ != nullptr;};
      void deleteMasterAccountName() { this->masterAccountName_ = nullptr;};
      inline string getMasterAccountName() const { DARABONBA_PTR_GET_DEFAULT(masterAccountName_, "") };
      inline ResourceDirectory& setMasterAccountName(string masterAccountName) { DARABONBA_PTR_SET_VALUE(masterAccountName_, masterAccountName) };


      // memberAccountDisplayNameSyncStatus Field Functions 
      bool hasMemberAccountDisplayNameSyncStatus() const { return this->memberAccountDisplayNameSyncStatus_ != nullptr;};
      void deleteMemberAccountDisplayNameSyncStatus() { this->memberAccountDisplayNameSyncStatus_ = nullptr;};
      inline string getMemberAccountDisplayNameSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(memberAccountDisplayNameSyncStatus_, "") };
      inline ResourceDirectory& setMemberAccountDisplayNameSyncStatus(string memberAccountDisplayNameSyncStatus) { DARABONBA_PTR_SET_VALUE(memberAccountDisplayNameSyncStatus_, memberAccountDisplayNameSyncStatus) };


      // memberDeletionStatus Field Functions 
      bool hasMemberDeletionStatus() const { return this->memberDeletionStatus_ != nullptr;};
      void deleteMemberDeletionStatus() { this->memberDeletionStatus_ = nullptr;};
      inline string getMemberDeletionStatus() const { DARABONBA_PTR_GET_DEFAULT(memberDeletionStatus_, "") };
      inline ResourceDirectory& setMemberDeletionStatus(string memberDeletionStatus) { DARABONBA_PTR_SET_VALUE(memberDeletionStatus_, memberDeletionStatus) };


      // resourceDirectoryId Field Functions 
      bool hasResourceDirectoryId() const { return this->resourceDirectoryId_ != nullptr;};
      void deleteResourceDirectoryId() { this->resourceDirectoryId_ = nullptr;};
      inline string getResourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceDirectoryId_, "") };
      inline ResourceDirectory& setResourceDirectoryId(string resourceDirectoryId) { DARABONBA_PTR_SET_VALUE(resourceDirectoryId_, resourceDirectoryId) };


      // rootFolderId Field Functions 
      bool hasRootFolderId() const { return this->rootFolderId_ != nullptr;};
      void deleteRootFolderId() { this->rootFolderId_ = nullptr;};
      inline string getRootFolderId() const { DARABONBA_PTR_GET_DEFAULT(rootFolderId_, "") };
      inline ResourceDirectory& setRootFolderId(string rootFolderId) { DARABONBA_PTR_SET_VALUE(rootFolderId_, rootFolderId) };


    protected:
      // The status of the Control Policy feature. Valid values:
      // 
      // - Enabled: The feature is enabled.
      // - PendingEnable: The feature is being enabled.
      // - Disabled: The feature is disabled.
      // - PendingDisable: The feature is being disabled.
      shared_ptr<string> controlPolicyStatus_ {};
      // The time when the resource directory was enabled.
      shared_ptr<string> createTime_ {};
      // The real-name verification information.
      shared_ptr<string> identityInformation_ {};
      // The ID of the management account.
      shared_ptr<string> masterAccountId_ {};
      // The name of the management account.
      shared_ptr<string> masterAccountName_ {};
      // The status of the Member Display Name Synchronization feature. Valid values:
      // 
      // *   Enabled
      // *   Disabled
      shared_ptr<string> memberAccountDisplayNameSyncStatus_ {};
      // The status of the member deletion feature. Valid values:
      // 
      // - Enabled: The feature is enabled. You can call the [DeleteAccount](~~DeleteAccount~~) operation to delete members of the resource account type.
      // - Disabled: The feature is disabled. You cannot delete members of the resource account type.
      shared_ptr<string> memberDeletionStatus_ {};
      // The ID of the resource directory.
      shared_ptr<string> resourceDirectoryId_ {};
      // The ID of the Root folder.
      shared_ptr<string> rootFolderId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceDirectory_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceDirectoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceDirectory Field Functions 
    bool hasResourceDirectory() const { return this->resourceDirectory_ != nullptr;};
    void deleteResourceDirectory() { this->resourceDirectory_ = nullptr;};
    inline const GetResourceDirectoryResponseBody::ResourceDirectory & getResourceDirectory() const { DARABONBA_PTR_GET_CONST(resourceDirectory_, GetResourceDirectoryResponseBody::ResourceDirectory) };
    inline GetResourceDirectoryResponseBody::ResourceDirectory getResourceDirectory() { DARABONBA_PTR_GET(resourceDirectory_, GetResourceDirectoryResponseBody::ResourceDirectory) };
    inline GetResourceDirectoryResponseBody& setResourceDirectory(const GetResourceDirectoryResponseBody::ResourceDirectory & resourceDirectory) { DARABONBA_PTR_SET_VALUE(resourceDirectory_, resourceDirectory) };
    inline GetResourceDirectoryResponseBody& setResourceDirectory(GetResourceDirectoryResponseBody::ResourceDirectory && resourceDirectory) { DARABONBA_PTR_SET_RVALUE(resourceDirectory_, resourceDirectory) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the resource directory.
    shared_ptr<GetResourceDirectoryResponseBody::ResourceDirectory> resourceDirectory_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
