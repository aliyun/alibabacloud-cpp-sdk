// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETODOTASKREQUEST_HPP_
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
  class UpdateTodoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTodoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(done, done_);
      DARABONBA_PTR_TO_JSON(dueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(executorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(participantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTodoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(done, done_);
      DARABONBA_PTR_FROM_JSON(dueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(executorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(participantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    UpdateTodoTaskRequest() = default ;
    UpdateTodoTaskRequest(const UpdateTodoTaskRequest &) = default ;
    UpdateTodoTaskRequest(UpdateTodoTaskRequest &&) = default ;
    UpdateTodoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTodoTaskRequest() = default ;
    UpdateTodoTaskRequest& operator=(const UpdateTodoTaskRequest &) = default ;
    UpdateTodoTaskRequest& operator=(UpdateTodoTaskRequest &&) = default ;
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

    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && this->description_ == nullptr && this->done_ == nullptr && this->dueTime_ == nullptr && this->executorIds_ == nullptr && this->participantIds_ == nullptr
        && this->subject_ == nullptr && this->taskId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateTodoTaskRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateTodoTaskRequest::TenantContext) };
    inline UpdateTodoTaskRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateTodoTaskRequest::TenantContext) };
    inline UpdateTodoTaskRequest& setTenantContext(const UpdateTodoTaskRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateTodoTaskRequest& setTenantContext(UpdateTodoTaskRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTodoTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline bool getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, false) };
    inline UpdateTodoTaskRequest& setDone(bool done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline UpdateTodoTaskRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & getExecutorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> getExecutorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline UpdateTodoTaskRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline UpdateTodoTaskRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & getParticipantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> getParticipantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline UpdateTodoTaskRequest& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline UpdateTodoTaskRequest& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline UpdateTodoTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateTodoTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<UpdateTodoTaskRequest::TenantContext> tenantContext_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> done_ {};
    shared_ptr<int64_t> dueTime_ {};
    shared_ptr<vector<string>> executorIds_ {};
    shared_ptr<vector<string>> participantIds_ {};
    shared_ptr<string> subject_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
