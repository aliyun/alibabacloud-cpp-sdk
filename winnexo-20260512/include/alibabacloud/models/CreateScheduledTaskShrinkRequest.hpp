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
      DARABONBA_PTR_TO_JSON(visibility, visibility_);
      DARABONBA_PTR_TO_JSON(visibleMemberUserIds, visibleMemberUserIdsShrink_);
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
      DARABONBA_PTR_FROM_JSON(visibility, visibility_);
      DARABONBA_PTR_FROM_JSON(visibleMemberUserIds, visibleMemberUserIdsShrink_);
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
        && this->segmentsShrink_ == nullptr && this->taskDetailShrink_ == nullptr && this->tenantId_ == nullptr && this->triggerConfigShrink_ == nullptr && this->visibility_ == nullptr
        && this->visibleMemberUserIdsShrink_ == nullptr; };
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


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline string getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, "") };
    inline CreateScheduledTaskShrinkRequest& setVisibility(string visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


    // visibleMemberUserIdsShrink Field Functions 
    bool hasVisibleMemberUserIdsShrink() const { return this->visibleMemberUserIdsShrink_ != nullptr;};
    void deleteVisibleMemberUserIdsShrink() { this->visibleMemberUserIdsShrink_ = nullptr;};
    inline string getVisibleMemberUserIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(visibleMemberUserIdsShrink_, "") };
    inline CreateScheduledTaskShrinkRequest& setVisibleMemberUserIdsShrink(string visibleMemberUserIdsShrink) { DARABONBA_PTR_SET_VALUE(visibleMemberUserIdsShrink_, visibleMemberUserIdsShrink) };


  protected:
    // The ID of the collaboration group (such as cg_101). If specified, a group space task is created (the caller must be a valid group member). If empty, a personal task is created.
    shared_ptr<string> collaborationGroupId_ {};
    // The description of the to-do card type.
    shared_ptr<string> descriptionShrink_ {};
    // The name of the current effective digital employee. This parameter is empty if not configured.
    shared_ptr<string> digitalEmployeeNameShrink_ {};
    // Specifies whether public access is enabled.
    shared_ptr<bool> isOpen_ {};
    // The large model used by the assistant. An empty value indicates that DingTalk automatically selects the model.
    shared_ptr<string> model_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The site ID.
    shared_ptr<string> segmentsShrink_ {};
    // The task details.
    shared_ptr<string> taskDetailShrink_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
    // The trigger configuration. The configuration varies depending on the trigger type. For the specific format, refer to the following data structures:
    // 
    //   - OSS trigger: See [OSSTriggerConfig](https://help.aliyun.com/document_detail/415697.html).
    //   - Simple Log Service trigger: See [LogTriggerConfig](https://help.aliyun.com/document_detail/415694.html).
    //   - Time trigger: See [TimeTriggerConfig](https://help.aliyun.com/document_detail/415712.html).
    //   - HTTP trigger: See [HTTPTriggerConfig](https://help.aliyun.com/document_detail/415685.html).
    //   - Tablestore trigger: You only need to specify the complete **SourceArn** parameter. No additional configuration is required. Set the value to an empty object {}.
    //   - CDN event trigger: See [CDNEventsTriggerConfig](https://help.aliyun.com/document_detail/415674.html).
    //   - MNS topic trigger: See [MnsTopicTriggerConfig](https://help.aliyun.com/document_detail/415695.html).
    //   - EventBridge trigger: See [EventBridgeTriggerConfig](https://help.aliyun.com/document_detail/2508622.html).
    shared_ptr<string> triggerConfigShrink_ {};
    // The visibility scope of the group task. Valid values: PRIVATE (visible only to the creator and group owner), COLLABORATIVE (visible to specified collaborators), and PUBLIC (visible to all group members). Default value for group tasks: PRIVATE. This parameter is ignored for personal tasks.
    shared_ptr<string> visibility_ {};
    // The list of collaborator user IDs. This parameter takes effect only when visibility is set to COLLABORATIVE. It is ignored for other visibility levels. A maximum of 1000 IDs are supported. The task creator and group creator do not need to be included (covered by the authentication layer). This parameter is ignored for personal tasks.
    shared_ptr<string> visibleMemberUserIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
