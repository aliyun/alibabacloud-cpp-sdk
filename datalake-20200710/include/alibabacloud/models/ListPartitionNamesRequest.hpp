// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPARTITIONNAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPARTITIONNAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListPartitionNamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPartitionNamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PartialPartValues, partialPartValues_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListPartitionNamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PartialPartValues, partialPartValues_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListPartitionNamesRequest() = default ;
    ListPartitionNamesRequest(const ListPartitionNamesRequest &) = default ;
    ListPartitionNamesRequest(ListPartitionNamesRequest &&) = default ;
    ListPartitionNamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPartitionNamesRequest() = default ;
    ListPartitionNamesRequest& operator=(const ListPartitionNamesRequest &) = default ;
    ListPartitionNamesRequest& operator=(ListPartitionNamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr && return this->partialPartValues_ == nullptr && return this->tableName_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListPartitionNamesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListPartitionNamesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListPartitionNamesRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPartitionNamesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // partialPartValues Field Functions 
    bool hasPartialPartValues() const { return this->partialPartValues_ != nullptr;};
    void deletePartialPartValues() { this->partialPartValues_ = nullptr;};
    inline const vector<string> & partialPartValues() const { DARABONBA_PTR_GET_CONST(partialPartValues_, vector<string>) };
    inline vector<string> partialPartValues() { DARABONBA_PTR_GET(partialPartValues_, vector<string>) };
    inline ListPartitionNamesRequest& setPartialPartValues(const vector<string> & partialPartValues) { DARABONBA_PTR_SET_VALUE(partialPartValues_, partialPartValues) };
    inline ListPartitionNamesRequest& setPartialPartValues(vector<string> && partialPartValues) { DARABONBA_PTR_SET_RVALUE(partialPartValues_, partialPartValues) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListPartitionNamesRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The pagination token. The token is obtained in the returned results. If no pagination token is returned, set this parameter to an empty string.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of entries per page. Maximum value: 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The values of the partition key columns. You can pass in only the values of specific partition key columns to query the names of all lower-level partitions.
    std::shared_ptr<vector<string>> partialPartValues_ = nullptr;
    // The name of the data table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
