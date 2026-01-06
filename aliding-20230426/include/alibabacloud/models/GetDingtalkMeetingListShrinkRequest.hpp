// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDINGTALKMEETINGLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDINGTALKMEETINGLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetDingtalkMeetingListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDingtalkMeetingListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(roomCode, roomCode_);
      DARABONBA_PTR_TO_JSON(roomName, roomName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(workNo, workNo_);
    };
    friend void from_json(const Darabonba::Json& j, GetDingtalkMeetingListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(roomCode, roomCode_);
      DARABONBA_PTR_FROM_JSON(roomName, roomName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(workNo, workNo_);
    };
    GetDingtalkMeetingListShrinkRequest() = default ;
    GetDingtalkMeetingListShrinkRequest(const GetDingtalkMeetingListShrinkRequest &) = default ;
    GetDingtalkMeetingListShrinkRequest(GetDingtalkMeetingListShrinkRequest &&) = default ;
    GetDingtalkMeetingListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDingtalkMeetingListShrinkRequest() = default ;
    GetDingtalkMeetingListShrinkRequest& operator=(const GetDingtalkMeetingListShrinkRequest &) = default ;
    GetDingtalkMeetingListShrinkRequest& operator=(GetDingtalkMeetingListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantContextShrink_ == nullptr
        && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->orgId_ == nullptr && this->pageSize_ == nullptr && this->roomCode_ == nullptr
        && this->roomName_ == nullptr && this->startTime_ == nullptr && this->workNo_ == nullptr; };
    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string getTenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline GetDingtalkMeetingListShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetDingtalkMeetingListShrinkRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetDingtalkMeetingListShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GetDingtalkMeetingListShrinkRequest& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetDingtalkMeetingListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roomCode Field Functions 
    bool hasRoomCode() const { return this->roomCode_ != nullptr;};
    void deleteRoomCode() { this->roomCode_ = nullptr;};
    inline string getRoomCode() const { DARABONBA_PTR_GET_DEFAULT(roomCode_, "") };
    inline GetDingtalkMeetingListShrinkRequest& setRoomCode(string roomCode) { DARABONBA_PTR_SET_VALUE(roomCode_, roomCode) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline GetDingtalkMeetingListShrinkRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetDingtalkMeetingListShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workNo Field Functions 
    bool hasWorkNo() const { return this->workNo_ != nullptr;};
    void deleteWorkNo() { this->workNo_ = nullptr;};
    inline string getWorkNo() const { DARABONBA_PTR_GET_DEFAULT(workNo_, "") };
    inline GetDingtalkMeetingListShrinkRequest& setWorkNo(string workNo) { DARABONBA_PTR_SET_VALUE(workNo_, workNo) };


  protected:
    shared_ptr<string> tenantContextShrink_ {};
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> orgId_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> roomCode_ {};
    shared_ptr<string> roomName_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<string> workNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
