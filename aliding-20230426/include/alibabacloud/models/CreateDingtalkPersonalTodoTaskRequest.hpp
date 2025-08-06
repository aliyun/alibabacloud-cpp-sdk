// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDINGTALKPERSONALTODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDINGTALKPERSONALTODOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDingtalkPersonalTodoTaskRequestNotifyConfigs.hpp>
#include <alibabacloud/models/CreateDingtalkPersonalTodoTaskRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateDingtalkPersonalTodoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDingtalkPersonalTodoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DueTime, dueTime_);
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(NotifyConfigs, notifyConfigs_);
      DARABONBA_PTR_TO_JSON(ParticipantIds, participantIds_);
      DARABONBA_PTR_TO_JSON(Subject, subject_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(UserToken, userToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDingtalkPersonalTodoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DueTime, dueTime_);
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(NotifyConfigs, notifyConfigs_);
      DARABONBA_PTR_FROM_JSON(ParticipantIds, participantIds_);
      DARABONBA_PTR_FROM_JSON(Subject, subject_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(UserToken, userToken_);
    };
    CreateDingtalkPersonalTodoTaskRequest() = default ;
    CreateDingtalkPersonalTodoTaskRequest(const CreateDingtalkPersonalTodoTaskRequest &) = default ;
    CreateDingtalkPersonalTodoTaskRequest(CreateDingtalkPersonalTodoTaskRequest &&) = default ;
    CreateDingtalkPersonalTodoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDingtalkPersonalTodoTaskRequest() = default ;
    CreateDingtalkPersonalTodoTaskRequest& operator=(const CreateDingtalkPersonalTodoTaskRequest &) = default ;
    CreateDingtalkPersonalTodoTaskRequest& operator=(CreateDingtalkPersonalTodoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->dueTime_ != nullptr && this->executorIds_ != nullptr && this->notifyConfigs_ != nullptr && this->participantIds_ != nullptr && this->subject_ != nullptr
        && this->tenantContext_ != nullptr && this->userToken_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDingtalkPersonalTodoTaskRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dueTime Field Functions 
    bool hasDueTime() const { return this->dueTime_ != nullptr;};
    void deleteDueTime() { this->dueTime_ = nullptr;};
    inline int64_t dueTime() const { DARABONBA_PTR_GET_DEFAULT(dueTime_, 0L) };
    inline CreateDingtalkPersonalTodoTaskRequest& setDueTime(int64_t dueTime) { DARABONBA_PTR_SET_VALUE(dueTime_, dueTime) };


    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreateDingtalkPersonalTodoTaskRequest& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreateDingtalkPersonalTodoTaskRequest& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // notifyConfigs Field Functions 
    bool hasNotifyConfigs() const { return this->notifyConfigs_ != nullptr;};
    void deleteNotifyConfigs() { this->notifyConfigs_ = nullptr;};
    inline const CreateDingtalkPersonalTodoTaskRequestNotifyConfigs & notifyConfigs() const { DARABONBA_PTR_GET_CONST(notifyConfigs_, CreateDingtalkPersonalTodoTaskRequestNotifyConfigs) };
    inline CreateDingtalkPersonalTodoTaskRequestNotifyConfigs notifyConfigs() { DARABONBA_PTR_GET(notifyConfigs_, CreateDingtalkPersonalTodoTaskRequestNotifyConfigs) };
    inline CreateDingtalkPersonalTodoTaskRequest& setNotifyConfigs(const CreateDingtalkPersonalTodoTaskRequestNotifyConfigs & notifyConfigs) { DARABONBA_PTR_SET_VALUE(notifyConfigs_, notifyConfigs) };
    inline CreateDingtalkPersonalTodoTaskRequest& setNotifyConfigs(CreateDingtalkPersonalTodoTaskRequestNotifyConfigs && notifyConfigs) { DARABONBA_PTR_SET_RVALUE(notifyConfigs_, notifyConfigs) };


    // participantIds Field Functions 
    bool hasParticipantIds() const { return this->participantIds_ != nullptr;};
    void deleteParticipantIds() { this->participantIds_ = nullptr;};
    inline const vector<string> & participantIds() const { DARABONBA_PTR_GET_CONST(participantIds_, vector<string>) };
    inline vector<string> participantIds() { DARABONBA_PTR_GET(participantIds_, vector<string>) };
    inline CreateDingtalkPersonalTodoTaskRequest& setParticipantIds(const vector<string> & participantIds) { DARABONBA_PTR_SET_VALUE(participantIds_, participantIds) };
    inline CreateDingtalkPersonalTodoTaskRequest& setParticipantIds(vector<string> && participantIds) { DARABONBA_PTR_SET_RVALUE(participantIds_, participantIds) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline CreateDingtalkPersonalTodoTaskRequest& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateDingtalkPersonalTodoTaskRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateDingtalkPersonalTodoTaskRequestTenantContext) };
    inline CreateDingtalkPersonalTodoTaskRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateDingtalkPersonalTodoTaskRequestTenantContext) };
    inline CreateDingtalkPersonalTodoTaskRequest& setTenantContext(const CreateDingtalkPersonalTodoTaskRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateDingtalkPersonalTodoTaskRequest& setTenantContext(CreateDingtalkPersonalTodoTaskRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // userToken Field Functions 
    bool hasUserToken() const { return this->userToken_ != nullptr;};
    void deleteUserToken() { this->userToken_ = nullptr;};
    inline string userToken() const { DARABONBA_PTR_GET_DEFAULT(userToken_, "") };
    inline CreateDingtalkPersonalTodoTaskRequest& setUserToken(string userToken) { DARABONBA_PTR_SET_VALUE(userToken_, userToken) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> dueTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<CreateDingtalkPersonalTodoTaskRequestNotifyConfigs> notifyConfigs_ = nullptr;
    std::shared_ptr<vector<string>> participantIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subject_ = nullptr;
    std::shared_ptr<CreateDingtalkPersonalTodoTaskRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<string> userToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
