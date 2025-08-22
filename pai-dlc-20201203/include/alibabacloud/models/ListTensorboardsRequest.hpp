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
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->displayName_ != nullptr && this->endTime_ != nullptr && this->jobId_ != nullptr && this->order_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->paymentType_ != nullptr && this->quotaId_ != nullptr && this->showOwn_ != nullptr && this->sortBy_ != nullptr
        && this->sourceId_ != nullptr && this->sourceType_ != nullptr && this->startTime_ != nullptr && this->status_ != nullptr && this->tensorboardId_ != nullptr
        && this->userId_ != nullptr && this->username_ != nullptr && this->verbose_ != nullptr && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListTensorboardsRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListTensorboardsRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTensorboardsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListTensorboardsRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTensorboardsRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTensorboardsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTensorboardsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListTensorboardsRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline ListTensorboardsRequest& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // showOwn Field Functions 
    bool hasShowOwn() const { return this->showOwn_ != nullptr;};
    void deleteShowOwn() { this->showOwn_ = nullptr;};
    inline bool showOwn() const { DARABONBA_PTR_GET_DEFAULT(showOwn_, false) };
    inline ListTensorboardsRequest& setShowOwn(bool showOwn) { DARABONBA_PTR_SET_VALUE(showOwn_, showOwn) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTensorboardsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListTensorboardsRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListTensorboardsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTensorboardsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTensorboardsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tensorboardId Field Functions 
    bool hasTensorboardId() const { return this->tensorboardId_ != nullptr;};
    void deleteTensorboardId() { this->tensorboardId_ = nullptr;};
    inline string tensorboardId() const { DARABONBA_PTR_GET_DEFAULT(tensorboardId_, "") };
    inline ListTensorboardsRequest& setTensorboardId(string tensorboardId) { DARABONBA_PTR_SET_VALUE(tensorboardId_, tensorboardId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListTensorboardsRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListTensorboardsRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline ListTensorboardsRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListTensorboardsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The instance visibility.
    // 
    // *   PUBLIC: TensorBoard instances are visible to all members in the workspace.
    // *   PRIVATE: TensorBoard instances are visible only to you and the administrator of the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The TensorBoard instance name.
    std::shared_ptr<string> displayName_ = nullptr;
    // The end time of the query. Use the UTC time when the TensorBoard instance is created to filter data. If you leave this parameter empty, the default value is the current time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The job ID used to filter TensorBoard instances. For more information about how to obtain the ID of a job, see [ListJobs](https://help.aliyun.com/document_detail/459676.html).
    std::shared_ptr<string> jobId_ = nullptr;
    // The sorting order.
    // 
    // *   desc
    // *   asc
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Minimum value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of TensorBoard instances per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The billing method of TensorBoard instances.
    // 
    // *   Free: the TensorBoard instance that uses free resources.
    // *   Postpaid: the TensorBoard instance that uses pay-as-you-go resources.
    std::shared_ptr<string> paymentType_ = nullptr;
    // The resource quota ID.
    // 
    // > 
    // 
    // *   Only whitelisted users can use resource quotas to create TensorBoard instances. If you want to use this feature, contact us.
    // 
    // *   This parameter takes effect only when TensorBoard instances use resource quotas.
    std::shared_ptr<string> quotaId_ = nullptr;
    // Specifies whether to return only the TensorBoard instances created by the current logon account.
    std::shared_ptr<bool> showOwn_ = nullptr;
    // The returned field used to sort TensorBoard instances.
    // 
    // *   DisplayName: the name of the TensorBoard instance.
    // *   GmtCreateTime: the time when the TensorBoard instance is created.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The data source ID. For more information about how to obtain the ID of a job, see [ListJobs](https://help.aliyun.com/document_detail/459676.html).
    std::shared_ptr<string> sourceId_ = nullptr;
    // The data source associated with the TensorBoard instance. This parameter is no longer used. Only Deep Learning Containers (DLC) training jobs are supported.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The start time of the query. Use the UTC time when the TensorBoard instance is created to filter data. If you leave this parameter empty, the default value is seven days before the current time.
    std::shared_ptr<string> startTime_ = nullptr;
    // The TensorBoard instance status. Valid values:
    // 
    // *   Creating
    // *   Running
    // *   Stopped
    // *   Succeeded
    // *   Failed
    std::shared_ptr<string> status_ = nullptr;
    // The TensorBoard instance ID used to filter TensorBoard instances.
    std::shared_ptr<string> tensorboardId_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The username.
    std::shared_ptr<string> username_ = nullptr;
    // Specifies whether to return the information about the TensorBoard instance.
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> verbose_ = nullptr;
    // The workspace ID. Obtain a list of TensorBoard instances based on the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
