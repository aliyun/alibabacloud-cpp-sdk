// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEETINGROOMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEETINGROOMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateMeetingRoomRequestReservationAuthority.hpp>
#include <vector>
#include <alibabacloud/models/CreateMeetingRoomRequestRoomLocation.hpp>
#include <alibabacloud/models/CreateMeetingRoomRequestTenantContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMeetingRoomRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMeetingRoomRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_TO_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_TO_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_TO_JSON(RoomLabelIds, roomLabelIds_);
      DARABONBA_PTR_TO_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_TO_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMeetingRoomRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_FROM_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_FROM_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_FROM_JSON(RoomLabelIds, roomLabelIds_);
      DARABONBA_PTR_FROM_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_FROM_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    CreateMeetingRoomRequest() = default ;
    CreateMeetingRoomRequest(const CreateMeetingRoomRequest &) = default ;
    CreateMeetingRoomRequest(CreateMeetingRoomRequest &&) = default ;
    CreateMeetingRoomRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMeetingRoomRequest() = default ;
    CreateMeetingRoomRequest& operator=(const CreateMeetingRoomRequest &) = default ;
    CreateMeetingRoomRequest& operator=(CreateMeetingRoomRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableCycleReservation_ != nullptr
        && this->groupId_ != nullptr && this->isvRoomId_ != nullptr && this->reservationAuthority_ != nullptr && this->roomCapacity_ != nullptr && this->roomLabelIds_ != nullptr
        && this->roomLocation_ != nullptr && this->roomName_ != nullptr && this->roomPicture_ != nullptr && this->roomStatus_ != nullptr && this->tenantContext_ != nullptr; };
    // enableCycleReservation Field Functions 
    bool hasEnableCycleReservation() const { return this->enableCycleReservation_ != nullptr;};
    void deleteEnableCycleReservation() { this->enableCycleReservation_ = nullptr;};
    inline bool enableCycleReservation() const { DARABONBA_PTR_GET_DEFAULT(enableCycleReservation_, false) };
    inline CreateMeetingRoomRequest& setEnableCycleReservation(bool enableCycleReservation) { DARABONBA_PTR_SET_VALUE(enableCycleReservation_, enableCycleReservation) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateMeetingRoomRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isvRoomId Field Functions 
    bool hasIsvRoomId() const { return this->isvRoomId_ != nullptr;};
    void deleteIsvRoomId() { this->isvRoomId_ = nullptr;};
    inline string isvRoomId() const { DARABONBA_PTR_GET_DEFAULT(isvRoomId_, "") };
    inline CreateMeetingRoomRequest& setIsvRoomId(string isvRoomId) { DARABONBA_PTR_SET_VALUE(isvRoomId_, isvRoomId) };


    // reservationAuthority Field Functions 
    bool hasReservationAuthority() const { return this->reservationAuthority_ != nullptr;};
    void deleteReservationAuthority() { this->reservationAuthority_ = nullptr;};
    inline const CreateMeetingRoomRequestReservationAuthority & reservationAuthority() const { DARABONBA_PTR_GET_CONST(reservationAuthority_, CreateMeetingRoomRequestReservationAuthority) };
    inline CreateMeetingRoomRequestReservationAuthority reservationAuthority() { DARABONBA_PTR_GET(reservationAuthority_, CreateMeetingRoomRequestReservationAuthority) };
    inline CreateMeetingRoomRequest& setReservationAuthority(const CreateMeetingRoomRequestReservationAuthority & reservationAuthority) { DARABONBA_PTR_SET_VALUE(reservationAuthority_, reservationAuthority) };
    inline CreateMeetingRoomRequest& setReservationAuthority(CreateMeetingRoomRequestReservationAuthority && reservationAuthority) { DARABONBA_PTR_SET_RVALUE(reservationAuthority_, reservationAuthority) };


    // roomCapacity Field Functions 
    bool hasRoomCapacity() const { return this->roomCapacity_ != nullptr;};
    void deleteRoomCapacity() { this->roomCapacity_ = nullptr;};
    inline int32_t roomCapacity() const { DARABONBA_PTR_GET_DEFAULT(roomCapacity_, 0) };
    inline CreateMeetingRoomRequest& setRoomCapacity(int32_t roomCapacity) { DARABONBA_PTR_SET_VALUE(roomCapacity_, roomCapacity) };


    // roomLabelIds Field Functions 
    bool hasRoomLabelIds() const { return this->roomLabelIds_ != nullptr;};
    void deleteRoomLabelIds() { this->roomLabelIds_ = nullptr;};
    inline const vector<int64_t> & roomLabelIds() const { DARABONBA_PTR_GET_CONST(roomLabelIds_, vector<int64_t>) };
    inline vector<int64_t> roomLabelIds() { DARABONBA_PTR_GET(roomLabelIds_, vector<int64_t>) };
    inline CreateMeetingRoomRequest& setRoomLabelIds(const vector<int64_t> & roomLabelIds) { DARABONBA_PTR_SET_VALUE(roomLabelIds_, roomLabelIds) };
    inline CreateMeetingRoomRequest& setRoomLabelIds(vector<int64_t> && roomLabelIds) { DARABONBA_PTR_SET_RVALUE(roomLabelIds_, roomLabelIds) };


    // roomLocation Field Functions 
    bool hasRoomLocation() const { return this->roomLocation_ != nullptr;};
    void deleteRoomLocation() { this->roomLocation_ = nullptr;};
    inline const CreateMeetingRoomRequestRoomLocation & roomLocation() const { DARABONBA_PTR_GET_CONST(roomLocation_, CreateMeetingRoomRequestRoomLocation) };
    inline CreateMeetingRoomRequestRoomLocation roomLocation() { DARABONBA_PTR_GET(roomLocation_, CreateMeetingRoomRequestRoomLocation) };
    inline CreateMeetingRoomRequest& setRoomLocation(const CreateMeetingRoomRequestRoomLocation & roomLocation) { DARABONBA_PTR_SET_VALUE(roomLocation_, roomLocation) };
    inline CreateMeetingRoomRequest& setRoomLocation(CreateMeetingRoomRequestRoomLocation && roomLocation) { DARABONBA_PTR_SET_RVALUE(roomLocation_, roomLocation) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline CreateMeetingRoomRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomPicture Field Functions 
    bool hasRoomPicture() const { return this->roomPicture_ != nullptr;};
    void deleteRoomPicture() { this->roomPicture_ = nullptr;};
    inline string roomPicture() const { DARABONBA_PTR_GET_DEFAULT(roomPicture_, "") };
    inline CreateMeetingRoomRequest& setRoomPicture(string roomPicture) { DARABONBA_PTR_SET_VALUE(roomPicture_, roomPicture) };


    // roomStatus Field Functions 
    bool hasRoomStatus() const { return this->roomStatus_ != nullptr;};
    void deleteRoomStatus() { this->roomStatus_ = nullptr;};
    inline int32_t roomStatus() const { DARABONBA_PTR_GET_DEFAULT(roomStatus_, 0) };
    inline CreateMeetingRoomRequest& setRoomStatus(int32_t roomStatus) { DARABONBA_PTR_SET_VALUE(roomStatus_, roomStatus) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const CreateMeetingRoomRequestTenantContext & tenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, CreateMeetingRoomRequestTenantContext) };
    inline CreateMeetingRoomRequestTenantContext tenantContext() { DARABONBA_PTR_GET(tenantContext_, CreateMeetingRoomRequestTenantContext) };
    inline CreateMeetingRoomRequest& setTenantContext(const CreateMeetingRoomRequestTenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline CreateMeetingRoomRequest& setTenantContext(CreateMeetingRoomRequestTenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    std::shared_ptr<bool> enableCycleReservation_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> isvRoomId_ = nullptr;
    std::shared_ptr<CreateMeetingRoomRequestReservationAuthority> reservationAuthority_ = nullptr;
    std::shared_ptr<int32_t> roomCapacity_ = nullptr;
    std::shared_ptr<vector<int64_t>> roomLabelIds_ = nullptr;
    std::shared_ptr<CreateMeetingRoomRequestRoomLocation> roomLocation_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<string> roomPicture_ = nullptr;
    std::shared_ptr<int32_t> roomStatus_ = nullptr;
    std::shared_ptr<CreateMeetingRoomRequestTenantContext> tenantContext_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
