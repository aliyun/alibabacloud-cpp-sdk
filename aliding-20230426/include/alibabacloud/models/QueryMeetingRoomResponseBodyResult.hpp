// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryMeetingRoomResponseBodyResultReservationAuthority.hpp>
#include <alibabacloud/models/QueryMeetingRoomResponseBodyResultRoomGroup.hpp>
#include <alibabacloud/models/QueryMeetingRoomResponseBodyResultRoomLabels.hpp>
#include <alibabacloud/models/QueryMeetingRoomResponseBodyResultRoomLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(DeviceUnionIds, deviceUnionIds_);
      DARABONBA_PTR_TO_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_TO_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_TO_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_TO_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_TO_JSON(RoomGroup, roomGroup_);
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(RoomLabels, roomLabels_);
      DARABONBA_PTR_TO_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_TO_JSON(RoomStaffId, roomStaffId_);
      DARABONBA_PTR_TO_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_TO_JSON(RoomUnionId, roomUnionId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(DeviceUnionIds, deviceUnionIds_);
      DARABONBA_PTR_FROM_JSON(EnableCycleReservation, enableCycleReservation_);
      DARABONBA_PTR_FROM_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_FROM_JSON(ReservationAuthority, reservationAuthority_);
      DARABONBA_PTR_FROM_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_FROM_JSON(RoomGroup, roomGroup_);
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(RoomLabels, roomLabels_);
      DARABONBA_PTR_FROM_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_FROM_JSON(RoomStaffId, roomStaffId_);
      DARABONBA_PTR_FROM_JSON(RoomStatus, roomStatus_);
      DARABONBA_PTR_FROM_JSON(RoomUnionId, roomUnionId_);
    };
    QueryMeetingRoomResponseBodyResult() = default ;
    QueryMeetingRoomResponseBodyResult(const QueryMeetingRoomResponseBodyResult &) = default ;
    QueryMeetingRoomResponseBodyResult(QueryMeetingRoomResponseBodyResult &&) = default ;
    QueryMeetingRoomResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomResponseBodyResult() = default ;
    QueryMeetingRoomResponseBodyResult& operator=(const QueryMeetingRoomResponseBodyResult &) = default ;
    QueryMeetingRoomResponseBodyResult& operator=(QueryMeetingRoomResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->deviceUnionIds_ != nullptr && this->enableCycleReservation_ != nullptr && this->isvRoomId_ != nullptr && this->reservationAuthority_ != nullptr && this->roomCapacity_ != nullptr
        && this->roomGroup_ != nullptr && this->roomId_ != nullptr && this->roomLabels_ != nullptr && this->roomLocation_ != nullptr && this->roomName_ != nullptr
        && this->roomPicture_ != nullptr && this->roomStaffId_ != nullptr && this->roomStatus_ != nullptr && this->roomUnionId_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline QueryMeetingRoomResponseBodyResult& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // deviceUnionIds Field Functions 
    bool hasDeviceUnionIds() const { return this->deviceUnionIds_ != nullptr;};
    void deleteDeviceUnionIds() { this->deviceUnionIds_ = nullptr;};
    inline const vector<string> & deviceUnionIds() const { DARABONBA_PTR_GET_CONST(deviceUnionIds_, vector<string>) };
    inline vector<string> deviceUnionIds() { DARABONBA_PTR_GET(deviceUnionIds_, vector<string>) };
    inline QueryMeetingRoomResponseBodyResult& setDeviceUnionIds(const vector<string> & deviceUnionIds) { DARABONBA_PTR_SET_VALUE(deviceUnionIds_, deviceUnionIds) };
    inline QueryMeetingRoomResponseBodyResult& setDeviceUnionIds(vector<string> && deviceUnionIds) { DARABONBA_PTR_SET_RVALUE(deviceUnionIds_, deviceUnionIds) };


    // enableCycleReservation Field Functions 
    bool hasEnableCycleReservation() const { return this->enableCycleReservation_ != nullptr;};
    void deleteEnableCycleReservation() { this->enableCycleReservation_ = nullptr;};
    inline bool enableCycleReservation() const { DARABONBA_PTR_GET_DEFAULT(enableCycleReservation_, false) };
    inline QueryMeetingRoomResponseBodyResult& setEnableCycleReservation(bool enableCycleReservation) { DARABONBA_PTR_SET_VALUE(enableCycleReservation_, enableCycleReservation) };


    // isvRoomId Field Functions 
    bool hasIsvRoomId() const { return this->isvRoomId_ != nullptr;};
    void deleteIsvRoomId() { this->isvRoomId_ = nullptr;};
    inline string isvRoomId() const { DARABONBA_PTR_GET_DEFAULT(isvRoomId_, "") };
    inline QueryMeetingRoomResponseBodyResult& setIsvRoomId(string isvRoomId) { DARABONBA_PTR_SET_VALUE(isvRoomId_, isvRoomId) };


    // reservationAuthority Field Functions 
    bool hasReservationAuthority() const { return this->reservationAuthority_ != nullptr;};
    void deleteReservationAuthority() { this->reservationAuthority_ = nullptr;};
    inline const Models::QueryMeetingRoomResponseBodyResultReservationAuthority & reservationAuthority() const { DARABONBA_PTR_GET_CONST(reservationAuthority_, Models::QueryMeetingRoomResponseBodyResultReservationAuthority) };
    inline Models::QueryMeetingRoomResponseBodyResultReservationAuthority reservationAuthority() { DARABONBA_PTR_GET(reservationAuthority_, Models::QueryMeetingRoomResponseBodyResultReservationAuthority) };
    inline QueryMeetingRoomResponseBodyResult& setReservationAuthority(const Models::QueryMeetingRoomResponseBodyResultReservationAuthority & reservationAuthority) { DARABONBA_PTR_SET_VALUE(reservationAuthority_, reservationAuthority) };
    inline QueryMeetingRoomResponseBodyResult& setReservationAuthority(Models::QueryMeetingRoomResponseBodyResultReservationAuthority && reservationAuthority) { DARABONBA_PTR_SET_RVALUE(reservationAuthority_, reservationAuthority) };


    // roomCapacity Field Functions 
    bool hasRoomCapacity() const { return this->roomCapacity_ != nullptr;};
    void deleteRoomCapacity() { this->roomCapacity_ = nullptr;};
    inline int32_t roomCapacity() const { DARABONBA_PTR_GET_DEFAULT(roomCapacity_, 0) };
    inline QueryMeetingRoomResponseBodyResult& setRoomCapacity(int32_t roomCapacity) { DARABONBA_PTR_SET_VALUE(roomCapacity_, roomCapacity) };


    // roomGroup Field Functions 
    bool hasRoomGroup() const { return this->roomGroup_ != nullptr;};
    void deleteRoomGroup() { this->roomGroup_ = nullptr;};
    inline const Models::QueryMeetingRoomResponseBodyResultRoomGroup & roomGroup() const { DARABONBA_PTR_GET_CONST(roomGroup_, Models::QueryMeetingRoomResponseBodyResultRoomGroup) };
    inline Models::QueryMeetingRoomResponseBodyResultRoomGroup roomGroup() { DARABONBA_PTR_GET(roomGroup_, Models::QueryMeetingRoomResponseBodyResultRoomGroup) };
    inline QueryMeetingRoomResponseBodyResult& setRoomGroup(const Models::QueryMeetingRoomResponseBodyResultRoomGroup & roomGroup) { DARABONBA_PTR_SET_VALUE(roomGroup_, roomGroup) };
    inline QueryMeetingRoomResponseBodyResult& setRoomGroup(Models::QueryMeetingRoomResponseBodyResultRoomGroup && roomGroup) { DARABONBA_PTR_SET_RVALUE(roomGroup_, roomGroup) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline QueryMeetingRoomResponseBodyResult& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomLabels Field Functions 
    bool hasRoomLabels() const { return this->roomLabels_ != nullptr;};
    void deleteRoomLabels() { this->roomLabels_ = nullptr;};
    inline const vector<Models::QueryMeetingRoomResponseBodyResultRoomLabels> & roomLabels() const { DARABONBA_PTR_GET_CONST(roomLabels_, vector<Models::QueryMeetingRoomResponseBodyResultRoomLabels>) };
    inline vector<Models::QueryMeetingRoomResponseBodyResultRoomLabels> roomLabels() { DARABONBA_PTR_GET(roomLabels_, vector<Models::QueryMeetingRoomResponseBodyResultRoomLabels>) };
    inline QueryMeetingRoomResponseBodyResult& setRoomLabels(const vector<Models::QueryMeetingRoomResponseBodyResultRoomLabels> & roomLabels) { DARABONBA_PTR_SET_VALUE(roomLabels_, roomLabels) };
    inline QueryMeetingRoomResponseBodyResult& setRoomLabels(vector<Models::QueryMeetingRoomResponseBodyResultRoomLabels> && roomLabels) { DARABONBA_PTR_SET_RVALUE(roomLabels_, roomLabels) };


    // roomLocation Field Functions 
    bool hasRoomLocation() const { return this->roomLocation_ != nullptr;};
    void deleteRoomLocation() { this->roomLocation_ = nullptr;};
    inline const Models::QueryMeetingRoomResponseBodyResultRoomLocation & roomLocation() const { DARABONBA_PTR_GET_CONST(roomLocation_, Models::QueryMeetingRoomResponseBodyResultRoomLocation) };
    inline Models::QueryMeetingRoomResponseBodyResultRoomLocation roomLocation() { DARABONBA_PTR_GET(roomLocation_, Models::QueryMeetingRoomResponseBodyResultRoomLocation) };
    inline QueryMeetingRoomResponseBodyResult& setRoomLocation(const Models::QueryMeetingRoomResponseBodyResultRoomLocation & roomLocation) { DARABONBA_PTR_SET_VALUE(roomLocation_, roomLocation) };
    inline QueryMeetingRoomResponseBodyResult& setRoomLocation(Models::QueryMeetingRoomResponseBodyResultRoomLocation && roomLocation) { DARABONBA_PTR_SET_RVALUE(roomLocation_, roomLocation) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline QueryMeetingRoomResponseBodyResult& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomPicture Field Functions 
    bool hasRoomPicture() const { return this->roomPicture_ != nullptr;};
    void deleteRoomPicture() { this->roomPicture_ = nullptr;};
    inline string roomPicture() const { DARABONBA_PTR_GET_DEFAULT(roomPicture_, "") };
    inline QueryMeetingRoomResponseBodyResult& setRoomPicture(string roomPicture) { DARABONBA_PTR_SET_VALUE(roomPicture_, roomPicture) };


    // roomStaffId Field Functions 
    bool hasRoomStaffId() const { return this->roomStaffId_ != nullptr;};
    void deleteRoomStaffId() { this->roomStaffId_ = nullptr;};
    inline string roomStaffId() const { DARABONBA_PTR_GET_DEFAULT(roomStaffId_, "") };
    inline QueryMeetingRoomResponseBodyResult& setRoomStaffId(string roomStaffId) { DARABONBA_PTR_SET_VALUE(roomStaffId_, roomStaffId) };


    // roomStatus Field Functions 
    bool hasRoomStatus() const { return this->roomStatus_ != nullptr;};
    void deleteRoomStatus() { this->roomStatus_ = nullptr;};
    inline int32_t roomStatus() const { DARABONBA_PTR_GET_DEFAULT(roomStatus_, 0) };
    inline QueryMeetingRoomResponseBodyResult& setRoomStatus(int32_t roomStatus) { DARABONBA_PTR_SET_VALUE(roomStatus_, roomStatus) };


    // roomUnionId Field Functions 
    bool hasRoomUnionId() const { return this->roomUnionId_ != nullptr;};
    void deleteRoomUnionId() { this->roomUnionId_ = nullptr;};
    inline string roomUnionId() const { DARABONBA_PTR_GET_DEFAULT(roomUnionId_, "") };
    inline QueryMeetingRoomResponseBodyResult& setRoomUnionId(string roomUnionId) { DARABONBA_PTR_SET_VALUE(roomUnionId_, roomUnionId) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<vector<string>> deviceUnionIds_ = nullptr;
    std::shared_ptr<bool> enableCycleReservation_ = nullptr;
    std::shared_ptr<string> isvRoomId_ = nullptr;
    std::shared_ptr<Models::QueryMeetingRoomResponseBodyResultReservationAuthority> reservationAuthority_ = nullptr;
    std::shared_ptr<int32_t> roomCapacity_ = nullptr;
    std::shared_ptr<Models::QueryMeetingRoomResponseBodyResultRoomGroup> roomGroup_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<vector<Models::QueryMeetingRoomResponseBodyResultRoomLabels>> roomLabels_ = nullptr;
    std::shared_ptr<Models::QueryMeetingRoomResponseBodyResultRoomLocation> roomLocation_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<string> roomPicture_ = nullptr;
    std::shared_ptr<string> roomStaffId_ = nullptr;
    std::shared_ptr<int32_t> roomStatus_ = nullptr;
    std::shared_ptr<string> roomUnionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
