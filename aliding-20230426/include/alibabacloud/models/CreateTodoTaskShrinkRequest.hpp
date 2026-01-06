// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(actionList, actionListShrink_);
      DARABONBA_PTR_TO_JSON(contentFieldList, contentFieldListShrink_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrlShrink_);
      DARABONBA_PTR_TO_JSON(dueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(executorIds, executorIdsShrink_);
      DARABONBA_PTR_TO_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_TO_JSON(notifyConfigs, notifyConfigsShrink_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(participantIds, participantIdsShrink_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(remindNotifyConfigs, remindNotifyConfigsShrink_);
      DARABONBA_PTR_TO_JSON(reminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(actionList, actionListShrink_);
      DARABONBA_PTR_FROM_JSON(contentFieldList, contentFieldListShrink_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrlShrink_);
      DARABONBA_PTR_FROM_JSON(dueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(executorIds, executorIdsShrink_);
      DARABONBA_PTR_FROM_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_FROM_JSON(notifyConfigs, notifyConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(participantIds, participantIdsShrink_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(remindNotifyConfigs, remindNotifyConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(reminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
    };
    CreateTodoTaskShrinkRequest() = default ;
    CreateTodoTaskShrinkRequest(const CreateTodoTaskShrinkRequest &) = default ;
    CreateTodoTaskShrinkRequest(CreateTodoTaskShrinkRequest &&) = default ;
    CreateTodoTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskShrinkRequest() = default ;
    CreateTodoTaskShrinkRequest& operator=(const CreateTodoTaskShrinkRequest &) = default ;
    CreateTodoTaskShrinkRequest& operator=(CreateTodoTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->actionListShrink_ == nullptr && this->contentFieldListShrink_ == nullptr && this->creatorId_ == nullptr && this->description_ == nullptr && this->detailUrlShrink_ == nullptr
        && this->dueTime_ == nullptr && this->executorIdsShrink_ == nullptr && this->isOnlyShowExecutor_ == nullptr && this->notifyConfigsShrink_ == nullptr && this->operatorId_ == nullptr
        && this->participantIdsShrink_ == nullptr && this->priority_ == nullptr && this->remindNotifyConfigsShrink_ == nullptr && this->reminderTimeStamp_ == nullptr && this->sourceId_ == nullptr
        && this->subject_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // actionListShrink Field Functions 
    bool hasActionListShrink() const { return this->actionListShrink_ != nullptr;};
    void deleteActionListShrink() { this->actionListShrink_ = nullptr;};
    inline string getActionListShrink() const { DARABONBA_PTR_GET_DEFAULT(actionListShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setActionListShrink(string actionListShrink) { DARABONBA_PTR_SET_VALUE(actionListShrink_, actionListShrink) };


    // contentFieldListShrink Field Functions 
    bool hasContentFieldListShrink() const { return this->contentFieldListShrink_ != nullptr;};
    void deleteContentFieldListShrink() { this->contentFieldListShrink_ = nullptr;};
    inline string getContentFieldListShrink() const { DARABONBA_PTR_GET_DEFAULT(contentFieldListShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setContentFieldListShrink(string contentFieldListShrink) { DARABONBA_PTR_SET_VALUE(contentFieldListShrink_, contentFieldListShrink) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTodoTaskShrinkRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTodoTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrlShrink Field Functions 
    bool hasDetailUrlShrink() const { return this->detailUrlShrink_ != nullptr;};
    void deleteDetailUrlShrink() { this->detailUrlShrink_ = nullptr;};
    inline string getDetailUrlShrink() const { DARABONBA_PTR_GET_DEFAULT(detailUrlShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setDetailUrlShrink(string detailUrlShrink) { DARABONBA_PTR_SET_VALUE(detailUrlShrink_, detailUrlShrink) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreateTodoTaskShrinkRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIdsShrink Field Functions 
    bool hasExecutorIdsShrink() const { return this->executorIdsShrink_ != nullptr;};
    void deleteExecutorIdsShrink() { this->executorIdsShrink_ = nullptr;};
    inline string getExecutorIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(executorIdsShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setExecutorIdsShrink(string executorIdsShrink) { DARABONBA_PTR_SET_VALUE(executorIdsShrink_, executorIdsShrink) };


    // isOnlyShowExecutor Field Functions 
    bool hasIsOnlyShowExecutor() const { return this->isOnlyShowExecutor_ != nullptr;};
    void deleteIsOnlyShowExecutor() { this->isOnlyShowExecutor_ = nullptr;};
    inline bool getIsOnlyShowExecutor() const { DARABONBA_PTR_GET_DEFAULT(isOnlyShowExecutor_, false) };
    inline CreateTodoTaskShrinkRequest& setIsOnlyShowExecutor(bool isOnlyShowExecutor) { DARABONBA_PTR_SET_VALUE(isOnlyShowExecutor_, isOnlyShowExecutor) };


    // notifyConfigsShrink Field Functions 
    bool hasNotifyConfigsShrink() const { return this->notifyConfigsShrink_ != nullptr;};
    void deleteNotifyConfigsShrink() { this->notifyConfigsShrink_ = nullptr;};
    inline string getNotifyConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(notifyConfigsShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setNotifyConfigsShrink(string notifyConfigsShrink) { DARABONBA_PTR_SET_VALUE(notifyConfigsShrink_, notifyConfigsShrink) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline CreateTodoTaskShrinkRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // participantIdsShrink Field Functions 
    bool hasParticipantIdsShrink() const { return this->participantIdsShrink_ != nullptr;};
    void deleteParticipantIdsShrink() { this->participantIdsShrink_ = nullptr;};
    inline string getParticipantIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(participantIdsShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setParticipantIdsShrink(string participantIdsShrink) { DARABONBA_PTR_SET_VALUE(participantIdsShrink_, participantIdsShrink) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTodoTaskShrinkRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // remindNotifyConfigsShrink Field Functions 
    bool hasRemindNotifyConfigsShrink() const { return this->remindNotifyConfigsShrink_ != nullptr;};
    void deleteRemindNotifyConfigsShrink() { this->remindNotifyConfigsShrink_ = nullptr;};
    inline string getRemindNotifyConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(remindNotifyConfigsShrink_, "") };
    inline CreateTodoTaskShrinkRequest& setRemindNotifyConfigsShrink(string remindNotifyConfigsShrink) { DARABONBA_PTR_SET_VALUE(remindNotifyConfigsShrink_, remindNotifyConfigsShrink) };


    // reminderTimeStamp Field Functions 
    bool hasReminderTimeStamp() const { return this->reminderTimeStamp_ != nullptr;};
    void deleteReminderTimeStamp() { this->reminderTimeStamp_ = nullptr;};
    inline int64_t getReminderTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(reminderTimeStamp_, 0L) };
    inline CreateTodoTaskShrinkRequest& setReminderTimeStamp(int64_t reminderTimeStamp) { DARABONBA_PTR_SET_VALUE(reminderTimeStamp_, reminderTimeStamp) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateTodoTaskShrinkRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateTodoTaskShrinkRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<string> actionListShrink_ {};
    shared_ptr<string> contentFieldListShrink_ {};
    shared_ptr<string> creatorId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> detailUrlShrink_ {};
    shared_ptr<int64_t> dueTime_ {};
    shared_ptr<string> executorIdsShrink_ {};
    shared_ptr<bool> isOnlyShowExecutor_ {};
    shared_ptr<string> notifyConfigsShrink_ {};
    shared_ptr<string> operatorId_ {};
    shared_ptr<string> participantIdsShrink_ {};
    shared_ptr<int32_t> priority_ {};
    shared_ptr<string> remindNotifyConfigsShrink_ {};
    shared_ptr<int64_t> reminderTimeStamp_ {};
    shared_ptr<string> sourceId_ {};
    // This parameter is required.
    shared_ptr<string> subject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
