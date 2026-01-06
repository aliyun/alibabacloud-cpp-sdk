// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScanRunsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScanRunsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_TO_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_TO_JSON(DataQualityScanId, dataQualityScanId_);
      DARABONBA_ANY_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScanRunsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeFrom, createTimeFrom_);
      DARABONBA_PTR_FROM_JSON(CreateTimeTo, createTimeTo_);
      DARABONBA_PTR_FROM_JSON(DataQualityScanId, dataQualityScanId_);
      DARABONBA_ANY_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDataQualityScanRunsRequest() = default ;
    ListDataQualityScanRunsRequest(const ListDataQualityScanRunsRequest &) = default ;
    ListDataQualityScanRunsRequest(ListDataQualityScanRunsRequest &&) = default ;
    ListDataQualityScanRunsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScanRunsRequest() = default ;
    ListDataQualityScanRunsRequest& operator=(const ListDataQualityScanRunsRequest &) = default ;
    ListDataQualityScanRunsRequest& operator=(ListDataQualityScanRunsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeFrom_ == nullptr
        && this->createTimeTo_ == nullptr && this->dataQualityScanId_ == nullptr && this->filter_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->projectId_ == nullptr && this->sortBy_ == nullptr && this->status_ == nullptr; };
    // createTimeFrom Field Functions 
    bool hasCreateTimeFrom() const { return this->createTimeFrom_ != nullptr;};
    void deleteCreateTimeFrom() { this->createTimeFrom_ = nullptr;};
    inline int64_t getCreateTimeFrom() const { DARABONBA_PTR_GET_DEFAULT(createTimeFrom_, 0L) };
    inline ListDataQualityScanRunsRequest& setCreateTimeFrom(int64_t createTimeFrom) { DARABONBA_PTR_SET_VALUE(createTimeFrom_, createTimeFrom) };


    // createTimeTo Field Functions 
    bool hasCreateTimeTo() const { return this->createTimeTo_ != nullptr;};
    void deleteCreateTimeTo() { this->createTimeTo_ = nullptr;};
    inline int64_t getCreateTimeTo() const { DARABONBA_PTR_GET_DEFAULT(createTimeTo_, 0L) };
    inline ListDataQualityScanRunsRequest& setCreateTimeTo(int64_t createTimeTo) { DARABONBA_PTR_SET_VALUE(createTimeTo_, createTimeTo) };


    // dataQualityScanId Field Functions 
    bool hasDataQualityScanId() const { return this->dataQualityScanId_ != nullptr;};
    void deleteDataQualityScanId() { this->dataQualityScanId_ = nullptr;};
    inline int64_t getDataQualityScanId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityScanId_, 0L) };
    inline ListDataQualityScanRunsRequest& setDataQualityScanId(int64_t dataQualityScanId) { DARABONBA_PTR_SET_VALUE(dataQualityScanId_, dataQualityScanId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline     const Darabonba::Json & getFilter() const { DARABONBA_GET(filter_) };
    Darabonba::Json & getFilter() { DARABONBA_GET(filter_) };
    inline ListDataQualityScanRunsRequest& setFilter(const Darabonba::Json & filter) { DARABONBA_SET_VALUE(filter_, filter) };
    inline ListDataQualityScanRunsRequest& setFilter(Darabonba::Json && filter) { DARABONBA_SET_RVALUE(filter_, filter) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityScanRunsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityScanRunsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListDataQualityScanRunsRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDataQualityScanRunsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDataQualityScanRunsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The earliest time when the data quality monitor starts to run.
    shared_ptr<int64_t> createTimeFrom_ {};
    // The latest time when the data quality monitor starts to run.
    shared_ptr<int64_t> createTimeTo_ {};
    // The ID of the data quality monitor.
    shared_ptr<int64_t> dataQualityScanId_ {};
    // The extended query filter. Supported parameters:
    // 
    // *   TaskInstanceId
    Darabonba::Json filter_ {};
    // The page number of the results. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of records per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The list of sorting fields. Supports fields such as last modified time and creation time. Format: "SortField+SortOrder (Desc/Asc)", where Asc is the default. Valid values:
    // 
    // *   CreateTime (Desc/Asc)
    // *   Id (Desc/Asc)
    shared_ptr<string> sortBy_ {};
    // The status of the data quality check result.
    // 
    // *   Pass
    // *   Running
    // *   Error
    // *   Fail
    // *   Warn
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
