// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTODOTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTODOTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTodoTaskRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTodoTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTodoTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, GetTodoTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    GetTodoTaskRequest() = default ;
    GetTodoTaskRequest(const GetTodoTaskRequest &) = default ;
    GetTodoTaskRequest(GetTodoTaskRequest &&) = default ;
    GetTodoTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTodoTaskRequest() = default ;
    GetTodoTaskRequest& operator=(const GetTodoTaskRequest &) = default ;
    GetTodoTaskRequest& operator=(GetTodoTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->taskId_ != nullptr
        && this->tenantContext_ != nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetTodoTaskRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const GetTodoTaskRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, GetTodoTaskRequestTenantContext) };
    inline GetTodoTaskRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, GetTodoTaskRequestTenantContext) };
    inline GetTodoTaskRequest& setTenantContext(const GetTodoTaskRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline GetTodoTaskRequest& setTenantContext(GetTodoTaskRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<GetTodoTaskRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
