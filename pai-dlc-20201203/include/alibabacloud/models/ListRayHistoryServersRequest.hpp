// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRAYHISTORYSERVERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRAYHISTORYSERVERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class ListRayHistoryServersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRayHistoryServersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IdPrefix, idPrefix_);
      DARABONBA_PTR_TO_JSON(ModifiedAfter, modifiedAfter_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StoragePath, storagePath_);
      DARABONBA_PTR_TO_JSON(UserIdForFilter, userIdForFilter_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRayHistoryServersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IdPrefix, idPrefix_);
      DARABONBA_PTR_FROM_JSON(ModifiedAfter, modifiedAfter_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ShowOwn, showOwn_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StoragePath, storagePath_);
      DARABONBA_PTR_FROM_JSON(UserIdForFilter, userIdForFilter_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListRayHistoryServersRequest() = default ;
    ListRayHistoryServersRequest(const ListRayHistoryServersRequest &) = default ;
    ListRayHistoryServersRequest(ListRayHistoryServersRequest &&) = default ;
    ListRayHistoryServersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRayHistoryServersRequest() = default ;
    ListRayHistoryServersRequest& operator=(const ListRayHistoryServersRequest &) = default ;
    ListRayHistoryServersRequest& operator=(ListRayHistoryServersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->endTime_ == nullptr && this->idPrefix_ == nullptr && this->modifiedAfter_ == nullptr && this->order_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->paymentType_ == nullptr && this->resourceId_ == nullptr && this->showOwn_ == nullptr && this->sortBy_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->storagePath_ == nullptr && this->userIdForFilter_ == nullptr && this->username_ == nullptr
        && this->workspaceId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListRayHistoryServersRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListRayHistoryServersRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // idPrefix Field Functions 
    bool hasIdPrefix() const { return this->idPrefix_ != nullptr;};
    void deleteIdPrefix() { this->idPrefix_ = nullptr;};
    inline string getIdPrefix() const { DARABONBA_PTR_GET_DEFAULT(idPrefix_, "") };
    inline ListRayHistoryServersRequest& setIdPrefix(string idPrefix) { DARABONBA_PTR_SET_VALUE(idPrefix_, idPrefix) };


    // modifiedAfter Field Functions 
    bool hasModifiedAfter() const { return this->modifiedAfter_ != nullptr;};
    void deleteModifiedAfter() { this->modifiedAfter_ = nullptr;};
    inline string getModifiedAfter() const { DARABONBA_PTR_GET_DEFAULT(modifiedAfter_, "") };
    inline ListRayHistoryServersRequest& setModifiedAfter(string modifiedAfter) { DARABONBA_PTR_SET_VALUE(modifiedAfter_, modifiedAfter) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListRayHistoryServersRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRayHistoryServersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRayHistoryServersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListRayHistoryServersRequest& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListRayHistoryServersRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // showOwn Field Functions 
    bool hasShowOwn() const { return this->showOwn_ != nullptr;};
    void deleteShowOwn() { this->showOwn_ = nullptr;};
    inline bool getShowOwn() const { DARABONBA_PTR_GET_DEFAULT(showOwn_, false) };
    inline ListRayHistoryServersRequest& setShowOwn(bool showOwn) { DARABONBA_PTR_SET_VALUE(showOwn_, showOwn) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListRayHistoryServersRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListRayHistoryServersRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListRayHistoryServersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storagePath Field Functions 
    bool hasStoragePath() const { return this->storagePath_ != nullptr;};
    void deleteStoragePath() { this->storagePath_ = nullptr;};
    inline string getStoragePath() const { DARABONBA_PTR_GET_DEFAULT(storagePath_, "") };
    inline ListRayHistoryServersRequest& setStoragePath(string storagePath) { DARABONBA_PTR_SET_VALUE(storagePath_, storagePath) };


    // userIdForFilter Field Functions 
    bool hasUserIdForFilter() const { return this->userIdForFilter_ != nullptr;};
    void deleteUserIdForFilter() { this->userIdForFilter_ = nullptr;};
    inline string getUserIdForFilter() const { DARABONBA_PTR_GET_DEFAULT(userIdForFilter_, "") };
    inline ListRayHistoryServersRequest& setUserIdForFilter(string userIdForFilter) { DARABONBA_PTR_SET_VALUE(userIdForFilter_, userIdForFilter) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListRayHistoryServersRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListRayHistoryServersRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The display name of the job.
    shared_ptr<string> displayName_ {};
    // The end time of the query range. The job creation time is used for filtering.
    shared_ptr<string> endTime_ {};
    // The ID prefix.
    shared_ptr<string> idPrefix_ {};
    // Filters results by the time after which they were modified.
    shared_ptr<string> modifiedAfter_ {};
    // The sort order. Valid values:
    // - desc: descending order.
    // - asc: ascending order.
    shared_ptr<string> order_ {};
    // The page number of the page to return in a paged query. Paging starts from page 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of RayHistoryServer entries to return on each page in a paged query. Paging is used to return results in batches.
    shared_ptr<int32_t> pageSize_ {};
    // The billing method. Valid values:
    // - PrePaid
    // - PostPaid.
    shared_ptr<string> paymentType_ {};
    // The resource group ID. For information about how to query the ID of a dedicated resource group, see [Manage resource quotas](https://help.aliyun.com/document_detail/2651299.html).
    shared_ptr<string> resourceId_ {};
    // Specifies whether to return only the RayHistoryServer entries created by the current user.
    shared_ptr<bool> showOwn_ {};
    // The field by which to sort the returned results. Valid values:
    // - DisplayName
    // - GmtCreateTime
    // - UserId
    // - ResourceId
    // - Status
    // - GmtModifyTime.
    shared_ptr<string> sortBy_ {};
    // The start time.
    shared_ptr<string> startTime_ {};
    // The RayHistoryServer status. Valid values:
    // - Creating: being created.
    // - Queuing: waiting in queue.
    // - Running: running.
    // - Stopped: stopped.
    // - Failed: failed.
    shared_ptr<string> status_ {};
    // The storage path of Ray logs.
    shared_ptr<string> storagePath_ {};
    // Filters results by user ID.
    shared_ptr<string> userIdForFilter_ {};
    // Filters results by username.
    shared_ptr<string> username_ {};
    // The workspace ID. <props="china">For information about how to obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html)..
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
