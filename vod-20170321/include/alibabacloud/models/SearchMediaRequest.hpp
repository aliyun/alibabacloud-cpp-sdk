// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Match, match_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
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
    virtual bool empty() const override { return this->fields_ == nullptr
        && this->match_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->scrollToken_ == nullptr && this->searchType_ == nullptr
        && this->sortBy_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string getFields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline SearchMediaRequest& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


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


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline SearchMediaRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchMediaRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The media asset fields to return in the search results.
    // 
    // By default, only basic media asset fields are returned. You can specify additional media asset fields to return. For more information, see [Usage examples](https://help.aliyun.com/document_detail/99179.html).
    shared_ptr<string> fields_ {};
    // The filter conditions. For syntax rules, see [Search protocol syntax](https://help.aliyun.com/document_detail/86991.html).
    shared_ptr<string> match_ {};
    // The page number. Default value: **1**.
    // 
    // > If this parameter exceeds **200**, set the ScrollToken parameter as well.
    shared_ptr<int32_t> pageNo_ {};
    // The number of records per page. Default value: **10**. Maximum value: **100**.
    shared_ptr<int32_t> pageSize_ {};
    // The pagination token. The value is a 32-character string.
    // You do not need to set this parameter for the first search request. When the search request matches data, the server returns this parameter value, which records the current position of the search data. Record the returned value and set this parameter in the next search request based on the following requirements or recommendations:
    // - If SearchType is set to **video** or **audio** and you need to traverse all data that matches the search conditions, this parameter is required.
    // - If PageNo exceeds **200**, set this parameter to optimize search performance.
    shared_ptr<string> scrollToken_ {};
    // The type of media asset to search. Valid values:
    // 
    // - **video** (default): video.
    // - **audio**: audio.
    // - **image**: image.
    // - **attached**: auxiliary media asset.
    // 
    // > If this parameter is set to **video** or **audio** and you need to traverse all data that matches the search conditions, you must set the ScrollToken parameter.
    shared_ptr<string> searchType_ {};
    // The sort field and sort order. Separate multiple values with commas (,). Valid values:
    // - **CreationTime:Desc** (default): sorts by creation time in descending order.
    // - **CreationTime:Asc**: sorts by creation time in ascending order.
    // 
    // > - For sort field examples, see [Sort fields](https://help.aliyun.com/document_detail/99179.html).
    // > - When retrieving the first 5,000 records of search results, up to three sort fields are supported.
    // > - When retrieving all data that matches the search conditions, only one sort field is supported.
    shared_ptr<string> sortBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
