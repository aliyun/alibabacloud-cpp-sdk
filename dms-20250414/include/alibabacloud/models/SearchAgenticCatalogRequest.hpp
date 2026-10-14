// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHAGENTICCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHAGENTICCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class SearchAgenticCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAgenticCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(CatalogUuids, catalogUuids_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAgenticCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(CatalogUuids, catalogUuids_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
    };
    SearchAgenticCatalogRequest() = default ;
    SearchAgenticCatalogRequest(const SearchAgenticCatalogRequest &) = default ;
    SearchAgenticCatalogRequest(SearchAgenticCatalogRequest &&) = default ;
    SearchAgenticCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAgenticCatalogRequest() = default ;
    SearchAgenticCatalogRequest& operator=(const SearchAgenticCatalogRequest &) = default ;
    SearchAgenticCatalogRequest& operator=(SearchAgenticCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogType_ == nullptr
        && this->catalogUuids_ == nullptr && this->dbType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->searchKey_ == nullptr; };
    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string getCatalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline SearchAgenticCatalogRequest& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // catalogUuids Field Functions 
    bool hasCatalogUuids() const { return this->catalogUuids_ != nullptr;};
    void deleteCatalogUuids() { this->catalogUuids_ = nullptr;};
    inline string getCatalogUuids() const { DARABONBA_PTR_GET_DEFAULT(catalogUuids_, "") };
    inline SearchAgenticCatalogRequest& setCatalogUuids(string catalogUuids) { DARABONBA_PTR_SET_VALUE(catalogUuids_, catalogUuids) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline SearchAgenticCatalogRequest& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchAgenticCatalogRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchAgenticCatalogRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline SearchAgenticCatalogRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


  protected:
    // The catalog type. Filters catalogs by exact type. Valid values:
    // 
    // - **JDBC**: relational database catalog.
    // - **DataLake**: data lake catalog.
    // - **Dataset**: knowledge base catalog.
    shared_ptr<string> catalogType_ {};
    // The list of catalog UUIDs. Filters catalogs exactly by UUID. Separate multiple UUIDs with commas (,). You can specify up to 500 UUIDs, and null values are not allowed. If this parameter is specified along with other filter conditions, the conditions are combined by using the AND logical operator.
    shared_ptr<string> catalogUuids_ {};
    // The database type. Filters catalogs exactly by the database type of the associated data source. The value is the uppercase name of the database type, such as MYSQL.
    shared_ptr<string> dbType_ {};
    // The maximum number of entries to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. This parameter is not required for the first query. To query the next page, set this parameter to the NextToken value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The search keyword. It matches the catalog name, data source alias, or the prefix of the data source endpoint. A catalog is matched if any of these conditions are met.
    shared_ptr<string> searchKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
