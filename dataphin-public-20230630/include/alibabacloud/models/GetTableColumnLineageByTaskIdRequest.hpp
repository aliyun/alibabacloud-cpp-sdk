// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLECOLUMNLINEAGEBYTASKIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetTableColumnLineageByTaskIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableColumnLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(TableColumnLineageByTaskIdQuery, tableColumnLineageByTaskIdQuery_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableColumnLineageByTaskIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(TableColumnLineageByTaskIdQuery, tableColumnLineageByTaskIdQuery_);
    };
    GetTableColumnLineageByTaskIdRequest() = default ;
    GetTableColumnLineageByTaskIdRequest(const GetTableColumnLineageByTaskIdRequest &) = default ;
    GetTableColumnLineageByTaskIdRequest(GetTableColumnLineageByTaskIdRequest &&) = default ;
    GetTableColumnLineageByTaskIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableColumnLineageByTaskIdRequest() = default ;
    GetTableColumnLineageByTaskIdRequest& operator=(const GetTableColumnLineageByTaskIdRequest &) = default ;
    GetTableColumnLineageByTaskIdRequest& operator=(GetTableColumnLineageByTaskIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableColumnLineageByTaskIdQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableColumnLineageByTaskIdQuery& obj) { 
        DARABONBA_PTR_TO_JSON(NeedNotExistObject, needNotExistObject_);
        DARABONBA_PTR_TO_JSON(TaskEnv, taskEnv_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, TableColumnLineageByTaskIdQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(NeedNotExistObject, needNotExistObject_);
        DARABONBA_PTR_FROM_JSON(TaskEnv, taskEnv_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      TableColumnLineageByTaskIdQuery() = default ;
      TableColumnLineageByTaskIdQuery(const TableColumnLineageByTaskIdQuery &) = default ;
      TableColumnLineageByTaskIdQuery(TableColumnLineageByTaskIdQuery &&) = default ;
      TableColumnLineageByTaskIdQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableColumnLineageByTaskIdQuery() = default ;
      TableColumnLineageByTaskIdQuery& operator=(const TableColumnLineageByTaskIdQuery &) = default ;
      TableColumnLineageByTaskIdQuery& operator=(TableColumnLineageByTaskIdQuery &&) = default ;
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
      inline TableColumnLineageByTaskIdQuery& setNeedNotExistObject(bool needNotExistObject) { DARABONBA_PTR_SET_VALUE(needNotExistObject_, needNotExistObject) };


      // taskEnv Field Functions 
      bool hasTaskEnv() const { return this->taskEnv_ != nullptr;};
      void deleteTaskEnv() { this->taskEnv_ = nullptr;};
      inline string getTaskEnv() const { DARABONBA_PTR_GET_DEFAULT(taskEnv_, "") };
      inline TableColumnLineageByTaskIdQuery& setTaskEnv(string taskEnv) { DARABONBA_PTR_SET_VALUE(taskEnv_, taskEnv) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline TableColumnLineageByTaskIdQuery& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      shared_ptr<bool> needNotExistObject_ {};
      shared_ptr<string> taskEnv_ {};
      // This parameter is required.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->tableColumnLineageByTaskIdQuery_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetTableColumnLineageByTaskIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // tableColumnLineageByTaskIdQuery Field Functions 
    bool hasTableColumnLineageByTaskIdQuery() const { return this->tableColumnLineageByTaskIdQuery_ != nullptr;};
    void deleteTableColumnLineageByTaskIdQuery() { this->tableColumnLineageByTaskIdQuery_ = nullptr;};
    inline const GetTableColumnLineageByTaskIdRequest::TableColumnLineageByTaskIdQuery & getTableColumnLineageByTaskIdQuery() const { DARABONBA_PTR_GET_CONST(tableColumnLineageByTaskIdQuery_, GetTableColumnLineageByTaskIdRequest::TableColumnLineageByTaskIdQuery) };
    inline GetTableColumnLineageByTaskIdRequest::TableColumnLineageByTaskIdQuery getTableColumnLineageByTaskIdQuery() { DARABONBA_PTR_GET(tableColumnLineageByTaskIdQuery_, GetTableColumnLineageByTaskIdRequest::TableColumnLineageByTaskIdQuery) };
    inline GetTableColumnLineageByTaskIdRequest& setTableColumnLineageByTaskIdQuery(const GetTableColumnLineageByTaskIdRequest::TableColumnLineageByTaskIdQuery & tableColumnLineageByTaskIdQuery) { DARABONBA_PTR_SET_VALUE(tableColumnLineageByTaskIdQuery_, tableColumnLineageByTaskIdQuery) };
    inline GetTableColumnLineageByTaskIdRequest& setTableColumnLineageByTaskIdQuery(GetTableColumnLineageByTaskIdRequest::TableColumnLineageByTaskIdQuery && tableColumnLineageByTaskIdQuery) { DARABONBA_PTR_SET_RVALUE(tableColumnLineageByTaskIdQuery_, tableColumnLineageByTaskIdQuery) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<GetTableColumnLineageByTaskIdRequest::TableColumnLineageByTaskIdQuery> tableColumnLineageByTaskIdQuery_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
