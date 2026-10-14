// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogUuid, catalogUuid_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SortFieldName, sortFieldName_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListAgenticDatabaseRequest() = default ;
    ListAgenticDatabaseRequest(const ListAgenticDatabaseRequest &) = default ;
    ListAgenticDatabaseRequest(ListAgenticDatabaseRequest &&) = default ;
    ListAgenticDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticDatabaseRequest() = default ;
    ListAgenticDatabaseRequest& operator=(const ListAgenticDatabaseRequest &) = default ;
    ListAgenticDatabaseRequest& operator=(ListAgenticDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogUuid_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->searchKey_ == nullptr && this->sortFieldName_ == nullptr && this->sortOrder_ == nullptr; };
    // catalogUuid Field Functions 
    bool hasCatalogUuid() const { return this->catalogUuid_ != nullptr;};
    void deleteCatalogUuid() { this->catalogUuid_ = nullptr;};
    inline string getCatalogUuid() const { DARABONBA_PTR_GET_DEFAULT(catalogUuid_, "") };
    inline ListAgenticDatabaseRequest& setCatalogUuid(string catalogUuid) { DARABONBA_PTR_SET_VALUE(catalogUuid_, catalogUuid) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgenticDatabaseRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgenticDatabaseRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListAgenticDatabaseRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // sortFieldName Field Functions 
    bool hasSortFieldName() const { return this->sortFieldName_ != nullptr;};
    void deleteSortFieldName() { this->sortFieldName_ = nullptr;};
    inline string getSortFieldName() const { DARABONBA_PTR_GET_DEFAULT(sortFieldName_, "") };
    inline ListAgenticDatabaseRequest& setSortFieldName(string sortFieldName) { DARABONBA_PTR_SET_VALUE(sortFieldName_, sortFieldName) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListAgenticDatabaseRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The UUID of the catalog to which the database belongs. You can obtain the UUID by calling ListAgenticCatalog or SearchAgenticCatalog.
    // 
    // This parameter is required.
    shared_ptr<string> catalogUuid_ {};
    // The maximum number of entries to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. You do not need to specify this parameter for the first query. When you query the next page, set this parameter to the NextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The search keyword used to match the database name or the prefix of the fully qualified name.
    shared_ptr<string> searchKey_ {};
    // The field used for sorting. This parameter is case-sensitive. Valid values:
    // 
    // - **name**: Sorts by database name.
    // - **qualifiedName**: Sorts by the fully qualified name of the database.
    // 
    // If you specify other values, the request fails. If you do not specify this parameter, the results are returned in the default order, and the SortOrder parameter does not take effect.
    shared_ptr<string> sortFieldName_ {};
    // The sort order. This parameter takes effect only when SortFieldName is specified. This parameter is case-insensitive. Valid values:
    // 
    // - **ASC** (default): Ascending order.
    // - **DESC**: Descending order.
    // 
    // If you specify other values, the request fails.
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
