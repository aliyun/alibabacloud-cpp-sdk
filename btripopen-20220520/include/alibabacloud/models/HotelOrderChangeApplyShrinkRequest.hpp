// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCHANGEAPPLYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCHANGEAPPLYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderChangeApplyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderChangeApplyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(reason, reason_);
      DARABONBA_PTR_TO_JSON(room_info_list, roomInfoListShrink_);
      DARABONBA_PTR_TO_JSON(sale_order_id, saleOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderChangeApplyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(reason, reason_);
      DARABONBA_PTR_FROM_JSON(room_info_list, roomInfoListShrink_);
      DARABONBA_PTR_FROM_JSON(sale_order_id, saleOrderId_);
    };
    HotelOrderChangeApplyShrinkRequest() = default ;
    HotelOrderChangeApplyShrinkRequest(const HotelOrderChangeApplyShrinkRequest &) = default ;
    HotelOrderChangeApplyShrinkRequest(HotelOrderChangeApplyShrinkRequest &&) = default ;
    HotelOrderChangeApplyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderChangeApplyShrinkRequest() = default ;
    HotelOrderChangeApplyShrinkRequest& operator=(const HotelOrderChangeApplyShrinkRequest &) = default ;
    HotelOrderChangeApplyShrinkRequest& operator=(HotelOrderChangeApplyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->disOrderId_ != nullptr && this->reason_ != nullptr && this->roomInfoListShrink_ != nullptr && this->saleOrderId_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderChangeApplyShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline HotelOrderChangeApplyShrinkRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline HotelOrderChangeApplyShrinkRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // roomInfoListShrink Field Functions 
    bool hasRoomInfoListShrink() const { return this->roomInfoListShrink_ != nullptr;};
    void deleteRoomInfoListShrink() { this->roomInfoListShrink_ = nullptr;};
    inline string roomInfoListShrink() const { DARABONBA_PTR_GET_DEFAULT(roomInfoListShrink_, "") };
    inline HotelOrderChangeApplyShrinkRequest& setRoomInfoListShrink(string roomInfoListShrink) { DARABONBA_PTR_SET_VALUE(roomInfoListShrink_, roomInfoListShrink) };


    // saleOrderId Field Functions 
    bool hasSaleOrderId() const { return this->saleOrderId_ != nullptr;};
    void deleteSaleOrderId() { this->saleOrderId_ = nullptr;};
    inline string saleOrderId() const { DARABONBA_PTR_GET_DEFAULT(saleOrderId_, "") };
    inline HotelOrderChangeApplyShrinkRequest& setSaleOrderId(string saleOrderId) { DARABONBA_PTR_SET_VALUE(saleOrderId_, saleOrderId) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reason_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> roomInfoListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> saleOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
