// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICTABLEBASEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICTABLEBASEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticTableBaseInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticTableBaseInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticTableBaseInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseUuid, databaseUuid_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
    };
    ListAgenticTableBaseInfoRequest() = default ;
    ListAgenticTableBaseInfoRequest(const ListAgenticTableBaseInfoRequest &) = default ;
    ListAgenticTableBaseInfoRequest(ListAgenticTableBaseInfoRequest &&) = default ;
    ListAgenticTableBaseInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticTableBaseInfoRequest() = default ;
    ListAgenticTableBaseInfoRequest& operator=(const ListAgenticTableBaseInfoRequest &) = default ;
    ListAgenticTableBaseInfoRequest& operator=(ListAgenticTableBaseInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseUuid_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->searchKey_ == nullptr && this->sortFieldName_ == nullptr && this->sortOrder_ == nullptr
        && this->tableType_ == nullptr; };
    // databaseUuid Field Functions 
    bool hasDatabaseUuid() const { return this->databaseUuid_ != nullptr;};
    void deleteDatabaseUuid() { this->databaseUuid_ = nullptr;};
    inline string getDatabaseUuid() const { DARABONBA_PTR_GET_DEFAULT(databaseUuid_, "") };
    inline ListAgenticTableBaseInfoRequest& setDatabaseUuid(string databaseUuid) { DARABONBA_PTR_SET_VALUE(databaseUuid_, databaseUuid) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgenticTableBaseInfoRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgenticTableBaseInfoRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListAgenticTableBaseInfoRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // sortFieldName Field Functions 
    bool hasSortFieldName() const { return this->sortFieldName_ != nullptr;};
    void deleteSortFieldName() { this->sortFieldName_ = nullptr;};
    inline string getSortFieldName() const { DARABONBA_PTR_GET_DEFAULT(sortFieldName_, "") };
    inline ListAgenticTableBaseInfoRequest& setSortFieldName(string sortFieldName) { DARABONBA_PTR_SET_VALUE(sortFieldName_, sortFieldName) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListAgenticTableBaseInfoRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline ListAgenticTableBaseInfoRequest& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


  protected:
    // The UUID of the database to which the table belongs. You can obtain the UUID by calling the ListAgenticDatabase or SearchAgenticDatabase operation.
    // 
    // This parameter is required.
    shared_ptr<string> databaseUuid_ {};
    // The maximum number of entries to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. You do not need to specify this parameter for the first query. When you query the next page, set this parameter to the NextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The search keyword. The system matches the keyword against table names. The results are sorted by exact match, prefix match, and contains match. Within the same match level, the results are sorted by the field specified by SortFieldName.
    shared_ptr<string> searchKey_ {};
    // The field by which to sort the results. This parameter is case-sensitive. Valid values:
    // 
    // - **name**: Sorts the results by table name. This value is recommended.
    // - **numRows**: Sorts the results by the number of rows.
    // - **storeCapacity**: Sorts the results by the storage capacity.
    // 
    // If you specify other values, the request fails. If you do not specify this parameter, the results are returned in the default order, and the SortOrder parameter does not take effect.
    shared_ptr<string> sortFieldName_ {};
    // The sort order. This parameter takes effect only when SortFieldName is specified. This parameter is not case-sensitive. Valid values:
    // 
    // - **ASC**: Sorts the results in ascending order. This is the default value and is recommended.
    // - **DESC**: Sorts the results in descending order.
    // 
    // If you specify other values, the request fails.
    shared_ptr<string> sortOrder_ {};
    // The table type. The results are strictly filtered by this type. Valid values:
    // 
    // - **NORMAL**: Regular table.
    // - **VIEW**: View.
    // - **FOREIGN**: Foreign table.
    // - **SYNONYM**: Synonym. This value is supported only for Oracle data sources.
    shared_ptr<string> tableType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
