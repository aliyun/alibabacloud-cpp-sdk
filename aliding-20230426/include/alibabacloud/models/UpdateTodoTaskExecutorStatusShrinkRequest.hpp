// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateTodoTaskExecutorStatusShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTodoTaskExecutorStatusShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(executorStatusList, executorStatusListShrink_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTodoTaskExecutorStatusShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(executorStatusList, executorStatusListShrink_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    UpdateTodoTaskExecutorStatusShrinkRequest() = default ;
    UpdateTodoTaskExecutorStatusShrinkRequest(const UpdateTodoTaskExecutorStatusShrinkRequest &) = default ;
    UpdateTodoTaskExecutorStatusShrinkRequest(UpdateTodoTaskExecutorStatusShrinkRequest &&) = default ;
    UpdateTodoTaskExecutorStatusShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTodoTaskExecutorStatusShrinkRequest() = default ;
    UpdateTodoTaskExecutorStatusShrinkRequest& operator=(const UpdateTodoTaskExecutorStatusShrinkRequest &) = default ;
    UpdateTodoTaskExecutorStatusShrinkRequest& operator=(UpdateTodoTaskExecutorStatusShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->executorStatusListShrink_ == nullptr && this->operatorId_ == nullptr && this->taskId_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline UpdateTodoTaskExecutorStatusShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // executorStatusListShrink Field Functions 
    bool hasExecutorStatusListShrink() const { return this->executorStatusListShrink_ != nullptr;};
    void deleteExecutorStatusListShrink() { this->executorStatusListShrink_ = nullptr;};
    inline string getExecutorStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(executorStatusListShrink_, "") };
    inline UpdateTodoTaskExecutorStatusShrinkRequest& setExecutorStatusListShrink(string executorStatusListShrink) { DARABONBA_PTR_SET_VALUE(executorStatusListShrink_, executorStatusListShrink) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline UpdateTodoTaskExecutorStatusShrinkRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateTodoTaskExecutorStatusShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<string> executorStatusListShrink_ {};
    shared_ptr<string> operatorId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
