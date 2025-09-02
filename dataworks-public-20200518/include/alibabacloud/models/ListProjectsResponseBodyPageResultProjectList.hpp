// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPAGERESULTPROJECTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTSRESPONSEBODYPAGERESULTPROJECTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListProjectsResponseBodyPageResultProjectListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProjectsResponseBodyPageResultProjectList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectsResponseBodyPageResultProjectList& obj) { 
      DARABONBA_PTR_TO_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
      DARABONBA_PTR_TO_JSON(ProjectStatus, projectStatus_);
      DARABONBA_PTR_TO_JSON(ProjectStatusCode, projectStatusCode_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(TablePrivacyMode, tablePrivacyMode_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectsResponseBodyPageResultProjectList& obj) { 
      DARABONBA_PTR_FROM_JSON(DisableDevelopment, disableDevelopment_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(ProjectDescription, projectDescription_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ProjectIdentifier, projectIdentifier_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ProjectOwnerBaseId, projectOwnerBaseId_);
      DARABONBA_PTR_FROM_JSON(ProjectStatus, projectStatus_);
      DARABONBA_PTR_FROM_JSON(ProjectStatusCode, projectStatusCode_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TablePrivacyMode, tablePrivacyMode_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UseProxyOdpsAccount, useProxyOdpsAccount_);
    };
    ListProjectsResponseBodyPageResultProjectList() = default ;
    ListProjectsResponseBodyPageResultProjectList(const ListProjectsResponseBodyPageResultProjectList &) = default ;
    ListProjectsResponseBodyPageResultProjectList(ListProjectsResponseBodyPageResultProjectList &&) = default ;
    ListProjectsResponseBodyPageResultProjectList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectsResponseBodyPageResultProjectList() = default ;
    ListProjectsResponseBodyPageResultProjectList& operator=(const ListProjectsResponseBodyPageResultProjectList &) = default ;
    ListProjectsResponseBodyPageResultProjectList& operator=(ListProjectsResponseBodyPageResultProjectList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->disableDevelopment_ != nullptr
        && this->isDefault_ != nullptr && this->projectDescription_ != nullptr && this->projectId_ != nullptr && this->projectIdentifier_ != nullptr && this->projectName_ != nullptr
        && this->projectOwnerBaseId_ != nullptr && this->projectStatus_ != nullptr && this->projectStatusCode_ != nullptr && this->resourceManagerResourceGroupId_ != nullptr && this->tablePrivacyMode_ != nullptr
        && this->tags_ != nullptr && this->useProxyOdpsAccount_ != nullptr; };
    // disableDevelopment Field Functions 
    bool hasDisableDevelopment() const { return this->disableDevelopment_ != nullptr;};
    void deleteDisableDevelopment() { this->disableDevelopment_ = nullptr;};
    inline bool disableDevelopment() const { DARABONBA_PTR_GET_DEFAULT(disableDevelopment_, false) };
    inline ListProjectsResponseBodyPageResultProjectList& setDisableDevelopment(bool disableDevelopment) { DARABONBA_PTR_SET_VALUE(disableDevelopment_, disableDevelopment) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline int32_t isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, 0) };
    inline ListProjectsResponseBodyPageResultProjectList& setIsDefault(int32_t isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // projectDescription Field Functions 
    bool hasProjectDescription() const { return this->projectDescription_ != nullptr;};
    void deleteProjectDescription() { this->projectDescription_ = nullptr;};
    inline string projectDescription() const { DARABONBA_PTR_GET_DEFAULT(projectDescription_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setProjectDescription(string projectDescription) { DARABONBA_PTR_SET_VALUE(projectDescription_, projectDescription) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListProjectsResponseBodyPageResultProjectList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // projectIdentifier Field Functions 
    bool hasProjectIdentifier() const { return this->projectIdentifier_ != nullptr;};
    void deleteProjectIdentifier() { this->projectIdentifier_ = nullptr;};
    inline string projectIdentifier() const { DARABONBA_PTR_GET_DEFAULT(projectIdentifier_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setProjectIdentifier(string projectIdentifier) { DARABONBA_PTR_SET_VALUE(projectIdentifier_, projectIdentifier) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // projectOwnerBaseId Field Functions 
    bool hasProjectOwnerBaseId() const { return this->projectOwnerBaseId_ != nullptr;};
    void deleteProjectOwnerBaseId() { this->projectOwnerBaseId_ = nullptr;};
    inline string projectOwnerBaseId() const { DARABONBA_PTR_GET_DEFAULT(projectOwnerBaseId_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setProjectOwnerBaseId(string projectOwnerBaseId) { DARABONBA_PTR_SET_VALUE(projectOwnerBaseId_, projectOwnerBaseId) };


    // projectStatus Field Functions 
    bool hasProjectStatus() const { return this->projectStatus_ != nullptr;};
    void deleteProjectStatus() { this->projectStatus_ = nullptr;};
    inline int32_t projectStatus() const { DARABONBA_PTR_GET_DEFAULT(projectStatus_, 0) };
    inline ListProjectsResponseBodyPageResultProjectList& setProjectStatus(int32_t projectStatus) { DARABONBA_PTR_SET_VALUE(projectStatus_, projectStatus) };


    // projectStatusCode Field Functions 
    bool hasProjectStatusCode() const { return this->projectStatusCode_ != nullptr;};
    void deleteProjectStatusCode() { this->projectStatusCode_ = nullptr;};
    inline string projectStatusCode() const { DARABONBA_PTR_GET_DEFAULT(projectStatusCode_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setProjectStatusCode(string projectStatusCode) { DARABONBA_PTR_SET_VALUE(projectStatusCode_, projectStatusCode) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline ListProjectsResponseBodyPageResultProjectList& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // tablePrivacyMode Field Functions 
    bool hasTablePrivacyMode() const { return this->tablePrivacyMode_ != nullptr;};
    void deleteTablePrivacyMode() { this->tablePrivacyMode_ = nullptr;};
    inline int32_t tablePrivacyMode() const { DARABONBA_PTR_GET_DEFAULT(tablePrivacyMode_, 0) };
    inline ListProjectsResponseBodyPageResultProjectList& setTablePrivacyMode(int32_t tablePrivacyMode) { DARABONBA_PTR_SET_VALUE(tablePrivacyMode_, tablePrivacyMode) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListProjectsResponseBodyPageResultProjectListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListProjectsResponseBodyPageResultProjectListTags>) };
    inline vector<Models::ListProjectsResponseBodyPageResultProjectListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListProjectsResponseBodyPageResultProjectListTags>) };
    inline ListProjectsResponseBodyPageResultProjectList& setTags(const vector<Models::ListProjectsResponseBodyPageResultProjectListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListProjectsResponseBodyPageResultProjectList& setTags(vector<Models::ListProjectsResponseBodyPageResultProjectListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // useProxyOdpsAccount Field Functions 
    bool hasUseProxyOdpsAccount() const { return this->useProxyOdpsAccount_ != nullptr;};
    void deleteUseProxyOdpsAccount() { this->useProxyOdpsAccount_ = nullptr;};
    inline bool useProxyOdpsAccount() const { DARABONBA_PTR_GET_DEFAULT(useProxyOdpsAccount_, false) };
    inline ListProjectsResponseBodyPageResultProjectList& setUseProxyOdpsAccount(bool useProxyOdpsAccount) { DARABONBA_PTR_SET_VALUE(useProxyOdpsAccount_, useProxyOdpsAccount) };


  protected:
    // Indicates whether the Development role is disabled. Valid values:
    // 
    // *   **false**: enabled
    // *   **true**: disabled
    std::shared_ptr<bool> disableDevelopment_ = nullptr;
    // Indicates whether the workspace is a default workspace. Valid values:
    // 
    // *   **1**: The workspace is a default workspace.
    // *   **0**: The workspace is not a default workspace.
    std::shared_ptr<int32_t> isDefault_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> projectDescription_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> projectIdentifier_ = nullptr;
    // The display name of the workspace.
    std::shared_ptr<string> projectName_ = nullptr;
    // The ID of the user used by the workspace owner.
    std::shared_ptr<string> projectOwnerBaseId_ = nullptr;
    // The status of the workspace. Valid values:
    // 
    // *   0: AVAILABLE, which indicates that the workspace is running as expected.
    // *   1: DELETED, which indicates that the workspace is deleted.
    // *   2: INITIALIZING, which indicates that the workspace is being initialized.
    // *   3: INIT_FAILED, which indicates that the workspace fails to be initialized.
    // *   4: FORBIDDEN, which indicates that the workspace is manually disabled.
    // *   5: DELETING, which indicates that the workspace is being deleted.
    // *   6: DEL_FAILED, which indicates that the workspace fails to be deleted.
    // *   7: FROZEN, which indicates that the workspace is frozen due to overdue payments.
    // *   8: UPDATING, which indicates that the workspace is being updated. After you associate a compute engine with the workspace, the system initializes the compute engine and updates the workspace.
    // *   9: UPDATE_FAILED, which indicates that the workspace fails to be updated.
    std::shared_ptr<int32_t> projectStatus_ = nullptr;
    // The status code of the workspace. Valid values:
    // 
    // *   AVAILABLE: 0, which indicates that the workspace is running as expected.
    // *   DELETED: 1, which indicates that the workspace is deleted.
    // *   INITIALIZING: 2, which indicates that the workspace is being initialized.
    // *   INIT_FAILED: 3, which indicates that the workspace fails to be initialized.
    // *   FORBIDDEN: 4, which indicates that the workspace is manually disabled.
    // *   DELETING: 5, which indicates that the workspace is being deleted.
    // *   DEL_FAILED: 6, which indicates that the workspace fails to be deleted.
    // *   FROZEN: 7, which indicates that the workspace is frozen due to overdue payments.
    // *   UPDATING: 8, which indicates that the workspace is being updated. After you associate a compute engine with the workspace, the system initializes the compute engine and updates the workspace.
    // *   UPDATE_FAILED: 9, which indicates that the workspace fails to be updated.
    std::shared_ptr<string> projectStatusCode_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // Indicates whether the MaxCompute tables in the workspace are visible to the users within a tenant. Valid values:
    // 
    // *   **0**: invisible
    // *   **1**: visible
    std::shared_ptr<int32_t> tablePrivacyMode_ = nullptr;
    // The tags added to the workspace.
    std::shared_ptr<vector<Models::ListProjectsResponseBodyPageResultProjectListTags>> tags_ = nullptr;
    // Indicates whether a proxy account is used to access the MaxCompute compute engine associated with the workspace. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> useProxyOdpsAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
