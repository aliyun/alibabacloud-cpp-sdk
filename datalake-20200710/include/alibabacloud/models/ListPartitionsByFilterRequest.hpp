// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONSBYFILTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONSBYFILTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListPartitionsByFilterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionsByFilterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(IsShareSd, isShareSd_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionsByFilterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(IsShareSd, isShareSd_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListPartitionsByFilterRequest() = default ;
    ListPartitionsByFilterRequest(const ListPartitionsByFilterRequest &) = default ;
    ListPartitionsByFilterRequest(ListPartitionsByFilterRequest &&) = default ;
    ListPartitionsByFilterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionsByFilterRequest() = default ;
    ListPartitionsByFilterRequest& operator=(const ListPartitionsByFilterRequest &) = default ;
    ListPartitionsByFilterRequest& operator=(ListPartitionsByFilterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->filter_ == nullptr && return this->isShareSd_ == nullptr && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr
        && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListPartitionsByFilterRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListPartitionsByFilterRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListPartitionsByFilterRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // isShareSd Field Functions 
    bool hasIsShareSd() const { return this->isShareSd_ != nullptr;};
    void deleteIsShareSd() { this->isShareSd_ = nullptr;};
    inline bool isShareSd() const { DARABONBA_PTR_GET_DEFAULT(isShareSd_, false) };
    inline ListPartitionsByFilterRequest& setIsShareSd(bool isShareSd) { DARABONBA_PTR_SET_VALUE(isShareSd_, isShareSd) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListPartitionsByFilterRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPartitionsByFilterRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListPartitionsByFilterRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The expression of the query condition. The following operators are supported:
    // 
    // *   Comparison operators: =, <>, ! =, <, <=, >, >=. For example: ds > 20240101.
    // *   Logical operators: AND, OR, and NOT. Example: ds like \\"20240%\\".
    // *   BETWEEN operator: specifies a range. For example: ds BETWEEN 20240101 AND 20241201.
    // *   IN operator: Used to specify a specific set of values. Example: ds IN (20240101, 20240102).
    std::shared_ptr<string> filter_ = nullptr;
    // Specifies whether to share the column information in the SD of the partition. Valid values:
    // 
    // *   true: shared
    // *   false: does not share the data.
    std::shared_ptr<bool> isShareSd_ = nullptr;
    // The page turning token, which is used to obtain the next page of data. If not provided in the response result, a string ("") or empty string (") is empty string.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The size of each page. The maximum size is 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Indicates the name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
