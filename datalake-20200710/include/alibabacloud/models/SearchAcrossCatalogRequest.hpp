// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SortCriterion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchAcrossCatalogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAcrossCatalogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogIds, catalogIds_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(SearchTypes, searchTypes_);
      DARABONBA_PTR_TO_JSON(SortCriteria, sortCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAcrossCatalogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogIds, catalogIds_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(SearchTypes, searchTypes_);
      DARABONBA_PTR_FROM_JSON(SortCriteria, sortCriteria_);
    };
    SearchAcrossCatalogRequest() = default ;
    SearchAcrossCatalogRequest(const SearchAcrossCatalogRequest &) = default ;
    SearchAcrossCatalogRequest(SearchAcrossCatalogRequest &&) = default ;
    SearchAcrossCatalogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAcrossCatalogRequest() = default ;
    SearchAcrossCatalogRequest& operator=(const SearchAcrossCatalogRequest &) = default ;
    SearchAcrossCatalogRequest& operator=(SearchAcrossCatalogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogIds_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->searchText_ == nullptr && return this->searchTypes_ == nullptr && return this->sortCriteria_ == nullptr; };
    // catalogIds Field Functions 
    bool hasCatalogIds() const { return this->catalogIds_ != nullptr;};
    void deleteCatalogIds() { this->catalogIds_ = nullptr;};
    inline const vector<string> & catalogIds() const { DARABONBA_PTR_GET_CONST(catalogIds_, vector<string>) };
    inline vector<string> catalogIds() { DARABONBA_PTR_GET(catalogIds_, vector<string>) };
    inline SearchAcrossCatalogRequest& setCatalogIds(const vector<string> & catalogIds) { DARABONBA_PTR_SET_VALUE(catalogIds_, catalogIds) };
    inline SearchAcrossCatalogRequest& setCatalogIds(vector<string> && catalogIds) { DARABONBA_PTR_SET_RVALUE(catalogIds_, catalogIds) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline SearchAcrossCatalogRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline SearchAcrossCatalogRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline SearchAcrossCatalogRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // searchTypes Field Functions 
    bool hasSearchTypes() const { return this->searchTypes_ != nullptr;};
    void deleteSearchTypes() { this->searchTypes_ = nullptr;};
    inline const vector<string> & searchTypes() const { DARABONBA_PTR_GET_CONST(searchTypes_, vector<string>) };
    inline vector<string> searchTypes() { DARABONBA_PTR_GET(searchTypes_, vector<string>) };
    inline SearchAcrossCatalogRequest& setSearchTypes(const vector<string> & searchTypes) { DARABONBA_PTR_SET_VALUE(searchTypes_, searchTypes) };
    inline SearchAcrossCatalogRequest& setSearchTypes(vector<string> && searchTypes) { DARABONBA_PTR_SET_RVALUE(searchTypes_, searchTypes) };


    // sortCriteria Field Functions 
    bool hasSortCriteria() const { return this->sortCriteria_ != nullptr;};
    void deleteSortCriteria() { this->sortCriteria_ = nullptr;};
    inline const vector<SortCriterion> & sortCriteria() const { DARABONBA_PTR_GET_CONST(sortCriteria_, vector<SortCriterion>) };
    inline vector<SortCriterion> sortCriteria() { DARABONBA_PTR_GET(sortCriteria_, vector<SortCriterion>) };
    inline SearchAcrossCatalogRequest& setSortCriteria(const vector<SortCriterion> & sortCriteria) { DARABONBA_PTR_SET_VALUE(sortCriteria_, sortCriteria) };
    inline SearchAcrossCatalogRequest& setSortCriteria(vector<SortCriterion> && sortCriteria) { DARABONBA_PTR_SET_RVALUE(sortCriteria_, sortCriteria) };


  protected:
    // The catalog IDs. If this parameter is empty, all catalogs are queried.
    std::shared_ptr<vector<string>> catalogIds_ = nullptr;
    // The page number of the queried page.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries on the queried page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The search text.
    std::shared_ptr<string> searchText_ = nullptr;
    // The search types. Valid values: ALL, CATALOG, DATABASE, and TABLE.
    std::shared_ptr<vector<string>> searchTypes_ = nullptr;
    // The sorting rules.
    std::shared_ptr<vector<SortCriterion>> sortCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
