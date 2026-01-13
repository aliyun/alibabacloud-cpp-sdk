// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filterShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortByShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filterShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortByShrink_);
    };
    ListJobsShrinkRequest() = default ;
    ListJobsShrinkRequest(const ListJobsShrinkRequest &) = default ;
    ListJobsShrinkRequest(ListJobsShrinkRequest &&) = default ;
    ListJobsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobsShrinkRequest() = default ;
    ListJobsShrinkRequest& operator=(const ListJobsShrinkRequest &) = default ;
    ListJobsShrinkRequest& operator=(ListJobsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterShrink_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortByShrink_ == nullptr; };
    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline ListJobsShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortByShrink Field Functions 
    bool hasSortByShrink() const { return this->sortByShrink_ != nullptr;};
    void deleteSortByShrink() { this->sortByShrink_ = nullptr;};
    inline string getSortByShrink() const { DARABONBA_PTR_GET_DEFAULT(sortByShrink_, "") };
    inline ListJobsShrinkRequest& setSortByShrink(string sortByShrink) { DARABONBA_PTR_SET_VALUE(sortByShrink_, sortByShrink) };


  protected:
    // Queries job filter conditions.
    shared_ptr<string> filterShrink_ {};
    // The page number.
    // 
    // Pages start from page 1.
    // 
    // Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page. Default value: 50. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The sorting method.
    shared_ptr<string> sortByShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
