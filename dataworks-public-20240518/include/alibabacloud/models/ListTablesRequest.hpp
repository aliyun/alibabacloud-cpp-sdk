// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(IncludeExtendedProperties, includeExtendedProperties_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TableTypes, tableTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(IncludeExtendedProperties, includeExtendedProperties_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TableTypes, tableTypes_);
    };
    ListTablesRequest() = default ;
    ListTablesRequest(const ListTablesRequest &) = default ;
    ListTablesRequest(ListTablesRequest &&) = default ;
    ListTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesRequest() = default ;
    ListTablesRequest& operator=(const ListTablesRequest &) = default ;
    ListTablesRequest& operator=(ListTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->includeExtendedProperties_ == nullptr && this->name_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->parentMetaEntityId_ == nullptr && this->sortBy_ == nullptr && this->tableTypes_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListTablesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // includeExtendedProperties Field Functions 
    bool hasIncludeExtendedProperties() const { return this->includeExtendedProperties_ != nullptr;};
    void deleteIncludeExtendedProperties() { this->includeExtendedProperties_ = nullptr;};
    inline bool getIncludeExtendedProperties() const { DARABONBA_PTR_GET_DEFAULT(includeExtendedProperties_, false) };
    inline ListTablesRequest& setIncludeExtendedProperties(bool includeExtendedProperties) { DARABONBA_PTR_SET_VALUE(includeExtendedProperties_, includeExtendedProperties) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTablesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTablesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTablesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTablesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentMetaEntityId Field Functions 
    bool hasParentMetaEntityId() const { return this->parentMetaEntityId_ != nullptr;};
    void deleteParentMetaEntityId() { this->parentMetaEntityId_ = nullptr;};
    inline string getParentMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(parentMetaEntityId_, "") };
    inline ListTablesRequest& setParentMetaEntityId(string parentMetaEntityId) { DARABONBA_PTR_SET_VALUE(parentMetaEntityId_, parentMetaEntityId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTablesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tableTypes Field Functions 
    bool hasTableTypes() const { return this->tableTypes_ != nullptr;};
    void deleteTableTypes() { this->tableTypes_ = nullptr;};
    inline const vector<string> & getTableTypes() const { DARABONBA_PTR_GET_CONST(tableTypes_, vector<string>) };
    inline vector<string> getTableTypes() { DARABONBA_PTR_GET(tableTypes_, vector<string>) };
    inline ListTablesRequest& setTableTypes(const vector<string> & tableTypes) { DARABONBA_PTR_SET_VALUE(tableTypes_, tableTypes) };
    inline ListTablesRequest& setTableTypes(vector<string> && tableTypes) { DARABONBA_PTR_SET_RVALUE(tableTypes_, tableTypes) };


  protected:
    // The comment. Fuzzy match is supported.
    shared_ptr<string> comment_ {};
    shared_ptr<bool> includeExtendedProperties_ {};
    // The name. Fuzzy match is supported.
    shared_ptr<string> name_ {};
    // The sort order. Default value: Asc. Valid values:
    // - Asc: ascending order
    // - Desc: descending order
    shared_ptr<string> order_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The page size. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the parent-level metadata entity. You can obtain this value from the response of the ListDatabases or ListSchemas operation. For more information, see [Metadata entity concepts](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // - The value can be the database to which the table belongs. The ParentMetaEntityId format is `${EntityType}:${InstanceID or encoded URL}:${DataCatalogIdentifier}:${DatabaseName}`. Use an empty string as a placeholder for levels that do not exist.
    // 
    // - The value can also be the database schema to which the table belongs. The ParentMetaEntityId format is `${EntityType}:${InstanceID or encoded URL}:${DataCatalogIdentifier}:${DatabaseName}:${SchemaName}`. Use an empty string as a placeholder for levels that do not exist.
    // 
    // > - You can set ParentMetaEntityId to a database schema only when the database type supports schemas (`maxcompute/holo/postgresql/sqlserver/hybriddb_for_postgresql/oracle`, and the three-level model must be enabled for the maxcompute type). Otherwise, you can set this parameter only to a database.
    // > - For the maxcompute and dlf types, use an empty string as a placeholder for the instance ID. For the maxcompute type, the database name is the MaxCompute project name.
    // > - For the starrocks type, the data catalog identifier is the catalog name. For the dlf type, the data catalog identifier is the catalog ID. Other types do not support the catalog level. Use an empty string as a placeholder.
    // 
    // The following examples show the ParentMetaEntityId formats for common types:
    // 
    // - `maxcompute-project:::project_name`
    // 
    // - `maxcompute-schema:::project_name:schema_name` (only when the three-level model is enabled for the project)
    // 
    // - `dlf-database::catalog_id:database_name`
    // 
    // - `hms-database:instance_id::database_name`
    // 
    // - `holo-schema:instance_id::database_name:schema_name`
    // 
    // - `mysql-database:(instance_id|encoded_jdbc_url)::database_name`
    // 
    // > Where:  
    // > - `instance_id`: The instance ID. This value is required when the data source is registered in instance mode.
    // > - `encoded_jdbc_url`: The URL-encoded JDBC connection string. This value is required when the data source is registered by using a connection string.
    // > - `catalog_id`: The DLF catalog ID.
    // > - `project_name`: The MaxCompute project name.
    // > - `database_name`: The database name.
    // > - `schema_name`: The schema name.
    // 
    // This parameter is required.
    shared_ptr<string> parentMetaEntityId_ {};
    // The field by which to sort the results. Default value: CreateTime. Valid values:
    // - CreateTime: creation time
    // - ModifyTime: modification time
    // - Name: name
    // - TableType: table type
    shared_ptr<string> sortBy_ {};
    // The list of table types to query. If this parameter is left empty, all types are queried.
    shared_ptr<vector<string>> tableTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
