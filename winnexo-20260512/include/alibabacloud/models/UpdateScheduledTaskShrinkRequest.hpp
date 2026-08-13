// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULEDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULEDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateScheduledTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, descriptionShrink_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_TO_JSON(taskDetail, taskDetailShrink_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfigShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, descriptionShrink_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_FROM_JSON(taskDetail, taskDetailShrink_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfigShrink_);
    };
    UpdateScheduledTaskShrinkRequest() = default ;
    UpdateScheduledTaskShrinkRequest(const UpdateScheduledTaskShrinkRequest &) = default ;
    UpdateScheduledTaskShrinkRequest(UpdateScheduledTaskShrinkRequest &&) = default ;
    UpdateScheduledTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduledTaskShrinkRequest() = default ;
    UpdateScheduledTaskShrinkRequest& operator=(const UpdateScheduledTaskShrinkRequest &) = default ;
    UpdateScheduledTaskShrinkRequest& operator=(UpdateScheduledTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->descriptionShrink_ == nullptr
        && this->digitalEmployeeNameShrink_ == nullptr && this->isOpen_ == nullptr && this->model_ == nullptr && this->name_ == nullptr && this->segmentsShrink_ == nullptr
        && this->taskDetailShrink_ == nullptr && this->taskId_ == nullptr && this->tenantId_ == nullptr && this->triggerConfigShrink_ == nullptr; };
    // descriptionShrink Field Functions 
    bool hasDescriptionShrink() const { return this->descriptionShrink_ != nullptr;};
    void deleteDescriptionShrink() { this->descriptionShrink_ = nullptr;};
    inline string getDescriptionShrink() const { DARABONBA_PTR_GET_DEFAULT(descriptionShrink_, "") };
    inline UpdateScheduledTaskShrinkRequest& setDescriptionShrink(string descriptionShrink) { DARABONBA_PTR_SET_VALUE(descriptionShrink_, descriptionShrink) };


    // digitalEmployeeNameShrink Field Functions 
    bool hasDigitalEmployeeNameShrink() const { return this->digitalEmployeeNameShrink_ != nullptr;};
    void deleteDigitalEmployeeNameShrink() { this->digitalEmployeeNameShrink_ = nullptr;};
    inline string getDigitalEmployeeNameShrink() const { DARABONBA_PTR_GET_DEFAULT(digitalEmployeeNameShrink_, "") };
    inline UpdateScheduledTaskShrinkRequest& setDigitalEmployeeNameShrink(string digitalEmployeeNameShrink) { DARABONBA_PTR_SET_VALUE(digitalEmployeeNameShrink_, digitalEmployeeNameShrink) };


    // isOpen Field Functions 
    bool hasIsOpen() const { return this->isOpen_ != nullptr;};
    void deleteIsOpen() { this->isOpen_ = nullptr;};
    inline bool getIsOpen() const { DARABONBA_PTR_GET_DEFAULT(isOpen_, false) };
    inline UpdateScheduledTaskShrinkRequest& setIsOpen(bool isOpen) { DARABONBA_PTR_SET_VALUE(isOpen_, isOpen) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline UpdateScheduledTaskShrinkRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateScheduledTaskShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // segmentsShrink Field Functions 
    bool hasSegmentsShrink() const { return this->segmentsShrink_ != nullptr;};
    void deleteSegmentsShrink() { this->segmentsShrink_ = nullptr;};
    inline string getSegmentsShrink() const { DARABONBA_PTR_GET_DEFAULT(segmentsShrink_, "") };
    inline UpdateScheduledTaskShrinkRequest& setSegmentsShrink(string segmentsShrink) { DARABONBA_PTR_SET_VALUE(segmentsShrink_, segmentsShrink) };


    // taskDetailShrink Field Functions 
    bool hasTaskDetailShrink() const { return this->taskDetailShrink_ != nullptr;};
    void deleteTaskDetailShrink() { this->taskDetailShrink_ = nullptr;};
    inline string getTaskDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(taskDetailShrink_, "") };
    inline UpdateScheduledTaskShrinkRequest& setTaskDetailShrink(string taskDetailShrink) { DARABONBA_PTR_SET_VALUE(taskDetailShrink_, taskDetailShrink) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateScheduledTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline UpdateScheduledTaskShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // triggerConfigShrink Field Functions 
    bool hasTriggerConfigShrink() const { return this->triggerConfigShrink_ != nullptr;};
    void deleteTriggerConfigShrink() { this->triggerConfigShrink_ = nullptr;};
    inline string getTriggerConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerConfigShrink_, "") };
    inline UpdateScheduledTaskShrinkRequest& setTriggerConfigShrink(string triggerConfigShrink) { DARABONBA_PTR_SET_VALUE(triggerConfigShrink_, triggerConfigShrink) };


  protected:
    shared_ptr<string> descriptionShrink_ {};
    // 数字员工名称列表
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    // 是否公开访问
    shared_ptr<bool> isOpen_ {};
    // 执行模型档位；不传则不更新
    shared_ptr<string> model_ {};
    // 文件名
    shared_ptr<string> name_ {};
    shared_ptr<string> segmentsShrink_ {};
    shared_ptr<string> taskDetailShrink_ {};
    // 任务 ID
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
    shared_ptr<string> triggerConfigShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
