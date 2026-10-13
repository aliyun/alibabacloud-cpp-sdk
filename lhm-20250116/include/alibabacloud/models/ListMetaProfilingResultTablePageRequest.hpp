// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTTABLEPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTTABLEPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaProfilingResultTablePageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaProfilingResultTablePageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(componentType, componentType_);
      DARABONBA_PTR_TO_JSON(dataRange, dataRange_);
      DARABONBA_PTR_TO_JSON(dataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(isPartitioned, isPartitioned_);
      DARABONBA_PTR_TO_JSON(isSummary, isSummary_);
      DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaProfilingResultTablePageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(componentType, componentType_);
      DARABONBA_PTR_FROM_JSON(dataRange, dataRange_);
      DARABONBA_PTR_FROM_JSON(dataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(dataUnit, dataUnit_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(isPartitioned, isPartitioned_);
      DARABONBA_PTR_FROM_JSON(isSummary, isSummary_);
      DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(needTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMetaProfilingResultTablePageRequest() = default ;
    ListMetaProfilingResultTablePageRequest(const ListMetaProfilingResultTablePageRequest &) = default ;
    ListMetaProfilingResultTablePageRequest(ListMetaProfilingResultTablePageRequest &&) = default ;
    ListMetaProfilingResultTablePageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaProfilingResultTablePageRequest() = default ;
    ListMetaProfilingResultTablePageRequest& operator=(const ListMetaProfilingResultTablePageRequest &) = default ;
    ListMetaProfilingResultTablePageRequest& operator=(ListMetaProfilingResultTablePageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentType_ == nullptr
        && this->dataRange_ == nullptr && this->dataSize_ == nullptr && this->dataUnit_ == nullptr && this->dbName_ == nullptr && this->groupBy_ == nullptr
        && this->isPartitioned_ == nullptr && this->isSummary_ == nullptr && this->migrationStatus_ == nullptr && this->needTotalCount_ == nullptr && this->orderBy_ == nullptr
        && this->orderDirection_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->tableName_ == nullptr && this->taskId_ == nullptr
        && this->type_ == nullptr; };
    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline int32_t getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, 0) };
    inline ListMetaProfilingResultTablePageRequest& setComponentType(int32_t componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // dataRange Field Functions 
    bool hasDataRange() const { return this->dataRange_ != nullptr;};
    void deleteDataRange() { this->dataRange_ = nullptr;};
    inline string getDataRange() const { DARABONBA_PTR_GET_DEFAULT(dataRange_, "") };
    inline ListMetaProfilingResultTablePageRequest& setDataRange(string dataRange) { DARABONBA_PTR_SET_VALUE(dataRange_, dataRange) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline double getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0.0) };
    inline ListMetaProfilingResultTablePageRequest& setDataSize(double dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dataUnit Field Functions 
    bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
    void deleteDataUnit() { this->dataUnit_ = nullptr;};
    inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
    inline ListMetaProfilingResultTablePageRequest& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListMetaProfilingResultTablePageRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline ListMetaProfilingResultTablePageRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // isPartitioned Field Functions 
    bool hasIsPartitioned() const { return this->isPartitioned_ != nullptr;};
    void deleteIsPartitioned() { this->isPartitioned_ = nullptr;};
    inline int32_t getIsPartitioned() const { DARABONBA_PTR_GET_DEFAULT(isPartitioned_, 0) };
    inline ListMetaProfilingResultTablePageRequest& setIsPartitioned(int32_t isPartitioned) { DARABONBA_PTR_SET_VALUE(isPartitioned_, isPartitioned) };


    // isSummary Field Functions 
    bool hasIsSummary() const { return this->isSummary_ != nullptr;};
    void deleteIsSummary() { this->isSummary_ = nullptr;};
    inline bool getIsSummary() const { DARABONBA_PTR_GET_DEFAULT(isSummary_, false) };
    inline ListMetaProfilingResultTablePageRequest& setIsSummary(bool isSummary) { DARABONBA_PTR_SET_VALUE(isSummary_, isSummary) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
    inline ListMetaProfilingResultTablePageRequest& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool getNeedTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline ListMetaProfilingResultTablePageRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListMetaProfilingResultTablePageRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListMetaProfilingResultTablePageRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaProfilingResultTablePageRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaProfilingResultTablePageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListMetaProfilingResultTablePageRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListMetaProfilingResultTablePageRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMetaProfilingResultTablePageRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The identifier of the component (data source) type.
    shared_ptr<int32_t> componentType_ {};
    // The filter condition for the data range.
    shared_ptr<string> dataRange_ {};
    // The threshold for filtering by data size. This parameter must be used together with dataUnit.
    shared_ptr<double> dataSize_ {};
    // The unit of data size, such as GB or TB. This parameter must be used together with dataSize.
    shared_ptr<string> dataUnit_ {};
    // The name of the database, which is used to filter results by database.
    shared_ptr<string> dbName_ {};
    // The name of the group-by field, which is used for aggregate statistics.
    shared_ptr<string> groupBy_ {};
    // Specifies whether to filter only partitioned tables.
    shared_ptr<int32_t> isPartitioned_ {};
    // Specifies whether to return only summary statistics.
    shared_ptr<bool> isSummary_ {};
    // The migration status, which is used to filter by migration progress or indicate the migration status of an object.
    shared_ptr<string> migrationStatus_ {};
    // Specifies whether to return the total number of records.
    shared_ptr<bool> needTotalCount_ {};
    // The name of the order-by field.
    shared_ptr<string> orderBy_ {};
    // The sort direction, such as ascending (ASC) or descending (DESC).
    shared_ptr<string> orderDirection_ {};
    // The current page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of records to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the table, which is used to filter results by table name.
    shared_ptr<string> tableName_ {};
    // The ID of the metadata profiling task, which is used to locate the profiling task to which this query belongs.
    shared_ptr<int64_t> taskId_ {};
    // The identifier of the object type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
