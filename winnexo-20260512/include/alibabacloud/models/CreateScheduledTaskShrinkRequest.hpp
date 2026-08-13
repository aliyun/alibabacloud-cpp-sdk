// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCHEDULEDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateScheduledTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(description, descriptionShrink_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_TO_JSON(taskDetail, taskDetailShrink_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(description, descriptionShrink_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_FROM_JSON(taskDetail, taskDetailShrink_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfigShrink_);
    };
    CreateScheduledTaskShrinkRequest() = default ;
    CreateScheduledTaskShrinkRequest(const CreateScheduledTaskShrinkRequest &) = default ;
    CreateScheduledTaskShrinkRequest(CreateScheduledTaskShrinkRequest &&) = default ;
    CreateScheduledTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScheduledTaskShrinkRequest() = default ;
    CreateScheduledTaskShrinkRequest& operator=(const CreateScheduledTaskShrinkRequest &) = default ;
    CreateScheduledTaskShrinkRequest& operator=(CreateScheduledTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->descriptionShrink_ == nullptr && this->digitalEmployeeNameShrink_ == nullptr && this->isOpen_ == nullptr && this->model_ == nullptr && this->name_ == nullptr
        && this->segmentsShrink_ == nullptr && this->taskDetailShrink_ == nullptr && this->tenantId_ == nullptr && this->triggerConfigShrink_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline CreateScheduledTaskShrinkRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // descriptionShrink Field Functions 
    bool hasDescriptionShrink() const { return this->descriptionShrink_ != nullptr;};
    void deleteDescriptionShrink() { this->descriptionShrink_ = nullptr;};
    inline string getDescriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(descriptionShrink_, "") };
    inline CreateScheduledTaskShrinkRequest& setDescriptionShrink(string descriptionShrink) { DARABONBA_PTR_SET_VALUE(descriptionShrink_, descriptionShrink) };


    // digitalEmployeeNameShrink Field Functions 
    bool hasDigitalEmployeeNameShrink() const { return this->digitalEmployeeNameShrink_ != nullptr;};
    void deleteDigitalEmployeeNameShrink() { this->digitalEmployeeNameShrink_ = nullptr;};
    inline string getDigitalEmployeeNameShrink() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeNameShrink_, "") };
    inline CreateScheduledTaskShrinkRequest& setDigitalEmployeeNameShrink(string digitalEmployeeNameShrink) { DARABONBA_PTR_SET_VALUE(digitalEmployeeNameShrink_, digitalEmployeeNameShrink) };


    // isOpen Field Functions 
    bool hasIsOpen() const { return this->isOpen_ != nullptr;};
    void deleteIsOpen() { this->isOpen_ = nullptr;};
    inline bool getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
    inline CreateScheduledTaskShrinkRequest& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateScheduledTaskShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateScheduledTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // segmentsShrink Field Functions 
    bool hasSegmentsShrink() const { return this->segmentsShrink_ != nullptr;};
    void deleteSegmentsShrink() { this->segmentsShrink_ = nullptr;};
    inline string getSegmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(segmentsShrink_, "") };
    inline CreateScheduledTaskShrinkRequest& setSegmentsShrink(string segmentsShrink) { DARABONBA_PTR_SET_VALUE(segmentsShrink_, segmentsShrink) };


    // taskDetailShrink Field Functions 
    bool hasTaskDetailShrink() const { return this->taskDetailShrink_ != nullptr;};
    void deleteTaskDetailShrink() { this->taskDetailShrink_ = nullptr;};
    inline string getTaskDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(taskDetailShrink_, "") };
    inline CreateScheduledTaskShrinkRequest& setTaskDetailShrink(string taskDetailShrink) { DARABONBA_PTR_SET_VALUE(taskDetailShrink_, taskDetailShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateScheduledTaskShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // triggerConfigShrink Field Functions 
    bool hasTriggerConfigShrink() const { return this->triggerConfigShrink_ != nullptr;};
    void deleteTriggerConfigShrink() { this->triggerConfigShrink_ = nullptr;};
    inline string getTriggerConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerConfigShrink_, "") };
    inline CreateScheduledTaskShrinkRequest& setTriggerConfigShrink(string triggerConfigShrink) { DARABONBA_PTR_SET_VALUE(triggerConfigShrink_, triggerConfigShrink) };


  protected:
    // 所属协作群组 ID（如 cg_101）；传入时创建群空间任务（调用者需为有效群成员），为空创建个人任务
    shared_ptr<string> collaborationGroupId_ {};
    shared_ptr<string> descriptionShrink_ {};
    // 数字员工名称列表
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    // 是否公开访问
    shared_ptr<bool> isOpen_ {};
    // 执行模型档位，不传默认 standard
    shared_ptr<string> model_ {};
    // 文件名
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> segmentsShrink_ {};
    shared_ptr<string> taskDetailShrink_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> triggerConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
