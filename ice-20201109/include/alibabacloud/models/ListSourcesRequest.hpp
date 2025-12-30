// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FilterState, filterState_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortByModifiedTime, sortByModifiedTime_);
      DARABONBA_PTR_TO_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_TO_JSON(SourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FilterState, filterState_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortByModifiedTime, sortByModifiedTime_);
      DARABONBA_PTR_FROM_JSON(SourceLocationName, sourceLocationName_);
      DARABONBA_PTR_FROM_JSON(SourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ListSourcesRequest() = default ;
    ListSourcesRequest(const ListSourcesRequest &) = default ;
    ListSourcesRequest(ListSourcesRequest &&) = default ;
    ListSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSourcesRequest() = default ;
    ListSourcesRequest& operator=(const ListSourcesRequest &) = default ;
    ListSourcesRequest& operator=(ListSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterState_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->sortByModifiedTime_ == nullptr && this->sourceLocationName_ == nullptr
        && this->sourceName_ == nullptr && this->sourceType_ == nullptr; };
    // filterState Field Functions 
    bool hasFilterState() const { return this->filterState_ != nullptr;};
    void deleteFilterState() { this->filterState_ = nullptr;};
    inline bool getFilterState() const { DARABONBA_PTR_GET_DEFAULT(filterState_, false) };
    inline ListSourcesRequest& setFilterState(bool filterState) { DARABONBA_PTR_SET_VALUE(filterState_, filterState) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline string getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, "") };
    inline ListSourcesRequest& setPageNo(string pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListSourcesRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListSourcesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortByModifiedTime Field Functions 
    bool hasSortByModifiedTime() const { return this->sortByModifiedTime_ != nullptr;};
    void deleteSortByModifiedTime() { this->sortByModifiedTime_ = nullptr;};
    inline string getSortByModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(sortByModifiedTime_, "") };
    inline ListSourcesRequest& setSortByModifiedTime(string sortByModifiedTime) { DARABONBA_PTR_SET_VALUE(sortByModifiedTime_, sortByModifiedTime) };


    // sourceLocationName Field Functions 
    bool hasSourceLocationName() const { return this->sourceLocationName_ != nullptr;};
    void deleteSourceLocationName() { this->sourceLocationName_ = nullptr;};
    inline string getSourceLocationName() const { DARABONBA_PTR_GET_DEFAULT(sourceLocationName_, "") };
    inline ListSourcesRequest& setSourceLocationName(string sourceLocationName) { DARABONBA_PTR_SET_VALUE(sourceLocationName_, sourceLocationName) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline ListSourcesRequest& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListSourcesRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // Specifies whether to ignore sources marked as deleted.
    shared_ptr<bool> filterState_ {};
    // The page number. Default value: 1.
    shared_ptr<string> pageNo_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The sorting order. By default, the query results are sorted by creation time in descending order. Valid values: asc and desc.
    shared_ptr<string> sortBy_ {};
    // The sorting order by modification time. Valid values: asc and desc.
    shared_ptr<string> sortByModifiedTime_ {};
    // The name of the source location.
    shared_ptr<string> sourceLocationName_ {};
    // The name of the source.
    shared_ptr<string> sourceName_ {};
    // The source type. Valid values: vodSource and liveSource.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
