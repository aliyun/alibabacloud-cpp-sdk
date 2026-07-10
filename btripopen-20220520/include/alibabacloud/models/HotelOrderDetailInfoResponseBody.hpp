// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERDETAILINFORESPONSEBODY_HPP_
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
  class HotelOrderDetailInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderDetailInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelOrderDetailInfoResponseBody() = default ;
    HotelOrderDetailInfoResponseBody(const HotelOrderDetailInfoResponseBody &) = default ;
    HotelOrderDetailInfoResponseBody(HotelOrderDetailInfoResponseBody &&) = default ;
    HotelOrderDetailInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderDetailInfoResponseBody() = default ;
    HotelOrderDetailInfoResponseBody& operator=(const HotelOrderDetailInfoResponseBody &) = default ;
    HotelOrderDetailInfoResponseBody& operator=(HotelOrderDetailInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
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
        DARABONBA_PTR_TO_JSON(hotel_on_site_price_detail, hotelOnSitePriceDetail_);
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
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
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
        DARABONBA_PTR_FROM_JSON(hotel_on_site_price_detail, hotelOnSitePriceDetail_);
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
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RoomNightPriceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomNightPriceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(board, board_);
          DARABONBA_PTR_TO_JSON(board_num, boardNum_);
          DARABONBA_PTR_TO_JSON(check_in, checkIn_);
          DARABONBA_PTR_TO_JSON(rate_plan_id, ratePlanId_);
          DARABONBA_PTR_TO_JSON(rate_plan_name, ratePlanName_);
          DARABONBA_PTR_TO_JSON(room_id, roomId_);
          DARABONBA_PTR_TO_JSON(room_name, roomName_);
          DARABONBA_PTR_TO_JSON(room_price, roomPrice_);
        };
        friend void from_json(const Darabonba::Json& j, RoomNightPriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(board, board_);
          DARABONBA_PTR_FROM_JSON(board_num, boardNum_);
          DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
          DARABONBA_PTR_FROM_JSON(rate_plan_id, ratePlanId_);
          DARABONBA_PTR_FROM_JSON(rate_plan_name, ratePlanName_);
          DARABONBA_PTR_FROM_JSON(room_id, roomId_);
          DARABONBA_PTR_FROM_JSON(room_name, roomName_);
          DARABONBA_PTR_FROM_JSON(room_price, roomPrice_);
        };
        RoomNightPriceInfoList() = default ;
        RoomNightPriceInfoList(const RoomNightPriceInfoList &) = default ;
        RoomNightPriceInfoList(RoomNightPriceInfoList &&) = default ;
        RoomNightPriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomNightPriceInfoList() = default ;
        RoomNightPriceInfoList& operator=(const RoomNightPriceInfoList &) = default ;
        RoomNightPriceInfoList& operator=(RoomNightPriceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->board_ == nullptr
        && this->boardNum_ == nullptr && this->checkIn_ == nullptr && this->ratePlanId_ == nullptr && this->ratePlanName_ == nullptr && this->roomId_ == nullptr
        && this->roomName_ == nullptr && this->roomPrice_ == nullptr; };
        // board Field Functions 
        bool hasBoard() const { return this->board_ != nullptr;};
        void deleteBoard() { this->board_ = nullptr;};
        inline string getBoard() const { DARABONBA_PTR_GET_DEFAULT(board_, "") };
        inline RoomNightPriceInfoList& setBoard(string board) { DARABONBA_PTR_SET_VALUE(board_, board) };


        // boardNum Field Functions 
        bool hasBoardNum() const { return this->boardNum_ != nullptr;};
        void deleteBoardNum() { this->boardNum_ = nullptr;};
        inline int32_t getBoardNum() const { DARABONBA_PTR_GET_DEFAULT(boardNum_, 0) };
        inline RoomNightPriceInfoList& setBoardNum(int32_t boardNum) { DARABONBA_PTR_SET_VALUE(boardNum_, boardNum) };


        // checkIn Field Functions 
        bool hasCheckIn() const { return this->checkIn_ != nullptr;};
        void deleteCheckIn() { this->checkIn_ = nullptr;};
        inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
        inline RoomNightPriceInfoList& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


        // ratePlanId Field Functions 
        bool hasRatePlanId() const { return this->ratePlanId_ != nullptr;};
        void deleteRatePlanId() { this->ratePlanId_ = nullptr;};
        inline string getRatePlanId() const { DARABONBA_PTR_GET_DEFAULT(ratePlanId_, "") };
        inline RoomNightPriceInfoList& setRatePlanId(string ratePlanId) { DARABONBA_PTR_SET_VALUE(ratePlanId_, ratePlanId) };


        // ratePlanName Field Functions 
        bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
        void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
        inline string getRatePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
        inline RoomNightPriceInfoList& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


        // roomId Field Functions 
        bool hasRoomId() const { return this->roomId_ != nullptr;};
        void deleteRoomId() { this->roomId_ = nullptr;};
        inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
        inline RoomNightPriceInfoList& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


        // roomName Field Functions 
        bool hasRoomName() const { return this->roomName_ != nullptr;};
        void deleteRoomName() { this->roomName_ = nullptr;};
        inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
        inline RoomNightPriceInfoList& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


        // roomPrice Field Functions 
        bool hasRoomPrice() const { return this->roomPrice_ != nullptr;};
        void deleteRoomPrice() { this->roomPrice_ = nullptr;};
        inline int64_t getRoomPrice() const { DARABONBA_PTR_GET_DEFAULT(roomPrice_, 0L) };
        inline RoomNightPriceInfoList& setRoomPrice(int64_t roomPrice) { DARABONBA_PTR_SET_VALUE(roomPrice_, roomPrice) };


      protected:
        shared_ptr<string> board_ {};
        shared_ptr<int32_t> boardNum_ {};
        shared_ptr<string> checkIn_ {};
        shared_ptr<string> ratePlanId_ {};
        shared_ptr<string> ratePlanName_ {};
        shared_ptr<string> roomId_ {};
        shared_ptr<string> roomName_ {};
        shared_ptr<int64_t> roomPrice_ {};
      };

      class OccupantInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OccupantInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(card_no, cardNo_);
          DARABONBA_PTR_TO_JSON(card_type, cardType_);
          DARABONBA_PTR_TO_JSON(cost_center_info_list, costCenterInfoList_);
          DARABONBA_PTR_TO_JSON(customer_type, customerType_);
          DARABONBA_PTR_TO_JSON(department_id, departmentId_);
          DARABONBA_PTR_TO_JSON(department_name, departmentName_);
          DARABONBA_PTR_TO_JSON(email, email_);
          DARABONBA_PTR_TO_JSON(employee_type, employeeType_);
          DARABONBA_PTR_TO_JSON(first_name, firstName_);
          DARABONBA_PTR_TO_JSON(is_booker, isBooker_);
          DARABONBA_PTR_TO_JSON(last_name, lastName_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(phone, phone_);
          DARABONBA_PTR_TO_JSON(room_no, roomNo_);
          DARABONBA_PTR_TO_JSON(selected, selected_);
          DARABONBA_PTR_TO_JSON(staff_no, staffNo_);
          DARABONBA_PTR_TO_JSON(user_type, userType_);
        };
        friend void from_json(const Darabonba::Json& j, OccupantInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(card_no, cardNo_);
          DARABONBA_PTR_FROM_JSON(card_type, cardType_);
          DARABONBA_PTR_FROM_JSON(cost_center_info_list, costCenterInfoList_);
          DARABONBA_PTR_FROM_JSON(customer_type, customerType_);
          DARABONBA_PTR_FROM_JSON(department_id, departmentId_);
          DARABONBA_PTR_FROM_JSON(department_name, departmentName_);
          DARABONBA_PTR_FROM_JSON(email, email_);
          DARABONBA_PTR_FROM_JSON(employee_type, employeeType_);
          DARABONBA_PTR_FROM_JSON(first_name, firstName_);
          DARABONBA_PTR_FROM_JSON(is_booker, isBooker_);
          DARABONBA_PTR_FROM_JSON(last_name, lastName_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(phone, phone_);
          DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
          DARABONBA_PTR_FROM_JSON(selected, selected_);
          DARABONBA_PTR_FROM_JSON(staff_no, staffNo_);
          DARABONBA_PTR_FROM_JSON(user_type, userType_);
        };
        OccupantInfoList() = default ;
        OccupantInfoList(const OccupantInfoList &) = default ;
        OccupantInfoList(OccupantInfoList &&) = default ;
        OccupantInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OccupantInfoList() = default ;
        OccupantInfoList& operator=(const OccupantInfoList &) = default ;
        OccupantInfoList& operator=(OccupantInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CostCenterInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CostCenterInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
            DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
            DARABONBA_PTR_TO_JSON(cost_center_no, costCenterNo_);
            DARABONBA_PTR_TO_JSON(cost_center_prices, costCenterPrices_);
            DARABONBA_PTR_TO_JSON(cost_center_ratios, costCenterRatios_);
            DARABONBA_PTR_TO_JSON(cost_center_subject_code, costCenterSubjectCode_);
            DARABONBA_PTR_TO_JSON(cost_center_subject_name, costCenterSubjectName_);
            DARABONBA_PTR_TO_JSON(settle_subject_id, settleSubjectId_);
            DARABONBA_PTR_TO_JSON(settle_subject_name, settleSubjectName_);
            DARABONBA_PTR_TO_JSON(settle_subject_no, settleSubjectNo_);
          };
          friend void from_json(const Darabonba::Json& j, CostCenterInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
            DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
            DARABONBA_PTR_FROM_JSON(cost_center_no, costCenterNo_);
            DARABONBA_PTR_FROM_JSON(cost_center_prices, costCenterPrices_);
            DARABONBA_PTR_FROM_JSON(cost_center_ratios, costCenterRatios_);
            DARABONBA_PTR_FROM_JSON(cost_center_subject_code, costCenterSubjectCode_);
            DARABONBA_PTR_FROM_JSON(cost_center_subject_name, costCenterSubjectName_);
            DARABONBA_PTR_FROM_JSON(settle_subject_id, settleSubjectId_);
            DARABONBA_PTR_FROM_JSON(settle_subject_name, settleSubjectName_);
            DARABONBA_PTR_FROM_JSON(settle_subject_no, settleSubjectNo_);
          };
          CostCenterInfoList() = default ;
          CostCenterInfoList(const CostCenterInfoList &) = default ;
          CostCenterInfoList(CostCenterInfoList &&) = default ;
          CostCenterInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CostCenterInfoList() = default ;
          CostCenterInfoList& operator=(const CostCenterInfoList &) = default ;
          CostCenterInfoList& operator=(CostCenterInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->costCenterNo_ == nullptr && this->costCenterPrices_ == nullptr && this->costCenterRatios_ == nullptr && this->costCenterSubjectCode_ == nullptr
        && this->costCenterSubjectName_ == nullptr && this->settleSubjectId_ == nullptr && this->settleSubjectName_ == nullptr && this->settleSubjectNo_ == nullptr; };
          // costCenterId Field Functions 
          bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
          void deleteCostCenterId() { this->costCenterId_ = nullptr;};
          inline string getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, "") };
          inline CostCenterInfoList& setCostCenterId(string costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


          // costCenterName Field Functions 
          bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
          void deleteCostCenterName() { this->costCenterName_ = nullptr;};
          inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
          inline CostCenterInfoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


          // costCenterNo Field Functions 
          bool hasCostCenterNo() const { return this->costCenterNo_ != nullptr;};
          void deleteCostCenterNo() { this->costCenterNo_ = nullptr;};
          inline string getCostCenterNo() const { DARABONBA_PTR_GET_DEFAULT(costCenterNo_, "") };
          inline CostCenterInfoList& setCostCenterNo(string costCenterNo) { DARABONBA_PTR_SET_VALUE(costCenterNo_, costCenterNo) };


          // costCenterPrices Field Functions 
          bool hasCostCenterPrices() const { return this->costCenterPrices_ != nullptr;};
          void deleteCostCenterPrices() { this->costCenterPrices_ = nullptr;};
          inline int64_t getCostCenterPrices() const { DARABONBA_PTR_GET_DEFAULT(costCenterPrices_, 0L) };
          inline CostCenterInfoList& setCostCenterPrices(int64_t costCenterPrices) { DARABONBA_PTR_SET_VALUE(costCenterPrices_, costCenterPrices) };


          // costCenterRatios Field Functions 
          bool hasCostCenterRatios() const { return this->costCenterRatios_ != nullptr;};
          void deleteCostCenterRatios() { this->costCenterRatios_ = nullptr;};
          inline int64_t getCostCenterRatios() const { DARABONBA_PTR_GET_DEFAULT(costCenterRatios_, 0L) };
          inline CostCenterInfoList& setCostCenterRatios(int64_t costCenterRatios) { DARABONBA_PTR_SET_VALUE(costCenterRatios_, costCenterRatios) };


          // costCenterSubjectCode Field Functions 
          bool hasCostCenterSubjectCode() const { return this->costCenterSubjectCode_ != nullptr;};
          void deleteCostCenterSubjectCode() { this->costCenterSubjectCode_ = nullptr;};
          inline string getCostCenterSubjectCode() const { DARABONBA_PTR_GET_DEFAULT(costCenterSubjectCode_, "") };
          inline CostCenterInfoList& setCostCenterSubjectCode(string costCenterSubjectCode) { DARABONBA_PTR_SET_VALUE(costCenterSubjectCode_, costCenterSubjectCode) };


          // costCenterSubjectName Field Functions 
          bool hasCostCenterSubjectName() const { return this->costCenterSubjectName_ != nullptr;};
          void deleteCostCenterSubjectName() { this->costCenterSubjectName_ = nullptr;};
          inline string getCostCenterSubjectName() const { DARABONBA_PTR_GET_DEFAULT(costCenterSubjectName_, "") };
          inline CostCenterInfoList& setCostCenterSubjectName(string costCenterSubjectName) { DARABONBA_PTR_SET_VALUE(costCenterSubjectName_, costCenterSubjectName) };


          // settleSubjectId Field Functions 
          bool hasSettleSubjectId() const { return this->settleSubjectId_ != nullptr;};
          void deleteSettleSubjectId() { this->settleSubjectId_ = nullptr;};
          inline string getSettleSubjectId() const { DARABONBA_PTR_GET_DEFAULT(settleSubjectId_, "") };
          inline CostCenterInfoList& setSettleSubjectId(string settleSubjectId) { DARABONBA_PTR_SET_VALUE(settleSubjectId_, settleSubjectId) };


          // settleSubjectName Field Functions 
          bool hasSettleSubjectName() const { return this->settleSubjectName_ != nullptr;};
          void deleteSettleSubjectName() { this->settleSubjectName_ = nullptr;};
          inline string getSettleSubjectName() const { DARABONBA_PTR_GET_DEFAULT(settleSubjectName_, "") };
          inline CostCenterInfoList& setSettleSubjectName(string settleSubjectName) { DARABONBA_PTR_SET_VALUE(settleSubjectName_, settleSubjectName) };


          // settleSubjectNo Field Functions 
          bool hasSettleSubjectNo() const { return this->settleSubjectNo_ != nullptr;};
          void deleteSettleSubjectNo() { this->settleSubjectNo_ = nullptr;};
          inline string getSettleSubjectNo() const { DARABONBA_PTR_GET_DEFAULT(settleSubjectNo_, "") };
          inline CostCenterInfoList& setSettleSubjectNo(string settleSubjectNo) { DARABONBA_PTR_SET_VALUE(settleSubjectNo_, settleSubjectNo) };


        protected:
          shared_ptr<string> costCenterId_ {};
          shared_ptr<string> costCenterName_ {};
          shared_ptr<string> costCenterNo_ {};
          shared_ptr<int64_t> costCenterPrices_ {};
          shared_ptr<int64_t> costCenterRatios_ {};
          shared_ptr<string> costCenterSubjectCode_ {};
          shared_ptr<string> costCenterSubjectName_ {};
          shared_ptr<string> settleSubjectId_ {};
          shared_ptr<string> settleSubjectName_ {};
          shared_ptr<string> settleSubjectNo_ {};
        };

        virtual bool empty() const override { return this->cardNo_ == nullptr
        && this->cardType_ == nullptr && this->costCenterInfoList_ == nullptr && this->customerType_ == nullptr && this->departmentId_ == nullptr && this->departmentName_ == nullptr
        && this->email_ == nullptr && this->employeeType_ == nullptr && this->firstName_ == nullptr && this->isBooker_ == nullptr && this->lastName_ == nullptr
        && this->name_ == nullptr && this->phone_ == nullptr && this->roomNo_ == nullptr && this->selected_ == nullptr && this->staffNo_ == nullptr
        && this->userType_ == nullptr; };
        // cardNo Field Functions 
        bool hasCardNo() const { return this->cardNo_ != nullptr;};
        void deleteCardNo() { this->cardNo_ = nullptr;};
        inline string getCardNo() const { DARABONBA_PTR_GET_DEFAULT(cardNo_, "") };
        inline OccupantInfoList& setCardNo(string cardNo) { DARABONBA_PTR_SET_VALUE(cardNo_, cardNo) };


        // cardType Field Functions 
        bool hasCardType() const { return this->cardType_ != nullptr;};
        void deleteCardType() { this->cardType_ = nullptr;};
        inline int32_t getCardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, 0) };
        inline OccupantInfoList& setCardType(int32_t cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


        // costCenterInfoList Field Functions 
        bool hasCostCenterInfoList() const { return this->costCenterInfoList_ != nullptr;};
        void deleteCostCenterInfoList() { this->costCenterInfoList_ = nullptr;};
        inline const vector<OccupantInfoList::CostCenterInfoList> & getCostCenterInfoList() const { DARABONBA_PTR_GET_CONST(costCenterInfoList_, vector<OccupantInfoList::CostCenterInfoList>) };
        inline vector<OccupantInfoList::CostCenterInfoList> getCostCenterInfoList() { DARABONBA_PTR_GET(costCenterInfoList_, vector<OccupantInfoList::CostCenterInfoList>) };
        inline OccupantInfoList& setCostCenterInfoList(const vector<OccupantInfoList::CostCenterInfoList> & costCenterInfoList) { DARABONBA_PTR_SET_VALUE(costCenterInfoList_, costCenterInfoList) };
        inline OccupantInfoList& setCostCenterInfoList(vector<OccupantInfoList::CostCenterInfoList> && costCenterInfoList) { DARABONBA_PTR_SET_RVALUE(costCenterInfoList_, costCenterInfoList) };


        // customerType Field Functions 
        bool hasCustomerType() const { return this->customerType_ != nullptr;};
        void deleteCustomerType() { this->customerType_ = nullptr;};
        inline int32_t getCustomerType() const { DARABONBA_PTR_GET_DEFAULT(customerType_, 0) };
        inline OccupantInfoList& setCustomerType(int32_t customerType) { DARABONBA_PTR_SET_VALUE(customerType_, customerType) };


        // departmentId Field Functions 
        bool hasDepartmentId() const { return this->departmentId_ != nullptr;};
        void deleteDepartmentId() { this->departmentId_ = nullptr;};
        inline string getDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(departmentId_, "") };
        inline OccupantInfoList& setDepartmentId(string departmentId) { DARABONBA_PTR_SET_VALUE(departmentId_, departmentId) };


        // departmentName Field Functions 
        bool hasDepartmentName() const { return this->departmentName_ != nullptr;};
        void deleteDepartmentName() { this->departmentName_ = nullptr;};
        inline string getDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(departmentName_, "") };
        inline OccupantInfoList& setDepartmentName(string departmentName) { DARABONBA_PTR_SET_VALUE(departmentName_, departmentName) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline OccupantInfoList& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // employeeType Field Functions 
        bool hasEmployeeType() const { return this->employeeType_ != nullptr;};
        void deleteEmployeeType() { this->employeeType_ = nullptr;};
        inline int32_t getEmployeeType() const { DARABONBA_PTR_GET_DEFAULT(employeeType_, 0) };
        inline OccupantInfoList& setEmployeeType(int32_t employeeType) { DARABONBA_PTR_SET_VALUE(employeeType_, employeeType) };


        // firstName Field Functions 
        bool hasFirstName() const { return this->firstName_ != nullptr;};
        void deleteFirstName() { this->firstName_ = nullptr;};
        inline string getFirstName() const { DARABONBA_PTR_GET_DEFAULT(firstName_, "") };
        inline OccupantInfoList& setFirstName(string firstName) { DARABONBA_PTR_SET_VALUE(firstName_, firstName) };


        // isBooker Field Functions 
        bool hasIsBooker() const { return this->isBooker_ != nullptr;};
        void deleteIsBooker() { this->isBooker_ = nullptr;};
        inline bool getIsBooker() const { DARABONBA_PTR_GET_DEFAULT(isBooker_, false) };
        inline OccupantInfoList& setIsBooker(bool isBooker) { DARABONBA_PTR_SET_VALUE(isBooker_, isBooker) };


        // lastName Field Functions 
        bool hasLastName() const { return this->lastName_ != nullptr;};
        void deleteLastName() { this->lastName_ = nullptr;};
        inline string getLastName() const { DARABONBA_PTR_GET_DEFAULT(lastName_, "") };
        inline OccupantInfoList& setLastName(string lastName) { DARABONBA_PTR_SET_VALUE(lastName_, lastName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline OccupantInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // phone Field Functions 
        bool hasPhone() const { return this->phone_ != nullptr;};
        void deletePhone() { this->phone_ = nullptr;};
        inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
        inline OccupantInfoList& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


        // roomNo Field Functions 
        bool hasRoomNo() const { return this->roomNo_ != nullptr;};
        void deleteRoomNo() { this->roomNo_ = nullptr;};
        inline int32_t getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
        inline OccupantInfoList& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


        // selected Field Functions 
        bool hasSelected() const { return this->selected_ != nullptr;};
        void deleteSelected() { this->selected_ = nullptr;};
        inline bool getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, false) };
        inline OccupantInfoList& setSelected(bool selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


        // staffNo Field Functions 
        bool hasStaffNo() const { return this->staffNo_ != nullptr;};
        void deleteStaffNo() { this->staffNo_ = nullptr;};
        inline string getStaffNo() const { DARABONBA_PTR_GET_DEFAULT(staffNo_, "") };
        inline OccupantInfoList& setStaffNo(string staffNo) { DARABONBA_PTR_SET_VALUE(staffNo_, staffNo) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
        inline OccupantInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        shared_ptr<string> cardNo_ {};
        shared_ptr<int32_t> cardType_ {};
        shared_ptr<vector<OccupantInfoList::CostCenterInfoList>> costCenterInfoList_ {};
        shared_ptr<int32_t> customerType_ {};
        shared_ptr<string> departmentId_ {};
        shared_ptr<string> departmentName_ {};
        shared_ptr<string> email_ {};
        shared_ptr<int32_t> employeeType_ {};
        shared_ptr<string> firstName_ {};
        shared_ptr<bool> isBooker_ {};
        shared_ptr<string> lastName_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> phone_ {};
        shared_ptr<int32_t> roomNo_ {};
        shared_ptr<bool> selected_ {};
        shared_ptr<string> staffNo_ {};
        shared_ptr<int32_t> userType_ {};
      };

      class InvoiceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvoiceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(billing_money, billingMoney_);
          DARABONBA_PTR_TO_JSON(buyer_add, buyerAdd_);
          DARABONBA_PTR_TO_JSON(buyer_bank_acc, buyerBankAcc_);
          DARABONBA_PTR_TO_JSON(buyer_bank_add, buyerBankAdd_);
          DARABONBA_PTR_TO_JSON(buyer_phone, buyerPhone_);
          DARABONBA_PTR_TO_JSON(buyer_tax_num, buyerTaxNum_);
          DARABONBA_PTR_TO_JSON(delivery_address, deliveryAddress_);
          DARABONBA_PTR_TO_JSON(delivery_area, deliveryArea_);
          DARABONBA_PTR_TO_JSON(delivery_city, deliveryCity_);
          DARABONBA_PTR_TO_JSON(delivery_province, deliveryProvince_);
          DARABONBA_PTR_TO_JSON(delivery_street, deliveryStreet_);
          DARABONBA_PTR_TO_JSON(email, email_);
          DARABONBA_PTR_TO_JSON(invoice_material, invoiceMaterial_);
          DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_TO_JSON(postage, postage_);
          DARABONBA_PTR_TO_JSON(receiver_name, receiverName_);
          DARABONBA_PTR_TO_JSON(receiver_phone, receiverPhone_);
          DARABONBA_PTR_TO_JSON(remark, remark_);
        };
        friend void from_json(const Darabonba::Json& j, InvoiceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(billing_money, billingMoney_);
          DARABONBA_PTR_FROM_JSON(buyer_add, buyerAdd_);
          DARABONBA_PTR_FROM_JSON(buyer_bank_acc, buyerBankAcc_);
          DARABONBA_PTR_FROM_JSON(buyer_bank_add, buyerBankAdd_);
          DARABONBA_PTR_FROM_JSON(buyer_phone, buyerPhone_);
          DARABONBA_PTR_FROM_JSON(buyer_tax_num, buyerTaxNum_);
          DARABONBA_PTR_FROM_JSON(delivery_address, deliveryAddress_);
          DARABONBA_PTR_FROM_JSON(delivery_area, deliveryArea_);
          DARABONBA_PTR_FROM_JSON(delivery_city, deliveryCity_);
          DARABONBA_PTR_FROM_JSON(delivery_province, deliveryProvince_);
          DARABONBA_PTR_FROM_JSON(delivery_street, deliveryStreet_);
          DARABONBA_PTR_FROM_JSON(email, email_);
          DARABONBA_PTR_FROM_JSON(invoice_material, invoiceMaterial_);
          DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
          DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_FROM_JSON(postage, postage_);
          DARABONBA_PTR_FROM_JSON(receiver_name, receiverName_);
          DARABONBA_PTR_FROM_JSON(receiver_phone, receiverPhone_);
          DARABONBA_PTR_FROM_JSON(remark, remark_);
        };
        InvoiceInfo() = default ;
        InvoiceInfo(const InvoiceInfo &) = default ;
        InvoiceInfo(InvoiceInfo &&) = default ;
        InvoiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InvoiceInfo() = default ;
        InvoiceInfo& operator=(const InvoiceInfo &) = default ;
        InvoiceInfo& operator=(InvoiceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->billingMoney_ == nullptr
        && this->buyerAdd_ == nullptr && this->buyerBankAcc_ == nullptr && this->buyerBankAdd_ == nullptr && this->buyerPhone_ == nullptr && this->buyerTaxNum_ == nullptr
        && this->deliveryAddress_ == nullptr && this->deliveryArea_ == nullptr && this->deliveryCity_ == nullptr && this->deliveryProvince_ == nullptr && this->deliveryStreet_ == nullptr
        && this->email_ == nullptr && this->invoiceMaterial_ == nullptr && this->invoiceTitle_ == nullptr && this->invoiceType_ == nullptr && this->postage_ == nullptr
        && this->receiverName_ == nullptr && this->receiverPhone_ == nullptr && this->remark_ == nullptr; };
        // billingMoney Field Functions 
        bool hasBillingMoney() const { return this->billingMoney_ != nullptr;};
        void deleteBillingMoney() { this->billingMoney_ = nullptr;};
        inline int64_t getBillingMoney() const { DARABONBA_PTR_GET_DEFAULT(billingMoney_, 0L) };
        inline InvoiceInfo& setBillingMoney(int64_t billingMoney) { DARABONBA_PTR_SET_VALUE(billingMoney_, billingMoney) };


        // buyerAdd Field Functions 
        bool hasBuyerAdd() const { return this->buyerAdd_ != nullptr;};
        void deleteBuyerAdd() { this->buyerAdd_ = nullptr;};
        inline string getBuyerAdd() const { DARABONBA_PTR_GET_DEFAULT(buyerAdd_, "") };
        inline InvoiceInfo& setBuyerAdd(string buyerAdd) { DARABONBA_PTR_SET_VALUE(buyerAdd_, buyerAdd) };


        // buyerBankAcc Field Functions 
        bool hasBuyerBankAcc() const { return this->buyerBankAcc_ != nullptr;};
        void deleteBuyerBankAcc() { this->buyerBankAcc_ = nullptr;};
        inline string getBuyerBankAcc() const { DARABONBA_PTR_GET_DEFAULT(buyerBankAcc_, "") };
        inline InvoiceInfo& setBuyerBankAcc(string buyerBankAcc) { DARABONBA_PTR_SET_VALUE(buyerBankAcc_, buyerBankAcc) };


        // buyerBankAdd Field Functions 
        bool hasBuyerBankAdd() const { return this->buyerBankAdd_ != nullptr;};
        void deleteBuyerBankAdd() { this->buyerBankAdd_ = nullptr;};
        inline string getBuyerBankAdd() const { DARABONBA_PTR_GET_DEFAULT(buyerBankAdd_, "") };
        inline InvoiceInfo& setBuyerBankAdd(string buyerBankAdd) { DARABONBA_PTR_SET_VALUE(buyerBankAdd_, buyerBankAdd) };


        // buyerPhone Field Functions 
        bool hasBuyerPhone() const { return this->buyerPhone_ != nullptr;};
        void deleteBuyerPhone() { this->buyerPhone_ = nullptr;};
        inline string getBuyerPhone() const { DARABONBA_PTR_GET_DEFAULT(buyerPhone_, "") };
        inline InvoiceInfo& setBuyerPhone(string buyerPhone) { DARABONBA_PTR_SET_VALUE(buyerPhone_, buyerPhone) };


        // buyerTaxNum Field Functions 
        bool hasBuyerTaxNum() const { return this->buyerTaxNum_ != nullptr;};
        void deleteBuyerTaxNum() { this->buyerTaxNum_ = nullptr;};
        inline string getBuyerTaxNum() const { DARABONBA_PTR_GET_DEFAULT(buyerTaxNum_, "") };
        inline InvoiceInfo& setBuyerTaxNum(string buyerTaxNum) { DARABONBA_PTR_SET_VALUE(buyerTaxNum_, buyerTaxNum) };


        // deliveryAddress Field Functions 
        bool hasDeliveryAddress() const { return this->deliveryAddress_ != nullptr;};
        void deleteDeliveryAddress() { this->deliveryAddress_ = nullptr;};
        inline string getDeliveryAddress() const { DARABONBA_PTR_GET_DEFAULT(deliveryAddress_, "") };
        inline InvoiceInfo& setDeliveryAddress(string deliveryAddress) { DARABONBA_PTR_SET_VALUE(deliveryAddress_, deliveryAddress) };


        // deliveryArea Field Functions 
        bool hasDeliveryArea() const { return this->deliveryArea_ != nullptr;};
        void deleteDeliveryArea() { this->deliveryArea_ = nullptr;};
        inline string getDeliveryArea() const { DARABONBA_PTR_GET_DEFAULT(deliveryArea_, "") };
        inline InvoiceInfo& setDeliveryArea(string deliveryArea) { DARABONBA_PTR_SET_VALUE(deliveryArea_, deliveryArea) };


        // deliveryCity Field Functions 
        bool hasDeliveryCity() const { return this->deliveryCity_ != nullptr;};
        void deleteDeliveryCity() { this->deliveryCity_ = nullptr;};
        inline string getDeliveryCity() const { DARABONBA_PTR_GET_DEFAULT(deliveryCity_, "") };
        inline InvoiceInfo& setDeliveryCity(string deliveryCity) { DARABONBA_PTR_SET_VALUE(deliveryCity_, deliveryCity) };


        // deliveryProvince Field Functions 
        bool hasDeliveryProvince() const { return this->deliveryProvince_ != nullptr;};
        void deleteDeliveryProvince() { this->deliveryProvince_ = nullptr;};
        inline string getDeliveryProvince() const { DARABONBA_PTR_GET_DEFAULT(deliveryProvince_, "") };
        inline InvoiceInfo& setDeliveryProvince(string deliveryProvince) { DARABONBA_PTR_SET_VALUE(deliveryProvince_, deliveryProvince) };


        // deliveryStreet Field Functions 
        bool hasDeliveryStreet() const { return this->deliveryStreet_ != nullptr;};
        void deleteDeliveryStreet() { this->deliveryStreet_ = nullptr;};
        inline string getDeliveryStreet() const { DARABONBA_PTR_GET_DEFAULT(deliveryStreet_, "") };
        inline InvoiceInfo& setDeliveryStreet(string deliveryStreet) { DARABONBA_PTR_SET_VALUE(deliveryStreet_, deliveryStreet) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline InvoiceInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // invoiceMaterial Field Functions 
        bool hasInvoiceMaterial() const { return this->invoiceMaterial_ != nullptr;};
        void deleteInvoiceMaterial() { this->invoiceMaterial_ = nullptr;};
        inline int32_t getInvoiceMaterial() const { DARABONBA_PTR_GET_DEFAULT(invoiceMaterial_, 0) };
        inline InvoiceInfo& setInvoiceMaterial(int32_t invoiceMaterial) { DARABONBA_PTR_SET_VALUE(invoiceMaterial_, invoiceMaterial) };


        // invoiceTitle Field Functions 
        bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
        void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
        inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
        inline InvoiceInfo& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


        // invoiceType Field Functions 
        bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
        void deleteInvoiceType() { this->invoiceType_ = nullptr;};
        inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
        inline InvoiceInfo& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


        // postage Field Functions 
        bool hasPostage() const { return this->postage_ != nullptr;};
        void deletePostage() { this->postage_ = nullptr;};
        inline int64_t getPostage() const { DARABONBA_PTR_GET_DEFAULT(postage_, 0L) };
        inline InvoiceInfo& setPostage(int64_t postage) { DARABONBA_PTR_SET_VALUE(postage_, postage) };


        // receiverName Field Functions 
        bool hasReceiverName() const { return this->receiverName_ != nullptr;};
        void deleteReceiverName() { this->receiverName_ = nullptr;};
        inline string getReceiverName() const { DARABONBA_PTR_GET_DEFAULT(receiverName_, "") };
        inline InvoiceInfo& setReceiverName(string receiverName) { DARABONBA_PTR_SET_VALUE(receiverName_, receiverName) };


        // receiverPhone Field Functions 
        bool hasReceiverPhone() const { return this->receiverPhone_ != nullptr;};
        void deleteReceiverPhone() { this->receiverPhone_ = nullptr;};
        inline string getReceiverPhone() const { DARABONBA_PTR_GET_DEFAULT(receiverPhone_, "") };
        inline InvoiceInfo& setReceiverPhone(string receiverPhone) { DARABONBA_PTR_SET_VALUE(receiverPhone_, receiverPhone) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline InvoiceInfo& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      protected:
        shared_ptr<int64_t> billingMoney_ {};
        shared_ptr<string> buyerAdd_ {};
        shared_ptr<string> buyerBankAcc_ {};
        shared_ptr<string> buyerBankAdd_ {};
        shared_ptr<string> buyerPhone_ {};
        shared_ptr<string> buyerTaxNum_ {};
        shared_ptr<string> deliveryAddress_ {};
        shared_ptr<string> deliveryArea_ {};
        shared_ptr<string> deliveryCity_ {};
        shared_ptr<string> deliveryProvince_ {};
        shared_ptr<string> deliveryStreet_ {};
        shared_ptr<string> email_ {};
        shared_ptr<int32_t> invoiceMaterial_ {};
        shared_ptr<string> invoiceTitle_ {};
        shared_ptr<int32_t> invoiceType_ {};
        shared_ptr<int64_t> postage_ {};
        shared_ptr<string> receiverName_ {};
        shared_ptr<string> receiverPhone_ {};
        shared_ptr<string> remark_ {};
      };

      class HotelSaleOrderRoomInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelSaleOrderRoomInfos& obj) { 
          DARABONBA_PTR_TO_JSON(checkin_date, checkinDate_);
          DARABONBA_PTR_TO_JSON(checkout_date, checkoutDate_);
          DARABONBA_PTR_TO_JSON(penal_sum, penalSum_);
          DARABONBA_PTR_TO_JSON(real_checkout_date, realCheckoutDate_);
          DARABONBA_PTR_TO_JSON(refund_status, refundStatus_);
          DARABONBA_PTR_TO_JSON(room_no, roomNo_);
          DARABONBA_PTR_TO_JSON(room_price, roomPrice_);
          DARABONBA_PTR_TO_JSON(room_refund_price, roomRefundPrice_);
          DARABONBA_PTR_TO_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_TO_JSON(traveler_name, travelerName_);
        };
        friend void from_json(const Darabonba::Json& j, HotelSaleOrderRoomInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(checkin_date, checkinDate_);
          DARABONBA_PTR_FROM_JSON(checkout_date, checkoutDate_);
          DARABONBA_PTR_FROM_JSON(penal_sum, penalSum_);
          DARABONBA_PTR_FROM_JSON(real_checkout_date, realCheckoutDate_);
          DARABONBA_PTR_FROM_JSON(refund_status, refundStatus_);
          DARABONBA_PTR_FROM_JSON(room_no, roomNo_);
          DARABONBA_PTR_FROM_JSON(room_price, roomPrice_);
          DARABONBA_PTR_FROM_JSON(room_refund_price, roomRefundPrice_);
          DARABONBA_PTR_FROM_JSON(traveler_id, travelerId_);
          DARABONBA_PTR_FROM_JSON(traveler_name, travelerName_);
        };
        HotelSaleOrderRoomInfos() = default ;
        HotelSaleOrderRoomInfos(const HotelSaleOrderRoomInfos &) = default ;
        HotelSaleOrderRoomInfos(HotelSaleOrderRoomInfos &&) = default ;
        HotelSaleOrderRoomInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelSaleOrderRoomInfos() = default ;
        HotelSaleOrderRoomInfos& operator=(const HotelSaleOrderRoomInfos &) = default ;
        HotelSaleOrderRoomInfos& operator=(HotelSaleOrderRoomInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->checkinDate_ == nullptr
        && this->checkoutDate_ == nullptr && this->penalSum_ == nullptr && this->realCheckoutDate_ == nullptr && this->refundStatus_ == nullptr && this->roomNo_ == nullptr
        && this->roomPrice_ == nullptr && this->roomRefundPrice_ == nullptr && this->travelerId_ == nullptr && this->travelerName_ == nullptr; };
        // checkinDate Field Functions 
        bool hasCheckinDate() const { return this->checkinDate_ != nullptr;};
        void deleteCheckinDate() { this->checkinDate_ = nullptr;};
        inline string getCheckinDate() const { DARABONBA_PTR_GET_DEFAULT(checkinDate_, "") };
        inline HotelSaleOrderRoomInfos& setCheckinDate(string checkinDate) { DARABONBA_PTR_SET_VALUE(checkinDate_, checkinDate) };


        // checkoutDate Field Functions 
        bool hasCheckoutDate() const { return this->checkoutDate_ != nullptr;};
        void deleteCheckoutDate() { this->checkoutDate_ = nullptr;};
        inline string getCheckoutDate() const { DARABONBA_PTR_GET_DEFAULT(checkoutDate_, "") };
        inline HotelSaleOrderRoomInfos& setCheckoutDate(string checkoutDate) { DARABONBA_PTR_SET_VALUE(checkoutDate_, checkoutDate) };


        // penalSum Field Functions 
        bool hasPenalSum() const { return this->penalSum_ != nullptr;};
        void deletePenalSum() { this->penalSum_ = nullptr;};
        inline int64_t getPenalSum() const { DARABONBA_PTR_GET_DEFAULT(penalSum_, 0L) };
        inline HotelSaleOrderRoomInfos& setPenalSum(int64_t penalSum) { DARABONBA_PTR_SET_VALUE(penalSum_, penalSum) };


        // realCheckoutDate Field Functions 
        bool hasRealCheckoutDate() const { return this->realCheckoutDate_ != nullptr;};
        void deleteRealCheckoutDate() { this->realCheckoutDate_ = nullptr;};
        inline string getRealCheckoutDate() const { DARABONBA_PTR_GET_DEFAULT(realCheckoutDate_, "") };
        inline HotelSaleOrderRoomInfos& setRealCheckoutDate(string realCheckoutDate) { DARABONBA_PTR_SET_VALUE(realCheckoutDate_, realCheckoutDate) };


        // refundStatus Field Functions 
        bool hasRefundStatus() const { return this->refundStatus_ != nullptr;};
        void deleteRefundStatus() { this->refundStatus_ = nullptr;};
        inline int32_t getRefundStatus() const { DARABONBA_PTR_GET_DEFAULT(refundStatus_, 0) };
        inline HotelSaleOrderRoomInfos& setRefundStatus(int32_t refundStatus) { DARABONBA_PTR_SET_VALUE(refundStatus_, refundStatus) };


        // roomNo Field Functions 
        bool hasRoomNo() const { return this->roomNo_ != nullptr;};
        void deleteRoomNo() { this->roomNo_ = nullptr;};
        inline int32_t getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, 0) };
        inline HotelSaleOrderRoomInfos& setRoomNo(int32_t roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


        // roomPrice Field Functions 
        bool hasRoomPrice() const { return this->roomPrice_ != nullptr;};
        void deleteRoomPrice() { this->roomPrice_ = nullptr;};
        inline int64_t getRoomPrice() const { DARABONBA_PTR_GET_DEFAULT(roomPrice_, 0L) };
        inline HotelSaleOrderRoomInfos& setRoomPrice(int64_t roomPrice) { DARABONBA_PTR_SET_VALUE(roomPrice_, roomPrice) };


        // roomRefundPrice Field Functions 
        bool hasRoomRefundPrice() const { return this->roomRefundPrice_ != nullptr;};
        void deleteRoomRefundPrice() { this->roomRefundPrice_ = nullptr;};
        inline int64_t getRoomRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(roomRefundPrice_, 0L) };
        inline HotelSaleOrderRoomInfos& setRoomRefundPrice(int64_t roomRefundPrice) { DARABONBA_PTR_SET_VALUE(roomRefundPrice_, roomRefundPrice) };


        // travelerId Field Functions 
        bool hasTravelerId() const { return this->travelerId_ != nullptr;};
        void deleteTravelerId() { this->travelerId_ = nullptr;};
        inline string getTravelerId() const { DARABONBA_PTR_GET_DEFAULT(travelerId_, "") };
        inline HotelSaleOrderRoomInfos& setTravelerId(string travelerId) { DARABONBA_PTR_SET_VALUE(travelerId_, travelerId) };


        // travelerName Field Functions 
        bool hasTravelerName() const { return this->travelerName_ != nullptr;};
        void deleteTravelerName() { this->travelerName_ = nullptr;};
        inline string getTravelerName() const { DARABONBA_PTR_GET_DEFAULT(travelerName_, "") };
        inline HotelSaleOrderRoomInfos& setTravelerName(string travelerName) { DARABONBA_PTR_SET_VALUE(travelerName_, travelerName) };


      protected:
        shared_ptr<string> checkinDate_ {};
        shared_ptr<string> checkoutDate_ {};
        shared_ptr<int64_t> penalSum_ {};
        shared_ptr<string> realCheckoutDate_ {};
        shared_ptr<int32_t> refundStatus_ {};
        shared_ptr<int32_t> roomNo_ {};
        shared_ptr<int64_t> roomPrice_ {};
        shared_ptr<int64_t> roomRefundPrice_ {};
        shared_ptr<string> travelerId_ {};
        shared_ptr<string> travelerName_ {};
      };

      class HotelOnSitePriceDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelOnSitePriceDetail& obj) { 
          DARABONBA_PTR_TO_JSON(total_on_site_price, totalOnSitePrice_);
        };
        friend void from_json(const Darabonba::Json& j, HotelOnSitePriceDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(total_on_site_price, totalOnSitePrice_);
        };
        HotelOnSitePriceDetail() = default ;
        HotelOnSitePriceDetail(const HotelOnSitePriceDetail &) = default ;
        HotelOnSitePriceDetail(HotelOnSitePriceDetail &&) = default ;
        HotelOnSitePriceDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelOnSitePriceDetail() = default ;
        HotelOnSitePriceDetail& operator=(const HotelOnSitePriceDetail &) = default ;
        HotelOnSitePriceDetail& operator=(HotelOnSitePriceDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TotalOnSitePrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TotalOnSitePrice& obj) { 
            DARABONBA_PTR_TO_JSON(currency, currency_);
            DARABONBA_PTR_TO_JSON(foreign_currency, foreignCurrency_);
            DARABONBA_PTR_TO_JSON(foreign_price, foreignPrice_);
            DARABONBA_PTR_TO_JSON(price, price_);
          };
          friend void from_json(const Darabonba::Json& j, TotalOnSitePrice& obj) { 
            DARABONBA_PTR_FROM_JSON(currency, currency_);
            DARABONBA_PTR_FROM_JSON(foreign_currency, foreignCurrency_);
            DARABONBA_PTR_FROM_JSON(foreign_price, foreignPrice_);
            DARABONBA_PTR_FROM_JSON(price, price_);
          };
          TotalOnSitePrice() = default ;
          TotalOnSitePrice(const TotalOnSitePrice &) = default ;
          TotalOnSitePrice(TotalOnSitePrice &&) = default ;
          TotalOnSitePrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TotalOnSitePrice() = default ;
          TotalOnSitePrice& operator=(const TotalOnSitePrice &) = default ;
          TotalOnSitePrice& operator=(TotalOnSitePrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->currency_ == nullptr
        && this->foreignCurrency_ == nullptr && this->foreignPrice_ == nullptr && this->price_ == nullptr; };
          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline TotalOnSitePrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // foreignCurrency Field Functions 
          bool hasForeignCurrency() const { return this->foreignCurrency_ != nullptr;};
          void deleteForeignCurrency() { this->foreignCurrency_ = nullptr;};
          inline string getForeignCurrency() const { DARABONBA_PTR_GET_DEFAULT(foreignCurrency_, "") };
          inline TotalOnSitePrice& setForeignCurrency(string foreignCurrency) { DARABONBA_PTR_SET_VALUE(foreignCurrency_, foreignCurrency) };


          // foreignPrice Field Functions 
          bool hasForeignPrice() const { return this->foreignPrice_ != nullptr;};
          void deleteForeignPrice() { this->foreignPrice_ = nullptr;};
          inline int64_t getForeignPrice() const { DARABONBA_PTR_GET_DEFAULT(foreignPrice_, 0L) };
          inline TotalOnSitePrice& setForeignPrice(int64_t foreignPrice) { DARABONBA_PTR_SET_VALUE(foreignPrice_, foreignPrice) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
          inline TotalOnSitePrice& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        protected:
          shared_ptr<string> currency_ {};
          shared_ptr<string> foreignCurrency_ {};
          shared_ptr<int64_t> foreignPrice_ {};
          shared_ptr<int64_t> price_ {};
        };

        virtual bool empty() const override { return this->totalOnSitePrice_ == nullptr; };
        // totalOnSitePrice Field Functions 
        bool hasTotalOnSitePrice() const { return this->totalOnSitePrice_ != nullptr;};
        void deleteTotalOnSitePrice() { this->totalOnSitePrice_ = nullptr;};
        inline const HotelOnSitePriceDetail::TotalOnSitePrice & getTotalOnSitePrice() const { DARABONBA_PTR_GET_CONST(totalOnSitePrice_, HotelOnSitePriceDetail::TotalOnSitePrice) };
        inline HotelOnSitePriceDetail::TotalOnSitePrice getTotalOnSitePrice() { DARABONBA_PTR_GET(totalOnSitePrice_, HotelOnSitePriceDetail::TotalOnSitePrice) };
        inline HotelOnSitePriceDetail& setTotalOnSitePrice(const HotelOnSitePriceDetail::TotalOnSitePrice & totalOnSitePrice) { DARABONBA_PTR_SET_VALUE(totalOnSitePrice_, totalOnSitePrice) };
        inline HotelOnSitePriceDetail& setTotalOnSitePrice(HotelOnSitePriceDetail::TotalOnSitePrice && totalOnSitePrice) { DARABONBA_PTR_SET_RVALUE(totalOnSitePrice_, totalOnSitePrice) };


      protected:
        shared_ptr<HotelOnSitePriceDetail::TotalOnSitePrice> totalOnSitePrice_ {};
      };

      class HotelDetailInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelDetailInfo& obj) { 
          DARABONBA_PTR_TO_JSON(address, address_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(hotel_tel, hotelTel_);
          DARABONBA_PTR_TO_JSON(shid, shid_);
        };
        friend void from_json(const Darabonba::Json& j, HotelDetailInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(address, address_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(hotel_tel, hotelTel_);
          DARABONBA_PTR_FROM_JSON(shid, shid_);
        };
        HotelDetailInfo() = default ;
        HotelDetailInfo(const HotelDetailInfo &) = default ;
        HotelDetailInfo(HotelDetailInfo &&) = default ;
        HotelDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelDetailInfo() = default ;
        HotelDetailInfo& operator=(const HotelDetailInfo &) = default ;
        HotelDetailInfo& operator=(HotelDetailInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->cityName_ == nullptr && this->hotelName_ == nullptr && this->hotelTel_ == nullptr && this->shid_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline HotelDetailInfo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelDetailInfo& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline HotelDetailInfo& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // hotelTel Field Functions 
        bool hasHotelTel() const { return this->hotelTel_ != nullptr;};
        void deleteHotelTel() { this->hotelTel_ = nullptr;};
        inline string getHotelTel() const { DARABONBA_PTR_GET_DEFAULT(hotelTel_, "") };
        inline HotelDetailInfo& setHotelTel(string hotelTel) { DARABONBA_PTR_SET_VALUE(hotelTel_, hotelTel) };


        // shid Field Functions 
        bool hasShid() const { return this->shid_ != nullptr;};
        void deleteShid() { this->shid_ = nullptr;};
        inline int64_t getShid() const { DARABONBA_PTR_GET_DEFAULT(shid_, 0L) };
        inline HotelDetailInfo& setShid(int64_t shid) { DARABONBA_PTR_SET_VALUE(shid_, shid) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<string> hotelTel_ {};
        shared_ptr<int64_t> shid_ {};
      };

      class CancelInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CancelInfo& obj) { 
          DARABONBA_PTR_TO_JSON(cancel_end_time, cancelEndTime_);
          DARABONBA_PTR_TO_JSON(cancel_start_time, cancelStartTime_);
        };
        friend void from_json(const Darabonba::Json& j, CancelInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(cancel_end_time, cancelEndTime_);
          DARABONBA_PTR_FROM_JSON(cancel_start_time, cancelStartTime_);
        };
        CancelInfo() = default ;
        CancelInfo(const CancelInfo &) = default ;
        CancelInfo(CancelInfo &&) = default ;
        CancelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CancelInfo() = default ;
        CancelInfo& operator=(const CancelInfo &) = default ;
        CancelInfo& operator=(CancelInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cancelEndTime_ == nullptr
        && this->cancelStartTime_ == nullptr; };
        // cancelEndTime Field Functions 
        bool hasCancelEndTime() const { return this->cancelEndTime_ != nullptr;};
        void deleteCancelEndTime() { this->cancelEndTime_ = nullptr;};
        inline string getCancelEndTime() const { DARABONBA_PTR_GET_DEFAULT(cancelEndTime_, "") };
        inline CancelInfo& setCancelEndTime(string cancelEndTime) { DARABONBA_PTR_SET_VALUE(cancelEndTime_, cancelEndTime) };


        // cancelStartTime Field Functions 
        bool hasCancelStartTime() const { return this->cancelStartTime_ != nullptr;};
        void deleteCancelStartTime() { this->cancelStartTime_ = nullptr;};
        inline string getCancelStartTime() const { DARABONBA_PTR_GET_DEFAULT(cancelStartTime_, "") };
        inline CancelInfo& setCancelStartTime(string cancelStartTime) { DARABONBA_PTR_SET_VALUE(cancelStartTime_, cancelStartTime) };


      protected:
        shared_ptr<string> cancelEndTime_ {};
        shared_ptr<string> cancelStartTime_ {};
      };

      class BtripHotelCancelPolicyDTO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BtripHotelCancelPolicyDTO& obj) { 
          DARABONBA_PTR_TO_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
          DARABONBA_PTR_TO_JSON(cancel_policy_type, cancelPolicyType_);
        };
        friend void from_json(const Darabonba::Json& j, BtripHotelCancelPolicyDTO& obj) { 
          DARABONBA_PTR_FROM_JSON(btrip_hotel_cancel_policy_info_d_t_o_list, btripHotelCancelPolicyInfoDTOList_);
          DARABONBA_PTR_FROM_JSON(cancel_policy_type, cancelPolicyType_);
        };
        BtripHotelCancelPolicyDTO() = default ;
        BtripHotelCancelPolicyDTO(const BtripHotelCancelPolicyDTO &) = default ;
        BtripHotelCancelPolicyDTO(BtripHotelCancelPolicyDTO &&) = default ;
        BtripHotelCancelPolicyDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BtripHotelCancelPolicyDTO() = default ;
        BtripHotelCancelPolicyDTO& operator=(const BtripHotelCancelPolicyDTO &) = default ;
        BtripHotelCancelPolicyDTO& operator=(BtripHotelCancelPolicyDTO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BtripHotelCancelPolicyInfoDTOList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BtripHotelCancelPolicyInfoDTOList& obj) { 
            DARABONBA_PTR_TO_JSON(hour, hour_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, BtripHotelCancelPolicyInfoDTOList& obj) { 
            DARABONBA_PTR_FROM_JSON(hour, hour_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          BtripHotelCancelPolicyInfoDTOList() = default ;
          BtripHotelCancelPolicyInfoDTOList(const BtripHotelCancelPolicyInfoDTOList &) = default ;
          BtripHotelCancelPolicyInfoDTOList(BtripHotelCancelPolicyInfoDTOList &&) = default ;
          BtripHotelCancelPolicyInfoDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BtripHotelCancelPolicyInfoDTOList() = default ;
          BtripHotelCancelPolicyInfoDTOList& operator=(const BtripHotelCancelPolicyInfoDTOList &) = default ;
          BtripHotelCancelPolicyInfoDTOList& operator=(BtripHotelCancelPolicyInfoDTOList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->hour_ == nullptr
        && this->value_ == nullptr; };
          // hour Field Functions 
          bool hasHour() const { return this->hour_ != nullptr;};
          void deleteHour() { this->hour_ = nullptr;};
          inline int64_t getHour() const { DARABONBA_PTR_GET_DEFAULT(hour_, 0L) };
          inline BtripHotelCancelPolicyInfoDTOList& setHour(int64_t hour) { DARABONBA_PTR_SET_VALUE(hour_, hour) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline BtripHotelCancelPolicyInfoDTOList& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<int64_t> hour_ {};
          shared_ptr<int64_t> value_ {};
        };

        virtual bool empty() const override { return this->btripHotelCancelPolicyInfoDTOList_ == nullptr
        && this->cancelPolicyType_ == nullptr; };
        // btripHotelCancelPolicyInfoDTOList Field Functions 
        bool hasBtripHotelCancelPolicyInfoDTOList() const { return this->btripHotelCancelPolicyInfoDTOList_ != nullptr;};
        void deleteBtripHotelCancelPolicyInfoDTOList() { this->btripHotelCancelPolicyInfoDTOList_ = nullptr;};
        inline const vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> & getBtripHotelCancelPolicyInfoDTOList() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyInfoDTOList_, vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList>) };
        inline vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> getBtripHotelCancelPolicyInfoDTOList() { DARABONBA_PTR_GET(btripHotelCancelPolicyInfoDTOList_, vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList>) };
        inline BtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(const vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> & btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };
        inline BtripHotelCancelPolicyDTO& setBtripHotelCancelPolicyInfoDTOList(vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList> && btripHotelCancelPolicyInfoDTOList) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyInfoDTOList_, btripHotelCancelPolicyInfoDTOList) };


        // cancelPolicyType Field Functions 
        bool hasCancelPolicyType() const { return this->cancelPolicyType_ != nullptr;};
        void deleteCancelPolicyType() { this->cancelPolicyType_ = nullptr;};
        inline int32_t getCancelPolicyType() const { DARABONBA_PTR_GET_DEFAULT(cancelPolicyType_, 0) };
        inline BtripHotelCancelPolicyDTO& setCancelPolicyType(int32_t cancelPolicyType) { DARABONBA_PTR_SET_VALUE(cancelPolicyType_, cancelPolicyType) };


      protected:
        shared_ptr<vector<BtripHotelCancelPolicyDTO::BtripHotelCancelPolicyInfoDTOList>> btripHotelCancelPolicyInfoDTOList_ {};
        shared_ptr<int32_t> cancelPolicyType_ {};
      };

      virtual bool empty() const override { return this->actualCheckInTime_ == nullptr
        && this->actualCheckOutTime_ == nullptr && this->btripHotelCancelPolicyDTO_ == nullptr && this->btripOrderId_ == nullptr && this->cancelFine_ == nullptr && this->cancelInfo_ == nullptr
        && this->checkIn_ == nullptr && this->checkOut_ == nullptr && this->confirmOrderTime_ == nullptr && this->contractName_ == nullptr && this->contractTel_ == nullptr
        && this->createOrderTime_ == nullptr && this->earlyArrivalTime_ == nullptr && this->earlyDeparture_ == nullptr && this->guestCount_ == nullptr && this->hotelDetailInfo_ == nullptr
        && this->hotelOnSitePriceDetail_ == nullptr && this->hotelSaleOrderRoomInfos_ == nullptr && this->invoiceInfo_ == nullptr && this->itemId_ == nullptr && this->lastArrivalTime_ == nullptr
        && this->occupantInfoList_ == nullptr && this->orderStatus_ == nullptr && this->orderStatusDesc_ == nullptr && this->outConfirmCode_ == nullptr && this->payTime_ == nullptr
        && this->productType_ == nullptr && this->purchaseOrderId_ == nullptr && this->refundPrice_ == nullptr && this->refundReason_ == nullptr && this->refundServiceFee_ == nullptr
        && this->roomNightPriceInfoList_ == nullptr && this->roomNumber_ == nullptr && this->roomTypeName_ == nullptr && this->sellerId_ == nullptr && this->sellerName_ == nullptr
        && this->serviceFee_ == nullptr && this->settleType_ == nullptr && this->supplierOrderId_ == nullptr && this->totalPrice_ == nullptr; };
      // actualCheckInTime Field Functions 
      bool hasActualCheckInTime() const { return this->actualCheckInTime_ != nullptr;};
      void deleteActualCheckInTime() { this->actualCheckInTime_ = nullptr;};
      inline string getActualCheckInTime() const { DARABONBA_PTR_GET_DEFAULT(actualCheckInTime_, "") };
      inline Module& setActualCheckInTime(string actualCheckInTime) { DARABONBA_PTR_SET_VALUE(actualCheckInTime_, actualCheckInTime) };


      // actualCheckOutTime Field Functions 
      bool hasActualCheckOutTime() const { return this->actualCheckOutTime_ != nullptr;};
      void deleteActualCheckOutTime() { this->actualCheckOutTime_ = nullptr;};
      inline string getActualCheckOutTime() const { DARABONBA_PTR_GET_DEFAULT(actualCheckOutTime_, "") };
      inline Module& setActualCheckOutTime(string actualCheckOutTime) { DARABONBA_PTR_SET_VALUE(actualCheckOutTime_, actualCheckOutTime) };


      // btripHotelCancelPolicyDTO Field Functions 
      bool hasBtripHotelCancelPolicyDTO() const { return this->btripHotelCancelPolicyDTO_ != nullptr;};
      void deleteBtripHotelCancelPolicyDTO() { this->btripHotelCancelPolicyDTO_ = nullptr;};
      inline const Module::BtripHotelCancelPolicyDTO & getBtripHotelCancelPolicyDTO() const { DARABONBA_PTR_GET_CONST(btripHotelCancelPolicyDTO_, Module::BtripHotelCancelPolicyDTO) };
      inline Module::BtripHotelCancelPolicyDTO getBtripHotelCancelPolicyDTO() { DARABONBA_PTR_GET(btripHotelCancelPolicyDTO_, Module::BtripHotelCancelPolicyDTO) };
      inline Module& setBtripHotelCancelPolicyDTO(const Module::BtripHotelCancelPolicyDTO & btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_VALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };
      inline Module& setBtripHotelCancelPolicyDTO(Module::BtripHotelCancelPolicyDTO && btripHotelCancelPolicyDTO) { DARABONBA_PTR_SET_RVALUE(btripHotelCancelPolicyDTO_, btripHotelCancelPolicyDTO) };


      // btripOrderId Field Functions 
      bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
      void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
      inline string getBtripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, "") };
      inline Module& setBtripOrderId(string btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


      // cancelFine Field Functions 
      bool hasCancelFine() const { return this->cancelFine_ != nullptr;};
      void deleteCancelFine() { this->cancelFine_ = nullptr;};
      inline int64_t getCancelFine() const { DARABONBA_PTR_GET_DEFAULT(cancelFine_, 0L) };
      inline Module& setCancelFine(int64_t cancelFine) { DARABONBA_PTR_SET_VALUE(cancelFine_, cancelFine) };


      // cancelInfo Field Functions 
      bool hasCancelInfo() const { return this->cancelInfo_ != nullptr;};
      void deleteCancelInfo() { this->cancelInfo_ = nullptr;};
      inline const Module::CancelInfo & getCancelInfo() const { DARABONBA_PTR_GET_CONST(cancelInfo_, Module::CancelInfo) };
      inline Module::CancelInfo getCancelInfo() { DARABONBA_PTR_GET(cancelInfo_, Module::CancelInfo) };
      inline Module& setCancelInfo(const Module::CancelInfo & cancelInfo) { DARABONBA_PTR_SET_VALUE(cancelInfo_, cancelInfo) };
      inline Module& setCancelInfo(Module::CancelInfo && cancelInfo) { DARABONBA_PTR_SET_RVALUE(cancelInfo_, cancelInfo) };


      // checkIn Field Functions 
      bool hasCheckIn() const { return this->checkIn_ != nullptr;};
      void deleteCheckIn() { this->checkIn_ = nullptr;};
      inline string getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, "") };
      inline Module& setCheckIn(string checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


      // checkOut Field Functions 
      bool hasCheckOut() const { return this->checkOut_ != nullptr;};
      void deleteCheckOut() { this->checkOut_ = nullptr;};
      inline string getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, "") };
      inline Module& setCheckOut(string checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


      // confirmOrderTime Field Functions 
      bool hasConfirmOrderTime() const { return this->confirmOrderTime_ != nullptr;};
      void deleteConfirmOrderTime() { this->confirmOrderTime_ = nullptr;};
      inline string getConfirmOrderTime() const { DARABONBA_PTR_GET_DEFAULT(confirmOrderTime_, "") };
      inline Module& setConfirmOrderTime(string confirmOrderTime) { DARABONBA_PTR_SET_VALUE(confirmOrderTime_, confirmOrderTime) };


      // contractName Field Functions 
      bool hasContractName() const { return this->contractName_ != nullptr;};
      void deleteContractName() { this->contractName_ = nullptr;};
      inline string getContractName() const { DARABONBA_PTR_GET_DEFAULT(contractName_, "") };
      inline Module& setContractName(string contractName) { DARABONBA_PTR_SET_VALUE(contractName_, contractName) };


      // contractTel Field Functions 
      bool hasContractTel() const { return this->contractTel_ != nullptr;};
      void deleteContractTel() { this->contractTel_ = nullptr;};
      inline string getContractTel() const { DARABONBA_PTR_GET_DEFAULT(contractTel_, "") };
      inline Module& setContractTel(string contractTel) { DARABONBA_PTR_SET_VALUE(contractTel_, contractTel) };


      // createOrderTime Field Functions 
      bool hasCreateOrderTime() const { return this->createOrderTime_ != nullptr;};
      void deleteCreateOrderTime() { this->createOrderTime_ = nullptr;};
      inline string getCreateOrderTime() const { DARABONBA_PTR_GET_DEFAULT(createOrderTime_, "") };
      inline Module& setCreateOrderTime(string createOrderTime) { DARABONBA_PTR_SET_VALUE(createOrderTime_, createOrderTime) };


      // earlyArrivalTime Field Functions 
      bool hasEarlyArrivalTime() const { return this->earlyArrivalTime_ != nullptr;};
      void deleteEarlyArrivalTime() { this->earlyArrivalTime_ = nullptr;};
      inline string getEarlyArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(earlyArrivalTime_, "") };
      inline Module& setEarlyArrivalTime(string earlyArrivalTime) { DARABONBA_PTR_SET_VALUE(earlyArrivalTime_, earlyArrivalTime) };


      // earlyDeparture Field Functions 
      bool hasEarlyDeparture() const { return this->earlyDeparture_ != nullptr;};
      void deleteEarlyDeparture() { this->earlyDeparture_ = nullptr;};
      inline bool getEarlyDeparture() const { DARABONBA_PTR_GET_DEFAULT(earlyDeparture_, false) };
      inline Module& setEarlyDeparture(bool earlyDeparture) { DARABONBA_PTR_SET_VALUE(earlyDeparture_, earlyDeparture) };


      // guestCount Field Functions 
      bool hasGuestCount() const { return this->guestCount_ != nullptr;};
      void deleteGuestCount() { this->guestCount_ = nullptr;};
      inline int32_t getGuestCount() const { DARABONBA_PTR_GET_DEFAULT(guestCount_, 0) };
      inline Module& setGuestCount(int32_t guestCount) { DARABONBA_PTR_SET_VALUE(guestCount_, guestCount) };


      // hotelDetailInfo Field Functions 
      bool hasHotelDetailInfo() const { return this->hotelDetailInfo_ != nullptr;};
      void deleteHotelDetailInfo() { this->hotelDetailInfo_ = nullptr;};
      inline const Module::HotelDetailInfo & getHotelDetailInfo() const { DARABONBA_PTR_GET_CONST(hotelDetailInfo_, Module::HotelDetailInfo) };
      inline Module::HotelDetailInfo getHotelDetailInfo() { DARABONBA_PTR_GET(hotelDetailInfo_, Module::HotelDetailInfo) };
      inline Module& setHotelDetailInfo(const Module::HotelDetailInfo & hotelDetailInfo) { DARABONBA_PTR_SET_VALUE(hotelDetailInfo_, hotelDetailInfo) };
      inline Module& setHotelDetailInfo(Module::HotelDetailInfo && hotelDetailInfo) { DARABONBA_PTR_SET_RVALUE(hotelDetailInfo_, hotelDetailInfo) };


      // hotelOnSitePriceDetail Field Functions 
      bool hasHotelOnSitePriceDetail() const { return this->hotelOnSitePriceDetail_ != nullptr;};
      void deleteHotelOnSitePriceDetail() { this->hotelOnSitePriceDetail_ = nullptr;};
      inline const Module::HotelOnSitePriceDetail & getHotelOnSitePriceDetail() const { DARABONBA_PTR_GET_CONST(hotelOnSitePriceDetail_, Module::HotelOnSitePriceDetail) };
      inline Module::HotelOnSitePriceDetail getHotelOnSitePriceDetail() { DARABONBA_PTR_GET(hotelOnSitePriceDetail_, Module::HotelOnSitePriceDetail) };
      inline Module& setHotelOnSitePriceDetail(const Module::HotelOnSitePriceDetail & hotelOnSitePriceDetail) { DARABONBA_PTR_SET_VALUE(hotelOnSitePriceDetail_, hotelOnSitePriceDetail) };
      inline Module& setHotelOnSitePriceDetail(Module::HotelOnSitePriceDetail && hotelOnSitePriceDetail) { DARABONBA_PTR_SET_RVALUE(hotelOnSitePriceDetail_, hotelOnSitePriceDetail) };


      // hotelSaleOrderRoomInfos Field Functions 
      bool hasHotelSaleOrderRoomInfos() const { return this->hotelSaleOrderRoomInfos_ != nullptr;};
      void deleteHotelSaleOrderRoomInfos() { this->hotelSaleOrderRoomInfos_ = nullptr;};
      inline const vector<Module::HotelSaleOrderRoomInfos> & getHotelSaleOrderRoomInfos() const { DARABONBA_PTR_GET_CONST(hotelSaleOrderRoomInfos_, vector<Module::HotelSaleOrderRoomInfos>) };
      inline vector<Module::HotelSaleOrderRoomInfos> getHotelSaleOrderRoomInfos() { DARABONBA_PTR_GET(hotelSaleOrderRoomInfos_, vector<Module::HotelSaleOrderRoomInfos>) };
      inline Module& setHotelSaleOrderRoomInfos(const vector<Module::HotelSaleOrderRoomInfos> & hotelSaleOrderRoomInfos) { DARABONBA_PTR_SET_VALUE(hotelSaleOrderRoomInfos_, hotelSaleOrderRoomInfos) };
      inline Module& setHotelSaleOrderRoomInfos(vector<Module::HotelSaleOrderRoomInfos> && hotelSaleOrderRoomInfos) { DARABONBA_PTR_SET_RVALUE(hotelSaleOrderRoomInfos_, hotelSaleOrderRoomInfos) };


      // invoiceInfo Field Functions 
      bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
      void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
      inline const Module::InvoiceInfo & getInvoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Module::InvoiceInfo) };
      inline Module::InvoiceInfo getInvoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Module::InvoiceInfo) };
      inline Module& setInvoiceInfo(const Module::InvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
      inline Module& setInvoiceInfo(Module::InvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


      // itemId Field Functions 
      bool hasItemId() const { return this->itemId_ != nullptr;};
      void deleteItemId() { this->itemId_ = nullptr;};
      inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
      inline Module& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


      // lastArrivalTime Field Functions 
      bool hasLastArrivalTime() const { return this->lastArrivalTime_ != nullptr;};
      void deleteLastArrivalTime() { this->lastArrivalTime_ = nullptr;};
      inline string getLastArrivalTime() const { DARABONBA_PTR_GET_DEFAULT(lastArrivalTime_, "") };
      inline Module& setLastArrivalTime(string lastArrivalTime) { DARABONBA_PTR_SET_VALUE(lastArrivalTime_, lastArrivalTime) };


      // occupantInfoList Field Functions 
      bool hasOccupantInfoList() const { return this->occupantInfoList_ != nullptr;};
      void deleteOccupantInfoList() { this->occupantInfoList_ = nullptr;};
      inline const vector<Module::OccupantInfoList> & getOccupantInfoList() const { DARABONBA_PTR_GET_CONST(occupantInfoList_, vector<Module::OccupantInfoList>) };
      inline vector<Module::OccupantInfoList> getOccupantInfoList() { DARABONBA_PTR_GET(occupantInfoList_, vector<Module::OccupantInfoList>) };
      inline Module& setOccupantInfoList(const vector<Module::OccupantInfoList> & occupantInfoList) { DARABONBA_PTR_SET_VALUE(occupantInfoList_, occupantInfoList) };
      inline Module& setOccupantInfoList(vector<Module::OccupantInfoList> && occupantInfoList) { DARABONBA_PTR_SET_RVALUE(occupantInfoList_, occupantInfoList) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
      inline Module& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // orderStatusDesc Field Functions 
      bool hasOrderStatusDesc() const { return this->orderStatusDesc_ != nullptr;};
      void deleteOrderStatusDesc() { this->orderStatusDesc_ = nullptr;};
      inline string getOrderStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(orderStatusDesc_, "") };
      inline Module& setOrderStatusDesc(string orderStatusDesc) { DARABONBA_PTR_SET_VALUE(orderStatusDesc_, orderStatusDesc) };


      // outConfirmCode Field Functions 
      bool hasOutConfirmCode() const { return this->outConfirmCode_ != nullptr;};
      void deleteOutConfirmCode() { this->outConfirmCode_ = nullptr;};
      inline string getOutConfirmCode() const { DARABONBA_PTR_GET_DEFAULT(outConfirmCode_, "") };
      inline Module& setOutConfirmCode(string outConfirmCode) { DARABONBA_PTR_SET_VALUE(outConfirmCode_, outConfirmCode) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
      inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline int32_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0) };
      inline Module& setProductType(int32_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // purchaseOrderId Field Functions 
      bool hasPurchaseOrderId() const { return this->purchaseOrderId_ != nullptr;};
      void deletePurchaseOrderId() { this->purchaseOrderId_ = nullptr;};
      inline string getPurchaseOrderId() const { DARABONBA_PTR_GET_DEFAULT(purchaseOrderId_, "") };
      inline Module& setPurchaseOrderId(string purchaseOrderId) { DARABONBA_PTR_SET_VALUE(purchaseOrderId_, purchaseOrderId) };


      // refundPrice Field Functions 
      bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
      void deleteRefundPrice() { this->refundPrice_ = nullptr;};
      inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
      inline Module& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


      // refundReason Field Functions 
      bool hasRefundReason() const { return this->refundReason_ != nullptr;};
      void deleteRefundReason() { this->refundReason_ = nullptr;};
      inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
      inline Module& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


      // refundServiceFee Field Functions 
      bool hasRefundServiceFee() const { return this->refundServiceFee_ != nullptr;};
      void deleteRefundServiceFee() { this->refundServiceFee_ = nullptr;};
      inline int64_t getRefundServiceFee() const { DARABONBA_PTR_GET_DEFAULT(refundServiceFee_, 0L) };
      inline Module& setRefundServiceFee(int64_t refundServiceFee) { DARABONBA_PTR_SET_VALUE(refundServiceFee_, refundServiceFee) };


      // roomNightPriceInfoList Field Functions 
      bool hasRoomNightPriceInfoList() const { return this->roomNightPriceInfoList_ != nullptr;};
      void deleteRoomNightPriceInfoList() { this->roomNightPriceInfoList_ = nullptr;};
      inline const vector<Module::RoomNightPriceInfoList> & getRoomNightPriceInfoList() const { DARABONBA_PTR_GET_CONST(roomNightPriceInfoList_, vector<Module::RoomNightPriceInfoList>) };
      inline vector<Module::RoomNightPriceInfoList> getRoomNightPriceInfoList() { DARABONBA_PTR_GET(roomNightPriceInfoList_, vector<Module::RoomNightPriceInfoList>) };
      inline Module& setRoomNightPriceInfoList(const vector<Module::RoomNightPriceInfoList> & roomNightPriceInfoList) { DARABONBA_PTR_SET_VALUE(roomNightPriceInfoList_, roomNightPriceInfoList) };
      inline Module& setRoomNightPriceInfoList(vector<Module::RoomNightPriceInfoList> && roomNightPriceInfoList) { DARABONBA_PTR_SET_RVALUE(roomNightPriceInfoList_, roomNightPriceInfoList) };


      // roomNumber Field Functions 
      bool hasRoomNumber() const { return this->roomNumber_ != nullptr;};
      void deleteRoomNumber() { this->roomNumber_ = nullptr;};
      inline int32_t getRoomNumber() const { DARABONBA_PTR_GET_DEFAULT(roomNumber_, 0) };
      inline Module& setRoomNumber(int32_t roomNumber) { DARABONBA_PTR_SET_VALUE(roomNumber_, roomNumber) };


      // roomTypeName Field Functions 
      bool hasRoomTypeName() const { return this->roomTypeName_ != nullptr;};
      void deleteRoomTypeName() { this->roomTypeName_ = nullptr;};
      inline string getRoomTypeName() const { DARABONBA_PTR_GET_DEFAULT(roomTypeName_, "") };
      inline Module& setRoomTypeName(string roomTypeName) { DARABONBA_PTR_SET_VALUE(roomTypeName_, roomTypeName) };


      // sellerId Field Functions 
      bool hasSellerId() const { return this->sellerId_ != nullptr;};
      void deleteSellerId() { this->sellerId_ = nullptr;};
      inline string getSellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, "") };
      inline Module& setSellerId(string sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


      // sellerName Field Functions 
      bool hasSellerName() const { return this->sellerName_ != nullptr;};
      void deleteSellerName() { this->sellerName_ = nullptr;};
      inline string getSellerName() const { DARABONBA_PTR_GET_DEFAULT(sellerName_, "") };
      inline Module& setSellerName(string sellerName) { DARABONBA_PTR_SET_VALUE(sellerName_, sellerName) };


      // serviceFee Field Functions 
      bool hasServiceFee() const { return this->serviceFee_ != nullptr;};
      void deleteServiceFee() { this->serviceFee_ = nullptr;};
      inline int64_t getServiceFee() const { DARABONBA_PTR_GET_DEFAULT(serviceFee_, 0L) };
      inline Module& setServiceFee(int64_t serviceFee) { DARABONBA_PTR_SET_VALUE(serviceFee_, serviceFee) };


      // settleType Field Functions 
      bool hasSettleType() const { return this->settleType_ != nullptr;};
      void deleteSettleType() { this->settleType_ = nullptr;};
      inline string getSettleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, "") };
      inline Module& setSettleType(string settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


      // supplierOrderId Field Functions 
      bool hasSupplierOrderId() const { return this->supplierOrderId_ != nullptr;};
      void deleteSupplierOrderId() { this->supplierOrderId_ = nullptr;};
      inline string getSupplierOrderId() const { DARABONBA_PTR_GET_DEFAULT(supplierOrderId_, "") };
      inline Module& setSupplierOrderId(string supplierOrderId) { DARABONBA_PTR_SET_VALUE(supplierOrderId_, supplierOrderId) };


      // totalPrice Field Functions 
      bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
      void deleteTotalPrice() { this->totalPrice_ = nullptr;};
      inline int64_t getTotalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
      inline Module& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    protected:
      shared_ptr<string> actualCheckInTime_ {};
      shared_ptr<string> actualCheckOutTime_ {};
      shared_ptr<Module::BtripHotelCancelPolicyDTO> btripHotelCancelPolicyDTO_ {};
      shared_ptr<string> btripOrderId_ {};
      shared_ptr<int64_t> cancelFine_ {};
      shared_ptr<Module::CancelInfo> cancelInfo_ {};
      shared_ptr<string> checkIn_ {};
      shared_ptr<string> checkOut_ {};
      shared_ptr<string> confirmOrderTime_ {};
      shared_ptr<string> contractName_ {};
      shared_ptr<string> contractTel_ {};
      shared_ptr<string> createOrderTime_ {};
      shared_ptr<string> earlyArrivalTime_ {};
      shared_ptr<bool> earlyDeparture_ {};
      shared_ptr<int32_t> guestCount_ {};
      shared_ptr<Module::HotelDetailInfo> hotelDetailInfo_ {};
      shared_ptr<Module::HotelOnSitePriceDetail> hotelOnSitePriceDetail_ {};
      shared_ptr<vector<Module::HotelSaleOrderRoomInfos>> hotelSaleOrderRoomInfos_ {};
      shared_ptr<Module::InvoiceInfo> invoiceInfo_ {};
      shared_ptr<string> itemId_ {};
      shared_ptr<string> lastArrivalTime_ {};
      shared_ptr<vector<Module::OccupantInfoList>> occupantInfoList_ {};
      shared_ptr<int32_t> orderStatus_ {};
      shared_ptr<string> orderStatusDesc_ {};
      shared_ptr<string> outConfirmCode_ {};
      shared_ptr<string> payTime_ {};
      shared_ptr<int32_t> productType_ {};
      shared_ptr<string> purchaseOrderId_ {};
      shared_ptr<int64_t> refundPrice_ {};
      shared_ptr<string> refundReason_ {};
      shared_ptr<int64_t> refundServiceFee_ {};
      shared_ptr<vector<Module::RoomNightPriceInfoList>> roomNightPriceInfoList_ {};
      shared_ptr<int32_t> roomNumber_ {};
      shared_ptr<string> roomTypeName_ {};
      shared_ptr<string> sellerId_ {};
      shared_ptr<string> sellerName_ {};
      shared_ptr<int64_t> serviceFee_ {};
      shared_ptr<string> settleType_ {};
      shared_ptr<string> supplierOrderId_ {};
      shared_ptr<int64_t> totalPrice_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelOrderDetailInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelOrderDetailInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelOrderDetailInfoResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelOrderDetailInfoResponseBody::Module) };
    inline HotelOrderDetailInfoResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelOrderDetailInfoResponseBody::Module) };
    inline HotelOrderDetailInfoResponseBody& setModule(const HotelOrderDetailInfoResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelOrderDetailInfoResponseBody& setModule(HotelOrderDetailInfoResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelOrderDetailInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelOrderDetailInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelOrderDetailInfoResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelOrderDetailInfoResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
