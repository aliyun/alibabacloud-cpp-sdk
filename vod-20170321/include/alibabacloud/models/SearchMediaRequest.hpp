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
    virtual bool empty() const override { this->fields_ != nullptr
        && this->match_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->scrollToken_ != nullptr && this->searchType_ != nullptr
        && this->sortBy_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline string fields() const { DARABONBA_PTR_GET_DEFAULT(fields_, "") };
    inline SearchMediaRequest& setFields(string fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline string match() const { DARABONBA_PTR_GET_DEFAULT(match_, "") };
    inline SearchMediaRequest& setMatch(string match) { DARABONBA_PTR_SET_VALUE(match_, match) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline SearchMediaRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchMediaRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scrollToken Field Functions 
    bool hasScrollToken() const { return this->scrollToken_ != nullptr;};
    void deleteScrollToken() { this->scrollToken_ = nullptr;};
    inline string scrollToken() const { DARABONBA_PTR_GET_DEFAULT(scrollToken_, "") };
    inline SearchMediaRequest& setScrollToken(string scrollToken) { DARABONBA_PTR_SET_VALUE(scrollToken_, scrollToken) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline SearchMediaRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchMediaRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The media asset fields to return in the query results.
    // 
    // By default, only the basic media asset fields are returned. You can specify additional media asset fields that need to be returned in the request. For more information, see the "API examples" section of the [Search for media asset information](https://help.aliyun.com/document_detail/99179.html) topic.
    std::shared_ptr<string> fields_ = nullptr;
    // The filter condition. For more information about the syntax, see [Protocol for media asset search](https://help.aliyun.com/document_detail/86991.html).
    std::shared_ptr<string> match_ = nullptr;
    // The number of the page to return. Default value: **1**.
    // 
    // > If the value of this parameter exceeds **200**, we recommend that you set the ScrollToken parameter as well.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries to return on each page. Default value: **10**. Maximum value: **100**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The pagination identifier. The password must be 32 characters in length The first time you call this operation for each new search, you do not need to specify this parameter. The value of this parameter is returned each time data records that meet the specified filter condition are found. The value is used to record the current position of queried data. Record the returned parameter value and set this parameter according to the following requirements during the next search:
    // 
    // *   If SearchType is set to **video** or **audio** and you need to traverse all data that meets the filter criteria, you must set the ScrollToken parameter.
    // *   If the value of the PageNo parameter exceeds **200**, we recommend that you set this parameter to optimize search performance.
    std::shared_ptr<string> scrollToken_ = nullptr;
    // The type of the media asset that you want to query. Default value: video. Valid values:
    // 
    // *   **video**
    // *   **audio**
    // *   **image**
    // *   **attached**
    // 
    // > If this parameter is set to **video** or **audio** and you want to traverse all data that meets the filter criteria, you must set the ScrollToken parameter.
    std::shared_ptr<string> searchType_ = nullptr;
    // The sort field and order. Separate multiple values with commas (,). Default value: CreationTime:Desc. Valid values:
    // 
    // *   **CreationTime:Desc**: The results are sorted in reverse chronological order based on the creation time.
    // *   **CreationTime:Asc**: The results are sorted in chronological order based on the creation time.
    // 
    // > * For more information about the sort field, see "Sort field" in the [Search for media asset information](https://help.aliyun.com/document_detail/99179.html) topic.
    // > * To obtain the first 5,000 data records that meet the specified filter criteria, you can specify a maximum of three sort fields.
    // > * To obtain all the data records that meet the specified filter criteria, you can specify only one sort field.
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
