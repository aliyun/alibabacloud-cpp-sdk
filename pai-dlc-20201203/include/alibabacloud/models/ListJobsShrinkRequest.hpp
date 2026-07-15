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
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(DisplayNameSearchMode, displayNameSearchMode_);
      DARABONBA_PTR_TO_JSON(EnableAssignNode, enableAssignNode_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(FromAllWorkspaces, fromAllWorkspaces_);
      DARABONBA_PTR_TO_JSON(ImageSearch, imageSearch_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobIds, jobIds_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(NumericRangeField, numericRangeField_);
      DARABONBA_PTR_TO_JSON(NumericRangeMax, numericRangeMax_);
      DARABONBA_PTR_TO_JSON(NumericRangeMin, numericRangeMin_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ReasonSearch, reasonSearch_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceQuotaName, resourceQuotaName_);
      DARABONBA_PTR_TO_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TimeRangeField, timeRangeField_);
      DARABONBA_PTR_TO_JSON(UserCommandSearch, userCommandSearch_);
      DARABONBA_PTR_TO_JSON(UserIdForFilter, userIdForFilter_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(BusinessUserId, businessUserId_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(DisplayNameSearchMode, displayNameSearchMode_);
      DARABONBA_PTR_FROM_JSON(EnableAssignNode, enableAssignNode_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(FromAllWorkspaces, fromAllWorkspaces_);
      DARABONBA_PTR_FROM_JSON(ImageSearch, imageSearch_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobIds, jobIds_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(NumericRangeField, numericRangeField_);
      DARABONBA_PTR_FROM_JSON(NumericRangeMax, numericRangeMax_);
      DARABONBA_PTR_FROM_JSON(NumericRangeMin, numericRangeMin_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OversoldInfo, oversoldInfo_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ReasonSearch, reasonSearch_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceQuotaName, resourceQuotaName_);
      DARABONBA_PTR_FROM_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TimeRangeField, timeRangeField_);
      DARABONBA_PTR_FROM_JSON(UserCommandSearch, userCommandSearch_);
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
        && this->businessUserId_ == nullptr && this->caller_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->displayNameSearchMode_ == nullptr
        && this->enableAssignNode_ == nullptr && this->endTime_ == nullptr && this->fromAllWorkspaces_ == nullptr && this->imageSearch_ == nullptr && this->jobId_ == nullptr
        && this->jobIds_ == nullptr && this->jobType_ == nullptr && this->numericRangeField_ == nullptr && this->numericRangeMax_ == nullptr && this->numericRangeMin_ == nullptr
        && this->order_ == nullptr && this->oversoldInfo_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->paymentType_ == nullptr
        && this->pipelineId_ == nullptr && this->reasonSearch_ == nullptr && this->resourceId_ == nullptr && this->resourceQuotaName_ == nullptr && this->showOwn_ == nullptr
        && this->sortBy_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->tagsShrink_ == nullptr && this->templateId_ == nullptr
        && this->timeRangeField_ == nullptr && this->userCommandSearch_ == nullptr && this->userIdForFilter_ == nullptr && this->username_ == nullptr && this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string getAccessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListJobsShrinkRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // businessUserId Field Functions 
    bool hasBusinessUserId() const { return this->businessUserId_ != nullptr;};
    void deleteBusinessUserId() { this->businessUserId_ = nullptr;};
    inline string getBusinessUserId() const { DARABONBA_PTR_GET_DEFAULT(businessUserId_, "") };
    inline ListJobsShrinkRequest& setBusinessUserId(string businessUserId) { DARABONBA_PTR_SET_VALUE(businessUserId_, businessUserId) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListJobsShrinkRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListJobsShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListJobsShrinkRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // displayNameSearchMode Field Functions 
    bool hasDisplayNameSearchMode() const { return this->displayNameSearchMode_ != nullptr;};
    void deleteDisplayNameSearchMode() { this->displayNameSearchMode_ = nullptr;};
    inline string getDisplayNameSearchMode() const { DARABONBA_PTR_GET_DEFAULT(displayNameSearchMode_, "") };
    inline ListJobsShrinkRequest& setDisplayNameSearchMode(string displayNameSearchMode) { DARABONBA_PTR_SET_VALUE(displayNameSearchMode_, displayNameSearchMode) };


    // enableAssignNode Field Functions 
    bool hasEnableAssignNode() const { return this->enableAssignNode_ != nullptr;};
    void deleteEnableAssignNode() { this->enableAssignNode_ = nullptr;};
    inline string getEnableAssignNode() const { DARABONBA_PTR_GET_DEFAULT(enableAssignNode_, "") };
    inline ListJobsShrinkRequest& setEnableAssignNode(string enableAssignNode) { DARABONBA_PTR_SET_VALUE(enableAssignNode_, enableAssignNode) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListJobsShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fromAllWorkspaces Field Functions 
    bool hasFromAllWorkspaces() const { return this->fromAllWorkspaces_ != nullptr;};
    void deleteFromAllWorkspaces() { this->fromAllWorkspaces_ = nullptr;};
    inline bool getFromAllWorkspaces() const { DARABONBA_PTR_GET_DEFAULT(fromAllWorkspaces_, false) };
    inline ListJobsShrinkRequest& setFromAllWorkspaces(bool fromAllWorkspaces) { DARABONBA_PTR_SET_VALUE(fromAllWorkspaces_, fromAllWorkspaces) };


    // imageSearch Field Functions 
    bool hasImageSearch() const { return this->imageSearch_ != nullptr;};
    void deleteImageSearch() { this->imageSearch_ = nullptr;};
    inline string getImageSearch() const { DARABONBA_PTR_GET_DEFAULT(imageSearch_, "") };
    inline ListJobsShrinkRequest& setImageSearch(string imageSearch) { DARABONBA_PTR_SET_VALUE(imageSearch_, imageSearch) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline ListJobsShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobIds Field Functions 
    bool hasJobIds() const { return this->jobIds_ != nullptr;};
    void deleteJobIds() { this->jobIds_ = nullptr;};
    inline string getJobIds() const { DARABONBA_PTR_GET_DEFAULT(jobIds_, "") };
    inline ListJobsShrinkRequest& setJobIds(string jobIds) { DARABONBA_PTR_SET_VALUE(jobIds_, jobIds) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline ListJobsShrinkRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // numericRangeField Field Functions 
    bool hasNumericRangeField() const { return this->numericRangeField_ != nullptr;};
    void deleteNumericRangeField() { this->numericRangeField_ = nullptr;};
    inline string getNumericRangeField() const { DARABONBA_PTR_GET_DEFAULT(numericRangeField_, "") };
    inline ListJobsShrinkRequest& setNumericRangeField(string numericRangeField) { DARABONBA_PTR_SET_VALUE(numericRangeField_, numericRangeField) };


    // numericRangeMax Field Functions 
    bool hasNumericRangeMax() const { return this->numericRangeMax_ != nullptr;};
    void deleteNumericRangeMax() { this->numericRangeMax_ = nullptr;};
    inline int64_t getNumericRangeMax() const { DARABONBA_PTR_GET_DEFAULT(numericRangeMax_, 0L) };
    inline ListJobsShrinkRequest& setNumericRangeMax(int64_t numericRangeMax) { DARABONBA_PTR_SET_VALUE(numericRangeMax_, numericRangeMax) };


    // numericRangeMin Field Functions 
    bool hasNumericRangeMin() const { return this->numericRangeMin_ != nullptr;};
    void deleteNumericRangeMin() { this->numericRangeMin_ = nullptr;};
    inline int64_t getNumericRangeMin() const { DARABONBA_PTR_GET_DEFAULT(numericRangeMin_, 0L) };
    inline ListJobsShrinkRequest& setNumericRangeMin(int64_t numericRangeMin) { DARABONBA_PTR_SET_VALUE(numericRangeMin_, numericRangeMin) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListJobsShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // oversoldInfo Field Functions 
    bool hasOversoldInfo() const { return this->oversoldInfo_ != nullptr;};
    void deleteOversoldInfo() { this->oversoldInfo_ = nullptr;};
    inline string getOversoldInfo() const { DARABONBA_PTR_GET_DEFAULT(oversoldInfo_, "") };
    inline ListJobsShrinkRequest& setOversoldInfo(string oversoldInfo) { DARABONBA_PTR_SET_VALUE(oversoldInfo_, oversoldInfo) };


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


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListJobsShrinkRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline ListJobsShrinkRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // reasonSearch Field Functions 
    bool hasReasonSearch() const { return this->reasonSearch_ != nullptr;};
    void deleteReasonSearch() { this->reasonSearch_ = nullptr;};
    inline string getReasonSearch() const { DARABONBA_PTR_GET_DEFAULT(reasonSearch_, "") };
    inline ListJobsShrinkRequest& setReasonSearch(string reasonSearch) { DARABONBA_PTR_SET_VALUE(reasonSearch_, reasonSearch) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListJobsShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceQuotaName Field Functions 
    bool hasResourceQuotaName() const { return this->resourceQuotaName_ != nullptr;};
    void deleteResourceQuotaName() { this->resourceQuotaName_ = nullptr;};
    inline string getResourceQuotaName() const { DARABONBA_PTR_GET_DEFAULT(resourceQuotaName_, "") };
    inline ListJobsShrinkRequest& setResourceQuotaName(string resourceQuotaName) { DARABONBA_PTR_SET_VALUE(resourceQuotaName_, resourceQuotaName) };


    // showOwn Field Functions 
    bool hasShowOwn() const { return this->showOwn_ != nullptr;};
    void deleteShowOwn() { this->showOwn_ = nullptr;};
    inline bool getShowOwn() const { DARABONBA_PTR_GET_DEFAULT(showOwn_, false) };
    inline ListJobsShrinkRequest& setShowOwn(bool showOwn) { DARABONBA_PTR_SET_VALUE(showOwn_, showOwn) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListJobsShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListJobsShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListJobsShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline ListJobsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListJobsShrinkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // timeRangeField Field Functions 
    bool hasTimeRangeField() const { return this->timeRangeField_ != nullptr;};
    void deleteTimeRangeField() { this->timeRangeField_ = nullptr;};
    inline string getTimeRangeField() const { DARABONBA_PTR_GET_DEFAULT(timeRangeField_, "") };
    inline ListJobsShrinkRequest& setTimeRangeField(string timeRangeField) { DARABONBA_PTR_SET_VALUE(timeRangeField_, timeRangeField) };


    // userCommandSearch Field Functions 
    bool hasUserCommandSearch() const { return this->userCommandSearch_ != nullptr;};
    void deleteUserCommandSearch() { this->userCommandSearch_ = nullptr;};
    inline string getUserCommandSearch() const { DARABONBA_PTR_GET_DEFAULT(userCommandSearch_, "") };
    inline ListJobsShrinkRequest& setUserCommandSearch(string userCommandSearch) { DARABONBA_PTR_SET_VALUE(userCommandSearch_, userCommandSearch) };


    // userIdForFilter Field Functions 
    bool hasUserIdForFilter() const { return this->userIdForFilter_ != nullptr;};
    void deleteUserIdForFilter() { this->userIdForFilter_ = nullptr;};
    inline string getUserIdForFilter() const { DARABONBA_PTR_GET_DEFAULT(userIdForFilter_, "") };
    inline ListJobsShrinkRequest& setUserIdForFilter(string userIdForFilter) { DARABONBA_PTR_SET_VALUE(userIdForFilter_, userIdForFilter) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListJobsShrinkRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListJobsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The visibility of the job. Valid values:
    // - PUBLIC: Visible to all members in the workspace.
    // - PRIVATE (default): Visible only to you and administrators in the workspace.
    shared_ptr<string> accessibility_ {};
    // The user ID associated with the job.
    shared_ptr<string> businessUserId_ {};
    // The caller.
    shared_ptr<string> caller_ {};
    shared_ptr<string> description_ {};
    // The job name. Supports fuzzy match and is case-insensitive. Wildcards are not supported.
    // For example, entering test matches test-job1, job-test, job-test2, or job-Test, but does not match job-t1.
    // Default value: empty, which indicates all job names.
    shared_ptr<string> displayName_ {};
    // The search mode for DisplayName. Default value: wildcard match.
    shared_ptr<string> displayNameSearchMode_ {};
    // Filters jobs based on whether running on specified nodes is enabled.
    shared_ptr<string> enableAssignNode_ {};
    // The end time of the query range. Jobs are filtered by creation time. Default value: the current time.
    shared_ptr<string> endTime_ {};
    // Specifies whether to retrieve jobs across all workspaces. This parameter must be used together with `ShowOwn=true` to query jobs recently submitted by the current user.
    shared_ptr<bool> fromAllWorkspaces_ {};
    // Retrieves nodes by performing a full-text index on the images field. Supports Chinese and English tokenization.
    shared_ptr<string> imageSearch_ {};
    // The job ID. Fuzzy match is not supported. Case-insensitive. Wildcards are not supported.
    // Default value: empty, which indicates all job IDs.
    shared_ptr<string> jobId_ {};
    // A list of job IDs separated by commas. If both JobIds and JobId are specified, JobId takes precedence.
    shared_ptr<string> jobIds_ {};
    // The job type. Default value: empty, which indicates all types. Valid values:
    // - TFJob
    // - PyTorchJob
    // - XGBoostJob
    // - OneFlowJob
    // - ElasticBatchJob
    shared_ptr<string> jobType_ {};
    // The field name for numeric range filtering. Must be used together with NumericRangeMin or NumericRangeMax.
    shared_ptr<string> numericRangeField_ {};
    // The maximum value (inclusive) for numeric range filtering. Must be used together with NumericRangeField.
    shared_ptr<int64_t> numericRangeMax_ {};
    // The minimum value (inclusive) for numeric range filtering. Must be used together with NumericRangeField.
    shared_ptr<int64_t> numericRangeMin_ {};
    // The sort order. Valid values:
    // 
    // - desc: Descending order. This is the default value.
    // - asc: Ascending order.
    shared_ptr<string> order_ {};
    // The off-peak resource information. Valid values:
    // - ForbiddenQuotaOverSold
    // - ForceQuotaOverSold
    // - AcceptQuotaOverSold-true (true indicates the job actually used off-peak resources)
    // - AcceptQuotaOverSold-false (false indicates the job actually used guaranteed resources)
    shared_ptr<string> oversoldInfo_ {};
    // The page number to return in a paged query. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of jobs to return per page.
    shared_ptr<int32_t> pageSize_ {};
    // The resource type. Valid values:
    // - PrePaid: resource quota
    // - Spot: preemptible resources
    // - PostPaid: public resources
    shared_ptr<string> paymentType_ {};
    // Filters jobs created by the specified workflow ID.
    shared_ptr<string> pipelineId_ {};
    // Retrieves nodes by performing a full-text index on the node failed reason field. Supports Chinese and English tokenization.
    shared_ptr<string> reasonSearch_ {};
    // The resource group ID. For information about how to query the dedicated resource group ID, see [Manage resource quotas](https://help.aliyun.com/document_detail/2651299.html).
    shared_ptr<string> resourceId_ {};
    // Filters the job list by the resource quota name. Supports fuzzy match. Wildcards are not supported. Default value: empty, which indicates no filtering by resource quota.
    shared_ptr<string> resourceQuotaName_ {};
    // Specifies whether to return only jobs submitted by the current user.
    shared_ptr<bool> showOwn_ {};
    // The field by which to sort results. Valid values:
    // 
    // - DisplayName
    // - JobType
    // - Status
    // - GmtCreateTime
    // - GmtFinishTime
    shared_ptr<string> sortBy_ {};
    // The start time of the query range. Jobs are filtered by creation time. Default value: the current time minus 7 days. If neither StartTime nor EndTime is specified, jobs created in the last 7 days are returned by default.
    shared_ptr<string> startTime_ {};
    // The job status. Valid values:
    // - Creating
    // - Queuing
    // - Bidding (currently only for Lingjun Spot jobs)
    // - EnvPreparing
    // - SanityChecking
    // - Running
    // - Restarting
    // - Stopping
    // - SucceededReserving
    // - FailedReserving
    // - Succeeded
    // - Failed
    // - Stopped
    shared_ptr<string> status_ {};
    // The tags used for filtering.
    shared_ptr<string> tagsShrink_ {};
    // The template ID. Filters jobs created from the specified template.
    shared_ptr<string> templateId_ {};
    // The time field used for StartTime/EndTime filtering. Default value: creation time.
    shared_ptr<string> timeRangeField_ {};
    // Retrieves nodes by performing a full-text index on the user_command field. Supports Chinese and English tokenization.
    shared_ptr<string> userCommandSearch_ {};
    // Filters the job list by the user ID of the job submitter.
    shared_ptr<string> userIdForFilter_ {};
    // Filters the job list by the username of the job submitter. Supports fuzzy match. Wildcards are not supported. Default value: empty, which indicates no filtering by username.
    shared_ptr<string> username_ {};
    // The workspace ID. <props="china">For information about how to obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
