// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SearchMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomFilters, customFilters_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(Match, match_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
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
    virtual bool empty() const override { return this->customFilters_ == nullptr
        && this->entityId_ == nullptr && this->match_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->scrollToken_ == nullptr
        && this->searchLibName_ == nullptr && this->sortBy_ == nullptr; };
    // customFilters Field Functions 
    bool hasCustomFilters() const { return this->customFilters_ != nullptr;};
    void deleteCustomFilters() { this->customFilters_ = nullptr;};
    inline string getCustomFilters() const { DARABONBA_PTR_GET_DEFAULT(customFilters_, "") };
    inline SearchMediaRequest& setCustomFilters(string customFilters) { DARABONBA_PTR_SET_VALUE(customFilters_, customFilters) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SearchMediaRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


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


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string getSearchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchMediaRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchMediaRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The custom filter. This is a JSON string. Supported fields include integer field intField1 and string fields strField1 and strField2. Each field supports only one matching type. Filters on different fields are combined with an AND relationship.
    shared_ptr<string> customFilters_ {};
    // The entity ID.
    shared_ptr<string> entityId_ {};
    // The filter condition. <props="china">For syntax rules, see [Media asset search protocol](https://help.aliyun.com/document_detail/2584256.html).
    shared_ptr<string> match_ {};
    // The current page number. Default value: 1.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page. Default value: 10. Maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The pagination token. This is a 32-character field. You do not need to set this parameter for the first search request. When the search request matches data, the server returns this parameter value to record the current position of the search data. Record the returned parameter value and set this parameter in the next search request according to the following requirements or suggestions: This parameter must be set when you need to traverse all data that matches the search conditions. When the PageNo parameter value exceeds 200, set this parameter to optimize search performance. You can only page forward, and the maximum paging distance is 1000 media assets.
    shared_ptr<string> scrollToken_ {};
    // The search library.
    shared_ptr<string> searchLibName_ {};
    // The sort fields and sort orders, separated by commas (,).
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
