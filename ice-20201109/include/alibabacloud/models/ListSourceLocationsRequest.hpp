// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCELOCATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCELOCATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSourceLocationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourceLocationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterState, filterState_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortByModifiedTime, sortByModifiedTime_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourceLocationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterState, filterState_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortByModifiedTime, sortByModifiedTime_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
    };
    ListSourceLocationsRequest() = default ;
    ListSourceLocationsRequest(const ListSourceLocationsRequest &) = default ;
    ListSourceLocationsRequest(ListSourceLocationsRequest &&) = default ;
    ListSourceLocationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourceLocationsRequest() = default ;
    ListSourceLocationsRequest& operator=(const ListSourceLocationsRequest &) = default ;
    ListSourceLocationsRequest& operator=(ListSourceLocationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterState_ == nullptr
        && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->sortBy_ == nullptr && return this->sortByModifiedTime_ == nullptr && return this->sourceLocationName_ == nullptr; };
    // filterState Field Functions 
    bool hasFilterState() const { return this->filterState_ != nullptr;};
    void deleteFilterState() { this->filterState_ = nullptr;};
    inline bool filterState() const { DARABONBA_PTR_GET_DEFAULT(filterState_, false) };
    inline ListSourceLocationsRequest& setFilterState(bool filterState) { DARABONBA_PTR_SET_VALUE(filterState_, filterState) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListSourceLocationsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSourceLocationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListSourceLocationsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortByModifiedTime Field Functions 
    bool hasSortByModifiedTime() const { return this->sortByModifiedTime_ != nullptr;};
    void deleteSortByModifiedTime() { this->sortByModifiedTime_ = nullptr;};
    inline string sortByModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(sortByModifiedTime_, "") };
    inline ListSourceLocationsRequest& setSortByModifiedTime(string sortByModifiedTime) { DARABONBA_PTR_SET_VALUE(sortByModifiedTime_, sortByModifiedTime) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string sourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ListSourceLocationsRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


  protected:
    // Specifies whether to ignore source locations marked as deleted. A value of true means ignoring source locations marked as deleted.
    std::shared_ptr<bool> filterState_ = nullptr;
    // *   The page number.
    // *   Default value: 1.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The number of entries per page. Default value: 20. Valid values: 1 to 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The sorting order. By default, the query results are sorted by creation time in descending order.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The sorting order of the source locations based on the time when they were last modified.
    std::shared_ptr<string> sortByModifiedTime_ = nullptr;
    // The name of the source location.
    std::shared_ptr<string> sourceLocationName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
