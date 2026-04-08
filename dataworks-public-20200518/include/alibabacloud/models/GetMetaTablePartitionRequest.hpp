// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTablePartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTablePartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortCriterion, sortCriterion_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTablePartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortCriterion, sortCriterion_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetMetaTablePartitionRequest() = default ;
    GetMetaTablePartitionRequest(const GetMetaTablePartitionRequest &) = default ;
    GetMetaTablePartitionRequest(GetMetaTablePartitionRequest &&) = default ;
    GetMetaTablePartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTablePartitionRequest() = default ;
    GetMetaTablePartitionRequest& operator=(const GetMetaTablePartitionRequest &) = default ;
    GetMetaTablePartitionRequest& operator=(GetMetaTablePartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SortCriterion : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SortCriterion& obj) { 
        DARABONBA_PTR_TO_JSON(Order, order_);
        DARABONBA_PTR_TO_JSON(SortField, sortField_);
      };
      friend void from_json(const Darabonba::Json& j, SortCriterion& obj) { 
        DARABONBA_PTR_FROM_JSON(Order, order_);
        DARABONBA_PTR_FROM_JSON(SortField, sortField_);
      };
      SortCriterion() = default ;
      SortCriterion(const SortCriterion &) = default ;
      SortCriterion(SortCriterion &&) = default ;
      SortCriterion(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SortCriterion() = default ;
      SortCriterion& operator=(const SortCriterion &) = default ;
      SortCriterion& operator=(SortCriterion &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->order_ == nullptr
        && this->sortField_ == nullptr; };
      // order Field Functions 
      bool hasOrder() const { return this->order_ != nullptr;};
      void deleteOrder() { this->order_ = nullptr;};
      inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
      inline SortCriterion& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


      // sortField Field Functions 
      bool hasSortField() const { return this->sortField_ != nullptr;};
      void deleteSortField() { this->sortField_ = nullptr;};
      inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
      inline SortCriterion& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


    protected:
      // The order in which partitions in the metatable are sorted. Valid values: asc and desc. Default value: desc.
      shared_ptr<string> order_ {};
      // The field that is used to sort partitions in the metatable. Valid values: name and modify_time. By default, partitions in the metatable are sorted based on their creation time.
      shared_ptr<string> sortField_ {};
    };

    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dataSourceType_ == nullptr && this->databaseName_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortCriterion_ == nullptr
        && this->tableGuid_ == nullptr && this->tableName_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetMetaTablePartitionRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string getDataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline GetMetaTablePartitionRequest& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetMetaTablePartitionRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GetMetaTablePartitionRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetMetaTablePartitionRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortCriterion Field Functions 
    bool hasSortCriterion() const { return this->sortCriterion_ != nullptr;};
    void deleteSortCriterion() { this->sortCriterion_ = nullptr;};
    inline const GetMetaTablePartitionRequest::SortCriterion & getSortCriterion() const { DARABONBA_PTR_GET_CONST(sortCriterion_, GetMetaTablePartitionRequest::SortCriterion) };
    inline GetMetaTablePartitionRequest::SortCriterion getSortCriterion() { DARABONBA_PTR_GET(sortCriterion_, GetMetaTablePartitionRequest::SortCriterion) };
    inline GetMetaTablePartitionRequest& setSortCriterion(const GetMetaTablePartitionRequest::SortCriterion & sortCriterion) { DARABONBA_PTR_SET_VALUE(sortCriterion_, sortCriterion) };
    inline GetMetaTablePartitionRequest& setSortCriterion(GetMetaTablePartitionRequest::SortCriterion && sortCriterion) { DARABONBA_PTR_SET_RVALUE(sortCriterion_, sortCriterion) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTablePartitionRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMetaTablePartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
    // 
    // You can log on to the [EMR console](https://emr.console.aliyun.com/?spm=a2c4g.11186623.0.0.965cc5c2GeiHet#/cn-hangzhou) to obtain the ID.
    shared_ptr<string> clusterId_ {};
    // The type of the data source. Valid values: odps and emr.
    shared_ptr<string> dataSourceType_ {};
    // The name of the database. This parameter is required only if you set the DataSourceType parameter to emr.
    // 
    // You can call the [ListMetaDB](https://help.aliyun.com/document_detail/2780105.html) operation to query the name of the metadatabase.
    shared_ptr<string> databaseName_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The logic for sorting partitions in the metatable.
    shared_ptr<GetMetaTablePartitionRequest::SortCriterion> sortCriterion_ {};
    // The unique identifier of the metatable.
    shared_ptr<string> tableGuid_ {};
    // The name of the metatable in the EMR cluster. This parameter is required only if you set the DataSourceType parameter to emr.
    // 
    // You can call the [GetMetaDBTableList](https://help.aliyun.com/document_detail/2780086.html) operation to query the name of the metatable.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
