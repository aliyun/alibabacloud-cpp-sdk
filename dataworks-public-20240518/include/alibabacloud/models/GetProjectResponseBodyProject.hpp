// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYPROJECT_HPP_
#define ALIBABACLOUD_MODELS_GETPROJECTRESPONSEBODYPROJECT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetProjectResponseBodyProjectAliyunResourceTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetProjectResponseBodyProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProjectResponseBodyProject& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_TO_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_TO_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetProjectResponseBodyProject& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunResourceGroupId, aliyunResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(AliyunResourceTags, aliyunResourceTags_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_FROM_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetProjectResponseBodyProject() = default ;
    GetProjectResponseBodyProject(const GetProjectResponseBodyProject &) = default ;
    GetProjectResponseBodyProject(GetProjectResponseBodyProject &&) = default ;
    GetProjectResponseBodyProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProjectResponseBodyProject() = default ;
    GetProjectResponseBodyProject& operator=(const GetProjectResponseBodyProject &) = default ;
    GetProjectResponseBodyProject& operator=(GetProjectResponseBodyProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunResourceGroupId_ == nullptr
        && return this->aliyunResourceTags_ == nullptr && return this->description_ == nullptr && return this->devEnvironmentEnabled_ == nullptr && return this->devRoleDisabled_ == nullptr && return this->displayName_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->owner_ == nullptr && return this->paiTaskEnabled_ == nullptr && return this->status_ == nullptr; };
    // aliyunResourceGroupId Field Functions 
    bool hasAliyunResourceGroupId() const { return this->aliyunResourceGroupId_ != nullptr;};
    void deleteAliyunResourceGroupId() { this->aliyunResourceGroupId_ = nullptr;};
    inline string aliyunResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(aliyunResourceGroupId_, "") };
    inline GetProjectResponseBodyProject& setAliyunResourceGroupId(string aliyunResourceGroupId) { DARABONBA_PTR_SET_VALUE(aliyunResourceGroupId_, aliyunResourceGroupId) };


    // aliyunResourceTags Field Functions 
    bool hasAliyunResourceTags() const { return this->aliyunResourceTags_ != nullptr;};
    void deleteAliyunResourceTags() { this->aliyunResourceTags_ = nullptr;};
    inline const vector<Models::GetProjectResponseBodyProjectAliyunResourceTags> & aliyunResourceTags() const { DARABONBA_PTR_GET_CONST(aliyunResourceTags_, vector<Models::GetProjectResponseBodyProjectAliyunResourceTags>) };
    inline vector<Models::GetProjectResponseBodyProjectAliyunResourceTags> aliyunResourceTags() { DARABONBA_PTR_GET(aliyunResourceTags_, vector<Models::GetProjectResponseBodyProjectAliyunResourceTags>) };
    inline GetProjectResponseBodyProject& setAliyunResourceTags(const vector<Models::GetProjectResponseBodyProjectAliyunResourceTags> & aliyunResourceTags) { DARABONBA_PTR_SET_VALUE(aliyunResourceTags_, aliyunResourceTags) };
    inline GetProjectResponseBodyProject& setAliyunResourceTags(vector<Models::GetProjectResponseBodyProjectAliyunResourceTags> && aliyunResourceTags) { DARABONBA_PTR_SET_RVALUE(aliyunResourceTags_, aliyunResourceTags) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetProjectResponseBodyProject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devEnvironmentEnabled Field Functions 
    bool hasDevEnvironmentEnabled() const { return this->devEnvironmentEnabled_ != nullptr;};
    void deleteDevEnvironmentEnabled() { this->devEnvironmentEnabled_ = nullptr;};
    inline bool devEnvironmentEnabled() const { DARABONBA_PTR_GET_DEFAULT(devEnvironmentEnabled_, false) };
    inline GetProjectResponseBodyProject& setDevEnvironmentEnabled(bool devEnvironmentEnabled) { DARABONBA_PTR_SET_VALUE(devEnvironmentEnabled_, devEnvironmentEnabled) };


    // devRoleDisabled Field Functions 
    bool hasDevRoleDisabled() const { return this->devRoleDisabled_ != nullptr;};
    void deleteDevRoleDisabled() { this->devRoleDisabled_ = nullptr;};
    inline bool devRoleDisabled() const { DARABONBA_PTR_GET_DEFAULT(devRoleDisabled_, false) };
    inline GetProjectResponseBodyProject& setDevRoleDisabled(bool devRoleDisabled) { DARABONBA_PTR_SET_VALUE(devRoleDisabled_, devRoleDisabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetProjectResponseBodyProject& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetProjectResponseBodyProject& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetProjectResponseBodyProject& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetProjectResponseBodyProject& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // paiTaskEnabled Field Functions 
    bool hasPaiTaskEnabled() const { return this->paiTaskEnabled_ != nullptr;};
    void deletePaiTaskEnabled() { this->paiTaskEnabled_ = nullptr;};
    inline bool paiTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(paiTaskEnabled_, false) };
    inline GetProjectResponseBodyProject& setPaiTaskEnabled(bool paiTaskEnabled) { DARABONBA_PTR_SET_VALUE(paiTaskEnabled_, paiTaskEnabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetProjectResponseBodyProject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the Alibaba Cloud resource group to which the workspace belongs.
    std::shared_ptr<string> aliyunResourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::GetProjectResponseBodyProjectAliyunResourceTags>> aliyunResourceTags_ = nullptr;
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the development environment is enabled. Valid values:
    // 
    // *   true: The development environment is enabled. In this case, the development environment is isolated from the production environment in the workspace.
    // *   false: The development environment is disabled. In this case, only the production environment is used in the workspace.
    std::shared_ptr<bool> devEnvironmentEnabled_ = nullptr;
    // Indicates whether the Develop role is disabled. Valid values:
    // 
    // *   false
    // *   true
    std::shared_ptr<bool> devRoleDisabled_ = nullptr;
    // The display name of the workspace.
    std::shared_ptr<string> displayName_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the workspace.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the Alibaba Cloud account to which the workspace belongs.
    std::shared_ptr<string> owner_ = nullptr;
    // Indicates whether scheduling of PAI tasks is enabled. Valid values:
    // 
    // *   true: Scheduling of PAI tasks is enabled. In this case, you can create a PAI node in a DataWorks workspace and configure scheduling properties for the node to implement periodic scheduling of PAI tasks.
    // *   false: Scheduling of PAI tasks is disabled.
    std::shared_ptr<bool> paiTaskEnabled_ = nullptr;
    // The status of the workspace. Valid values:
    // 
    // *   Available
    // *   Initializing
    // *   InitFailed
    // *   Forbidden
    // *   Deleting
    // *   DeleteFailed
    // *   Frozen
    // *   Updating
    // *   UpdateFailed
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
