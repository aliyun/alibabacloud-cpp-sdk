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
    virtual bool empty() const override { return this->description_ == nullptr
        && this->devEnvironmentEnabled_ == nullptr && this->devRoleDisabled_ == nullptr && this->displayName_ == nullptr && this->id_ == nullptr && this->paiTaskEnabled_ == nullptr
        && this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // devEnvironmentEnabled Field Functions 
    bool hasDevEnvironmentEnabled() const { return this->devEnvironmentEnabled_ != nullptr;};
    void deleteDevEnvironmentEnabled() { this->devEnvironmentEnabled_ = nullptr;};
    inline bool getDevEnvironmentEnabled() const { DARABONBA_PTR_GET_DEFAULT(devEnvironmentEnabled_, false) };
    inline UpdateProjectRequest& setDevEnvironmentEnabled(bool devEnvironmentEnabled) { DARABONBA_PTR_SET_VALUE(devEnvironmentEnabled_, devEnvironmentEnabled) };


    // devRoleDisabled Field Functions 
    bool hasDevRoleDisabled() const { return this->devRoleDisabled_ != nullptr;};
    void deleteDevRoleDisabled() { this->devRoleDisabled_ = nullptr;};
    inline bool getDevRoleDisabled() const { DARABONBA_PTR_GET_DEFAULT(devRoleDisabled_, false) };
    inline UpdateProjectRequest& setDevRoleDisabled(bool devRoleDisabled) { DARABONBA_PTR_SET_VALUE(devRoleDisabled_, devRoleDisabled) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateProjectRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateProjectRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // paiTaskEnabled Field Functions 
    bool hasPaiTaskEnabled() const { return this->paiTaskEnabled_ != nullptr;};
    void deletePaiTaskEnabled() { this->paiTaskEnabled_ = nullptr;};
    inline bool getPaiTaskEnabled() const { DARABONBA_PTR_GET_DEFAULT(paiTaskEnabled_, false) };
    inline UpdateProjectRequest& setPaiTaskEnabled(bool paiTaskEnabled) { DARABONBA_PTR_SET_VALUE(paiTaskEnabled_, paiTaskEnabled) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateProjectRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // An optional description of the workspace.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the development environment. Valid values:
    // 
    // - `true`: Enables the development environment for the workspace and isolates it from the production environment.
    // 
    // - `false`: Uses only the production environment.
    // 
    // **Important**: You cannot disable the development environment after you enable it.
    shared_ptr<bool> devEnvironmentEnabled_ {};
    // Specifies whether to disable the development role, which grants permissions for workflow and code editing. Valid values:
    // 
    // - `false`: Enables the development role. This is the default value.
    // 
    // - `true`: Disables the development role.
    // 
    // **Important**: After you enable the development role (by setting this parameter to `false`), you cannot disable it.
    shared_ptr<bool> devRoleDisabled_ {};
    // The display name of the workspace.
    shared_ptr<string> displayName_ {};
    // The ID of the DataWorks workspace. To find the workspace ID, log in to the [DataWorks console](https://dataworks.console.aliyun.com/workspace/list) and go to the Workspace Management page.
    // 
    // This parameter specifies the DataWorks workspace to use for the API call.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // Specifies whether to enable task scheduling for Machine Learning Platform for AI (PAI). Valid values:
    // 
    // - `true`: You can create PAI nodes in the DataWorks workspace and run them on a schedule.
    // 
    // - `false`: Disables task scheduling for PAI.
    shared_ptr<bool> paiTaskEnabled_ {};
    // Specifies whether to enable or disable the workspace. Valid values:
    // 
    // - `Available`: Enables the workspace.
    // 
    // - `Forbidden`: Disables the workspace.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
