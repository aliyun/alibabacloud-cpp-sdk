// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO.hpp>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleCancelInfo.hpp>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo.hpp>
#include <vector>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos.hpp>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleInvoiceInfo.hpp>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleOccupantInfoList.hpp>
#include <alibabacloud/models/HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderDetailInfoResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(actual_check_in_time, actualCheckInTime_);
      DARABONBA_PTR_TO_JSON(actual_check_out_time, actualCheckOutTime_);
      DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(cancel_fine, cancelFine_);
      DARABONBA_PTR_TO_JSON(cancel_info, cancelInfo_);
      DARABONBA_PTR_TO_JSON(check_in, checkIn_);
      DARABONBA_PTR_TO_JSON(check_out, checkOut_);
      DARABONBA_PTR_TO_JSON(confirm_order_time, confirmOrderTime_);
      DARABONBA_PTR_TO_JSON(contract_name, contractName_);
      DARABONBA_PTR_TO_JSON(contract_tel, contractTel_);
      DARABONBA_PTR_TO_JSON(create_order_time, createOrderTime_);
      DARABONBA_PTR_TO_JSON(early_arrival_time, earlyArrivalTime_);
      DARABONBA_PTR_TO_JSON(early_departure, earlyDeparture_);
      DARABONBA_PTR_TO_JSON(guest_count, guestCount_);
      DARABONBA_PTR_TO_JSON(hotel_detail_info, hotelDetailInfo_);
      DARABONBA_PTR_TO_JSON(hotel_sale_order_room_infos, hotelSaleOrderRoomInfos_);
      DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(last_arrival_time, lastArrivalTime_);
      DARABONBA_PTR_TO_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_TO_JSON(out_confirm_code, outConfirmCode_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(product_type, productType_);
      DARABONBA_PTR_TO_JSON(purchase_order_id, purchaseOrderId_);
      DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_TO_JSON(refund_service_fee, refundServiceFee_);
      DARABONBA_PTR_TO_JSON(room_night_price_info_list, roomNightPriceInfoList_);
      DARABONBA_PTR_TO_JSON(room_number, roomNumber_);
      DARABONBA_PTR_TO_JSON(room_type_name, roomTypeName_);
      DARABONBA_PTR_TO_JSON(seller_id, sellerId_);
      DARABONBA_PTR_TO_JSON(seller_name, sellerName_);
      DARABONBA_PTR_TO_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_TO_JSON(settle_type, settleType_);
      DARABONBA_PTR_TO_JSON(supplier_order_id, supplierOrderId_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(actual_check_in_time, actualCheckInTime_);
      DARABONBA_PTR_FROM_JSON(actual_check_out_time, actualCheckOutTime_);
      DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_d_t_o, btripHotelCancelPolicyDTO_);
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(cancel_fine, cancelFine_);
      DARABONBA_PTR_FROM_JSON(cancel_info, cancelInfo_);
      DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
      DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
      DARABONBA_PTR_FROM_JSON(confirm_order_time, confirmOrderTime_);
      DARABONBA_PTR_FROM_JSON(contract_name, contractName_);
      DARABONBA_PTR_FROM_JSON(contract_tel, contractTel_);
      DARABONBA_PTR_FROM_JSON(create_order_time, createOrderTime_);
      DARABONBA_PTR_FROM_JSON(early_arrival_time, earlyArrivalTime_);
      DARABONBA_PTR_FROM_JSON(early_departure, earlyDeparture_);
      DARABONBA_PTR_FROM_JSON(guest_count, guestCount_);
      DARABONBA_PTR_FROM_JSON(hotel_detail_info, hotelDetailInfo_);
      DARABONBA_PTR_FROM_JSON(hotel_sale_order_room_infos, hotelSaleOrderRoomInfos_);
      DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(last_arrival_time, lastArrivalTime_);
      DARABONBA_PTR_FROM_JSON(occupant_info_list, occupantInfoList_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
      DARABONBA_PTR_FROM_JSON(out_confirm_code, outConfirmCode_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(product_type, productType_);
      DARABONBA_PTR_FROM_JSON(purchase_order_id, purchaseOrderId_);
      DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
      DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
      DARABONBA_PTR_FROM_JSON(refund_service_fee, refundServiceFee_);
      DARABONBA_PTR_FROM_JSON(room_night_price_info_list, roomNightPriceInfoList_);
      DARABONBA_PTR_FROM_JSON(room_number, roomNumber_);
      DARABONBA_PTR_FROM_JSON(room_type_name, roomTypeName_);
      DARABONBA_PTR_FROM_JSON(seller_id, sellerId_);
      DARABONBA_PTR_FROM_JSON(seller_name, sellerName_);
      DARABONBA_PTR_FROM_JSON(service_fee, serviceFee_);
      DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
      DARABONBA_PTR_FROM_JSON(supplier_order_id, supplierOrderId_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
    };
    HotelOrderDetailInfoResponseBodyModule() = default ;
    HotelOrderDetailInfoResponseBodyModule(const HotelOrderDetailInfoResponseBodyModule &) = default ;
    HotelOrderDetailInfoResponseBodyModule(HotelOrderDetailInfoResponseBodyModule &&) = default ;
    HotelOrderDetailInfoResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBodyModule() = default ;
    HotelOrderDetailInfoResponseBodyModule& operator=(const HotelOrderDetailInfoResponseBodyModule &) = default ;
    HotelOrderDetailInfoResponseBodyModule& operator=(HotelOrderDetailInfoResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualCheckInTime_ != nullptr
        && this->actualCheckOutTime_ != nullptr && this->btripHotelCancelPolicyDTO_ != nullptr && this->btripOrderId_ != nullptr && this->cancelFine_ != nullptr && this->cancelInfo_ != nullptr
        && this->checkIn_ != nullptr && this->checkOut_ != nullptr && this->confirmOrderTime_ != nullptr && this->contractName_ != nullptr && this->contractTel_ != nullptr
        && this->createOrderTime_ != nullptr && this->earlyArrivalTime_ != nullptr && this->earlyDeparture_ != nullptr && this->guestCount_ != nullptr && this->hotelDetailInfo_ != nullptr
        && this->hotelSaleOrderRoomInfos_ != nullptr && this->invoiceInfo_ != nullptr && this->itemId_ != nullptr && this->lastArrivalTime_ != nullptr && this->occupantInfoList_ != nullptr
        && this->orderStatus_ != nullptr && this->orderStatusDesc_ != nullptr && this->outConfirmCode_ != nullptr && this->payTime_ != nullptr && this->productType_ != nullptr
        && this->purchaseOrderId_ != nullptr && this->refundPrice_ != nullptr && this->refundReason_ != nullptr && this->refundServiceFee_ != nullptr && this->roomNightPriceInfoList_ != nullptr
        && this->roomNumber_ != nullptr && this->roomTypeName_ != nullptr && this->sellerId_ != nullptr && this->sellerName_ != nullptr && this->serviceFee_ != nullptr
        && this->settleType_ != nullptr && this->supplierOrderId_ != nullptr && this->totalPrice_ != nullptr; };
    // actualCheckInTime Field Functions 
    bool hasActualCheckInTime() const { return this->actualCheckInTime_ != nullptr;};
    void deleteActualCheckInTime() { this->actualCheckInTime_ = nullptr;};
    inline string actualCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(actualCheckInTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setActualCheckInTime(string actualCheckInTime) { DARABONBA_PTR_SET_VALUE(actualCheckInTime_, actualCheckInTime) };


    // actualCheckOutTime Field Functions 
    bool hasActualCheckOutTime() const { return this->actualCheckOutTime_ != nullptr;};
    void deleteActualCheckOutTime() { this->actualCheckOutTime_ = nullptr;};
    inline string actualCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(actualCheckOutTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setActualCheckOutTime(string actualCheckOutTime) { DARABONBA_PTR_SET_VALUE(actualCheckOutTime_, actualCheckOutTime) };


    // btripHotelCancelPolicyDTO Field Functions 
    bool hasBtripHotelCancelPolicyDTO() const { return this->btripHotelCancelPolicyDTO_ != nullptr;};
    void deleteBtripHotelCancelPolicyDTO() { this->btripHotelCancelPolicyDTO_ = nullptr;};
    inline const Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyDTO_, Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO) };
    inline Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO btripHotelCancelPolicyDTO() { DARABONBA_PTR_GET(btripHotelCancelPolicyDTO_, Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO) };
    inline HotelOrderDetailInfoResponseBodyModule& setBtripHotelCancelPolicyDTO(const Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };
    inline HotelOrderDetailInfoResponseBodyModule& setBtripHotelCancelPolicyDTO(Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO && btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };


    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline string btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setBtripOrderId(string btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // cancelFine Field Functions 
    bool hasCancelFine() const { return this->cancelFine_ != nullptr;};
    void deleteCancelFine() { this->cancelFine_ = nullptr;};
    inline int64_t cancelFine() const { DARABONBA_PTR_GET_DEFAULT(cancelFine_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModule& setCancelFine(int64_t cancelFine) { DARABONBA_PTR_SET_VALUE(cancelFine_, cancelFine) };


    // cancelInfo Field Functions 
    bool hasCancelInfo() const { return this->cancelInfo_ != nullptr;};
    void deleteCancelInfo() { this->cancelInfo_ = nullptr;};
    inline const Models::HotelOrderDetailInfoResponseBodyModuleCancelInfo & cancelInfo() const { DARABONBA_PTR_GET_CONST(cancelInfo_, Models::HotelOrderDetailInfoResponseBodyModuleCancelInfo) };
    inline Models::HotelOrderDetailInfoResponseBodyModuleCancelInfo cancelInfo() { DARABONBA_PTR_GET(cancelInfo_, Models::HotelOrderDetailInfoResponseBodyModuleCancelInfo) };
    inline HotelOrderDetailInfoResponseBodyModule& setCancelInfo(const Models::HotelOrderDetailInfoResponseBodyModuleCancelInfo & cancelInfo) { DARABONBA_PTR_SET_VALUE(cancelInfo_, cancelInfo) };
    inline HotelOrderDetailInfoResponseBodyModule& setCancelInfo(Models::HotelOrderDetailInfoResponseBodyModuleCancelInfo && cancelInfo) { DARABONBA_PTR_SET_RVALUE(cancelInfo_, cancelInfo) };


    // checkIn Field Functions 
    bool hasCheckIn() const { return this->checkIn_ != nullptr;};
    void deleteCheckIn() { this->checkIn_ = nullptr;};
    inline string checkIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


    // checkOut Field Functions 
    bool hasCheckOut() const { return this->checkOut_ != nullptr;};
    void deleteCheckOut() { this->checkOut_ = nullptr;};
    inline string checkOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


    // confirmOrderTime Field Functions 
    bool hasConfirmOrderTime() const { return this->confirmOrderTime_ != nullptr;};
    void deleteConfirmOrderTime() { this->confirmOrderTime_ = nullptr;};
    inline string confirmOrderTime() const { DARABONBA_PTR_GET_DEFAULT(confirmOrderTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setConfirmOrderTime(string confirmOrderTime) { DARABONBA_PTR_SET_VALUE(confirmOrderTime_, confirmOrderTime) };


    // contractName Field Functions 
    bool hasContractName() const { return this->contractName_ != nullptr;};
    void deleteContractName() { this->contractName_ = nullptr;};
    inline string contractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


    // contractTel Field Functions 
    bool hasContractTel() const { return this->contractTel_ != nullptr;};
    void deleteContractTel() { this->contractTel_ = nullptr;};
    inline string contractTel() const { DARABONBA_PTR_GET_DEFAULT(contractTel_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setContractTel(string contractTel) { DARABONBA_PTR_SET_VALUE(contractTel_, contractTel) };


    // createOrderTime Field Functions 
    bool hasCreateOrderTime() const { return this->createOrderTime_ != nullptr;};
    void deleteCreateOrderTime() { this->createOrderTime_ = nullptr;};
    inline string createOrderTime() const { DARABONBA_PTR_GET_DEFAULT(createOrderTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setCreateOrderTime(string createOrderTime) { DARABONBA_PTR_SET_VALUE(createOrderTime_, createOrderTime) };


    // earlyArrivalTime Field Functions 
    bool hasEarlyArrivalTime() const { return this->earlyArrivalTime_ != nullptr;};
    void deleteEarlyArrivalTime() { this->earlyArrivalTime_ = nullptr;};
    inline string earlyArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(earlyArrivalTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setEarlyArrivalTime(string earlyArrivalTime) { DARABONBA_PTR_SET_VALUE(earlyArrivalTime_, earlyArrivalTime) };


    // earlyDeparture Field Functions 
    bool hasEarlyDeparture() const { return this->earlyDeparture_ != nullptr;};
    void deleteEarlyDeparture() { this->earlyDeparture_ = nullptr;};
    inline bool earlyDeparture() const { DARABONBA_PTR_GET_DEFAULT(earlyDeparture_, false) };
    inline HotelOrderDetailInfoResponseBodyModule& setEarlyDeparture(bool earlyDeparture) { DARABONBA_PTR_SET_VALUE(earlyDeparture_, earlyDeparture) };


    // guestCount Field Functions 
    bool hasGuestCount() const { return this->guestCount_ != nullptr;};
    void deleteGuestCount() { this->guestCount_ = nullptr;};
    inline int32_t guestCount() const { DARABONBA_PTR_GET_DEFAULT(guestCount_, 0) };
    inline HotelOrderDetailInfoResponseBodyModule& setGuestCount(int32_t guestCount) { DARABONBA_PTR_SET_VALUE(guestCount_, guestCount) };


    // hotelDetailInfo Field Functions 
    bool hasHotelDetailInfo() const { return this->hotelDetailInfo_ != nullptr;};
    void deleteHotelDetailInfo() { this->hotelDetailInfo_ = nullptr;};
    inline const Models::HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo & hotelDetailInfo() const { DARABONBA_PTR_GET_CONST(hotelDetailInfo_, Models::HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo) };
    inline Models::HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo hotelDetailInfo() { DARABONBA_PTR_GET(hotelDetailInfo_, Models::HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo) };
    inline HotelOrderDetailInfoResponseBodyModule& setHotelDetailInfo(const Models::HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo & hotelDetailInfo) { DARABONBA_PTR_SET_VALUE(hotelDetailInfo_, hotelDetailInfo) };
    inline HotelOrderDetailInfoResponseBodyModule& setHotelDetailInfo(Models::HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo && hotelDetailInfo) { DARABONBA_PTR_SET_RVALUE(hotelDetailInfo_, hotelDetailInfo) };


    // hotelSaleOrderRoomInfos Field Functions 
    bool hasHotelSaleOrderRoomInfos() const { return this->hotelSaleOrderRoomInfos_ != nullptr;};
    void deleteHotelSaleOrderRoomInfos() { this->hotelSaleOrderRoomInfos_ = nullptr;};
    inline const vector<Models::HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos> & hotelSaleOrderRoomInfos() const { DARABONBA_PTR_GET_CONST(hotelSaleOrderRoomInfos_, vector<Models::HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos>) };
    inline vector<Models::HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos> hotelSaleOrderRoomInfos() { DARABONBA_PTR_GET(hotelSaleOrderRoomInfos_, vector<Models::HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos>) };
    inline HotelOrderDetailInfoResponseBodyModule& setHotelSaleOrderRoomInfos(const vector<Models::HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos> & hotelSaleOrderRoomInfos) { DARABONBA_PTR_SET_VALUE(hotelSaleOrderRoomInfos_, hotelSaleOrderRoomInfos) };
    inline HotelOrderDetailInfoResponseBodyModule& setHotelSaleOrderRoomInfos(vector<Models::HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos> && hotelSaleOrderRoomInfos) { DARABONBA_PTR_SET_RVALUE(hotelSaleOrderRoomInfos_, hotelSaleOrderRoomInfos) };


    // invoiceInfo Field Functions 
    bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
    void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
    inline const Models::HotelOrderDetailInfoResponseBodyModuleInvoiceInfo & invoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Models::HotelOrderDetailInfoResponseBodyModuleInvoiceInfo) };
    inline Models::HotelOrderDetailInfoResponseBodyModuleInvoiceInfo invoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Models::HotelOrderDetailInfoResponseBodyModuleInvoiceInfo) };
    inline HotelOrderDetailInfoResponseBodyModule& setInvoiceInfo(const Models::HotelOrderDetailInfoResponseBodyModuleInvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
    inline HotelOrderDetailInfoResponseBodyModule& setInvoiceInfo(Models::HotelOrderDetailInfoResponseBodyModuleInvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // lastArrivalTime Field Functions 
    bool hasLastArrivalTime() const { return this->lastArrivalTime_ != nullptr;};
    void deleteLastArrivalTime() { this->lastArrivalTime_ = nullptr;};
    inline string lastArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(lastArrivalTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setLastArrivalTime(string lastArrivalTime) { DARABONBA_PTR_SET_VALUE(lastArrivalTime_, lastArrivalTime) };


    // occupantInfoList Field Functions 
    bool hasOccupantInfoList() const { return this->occupantInfoList_ != nullptr;};
    void deleteOccupantInfoList() { this->occupantInfoList_ = nullptr;};
    inline const vector<Models::HotelOrderDetailInfoResponseBodyModuleOccupantInfoList> & occupantInfoList() const { DARABONBA_PTR_GET_CONST(occupantInfoList_, vector<Models::HotelOrderDetailInfoResponseBodyModuleOccupantInfoList>) };
    inline vector<Models::HotelOrderDetailInfoResponseBodyModuleOccupantInfoList> occupantInfoList() { DARABONBA_PTR_GET(occupantInfoList_, vector<Models::HotelOrderDetailInfoResponseBodyModuleOccupantInfoList>) };
    inline HotelOrderDetailInfoResponseBodyModule& setOccupantInfoList(const vector<Models::HotelOrderDetailInfoResponseBodyModuleOccupantInfoList> & occupantInfoList) { DARABONBA_PTR_SET_VALUE(occupantInfoList_, occupantInfoList) };
    inline HotelOrderDetailInfoResponseBodyModule& setOccupantInfoList(vector<Models::HotelOrderDetailInfoResponseBodyModuleOccupantInfoList> && occupantInfoList) { DARABONBA_PTR_SET_RVALUE(occupantInfoList_, occupantInfoList) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline HotelOrderDetailInfoResponseBodyModule& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // orderStatusDesc Field Functions 
    bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
    void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
    inline string orderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


    // outConfirmCode Field Functions 
    bool hasOutConfirmCode() const { return this->outConfirmCode_ != nullptr;};
    void deleteOutConfirmCode() { this->outConfirmCode_ = nullptr;};
    inline string outConfirmCode() const { DARABONBA_PTR_GET_DEFAULT(outConfirmCode_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setOutConfirmCode(string outConfirmCode) { DARABONBA_PTR_SET_VALUE(outConfirmCode_, outConfirmCode) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int32_t productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0) };
    inline HotelOrderDetailInfoResponseBodyModule& setProductType(int32_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // purchaseOrderId Field Functions 
    bool hasPurchaseOrderId() const { return this->purchaseOrderId_ != nullptr;};
    void deletePurchaseOrderId() { this->purchaseOrderId_ = nullptr;};
    inline string purchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(purchaseOrderId_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setPurchaseOrderId(string purchaseOrderId) { DARABONBA_PTR_SET_VALUE(purchaseOrderId_, purchaseOrderId) };


    // refundPrice Field Functions 
    bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
    void deleteRefundPrice() { this->refundPrice_ = nullptr;};
    inline int64_t refundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModule& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


    // refundReason Field Functions 
    bool hasRefundReason() const { return this->refundReason_ != nullptr;};
    void deleteRefundReason() { this->refundReason_ = nullptr;};
    inline string refundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


    // refundServiceFee Field Functions 
    bool hasRefundServiceFee() const { return this->refundServiceFee_ != nullptr;};
    void deleteRefundServiceFee() { this->refundServiceFee_ = nullptr;};
    inline int64_t refundServiceFee() const { DARABONBA_PTR_GET_DEFAULT(refundServiceFee_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModule& setRefundServiceFee(int64_t refundServiceFee) { DARABONBA_PTR_SET_VALUE(refundServiceFee_, refundServiceFee) };


    // roomNightPriceInfoList Field Functions 
    bool hasRoomNightPriceInfoList() const { return this->roomNightPriceInfoList_ != nullptr;};
    void deleteRoomNightPriceInfoList() { this->roomNightPriceInfoList_ = nullptr;};
    inline const vector<Models::HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList> & roomNightPriceInfoList() const { DARABONBA_PTR_GET_CONST(roomNightPriceInfoList_, vector<Models::HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList>) };
    inline vector<Models::HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList> roomNightPriceInfoList() { DARABONBA_PTR_GET(roomNightPriceInfoList_, vector<Models::HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList>) };
    inline HotelOrderDetailInfoResponseBodyModule& setRoomNightPriceInfoList(const vector<Models::HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList> & roomNightPriceInfoList) { DARABONBA_PTR_SET_VALUE(roomNightPriceInfoList_, roomNightPriceInfoList) };
    inline HotelOrderDetailInfoResponseBodyModule& setRoomNightPriceInfoList(vector<Models::HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList> && roomNightPriceInfoList) { DARABONBA_PTR_SET_RVALUE(roomNightPriceInfoList_, roomNightPriceInfoList) };


    // roomNumber Field Functions 
    bool hasRoomNumber() const { return this->roomNumber_ != nullptr;};
    void deleteRoomNumber() { this->roomNumber_ = nullptr;};
    inline int32_t roomNumber() const { DARABONBA_PTR_GET_DEFAULT(roomNumber_, 0) };
    inline HotelOrderDetailInfoResponseBodyModule& setRoomNumber(int32_t roomNumber) { DARABONBA_PTR_SET_VALUE(roomNumber_, roomNumber) };


    // roomTypeName Field Functions 
    bool hasRoomTypeName() const { return this->roomTypeName_ != nullptr;};
    void deleteRoomTypeName() { this->roomTypeName_ = nullptr;};
    inline string roomTypeName() const { DARABONBA_PTR_GET_DEFAULT(roomTypeName_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setRoomTypeName(string roomTypeName) { DARABONBA_PTR_SET_VALUE(roomTypeName_, roomTypeName) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline string sellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setSellerId(string sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // sellerName Field Functions 
    bool hasSellerName() const { return this->sellerName_ != nullptr;};
    void deleteSellerName() { this->sellerName_ = nullptr;};
    inline string sellerName() const { DARABONBA_PTR_GET_DEFAULT(sellerName_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setSellerName(string sellerName) { DARABONBA_PTR_SET_VALUE(sellerName_, sellerName) };


    // serviceFee Field Functions 
    bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
    void deleteServiceFee() { this->serviceFee_ = nullptr;};
    inline int64_t serviceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModule& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


    // settleType Field Functions 
    bool hasSettleType() const { return this->settleType_ != nullptr;};
    void deleteSettleType() { this->settleType_ = nullptr;};
    inline string settleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setSettleType(string settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


    // supplierOrderId Field Functions 
    bool hasSupplierOrderId() const { return this->supplierOrderId_ != nullptr;};
    void deleteSupplierOrderId() { this->supplierOrderId_ = nullptr;};
    inline string supplierOrderId() const { DARABONBA_PTR_GET_DEFAULT(supplierOrderId_, "") };
    inline HotelOrderDetailInfoResponseBodyModule& setSupplierOrderId(string supplierOrderId) { DARABONBA_PTR_SET_VALUE(supplierOrderId_, supplierOrderId) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline HotelOrderDetailInfoResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<string> actualCheckInTime_ = nullptr;
    std::shared_ptr<string> actualCheckOutTime_ = nullptr;
    std::shared_ptr<Models::HotelOrderDetailInfoResponseBodyModuleBtripHotelCancelPolicyDTO> btripHotelCancelPolicyDTO_ = nullptr;
    std::shared_ptr<string> btripOrderId_ = nullptr;
    std::shared_ptr<int64_t> cancelFine_ = nullptr;
    std::shared_ptr<Models::HotelOrderDetailInfoResponseBodyModuleCancelInfo> cancelInfo_ = nullptr;
    std::shared_ptr<string> checkIn_ = nullptr;
    std::shared_ptr<string> checkOut_ = nullptr;
    std::shared_ptr<string> confirmOrderTime_ = nullptr;
    std::shared_ptr<string> contractName_ = nullptr;
    std::shared_ptr<string> contractTel_ = nullptr;
    std::shared_ptr<string> createOrderTime_ = nullptr;
    std::shared_ptr<string> earlyArrivalTime_ = nullptr;
    std::shared_ptr<bool> earlyDeparture_ = nullptr;
    std::shared_ptr<int32_t> guestCount_ = nullptr;
    std::shared_ptr<Models::HotelOrderDetailInfoResponseBodyModuleHotelDetailInfo> hotelDetailInfo_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderDetailInfoResponseBodyModuleHotelSaleOrderRoomInfos>> hotelSaleOrderRoomInfos_ = nullptr;
    std::shared_ptr<Models::HotelOrderDetailInfoResponseBodyModuleInvoiceInfo> invoiceInfo_ = nullptr;
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> lastArrivalTime_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderDetailInfoResponseBodyModuleOccupantInfoList>> occupantInfoList_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<string> orderStatusDesc_ = nullptr;
    std::shared_ptr<string> outConfirmCode_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<int32_t> productType_ = nullptr;
    std::shared_ptr<string> purchaseOrderId_ = nullptr;
    std::shared_ptr<int64_t> refundPrice_ = nullptr;
    std::shared_ptr<string> refundReason_ = nullptr;
    std::shared_ptr<int64_t> refundServiceFee_ = nullptr;
    std::shared_ptr<vector<Models::HotelOrderDetailInfoResponseBodyModuleRoomNightPriceInfoList>> roomNightPriceInfoList_ = nullptr;
    std::shared_ptr<int32_t> roomNumber_ = nullptr;
    std::shared_ptr<string> roomTypeName_ = nullptr;
    std::shared_ptr<string> sellerId_ = nullptr;
    std::shared_ptr<string> sellerName_ = nullptr;
    std::shared_ptr<int64_t> serviceFee_ = nullptr;
    std::shared_ptr<string> settleType_ = nullptr;
    std::shared_ptr<string> supplierOrderId_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
