// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATESUPABASEFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATESUPABASEFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class OperateSupabaseForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateSupabaseForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ExecuteSql, executeSql_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(OrderByClause, orderByClause_);
      DARABONBA_PTR_TO_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WhereClause, whereClause_);
    };
    friend void from_json(const Darabonba::Json& j, OperateSupabaseForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ExecuteSql, executeSql_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(OrderByClause, orderByClause_);
      DARABONBA_PTR_FROM_JSON(OrderColumn, orderColumn_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WhereClause, whereClause_);
    };
    OperateSupabaseForAdminRequest() = default ;
    OperateSupabaseForAdminRequest(const OperateSupabaseForAdminRequest &) = default ;
    OperateSupabaseForAdminRequest(OperateSupabaseForAdminRequest &&) = default ;
    OperateSupabaseForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateSupabaseForAdminRequest() = default ;
    OperateSupabaseForAdminRequest& operator=(const OperateSupabaseForAdminRequest &) = default ;
    OperateSupabaseForAdminRequest& operator=(OperateSupabaseForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->executeSql_ == nullptr && this->operateType_ == nullptr && this->orderByClause_ == nullptr && this->orderColumn_ == nullptr && this->orderType_ == nullptr
        && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->tableName_ == nullptr && this->userId_ == nullptr && this->whereClause_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline OperateSupabaseForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // executeSql Field Functions 
    bool hasExecuteSql() const { return this->executeSql_ != nullptr;};
    void deleteExecuteSql() { this->executeSql_ = nullptr;};
    inline string getExecuteSql() const { DARABONBA_PTR_GET_DEFAULT(executeSql_, "") };
    inline OperateSupabaseForAdminRequest& setExecuteSql(string executeSql) { DARABONBA_PTR_SET_VALUE(executeSql_, executeSql) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline OperateSupabaseForAdminRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // orderByClause Field Functions 
    bool hasOrderByClause() const { return this->orderByClause_ != nullptr;};
    void deleteOrderByClause() { this->orderByClause_ = nullptr;};
    inline string getOrderByClause() const { DARABONBA_PTR_GET_DEFAULT(orderByClause_, "") };
    inline OperateSupabaseForAdminRequest& setOrderByClause(string orderByClause) { DARABONBA_PTR_SET_VALUE(orderByClause_, orderByClause) };


    // orderColumn Field Functions 
    bool hasOrderColumn() const { return this->orderColumn_ != nullptr;};
    void deleteOrderColumn() { this->orderColumn_ = nullptr;};
    inline string getOrderColumn() const { DARABONBA_PTR_GET_DEFAULT(orderColumn_, "") };
    inline OperateSupabaseForAdminRequest& setOrderColumn(string orderColumn) { DARABONBA_PTR_SET_VALUE(orderColumn_, orderColumn) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline OperateSupabaseForAdminRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline OperateSupabaseForAdminRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline OperateSupabaseForAdminRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline OperateSupabaseForAdminRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline OperateSupabaseForAdminRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // whereClause Field Functions 
    bool hasWhereClause() const { return this->whereClause_ != nullptr;};
    void deleteWhereClause() { this->whereClause_ = nullptr;};
    inline string getWhereClause() const { DARABONBA_PTR_GET_DEFAULT(whereClause_, "") };
    inline OperateSupabaseForAdminRequest& setWhereClause(string whereClause) { DARABONBA_PTR_SET_VALUE(whereClause_, whereClause) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    shared_ptr<string> executeSql_ {};
    shared_ptr<string> operateType_ {};
    shared_ptr<string> orderByClause_ {};
    shared_ptr<string> orderColumn_ {};
    shared_ptr<string> orderType_ {};
    shared_ptr<int32_t> pageNum_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> tableName_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<string> whereClause_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
