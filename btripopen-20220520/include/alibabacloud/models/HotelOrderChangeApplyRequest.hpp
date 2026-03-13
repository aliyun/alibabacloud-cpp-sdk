// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderChangeApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(room_info_list, roomInfoList_);
      DARABONBA_PTR_TO_JSON(sale_order_id, saleOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(room_info_list, roomInfoList_);
      DARABONBA_PTR_FROM_JSON(sale_order_id, saleOrderId_);
    };
    HotelOrderChangeApplyRequest() = default ;
    HotelOrderChangeApplyRequest(const HotelOrderChangeApplyRequest &) = default ;
    HotelOrderChangeApplyRequest(HotelOrderChangeApplyRequest &&) = default ;
    HotelOrderChangeApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeApplyRequest() = default ;
    HotelOrderChangeApplyRequest& operator=(const HotelOrderChangeApplyRequest &) = default ;
    HotelOrderChangeApplyRequest& operator=(HotelOrderChangeApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RoomInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RoomInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(cancel_date, cancelDate_);
        DARABONBA_PTR_TO_JSON(room_no, roomNo_);
      };
      friend void from_json(const Darabonba::Json& j, RoomInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(cancel_date, cancelDate_);
        DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
      };
      RoomInfoList() = default ;
      RoomInfoList(const RoomInfoList &) = default ;
      RoomInfoList(RoomInfoList &&) = default ;
      RoomInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RoomInfoList() = default ;
      RoomInfoList& operator=(const RoomInfoList &) = default ;
      RoomInfoList& operator=(RoomInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cancelDate_ == nullptr
        && this->roomNo_ == nullptr; };
      // cancelDate Field Functions 
      bool hasCancelDate() const { return this->cancelDate_ != nullptr;};
      void deleteCancelDate() { this->cancelDate_ = nullptr;};
      inline const vector<string> & getCancelDate() const { DARABONBA_PTR_GET_CONST(cancelDate_, vector<string>) };
      inline vector<string> getCancelDate() { DARABONBA_PTR_GET(cancelDate_, vector<string>) };
      inline RoomInfoList& setCancelDate(const vector<string> & cancelDate) { DARABONBA_PTR_SET_VALUE(cancelDate_, cancelDate) };
      inline RoomInfoList& setCancelDate(vector<string> && cancelDate) { DARABONBA_PTR_SET_RVALUE(cancelDate_, cancelDate) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline int32_t getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
      inline RoomInfoList& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> cancelDate_ {};
      // This parameter is required.
      shared_ptr<int32_t> roomNo_ {};
    };

    virtual bool empty() const override { return this->btripUserId_ == nullptr
        && this->disOrderId_ == nullptr && this->reason_ == nullptr && this->roomInfoList_ == nullptr && this->saleOrderId_ == nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string getBtripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderChangeApplyRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string getDisOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline HotelOrderChangeApplyRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline HotelOrderChangeApplyRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // roomInfoList Field Functions 
    bool hasRoomInfoList() const { return this->roomInfoList_ != nullptr;};
    void deleteRoomInfoList() { this->roomInfoList_ = nullptr;};
    inline const vector<HotelOrderChangeApplyRequest::RoomInfoList> & getRoomInfoList() const { DARABONBA_PTR_GET_CONST(roomInfoList_, vector<HotelOrderChangeApplyRequest::RoomInfoList>) };
    inline vector<HotelOrderChangeApplyRequest::RoomInfoList> getRoomInfoList() { DARABONBA_PTR_GET(roomInfoList_, vector<HotelOrderChangeApplyRequest::RoomInfoList>) };
    inline HotelOrderChangeApplyRequest& setRoomInfoList(const vector<HotelOrderChangeApplyRequest::RoomInfoList> & roomInfoList) { DARABONBA_PTR_SET_VALUE(roomInfoList_, roomInfoList) };
    inline HotelOrderChangeApplyRequest& setRoomInfoList(vector<HotelOrderChangeApplyRequest::RoomInfoList> && roomInfoList) { DARABONBA_PTR_SET_RVALUE(roomInfoList_, roomInfoList) };


    // saleOrderId Field Functions 
    bool hasSaleOrderId() const { return this->saleOrderId_ != nullptr;};
    void deleteSaleOrderId() { this->saleOrderId_ = nullptr;};
    inline string getSaleOrderId() const { DARABONBA_PTR_GET_DEFAULT(saleOrderId_, "") };
    inline HotelOrderChangeApplyRequest& setSaleOrderId(string saleOrderId) { DARABONBA_PTR_SET_VALUE(saleOrderId_, saleOrderId) };


  protected:
    shared_ptr<string> btripUserId_ {};
    // This parameter is required.
    shared_ptr<string> disOrderId_ {};
    // This parameter is required.
    shared_ptr<string> reason_ {};
    // This parameter is required.
    shared_ptr<vector<HotelOrderChangeApplyRequest::RoomInfoList>> roomInfoList_ {};
    // This parameter is required.
    shared_ptr<string> saleOrderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
