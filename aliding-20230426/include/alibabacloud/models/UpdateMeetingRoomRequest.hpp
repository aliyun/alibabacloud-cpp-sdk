// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMEETINGROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMEETINGROOMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateMeetingRoomRequestReservationAuthority.hpp>
#include <vector>
#include <alibabacloud/models/UpdateMeetingRoomRequestRoomLocation.hpp>
#include <alibabacloud/models/UpdateMeetingRoomRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class UpdateMeetingRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeetingRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_TO_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_TO_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(RoomLabelIds, roomLabelIds_);
      DARABONBA_PTR_TO_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_TO_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeetingRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_FROM_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_FROM_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(RoomLabelIds, roomLabelIds_);
      DARABONBA_PTR_FROM_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_FROM_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    UpdateMeetingRoomRequest() = default ;
    UpdateMeetingRoomRequest(const UpdateMeetingRoomRequest &) = default ;
    UpdateMeetingRoomRequest(UpdateMeetingRoomRequest &&) = default ;
    UpdateMeetingRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeetingRoomRequest() = default ;
    UpdateMeetingRoomRequest& operator=(const UpdateMeetingRoomRequest &) = default ;
    UpdateMeetingRoomRequest& operator=(UpdateMeetingRoomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableCycleReservation_ == nullptr
        && return this->groupId_ == nullptr && return this->isvRoomId_ == nullptr && return this->reservationAuthority_ == nullptr && return this->roomCapacity_ == nullptr && return this->roomId_ == nullptr
        && return this->roomLabelIds_ == nullptr && return this->roomLocation_ == nullptr && return this->roomName_ == nullptr && return this->roomPicture_ == nullptr && return this->roomStatus_ == nullptr
        && return this->tenantContext_ == nullptr; };
    // enableCycleReservation Field Functions 
    bool hasEnableCycleReservation() const { return this->enableCycleReservation_ != nullptr;};
    void deleteEnableCycleReservation() { this->enableCycleReservation_ = nullptr;};
    inline bool enableCycleReservation() const { DARABONBA_PTR_GET_DEFAULT(enableCycleReservation_, false) };
    inline UpdateMeetingRoomRequest& setEnableCycleReservation(bool enableCycleReservation) { DARABONBA_PTR_SET_VALUE(enableCycleReservation_, enableCycleReservation) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline UpdateMeetingRoomRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isvRoomId Field Functions 
    bool hasIsvRoomId() const { return this->isvRoomId_ != nullptr;};
    void deleteIsvRoomId() { this->isvRoomId_ = nullptr;};
    inline string isvRoomId() const { DARABONBA_PTR_GET_DEFAULT(isvRoomId_, "") };
    inline UpdateMeetingRoomRequest& setIsvRoomId(string isvRoomId) { DARABONBA_PTR_SET_VALUE(isvRoomId_, isvRoomId) };


    // reservationAuthority Field Functions 
    bool hasReservationAuthority() const { return this->reservationAuthority_ != nullptr;};
    void deleteReservationAuthority() { this->reservationAuthority_ = nullptr;};
    inline const UpdateMeetingRoomRequestReservationAuthority & reservationAuthority() const { DARABONBA_PTR_GET_CONST(reservationAuthority_, UpdateMeetingRoomRequestReservationAuthority) };
    inline UpdateMeetingRoomRequestReservationAuthority reservationAuthority() { DARABONBA_PTR_GET(reservationAuthority_, UpdateMeetingRoomRequestReservationAuthority) };
    inline UpdateMeetingRoomRequest& setReservationAuthority(const UpdateMeetingRoomRequestReservationAuthority & reservationAuthority) { DARABONBA_PTR_SET_VALUE(reservationAuthority_, reservationAuthority) };
    inline UpdateMeetingRoomRequest& setReservationAuthority(UpdateMeetingRoomRequestReservationAuthority && reservationAuthority) { DARABONBA_PTR_SET_RVALUE(reservationAuthority_, reservationAuthority) };


    // roomCapacity Field Functions 
    bool hasRoomCapacity() const { return this->roomCapacity_ != nullptr;};
    void deleteRoomCapacity() { this->roomCapacity_ = nullptr;};
    inline int32_t roomCapacity() const { DARABONBA_PTR_GET_DEFAULT(roomCapacity_, 0) };
    inline UpdateMeetingRoomRequest& setRoomCapacity(int32_t roomCapacity) { DARABONBA_PTR_SET_VALUE(roomCapacity_, roomCapacity) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline UpdateMeetingRoomRequest& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomLabelIds Field Functions 
    bool hasRoomLabelIds() const { return this->roomLabelIds_ != nullptr;};
    void deleteRoomLabelIds() { this->roomLabelIds_ = nullptr;};
    inline const vector<int64_t> & roomLabelIds() const { DARABONBA_PTR_GET_CONST(roomLabelIds_, vector<int64_t>) };
    inline vector<int64_t> roomLabelIds() { DARABONBA_PTR_GET(roomLabelIds_, vector<int64_t>) };
    inline UpdateMeetingRoomRequest& setRoomLabelIds(const vector<int64_t> & roomLabelIds) { DARABONBA_PTR_SET_VALUE(roomLabelIds_, roomLabelIds) };
    inline UpdateMeetingRoomRequest& setRoomLabelIds(vector<int64_t> && roomLabelIds) { DARABONBA_PTR_SET_RVALUE(roomLabelIds_, roomLabelIds) };


    // roomLocation Field Functions 
    bool hasRoomLocation() const { return this->roomLocation_ != nullptr;};
    void deleteRoomLocation() { this->roomLocation_ = nullptr;};
    inline const UpdateMeetingRoomRequestRoomLocation & roomLocation() const { DARABONBA_PTR_GET_CONST(roomLocation_, UpdateMeetingRoomRequestRoomLocation) };
    inline UpdateMeetingRoomRequestRoomLocation roomLocation() { DARABONBA_PTR_GET(roomLocation_, UpdateMeetingRoomRequestRoomLocation) };
    inline UpdateMeetingRoomRequest& setRoomLocation(const UpdateMeetingRoomRequestRoomLocation & roomLocation) { DARABONBA_PTR_SET_VALUE(roomLocation_, roomLocation) };
    inline UpdateMeetingRoomRequest& setRoomLocation(UpdateMeetingRoomRequestRoomLocation && roomLocation) { DARABONBA_PTR_SET_RVALUE(roomLocation_, roomLocation) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline UpdateMeetingRoomRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomPicture Field Functions 
    bool hasRoomPicture() const { return this->roomPicture_ != nullptr;};
    void deleteRoomPicture() { this->roomPicture_ = nullptr;};
    inline string roomPicture() const { DARABONBA_PTR_GET_DEFAULT(roomPicture_, "") };
    inline UpdateMeetingRoomRequest& setRoomPicture(string roomPicture) { DARABONBA_PTR_SET_VALUE(roomPicture_, roomPicture) };


    // roomStatus Field Functions 
    bool hasRoomStatus() const { return this->roomStatus_ != nullptr;};
    void deleteRoomStatus() { this->roomStatus_ = nullptr;};
    inline int32_t roomStatus() const { DARABONBA_PTR_GET_DEFAULT(roomStatus_, 0) };
    inline UpdateMeetingRoomRequest& setRoomStatus(int32_t roomStatus) { DARABONBA_PTR_SET_VALUE(roomStatus_, roomStatus) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const UpdateMeetingRoomRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, UpdateMeetingRoomRequestTenantContext) };
    inline UpdateMeetingRoomRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, UpdateMeetingRoomRequestTenantContext) };
    inline UpdateMeetingRoomRequest& setTenantContext(const UpdateMeetingRoomRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline UpdateMeetingRoomRequest& setTenantContext(UpdateMeetingRoomRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<bool> enableCycleReservation_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> isvRoomId_ = nullptr;
    std::shared_ptr<UpdateMeetingRoomRequestReservationAuthority> reservationAuthority_ = nullptr;
    std::shared_ptr<int32_t> roomCapacity_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<vector<int64_t>> roomLabelIds_ = nullptr;
    std::shared_ptr<UpdateMeetingRoomRequestRoomLocation> roomLocation_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<string> roomPicture_ = nullptr;
    std::shared_ptr<int32_t> roomStatus_ = nullptr;
    std::shared_ptr<UpdateMeetingRoomRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
