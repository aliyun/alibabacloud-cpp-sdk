// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETODOTASKEXECUTORSTATUSREQUEST_HPP_
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
    class ExecutorStatusList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecutorStatusList& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isDone, isDone_);
      };
      friend void from_json(const Darabonba::Json& j, ExecutorStatusList& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isDone, isDone_);
      };
      ExecutorStatusList() = default ;
      ExecutorStatusList(const ExecutorStatusList &) = default ;
      ExecutorStatusList(ExecutorStatusList &&) = default ;
      ExecutorStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecutorStatusList() = default ;
      ExecutorStatusList& operator=(const ExecutorStatusList &) = default ;
      ExecutorStatusList& operator=(ExecutorStatusList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->isDone_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ExecutorStatusList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isDone Field Functions 
      bool hasIsDone() const { return this->isDone_ != nullptr;};
      void deleteIsDone() { this->isDone_ = nullptr;};
      inline bool getIsDone() const { DARABONBA_PTR_GET_DEFAULT(isDone_, false) };
      inline ExecutorStatusList& setIsDone(bool isDone) { DARABONBA_PTR_SET_VALUE(isDone_, isDone) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<bool> isDone_ {};
    };

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
        && this->executorStatusList_ == nullptr && this->operatorId_ == nullptr && this->taskId_ == nullptr; };
    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateTodoTaskExecutorStatusRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateTodoTaskExecutorStatusRequest::TenantContext) };
    inline UpdateTodoTaskExecutorStatusRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateTodoTaskExecutorStatusRequest::TenantContext) };
    inline UpdateTodoTaskExecutorStatusRequest& setTenantContext(const UpdateTodoTaskExecutorStatusRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateTodoTaskExecutorStatusRequest& setTenantContext(UpdateTodoTaskExecutorStatusRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


    // executorStatusList Field Functions 
    bool hasExecutorStatusList() const { return this->executorStatusList_ != nullptr;};
    void deleteExecutorStatusList() { this->executorStatusList_ = nullptr;};
    inline const vector<UpdateTodoTaskExecutorStatusRequest::ExecutorStatusList> & getExecutorStatusList() const { DARABONBA_PTR_GET_CONST(executorStatusList_, vector<UpdateTodoTaskExecutorStatusRequest::ExecutorStatusList>) };
    inline vector<UpdateTodoTaskExecutorStatusRequest::ExecutorStatusList> getExecutorStatusList() { DARABONBA_PTR_GET(executorStatusList_, vector<UpdateTodoTaskExecutorStatusRequest::ExecutorStatusList>) };
    inline UpdateTodoTaskExecutorStatusRequest& setExecutorStatusList(const vector<UpdateTodoTaskExecutorStatusRequest::ExecutorStatusList> & executorStatusList) { DARABONBA_PTR_SET_VALUE(executorStatusList_, executorStatusList) };
    inline UpdateTodoTaskExecutorStatusRequest& setExecutorStatusList(vector<UpdateTodoTaskExecutorStatusRequest::ExecutorStatusList> && executorStatusList) { DARABONBA_PTR_SET_RVALUE(executorStatusList_, executorStatusList) };


    // operatorId Field Functions 
    bool hasOperatorId() const { return this->operatorId_ != nullptr;};
    void deleteOperatorId() { this->operatorId_ = nullptr;};
    inline string getOperatorId() const { DARABONBA_PTR_GET_DEFAULT(operatorId_, "") };
    inline UpdateTodoTaskExecutorStatusRequest& setOperatorId(string operatorId) { DARABONBA_PTR_SET_VALUE(operatorId_, operatorId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline UpdateTodoTaskExecutorStatusRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<UpdateTodoTaskExecutorStatusRequest::TenantContext> tenantContext_ {};
    shared_ptr<vector<UpdateTodoTaskExecutorStatusRequest::ExecutorStatusList>> executorStatusList_ {};
    shared_ptr<string> operatorId_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
