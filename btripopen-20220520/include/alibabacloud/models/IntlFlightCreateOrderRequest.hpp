// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTCREATEORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightCreateOrderRequestContactInfo.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/IntlFlightCreateOrderRequestPassengerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightCreateOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightCreateOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_TO_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(extra_info, extraInfo_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_price, orderPrice_);
      DARABONBA_PTR_TO_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(render_key, renderKey_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightCreateOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(async_create_order_key, asyncCreateOrderKey_);
      DARABONBA_PTR_FROM_JSON(async_create_order_mode, asyncCreateOrderMode_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(extra_info, extraInfo_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_price, orderPrice_);
      DARABONBA_PTR_FROM_JSON(ota_item_id, otaItemId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(render_key, renderKey_);
    };
    IntlFlightCreateOrderRequest() = default ;
    IntlFlightCreateOrderRequest(const IntlFlightCreateOrderRequest &) = default ;
    IntlFlightCreateOrderRequest(IntlFlightCreateOrderRequest &&) = default ;
    IntlFlightCreateOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightCreateOrderRequest() = default ;
    IntlFlightCreateOrderRequest& operator=(const IntlFlightCreateOrderRequest &) = default ;
    IntlFlightCreateOrderRequest& operator=(IntlFlightCreateOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asyncCreateOrderKey_ != nullptr
        && this->asyncCreateOrderMode_ != nullptr && this->btripUserId_ != nullptr && this->buyerName_ != nullptr && this->contactInfo_ != nullptr && this->extraInfo_ != nullptr
        && this->isvName_ != nullptr && this->orderPrice_ != nullptr && this->otaItemId_ != nullptr && this->outOrderId_ != nullptr && this->passengerList_ != nullptr
        && this->renderKey_ != nullptr; };
    // asyncCreateOrderKey Field Functions 
    bool hasAsyncCreateOrderKey() const { return this->asyncCreateOrderKey_ != nullptr;};
    void deleteAsyncCreateOrderKey() { this->asyncCreateOrderKey_ = nullptr;};
    inline string asyncCreateOrderKey() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderKey_, "") };
    inline IntlFlightCreateOrderRequest& setAsyncCreateOrderKey(string asyncCreateOrderKey) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderKey_, asyncCreateOrderKey) };


    // asyncCreateOrderMode Field Functions 
    bool hasAsyncCreateOrderMode() const { return this->asyncCreateOrderMode_ != nullptr;};
    void deleteAsyncCreateOrderMode() { this->asyncCreateOrderMode_ = nullptr;};
    inline bool asyncCreateOrderMode() const { DARABONBA_PTR_GET_DEFAULT(asyncCreateOrderMode_, false) };
    inline IntlFlightCreateOrderRequest& setAsyncCreateOrderMode(bool asyncCreateOrderMode) { DARABONBA_PTR_SET_VALUE(asyncCreateOrderMode_, asyncCreateOrderMode) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline IntlFlightCreateOrderRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline IntlFlightCreateOrderRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const IntlFlightCreateOrderRequestContactInfo & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, IntlFlightCreateOrderRequestContactInfo) };
    inline IntlFlightCreateOrderRequestContactInfo contactInfo() { DARABONBA_PTR_GET(contactInfo_, IntlFlightCreateOrderRequestContactInfo) };
    inline IntlFlightCreateOrderRequest& setContactInfo(const IntlFlightCreateOrderRequestContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline IntlFlightCreateOrderRequest& setContactInfo(IntlFlightCreateOrderRequestContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline const map<string, string> & extraInfo() const { DARABONBA_PTR_GET_CONST(extraInfo_, map<string, string>) };
    inline map<string, string> extraInfo() { DARABONBA_PTR_GET(extraInfo_, map<string, string>) };
    inline IntlFlightCreateOrderRequest& setExtraInfo(const map<string, string> & extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };
    inline IntlFlightCreateOrderRequest& setExtraInfo(map<string, string> && extraInfo) { DARABONBA_PTR_SET_RVALUE(extraInfo_, extraInfo) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline IntlFlightCreateOrderRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderPrice Field Functions 
    bool hasOrderPrice() const { return this->orderPrice_ != nullptr;};
    void deleteOrderPrice() { this->orderPrice_ = nullptr;};
    inline int64_t orderPrice() const { DARABONBA_PTR_GET_DEFAULT(orderPrice_, 0L) };
    inline IntlFlightCreateOrderRequest& setOrderPrice(int64_t orderPrice) { DARABONBA_PTR_SET_VALUE(orderPrice_, orderPrice) };


    // otaItemId Field Functions 
    bool hasOtaItemId() const { return this->otaItemId_ != nullptr;};
    void deleteOtaItemId() { this->otaItemId_ = nullptr;};
    inline string otaItemId() const { DARABONBA_PTR_GET_DEFAULT(otaItemId_, "") };
    inline IntlFlightCreateOrderRequest& setOtaItemId(string otaItemId) { DARABONBA_PTR_SET_VALUE(otaItemId_, otaItemId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightCreateOrderRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<IntlFlightCreateOrderRequestPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<IntlFlightCreateOrderRequestPassengerList>) };
    inline vector<IntlFlightCreateOrderRequestPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<IntlFlightCreateOrderRequestPassengerList>) };
    inline IntlFlightCreateOrderRequest& setPassengerList(const vector<IntlFlightCreateOrderRequestPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline IntlFlightCreateOrderRequest& setPassengerList(vector<IntlFlightCreateOrderRequestPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // renderKey Field Functions 
    bool hasRenderKey() const { return this->renderKey_ != nullptr;};
    void deleteRenderKey() { this->renderKey_ = nullptr;};
    inline string renderKey() const { DARABONBA_PTR_GET_DEFAULT(renderKey_, "") };
    inline IntlFlightCreateOrderRequest& setRenderKey(string renderKey) { DARABONBA_PTR_SET_VALUE(renderKey_, renderKey) };


  protected:
    std::shared_ptr<string> asyncCreateOrderKey_ = nullptr;
    std::shared_ptr<bool> asyncCreateOrderMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<IntlFlightCreateOrderRequestContactInfo> contactInfo_ = nullptr;
    std::shared_ptr<map<string, string>> extraInfo_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> orderPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> otaItemId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<IntlFlightCreateOrderRequestPassengerList>> passengerList_ = nullptr;
    std::shared_ptr<string> renderKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
