// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightCreateOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_TO_JSON(extra_info, extraInfoShrink_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerListShrink_);
      DARABONBA_PTR_TO_JSON(render_key, renderKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_FROM_JSON(extra_info, extraInfoShrink_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerListShrink_);
      DARABONBA_PTR_FROM_JSON(render_key, renderKey_);
    };
    IntlFlightCreateOrderShrinkRequest() = default ;
    IntlFlightCreateOrderShrinkRequest(const IntlFlightCreateOrderShrinkRequest &) = default ;
    IntlFlightCreateOrderShrinkRequest(IntlFlightCreateOrderShrinkRequest &&) = default ;
    IntlFlightCreateOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightCreateOrderShrinkRequest() = default ;
    IntlFlightCreateOrderShrinkRequest& operator=(const IntlFlightCreateOrderShrinkRequest &) = default ;
    IntlFlightCreateOrderShrinkRequest& operator=(IntlFlightCreateOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncCreateOrderKey_ != nullptr
        && this->asyncCreateOrderMode_ != nullptr && this->btripUserId_ != nullptr && this->buyerName_ != nullptr && this->contactInfoShrink_ != nullptr && this->extraInfoShrink_ != nullptr
        && this->isvName_ != nullptr && this->orderPrice_ != nullptr && this->otaItemId_ != nullptr && this->outOrderId_ != nullptr && this->passengerListShrink_ != nullptr
        && this->renderKey_ != nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string asyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // asyncCreateOrderMode Field Functions 
    bool hasAsyncCreateOrderMode() const { return this->asyncCreateOrderMode_ != nullptr;};
    void deleteAsyncCreateOrderMode() { this->asyncCreateOrderMode_ = nullptr;};
    inline bool asyncCreateOrderMode() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderMode_, false) };
    inline IntlFlightCreateOrderShrinkRequest& setAsyncCreateOrderMode(bool asyncCreateOrderMode) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderMode_, asyncCreateOrderMode) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // contactInfoShrink Field Functions 
    bool hasContactInfoShrink() const { return this->contactInfoShrink_ != nullptr;};
    void deleteContactInfoShrink() { this->contactInfoShrink_ = nullptr;};
    inline string contactInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(contactInfoShrink_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setContactInfoShrink(string contactInfoShrink) { DARABONBA_PTR_SET_VALUE(contactInfoShrink_, contactInfoShrink) };


    // extraInfoShrink Field Functions 
    bool hasExtraInfoShrink() const { return this->extraInfoShrink_ != nullptr;};
    void deleteExtraInfoShrink() { this->extraInfoShrink_ = nullptr;};
    inline string extraInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(extraInfoShrink_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setExtraInfoShrink(string extraInfoShrink) { DARABONBA_PTR_SET_VALUE(extraInfoShrink_, extraInfoShrink) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline int64_t orderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0L) };
    inline IntlFlightCreateOrderShrinkRequest& setOrderPrice(int64_t orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerListShrink Field Functions 
    bool hasPassengerListShrink() const { return this->passengerListShrink_ != nullptr;};
    void deletePassengerListShrink() { this->passengerListShrink_ = nullptr;};
    inline string passengerListShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerListShrink_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setPassengerListShrink(string passengerListShrink) { DARABONBA_PTR_SET_VALUE(passengerListShrink_, passengerListShrink) };


    // renderKey Field Functions 
    bool hasRenderKey() const { return this->renderKey_ != nullptr;};
    void deleteRenderKey() { this->renderKey_ = nullptr;};
    inline string renderKey() const { DARABONBA_PTR_GET_DEFAULT(renderKey_, "") };
    inline IntlFlightCreateOrderShrinkRequest& setRenderKey(string renderKey) { DARABONBA_PTR_SET_VALUE(renderKey_, renderKey) };


  protected:
    std::shared_ptr<string> asyncCreateOrderKey_ = nullptr;
    std::shared_ptr<bool> asyncCreateOrderMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactInfoShrink_ = nullptr;
    std::shared_ptr<string> extraInfoShrink_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> orderPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerListShrink_ = nullptr;
    std::shared_ptr<string> renderKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
