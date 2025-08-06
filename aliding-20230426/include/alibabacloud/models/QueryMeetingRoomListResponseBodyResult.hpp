// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEETINGROOMLISTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEETINGROOMLISTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMeetingRoomListResponseBodyResultRoomGroup.hpp>
#include <vector>
#include <alibabacloud/models/QueryMeetingRoomListResponseBodyResultRoomLabels.hpp>
#include <alibabacloud/models/QueryMeetingRoomListResponseBodyResultRoomLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class QueryMeetingRoomListResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMeetingRoomListResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(CorpId, corpId_);
      DARABONBA_PTR_TO_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_TO_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_TO_JSON(RoomGroup, roomGroup_);
      DARABONBA_PTR_TO_JSON(RoomId, roomId_);
      DARABONBA_PTR_TO_JSON(RoomLabels, roomLabels_);
      DARABONBA_PTR_TO_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_TO_JSON(RoomStaffId, roomStaffId_);
      DARABONBA_PTR_TO_JSON(RoomStatus, roomStatus_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMeetingRoomListResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CorpId, corpId_);
      DARABONBA_PTR_FROM_JSON(IsvRoomId, isvRoomId_);
      DARABONBA_PTR_FROM_JSON(RoomCapacity, roomCapacity_);
      DARABONBA_PTR_FROM_JSON(RoomGroup, roomGroup_);
      DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
      DARABONBA_PTR_FROM_JSON(RoomLabels, roomLabels_);
      DARABONBA_PTR_FROM_JSON(RoomLocation, roomLocation_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomPicture, roomPicture_);
      DARABONBA_PTR_FROM_JSON(RoomStaffId, roomStaffId_);
      DARABONBA_PTR_FROM_JSON(RoomStatus, roomStatus_);
    };
    QueryMeetingRoomListResponseBodyResult() = default ;
    QueryMeetingRoomListResponseBodyResult(const QueryMeetingRoomListResponseBodyResult &) = default ;
    QueryMeetingRoomListResponseBodyResult(QueryMeetingRoomListResponseBodyResult &&) = default ;
    QueryMeetingRoomListResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMeetingRoomListResponseBodyResult() = default ;
    QueryMeetingRoomListResponseBodyResult& operator=(const QueryMeetingRoomListResponseBodyResult &) = default ;
    QueryMeetingRoomListResponseBodyResult& operator=(QueryMeetingRoomListResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpId_ != nullptr
        && this->isvRoomId_ != nullptr && this->roomCapacity_ != nullptr && this->roomGroup_ != nullptr && this->roomId_ != nullptr && this->roomLabels_ != nullptr
        && this->roomLocation_ != nullptr && this->roomName_ != nullptr && this->roomPicture_ != nullptr && this->roomStaffId_ != nullptr && this->roomStatus_ != nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string corpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline QueryMeetingRoomListResponseBodyResult& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // isvRoomId Field Functions 
    bool hasIsvRoomId() const { return this->isvRoomId_ != nullptr;};
    void deleteIsvRoomId() { this->isvRoomId_ = nullptr;};
    inline string isvRoomId() const { DARABONBA_PTR_GET_DEFAULT(isvRoomId_, "") };
    inline QueryMeetingRoomListResponseBodyResult& setIsvRoomId(string isvRoomId) { DARABONBA_PTR_SET_VALUE(isvRoomId_, isvRoomId) };


    // roomCapacity Field Functions 
    bool hasRoomCapacity() const { return this->roomCapacity_ != nullptr;};
    void deleteRoomCapacity() { this->roomCapacity_ = nullptr;};
    inline int32_t roomCapacity() const { DARABONBA_PTR_GET_DEFAULT(roomCapacity_, 0) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomCapacity(int32_t roomCapacity) { DARABONBA_PTR_SET_VALUE(roomCapacity_, roomCapacity) };


    // roomGroup Field Functions 
    bool hasRoomGroup() const { return this->roomGroup_ != nullptr;};
    void deleteRoomGroup() { this->roomGroup_ = nullptr;};
    inline const Models::QueryMeetingRoomListResponseBodyResultRoomGroup & roomGroup() const { DARABONBA_PTR_GET_CONST(roomGroup_, Models::QueryMeetingRoomListResponseBodyResultRoomGroup) };
    inline Models::QueryMeetingRoomListResponseBodyResultRoomGroup roomGroup() { DARABONBA_PTR_GET(roomGroup_, Models::QueryMeetingRoomListResponseBodyResultRoomGroup) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomGroup(const Models::QueryMeetingRoomListResponseBodyResultRoomGroup & roomGroup) { DARABONBA_PTR_SET_VALUE(roomGroup_, roomGroup) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomGroup(Models::QueryMeetingRoomListResponseBodyResultRoomGroup && roomGroup) { DARABONBA_PTR_SET_RVALUE(roomGroup_, roomGroup) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline string roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
    inline QueryMeetingRoomListResponseBodyResult& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomLabels Field Functions 
    bool hasRoomLabels() const { return this->roomLabels_ != nullptr;};
    void deleteRoomLabels() { this->roomLabels_ = nullptr;};
    inline const vector<Models::QueryMeetingRoomListResponseBodyResultRoomLabels> & roomLabels() const { DARABONBA_PTR_GET_CONST(roomLabels_, vector<Models::QueryMeetingRoomListResponseBodyResultRoomLabels>) };
    inline vector<Models::QueryMeetingRoomListResponseBodyResultRoomLabels> roomLabels() { DARABONBA_PTR_GET(roomLabels_, vector<Models::QueryMeetingRoomListResponseBodyResultRoomLabels>) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomLabels(const vector<Models::QueryMeetingRoomListResponseBodyResultRoomLabels> & roomLabels) { DARABONBA_PTR_SET_VALUE(roomLabels_, roomLabels) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomLabels(vector<Models::QueryMeetingRoomListResponseBodyResultRoomLabels> && roomLabels) { DARABONBA_PTR_SET_RVALUE(roomLabels_, roomLabels) };


    // roomLocation Field Functions 
    bool hasRoomLocation() const { return this->roomLocation_ != nullptr;};
    void deleteRoomLocation() { this->roomLocation_ = nullptr;};
    inline const Models::QueryMeetingRoomListResponseBodyResultRoomLocation & roomLocation() const { DARABONBA_PTR_GET_CONST(roomLocation_, Models::QueryMeetingRoomListResponseBodyResultRoomLocation) };
    inline Models::QueryMeetingRoomListResponseBodyResultRoomLocation roomLocation() { DARABONBA_PTR_GET(roomLocation_, Models::QueryMeetingRoomListResponseBodyResultRoomLocation) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomLocation(const Models::QueryMeetingRoomListResponseBodyResultRoomLocation & roomLocation) { DARABONBA_PTR_SET_VALUE(roomLocation_, roomLocation) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomLocation(Models::QueryMeetingRoomListResponseBodyResultRoomLocation && roomLocation) { DARABONBA_PTR_SET_RVALUE(roomLocation_, roomLocation) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string roomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline QueryMeetingRoomListResponseBodyResult& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomPicture Field Functions 
    bool hasRoomPicture() const { return this->roomPicture_ != nullptr;};
    void deleteRoomPicture() { this->roomPicture_ = nullptr;};
    inline string roomPicture() const { DARABONBA_PTR_GET_DEFAULT(roomPicture_, "") };
    inline QueryMeetingRoomListResponseBodyResult& setRoomPicture(string roomPicture) { DARABONBA_PTR_SET_VALUE(roomPicture_, roomPicture) };


    // roomStaffId Field Functions 
    bool hasRoomStaffId() const { return this->roomStaffId_ != nullptr;};
    void deleteRoomStaffId() { this->roomStaffId_ = nullptr;};
    inline string roomStaffId() const { DARABONBA_PTR_GET_DEFAULT(roomStaffId_, "") };
    inline QueryMeetingRoomListResponseBodyResult& setRoomStaffId(string roomStaffId) { DARABONBA_PTR_SET_VALUE(roomStaffId_, roomStaffId) };


    // roomStatus Field Functions 
    bool hasRoomStatus() const { return this->roomStatus_ != nullptr;};
    void deleteRoomStatus() { this->roomStatus_ = nullptr;};
    inline int32_t roomStatus() const { DARABONBA_PTR_GET_DEFAULT(roomStatus_, 0) };
    inline QueryMeetingRoomListResponseBodyResult& setRoomStatus(int32_t roomStatus) { DARABONBA_PTR_SET_VALUE(roomStatus_, roomStatus) };


  protected:
    std::shared_ptr<string> corpId_ = nullptr;
    std::shared_ptr<string> isvRoomId_ = nullptr;
    std::shared_ptr<int32_t> roomCapacity_ = nullptr;
    std::shared_ptr<Models::QueryMeetingRoomListResponseBodyResultRoomGroup> roomGroup_ = nullptr;
    std::shared_ptr<string> roomId_ = nullptr;
    std::shared_ptr<vector<Models::QueryMeetingRoomListResponseBodyResultRoomLabels>> roomLabels_ = nullptr;
    std::shared_ptr<Models::QueryMeetingRoomListResponseBodyResultRoomLocation> roomLocation_ = nullptr;
    std::shared_ptr<string> roomName_ = nullptr;
    std::shared_ptr<string> roomPicture_ = nullptr;
    std::shared_ptr<string> roomStaffId_ = nullptr;
    std::shared_ptr<int32_t> roomStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
