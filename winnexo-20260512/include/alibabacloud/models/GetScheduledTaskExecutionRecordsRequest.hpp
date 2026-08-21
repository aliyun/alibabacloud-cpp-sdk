// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKEXECUTIONRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetScheduledTaskExecutionRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskExecutionRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_TO_JSON(initiatorUserId, initiatorUserId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskExecutionRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(collaborationGroupId, collaborationGroupId_);
      DARABONBA_PTR_FROM_JSON(initiatorUserId, initiatorUserId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetScheduledTaskExecutionRecordsRequest() = default ;
    GetScheduledTaskExecutionRecordsRequest(const GetScheduledTaskExecutionRecordsRequest &) = default ;
    GetScheduledTaskExecutionRecordsRequest(GetScheduledTaskExecutionRecordsRequest &&) = default ;
    GetScheduledTaskExecutionRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskExecutionRecordsRequest() = default ;
    GetScheduledTaskExecutionRecordsRequest& operator=(const GetScheduledTaskExecutionRecordsRequest &) = default ;
    GetScheduledTaskExecutionRecordsRequest& operator=(GetScheduledTaskExecutionRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->collaborationGroupId_ == nullptr
        && this->initiatorUserId_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->tenantId_ == nullptr; };
    // collaborationGroupId Field Functions 
    bool hasCollaborationGroupId() const { return this->collaborationGroupId_ != nullptr;};
    void deleteCollaborationGroupId() { this->collaborationGroupId_ = nullptr;};
    inline string getCollaborationGroupId() const { DARABONBA_PTR_GET_DEFAULT(collaborationGroupId_, "") };
    inline GetScheduledTaskExecutionRecordsRequest& setCollaborationGroupId(string collaborationGroupId) { DARABONBA_PTR_SET_VALUE(collaborationGroupId_, collaborationGroupId) };


    // initiatorUserId Field Functions 
    bool hasInitiatorUserId() const { return this->initiatorUserId_ != nullptr;};
    void deleteInitiatorUserId() { this->initiatorUserId_ = nullptr;};
    inline string getInitiatorUserId() const { DARABONBA_PTR_GET_DEFAULT(initiatorUserId_, "") };
    inline GetScheduledTaskExecutionRecordsRequest& setInitiatorUserId(string initiatorUserId) { DARABONBA_PTR_SET_VALUE(initiatorUserId_, initiatorUserId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetScheduledTaskExecutionRecordsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetScheduledTaskExecutionRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetScheduledTaskExecutionRecordsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetScheduledTaskExecutionRecordsRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetScheduledTaskExecutionRecordsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the collaboration group to which the task belongs (such as cg_101). If specified, a group space task is created (the caller must be a valid group member). If left empty, a personal task is created.
    shared_ptr<string> collaborationGroupId_ {};
    // Filters by initiator (platform user ID). The scope is the executor of the record (manual execution = the person who triggered it, automatic execution = the task creator). To view only tasks initiated by yourself, pass the current user ID.
    shared_ptr<string> initiatorUserId_ {};
    // The page number. Default value: 1. Minimum value: 1. Maximum value: 200.
    shared_ptr<int32_t> page_ {};
    // The number of records per page.
    shared_ptr<int32_t> pageSize_ {};
    // Filters by execution status (lowercase). Valid values:
    // - pending: queued.
    // - running: in progress.
    // - success: succeeded.
    // - failed: failed.
    // - timeout: timed out.
    // - cancelled: terminated.
    // 
    // If not specified, no status filter is applied. If specified, future planned items are no longer generated.
    shared_ptr<string> status_ {};
    // Filters by a single task ID. If not specified, execution records of all visible tasks are returned.
    shared_ptr<string> taskId_ {};
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
