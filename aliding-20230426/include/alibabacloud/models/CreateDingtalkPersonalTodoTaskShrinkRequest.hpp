// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDINGTALKPERSONALTODOTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDINGTALKPERSONALTODOTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateDingtalkPersonalTodoTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDingtalkPersonalTodoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIdsShrink_);
      DARABONBA_PTR_TO_JSON(NotifyConfigs, notifyConfigsShrink_);
      DARABONBA_PTR_TO_JSON(ParticipantIds, participantIdsShrink_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(UserToken, userToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDingtalkPersonalTodoTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIdsShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyConfigs, notifyConfigsShrink_);
      DARABONBA_PTR_FROM_JSON(ParticipantIds, participantIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(UserToken, userToken_);
    };
    CreateDingtalkPersonalTodoTaskShrinkRequest() = default ;
    CreateDingtalkPersonalTodoTaskShrinkRequest(const CreateDingtalkPersonalTodoTaskShrinkRequest &) = default ;
    CreateDingtalkPersonalTodoTaskShrinkRequest(CreateDingtalkPersonalTodoTaskShrinkRequest &&) = default ;
    CreateDingtalkPersonalTodoTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDingtalkPersonalTodoTaskShrinkRequest() = default ;
    CreateDingtalkPersonalTodoTaskShrinkRequest& operator=(const CreateDingtalkPersonalTodoTaskShrinkRequest &) = default ;
    CreateDingtalkPersonalTodoTaskShrinkRequest& operator=(CreateDingtalkPersonalTodoTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->dueTime_ == nullptr && return this->executorIdsShrink_ == nullptr && return this->notifyConfigsShrink_ == nullptr && return this->participantIdsShrink_ == nullptr && return this->subject_ == nullptr
        && return this->tenantContextShrink_ == nullptr && return this->userToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIdsShrink Field Functions 
    bool hasExecutorIdsShrink() const { return this->executorIdsShrink_ != nullptr;};
    void deleteExecutorIdsShrink() { this->executorIdsShrink_ = nullptr;};
    inline string executorIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(executorIdsShrink_, "") };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setExecutorIdsShrink(string executorIdsShrink) { DARABONBA_PTR_SET_VALUE(executorIdsShrink_, executorIdsShrink) };


    // notifyConfigsShrink Field Functions 
    bool hasNotifyConfigsShrink() const { return this->notifyConfigsShrink_ != nullptr;};
    void deleteNotifyConfigsShrink() { this->notifyConfigsShrink_ = nullptr;};
    inline string notifyConfigsShrink() const { DARABONBA_PTR_GET_DEFAULT(notifyConfigsShrink_, "") };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setNotifyConfigsShrink(string notifyConfigsShrink) { DARABONBA_PTR_SET_VALUE(notifyConfigsShrink_, notifyConfigsShrink) };


    // participantIdsShrink Field Functions 
    bool hasParticipantIdsShrink() const { return this->participantIdsShrink_ != nullptr;};
    void deleteParticipantIdsShrink() { this->participantIdsShrink_ = nullptr;};
    inline string participantIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(participantIdsShrink_, "") };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setParticipantIdsShrink(string participantIdsShrink) { DARABONBA_PTR_SET_VALUE(participantIdsShrink_, participantIdsShrink) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // userToken Field Functions 
    bool hasUserToken() const { return this->userToken_ != nullptr;};
    void deleteUserToken() { this->userToken_ = nullptr;};
    inline string userToken() const { DARABONBA_PTR_GET_DEFAULT(userToken_, "") };
    inline CreateDingtalkPersonalTodoTaskShrinkRequest& setUserToken(string userToken) { DARABONBA_PTR_SET_VALUE(userToken_, userToken) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> dueTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> executorIdsShrink_ = nullptr;
    std::shared_ptr<string> notifyConfigsShrink_ = nullptr;
    std::shared_ptr<string> participantIdsShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
    std::shared_ptr<string> userToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
