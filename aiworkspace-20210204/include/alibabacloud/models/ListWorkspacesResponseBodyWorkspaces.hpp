// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACESRESPONSEBODYWORKSPACES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListWorkspacesResponseBodyWorkspaces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_TO_JSON(AdminNames, adminNames_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnvTypes, envTypes_);
      DARABONBA_ANY_TO_JSON(ExtraInfos, extraInfos_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspacesResponseBodyWorkspaces& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminNames, adminNames_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnvTypes, envTypes_);
      DARABONBA_ANY_FROM_JSON(ExtraInfos, extraInfos_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
    };
    ListWorkspacesResponseBodyWorkspaces() = default ;
    ListWorkspacesResponseBodyWorkspaces(const ListWorkspacesResponseBodyWorkspaces &) = default ;
    ListWorkspacesResponseBodyWorkspaces(ListWorkspacesResponseBodyWorkspaces &&) = default ;
    ListWorkspacesResponseBodyWorkspaces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspacesResponseBodyWorkspaces() = default ;
    ListWorkspacesResponseBodyWorkspaces& operator=(const ListWorkspacesResponseBodyWorkspaces &) = default ;
    ListWorkspacesResponseBodyWorkspaces& operator=(ListWorkspacesResponseBodyWorkspaces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->adminNames_ != nullptr
        && this->creator_ != nullptr && this->description_ != nullptr && this->envTypes_ != nullptr && this->extraInfos_ != nullptr && this->gmtCreateTime_ != nullptr
        && this->gmtModifiedTime_ != nullptr && this->isDefault_ != nullptr && this->status_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr
        && this->resourceGroupId_ != nullptr; };
    // adminNames Field Functions 
    bool hasAdminNames() const { return this->adminNames_ != nullptr;};
    void deleteAdminNames() { this->adminNames_ = nullptr;};
    inline const vector<string> & adminNames() const { DARABONBA_PTR_GET_CONST(adminNames_, vector<string>) };
    inline vector<string> adminNames() { DARABONBA_PTR_GET(adminNames_, vector<string>) };
    inline ListWorkspacesResponseBodyWorkspaces& setAdminNames(const vector<string> & adminNames) { DARABONBA_PTR_SET_VALUE(adminNames_, adminNames) };
    inline ListWorkspacesResponseBodyWorkspaces& setAdminNames(vector<string> && adminNames) { DARABONBA_PTR_SET_RVALUE(adminNames_, adminNames) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // envTypes Field Functions 
    bool hasEnvTypes() const { return this->envTypes_ != nullptr;};
    void deleteEnvTypes() { this->envTypes_ = nullptr;};
    inline const vector<string> & envTypes() const { DARABONBA_PTR_GET_CONST(envTypes_, vector<string>) };
    inline vector<string> envTypes() { DARABONBA_PTR_GET(envTypes_, vector<string>) };
    inline ListWorkspacesResponseBodyWorkspaces& setEnvTypes(const vector<string> & envTypes) { DARABONBA_PTR_SET_VALUE(envTypes_, envTypes) };
    inline ListWorkspacesResponseBodyWorkspaces& setEnvTypes(vector<string> && envTypes) { DARABONBA_PTR_SET_RVALUE(envTypes_, envTypes) };


    // extraInfos Field Functions 
    bool hasExtraInfos() const { return this->extraInfos_ != nullptr;};
    void deleteExtraInfos() { this->extraInfos_ = nullptr;};
    inline     const Darabonba::Json & extraInfos() const { DARABONBA_GET(extraInfos_) };
    Darabonba::Json & extraInfos() { DARABONBA_GET(extraInfos_) };
    inline ListWorkspacesResponseBodyWorkspaces& setExtraInfos(const Darabonba::Json & extraInfos) { DARABONBA_SET_VALUE(extraInfos_, extraInfos) };
    inline ListWorkspacesResponseBodyWorkspaces& setExtraInfos(Darabonba::Json & extraInfos) { DARABONBA_SET_RVALUE(extraInfos_, extraInfos) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListWorkspacesResponseBodyWorkspaces& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListWorkspacesResponseBodyWorkspaces& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The names of the administrator accounts.
    std::shared_ptr<vector<string>> adminNames_ = nullptr;
    // The user ID of the creator.
    std::shared_ptr<string> creator_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // The environment types of the workspace.
    std::shared_ptr<vector<string>> envTypes_ = nullptr;
    // the additional information. Only contains TenantId.
    Darabonba::Json extraInfos_ = nullptr;
    // The time when the workspace was created. The time (UTC+0) follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ss.SSSZ format.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the workspace was modified. The time (UTC+0) follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ss.SSSZ format.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // Indicates whether the workspace is the default workspace.
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The status of the workspace.
    std::shared_ptr<string> status_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> workspaceName_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
