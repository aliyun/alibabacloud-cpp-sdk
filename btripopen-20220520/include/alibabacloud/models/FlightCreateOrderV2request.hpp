// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTCREATEORDERV2REQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightCreateOrderV2RequestContactInfo.hpp>
#include <vector>
#include <alibabacloud/models/FlightCreateOrderV2RequestTravelers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightCreateOrderV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightCreateOrderV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(total_price_cent, totalPriceCent_);
      DARABONBA_PTR_TO_JSON(travelers, travelers_);
    };
    friend void from_json(const Darabonba::Json& j, FlightCreateOrderV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(total_price_cent, totalPriceCent_);
      DARABONBA_PTR_FROM_JSON(travelers, travelers_);
    };
    FlightCreateOrderV2Request() = default ;
    FlightCreateOrderV2Request(const FlightCreateOrderV2Request &) = default ;
    FlightCreateOrderV2Request(FlightCreateOrderV2Request &&) = default ;
    FlightCreateOrderV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightCreateOrderV2Request() = default ;
    FlightCreateOrderV2Request& operator=(const FlightCreateOrderV2Request &) = default ;
    FlightCreateOrderV2Request& operator=(FlightCreateOrderV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncCreateOrderKey_ != nullptr
        && this->asyncCreateOrderMode_ != nullptr && this->btripUserId_ != nullptr && this->buyerName_ != nullptr && this->contactInfo_ != nullptr && this->isvName_ != nullptr
        && this->otaItemId_ != nullptr && this->outOrderId_ != nullptr && this->totalPriceCent_ != nullptr && this->travelers_ != nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string asyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline FlightCreateOrderV2Request& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // asyncCreateOrderMode Field Functions 
    bool hasAsyncCreateOrderMode() const { return this->asyncCreateOrderMode_ != nullptr;};
    void deleteAsyncCreateOrderMode() { this->asyncCreateOrderMode_ = nullptr;};
    inline bool asyncCreateOrderMode() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderMode_, false) };
    inline FlightCreateOrderV2Request& setAsyncCreateOrderMode(bool asyncCreateOrderMode) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderMode_, asyncCreateOrderMode) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline FlightCreateOrderV2Request& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline FlightCreateOrderV2Request& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const FlightCreateOrderV2RequestContactInfo & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, FlightCreateOrderV2RequestContactInfo) };
    inline FlightCreateOrderV2RequestContactInfo contactInfo() { DARABONBA_PTR_GET(contactInfo_, FlightCreateOrderV2RequestContactInfo) };
    inline FlightCreateOrderV2Request& setContactInfo(const FlightCreateOrderV2RequestContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline FlightCreateOrderV2Request& setContactInfo(FlightCreateOrderV2RequestContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightCreateOrderV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline FlightCreateOrderV2Request& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightCreateOrderV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // totalPriceCent Field Functions 
    bool hasTotalPriceCent() const { return this->totalPriceCent_ != nullptr;};
    void deleteTotalPriceCent() { this->totalPriceCent_ = nullptr;};
    inline int64_t totalPriceCent() const { DARABONBA_PTR_GET_DEFAULT(totalPriceCent_, 0L) };
    inline FlightCreateOrderV2Request& setTotalPriceCent(int64_t totalPriceCent) { DARABONBA_PTR_SET_VALUE(totalPriceCent_, totalPriceCent) };


    // travelers Field Functions 
    bool hasTravelers() const { return this->travelers_ != nullptr;};
    void deleteTravelers() { this->travelers_ = nullptr;};
    inline const vector<FlightCreateOrderV2RequestTravelers> & travelers() const { DARABONBA_PTR_GET_CONST(travelers_, vector<FlightCreateOrderV2RequestTravelers>) };
    inline vector<FlightCreateOrderV2RequestTravelers> travelers() { DARABONBA_PTR_GET(travelers_, vector<FlightCreateOrderV2RequestTravelers>) };
    inline FlightCreateOrderV2Request& setTravelers(const vector<FlightCreateOrderV2RequestTravelers> & travelers) { DARABONBA_PTR_SET_VALUE(travelers_, travelers) };
    inline FlightCreateOrderV2Request& setTravelers(vector<FlightCreateOrderV2RequestTravelers> && travelers) { DARABONBA_PTR_SET_RVALUE(travelers_, travelers) };


  protected:
    std::shared_ptr<string> asyncCreateOrderKey_ = nullptr;
    std::shared_ptr<bool> asyncCreateOrderMode_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<FlightCreateOrderV2RequestContactInfo> contactInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<int64_t> totalPriceCent_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<FlightCreateOrderV2RequestTravelers>> travelers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
