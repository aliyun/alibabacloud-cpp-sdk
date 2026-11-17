// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDTASKCONVERSATIONRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDTASKCONVERSATIONRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetScheduledTaskConversationRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledTaskConversationRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(initiatorUserId, initiatorUserId_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledTaskConversationRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(initiatorUserId, initiatorUserId_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    GetScheduledTaskConversationRecordsRequest() = default ;
    GetScheduledTaskConversationRecordsRequest(const GetScheduledTaskConversationRecordsRequest &) = default ;
    GetScheduledTaskConversationRecordsRequest(GetScheduledTaskConversationRecordsRequest &&) = default ;
    GetScheduledTaskConversationRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledTaskConversationRecordsRequest() = default ;
    GetScheduledTaskConversationRecordsRequest& operator=(const GetScheduledTaskConversationRecordsRequest &) = default ;
    GetScheduledTaskConversationRecordsRequest& operator=(GetScheduledTaskConversationRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->initiatorUserId_ == nullptr
        && this->page_ == nullptr && this->pageSize_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->tenantId_ == nullptr; };
    // initiatorUserId Field Functions 
    bool hasInitiatorUserId() const { return this->initiatorUserId_ != nullptr;};
    void deleteInitiatorUserId() { this->initiatorUserId_ = nullptr;};
    inline string getInitiatorUserId() const { DARABONBA_PTR_GET_DEFAULT(initiatorUserId_, "") };
    inline GetScheduledTaskConversationRecordsRequest& setInitiatorUserId(string initiatorUserId) { DARABONBA_PTR_SET_VALUE(initiatorUserId_, initiatorUserId) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline GetScheduledTaskConversationRecordsRequest& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetScheduledTaskConversationRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetScheduledTaskConversationRecordsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetScheduledTaskConversationRecordsRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetScheduledTaskConversationRecordsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The user ID of the task initiator.
    shared_ptr<string> initiatorUserId_ {};
    // The page number. Default value: 1.
    shared_ptr<int32_t> page_ {};
    // The maximum number of data records to return in this request.
    shared_ptr<int32_t> pageSize_ {};
    // The running status of the task.
    shared_ptr<string> status_ {};
    // The execution status filter in lowercase. Valid values: pending (queued), running (running), success (successful), failed (failed), timeout (timed out), and cancelled (cancelled). If you do not specify this parameter, no filtering is applied. If you specify this parameter, future scheduled items are not generated.
    shared_ptr<string> taskId_ {};
    // The tenant ID. This is a common parameter. If you do not specify this parameter, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
