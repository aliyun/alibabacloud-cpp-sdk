// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(total_price_cent, totalPriceCent_);
      DARABONBA_PTR_TO_JSON(travelers, travelersShrink_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(total_price_cent, totalPriceCent_);
      DARABONBA_PTR_FROM_JSON(travelers, travelersShrink_);
    };
    FlightCreateOrderV2ShrinkRequest() = default ;
    FlightCreateOrderV2ShrinkRequest(const FlightCreateOrderV2ShrinkRequest &) = default ;
    FlightCreateOrderV2ShrinkRequest(FlightCreateOrderV2ShrinkRequest &&) = default ;
    FlightCreateOrderV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderV2ShrinkRequest() = default ;
    FlightCreateOrderV2ShrinkRequest& operator=(const FlightCreateOrderV2ShrinkRequest &) = default ;
    FlightCreateOrderV2ShrinkRequest& operator=(FlightCreateOrderV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncCreateOrderKey_ != nullptr
        && this->asyncCreateOrderMode_ != nullptr && this->btripUserId_ != nullptr && this->buyerName_ != nullptr && this->contactInfoShrink_ != nullptr && this->isvName_ != nullptr
        && this->otaItemId_ != nullptr && this->outOrderId_ != nullptr && this->totalPriceCent_ != nullptr && this->travelersShrink_ != nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string asyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // asyncCreateOrderMode Field Functions 
    bool hasAsyncCreateOrderMode() const { return this->asyncCreateOrderMode_ != nullptr;};
    void deleteAsyncCreateOrderMode() { this->asyncCreateOrderMode_ = nullptr;};
    inline bool asyncCreateOrderMode() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderMode_, false) };
    inline FlightCreateOrderV2ShrinkRequest& setAsyncCreateOrderMode(bool asyncCreateOrderMode) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderMode_, asyncCreateOrderMode) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // contactInfoShrink Field Functions 
    bool hasContactInfoShrink() const { return this->contactInfoShrink_ != nullptr;};
    void deleteContactInfoShrink() { this->contactInfoShrink_ = nullptr;};
    inline string contactInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(contactInfoShrink_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setContactInfoShrink(string contactInfoShrink) { DARABONBA_PTR_SET_VALUE(contactInfoShrink_, contactInfoShrink) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // totalPriceCent Field Functions 
    bool hasTotalPriceCent() const { return this->totalPriceCent_ != nullptr;};
    void deleteTotalPriceCent() { this->totalPriceCent_ = nullptr;};
    inline int64_t totalPriceCent() const { DARABONBA_PTR_GET_DEFAULT(totalPriceCent_, 0L) };
    inline FlightCreateOrderV2ShrinkRequest& setTotalPriceCent(int64_t totalPriceCent) { DARABONBA_PTR_SET_VALUE(totalPriceCent_, totalPriceCent) };


    // travelersShrink Field Functions 
    bool hasTravelersShrink() const { return this->travelersShrink_ != nullptr;};
    void deleteTravelersShrink() { this->travelersShrink_ = nullptr;};
    inline string travelersShrink() const { DARABONBA_PTR_GET_DEFAULT(travelersShrink_, "") };
    inline FlightCreateOrderV2ShrinkRequest& setTravelersShrink(string travelersShrink) { DARABONBA_PTR_SET_VALUE(travelersShrink_, travelersShrink) };


  protected:
    std::shared_ptr<string> asyncCreateOrderKey_ = nullptr;
    std::shared_ptr<bool> asyncCreateOrderMode_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<int64_t> totalPriceCent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> travelersShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
