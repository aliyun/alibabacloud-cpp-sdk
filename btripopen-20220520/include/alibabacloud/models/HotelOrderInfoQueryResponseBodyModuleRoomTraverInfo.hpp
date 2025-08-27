// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFO_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERINFOQUERYRESPONSEBODYMODULEROOMTRAVERINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& obj) { 
      DARABONBA_PTR_TO_JSON(live_room_no, liveRoomNo_);
      DARABONBA_PTR_TO_JSON(room_type_name, roomTypeName_);
      DARABONBA_PTR_TO_JSON(traver_infos, traverInfos_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(live_room_no, liveRoomNo_);
      DARABONBA_PTR_FROM_JSON(room_type_name, roomTypeName_);
      DARABONBA_PTR_FROM_JSON(traver_infos, traverInfos_);
    };
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo &&) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo() = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& operator=(const HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo &) = default ;
    HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& operator=(HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->liveRoomNo_ != nullptr
        && this->roomTypeName_ != nullptr && this->traverInfos_ != nullptr; };
    // liveRoomNo Field Functions 
    bool hasLiveRoomNo() const { return this->liveRoomNo_ != nullptr;};
    void deleteLiveRoomNo() { this->liveRoomNo_ = nullptr;};
    inline string liveRoomNo() const { DARABONBA_PTR_GET_DEFAULT(liveRoomNo_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& setLiveRoomNo(string liveRoomNo) { DARABONBA_PTR_SET_VALUE(liveRoomNo_, liveRoomNo) };


    // roomTypeName Field Functions 
    bool hasRoomTypeName() const { return this->roomTypeName_ != nullptr;};
    void deleteRoomTypeName() { this->roomTypeName_ = nullptr;};
    inline string roomTypeName() const { DARABONBA_PTR_GET_DEFAULT(roomTypeName_, "") };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& setRoomTypeName(string roomTypeName) { DARABONBA_PTR_SET_VALUE(roomTypeName_, roomTypeName) };


    // traverInfos Field Functions 
    bool hasTraverInfos() const { return this->traverInfos_ != nullptr;};
    void deleteTraverInfos() { this->traverInfos_ = nullptr;};
    inline const vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos> & traverInfos() const { DARABONBA_PTR_GET_CONST(traverInfos_, vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos>) };
    inline vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos> traverInfos() { DARABONBA_PTR_GET(traverInfos_, vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos>) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& setTraverInfos(const vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos> & traverInfos) { DARABONBA_PTR_SET_VALUE(traverInfos_, traverInfos) };
    inline HotelOrderInfoQueryResponseBodyModuleRoomTraverInfo& setTraverInfos(vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos> && traverInfos) { DARABONBA_PTR_SET_RVALUE(traverInfos_, traverInfos) };


  protected:
    std::shared_ptr<string> liveRoomNo_ = nullptr;
    std::shared_ptr<string> roomTypeName_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderInfoQueryResponseBodyModuleRoomTraverInfoTraverInfos>> traverInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
