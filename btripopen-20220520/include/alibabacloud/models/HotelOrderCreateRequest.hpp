// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderCreateRequestInvoiceInfo.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderCreateRequestOccupantInfoList.hpp>
#include <alibabacloud/models/HotelOrderCreateRequestPromotionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(contract_email, contractEmail_);
      DARABONBA_PTR_TO_JSON(contract_name, contractName_);
      DARABONBA_PTR_TO_JSON(contract_phone, contractPhone_);
      DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
      DARABONBA_PTR_TO_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_TO_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_TO_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_TO_JSON(room_id, roomId_);
      DARABONBA_PTR_TO_JSON(room_num, roomNum_);
      DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
      DARABONBA_PTR_TO_JSON(shid, shid_);
      DARABONBA_PTR_TO_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_TO_JSON(validate_res_key, validateResKey_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(contract_email, contractEmail_);
      DARABONBA_PTR_FROM_JSON(contract_name, contractName_);
      DARABONBA_PTR_FROM_JSON(contract_phone, contractPhone_);
      DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
      DARABONBA_PTR_FROM_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_FROM_JSON(person_pay_price, personPayPrice_);
      DARABONBA_PTR_FROM_JSON(promotion_info, promotionInfo_);
      DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
      DARABONBA_PTR_FROM_JSON(room_id, roomId_);
      DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
      DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
      DARABONBA_PTR_FROM_JSON(shid, shid_);
      DARABONBA_PTR_FROM_JSON(total_order_price, totalOrderPrice_);
      DARABONBA_PTR_FROM_JSON(validate_res_key, validateResKey_);
    };
    HotelOrderCreateRequest() = default ;
    HotelOrderCreateRequest(const HotelOrderCreateRequest &) = default ;
    HotelOrderCreateRequest(HotelOrderCreateRequest &&) = default ;
    HotelOrderCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateRequest() = default ;
    HotelOrderCreateRequest& operator=(const HotelOrderCreateRequest &) = default ;
    HotelOrderCreateRequest& operator=(HotelOrderCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->contractEmail_ != nullptr && this->contractName_ != nullptr && this->contractPhone_ != nullptr
        && this->corpPayPrice_ != nullptr && this->disOrderId_ != nullptr && this->extra_ != nullptr && this->invoiceInfo_ != nullptr && this->itemId_ != nullptr
        && this->itineraryNo_ != nullptr && this->occupantInfoList_ != nullptr && this->personPayPrice_ != nullptr && this->promotionInfo_ != nullptr && this->ratePlanId_ != nullptr
        && this->roomId_ != nullptr && this->roomNum_ != nullptr && this->sellerId_ != nullptr && this->shid_ != nullptr && this->totalOrderPrice_ != nullptr
        && this->validateResKey_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline HotelOrderCreateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelOrderCreateRequest& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelOrderCreateRequest& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // contractEmail Field Functions 
    bool hasContractEmail() const { return this->contractEmail_ != nullptr;};
    void deleteContractEmail() { this->contractEmail_ = nullptr;};
    inline string contractEmail() const { DARABONBA_PTR_GET_DEFAULT(contractEmail_, "") };
    inline HotelOrderCreateRequest& setContractEmail(string contractEmail) { DARABONBA_PTR_SET_VALUE(contractEmail_, contractEmail) };


    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string contractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline HotelOrderCreateRequest& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // contractPhone Field Functions 
    bool hasContractPhone() const { return this->contractPhone_ != nullptr;};
    void deleteContractPhone() { this->contractPhone_ = nullptr;};
    inline string contractPhone() const { DARABONBA_PTR_GET_DEFAULT(contractPhone_, "") };
    inline HotelOrderCreateRequest& setContractPhone(string contractPhone) { DARABONBA_PTR_SET_VALUE(contractPhone_, contractPhone) };


    // corpPayPrice Field Functions 
    bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
    void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
    inline int64_t corpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0L) };
    inline HotelOrderCreateRequest& setCorpPayPrice(int64_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline HotelOrderCreateRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline HotelOrderCreateRequest& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const HotelOrderCreateRequestInvoiceInfo & invoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, HotelOrderCreateRequestInvoiceInfo) };
    inline HotelOrderCreateRequestInvoiceInfo invoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, HotelOrderCreateRequestInvoiceInfo) };
    inline HotelOrderCreateRequest& setInvoiceInfo(const HotelOrderCreateRequestInvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline HotelOrderCreateRequest& setInvoiceInfo(HotelOrderCreateRequestInvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline HotelOrderCreateRequest& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // itineraryNo Field Functions 
    bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
    void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
    inline string itineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
    inline HotelOrderCreateRequest& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


    // occupantInfoList Field Functions 
    bool hasOccupantInfoList() const { return this->occupantInfoList_ != nullptr;};
    void deleteOccupantInfoList() { this->occupantInfoList_ = nullptr;};
    inline const vector<HotelOrderCreateRequestOccupantInfoList> & occupantInfoList() const { DARABONBA_PTR_GET_CONST(occupantInfoList_, vector<HotelOrderCreateRequestOccupantInfoList>) };
    inline vector<HotelOrderCreateRequestOccupantInfoList> occupantInfoList() { DARABONBA_PTR_GET(occupantInfoList_, vector<HotelOrderCreateRequestOccupantInfoList>) };
    inline HotelOrderCreateRequest& setOccupantInfoList(const vector<HotelOrderCreateRequestOccupantInfoList> & occupantInfoList) { DARABONBA_PTR_SET_VALUE(occupantInfoList_, occupantInfoList) };
    inline HotelOrderCreateRequest& setOccupantInfoList(vector<HotelOrderCreateRequestOccupantInfoList> && occupantInfoList) { DARABONBA_PTR_SET_RVALUE(occupantInfoList_, occupantInfoList) };


    // personPayPrice Field Functions 
    bool hasPersonPayPrice() const { return this->personPayPrice_ != nullptr;};
    void deletePersonPayPrice() { this->personPayPrice_ = nullptr;};
    inline int64_t personPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personPayPrice_, 0L) };
    inline HotelOrderCreateRequest& setPersonPayPrice(int64_t personPayPrice) { DARABONBA_PTR_SET_VALUE(personPayPrice_, personPayPrice) };


    // promotionInfo Field Functions 
    bool hasPromotionInfo() const { return this->promotionInfo_ != nullptr;};
    void deletePromotionInfo() { this->promotionInfo_ = nullptr;};
    inline const HotelOrderCreateRequestPromotionInfo & promotionInfo() const { DARABONBA_PTR_GET_CONST(promotionInfo_, HotelOrderCreateRequestPromotionInfo) };
    inline HotelOrderCreateRequestPromotionInfo promotionInfo() { DARABONBA_PTR_GET(promotionInfo_, HotelOrderCreateRequestPromotionInfo) };
    inline HotelOrderCreateRequest& setPromotionInfo(const HotelOrderCreateRequestPromotionInfo & promotionInfo) { DARABONBA_PTR_SET_VALUE(promotionInfo_, promotionInfo) };
    inline HotelOrderCreateRequest& setPromotionInfo(HotelOrderCreateRequestPromotionInfo && promotionInfo) { DARABONBA_PTR_SET_RVALUE(promotionInfo_, promotionInfo) };


    // ratePlanId Field Functions 
    bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
    void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
    inline int64_t ratePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, 0L) };
    inline HotelOrderCreateRequest& setRatePlanId(int64_t ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


    // roomId Field Functions 
    bool hasRoomId() const { return this->roomId_ != nullptr;};
    void deleteRoomId() { this->roomId_ = nullptr;};
    inline int64_t roomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, 0L) };
    inline HotelOrderCreateRequest& setRoomId(int64_t roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t roomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline HotelOrderCreateRequest& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline int64_t sellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, 0L) };
    inline HotelOrderCreateRequest& setSellerId(int64_t sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // shid Field Functions 
    bool hasShid() const { return this->shid_ != nullptr;};
    void deleteShid() { this->shid_ = nullptr;};
    inline int64_t shid() const { DARABONBA_PTR_GET_DEFAULT(shid_, 0L) };
    inline HotelOrderCreateRequest& setShid(int64_t shid) { DARABONBA_PTR_SET_VALUE(shid_, shid) };


    // totalOrderPrice Field Functions 
    bool hasTotalOrderPrice() const { return this->totalOrderPrice_ != nullptr;};
    void deleteTotalOrderPrice() { this->totalOrderPrice_ = nullptr;};
    inline int64_t totalOrderPrice() const { DARABONBA_PTR_GET_DEFAULT(totalOrderPrice_, 0L) };
    inline HotelOrderCreateRequest& setTotalOrderPrice(int64_t totalOrderPrice) { DARABONBA_PTR_SET_VALUE(totalOrderPrice_, totalOrderPrice) };


    // validateResKey Field Functions 
    bool hasValidateResKey() const { return this->validateResKey_ != nullptr;};
    void deleteValidateResKey() { this->validateResKey_ = nullptr;};
    inline string validateResKey() const { DARABONBA_PTR_GET_DEFAULT(validateResKey_, "") };
    inline HotelOrderCreateRequest& setValidateResKey(string validateResKey) { DARABONBA_PTR_SET_VALUE(validateResKey_, validateResKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkIn_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<string> contractEmail_ = nullptr;
    std::shared_ptr<string> contractName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contractPhone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> corpPayPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<HotelOrderCreateRequestInvoiceInfo> invoiceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> itemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itineraryNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<HotelOrderCreateRequestOccupantInfoList>> occupantInfoList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> personPayPrice_ = nullptr;
    std::shared_ptr<HotelOrderCreateRequestPromotionInfo> promotionInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ratePlanId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> roomId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> roomNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> sellerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> shid_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> totalOrderPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> validateResKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
