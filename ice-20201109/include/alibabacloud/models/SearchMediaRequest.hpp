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
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScrollToken, scrollToken_);
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaRequest& obj) { 
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
    virtual bool empty() const override { this->entityId_ != nullptr
        && this->match_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->scrollToken_ != nullptr && this->searchLibName_ != nullptr
        && this->sortBy_ != nullptr; };
    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline SearchMediaRequest& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


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


    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline SearchMediaRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline SearchMediaRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    // The ID of the entity.
    std::shared_ptr<string> entityId_ = nullptr;
    // The filter conditions. For more information about the parameter syntax
    // <props="china">, see [Media asset search protocols](https://help.aliyun.com/document_detail/2584256.html).
    std::shared_ptr<string> match_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 50.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The pagination identifier. The value can be up to 32 characters in length. The first time you call this operation for each new search, you do not need to specify this parameter. The value of this parameter is returned each time data records that meet the specified filter condition are found. The value is used to record the current position of queried data. Record the returned parameter value and set this parameter according to the following requirements during the next search: If you need to traverse all data that meets the filter criteria, you must set the ScrollToken parameter. If the value of the PageNo parameter exceeds 200, we recommend that you set this parameter to optimize search performance. You can only page backward. You can page a maximum of 1,000 entries in an operation.
    std::shared_ptr<string> scrollToken_ = nullptr;
    // The search library.
    std::shared_ptr<string> searchLibName_ = nullptr;
    // The sort field and order. Separate multiple parameters with commas (,).
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
