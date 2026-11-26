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
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(autoPreference, autoPreference_);
      DARABONBA_PTR_TO_JSON(description, descriptionShrink_);
      DARABONBA_PTR_TO_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_TO_JSON(isOpen, isOpen_);
      DARABONBA_PTR_TO_JSON(model, model_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(outputMode, outputMode_);
      DARABONBA_PTR_TO_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_TO_JSON(taskDetail, taskDetailShrink_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(triggerConfig, triggerConfigShrink_);
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
      DARABONBA_PTR_TO_JSON(visibleMemberUserIds, visibleMemberUserIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduledTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(autoPreference, autoPreference_);
      DARABONBA_PTR_FROM_JSON(description, descriptionShrink_);
      DARABONBA_PTR_FROM_JSON(digitalEmployeeName, digitalEmployeeNameShrink_);
      DARABONBA_PTR_FROM_JSON(isOpen, isOpen_);
      DARABONBA_PTR_FROM_JSON(model, model_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(outputMode, outputMode_);
      DARABONBA_PTR_FROM_JSON(segments, segmentsShrink_);
      DARABONBA_PTR_FROM_JSON(taskDetail, taskDetailShrink_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(triggerConfig, triggerConfigShrink_);
      DARABONBA_PTR_FROM_JSON(visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(visibleMemberUserIds, visibleMemberUserIdsShrink_);
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
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->autoPreference_ == nullptr && this->descriptionShrink_ == nullptr && this->digitalEmployeeNameShrink_ == nullptr && this->isOpen_ == nullptr && this->model_ == nullptr
        && this->name_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->outputMode_ == nullptr && this->segmentsShrink_ == nullptr
        && this->taskDetailShrink_ == nullptr && this->taskId_ == nullptr && this->tenantId_ == nullptr && this->triggerConfigShrink_ == nullptr && this->visibility_ == nullptr
        && this->visibleMemberUserIdsShrink_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline UpdateScheduledTaskShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // autoPreference Field Functions 
    bool hasAutoPreference() const { return this->autoPreference_ != nullptr;};
    void deleteAutoPreference() { this->autoPreference_ = nullptr;};
    inline string getAutoPreference() const { DARABONBA_PTR_GET_DEFAULT(autoPreference_, "") };
    inline UpdateScheduledTaskShrinkRequest& setAutoPreference(string autoPreference) { DARABONBA_PTR_SET_VALUE(autoPreference_, autoPreference) };


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


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline UpdateScheduledTaskShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline UpdateScheduledTaskShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // outputMode Field Functions 
    bool hasOutputMode() const { return this->outputMode_ != nullptr;};
    void deleteOutputMode() { this->outputMode_ = nullptr;};
    inline string getOutputMode() const { DARABONBA_PTR_GET_DEFAULT(outputMode_, "") };
    inline UpdateScheduledTaskShrinkRequest& setOutputMode(string outputMode) { DARABONBA_PTR_SET_VALUE(outputMode_, outputMode) };


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


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline UpdateScheduledTaskShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibleMemberUserIdsShrink Field Functions 
    bool hasVisibleMemberUserIdsShrink() const { return this->visibleMemberUserIdsShrink_ != nullptr;};
    void deleteVisibleMemberUserIdsShrink() { this->visibleMemberUserIdsShrink_ = nullptr;};
    inline string getVisibleMemberUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(visibleMemberUserIdsShrink_, "") };
    inline UpdateScheduledTaskShrinkRequest& setVisibleMemberUserIdsShrink(string visibleMemberUserIdsShrink) { DARABONBA_PTR_SET_VALUE(visibleMemberUserIdsShrink_, visibleMemberUserIdsShrink) };


  protected:
    // The platform application token issued by the console. If specified, the task is executed as the user specified by opsUserId or opsUserCode.
    shared_ptr<string> appToken_ {};
    // The AUTO preference. Valid values: none (default), performance (performance first), and credit (cost first). If omitted or set to null, the current value is retained. If set to an empty string, the value is reset to none. For fixed models, this parameter can be saved but does not take effect.
    shared_ptr<string> autoPreference_ {};
    // The description.
    shared_ptr<string> descriptionShrink_ {};
    // The list of digital employee names.
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    // Specifies whether public access is enabled.
    shared_ptr<bool> isOpen_ {};
    // The execution model tier. If not specified, the model tier is not updated.
    shared_ptr<string> model_ {};
    // The file name.
    shared_ptr<string> name_ {};
    // The proxy user code, which is unique within the tenant. This parameter is used only when the application credential is configured as source_uid.
    shared_ptr<string> opsUserCode_ {};
    // The proxy user ID, which is the WINNEXO platform user ID. This parameter is used only when the application credential is configured as winnexo_uid.
    shared_ptr<string> opsUserId_ {};
    // The output conversation mode. If not specified, the current configuration is retained.
    shared_ptr<string> outputMode_ {};
    // The segments.
    shared_ptr<string> segmentsShrink_ {};
    // The task details.
    shared_ptr<string> taskDetailShrink_ {};
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The trigger configuration. The configuration varies based on the trigger type.
    shared_ptr<string> triggerConfigShrink_ {};
    // The visibility scope for group tasks. Valid values: PRIVATE (visible only to the creator and group owner), COLLABORATIVE (visible to specified collaborators), and PUBLIC (visible to all group members). If not specified, the visibility scope is not updated. This parameter is ignored for personal tasks.
    shared_ptr<string> visibility_ {};
    // The full replacement list of collaborators. This parameter takes effect only when visibility is set to COLLABORATIVE. A maximum of 1,000 members can be specified. If the visibility is changed from COLLABORATIVE to another value, the list is cleared. If not specified, the members are not updated. The task creator and group creator do not need to be specified because they are covered by the authentication layer. This parameter is ignored for personal tasks.
    shared_ptr<string> visibleMemberUserIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
