// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYDATABASEWORKSPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYDATABASEWORKSPACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListWorkspacesResponseBodyDataBaseWorkspaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBodyDataBaseWorkspaces& obj) { 
      DARABONBA_PTR_TO_JSON(AlreadyJoined, alreadyJoined_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_TO_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(OwnerNickName, ownerNickName_);
      DARABONBA_PTR_TO_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ServiceAccountId, serviceAccountId_);
      DARABONBA_PTR_TO_JSON(ServiceAccountNickName, serviceAccountNickName_);
      DARABONBA_PTR_TO_JSON(ServiceAccountUid, serviceAccountUid_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBodyDataBaseWorkspaces& obj) { 
      DARABONBA_PTR_FROM_JSON(AlreadyJoined, alreadyJoined_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
      DARABONBA_PTR_FROM_JSON(CreatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(OwnerNickName, ownerNickName_);
      DARABONBA_PTR_FROM_JSON(OwnerUid, ownerUid_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ServiceAccountId, serviceAccountId_);
      DARABONBA_PTR_FROM_JSON(ServiceAccountNickName, serviceAccountNickName_);
      DARABONBA_PTR_FROM_JSON(ServiceAccountUid, serviceAccountUid_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    ListWorkspacesResponseBodyDataBaseWorkspaces() = default ;
    ListWorkspacesResponseBodyDataBaseWorkspaces(const ListWorkspacesResponseBodyDataBaseWorkspaces &) = default ;
    ListWorkspacesResponseBodyDataBaseWorkspaces(ListWorkspacesResponseBodyDataBaseWorkspaces &&) = default ;
    ListWorkspacesResponseBodyDataBaseWorkspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBodyDataBaseWorkspaces() = default ;
    ListWorkspacesResponseBodyDataBaseWorkspaces& operator=(const ListWorkspacesResponseBodyDataBaseWorkspaces &) = default ;
    ListWorkspacesResponseBodyDataBaseWorkspaces& operator=(ListWorkspacesResponseBodyDataBaseWorkspaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyJoined_ == nullptr
        && return this->creatorId_ == nullptr && return this->creatorNickName_ == nullptr && return this->creatorUid_ == nullptr && return this->description_ == nullptr && return this->gmtCreate_ == nullptr
        && return this->gmtModified_ == nullptr && return this->name_ == nullptr && return this->ownerId_ == nullptr && return this->ownerNickName_ == nullptr && return this->ownerUid_ == nullptr
        && return this->region_ == nullptr && return this->serviceAccountId_ == nullptr && return this->serviceAccountNickName_ == nullptr && return this->serviceAccountUid_ == nullptr && return this->tenantId_ == nullptr
        && return this->vpcId_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // alreadyJoined Field Functions 
    bool hasAlreadyJoined() const { return this->alreadyJoined_ != nullptr;};
    void deleteAlreadyJoined() { this->alreadyJoined_ = nullptr;};
    inline bool alreadyJoined() const { DARABONBA_PTR_GET_DEFAULT(alreadyJoined_, false) };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setAlreadyJoined(bool alreadyJoined) { DARABONBA_PTR_SET_VALUE(alreadyJoined_, alreadyJoined) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // creatorNickName Field Functions 
    bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
    void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
    inline string creatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


    // creatorUid Field Functions 
    bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
    void deleteCreatorUid() { this->creatorUid_ = nullptr;};
    inline string creatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // ownerNickName Field Functions 
    bool hasOwnerNickName() const { return this->ownerNickName_ != nullptr;};
    void deleteOwnerNickName() { this->ownerNickName_ = nullptr;};
    inline string ownerNickName() const { DARABONBA_PTR_GET_DEFAULT(ownerNickName_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setOwnerNickName(string ownerNickName) { DARABONBA_PTR_SET_VALUE(ownerNickName_, ownerNickName) };


    // ownerUid Field Functions 
    bool hasOwnerUid() const { return this->ownerUid_ != nullptr;};
    void deleteOwnerUid() { this->ownerUid_ = nullptr;};
    inline string ownerUid() const { DARABONBA_PTR_GET_DEFAULT(ownerUid_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setOwnerUid(string ownerUid) { DARABONBA_PTR_SET_VALUE(ownerUid_, ownerUid) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // serviceAccountId Field Functions 
    bool hasServiceAccountId() const { return this->serviceAccountId_ != nullptr;};
    void deleteServiceAccountId() { this->serviceAccountId_ = nullptr;};
    inline int64_t serviceAccountId() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountId_, 0L) };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setServiceAccountId(int64_t serviceAccountId) { DARABONBA_PTR_SET_VALUE(serviceAccountId_, serviceAccountId) };


    // serviceAccountNickName Field Functions 
    bool hasServiceAccountNickName() const { return this->serviceAccountNickName_ != nullptr;};
    void deleteServiceAccountNickName() { this->serviceAccountNickName_ = nullptr;};
    inline string serviceAccountNickName() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountNickName_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setServiceAccountNickName(string serviceAccountNickName) { DARABONBA_PTR_SET_VALUE(serviceAccountNickName_, serviceAccountNickName) };


    // serviceAccountUid Field Functions 
    bool hasServiceAccountUid() const { return this->serviceAccountUid_ != nullptr;};
    void deleteServiceAccountUid() { this->serviceAccountUid_ = nullptr;};
    inline string serviceAccountUid() const { DARABONBA_PTR_GET_DEFAULT(serviceAccountUid_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setServiceAccountUid(string serviceAccountUid) { DARABONBA_PTR_SET_VALUE(serviceAccountUid_, serviceAccountUid) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspacesResponseBodyDataBaseWorkspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // Whether the current user has joined the workspace.
    std::shared_ptr<bool> alreadyJoined_ = nullptr;
    // The ID of the creator.
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    // The nickname of the creator.
    std::shared_ptr<string> creatorNickName_ = nullptr;
    // The Alibaba Cloud account UID of the creator.
    std::shared_ptr<string> creatorUid_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> name_ = nullptr;
    // The owner ID.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The nickname of the owner.
    std::shared_ptr<string> ownerNickName_ = nullptr;
    // The Alibaba Cloud UID of the owner.
    std::shared_ptr<string> ownerUid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the service account.
    std::shared_ptr<int64_t> serviceAccountId_ = nullptr;
    // The nickname of the service account.
    std::shared_ptr<string> serviceAccountNickName_ = nullptr;
    // The Alibaba Cloud account UID of the service account.
    std::shared_ptr<string> serviceAccountUid_ = nullptr;
    // The ID of the tenant to which the workspace belongs.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
