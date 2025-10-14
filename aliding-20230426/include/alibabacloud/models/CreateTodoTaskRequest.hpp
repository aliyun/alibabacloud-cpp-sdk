// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETODOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateTodoTaskRequestTenantContext.hpp>
#include <vector>
#include <alibabacloud/models/CreateTodoTaskRequestActionList.hpp>
#include <alibabacloud/models/CreateTodoTaskRequestContentFieldList.hpp>
#include <alibabacloud/models/CreateTodoTaskRequestDetailUrl.hpp>
#include <alibabacloud/models/CreateTodoTaskRequestNotifyConfigs.hpp>
#include <alibabacloud/models/CreateTodoTaskRequestRemindNotifyConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateTodoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTodoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(actionList, actionList_);
      DARABONBA_PTR_TO_JSON(contentFieldList, contentFieldList_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_TO_JSON(dueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(executorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_TO_JSON(notifyConfigs, notifyConfigs_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(participantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(remindNotifyConfigs, remindNotifyConfigs_);
      DARABONBA_PTR_TO_JSON(reminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTodoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(actionList, actionList_);
      DARABONBA_PTR_FROM_JSON(contentFieldList, contentFieldList_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(detailUrl, detailUrl_);
      DARABONBA_PTR_FROM_JSON(dueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(executorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(isOnlyShowExecutor, isOnlyShowExecutor_);
      DARABONBA_PTR_FROM_JSON(notifyConfigs, notifyConfigs_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(participantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(remindNotifyConfigs, remindNotifyConfigs_);
      DARABONBA_PTR_FROM_JSON(reminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
    };
    CreateTodoTaskRequest() = default ;
    CreateTodoTaskRequest(const CreateTodoTaskRequest &) = default ;
    CreateTodoTaskRequest(CreateTodoTaskRequest &&) = default ;
    CreateTodoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTodoTaskRequest() = default ;
    CreateTodoTaskRequest& operator=(const CreateTodoTaskRequest &) = default ;
    CreateTodoTaskRequest& operator=(CreateTodoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && return this->actionList_ == nullptr && return this->contentFieldList_ == nullptr && return this->creatorId_ == nullptr && return this->description_ == nullptr && return this->detailUrl_ == nullptr
        && return this->dueTime_ == nullptr && return this->executorIds_ == nullptr && return this->isOnlyShowExecutor_ == nullptr && return this->notifyConfigs_ == nullptr && return this->operatorId_ == nullptr
        && return this->participantIds_ == nullptr && return this->priority_ == nullptr && return this->remindNotifyConfigs_ == nullptr && return this->reminderTimeStamp_ == nullptr && return this->sourceId_ == nullptr
        && return this->subject_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateTodoTaskRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateTodoTaskRequestTenantContext) };
    inline CreateTodoTaskRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateTodoTaskRequestTenantContext) };
    inline CreateTodoTaskRequest& setTenantContext(const CreateTodoTaskRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateTodoTaskRequest& setTenantContext(CreateTodoTaskRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // actionList Field Functions 
    bool hasActionList() const { return this->actionList_ != nullptr;};
    void deleteActionList() { this->actionList_ = nullptr;};
    inline const vector<CreateTodoTaskRequestActionList> & actionList() const { DARABONBA_PTR_GET_CONST(actionList_, vector<CreateTodoTaskRequestActionList>) };
    inline vector<CreateTodoTaskRequestActionList> actionList() { DARABONBA_PTR_GET(actionList_, vector<CreateTodoTaskRequestActionList>) };
    inline CreateTodoTaskRequest& setActionList(const vector<CreateTodoTaskRequestActionList> & actionList) { DARABONBA_PTR_SET_VALUE(actionList_, actionList) };
    inline CreateTodoTaskRequest& setActionList(vector<CreateTodoTaskRequestActionList> && actionList) { DARABONBA_PTR_SET_RVALUE(actionList_, actionList) };


    // contentFieldList Field Functions 
    bool hasContentFieldList() const { return this->contentFieldList_ != nullptr;};
    void deleteContentFieldList() { this->contentFieldList_ = nullptr;};
    inline const vector<CreateTodoTaskRequestContentFieldList> & contentFieldList() const { DARABONBA_PTR_GET_CONST(contentFieldList_, vector<CreateTodoTaskRequestContentFieldList>) };
    inline vector<CreateTodoTaskRequestContentFieldList> contentFieldList() { DARABONBA_PTR_GET(contentFieldList_, vector<CreateTodoTaskRequestContentFieldList>) };
    inline CreateTodoTaskRequest& setContentFieldList(const vector<CreateTodoTaskRequestContentFieldList> & contentFieldList) { DARABONBA_PTR_SET_VALUE(contentFieldList_, contentFieldList) };
    inline CreateTodoTaskRequest& setContentFieldList(vector<CreateTodoTaskRequestContentFieldList> && contentFieldList) { DARABONBA_PTR_SET_RVALUE(contentFieldList_, contentFieldList) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline CreateTodoTaskRequest& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTodoTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // detailUrl Field Functions 
    bool hasDetailUrl() const { return this->detailUrl_ != nullptr;};
    void deleteDetailUrl() { this->detailUrl_ = nullptr;};
    inline const CreateTodoTaskRequestDetailUrl & detailUrl() const { DARABONBA_PTR_GET_CONST(detailUrl_, CreateTodoTaskRequestDetailUrl) };
    inline CreateTodoTaskRequestDetailUrl detailUrl() { DARABONBA_PTR_GET(detailUrl_, CreateTodoTaskRequestDetailUrl) };
    inline CreateTodoTaskRequest& setDetailUrl(const CreateTodoTaskRequestDetailUrl & detailUrl) { DARABONBA_PTR_SET_VALUE(detailUrl_, detailUrl) };
    inline CreateTodoTaskRequest& setDetailUrl(CreateTodoTaskRequestDetailUrl && detailUrl) { DARABONBA_PTR_SET_RVALUE(detailUrl_, detailUrl) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreateTodoTaskRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreateTodoTaskRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreateTodoTaskRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // isOnlyShowExecutor Field Functions 
    bool hasIsOnlyShowExecutor() const { return this->isOnlyShowExecutor_ != nullptr;};
    void deleteIsOnlyShowExecutor() { this->isOnlyShowExecutor_ = nullptr;};
    inline bool isOnlyShowExecutor() const { DARABONBA_PTR_GET_DEFAULT(isOnlyShowExecutor_, false) };
    inline CreateTodoTaskRequest& setIsOnlyShowExecutor(bool isOnlyShowExecutor) { DARABONBA_PTR_SET_VALUE(isOnlyShowExecutor_, isOnlyShowExecutor) };


    // notifyConfigs Field Functions 
    bool hasNotifyConfigs() const { return this->notifyConfigs_ != nullptr;};
    void deleteNotifyConfigs() { this->notifyConfigs_ = nullptr;};
    inline const CreateTodoTaskRequestNotifyConfigs & notifyConfigs() const { DARABONBA_PTR_GET_CONST(notifyConfigs_, CreateTodoTaskRequestNotifyConfigs) };
    inline CreateTodoTaskRequestNotifyConfigs notifyConfigs() { DARABONBA_PTR_GET(notifyConfigs_, CreateTodoTaskRequestNotifyConfigs) };
    inline CreateTodoTaskRequest& setNotifyConfigs(const CreateTodoTaskRequestNotifyConfigs & notifyConfigs) { DARABONBA_PTR_SET_VALUE(notifyConfigs_, notifyConfigs) };
    inline CreateTodoTaskRequest& setNotifyConfigs(CreateTodoTaskRequestNotifyConfigs && notifyConfigs) { DARABONBA_PTR_SET_RVALUE(notifyConfigs_, notifyConfigs) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline CreateTodoTaskRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & participantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> participantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline CreateTodoTaskRequest& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline CreateTodoTaskRequest& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTodoTaskRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // remindNotifyConfigs Field Functions 
    bool hasRemindNotifyConfigs() const { return this->remindNotifyConfigs_ != nullptr;};
    void deleteRemindNotifyConfigs() { this->remindNotifyConfigs_ = nullptr;};
    inline const CreateTodoTaskRequestRemindNotifyConfigs & remindNotifyConfigs() const { DARABONBA_PTR_GET_CONST(remindNotifyConfigs_, CreateTodoTaskRequestRemindNotifyConfigs) };
    inline CreateTodoTaskRequestRemindNotifyConfigs remindNotifyConfigs() { DARABONBA_PTR_GET(remindNotifyConfigs_, CreateTodoTaskRequestRemindNotifyConfigs) };
    inline CreateTodoTaskRequest& setRemindNotifyConfigs(const CreateTodoTaskRequestRemindNotifyConfigs & remindNotifyConfigs) { DARABONBA_PTR_SET_VALUE(remindNotifyConfigs_, remindNotifyConfigs) };
    inline CreateTodoTaskRequest& setRemindNotifyConfigs(CreateTodoTaskRequestRemindNotifyConfigs && remindNotifyConfigs) { DARABONBA_PTR_SET_RVALUE(remindNotifyConfigs_, remindNotifyConfigs) };


    // reminderTimeStamp Field Functions 
    bool hasReminderTimeStamp() const { return this->reminderTimeStamp_ != nullptr;};
    void deleteReminderTimeStamp() { this->reminderTimeStamp_ = nullptr;};
    inline int64_t reminderTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(reminderTimeStamp_, 0L) };
    inline CreateTodoTaskRequest& setReminderTimeStamp(int64_t reminderTimeStamp) { DARABONBA_PTR_SET_VALUE(reminderTimeStamp_, reminderTimeStamp) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateTodoTaskRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateTodoTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


  protected:
    std::shared_ptr<CreateTodoTaskRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<vector<CreateTodoTaskRequestActionList>> actionList_ = nullptr;
    std::shared_ptr<vector<CreateTodoTaskRequestContentFieldList>> contentFieldList_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<CreateTodoTaskRequestDetailUrl> detailUrl_ = nullptr;
    std::shared_ptr<int64_t> dueTime_ = nullptr;
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<bool> isOnlyShowExecutor_ = nullptr;
    std::shared_ptr<CreateTodoTaskRequestNotifyConfigs> notifyConfigs_ = nullptr;
    std::shared_ptr<string> operatorId_ = nullptr;
    std::shared_ptr<vector<string>> participantIds_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<CreateTodoTaskRequestRemindNotifyConfigs> remindNotifyConfigs_ = nullptr;
    std::shared_ptr<int64_t> reminderTimeStamp_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
