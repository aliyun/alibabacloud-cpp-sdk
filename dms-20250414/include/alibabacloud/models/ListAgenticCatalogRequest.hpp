// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTICCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTICCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListAgenticCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgenticCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgenticCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogType, catalogType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
    };
    ListAgenticCatalogRequest() = default ;
    ListAgenticCatalogRequest(const ListAgenticCatalogRequest &) = default ;
    ListAgenticCatalogRequest(ListAgenticCatalogRequest &&) = default ;
    ListAgenticCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgenticCatalogRequest() = default ;
    ListAgenticCatalogRequest& operator=(const ListAgenticCatalogRequest &) = default ;
    ListAgenticCatalogRequest& operator=(ListAgenticCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->searchKey_ == nullptr; };
    // catalogType Field Functions 
    bool hasCatalogType() const { return this->catalogType_ != nullptr;};
    void deleteCatalogType() { this->catalogType_ = nullptr;};
    inline string getCatalogType() const { DARABONBA_PTR_GET_DEFAULT(catalogType_, "") };
    inline ListAgenticCatalogRequest& setCatalogType(string catalogType) { DARABONBA_PTR_SET_VALUE(catalogType_, catalogType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAgenticCatalogRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAgenticCatalogRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListAgenticCatalogRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


  protected:
    // The catalog type. This parameter is used to filter catalogs by exact type. Valid values:
    // 
    // - **JDBC**: relational database catalog
    // - **DataLake**: data lake catalog
    // - **Dataset**: knowledge base catalog
    shared_ptr<string> catalogType_ {};
    // The maximum number of entries to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. You do not need to specify this parameter for the first query. To query the next page, set this parameter to the NextToken value returned from the previous query.
    shared_ptr<string> nextToken_ {};
    // The search keyword for the catalog name. Matches catalogs by name prefix.
    shared_ptr<string> searchKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
