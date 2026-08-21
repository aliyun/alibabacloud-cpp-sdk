// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBILLINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTBILLINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListBillingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBillingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(bizId, bizId_);
      DARABONBA_PTR_TO_JSON(bizType, bizType_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(ignoreZero, ignoreZero_);
      DARABONBA_PTR_TO_JSON(operation, operation_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBillingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(bizId, bizId_);
      DARABONBA_PTR_FROM_JSON(bizType, bizType_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ignoreZero, ignoreZero_);
      DARABONBA_PTR_FROM_JSON(operation, operation_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    ListBillingRequest() = default ;
    ListBillingRequest(const ListBillingRequest &) = default ;
    ListBillingRequest(ListBillingRequest &&) = default ;
    ListBillingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBillingRequest() = default ;
    ListBillingRequest& operator=(const ListBillingRequest &) = default ;
    ListBillingRequest& operator=(ListBillingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizType_ == nullptr && this->endTime_ == nullptr && this->ignoreZero_ == nullptr && this->operation_ == nullptr && this->page_ == nullptr
        && this->pageSize_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->tenantId_ == nullptr && this->wnUserId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ListBillingRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListBillingRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListBillingRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ignoreZero Field Functions 
    bool hasIgnoreZero() const { return this->ignoreZero_ != nullptr;};
    void deleteIgnoreZero() { this->ignoreZero_ = nullptr;};
    inline bool getIgnoreZero() const { DARABONBA_PTR_GET_DEFAULT(ignoreZero_, false) };
    inline ListBillingRequest& setIgnoreZero(bool ignoreZero) { DARABONBA_PTR_SET_VALUE(ignoreZero_, ignoreZero) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ListBillingRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListBillingRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListBillingRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListBillingRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListBillingRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListBillingRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline ListBillingRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The unique business identifier. When bizType is set to LibraryChat, bizId refers to the document library ID.
    shared_ptr<string> bizId_ {};
    // The business type. Currently supported values: model Q&A (LlmChat) and document library Q&A (LibraryChat).
    shared_ptr<string> bizType_ {};
    // The actual end timestamp of the live stream, in milliseconds.
    shared_ptr<string> endTime_ {};
    // Specifies whether to filter out bills with zero credit consumption. Default value: true (filtered).
    shared_ptr<bool> ignoreZero_ {};
    // The operation type. Valid values:
    // 
    // - start: indicates node creation. This is the default value and does not need to be explicitly set in most cases.
    // - stop: stops a real-time meeting task. This corresponds to the creation of a real-time meeting. Set this to stop after the meeting ends to trigger the call. This is used in real-time meeting scenarios.
    // 
    // Note: When ending a real-time recording, you must set this parameter to stop.
    shared_ptr<string> operation_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page. Default value: 20. Minimum value: 1. Maximum value: 50.
    shared_ptr<int64_t> pageSize_ {};
    // The query start time. This is a UNIX timestamp in seconds.
    shared_ptr<string> startTime_ {};
    // The task status. Running is returned upon submission.
    shared_ptr<string> status_ {};
    // The tenant ID. This is a common parameter. In winnexo-cli, pass it explicitly with --tenant-id.
    shared_ptr<string> tenantId_ {};
    // The user ID (WINNEXO platform user ID, optional filter).
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
