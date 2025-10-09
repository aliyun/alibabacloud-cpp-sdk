// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTablesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTablesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(TableTypes, tableTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListTablesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ParentMetaEntityId, parentMetaEntityId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(TableTypes, tableTypesShrink_);
    };
    ListTablesShrinkRequest() = default ;
    ListTablesShrinkRequest(const ListTablesShrinkRequest &) = default ;
    ListTablesShrinkRequest(ListTablesShrinkRequest &&) = default ;
    ListTablesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTablesShrinkRequest() = default ;
    ListTablesShrinkRequest& operator=(const ListTablesShrinkRequest &) = default ;
    ListTablesShrinkRequest& operator=(ListTablesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->name_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->parentMetaEntityId_ != nullptr
        && this->sortBy_ != nullptr && this->tableTypesShrink_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ListTablesShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTablesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTablesShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTablesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTablesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // parentMetaEntityId Field Functions 
    bool hasParentMetaEntityId() const { return this->parentMetaEntityId_ != nullptr;};
    void deleteParentMetaEntityId() { this->parentMetaEntityId_ = nullptr;};
    inline string parentMetaEntityId() const { DARABONBA_PTR_GET_DEFAULT(parentMetaEntityId_, "") };
    inline ListTablesShrinkRequest& setParentMetaEntityId(string parentMetaEntityId) { DARABONBA_PTR_SET_VALUE(parentMetaEntityId_, parentMetaEntityId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTablesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tableTypesShrink Field Functions 
    bool hasTableTypesShrink() const { return this->tableTypesShrink_ != nullptr;};
    void deleteTableTypesShrink() { this->tableTypesShrink_ = nullptr;};
    inline string tableTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(tableTypesShrink_, "") };
    inline ListTablesShrinkRequest& setTableTypesShrink(string tableTypesShrink) { DARABONBA_PTR_SET_VALUE(tableTypesShrink_, tableTypesShrink) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The parent metadata entity ID. You can refer to the responses of the ListDatabases or ListSchemas operation and [Description of concepts related to metadata entities.](https://help.aliyun.com/document_detail/2880092.html)
    // 
    // *   The parent metadata entity is a database: The format of `ParentMetaEntityId` is `${EntityType}:${Instance ID or encoded URL}:${Catalog Identifier}:${Database Name}`. Use an empty string (\\`""\\`) as a placeholder for any non-existent level.
    // *   The parent metadata entity is a database schema:. The format of `ParentMetaEntityId` is `${EntityType}:${Instance ID or encoded URL}:${Catalog Identifier}:${Database Name}:${Schema Name}`. Use an empty string (\\`""\\`) as a placeholder for any non-existent level.
    // 
    // >  The schema level in `ParentMetaEntityId` is supported only for database types that support schemas, such as MaxCompute (with schema enabled), Hologres, PostgreSQL, SQL Server, HybridDB for PostgreSQL, and Oracle.``
    // 
    // >  For MaxCompute and DLF types, use empty strings as the instance ID. For MaxCompute, the database name is the same as the project name.
    // 
    // >  For the StarRocks type, the catalog identifier is the catalog name. For the DLF type, it refers to the catalog ID. Other types do not support a catalog-level hierarchy and the catalog identifier must be replaced with an empty string as a placeholder.
    // 
    // Examples of common ParentMetaEntityId formats
    // 
    // `maxcompute-project:::project_name`
    // 
    // `maxcompute-schema:::project_name:schema_name` (for MaxCompute projects with schema enabled)
    // 
    // `dlf-database::catalog_id:database_name`
    // 
    // `hms-database:instance_id::database_name`
    // 
    // `holo-schema:instance_id::database_name:schema_name`
    // 
    // `mysql-database:(instance_id|encoded_jdbc_url)::database_name`
    // 
    // > \\
    // `instance_id`: The instance ID, required when the data source is registered in instance mode.\\
    // `encoded_jdbc_url`: The JDBC connection string that has been URL encoded, required for the data source registered via a connection string.\\
    // `catalog_id`: The DLF catalog ID.\\
    // `project_name`: The MaxCompute project name.\\
    // `database_name`: The database name.\\
    // `schema_name`: The schema name.
    // 
    // This parameter is required.
    std::shared_ptr<string> parentMetaEntityId_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> tableTypesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
