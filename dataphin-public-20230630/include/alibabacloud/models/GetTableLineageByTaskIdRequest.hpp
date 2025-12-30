// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLELINEAGEBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLELINEAGEBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableLineageByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableLineageByTaskIdQuery, tableLineageByTaskIdQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableLineageByTaskIdQuery, tableLineageByTaskIdQuery_);
    };
    GetTableLineageByTaskIdRequest() = default ;
    GetTableLineageByTaskIdRequest(const GetTableLineageByTaskIdRequest &) = default ;
    GetTableLineageByTaskIdRequest(GetTableLineageByTaskIdRequest &&) = default ;
    GetTableLineageByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableLineageByTaskIdRequest() = default ;
    GetTableLineageByTaskIdRequest& operator=(const GetTableLineageByTaskIdRequest &) = default ;
    GetTableLineageByTaskIdRequest& operator=(GetTableLineageByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableLineageByTaskIdQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableLineageByTaskIdQuery& obj) { 
        DARABONBA_PTR_TO_JSON(NeedNotExistObject, needNotExistObject_);
        DARABONBA_PTR_TO_JSON(TaskEnv, taskEnv_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TableLineageByTaskIdQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(NeedNotExistObject, needNotExistObject_);
        DARABONBA_PTR_FROM_JSON(TaskEnv, taskEnv_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TableLineageByTaskIdQuery() = default ;
      TableLineageByTaskIdQuery(const TableLineageByTaskIdQuery &) = default ;
      TableLineageByTaskIdQuery(TableLineageByTaskIdQuery &&) = default ;
      TableLineageByTaskIdQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableLineageByTaskIdQuery() = default ;
      TableLineageByTaskIdQuery& operator=(const TableLineageByTaskIdQuery &) = default ;
      TableLineageByTaskIdQuery& operator=(TableLineageByTaskIdQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->needNotExistObject_ == nullptr
        && this->taskEnv_ == nullptr && this->taskId_ == nullptr; };
      // needNotExistObject Field Functions 
      bool hasNeedNotExistObject() const { return this->needNotExistObject_ != nullptr;};
      void deleteNeedNotExistObject() { this->needNotExistObject_ = nullptr;};
      inline bool getNeedNotExistObject() const { DARABONBA_PTR_GET_DEFAULT(needNotExistObject_, false) };
      inline TableLineageByTaskIdQuery& setNeedNotExistObject(bool needNotExistObject) { DARABONBA_PTR_SET_VALUE(needNotExistObject_, needNotExistObject) };


      // taskEnv Field Functions 
      bool hasTaskEnv() const { return this->taskEnv_ != nullptr;};
      void deleteTaskEnv() { this->taskEnv_ = nullptr;};
      inline string getTaskEnv() const { DARABONBA_PTR_GET_DEFAULT(taskEnv_, "") };
      inline TableLineageByTaskIdQuery& setTaskEnv(string taskEnv) { DARABONBA_PTR_SET_VALUE(taskEnv_, taskEnv) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TableLineageByTaskIdQuery& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<bool> needNotExistObject_ {};
      shared_ptr<string> taskEnv_ {};
      // This parameter is required.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->tableLineageByTaskIdQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableLineageByTaskIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableLineageByTaskIdQuery Field Functions 
    bool hasTableLineageByTaskIdQuery() const { return this->tableLineageByTaskIdQuery_ != nullptr;};
    void deleteTableLineageByTaskIdQuery() { this->tableLineageByTaskIdQuery_ = nullptr;};
    inline const GetTableLineageByTaskIdRequest::TableLineageByTaskIdQuery & getTableLineageByTaskIdQuery() const { DARABONBA_PTR_GET_CONST(tableLineageByTaskIdQuery_, GetTableLineageByTaskIdRequest::TableLineageByTaskIdQuery) };
    inline GetTableLineageByTaskIdRequest::TableLineageByTaskIdQuery getTableLineageByTaskIdQuery() { DARABONBA_PTR_GET(tableLineageByTaskIdQuery_, GetTableLineageByTaskIdRequest::TableLineageByTaskIdQuery) };
    inline GetTableLineageByTaskIdRequest& setTableLineageByTaskIdQuery(const GetTableLineageByTaskIdRequest::TableLineageByTaskIdQuery & tableLineageByTaskIdQuery) { DARABONBA_PTR_SET_VALUE(tableLineageByTaskIdQuery_, tableLineageByTaskIdQuery) };
    inline GetTableLineageByTaskIdRequest& setTableLineageByTaskIdQuery(GetTableLineageByTaskIdRequest::TableLineageByTaskIdQuery && tableLineageByTaskIdQuery) { DARABONBA_PTR_SET_RVALUE(tableLineageByTaskIdQuery_, tableLineageByTaskIdQuery) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<GetTableLineageByTaskIdRequest::TableLineageByTaskIdQuery> tableLineageByTaskIdQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
