// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkspaceResponseBodyOwner.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AdminNames, adminNames_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
      DARABONBA_ANY_TO_JSON(ExtraInfos, extraInfos_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminNames, adminNames_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
      DARABONBA_ANY_FROM_JSON(ExtraInfos, extraInfos_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    GetWorkspaceResponseBody() = default ;
    GetWorkspaceResponseBody(const GetWorkspaceResponseBody &) = default ;
    GetWorkspaceResponseBody(GetWorkspaceResponseBody &&) = default ;
    GetWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkspaceResponseBody() = default ;
    GetWorkspaceResponseBody& operator=(const GetWorkspaceResponseBody &) = default ;
    GetWorkspaceResponseBody& operator=(GetWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminNames_ == nullptr
        && return this->creator_ == nullptr && return this->description_ == nullptr && return this->displayName_ == nullptr && return this->envTypes_ == nullptr && return this->extraInfos_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->isDefault_ == nullptr && return this->owner_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->workspaceId_ == nullptr && return this->workspaceName_ == nullptr; };
    // adminNames Field Functions 
    bool hasAdminNames() const { return this->adminNames_ != nullptr;};
    void deleteAdminNames() { this->adminNames_ = nullptr;};
    inline const vector<string> & adminNames() const { DARABONBA_PTR_GET_CONST(adminNames_, vector<string>) };
    inline vector<string> adminNames() { DARABONBA_PTR_GET(adminNames_, vector<string>) };
    inline GetWorkspaceResponseBody& setAdminNames(const vector<string> & adminNames) { DARABONBA_PTR_SET_VALUE(adminNames_, adminNames) };
    inline GetWorkspaceResponseBody& setAdminNames(vector<string> && adminNames) { DARABONBA_PTR_SET_RVALUE(adminNames_, adminNames) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetWorkspaceResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetWorkspaceResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetWorkspaceResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // envTypes Field Functions 
    bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
    void deleteEnvTypes() { this->envTypes_ = nullptr;};
    inline const vector<string> & envTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
    inline vector<string> envTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
    inline GetWorkspaceResponseBody& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
    inline GetWorkspaceResponseBody& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


    // extraInfos Field Functions 
    bool hasExtraInfos() const { return this->extraInfos_ != nullptr;};
    void deleteExtraInfos() { this->extraInfos_ = nullptr;};
    inline     const Darabonba::Json & extraInfos() const { DARABONBA_GET(extraInfos_) };
    Darabonba::Json & extraInfos() { DARABONBA_GET(extraInfos_) };
    inline GetWorkspaceResponseBody& setExtraInfos(const Darabonba::Json & extraInfos) { DARABONBA_SET_VALUE(extraInfos_, extraInfos) };
    inline GetWorkspaceResponseBody& setExtraInfos(Darabonba::Json & extraInfos) { DARABONBA_SET_RVALUE(extraInfos_, extraInfos) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetWorkspaceResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetWorkspaceResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline GetWorkspaceResponseBody& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline const GetWorkspaceResponseBodyOwner & owner() const { DARABONBA_PTR_GET_CONST(owner_, GetWorkspaceResponseBodyOwner) };
    inline GetWorkspaceResponseBodyOwner owner() { DARABONBA_PTR_GET(owner_, GetWorkspaceResponseBodyOwner) };
    inline GetWorkspaceResponseBody& setOwner(const GetWorkspaceResponseBodyOwner & owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };
    inline GetWorkspaceResponseBody& setOwner(GetWorkspaceResponseBodyOwner && owner) { DARABONBA_PTR_SET_RVALUE(owner_, owner) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetWorkspaceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetWorkspaceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetWorkspaceResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline GetWorkspaceResponseBody& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    // The names of the administrator accounts.
    std::shared_ptr<vector<string>> adminNames_ = nullptr;
    // The ID of the user who creates the workspace.
    std::shared_ptr<string> creator_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // The display name of the workspace.
    std::shared_ptr<string> displayName_ = nullptr;
    // The environment information of the workspace.
    // 
    // *   Workspaces in basic mode can run only in the production environment.
    // *   Workspaces in standard mode can run in both the development and production environments.
    std::shared_ptr<vector<string>> envTypes_ = nullptr;
    // The additional information, which only contains the TenantId field.
    Darabonba::Json extraInfos_ = nullptr;
    // The time when the workspace is created, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the workspace is modified, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // Indicates whether the workspace is the default workspace. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The information about the workspace owner. This parameter is valid only when Verbose is set to true.
    std::shared_ptr<GetWorkspaceResponseBodyOwner> owner_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The workspace state. Valid values:
    // 
    // *   ENABLED
    // *   INITIALIZING
    // *   FAILURE:
    // *   DISABLED
    // *   FROZEN
    // *   UPDATING
    std::shared_ptr<string> status_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
