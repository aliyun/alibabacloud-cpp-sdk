// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEETINGROOMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEETINGROOMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMeetingRoomShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMeetingRoomShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_TO_JSON(ReservationAuthority, reservationAuthorityShrink_);
      DARABONBA_PTR_TO_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_TO_JSON(RoomLabelIds, roomLabelIdsShrink_);
      DARABONBA_PTR_TO_JSON(RoomLocation, roomLocationShrink_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_TO_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMeetingRoomShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_FROM_JSON(ReservationAuthority, reservationAuthorityShrink_);
      DARABONBA_PTR_FROM_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_FROM_JSON(RoomLabelIds, roomLabelIdsShrink_);
      DARABONBA_PTR_FROM_JSON(RoomLocation, roomLocationShrink_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_FROM_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContextShrink_);
    };
    CreateMeetingRoomShrinkRequest() = default ;
    CreateMeetingRoomShrinkRequest(const CreateMeetingRoomShrinkRequest &) = default ;
    CreateMeetingRoomShrinkRequest(CreateMeetingRoomShrinkRequest &&) = default ;
    CreateMeetingRoomShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMeetingRoomShrinkRequest() = default ;
    CreateMeetingRoomShrinkRequest& operator=(const CreateMeetingRoomShrinkRequest &) = default ;
    CreateMeetingRoomShrinkRequest& operator=(CreateMeetingRoomShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableCycleReservation_ != nullptr
        && this->groupId_ != nullptr && this->isvRoomId_ != nullptr && this->reservationAuthorityShrink_ != nullptr && this->roomCapacity_ != nullptr && this->roomLabelIdsShrink_ != nullptr
        && this->roomLocationShrink_ != nullptr && this->roomName_ != nullptr && this->roomPicture_ != nullptr && this->roomStatus_ != nullptr && this->tenantContextShrink_ != nullptr; };
    // enableCycleReservation Field Functions 
    bool hasEnableCycleReservation() const { return this->enableCycleReservation_ != nullptr;};
    void deleteEnableCycleReservation() { this->enableCycleReservation_ = nullptr;};
    inline bool enableCycleReservation() const { DARABONBA_PTR_GET_DEFAULT(enableCycleReservation_, false) };
    inline CreateMeetingRoomShrinkRequest& setEnableCycleReservation(bool enableCycleReservation) { DARABONBA_PTR_SET_VALUE(enableCycleReservation_, enableCycleReservation) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateMeetingRoomShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // isvRoomId Field Functions 
    bool hasIsvRoomId() const { return this->isvRoomId_ != nullptr;};
    void deleteIsvRoomId() { this->isvRoomId_ = nullptr;};
    inline string isvRoomId() const { DARABONBA_PTR_GET_DEFAULT(isvRoomId_, "") };
    inline CreateMeetingRoomShrinkRequest& setIsvRoomId(string isvRoomId) { DARABONBA_PTR_SET_VALUE(isvRoomId_, isvRoomId) };


    // reservationAuthorityShrink Field Functions 
    bool hasReservationAuthorityShrink() const { return this->reservationAuthorityShrink_ != nullptr;};
    void deleteReservationAuthorityShrink() { this->reservationAuthorityShrink_ = nullptr;};
    inline string reservationAuthorityShrink() const { DARABONBA_PTR_GET_DEFAULT(reservationAuthorityShrink_, "") };
    inline CreateMeetingRoomShrinkRequest& setReservationAuthorityShrink(string reservationAuthorityShrink) { DARABONBA_PTR_SET_VALUE(reservationAuthorityShrink_, reservationAuthorityShrink) };


    // roomCapacity Field Functions 
    bool hasRoomCapacity() const { return this->roomCapacity_ != nullptr;};
    void deleteRoomCapacity() { this->roomCapacity_ = nullptr;};
    inline int32_t roomCapacity() const { DARABONBA_PTR_GET_DEFAULT(roomCapacity_, 0) };
    inline CreateMeetingRoomShrinkRequest& setRoomCapacity(int32_t roomCapacity) { DARABONBA_PTR_SET_VALUE(roomCapacity_, roomCapacity) };


    // roomLabelIdsShrink Field Functions 
    bool hasRoomLabelIdsShrink() const { return this->roomLabelIdsShrink_ != nullptr;};
    void deleteRoomLabelIdsShrink() { this->roomLabelIdsShrink_ = nullptr;};
    inline string roomLabelIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(roomLabelIdsShrink_, "") };
    inline CreateMeetingRoomShrinkRequest& setRoomLabelIdsShrink(string roomLabelIdsShrink) { DARABONBA_PTR_SET_VALUE(roomLabelIdsShrink_, roomLabelIdsShrink) };


    // roomLocationShrink Field Functions 
    bool hasRoomLocationShrink() const { return this->roomLocationShrink_ != nullptr;};
    void deleteRoomLocationShrink() { this->roomLocationShrink_ = nullptr;};
    inline string roomLocationShrink() const { DARABONBA_PTR_GET_DEFAULT(roomLocationShrink_, "") };
    inline CreateMeetingRoomShrinkRequest& setRoomLocationShrink(string roomLocationShrink) { DARABONBA_PTR_SET_VALUE(roomLocationShrink_, roomLocationShrink) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline CreateMeetingRoomShrinkRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomPicture Field Functions 
    bool hasRoomPicture() const { return this->roomPicture_ != nullptr;};
    void deleteRoomPicture() { this->roomPicture_ = nullptr;};
    inline string roomPicture() const { DARABONBA_PTR_GET_DEFAULT(roomPicture_, "") };
    inline CreateMeetingRoomShrinkRequest& setRoomPicture(string roomPicture) { DARABONBA_PTR_SET_VALUE(roomPicture_, roomPicture) };


    // roomStatus Field Functions 
    bool hasRoomStatus() const { return this->roomStatus_ != nullptr;};
    void deleteRoomStatus() { this->roomStatus_ = nullptr;};
    inline int32_t roomStatus() const { DARABONBA_PTR_GET_DEFAULT(roomStatus_, 0) };
    inline CreateMeetingRoomShrinkRequest& setRoomStatus(int32_t roomStatus) { DARABONBA_PTR_SET_VALUE(roomStatus_, roomStatus) };


    // tenantContextShrink Field Functions 
    bool hasTenantContextShrink() const { return this->tenantContextShrink_ != nullptr;};
    void deleteTenantContextShrink() { this->tenantContextShrink_ = nullptr;};
    inline string tenantContextShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantContextShrink_, "") };
    inline CreateMeetingRoomShrinkRequest& setTenantContextShrink(string tenantContextShrink) { DARABONBA_PTR_SET_VALUE(tenantContextShrink_, tenantContextShrink) };


  protected:
    std::shared_ptr<bool> enableCycleReservation_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> isvRoomId_ = nullptr;
    std::shared_ptr<string> reservationAuthorityShrink_ = nullptr;
    std::shared_ptr<int32_t> roomCapacity_ = nullptr;
    std::shared_ptr<string> roomLabelIdsShrink_ = nullptr;
    std::shared_ptr<string> roomLocationShrink_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<string> roomPicture_ = nullptr;
    std::shared_ptr<int32_t> roomStatus_ = nullptr;
    std::shared_ptr<string> tenantContextShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
