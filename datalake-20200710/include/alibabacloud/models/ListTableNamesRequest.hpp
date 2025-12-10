// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLENAMESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLENAMESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListTableNamesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableNamesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TableNamePattern, tableNamePattern_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableNamesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TableNamePattern, tableNamePattern_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
    };
    ListTableNamesRequest() = default ;
    ListTableNamesRequest(const ListTableNamesRequest &) = default ;
    ListTableNamesRequest(ListTableNamesRequest &&) = default ;
    ListTableNamesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableNamesRequest() = default ;
    ListTableNamesRequest& operator=(const ListTableNamesRequest &) = default ;
    ListTableNamesRequest& operator=(ListTableNamesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->nextPageToken_ == nullptr && return this->pageSize_ == nullptr && return this->tableNamePattern_ == nullptr && return this->tableType_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline ListTableNamesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline ListTableNamesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListTableNamesRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTableNamesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tableNamePattern Field Functions 
    bool hasTableNamePattern() const { return this->tableNamePattern_ != nullptr;};
    void deleteTableNamePattern() { this->tableNamePattern_ = nullptr;};
    inline string tableNamePattern() const { DARABONBA_PTR_GET_DEFAULT(tableNamePattern_, "") };
    inline ListTableNamesRequest& setTableNamePattern(string tableNamePattern) { DARABONBA_PTR_SET_VALUE(tableNamePattern_, tableNamePattern) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline ListTableNamesRequest& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The pagination token, which is returned from the returned result. If none is returned, an empty string or \\"\\"is passed.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The data table name matches the regular expression.
    std::shared_ptr<string> tableNamePattern_ = nullptr;
    // The type of the data table. Valid values:
    // 
    // MANAGED_TABLE: internal table
    // 
    // EXTERNAL_TABLE: foreign table
    // 
    // VIRTUAL_VIEW: virtual view
    // 
    // INDEX_TABLE: index table
    // 
    // MATERIALIZED_VIEW: materialized view.
    std::shared_ptr<string> tableType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
