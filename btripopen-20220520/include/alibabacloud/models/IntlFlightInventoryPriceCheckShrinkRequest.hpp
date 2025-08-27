// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTINVENTORYPRICECHECKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightInventoryPriceCheckShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightInventoryPriceCheckShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightInventoryPriceCheckShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerListShrink_);
    };
    IntlFlightInventoryPriceCheckShrinkRequest() = default ;
    IntlFlightInventoryPriceCheckShrinkRequest(const IntlFlightInventoryPriceCheckShrinkRequest &) = default ;
    IntlFlightInventoryPriceCheckShrinkRequest(IntlFlightInventoryPriceCheckShrinkRequest &&) = default ;
    IntlFlightInventoryPriceCheckShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightInventoryPriceCheckShrinkRequest() = default ;
    IntlFlightInventoryPriceCheckShrinkRequest& operator=(const IntlFlightInventoryPriceCheckShrinkRequest &) = default ;
    IntlFlightInventoryPriceCheckShrinkRequest& operator=(IntlFlightInventoryPriceCheckShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->isvName_ != nullptr && this->orderPrice_ != nullptr && this->otaItemId_ != nullptr && this->passengerListShrink_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightInventoryPriceCheckShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightInventoryPriceCheckShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightInventoryPriceCheckShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline int64_t orderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0L) };
    inline IntlFlightInventoryPriceCheckShrinkRequest& setOrderPrice(int64_t orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline IntlFlightInventoryPriceCheckShrinkRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // passengerListShrink Field Functions 
    bool hasPassengerListShrink() const { return this->passengerListShrink_ != nullptr;};
    void deletePassengerListShrink() { this->passengerListShrink_ = nullptr;};
    inline string passengerListShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerListShrink_, "") };
    inline IntlFlightInventoryPriceCheckShrinkRequest& setPassengerListShrink(string passengerListShrink) { DARABONBA_PTR_SET_VALUE(passengerListShrink_, passengerListShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> orderPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
