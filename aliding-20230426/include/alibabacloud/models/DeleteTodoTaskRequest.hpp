// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETODOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteTodoTaskRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class DeleteTodoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTodoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTodoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    DeleteTodoTaskRequest() = default ;
    DeleteTodoTaskRequest(const DeleteTodoTaskRequest &) = default ;
    DeleteTodoTaskRequest(DeleteTodoTaskRequest &&) = default ;
    DeleteTodoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTodoTaskRequest() = default ;
    DeleteTodoTaskRequest& operator=(const DeleteTodoTaskRequest &) = default ;
    DeleteTodoTaskRequest& operator=(DeleteTodoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContext_ == nullptr
        && return this->operatorId_ == nullptr && return this->taskId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const DeleteTodoTaskRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, DeleteTodoTaskRequestTenantContext) };
    inline DeleteTodoTaskRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, DeleteTodoTaskRequestTenantContext) };
    inline DeleteTodoTaskRequest& setTenantContext(const DeleteTodoTaskRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline DeleteTodoTaskRequest& setTenantContext(DeleteTodoTaskRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline DeleteTodoTaskRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DeleteTodoTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<DeleteTodoTaskRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<string> operatorId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
