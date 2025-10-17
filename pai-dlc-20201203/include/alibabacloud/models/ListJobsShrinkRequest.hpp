// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListJobsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(BusinessUserId, businessUserId_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayNameSearchMode, displayNameSearchMode_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FromAllWorkspaces, fromAllWorkspaces_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceQuotaName, resourceQuotaName_);
      DARABONBA_PTR_TO_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(UserIdForFilter, userIdForFilter_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(BusinessUserId, businessUserId_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayNameSearchMode, displayNameSearchMode_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FromAllWorkspaces, fromAllWorkspaces_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceQuotaName, resourceQuotaName_);
      DARABONBA_PTR_FROM_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(UserIdForFilter, userIdForFilter_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->businessUserId_ == nullptr && return this->caller_ == nullptr && return this->displayName_ == nullptr && return this->displayNameSearchMode_ == nullptr && return this->endTime_ == nullptr
        && return this->fromAllWorkspaces_ == nullptr && return this->jobId_ == nullptr && return this->jobIds_ == nullptr && return this->jobType_ == nullptr && return this->order_ == nullptr
        && return this->oversoldInfo_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->paymentType_ == nullptr && return this->pipelineId_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceQuotaName_ == nullptr && return this->showOwn_ == nullptr && return this->sortBy_ == nullptr && return this->startTime_ == nullptr
        && return this->status_ == nullptr && return this->tagsShrink_ == nullptr && return this->userIdForFilter_ == nullptr && return this->username_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListJobsShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // businessUserId Field Functions 
    bool hasBusinessUserId() const { return this->businessUserId_ != nullptr;};
    void deleteBusinessUserId() { this->businessUserId_ = nullptr;};
    inline string businessUserId() const { DARABONBA_PTR_GET_DEFAULT(businessUserId_, "") };
    inline ListJobsShrinkRequest& setBusinessUserId(string businessUserId) { DARABONBA_PTR_SET_VALUE(businessUserId_, businessUserId) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListJobsShrinkRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListJobsShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameSearchMode Field Functions 
    bool hasDisplayNameSearchMode() const { return this->displayNameSearchMode_ != nullptr;};
    void deleteDisplayNameSearchMode() { this->displayNameSearchMode_ = nullptr;};
    inline string displayNameSearchMode() const { DARABONBA_PTR_GET_DEFAULT(displayNameSearchMode_, "") };
    inline ListJobsShrinkRequest& setDisplayNameSearchMode(string displayNameSearchMode) { DARABONBA_PTR_SET_VALUE(displayNameSearchMode_, displayNameSearchMode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListJobsShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fromAllWorkspaces Field Functions 
    bool hasFromAllWorkspaces() const { return this->fromAllWorkspaces_ != nullptr;};
    void deleteFromAllWorkspaces() { this->fromAllWorkspaces_ = nullptr;};
    inline bool fromAllWorkspaces() const { DARABONBA_PTR_GET_DEFAULT(fromAllWorkspaces_, false) };
    inline ListJobsShrinkRequest& setFromAllWorkspaces(bool fromAllWorkspaces) { DARABONBA_PTR_SET_VALUE(fromAllWorkspaces_, fromAllWorkspaces) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string jobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline ListJobsShrinkRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobsShrinkRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListJobsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // oversoldInfo Field Functions 
    bool hasOversoldInfo() const { return this->oversoldInfo_ != nullptr;};
    void deleteOversoldInfo() { this->oversoldInfo_ = nullptr;};
    inline string oversoldInfo() const { DARABONBA_PTR_GET_DEFAULT(oversoldInfo_, "") };
    inline ListJobsShrinkRequest& setOversoldInfo(string oversoldInfo) { DARABONBA_PTR_SET_VALUE(oversoldInfo_, oversoldInfo) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListJobsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListJobsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListJobsShrinkRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListJobsShrinkRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListJobsShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceQuotaName Field Functions 
    bool hasResourceQuotaName() const { return this->resourceQuotaName_ != nullptr;};
    void deleteResourceQuotaName() { this->resourceQuotaName_ = nullptr;};
    inline string resourceQuotaName() const { DARABONBA_PTR_GET_DEFAULT(resourceQuotaName_, "") };
    inline ListJobsShrinkRequest& setResourceQuotaName(string resourceQuotaName) { DARABONBA_PTR_SET_VALUE(resourceQuotaName_, resourceQuotaName) };


    // showOwn Field Functions 
    bool hasShowOwn() const { return this->showOwn_ != nullptr;};
    void deleteShowOwn() { this->showOwn_ = nullptr;};
    inline bool showOwn() const { DARABONBA_PTR_GET_DEFAULT(showOwn_, false) };
    inline ListJobsShrinkRequest& setShowOwn(bool showOwn) { DARABONBA_PTR_SET_VALUE(showOwn_, showOwn) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListJobsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListJobsShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListJobsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // userIdForFilter Field Functions 
    bool hasUserIdForFilter() const { return this->userIdForFilter_ != nullptr;};
    void deleteUserIdForFilter() { this->userIdForFilter_ = nullptr;};
    inline string userIdForFilter() const { DARABONBA_PTR_GET_DEFAULT(userIdForFilter_, "") };
    inline ListJobsShrinkRequest& setUserIdForFilter(string userIdForFilter) { DARABONBA_PTR_SET_VALUE(userIdForFilter_, userIdForFilter) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListJobsShrinkRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListJobsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The job visibility. Valid values:
    // 
    // *   PUBLIC: The job is visible to all members in the workspace.
    // *   PRIVATE: The job is visible only to you and the administrator of the workspace.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The ID of the user associated with the job.
    std::shared_ptr<string> businessUserId_ = nullptr;
    // The caller.
    std::shared_ptr<string> caller_ = nullptr;
    // The job name. Fuzzy query is supported. The name is case-insensitive. Wildcards are not supported. For example, if you enter test, test-job1, job-test, job-test2, or job-test can be matched, and job-t1 cannot be matched. The default value null indicates any job name.
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> displayNameSearchMode_ = nullptr;
    // The end time of the query. Use the job creation time to filter data. The default value is the current time.
    std::shared_ptr<string> endTime_ = nullptr;
    // Specifies whether to query a list of jobs across workspaces. This parameter must be used together with `ShowOwn=true`. You can use this parameter to query a list of jobs recently submitted by the current user.
    std::shared_ptr<bool> fromAllWorkspaces_ = nullptr;
    // The job ID. Fuzzy query is supported. The name is case-insensitive. Wildcards are not supported. The default value null indicates any job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> jobIds_ = nullptr;
    // The job type. The default value null indicates any type. Valid values:
    // 
    // *   TFJob
    // *   PyTorchJob
    // *   XGBoostJob
    // *   OneFlowJob
    // *   ElasticBatchJob
    std::shared_ptr<string> jobType_ = nullptr;
    // The sorting order. Valid values:
    // 
    // *   desc (default)
    // *   asc
    std::shared_ptr<string> order_ = nullptr;
    // The Idle resource information. Valid values:
    // 
    // *   ForbiddenQuotaOverSold
    // *   ForceQuotaOverSold
    // *   AcceptQuotaOverSold-true (true indicates that the job uses idle resources.)
    // *   AcceptQuotaOverSold-false (false indicates that the job uses guaranteed resources.)
    std::shared_ptr<string> oversoldInfo_ = nullptr;
    // The number of the page to return for the current query. Minimum value: 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of jobs per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The type of the resource. Valid values:
    // 
    // *   PrePaid: Resource quota
    // *   Spot: Preemptible resources
    // *   PostPaid: Public resources
    std::shared_ptr<string> paymentType_ = nullptr;
    // The specific pipeline ID used to filter jobs.
    std::shared_ptr<string> pipelineId_ = nullptr;
    // The resource group ID. For information about how to obtain the ID of a dedicated resource group, see [Manage resource quota](https://help.aliyun.com/document_detail/2651299.html).
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource quota name used to filter jobs. Fuzzy search is supported. Wildcards are not supported. The default value null indicates that jobs are not filtered by resource quota name.
    std::shared_ptr<string> resourceQuotaName_ = nullptr;
    // Specifies whether to query only the jobs submitted by the current user.
    std::shared_ptr<bool> showOwn_ = nullptr;
    // The sorting field. Valid values:
    // 
    // *   DisplayName
    // *   JobType
    // *   Status
    // *   GmtCreateTime
    // *   GmtFinishTime
    std::shared_ptr<string> sortBy_ = nullptr;
    // The start time of the query. Use the job creation time to filter data. The default value is the current time minus seven days. In other words, if you do not configure the StartTime and EndTime parameters, the system queries the job list in the last seven days.
    std::shared_ptr<string> startTime_ = nullptr;
    // The job status. Valid values:
    // 
    // *   Creating
    // *   Queuing
    // *   Bidding (only available for spot jobs that use Lingjun resources)
    // *   EnvPreparing
    // *   SanityChecking
    // *   Running
    // *   Restarting
    // *   Stopping
    // *   SucceededReserving
    // *   FailedReserving
    // *   Succeeded
    // *   Failed
    // *   Stopped
    std::shared_ptr<string> status_ = nullptr;
    // The tags.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The user ID used to filter jobs.
    std::shared_ptr<string> userIdForFilter_ = nullptr;
    // The username used to filter jobs. Fuzzy search is supported. Wildcards are not supported. The default value null indicates that jobs are not filtered by username.
    std::shared_ptr<string> username_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
