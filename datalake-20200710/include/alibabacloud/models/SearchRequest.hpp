// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHREQUEST_HPP_
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
  class SearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchText, searchText_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
      DARABONBA_PTR_TO_JSON(SortCriteria, sortCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchText, searchText_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
      DARABONBA_PTR_FROM_JSON(SortCriteria, sortCriteria_);
    };
    SearchRequest() = default ;
    SearchRequest(const SearchRequest &) = default ;
    SearchRequest(SearchRequest &&) = default ;
    SearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRequest() = default ;
    SearchRequest& operator=(const SearchRequest &) = default ;
    SearchRequest& operator=(SearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->searchText_ == nullptr && return this->searchType_ == nullptr && return this->sortCriteria_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline SearchRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline SearchRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline SearchRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchText Field Functions 
    bool hasSearchText() const { return this->searchText_ != nullptr;};
    void deleteSearchText() { this->searchText_ = nullptr;};
    inline string searchText() const { DARABONBA_PTR_GET_DEFAULT(searchText_, "") };
    inline SearchRequest& setSearchText(string searchText) { DARABONBA_PTR_SET_VALUE(searchText_, searchText) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline SearchRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // sortCriteria Field Functions 
    bool hasSortCriteria() const { return this->sortCriteria_ != nullptr;};
    void deleteSortCriteria() { this->sortCriteria_ = nullptr;};
    inline const vector<SortCriterion> & sortCriteria() const { DARABONBA_PTR_GET_CONST(sortCriteria_, vector<SortCriterion>) };
    inline vector<SortCriterion> sortCriteria() { DARABONBA_PTR_GET(sortCriteria_, vector<SortCriterion>) };
    inline SearchRequest& setSortCriteria(const vector<SortCriterion> & sortCriteria) { DARABONBA_PTR_SET_VALUE(sortCriteria_, sortCriteria) };
    inline SearchRequest& setSortCriteria(vector<SortCriterion> && sortCriteria) { DARABONBA_PTR_SET_RVALUE(sortCriteria_, sortCriteria) };


  protected:
    // catalogid
    std::shared_ptr<string> catalogId_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The search text.
    std::shared_ptr<string> searchText_ = nullptr;
    // The search type.
    std::shared_ptr<string> searchType_ = nullptr;
    // The sorting rules.
    std::shared_ptr<vector<SortCriterion>> sortCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
