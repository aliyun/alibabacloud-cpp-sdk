// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALTODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALTODOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePersonalTodoTaskRequestNotifyConfigs.hpp>
#include <alibabacloud/models/CreatePersonalTodoTaskRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreatePersonalTodoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePersonalTodoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(NotifyConfigs, notifyConfigs_);
      DARABONBA_PTR_TO_JSON(ParticipantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(ReminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePersonalTodoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(NotifyConfigs, notifyConfigs_);
      DARABONBA_PTR_FROM_JSON(ParticipantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(ReminderTimeStamp, reminderTimeStamp_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    CreatePersonalTodoTaskRequest() = default ;
    CreatePersonalTodoTaskRequest(const CreatePersonalTodoTaskRequest &) = default ;
    CreatePersonalTodoTaskRequest(CreatePersonalTodoTaskRequest &&) = default ;
    CreatePersonalTodoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePersonalTodoTaskRequest() = default ;
    CreatePersonalTodoTaskRequest& operator=(const CreatePersonalTodoTaskRequest &) = default ;
    CreatePersonalTodoTaskRequest& operator=(CreatePersonalTodoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->dueTime_ == nullptr && return this->executorIds_ == nullptr && return this->notifyConfigs_ == nullptr && return this->participantIds_ == nullptr && return this->reminderTimeStamp_ == nullptr
        && return this->subject_ == nullptr && return this->tenantContext_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePersonalTodoTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreatePersonalTodoTaskRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreatePersonalTodoTaskRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreatePersonalTodoTaskRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // notifyConfigs Field Functions 
    bool hasNotifyConfigs() const { return this->notifyConfigs_ != nullptr;};
    void deleteNotifyConfigs() { this->notifyConfigs_ = nullptr;};
    inline const CreatePersonalTodoTaskRequestNotifyConfigs & notifyConfigs() const { DARABONBA_PTR_GET_CONST(notifyConfigs_, CreatePersonalTodoTaskRequestNotifyConfigs) };
    inline CreatePersonalTodoTaskRequestNotifyConfigs notifyConfigs() { DARABONBA_PTR_GET(notifyConfigs_, CreatePersonalTodoTaskRequestNotifyConfigs) };
    inline CreatePersonalTodoTaskRequest& setNotifyConfigs(const CreatePersonalTodoTaskRequestNotifyConfigs & notifyConfigs) { DARABONBA_PTR_SET_VALUE(notifyConfigs_, notifyConfigs) };
    inline CreatePersonalTodoTaskRequest& setNotifyConfigs(CreatePersonalTodoTaskRequestNotifyConfigs && notifyConfigs) { DARABONBA_PTR_SET_RVALUE(notifyConfigs_, notifyConfigs) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & participantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> participantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline CreatePersonalTodoTaskRequest& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline CreatePersonalTodoTaskRequest& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // reminderTimeStamp Field Functions 
    bool hasReminderTimeStamp() const { return this->reminderTimeStamp_ != nullptr;};
    void deleteReminderTimeStamp() { this->reminderTimeStamp_ = nullptr;};
    inline int64_t reminderTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(reminderTimeStamp_, 0L) };
    inline CreatePersonalTodoTaskRequest& setReminderTimeStamp(int64_t reminderTimeStamp) { DARABONBA_PTR_SET_VALUE(reminderTimeStamp_, reminderTimeStamp) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreatePersonalTodoTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreatePersonalTodoTaskRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreatePersonalTodoTaskRequestTenantContext) };
    inline CreatePersonalTodoTaskRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreatePersonalTodoTaskRequestTenantContext) };
    inline CreatePersonalTodoTaskRequest& setTenantContext(const CreatePersonalTodoTaskRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreatePersonalTodoTaskRequest& setTenantContext(CreatePersonalTodoTaskRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> dueTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<CreatePersonalTodoTaskRequestNotifyConfigs> notifyConfigs_ = nullptr;
    std::shared_ptr<vector<string>> participantIds_ = nullptr;
    std::shared_ptr<int64_t> reminderTimeStamp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<CreatePersonalTodoTaskRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
