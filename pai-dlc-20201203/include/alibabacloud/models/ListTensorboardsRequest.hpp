// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTENSORBOARDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTENSORBOARDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListTensorboardsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTensorboardsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TensorboardId, tensorboardId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTensorboardsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TensorboardId, tensorboardId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListTensorboardsRequest() = default ;
    ListTensorboardsRequest(const ListTensorboardsRequest &) = default ;
    ListTensorboardsRequest(ListTensorboardsRequest &&) = default ;
    ListTensorboardsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTensorboardsRequest() = default ;
    ListTensorboardsRequest& operator=(const ListTensorboardsRequest &) = default ;
    ListTensorboardsRequest& operator=(ListTensorboardsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && this->displayName_ == nullptr && this->endTime_ == nullptr && this->jobId_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->paymentType_ == nullptr && this->quotaId_ == nullptr && this->showOwn_ == nullptr && this->sortBy_ == nullptr
        && this->sourceId_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->tensorboardId_ == nullptr
        && this->userId_ == nullptr && this->username_ == nullptr && this->verbose_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListTensorboardsRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListTensorboardsRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTensorboardsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListTensorboardsRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTensorboardsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTensorboardsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTensorboardsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListTensorboardsRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline ListTensorboardsRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // showOwn Field Functions 
    bool hasShowOwn() const { return this->showOwn_ != nullptr;};
    void deleteShowOwn() { this->showOwn_ = nullptr;};
    inline bool getShowOwn() const { DARABONBA_PTR_GET_DEFAULT(showOwn_, false) };
    inline ListTensorboardsRequest& setShowOwn(bool showOwn) { DARABONBA_PTR_SET_VALUE(showOwn_, showOwn) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTensorboardsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListTensorboardsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListTensorboardsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTensorboardsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTensorboardsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tensorboardId Field Functions 
    bool hasTensorboardId() const { return this->tensorboardId_ != nullptr;};
    void deleteTensorboardId() { this->tensorboardId_ = nullptr;};
    inline string getTensorboardId() const { DARABONBA_PTR_GET_DEFAULT(tensorboardId_, "") };
    inline ListTensorboardsRequest& setTensorboardId(string tensorboardId) { DARABONBA_PTR_SET_VALUE(tensorboardId_, tensorboardId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListTensorboardsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListTensorboardsRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool getVerbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListTensorboardsRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListTensorboardsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the job. Valid values:
    // - PUBLIC: Visible to all users in this workspace.
    // - PRIVATE: Visible only to you and administrators in this workspace.
    shared_ptr<string> accessibility_ {};
    // The display name of the Tensorboard instance.
    shared_ptr<string> displayName_ {};
    // The end time of the query range. The creation time of the Tensorboard instance in UTC is used for filtering. If this parameter is left empty, the default value is the current time.
    shared_ptr<string> endTime_ {};
    // Filters Tensorboard instances by DLC job ID. See [ListJobs](https://help.aliyun.com/document_detail/459676.html) to obtain the job ID.
    shared_ptr<string> jobId_ {};
    // The sort order. Valid values:
    // - desc: Descending order.
    // - asc: Ascending order.
    shared_ptr<string> order_ {};
    // The page number of the page to return in a paged query. The value starts from 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of Tensorboard instances to return per page in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The billing type of the Tensorboard instance. Valid values:
    // - Free: The Tensorboard instance uses free resources.
    // - Postpaid: The Tensorboard instance uses pay-as-you-go resources.
    shared_ptr<string> paymentType_ {};
    // The resource quota ID.
    // > - Currently, only whitelisted users can use resource quota resources to create Tensorboard instances. To use this feature, contact us.
    // > - This value is valid only when the Tensorboard instance uses resource quota resources.
    shared_ptr<string> quotaId_ {};
    // Specifies whether to return only Tensorboard instances created by the current user.
    shared_ptr<bool> showOwn_ {};
    // Sorts the results by the following fields. Valid values:
    // - DisplayName: The job name.
    // - GmtCreateTime: The job creation time.
    shared_ptr<string> sortBy_ {};
    // The data source ID. See [ListJobs](https://help.aliyun.com/document_detail/459676.html) to obtain the job ID.
    shared_ptr<string> sourceId_ {};
    // The data source type. Currently, only DLC training jobs are supported, which means the value is job.
    shared_ptr<string> sourceType_ {};
    // The start time of the query range. The creation time of the Tensorboard instance in UTC is used for filtering. If this parameter is left empty, the default value is 7 days before the current time.
    shared_ptr<string> startTime_ {};
    // The Tensorboard status. Valid values:
    // - Creating: Being created.
    // - Running: Running.
    // - Stopped: Stopped.
    // - Succeeded: Succeeded.
    // - Failed: Failed.
    shared_ptr<string> status_ {};
    // Filters the Tensorboard list by Tensorboard ID.
    shared_ptr<string> tensorboardId_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
    // The username.
    shared_ptr<string> username_ {};
    // Specifies whether to show details. Valid values:
    // - true: Show details.
    // - false: Do not show details.
    shared_ptr<bool> verbose_ {};
    // The workspace ID. The Tensorboard list is retrieved based on the workspace ID. <props="china">See [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
