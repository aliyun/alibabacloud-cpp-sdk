// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETODOTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETODOTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateTodoTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTodoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(done, done_);
      DARABONBA_PTR_TO_JSON(dueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(executorIds, executorIdsShrink_);
      DARABONBA_PTR_TO_JSON(participantIds, participantIdsShrink_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTodoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(done, done_);
      DARABONBA_PTR_FROM_JSON(dueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(executorIds, executorIdsShrink_);
      DARABONBA_PTR_FROM_JSON(participantIds, participantIdsShrink_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    UpdateTodoTaskShrinkRequest() = default ;
    UpdateTodoTaskShrinkRequest(const UpdateTodoTaskShrinkRequest &) = default ;
    UpdateTodoTaskShrinkRequest(UpdateTodoTaskShrinkRequest &&) = default ;
    UpdateTodoTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTodoTaskShrinkRequest() = default ;
    UpdateTodoTaskShrinkRequest& operator=(const UpdateTodoTaskShrinkRequest &) = default ;
    UpdateTodoTaskShrinkRequest& operator=(UpdateTodoTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->description_ == nullptr && this->done_ == nullptr && this->dueTime_ == nullptr && this->executorIdsShrink_ == nullptr && this->participantIdsShrink_ == nullptr
        && this->subject_ == nullptr && this->taskId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateTodoTaskShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTodoTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline bool getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, false) };
    inline UpdateTodoTaskShrinkRequest& setDone(bool done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t getDueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline UpdateTodoTaskShrinkRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIdsShrink Field Functions 
    bool hasExecutorIdsShrink() const { return this->executorIdsShrink_ != nullptr;};
    void deleteExecutorIdsShrink() { this->executorIdsShrink_ = nullptr;};
    inline string getExecutorIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(executorIdsShrink_, "") };
    inline UpdateTodoTaskShrinkRequest& setExecutorIdsShrink(string executorIdsShrink) { DARABONBA_PTR_SET_VALUE(executorIdsShrink_, executorIdsShrink) };


    // participantIdsShrink Field Functions 
    bool hasParticipantIdsShrink() const { return this->participantIdsShrink_ != nullptr;};
    void deleteParticipantIdsShrink() { this->participantIdsShrink_ = nullptr;};
    inline string getParticipantIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(participantIdsShrink_, "") };
    inline UpdateTodoTaskShrinkRequest& setParticipantIdsShrink(string participantIdsShrink) { DARABONBA_PTR_SET_VALUE(participantIdsShrink_, participantIdsShrink) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline UpdateTodoTaskShrinkRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateTodoTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> done_ {};
    shared_ptr<int64_t> dueTime_ {};
    shared_ptr<string> executorIdsShrink_ {};
    shared_ptr<string> participantIdsShrink_ {};
    shared_ptr<string> subject_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
