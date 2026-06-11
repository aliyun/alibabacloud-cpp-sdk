// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATALAKETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATALAKETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListDataLakeTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataLakeTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TableNamePattern, tableNamePattern_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataLakeTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TableNamePattern, tableNamePattern_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDataLakeTableRequest() = default ;
    ListDataLakeTableRequest(const ListDataLakeTableRequest &) = default ;
    ListDataLakeTableRequest(ListDataLakeTableRequest &&) = default ;
    ListDataLakeTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataLakeTableRequest() = default ;
    ListDataLakeTableRequest& operator=(const ListDataLakeTableRequest &) = default ;
    ListDataLakeTableRequest& operator=(ListDataLakeTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dbName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->tableNamePattern_ == nullptr && this->tableType_ == nullptr
        && this->tid_ == nullptr && this->workspaceId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline ListDataLakeTableRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline ListDataLakeTableRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDataLakeTableRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDataLakeTableRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // tableNamePattern Field Functions 
    bool hasTableNamePattern() const { return this->tableNamePattern_ != nullptr;};
    void deleteTableNamePattern() { this->tableNamePattern_ = nullptr;};
    inline string getTableNamePattern() const { DARABONBA_PTR_GET_DEFAULT(tableNamePattern_, "") };
    inline ListDataLakeTableRequest& setTableNamePattern(string tableNamePattern) { DARABONBA_PTR_SET_VALUE(tableNamePattern_, tableNamePattern) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline ListDataLakeTableRequest& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ListDataLakeTableRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline ListDataLakeTableRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the data catalog.
    // 
    // This parameter is required.
    shared_ptr<string> catalogName_ {};
    // The name of the database.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // The number of entries to return on each page. The maximum value is 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to retrieve the next page of results. To retrieve the next page, set this parameter to the \\`NextToken\\` value from the previous response. If you do not specify this parameter, the first page is returned.
    // 
    // - If **NextToken** is empty, there are no more queries.
    // 
    // - If **NextToken** has a value, the value is the token to start the next query.
    shared_ptr<string> nextToken_ {};
    // The name of the metadata table. This parameter supports regular expressions.
    shared_ptr<string> tableNamePattern_ {};
    // The type of the table. Valid values:
    // 
    // - MANAGED_TABLE: Internal table.
    // 
    // - EXTERNAL_TABLE: External table.
    // 
    // - VIRTUAL_VIEW: Virtual view.
    // 
    // - INDEX_TABLE: Index table.
    // 
    // - MATERIALIZED_VIEW: Materialized view.
    shared_ptr<string> tableType_ {};
    // The tenant ID.
    // 
    // > Hover over your profile picture in the upper-right corner of the DMS console to obtain the tenant ID. For details, see [View tenant information](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
    // The ID of the workspace.
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
