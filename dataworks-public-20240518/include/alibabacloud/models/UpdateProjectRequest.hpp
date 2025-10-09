// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_TO_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DevEnvironmentEnabled, devEnvironmentEnabled_);
      DARABONBA_PTR_FROM_JSON(DevRoleDisabled, devRoleDisabled_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PaiTaskEnabled, paiTaskEnabled_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    UpdateProjectRequest() = default ;
    UpdateProjectRequest(const UpdateProjectRequest &) = default ;
    UpdateProjectRequest(UpdateProjectRequest &&) = default ;
    UpdateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectRequest() = default ;
    UpdateProjectRequest& operator=(const UpdateProjectRequest &) = default ;
    UpdateProjectRequest& operator=(UpdateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->devEnvironmentEnabled_ != nullptr && this->devRoleDisabled_ != nullptr && this->displayName_ != nullptr && this->id_ != nullptr && this->paiTaskEnabled_ != nullptr
        && this->status_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devEnvironmentEnabled Field Functions 
    bool hasDevEnvironmentEnabled() const { return this->devEnvironmentEnabled_ != nullptr;};
    void deleteDevEnvironmentEnabled() { this->devEnvironmentEnabled_ = nullptr;};
    inline bool devEnvironmentEnabled() const { DARABONBA_PTR_GET_DEFAULT(devEnvironmentEnabled_, false) };
    inline UpdateProjectRequest& setDevEnvironmentEnabled(bool devEnvironmentEnabled) { DARABONBA_PTR_SET_VALUE(devEnvironmentEnabled_, devEnvironmentEnabled) };


    // devRoleDisabled Field Functions 
    bool hasDevRoleDisabled() const { return this->devRoleDisabled_ != nullptr;};
    void deleteDevRoleDisabled() { this->devRoleDisabled_ = nullptr;};
    inline bool devRoleDisabled() const { DARABONBA_PTR_GET_DEFAULT(devRoleDisabled_, false) };
    inline UpdateProjectRequest& setDevRoleDisabled(bool devRoleDisabled) { DARABONBA_PTR_SET_VALUE(devRoleDisabled_, devRoleDisabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateProjectRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateProjectRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // paiTaskEnabled Field Functions 
    bool hasPaiTaskEnabled() const { return this->paiTaskEnabled_ != nullptr;};
    void deletePaiTaskEnabled() { this->paiTaskEnabled_ = nullptr;};
    inline bool paiTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(paiTaskEnabled_, false) };
    inline UpdateProjectRequest& setPaiTaskEnabled(bool paiTaskEnabled) { DARABONBA_PTR_SET_VALUE(paiTaskEnabled_, paiTaskEnabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateProjectRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the workspace.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the development environment. Valid values:
    // 
    // *   true: enables the development environment. In this case, the development environment is isolated from the production environment in the workspace.
    // *   false: disables the development environment. In this case, only the production environment is used in the workspace.
    std::shared_ptr<bool> devEnvironmentEnabled_ = nullptr;
    // Specifies whether to disable the Develop role. Valid values:
    // 
    // *   false (default)
    // *   true
    // 
    // Note: If you disable the Develop role, you cannot assume the Develop role to develop nodes in workflows and edit node code. The Develop role cannot be enabled again after it is disabled.
    std::shared_ptr<bool> devRoleDisabled_ = nullptr;
    // The display name of the workspace.
    std::shared_ptr<string> displayName_ = nullptr;
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://dataworks.console.aliyun.com/workspace/list) and go to the workspace management page to obtain the ID.
    // 
    // This parameter is used to determine the DataWorks workspaces used for this API call.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Specifies whether to enable scheduling of Platform for AI (PAI) tasks. Valid values:
    // 
    // *   true: enables scheduling of PAI tasks. In this case, you can create a PAI node in a DataWorks workspace and configure scheduling properties for the node to implement periodic scheduling of PAI tasks.
    // *   false: disables scheduling of PAI tasks.
    std::shared_ptr<bool> paiTaskEnabled_ = nullptr;
    // Specifies whether to disable or enable the workspace. Valid values:
    // 
    // *   Available: enables the workspace.
    // *   Forbidden: disables the workspace.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
