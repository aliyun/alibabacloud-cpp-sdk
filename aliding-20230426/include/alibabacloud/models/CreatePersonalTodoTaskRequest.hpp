// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPERSONALTODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPERSONALTODOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class NotifyConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NotifyConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(DingNotify, dingNotify_);
      };
      friend void from_json(const Darabonba::Json& j, NotifyConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(DingNotify, dingNotify_);
      };
      NotifyConfigs() = default ;
      NotifyConfigs(const NotifyConfigs &) = default ;
      NotifyConfigs(NotifyConfigs &&) = default ;
      NotifyConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NotifyConfigs() = default ;
      NotifyConfigs& operator=(const NotifyConfigs &) = default ;
      NotifyConfigs& operator=(NotifyConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dingNotify_ == nullptr; };
      // dingNotify Field Functions 
      bool hasDingNotify() const { return this->dingNotify_ != nullptr;};
      void deleteDingNotify() { this->dingNotify_ = nullptr;};
      inline string getDingNotify() const { DARABONBA_PTR_GET_DEFAULT(dingNotify_, "") };
      inline NotifyConfigs& setDingNotify(string dingNotify) { DARABONBA_PTR_SET_VALUE(dingNotify_, dingNotify) };


    protected:
      shared_ptr<string> dingNotify_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->dueTime_ == nullptr && this->executorIds_ == nullptr && this->notifyConfigs_ == nullptr && this->participantIds_ == nullptr && this->reminderTimeStamp_ == nullptr
        && this->subject_ == nullptr && this->tenantContext_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePersonalTodoTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreatePersonalTodoTaskRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreatePersonalTodoTaskRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreatePersonalTodoTaskRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // notifyConfigs Field Functions 
    bool hasNotifyConfigs() const { return this->notifyConfigs_ != nullptr;};
    void deleteNotifyConfigs() { this->notifyConfigs_ = nullptr;};
    inline const CreatePersonalTodoTaskRequest::NotifyConfigs & getNotifyConfigs() const { DARABONBA_PTR_GET_CONST(notifyConfigs_, CreatePersonalTodoTaskRequest::NotifyConfigs) };
    inline CreatePersonalTodoTaskRequest::NotifyConfigs getNotifyConfigs() { DARABONBA_PTR_GET(notifyConfigs_, CreatePersonalTodoTaskRequest::NotifyConfigs) };
    inline CreatePersonalTodoTaskRequest& setNotifyConfigs(const CreatePersonalTodoTaskRequest::NotifyConfigs & notifyConfigs) { DARABONBA_PTR_SET_VALUE(notifyConfigs_, notifyConfigs) };
    inline CreatePersonalTodoTaskRequest& setNotifyConfigs(CreatePersonalTodoTaskRequest::NotifyConfigs && notifyConfigs) { DARABONBA_PTR_SET_RVALUE(notifyConfigs_, notifyConfigs) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & getParticipantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> getParticipantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline CreatePersonalTodoTaskRequest& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline CreatePersonalTodoTaskRequest& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // reminderTimeStamp Field Functions 
    bool hasReminderTimeStamp() const { return this->reminderTimeStamp_ != nullptr;};
    void deleteReminderTimeStamp() { this->reminderTimeStamp_ = nullptr;};
    inline int64_t getReminderTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(reminderTimeStamp_, 0L) };
    inline CreatePersonalTodoTaskRequest& setReminderTimeStamp(int64_t reminderTimeStamp) { DARABONBA_PTR_SET_VALUE(reminderTimeStamp_, reminderTimeStamp) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreatePersonalTodoTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreatePersonalTodoTaskRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreatePersonalTodoTaskRequest::TenantContext) };
    inline CreatePersonalTodoTaskRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, CreatePersonalTodoTaskRequest::TenantContext) };
    inline CreatePersonalTodoTaskRequest& setTenantContext(const CreatePersonalTodoTaskRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreatePersonalTodoTaskRequest& setTenantContext(CreatePersonalTodoTaskRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<int64_t> dueTime_ {};
    // This parameter is required.
    shared_ptr<vector<string>> executorIds_ {};
    shared_ptr<CreatePersonalTodoTaskRequest::NotifyConfigs> notifyConfigs_ {};
    shared_ptr<vector<string>> participantIds_ {};
    shared_ptr<int64_t> reminderTimeStamp_ {};
    // This parameter is required.
    shared_ptr<string> subject_ {};
    shared_ptr<CreatePersonalTodoTaskRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
