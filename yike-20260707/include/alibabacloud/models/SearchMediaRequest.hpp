// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class SearchMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Match, match_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    SearchMediaRequest() = default ;
    SearchMediaRequest(const SearchMediaRequest &) = default ;
    SearchMediaRequest(SearchMediaRequest &&) = default ;
    SearchMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaRequest() = default ;
    SearchMediaRequest& operator=(const SearchMediaRequest &) = default ;
    SearchMediaRequest& operator=(SearchMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->match_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->scrollToken_ == nullptr && this->sortBy_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline SearchMediaRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline string getMatch() const { DARABONBA_PTR_GET_DEFAULT(match_, "") };
    inline SearchMediaRequest& setMatch(string match) { DARABONBA_PTR_SET_VALUE(match_, match) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchMediaRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMediaRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string getScrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline SearchMediaRequest& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchMediaRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The category ID. You can obtain the ID by using the following methods:
    shared_ptr<int64_t> categoryId_ {};
    // The filter condition. For syntax rules, see [Media asset search protocol](https://www.alibabacloud.com/help/en/ims/developer-reference/media-asset-search-filter-description).
    shared_ptr<string> match_ {};
    // The current page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries to return per page. Default value: 10. Maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The pagination token. A 32-character string. You do not need to set this parameter for the first search request. When the search request matches data, the server returns this parameter value to record the current position of the search data. Record the returned parameter value and set this parameter in the next search request based on the following requirements or suggestions: This parameter must be set if you want to traverse all data that matches the search conditions. If the PageNo parameter value exceeds 200, set this parameter to optimize search performance. You can only page forward, with a maximum paging distance of 1000 media assets.
    shared_ptr<string> scrollToken_ {};
    // The sort fields and sort orders, separated by commas (,). Format: field1:Desc,field2:Asc. The direction can only be Asc or Desc.
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
