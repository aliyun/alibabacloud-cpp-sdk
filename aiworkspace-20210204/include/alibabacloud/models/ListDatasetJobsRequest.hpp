// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WithLogs, withLogs_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WithLogs, withLogs_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDatasetJobsRequest() = default ;
    ListDatasetJobsRequest(const ListDatasetJobsRequest &) = default ;
    ListDatasetJobsRequest(ListDatasetJobsRequest &&) = default ;
    ListDatasetJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetJobsRequest() = default ;
    ListDatasetJobsRequest& operator=(const ListDatasetJobsRequest &) = default ;
    ListDatasetJobsRequest& operator=(ListDatasetJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetVersion_ == nullptr
        && this->jobAction_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr
        && this->status_ == nullptr && this->withLogs_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string getDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline ListDatasetJobsRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string getJobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline ListDatasetJobsRequest& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetJobsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetJobsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetJobsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetJobsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDatasetJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // withLogs Field Functions 
    bool hasWithLogs() const { return this->withLogs_ != nullptr;};
    void deleteWithLogs() { this->withLogs_ = nullptr;};
    inline bool getWithLogs() const { DARABONBA_PTR_GET_DEFAULT(withLogs_, false) };
    inline ListDatasetJobsRequest& setWithLogs(bool withLogs) { DARABONBA_PTR_SET_VALUE(withLogs_, withLogs) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetJobsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the dataset version.
    shared_ptr<string> datasetVersion_ {};
    // The job action.
    shared_ptr<string> jobAction_ {};
    // The order in which to sort the results. This parameter is used with `SortBy`. Default: DESC.
    // 
    // - ASC: ascending order.
    // 
    // - DESC: descending order.
    shared_ptr<string> order_ {};
    // The page number. Pages are 1-indexed. Default: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The field by which to sort the results. By default, the results are sorted by `CreateTime` in descending order.
    shared_ptr<string> sortBy_ {};
    // The job status.
    shared_ptr<string> status_ {};
    shared_ptr<bool> withLogs_ {};
    // The ID of the workspace. To obtain this ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
