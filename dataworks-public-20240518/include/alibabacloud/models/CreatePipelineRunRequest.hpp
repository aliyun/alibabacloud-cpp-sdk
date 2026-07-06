// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPIPELINERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPIPELINERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreatePipelineRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePipelineRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRunUntilStage, autoRunUntilStage_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ObjectIds, objectIds_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePipelineRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRunUntilStage, autoRunUntilStage_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ObjectIds, objectIds_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreatePipelineRunRequest() = default ;
    CreatePipelineRunRequest(const CreatePipelineRunRequest &) = default ;
    CreatePipelineRunRequest(CreatePipelineRunRequest &&) = default ;
    CreatePipelineRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePipelineRunRequest() = default ;
    CreatePipelineRunRequest& operator=(const CreatePipelineRunRequest &) = default ;
    CreatePipelineRunRequest& operator=(CreatePipelineRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRunUntilStage_ == nullptr
        && this->description_ == nullptr && this->objectIds_ == nullptr && this->projectId_ == nullptr && this->runMode_ == nullptr && this->type_ == nullptr; };
    // autoRunUntilStage Field Functions 
    bool hasAutoRunUntilStage() const { return this->autoRunUntilStage_ != nullptr;};
    void deleteAutoRunUntilStage() { this->autoRunUntilStage_ = nullptr;};
    inline string getAutoRunUntilStage() const { DARABONBA_PTR_GET_DEFAULT(autoRunUntilStage_, "") };
    inline CreatePipelineRunRequest& setAutoRunUntilStage(string autoRunUntilStage) { DARABONBA_PTR_SET_VALUE(autoRunUntilStage_, autoRunUntilStage) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePipelineRunRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // objectIds Field Functions 
    bool hasObjectIds() const { return this->objectIds_ != nullptr;};
    void deleteObjectIds() { this->objectIds_ = nullptr;};
    inline const vector<string> & getObjectIds() const { DARABONBA_PTR_GET_CONST(objectIds_, vector<string>) };
    inline vector<string> getObjectIds() { DARABONBA_PTR_GET(objectIds_, vector<string>) };
    inline CreatePipelineRunRequest& setObjectIds(const vector<string> & objectIds) { DARABONBA_PTR_SET_VALUE(objectIds_, objectIds) };
    inline CreatePipelineRunRequest& setObjectIds(vector<string> && objectIds) { DARABONBA_PTR_SET_RVALUE(objectIds_, objectIds) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreatePipelineRunRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline string getRunMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, "") };
    inline CreatePipelineRunRequest& setRunMode(string runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePipelineRunRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The code of the stage in the publish process. This parameter takes effect only when RunMode is set to Auto. After the publish process is created, it automatically runs to the specified stage.
    // 
    // >Notice: The specified stage is automatically completed. For example, if you set this parameter to DEV, the automatic run stops after the DEV stage reaches the desired state.
    shared_ptr<string> autoRunUntilStage_ {};
    // The description of the publish process.
    shared_ptr<string> description_ {};
    // The list of entity IDs that you want to publish in this publish process.
    // >Notice: Only a single entity and its child entities can be published at a time. Only the first entity in this array and its child entities are published. Make sure that the length of this array is 1. Entities beyond the first one are ignored.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> objectIds_ {};
    // The ID of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the workspace configuration page to obtain the workspace ID.
    // This parameter specifies the DataWorks workspace for this API call.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The run mode of the publish process. Default value: Normal. If you set this parameter to Auto, the publish process is automatically driven to the specified stage. This parameter is used together with the AutoRunUntilStage parameter.
    // 
    // Valid values:
    // - Normal
    // - Auto
    shared_ptr<string> runMode_ {};
    // Specifies whether the publish process is used to bring an entity online or offline.
    // 
    // - Online: online
    // 
    // - Offline: offline
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
