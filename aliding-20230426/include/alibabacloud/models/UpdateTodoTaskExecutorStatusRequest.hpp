// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTodoTaskExecutorStatusRequestTenantContext.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTodoTaskExecutorStatusRequestExecutorStatusList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateTodoTaskExecutorStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTodoTaskExecutorStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_TO_JSON(executorStatusList, executorStatusList_);
      DARABONBA_PTR_TO_JSON(operatorId, operatorId_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTodoTaskExecutorStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
      DARABONBA_PTR_FROM_JSON(executorStatusList, executorStatusList_);
      DARABONBA_PTR_FROM_JSON(operatorId, operatorId_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    UpdateTodoTaskExecutorStatusRequest() = default ;
    UpdateTodoTaskExecutorStatusRequest(const UpdateTodoTaskExecutorStatusRequest &) = default ;
    UpdateTodoTaskExecutorStatusRequest(UpdateTodoTaskExecutorStatusRequest &&) = default ;
    UpdateTodoTaskExecutorStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTodoTaskExecutorStatusRequest() = default ;
    UpdateTodoTaskExecutorStatusRequest& operator=(const UpdateTodoTaskExecutorStatusRequest &) = default ;
    UpdateTodoTaskExecutorStatusRequest& operator=(UpdateTodoTaskExecutorStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantContext_ != nullptr
        && this->executorStatusList_ != nullptr && this->operatorId_ != nullptr && this->taskId_ != nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateTodoTaskExecutorStatusRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateTodoTaskExecutorStatusRequestTenantContext) };
    inline UpdateTodoTaskExecutorStatusRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateTodoTaskExecutorStatusRequestTenantContext) };
    inline UpdateTodoTaskExecutorStatusRequest& setTenantContext(const UpdateTodoTaskExecutorStatusRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateTodoTaskExecutorStatusRequest& setTenantContext(UpdateTodoTaskExecutorStatusRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // executorStatusList Field Functions 
    bool hasExecutorStatusList() const { return this->executorStatusList_ != nullptr;};
    void deleteExecutorStatusList() { this->executorStatusList_ = nullptr;};
    inline const vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList> & executorStatusList() const { DARABONBA_PTR_GET_CONST(executorStatusList_, vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList>) };
    inline vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList> executorStatusList() { DARABONBA_PTR_GET(executorStatusList_, vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList>) };
    inline UpdateTodoTaskExecutorStatusRequest& setExecutorStatusList(const vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList> & executorStatusList) { DARABONBA_PTR_SET_VALUE(executorStatusList_, executorStatusList) };
    inline UpdateTodoTaskExecutorStatusRequest& setExecutorStatusList(vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList> && executorStatusList) { DARABONBA_PTR_SET_RVALUE(executorStatusList_, executorStatusList) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string operatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline UpdateTodoTaskExecutorStatusRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateTodoTaskExecutorStatusRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<UpdateTodoTaskExecutorStatusRequestTenantContext> tenantContext_ = nullptr;
    std::shared_ptr<vector<UpdateTodoTaskExecutorStatusRequestExecutorStatusList>> executorStatusList_ = nullptr;
    std::shared_ptr<string> operatorId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
