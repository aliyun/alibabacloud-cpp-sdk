// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERQUERYRESPONSEBODY_HPP_
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
  class FlightOrderQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOrderQueryResponseBody() = default ;
    FlightOrderQueryResponseBody(const FlightOrderQueryResponseBody &) = default ;
    FlightOrderQueryResponseBody(FlightOrderQueryResponseBody &&) = default ;
    FlightOrderQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderQueryResponseBody() = default ;
    FlightOrderQueryResponseBody& operator=(const FlightOrderQueryResponseBody &) = default ;
    FlightOrderQueryResponseBody& operator=(FlightOrderQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_change_ticket_info_list, flightChangeTicketInfoList_);
        DARABONBA_PTR_TO_JSON(flight_info_list, flightInfoList_);
        DARABONBA_PTR_TO_JSON(flight_refund_ticket_info_list, flightRefundTicketInfoList_);
        DARABONBA_PTR_TO_JSON(flight_ticket_info_list, flightTicketInfoList_);
        DARABONBA_PTR_TO_JSON(insurance_info_list, insuranceInfoList_);
        DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
        DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
        DARABONBA_PTR_TO_JSON(passenger_info_list, passengerInfoList_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_change_ticket_info_list, flightChangeTicketInfoList_);
        DARABONBA_PTR_FROM_JSON(flight_info_list, flightInfoList_);
        DARABONBA_PTR_FROM_JSON(flight_refund_ticket_info_list, flightRefundTicketInfoList_);
        DARABONBA_PTR_FROM_JSON(flight_ticket_info_list, flightTicketInfoList_);
        DARABONBA_PTR_FROM_JSON(insurance_info_list, insuranceInfoList_);
        DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
        DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
        DARABONBA_PTR_FROM_JSON(passenger_info_list, passengerInfoList_);
        DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
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
      class PriceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(pay_type, payType_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(trade_id, tradeId_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        PriceInfoList() = default ;
        PriceInfoList(const PriceInfoList &) = default ;
        PriceInfoList(PriceInfoList &&) = default ;
        PriceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PriceInfoList() = default ;
        PriceInfoList& operator=(const PriceInfoList &) = default ;
        PriceInfoList& operator=(PriceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->gmtCreate_ == nullptr && this->passengerName_ == nullptr && this->payType_ == nullptr && this->price_ == nullptr && this->tradeId_ == nullptr
        && this->type_ == nullptr; };
        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline int32_t getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
        inline PriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline PriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline PriceInfoList& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
        inline PriceInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline double getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0.0) };
        inline PriceInfoList& setPrice(double price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // tradeId Field Functions 
        bool hasTradeId() const { return this->tradeId_ != nullptr;};
        void deleteTradeId() { this->tradeId_ = nullptr;};
        inline string getTradeId() const { DARABONBA_PTR_GET_DEFAULT(tradeId_, "") };
        inline PriceInfoList& setTradeId(string tradeId) { DARABONBA_PTR_SET_VALUE(tradeId_, tradeId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline PriceInfoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> categoryCode_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      class PassengerInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_id, projectId_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
          DARABONBA_PTR_TO_JSON(user_type, userType_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_id, projectId_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
          DARABONBA_PTR_FROM_JSON(user_type, userType_);
        };
        PassengerInfoList() = default ;
        PassengerInfoList(const PassengerInfoList &) = default ;
        PassengerInfoList(PassengerInfoList &&) = default ;
        PassengerInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerInfoList() = default ;
        PassengerInfoList& operator=(const PassengerInfoList &) = default ;
        PassengerInfoList& operator=(PassengerInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->costCenterNumber_ == nullptr && this->projectCode_ == nullptr && this->projectId_ == nullptr && this->projectTitle_ == nullptr
        && this->thirdpartProjectId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->userType_ == nullptr; };
        // costCenterId Field Functions 
        bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
        void deleteCostCenterId() { this->costCenterId_ = nullptr;};
        inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
        inline PassengerInfoList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline PassengerInfoList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // costCenterNumber Field Functions 
        bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
        void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
        inline string getCostCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
        inline PassengerInfoList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline PassengerInfoList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline PassengerInfoList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline PassengerInfoList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


        // thirdpartProjectId Field Functions 
        bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
        void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
        inline string getThirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
        inline PassengerInfoList& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PassengerInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline PassengerInfoList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
        inline PassengerInfoList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        shared_ptr<int64_t> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartProjectId_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
        shared_ptr<int32_t> userType_ {};
      };

      class OrderBaseInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OrderBaseInfo& obj) { 
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_TO_JSON(contact_name, contactName_);
          DARABONBA_PTR_TO_JSON(corp_id, corpId_);
          DARABONBA_PTR_TO_JSON(corp_name, corpName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(depart_name, departName_);
          DARABONBA_PTR_TO_JSON(exceed_apply_id, exceedApplyId_);
          DARABONBA_PTR_TO_JSON(exceed_third_part_apply_id, exceedThirdPartApplyId_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(supplier, supplier_);
          DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
          DARABONBA_PTR_TO_JSON(thirdpart_corp_id, thirdpartCorpId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(trip_type, tripType_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, OrderBaseInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
          DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
          DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(depart_name, departName_);
          DARABONBA_PTR_FROM_JSON(exceed_apply_id, exceedApplyId_);
          DARABONBA_PTR_FROM_JSON(exceed_third_part_apply_id, exceedThirdPartApplyId_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(supplier, supplier_);
          DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_corp_id, thirdpartCorpId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        OrderBaseInfo() = default ;
        OrderBaseInfo(const OrderBaseInfo &) = default ;
        OrderBaseInfo(OrderBaseInfo &&) = default ;
        OrderBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OrderBaseInfo() = default ;
        OrderBaseInfo& operator=(const OrderBaseInfo &) = default ;
        OrderBaseInfo& operator=(OrderBaseInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyId_ == nullptr
        && this->btripTitle_ == nullptr && this->contactName_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr && this->departId_ == nullptr
        && this->departName_ == nullptr && this->exceedApplyId_ == nullptr && this->exceedThirdPartApplyId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr
        && this->itineraryId_ == nullptr && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->supplier_ == nullptr && this->thirdpartApplyId_ == nullptr
        && this->thirdpartBusinessId_ == nullptr && this->thirdpartCorpId_ == nullptr && this->thirdpartItineraryId_ == nullptr && this->tripType_ == nullptr && this->userId_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline OrderBaseInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // btripTitle Field Functions 
        bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
        void deleteBtripTitle() { this->btripTitle_ = nullptr;};
        inline string getBtripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
        inline OrderBaseInfo& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


        // contactName Field Functions 
        bool hasContactName() const { return this->contactName_ != nullptr;};
        void deleteContactName() { this->contactName_ = nullptr;};
        inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
        inline OrderBaseInfo& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline OrderBaseInfo& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // corpName Field Functions 
        bool hasCorpName() const { return this->corpName_ != nullptr;};
        void deleteCorpName() { this->corpName_ = nullptr;};
        inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
        inline OrderBaseInfo& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


        // departId Field Functions 
        bool hasDepartId() const { return this->departId_ != nullptr;};
        void deleteDepartId() { this->departId_ = nullptr;};
        inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
        inline OrderBaseInfo& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


        // departName Field Functions 
        bool hasDepartName() const { return this->departName_ != nullptr;};
        void deleteDepartName() { this->departName_ = nullptr;};
        inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
        inline OrderBaseInfo& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


        // exceedApplyId Field Functions 
        bool hasExceedApplyId() const { return this->exceedApplyId_ != nullptr;};
        void deleteExceedApplyId() { this->exceedApplyId_ = nullptr;};
        inline string getExceedApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedApplyId_, "") };
        inline OrderBaseInfo& setExceedApplyId(string exceedApplyId) { DARABONBA_PTR_SET_VALUE(exceedApplyId_, exceedApplyId) };


        // exceedThirdPartApplyId Field Functions 
        bool hasExceedThirdPartApplyId() const { return this->exceedThirdPartApplyId_ != nullptr;};
        void deleteExceedThirdPartApplyId() { this->exceedThirdPartApplyId_ = nullptr;};
        inline string getExceedThirdPartApplyId() const { DARABONBA_PTR_GET_DEFAULT(exceedThirdPartApplyId_, "") };
        inline OrderBaseInfo& setExceedThirdPartApplyId(string exceedThirdPartApplyId) { DARABONBA_PTR_SET_VALUE(exceedThirdPartApplyId_, exceedThirdPartApplyId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline OrderBaseInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline OrderBaseInfo& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline OrderBaseInfo& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // orderId Field Functions 
        bool hasOrderId() const { return this->orderId_ != nullptr;};
        void deleteOrderId() { this->orderId_ = nullptr;};
        inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
        inline OrderBaseInfo& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline OrderBaseInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // supplier Field Functions 
        bool hasSupplier() const { return this->supplier_ != nullptr;};
        void deleteSupplier() { this->supplier_ = nullptr;};
        inline string getSupplier() const { DARABONBA_PTR_GET_DEFAULT(supplier_, "") };
        inline OrderBaseInfo& setSupplier(string supplier) { DARABONBA_PTR_SET_VALUE(supplier_, supplier) };


        // thirdpartApplyId Field Functions 
        bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
        void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
        inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
        inline OrderBaseInfo& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


        // thirdpartBusinessId Field Functions 
        bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
        void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
        inline string getThirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
        inline OrderBaseInfo& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


        // thirdpartCorpId Field Functions 
        bool hasThirdpartCorpId() const { return this->thirdpartCorpId_ != nullptr;};
        void deleteThirdpartCorpId() { this->thirdpartCorpId_ = nullptr;};
        inline string getThirdpartCorpId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCorpId_, "") };
        inline OrderBaseInfo& setThirdpartCorpId(string thirdpartCorpId) { DARABONBA_PTR_SET_VALUE(thirdpartCorpId_, thirdpartCorpId) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline OrderBaseInfo& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


        // tripType Field Functions 
        bool hasTripType() const { return this->tripType_ != nullptr;};
        void deleteTripType() { this->tripType_ = nullptr;};
        inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
        inline OrderBaseInfo& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline OrderBaseInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> applyId_ {};
        shared_ptr<string> btripTitle_ {};
        shared_ptr<string> contactName_ {};
        shared_ptr<string> corpId_ {};
        shared_ptr<string> corpName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<string> departName_ {};
        shared_ptr<string> exceedApplyId_ {};
        shared_ptr<string> exceedThirdPartApplyId_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModify_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<int32_t> orderStatus_ {};
        shared_ptr<string> supplier_ {};
        shared_ptr<string> thirdpartApplyId_ {};
        shared_ptr<string> thirdpartBusinessId_ {};
        shared_ptr<string> thirdpartCorpId_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
        shared_ptr<int32_t> tripType_ {};
        shared_ptr<string> userId_ {};
      };

      class InvoiceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InvoiceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, InvoiceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(title, title_);
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
        virtual bool empty() const override { return this->id_ == nullptr
        && this->title_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline InvoiceInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline InvoiceInfo& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> title_ {};
      };

      class InsuranceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsuranceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(insurance_no, insuranceNo_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, InsuranceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(insurance_no, insuranceNo_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        InsuranceInfoList() = default ;
        InsuranceInfoList(const InsuranceInfoList &) = default ;
        InsuranceInfoList(InsuranceInfoList &&) = default ;
        InsuranceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsuranceInfoList() = default ;
        InsuranceInfoList& operator=(const InsuranceInfoList &) = default ;
        InsuranceInfoList& operator=(InsuranceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->insuranceNo_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
        inline InsuranceInfoList& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // insuranceNo Field Functions 
        bool hasInsuranceNo() const { return this->insuranceNo_ != nullptr;};
        void deleteInsuranceNo() { this->insuranceNo_ = nullptr;};
        inline string getInsuranceNo() const { DARABONBA_PTR_GET_DEFAULT(insuranceNo_, "") };
        inline InsuranceInfoList& setInsuranceNo(string insuranceNo) { DARABONBA_PTR_SET_VALUE(insuranceNo_, insuranceNo) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InsuranceInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline InsuranceInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline InsuranceInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<double> amount_ {};
        shared_ptr<string> insuranceNo_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> type_ {};
      };

      class FlightTicketInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightTicketInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(build_price, buildPrice_);
          DARABONBA_PTR_TO_JSON(changed, changed_);
          DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(oil_price, oilPrice_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(personal_price, personalPrice_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_TO_JSON(settle_price, settlePrice_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
          DARABONBA_PTR_TO_JSON(ticket_status_code, ticketStatusCode_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, FlightTicketInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(build_price, buildPrice_);
          DARABONBA_PTR_FROM_JSON(changed, changed_);
          DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(oil_price, oilPrice_);
          DARABONBA_PTR_FROM_JSON(pay_type, payType_);
          DARABONBA_PTR_FROM_JSON(personal_price, personalPrice_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_FROM_JSON(settle_price, settlePrice_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
          DARABONBA_PTR_FROM_JSON(ticket_status_code, ticketStatusCode_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        FlightTicketInfoList() = default ;
        FlightTicketInfoList(const FlightTicketInfoList &) = default ;
        FlightTicketInfoList(FlightTicketInfoList &&) = default ;
        FlightTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightTicketInfoList() = default ;
        FlightTicketInfoList& operator=(const FlightTicketInfoList &) = default ;
        FlightTicketInfoList& operator=(FlightTicketInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrAirport_ == nullptr
        && this->arrAirportCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr && this->buildPrice_ == nullptr && this->changed_ == nullptr
        && this->depAirport_ == nullptr && this->depAirportCode_ == nullptr && this->depCity_ == nullptr && this->depCityCode_ == nullptr && this->discount_ == nullptr
        && this->flightNo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr && this->journeyIndex_ == nullptr && this->oilPrice_ == nullptr
        && this->payType_ == nullptr && this->personalPrice_ == nullptr && this->segmentIndex_ == nullptr && this->settlePrice_ == nullptr && this->ticketNo_ == nullptr
        && this->ticketPrice_ == nullptr && this->ticketStatus_ == nullptr && this->ticketStatusCode_ == nullptr && this->userId_ == nullptr; };
        // arrAirport Field Functions 
        bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
        void deleteArrAirport() { this->arrAirport_ = nullptr;};
        inline string getArrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
        inline FlightTicketInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline FlightTicketInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline FlightTicketInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightTicketInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // buildPrice Field Functions 
        bool hasBuildPrice() const { return this->buildPrice_ != nullptr;};
        void deleteBuildPrice() { this->buildPrice_ = nullptr;};
        inline double getBuildPrice() const { DARABONBA_PTR_GET_DEFAULT(buildPrice_, 0.0) };
        inline FlightTicketInfoList& setBuildPrice(double buildPrice) { DARABONBA_PTR_SET_VALUE(buildPrice_, buildPrice) };


        // changed Field Functions 
        bool hasChanged() const { return this->changed_ != nullptr;};
        void deleteChanged() { this->changed_ = nullptr;};
        inline bool getChanged() const { DARABONBA_PTR_GET_DEFAULT(changed_, false) };
        inline FlightTicketInfoList& setChanged(bool changed) { DARABONBA_PTR_SET_VALUE(changed_, changed) };


        // depAirport Field Functions 
        bool hasDepAirport() const { return this->depAirport_ != nullptr;};
        void deleteDepAirport() { this->depAirport_ = nullptr;};
        inline string getDepAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
        inline FlightTicketInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline FlightTicketInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline FlightTicketInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightTicketInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline int32_t getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, 0) };
        inline FlightTicketInfoList& setDiscount(int32_t discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightTicketInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline FlightTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline FlightTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline FlightTicketInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // oilPrice Field Functions 
        bool hasOilPrice() const { return this->oilPrice_ != nullptr;};
        void deleteOilPrice() { this->oilPrice_ = nullptr;};
        inline double getOilPrice() const { DARABONBA_PTR_GET_DEFAULT(oilPrice_, 0.0) };
        inline FlightTicketInfoList& setOilPrice(double oilPrice) { DARABONBA_PTR_SET_VALUE(oilPrice_, oilPrice) };


        // payType Field Functions 
        bool hasPayType() const { return this->payType_ != nullptr;};
        void deletePayType() { this->payType_ = nullptr;};
        inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
        inline FlightTicketInfoList& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


        // personalPrice Field Functions 
        bool hasPersonalPrice() const { return this->personalPrice_ != nullptr;};
        void deletePersonalPrice() { this->personalPrice_ = nullptr;};
        inline double getPersonalPrice() const { DARABONBA_PTR_GET_DEFAULT(personalPrice_, 0.0) };
        inline FlightTicketInfoList& setPersonalPrice(double personalPrice) { DARABONBA_PTR_SET_VALUE(personalPrice_, personalPrice) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline FlightTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        // settlePrice Field Functions 
        bool hasSettlePrice() const { return this->settlePrice_ != nullptr;};
        void deleteSettlePrice() { this->settlePrice_ = nullptr;};
        inline double getSettlePrice() const { DARABONBA_PTR_GET_DEFAULT(settlePrice_, 0.0) };
        inline FlightTicketInfoList& setSettlePrice(double settlePrice) { DARABONBA_PTR_SET_VALUE(settlePrice_, settlePrice) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline FlightTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline double getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0.0) };
        inline FlightTicketInfoList& setTicketPrice(double ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // ticketStatus Field Functions 
        bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
        void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
        inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
        inline FlightTicketInfoList& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


        // ticketStatusCode Field Functions 
        bool hasTicketStatusCode() const { return this->ticketStatusCode_ != nullptr;};
        void deleteTicketStatusCode() { this->ticketStatusCode_ = nullptr;};
        inline int32_t getTicketStatusCode() const { DARABONBA_PTR_GET_DEFAULT(ticketStatusCode_, 0) };
        inline FlightTicketInfoList& setTicketStatusCode(int32_t ticketStatusCode) { DARABONBA_PTR_SET_VALUE(ticketStatusCode_, ticketStatusCode) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline FlightTicketInfoList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> arrAirport_ {};
        shared_ptr<string> arrAirportCode_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<double> buildPrice_ {};
        shared_ptr<bool> changed_ {};
        shared_ptr<string> depAirport_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<int32_t> discount_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModify_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<double> oilPrice_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> personalPrice_ {};
        shared_ptr<int32_t> segmentIndex_ {};
        shared_ptr<double> settlePrice_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<double> ticketPrice_ {};
        shared_ptr<string> ticketStatus_ {};
        shared_ptr<int32_t> ticketStatusCode_ {};
        shared_ptr<string> userId_ {};
      };

      class FlightRefundTicketInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightRefundTicketInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(company_refund_ticket_fee, companyRefundTicketFee_);
          DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
          DARABONBA_PTR_TO_JSON(personal_refund_ticket_fee, personalRefundTicketFee_);
          DARABONBA_PTR_TO_JSON(refund_order_id, refundOrderId_);
          DARABONBA_PTR_TO_JSON(refund_reason, refundReason_);
          DARABONBA_PTR_TO_JSON(refund_ticket_fee, refundTicketFee_);
          DARABONBA_PTR_TO_JSON(refund_type, refundType_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
        };
        friend void from_json(const Darabonba::Json& j, FlightRefundTicketInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(company_refund_ticket_fee, companyRefundTicketFee_);
          DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
          DARABONBA_PTR_FROM_JSON(personal_refund_ticket_fee, personalRefundTicketFee_);
          DARABONBA_PTR_FROM_JSON(refund_order_id, refundOrderId_);
          DARABONBA_PTR_FROM_JSON(refund_reason, refundReason_);
          DARABONBA_PTR_FROM_JSON(refund_ticket_fee, refundTicketFee_);
          DARABONBA_PTR_FROM_JSON(refund_type, refundType_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
        };
        FlightRefundTicketInfoList() = default ;
        FlightRefundTicketInfoList(const FlightRefundTicketInfoList &) = default ;
        FlightRefundTicketInfoList(FlightRefundTicketInfoList &&) = default ;
        FlightRefundTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightRefundTicketInfoList() = default ;
        FlightRefundTicketInfoList& operator=(const FlightRefundTicketInfoList &) = default ;
        FlightRefundTicketInfoList& operator=(FlightRefundTicketInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyId_ == nullptr
        && this->arrAirport_ == nullptr && this->arrAirportCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr && this->companyRefundTicketFee_ == nullptr
        && this->depAirport_ == nullptr && this->depAirportCode_ == nullptr && this->depCity_ == nullptr && this->depCityCode_ == nullptr && this->flightNo_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr && this->journeyIndex_ == nullptr && this->outApplyId_ == nullptr && this->personalRefundTicketFee_ == nullptr
        && this->refundOrderId_ == nullptr && this->refundReason_ == nullptr && this->refundTicketFee_ == nullptr && this->refundType_ == nullptr && this->segmentIndex_ == nullptr
        && this->ticketNo_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline FlightRefundTicketInfoList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // arrAirport Field Functions 
        bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
        void deleteArrAirport() { this->arrAirport_ = nullptr;};
        inline string getArrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
        inline FlightRefundTicketInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline FlightRefundTicketInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline FlightRefundTicketInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightRefundTicketInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // companyRefundTicketFee Field Functions 
        bool hasCompanyRefundTicketFee() const { return this->companyRefundTicketFee_ != nullptr;};
        void deleteCompanyRefundTicketFee() { this->companyRefundTicketFee_ = nullptr;};
        inline double getCompanyRefundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(companyRefundTicketFee_, 0.0) };
        inline FlightRefundTicketInfoList& setCompanyRefundTicketFee(double companyRefundTicketFee) { DARABONBA_PTR_SET_VALUE(companyRefundTicketFee_, companyRefundTicketFee) };


        // depAirport Field Functions 
        bool hasDepAirport() const { return this->depAirport_ != nullptr;};
        void deleteDepAirport() { this->depAirport_ = nullptr;};
        inline string getDepAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
        inline FlightRefundTicketInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline FlightRefundTicketInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline FlightRefundTicketInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightRefundTicketInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightRefundTicketInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline FlightRefundTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline FlightRefundTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline FlightRefundTicketInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // outApplyId Field Functions 
        bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
        void deleteOutApplyId() { this->outApplyId_ = nullptr;};
        inline string getOutApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
        inline FlightRefundTicketInfoList& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


        // personalRefundTicketFee Field Functions 
        bool hasPersonalRefundTicketFee() const { return this->personalRefundTicketFee_ != nullptr;};
        void deletePersonalRefundTicketFee() { this->personalRefundTicketFee_ = nullptr;};
        inline double getPersonalRefundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(personalRefundTicketFee_, 0.0) };
        inline FlightRefundTicketInfoList& setPersonalRefundTicketFee(double personalRefundTicketFee) { DARABONBA_PTR_SET_VALUE(personalRefundTicketFee_, personalRefundTicketFee) };


        // refundOrderId Field Functions 
        bool hasRefundOrderId() const { return this->refundOrderId_ != nullptr;};
        void deleteRefundOrderId() { this->refundOrderId_ = nullptr;};
        inline int64_t getRefundOrderId() const { DARABONBA_PTR_GET_DEFAULT(refundOrderId_, 0L) };
        inline FlightRefundTicketInfoList& setRefundOrderId(int64_t refundOrderId) { DARABONBA_PTR_SET_VALUE(refundOrderId_, refundOrderId) };


        // refundReason Field Functions 
        bool hasRefundReason() const { return this->refundReason_ != nullptr;};
        void deleteRefundReason() { this->refundReason_ = nullptr;};
        inline string getRefundReason() const { DARABONBA_PTR_GET_DEFAULT(refundReason_, "") };
        inline FlightRefundTicketInfoList& setRefundReason(string refundReason) { DARABONBA_PTR_SET_VALUE(refundReason_, refundReason) };


        // refundTicketFee Field Functions 
        bool hasRefundTicketFee() const { return this->refundTicketFee_ != nullptr;};
        void deleteRefundTicketFee() { this->refundTicketFee_ = nullptr;};
        inline double getRefundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(refundTicketFee_, 0.0) };
        inline FlightRefundTicketInfoList& setRefundTicketFee(double refundTicketFee) { DARABONBA_PTR_SET_VALUE(refundTicketFee_, refundTicketFee) };


        // refundType Field Functions 
        bool hasRefundType() const { return this->refundType_ != nullptr;};
        void deleteRefundType() { this->refundType_ = nullptr;};
        inline int32_t getRefundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
        inline FlightRefundTicketInfoList& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline FlightRefundTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline FlightRefundTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


      protected:
        shared_ptr<string> applyId_ {};
        shared_ptr<string> arrAirport_ {};
        shared_ptr<string> arrAirportCode_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<double> companyRefundTicketFee_ {};
        shared_ptr<string> depAirport_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModify_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<string> outApplyId_ {};
        shared_ptr<double> personalRefundTicketFee_ {};
        shared_ptr<int64_t> refundOrderId_ {};
        shared_ptr<string> refundReason_ {};
        shared_ptr<double> refundTicketFee_ {};
        shared_ptr<int32_t> refundType_ {};
        shared_ptr<int32_t> segmentIndex_ {};
        shared_ptr<string> ticketNo_ {};
      };

      class FlightInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_TO_JSON(airline_name, airlineName_);
          DARABONBA_PTR_TO_JSON(arr_airport_city_county, arrAirportCityCounty_);
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_TO_JSON(arr_city_ad_code, arrCityAdCode_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_level, cabinLevel_);
          DARABONBA_PTR_TO_JSON(dep_airport_city_county, depAirportCityCounty_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_TO_JSON(dep_city_ad_code, depCityAdCode_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(flight_mile, flightMile_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          DARABONBA_PTR_TO_JSON(stop_city_info_list, stopCityInfoList_);
        };
        friend void from_json(const Darabonba::Json& j, FlightInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(airline_code, airlineCode_);
          DARABONBA_PTR_FROM_JSON(airline_name, airlineName_);
          DARABONBA_PTR_FROM_JSON(arr_airport_city_county, arrAirportCityCounty_);
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_FROM_JSON(arr_city_ad_code, arrCityAdCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_terminal, arrTerminal_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_level, cabinLevel_);
          DARABONBA_PTR_FROM_JSON(dep_airport_city_county, depAirportCityCounty_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_FROM_JSON(dep_city_ad_code, depCityAdCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_terminal, depTerminal_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(flight_mile, flightMile_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          DARABONBA_PTR_FROM_JSON(stop_city_info_list, stopCityInfoList_);
        };
        FlightInfoList() = default ;
        FlightInfoList(const FlightInfoList &) = default ;
        FlightInfoList(FlightInfoList &&) = default ;
        FlightInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightInfoList() = default ;
        FlightInfoList& operator=(const FlightInfoList &) = default ;
        FlightInfoList& operator=(FlightInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StopCityInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StopCityInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(stop_airport_city_county, stopAirportCityCounty_);
            DARABONBA_PTR_TO_JSON(stop_airport_code, stopAirportCode_);
          };
          friend void from_json(const Darabonba::Json& j, StopCityInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(stop_airport_city_county, stopAirportCityCounty_);
            DARABONBA_PTR_FROM_JSON(stop_airport_code, stopAirportCode_);
          };
          StopCityInfoList() = default ;
          StopCityInfoList(const StopCityInfoList &) = default ;
          StopCityInfoList(StopCityInfoList &&) = default ;
          StopCityInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StopCityInfoList() = default ;
          StopCityInfoList& operator=(const StopCityInfoList &) = default ;
          StopCityInfoList& operator=(StopCityInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class StopAirportCityCounty : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const StopAirportCityCounty& obj) { 
              DARABONBA_PTR_TO_JSON(adcode, adcode_);
              DARABONBA_PTR_TO_JSON(airport_city_code, airportCityCode_);
              DARABONBA_PTR_TO_JSON(airport_city_name, airportCityName_);
              DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
              DARABONBA_PTR_TO_JSON(airport_name, airportName_);
              DARABONBA_PTR_TO_JSON(airport_parent_city_name, airportParentCityName_);
              DARABONBA_PTR_TO_JSON(county_city_adcode, countyCityAdcode_);
              DARABONBA_PTR_TO_JSON(county_city_name, countyCityName_);
              DARABONBA_PTR_TO_JSON(prefecture_city_adcode, prefectureCityAdcode_);
              DARABONBA_PTR_TO_JSON(prefecture_city_name, prefectureCityName_);
            };
            friend void from_json(const Darabonba::Json& j, StopAirportCityCounty& obj) { 
              DARABONBA_PTR_FROM_JSON(adcode, adcode_);
              DARABONBA_PTR_FROM_JSON(airport_city_code, airportCityCode_);
              DARABONBA_PTR_FROM_JSON(airport_city_name, airportCityName_);
              DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
              DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
              DARABONBA_PTR_FROM_JSON(airport_parent_city_name, airportParentCityName_);
              DARABONBA_PTR_FROM_JSON(county_city_adcode, countyCityAdcode_);
              DARABONBA_PTR_FROM_JSON(county_city_name, countyCityName_);
              DARABONBA_PTR_FROM_JSON(prefecture_city_adcode, prefectureCityAdcode_);
              DARABONBA_PTR_FROM_JSON(prefecture_city_name, prefectureCityName_);
            };
            StopAirportCityCounty() = default ;
            StopAirportCityCounty(const StopAirportCityCounty &) = default ;
            StopAirportCityCounty(StopAirportCityCounty &&) = default ;
            StopAirportCityCounty(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~StopAirportCityCounty() = default ;
            StopAirportCityCounty& operator=(const StopAirportCityCounty &) = default ;
            StopAirportCityCounty& operator=(StopAirportCityCounty &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->adcode_ == nullptr
        && this->airportCityCode_ == nullptr && this->airportCityName_ == nullptr && this->airportCode_ == nullptr && this->airportName_ == nullptr && this->airportParentCityName_ == nullptr
        && this->countyCityAdcode_ == nullptr && this->countyCityName_ == nullptr && this->prefectureCityAdcode_ == nullptr && this->prefectureCityName_ == nullptr; };
            // adcode Field Functions 
            bool hasAdcode() const { return this->adcode_ != nullptr;};
            void deleteAdcode() { this->adcode_ = nullptr;};
            inline string getAdcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
            inline StopAirportCityCounty& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


            // airportCityCode Field Functions 
            bool hasAirportCityCode() const { return this->airportCityCode_ != nullptr;};
            void deleteAirportCityCode() { this->airportCityCode_ = nullptr;};
            inline string getAirportCityCode() const { DARABONBA_PTR_GET_DEFAULT(airportCityCode_, "") };
            inline StopAirportCityCounty& setAirportCityCode(string airportCityCode) { DARABONBA_PTR_SET_VALUE(airportCityCode_, airportCityCode) };


            // airportCityName Field Functions 
            bool hasAirportCityName() const { return this->airportCityName_ != nullptr;};
            void deleteAirportCityName() { this->airportCityName_ = nullptr;};
            inline string getAirportCityName() const { DARABONBA_PTR_GET_DEFAULT(airportCityName_, "") };
            inline StopAirportCityCounty& setAirportCityName(string airportCityName) { DARABONBA_PTR_SET_VALUE(airportCityName_, airportCityName) };


            // airportCode Field Functions 
            bool hasAirportCode() const { return this->airportCode_ != nullptr;};
            void deleteAirportCode() { this->airportCode_ = nullptr;};
            inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
            inline StopAirportCityCounty& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


            // airportName Field Functions 
            bool hasAirportName() const { return this->airportName_ != nullptr;};
            void deleteAirportName() { this->airportName_ = nullptr;};
            inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
            inline StopAirportCityCounty& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


            // airportParentCityName Field Functions 
            bool hasAirportParentCityName() const { return this->airportParentCityName_ != nullptr;};
            void deleteAirportParentCityName() { this->airportParentCityName_ = nullptr;};
            inline string getAirportParentCityName() const { DARABONBA_PTR_GET_DEFAULT(airportParentCityName_, "") };
            inline StopAirportCityCounty& setAirportParentCityName(string airportParentCityName) { DARABONBA_PTR_SET_VALUE(airportParentCityName_, airportParentCityName) };


            // countyCityAdcode Field Functions 
            bool hasCountyCityAdcode() const { return this->countyCityAdcode_ != nullptr;};
            void deleteCountyCityAdcode() { this->countyCityAdcode_ = nullptr;};
            inline string getCountyCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(countyCityAdcode_, "") };
            inline StopAirportCityCounty& setCountyCityAdcode(string countyCityAdcode) { DARABONBA_PTR_SET_VALUE(countyCityAdcode_, countyCityAdcode) };


            // countyCityName Field Functions 
            bool hasCountyCityName() const { return this->countyCityName_ != nullptr;};
            void deleteCountyCityName() { this->countyCityName_ = nullptr;};
            inline string getCountyCityName() const { DARABONBA_PTR_GET_DEFAULT(countyCityName_, "") };
            inline StopAirportCityCounty& setCountyCityName(string countyCityName) { DARABONBA_PTR_SET_VALUE(countyCityName_, countyCityName) };


            // prefectureCityAdcode Field Functions 
            bool hasPrefectureCityAdcode() const { return this->prefectureCityAdcode_ != nullptr;};
            void deletePrefectureCityAdcode() { this->prefectureCityAdcode_ = nullptr;};
            inline string getPrefectureCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityAdcode_, "") };
            inline StopAirportCityCounty& setPrefectureCityAdcode(string prefectureCityAdcode) { DARABONBA_PTR_SET_VALUE(prefectureCityAdcode_, prefectureCityAdcode) };


            // prefectureCityName Field Functions 
            bool hasPrefectureCityName() const { return this->prefectureCityName_ != nullptr;};
            void deletePrefectureCityName() { this->prefectureCityName_ = nullptr;};
            inline string getPrefectureCityName() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityName_, "") };
            inline StopAirportCityCounty& setPrefectureCityName(string prefectureCityName) { DARABONBA_PTR_SET_VALUE(prefectureCityName_, prefectureCityName) };


          protected:
            shared_ptr<string> adcode_ {};
            shared_ptr<string> airportCityCode_ {};
            shared_ptr<string> airportCityName_ {};
            shared_ptr<string> airportCode_ {};
            shared_ptr<string> airportName_ {};
            shared_ptr<string> airportParentCityName_ {};
            shared_ptr<string> countyCityAdcode_ {};
            shared_ptr<string> countyCityName_ {};
            shared_ptr<string> prefectureCityAdcode_ {};
            shared_ptr<string> prefectureCityName_ {};
          };

          virtual bool empty() const override { return this->stopAirportCityCounty_ == nullptr
        && this->stopAirportCode_ == nullptr; };
          // stopAirportCityCounty Field Functions 
          bool hasStopAirportCityCounty() const { return this->stopAirportCityCounty_ != nullptr;};
          void deleteStopAirportCityCounty() { this->stopAirportCityCounty_ = nullptr;};
          inline const StopCityInfoList::StopAirportCityCounty & getStopAirportCityCounty() const { DARABONBA_PTR_GET_CONST(stopAirportCityCounty_, StopCityInfoList::StopAirportCityCounty) };
          inline StopCityInfoList::StopAirportCityCounty getStopAirportCityCounty() { DARABONBA_PTR_GET(stopAirportCityCounty_, StopCityInfoList::StopAirportCityCounty) };
          inline StopCityInfoList& setStopAirportCityCounty(const StopCityInfoList::StopAirportCityCounty & stopAirportCityCounty) { DARABONBA_PTR_SET_VALUE(stopAirportCityCounty_, stopAirportCityCounty) };
          inline StopCityInfoList& setStopAirportCityCounty(StopCityInfoList::StopAirportCityCounty && stopAirportCityCounty) { DARABONBA_PTR_SET_RVALUE(stopAirportCityCounty_, stopAirportCityCounty) };


          // stopAirportCode Field Functions 
          bool hasStopAirportCode() const { return this->stopAirportCode_ != nullptr;};
          void deleteStopAirportCode() { this->stopAirportCode_ = nullptr;};
          inline string getStopAirportCode() const { DARABONBA_PTR_GET_DEFAULT(stopAirportCode_, "") };
          inline StopCityInfoList& setStopAirportCode(string stopAirportCode) { DARABONBA_PTR_SET_VALUE(stopAirportCode_, stopAirportCode) };


        protected:
          shared_ptr<StopCityInfoList::StopAirportCityCounty> stopAirportCityCounty_ {};
          shared_ptr<string> stopAirportCode_ {};
        };

        class DepAirportCityCounty : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DepAirportCityCounty& obj) { 
            DARABONBA_PTR_TO_JSON(adcode, adcode_);
            DARABONBA_PTR_TO_JSON(airport_city_code, airportCityCode_);
            DARABONBA_PTR_TO_JSON(airport_city_name, airportCityName_);
            DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
            DARABONBA_PTR_TO_JSON(airport_name, airportName_);
            DARABONBA_PTR_TO_JSON(airport_parent_city_name, airportParentCityName_);
            DARABONBA_PTR_TO_JSON(county_city_adcode, countyCityAdcode_);
            DARABONBA_PTR_TO_JSON(county_city_name, countyCityName_);
            DARABONBA_PTR_TO_JSON(prefecture_city_adcode, prefectureCityAdcode_);
            DARABONBA_PTR_TO_JSON(prefecture_city_name, prefectureCityName_);
          };
          friend void from_json(const Darabonba::Json& j, DepAirportCityCounty& obj) { 
            DARABONBA_PTR_FROM_JSON(adcode, adcode_);
            DARABONBA_PTR_FROM_JSON(airport_city_code, airportCityCode_);
            DARABONBA_PTR_FROM_JSON(airport_city_name, airportCityName_);
            DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
            DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
            DARABONBA_PTR_FROM_JSON(airport_parent_city_name, airportParentCityName_);
            DARABONBA_PTR_FROM_JSON(county_city_adcode, countyCityAdcode_);
            DARABONBA_PTR_FROM_JSON(county_city_name, countyCityName_);
            DARABONBA_PTR_FROM_JSON(prefecture_city_adcode, prefectureCityAdcode_);
            DARABONBA_PTR_FROM_JSON(prefecture_city_name, prefectureCityName_);
          };
          DepAirportCityCounty() = default ;
          DepAirportCityCounty(const DepAirportCityCounty &) = default ;
          DepAirportCityCounty(DepAirportCityCounty &&) = default ;
          DepAirportCityCounty(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DepAirportCityCounty() = default ;
          DepAirportCityCounty& operator=(const DepAirportCityCounty &) = default ;
          DepAirportCityCounty& operator=(DepAirportCityCounty &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adcode_ == nullptr
        && this->airportCityCode_ == nullptr && this->airportCityName_ == nullptr && this->airportCode_ == nullptr && this->airportName_ == nullptr && this->airportParentCityName_ == nullptr
        && this->countyCityAdcode_ == nullptr && this->countyCityName_ == nullptr && this->prefectureCityAdcode_ == nullptr && this->prefectureCityName_ == nullptr; };
          // adcode Field Functions 
          bool hasAdcode() const { return this->adcode_ != nullptr;};
          void deleteAdcode() { this->adcode_ = nullptr;};
          inline string getAdcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
          inline DepAirportCityCounty& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


          // airportCityCode Field Functions 
          bool hasAirportCityCode() const { return this->airportCityCode_ != nullptr;};
          void deleteAirportCityCode() { this->airportCityCode_ = nullptr;};
          inline string getAirportCityCode() const { DARABONBA_PTR_GET_DEFAULT(airportCityCode_, "") };
          inline DepAirportCityCounty& setAirportCityCode(string airportCityCode) { DARABONBA_PTR_SET_VALUE(airportCityCode_, airportCityCode) };


          // airportCityName Field Functions 
          bool hasAirportCityName() const { return this->airportCityName_ != nullptr;};
          void deleteAirportCityName() { this->airportCityName_ = nullptr;};
          inline string getAirportCityName() const { DARABONBA_PTR_GET_DEFAULT(airportCityName_, "") };
          inline DepAirportCityCounty& setAirportCityName(string airportCityName) { DARABONBA_PTR_SET_VALUE(airportCityName_, airportCityName) };


          // airportCode Field Functions 
          bool hasAirportCode() const { return this->airportCode_ != nullptr;};
          void deleteAirportCode() { this->airportCode_ = nullptr;};
          inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
          inline DepAirportCityCounty& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


          // airportName Field Functions 
          bool hasAirportName() const { return this->airportName_ != nullptr;};
          void deleteAirportName() { this->airportName_ = nullptr;};
          inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
          inline DepAirportCityCounty& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


          // airportParentCityName Field Functions 
          bool hasAirportParentCityName() const { return this->airportParentCityName_ != nullptr;};
          void deleteAirportParentCityName() { this->airportParentCityName_ = nullptr;};
          inline string getAirportParentCityName() const { DARABONBA_PTR_GET_DEFAULT(airportParentCityName_, "") };
          inline DepAirportCityCounty& setAirportParentCityName(string airportParentCityName) { DARABONBA_PTR_SET_VALUE(airportParentCityName_, airportParentCityName) };


          // countyCityAdcode Field Functions 
          bool hasCountyCityAdcode() const { return this->countyCityAdcode_ != nullptr;};
          void deleteCountyCityAdcode() { this->countyCityAdcode_ = nullptr;};
          inline string getCountyCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(countyCityAdcode_, "") };
          inline DepAirportCityCounty& setCountyCityAdcode(string countyCityAdcode) { DARABONBA_PTR_SET_VALUE(countyCityAdcode_, countyCityAdcode) };


          // countyCityName Field Functions 
          bool hasCountyCityName() const { return this->countyCityName_ != nullptr;};
          void deleteCountyCityName() { this->countyCityName_ = nullptr;};
          inline string getCountyCityName() const { DARABONBA_PTR_GET_DEFAULT(countyCityName_, "") };
          inline DepAirportCityCounty& setCountyCityName(string countyCityName) { DARABONBA_PTR_SET_VALUE(countyCityName_, countyCityName) };


          // prefectureCityAdcode Field Functions 
          bool hasPrefectureCityAdcode() const { return this->prefectureCityAdcode_ != nullptr;};
          void deletePrefectureCityAdcode() { this->prefectureCityAdcode_ = nullptr;};
          inline string getPrefectureCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityAdcode_, "") };
          inline DepAirportCityCounty& setPrefectureCityAdcode(string prefectureCityAdcode) { DARABONBA_PTR_SET_VALUE(prefectureCityAdcode_, prefectureCityAdcode) };


          // prefectureCityName Field Functions 
          bool hasPrefectureCityName() const { return this->prefectureCityName_ != nullptr;};
          void deletePrefectureCityName() { this->prefectureCityName_ = nullptr;};
          inline string getPrefectureCityName() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityName_, "") };
          inline DepAirportCityCounty& setPrefectureCityName(string prefectureCityName) { DARABONBA_PTR_SET_VALUE(prefectureCityName_, prefectureCityName) };


        protected:
          shared_ptr<string> adcode_ {};
          shared_ptr<string> airportCityCode_ {};
          shared_ptr<string> airportCityName_ {};
          shared_ptr<string> airportCode_ {};
          shared_ptr<string> airportName_ {};
          shared_ptr<string> airportParentCityName_ {};
          shared_ptr<string> countyCityAdcode_ {};
          shared_ptr<string> countyCityName_ {};
          shared_ptr<string> prefectureCityAdcode_ {};
          shared_ptr<string> prefectureCityName_ {};
        };

        class ArrAirportCityCounty : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ArrAirportCityCounty& obj) { 
            DARABONBA_PTR_TO_JSON(adcode, adcode_);
            DARABONBA_PTR_TO_JSON(airport_city_code, airportCityCode_);
            DARABONBA_PTR_TO_JSON(airport_city_name, airportCityName_);
            DARABONBA_PTR_TO_JSON(airport_code, airportCode_);
            DARABONBA_PTR_TO_JSON(airport_name, airportName_);
            DARABONBA_PTR_TO_JSON(airport_parent_city_name, airportParentCityName_);
            DARABONBA_PTR_TO_JSON(county_city_adcode, countyCityAdcode_);
            DARABONBA_PTR_TO_JSON(county_city_name, countyCityName_);
            DARABONBA_PTR_TO_JSON(prefecture_city_adcode, prefectureCityAdcode_);
            DARABONBA_PTR_TO_JSON(prefecture_city_name, prefectureCityName_);
          };
          friend void from_json(const Darabonba::Json& j, ArrAirportCityCounty& obj) { 
            DARABONBA_PTR_FROM_JSON(adcode, adcode_);
            DARABONBA_PTR_FROM_JSON(airport_city_code, airportCityCode_);
            DARABONBA_PTR_FROM_JSON(airport_city_name, airportCityName_);
            DARABONBA_PTR_FROM_JSON(airport_code, airportCode_);
            DARABONBA_PTR_FROM_JSON(airport_name, airportName_);
            DARABONBA_PTR_FROM_JSON(airport_parent_city_name, airportParentCityName_);
            DARABONBA_PTR_FROM_JSON(county_city_adcode, countyCityAdcode_);
            DARABONBA_PTR_FROM_JSON(county_city_name, countyCityName_);
            DARABONBA_PTR_FROM_JSON(prefecture_city_adcode, prefectureCityAdcode_);
            DARABONBA_PTR_FROM_JSON(prefecture_city_name, prefectureCityName_);
          };
          ArrAirportCityCounty() = default ;
          ArrAirportCityCounty(const ArrAirportCityCounty &) = default ;
          ArrAirportCityCounty(ArrAirportCityCounty &&) = default ;
          ArrAirportCityCounty(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ArrAirportCityCounty() = default ;
          ArrAirportCityCounty& operator=(const ArrAirportCityCounty &) = default ;
          ArrAirportCityCounty& operator=(ArrAirportCityCounty &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adcode_ == nullptr
        && this->airportCityCode_ == nullptr && this->airportCityName_ == nullptr && this->airportCode_ == nullptr && this->airportName_ == nullptr && this->airportParentCityName_ == nullptr
        && this->countyCityAdcode_ == nullptr && this->countyCityName_ == nullptr && this->prefectureCityAdcode_ == nullptr && this->prefectureCityName_ == nullptr; };
          // adcode Field Functions 
          bool hasAdcode() const { return this->adcode_ != nullptr;};
          void deleteAdcode() { this->adcode_ = nullptr;};
          inline string getAdcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
          inline ArrAirportCityCounty& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


          // airportCityCode Field Functions 
          bool hasAirportCityCode() const { return this->airportCityCode_ != nullptr;};
          void deleteAirportCityCode() { this->airportCityCode_ = nullptr;};
          inline string getAirportCityCode() const { DARABONBA_PTR_GET_DEFAULT(airportCityCode_, "") };
          inline ArrAirportCityCounty& setAirportCityCode(string airportCityCode) { DARABONBA_PTR_SET_VALUE(airportCityCode_, airportCityCode) };


          // airportCityName Field Functions 
          bool hasAirportCityName() const { return this->airportCityName_ != nullptr;};
          void deleteAirportCityName() { this->airportCityName_ = nullptr;};
          inline string getAirportCityName() const { DARABONBA_PTR_GET_DEFAULT(airportCityName_, "") };
          inline ArrAirportCityCounty& setAirportCityName(string airportCityName) { DARABONBA_PTR_SET_VALUE(airportCityName_, airportCityName) };


          // airportCode Field Functions 
          bool hasAirportCode() const { return this->airportCode_ != nullptr;};
          void deleteAirportCode() { this->airportCode_ = nullptr;};
          inline string getAirportCode() const { DARABONBA_PTR_GET_DEFAULT(airportCode_, "") };
          inline ArrAirportCityCounty& setAirportCode(string airportCode) { DARABONBA_PTR_SET_VALUE(airportCode_, airportCode) };


          // airportName Field Functions 
          bool hasAirportName() const { return this->airportName_ != nullptr;};
          void deleteAirportName() { this->airportName_ = nullptr;};
          inline string getAirportName() const { DARABONBA_PTR_GET_DEFAULT(airportName_, "") };
          inline ArrAirportCityCounty& setAirportName(string airportName) { DARABONBA_PTR_SET_VALUE(airportName_, airportName) };


          // airportParentCityName Field Functions 
          bool hasAirportParentCityName() const { return this->airportParentCityName_ != nullptr;};
          void deleteAirportParentCityName() { this->airportParentCityName_ = nullptr;};
          inline string getAirportParentCityName() const { DARABONBA_PTR_GET_DEFAULT(airportParentCityName_, "") };
          inline ArrAirportCityCounty& setAirportParentCityName(string airportParentCityName) { DARABONBA_PTR_SET_VALUE(airportParentCityName_, airportParentCityName) };


          // countyCityAdcode Field Functions 
          bool hasCountyCityAdcode() const { return this->countyCityAdcode_ != nullptr;};
          void deleteCountyCityAdcode() { this->countyCityAdcode_ = nullptr;};
          inline string getCountyCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(countyCityAdcode_, "") };
          inline ArrAirportCityCounty& setCountyCityAdcode(string countyCityAdcode) { DARABONBA_PTR_SET_VALUE(countyCityAdcode_, countyCityAdcode) };


          // countyCityName Field Functions 
          bool hasCountyCityName() const { return this->countyCityName_ != nullptr;};
          void deleteCountyCityName() { this->countyCityName_ = nullptr;};
          inline string getCountyCityName() const { DARABONBA_PTR_GET_DEFAULT(countyCityName_, "") };
          inline ArrAirportCityCounty& setCountyCityName(string countyCityName) { DARABONBA_PTR_SET_VALUE(countyCityName_, countyCityName) };


          // prefectureCityAdcode Field Functions 
          bool hasPrefectureCityAdcode() const { return this->prefectureCityAdcode_ != nullptr;};
          void deletePrefectureCityAdcode() { this->prefectureCityAdcode_ = nullptr;};
          inline string getPrefectureCityAdcode() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityAdcode_, "") };
          inline ArrAirportCityCounty& setPrefectureCityAdcode(string prefectureCityAdcode) { DARABONBA_PTR_SET_VALUE(prefectureCityAdcode_, prefectureCityAdcode) };


          // prefectureCityName Field Functions 
          bool hasPrefectureCityName() const { return this->prefectureCityName_ != nullptr;};
          void deletePrefectureCityName() { this->prefectureCityName_ = nullptr;};
          inline string getPrefectureCityName() const { DARABONBA_PTR_GET_DEFAULT(prefectureCityName_, "") };
          inline ArrAirportCityCounty& setPrefectureCityName(string prefectureCityName) { DARABONBA_PTR_SET_VALUE(prefectureCityName_, prefectureCityName) };


        protected:
          shared_ptr<string> adcode_ {};
          shared_ptr<string> airportCityCode_ {};
          shared_ptr<string> airportCityName_ {};
          shared_ptr<string> airportCode_ {};
          shared_ptr<string> airportName_ {};
          shared_ptr<string> airportParentCityName_ {};
          shared_ptr<string> countyCityAdcode_ {};
          shared_ptr<string> countyCityName_ {};
          shared_ptr<string> prefectureCityAdcode_ {};
          shared_ptr<string> prefectureCityName_ {};
        };

        virtual bool empty() const override { return this->airlineCode_ == nullptr
        && this->airlineName_ == nullptr && this->arrAirportCityCounty_ == nullptr && this->arrAirportCode_ == nullptr && this->arrAirportName_ == nullptr && this->arrCityAdCode_ == nullptr
        && this->arrCityCode_ == nullptr && this->arrCityName_ == nullptr && this->arrTerminal_ == nullptr && this->arrTime_ == nullptr && this->cabin_ == nullptr
        && this->cabinLevel_ == nullptr && this->depAirportCityCounty_ == nullptr && this->depAirportCode_ == nullptr && this->depAirportName_ == nullptr && this->depCityAdCode_ == nullptr
        && this->depCityCode_ == nullptr && this->depCityName_ == nullptr && this->depTerminal_ == nullptr && this->depTime_ == nullptr && this->flightMile_ == nullptr
        && this->flightNo_ == nullptr && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr && this->stopCity_ == nullptr && this->stopCityInfoList_ == nullptr; };
        // airlineCode Field Functions 
        bool hasAirlineCode() const { return this->airlineCode_ != nullptr;};
        void deleteAirlineCode() { this->airlineCode_ = nullptr;};
        inline string getAirlineCode() const { DARABONBA_PTR_GET_DEFAULT(airlineCode_, "") };
        inline FlightInfoList& setAirlineCode(string airlineCode) { DARABONBA_PTR_SET_VALUE(airlineCode_, airlineCode) };


        // airlineName Field Functions 
        bool hasAirlineName() const { return this->airlineName_ != nullptr;};
        void deleteAirlineName() { this->airlineName_ = nullptr;};
        inline string getAirlineName() const { DARABONBA_PTR_GET_DEFAULT(airlineName_, "") };
        inline FlightInfoList& setAirlineName(string airlineName) { DARABONBA_PTR_SET_VALUE(airlineName_, airlineName) };


        // arrAirportCityCounty Field Functions 
        bool hasArrAirportCityCounty() const { return this->arrAirportCityCounty_ != nullptr;};
        void deleteArrAirportCityCounty() { this->arrAirportCityCounty_ = nullptr;};
        inline const FlightInfoList::ArrAirportCityCounty & getArrAirportCityCounty() const { DARABONBA_PTR_GET_CONST(arrAirportCityCounty_, FlightInfoList::ArrAirportCityCounty) };
        inline FlightInfoList::ArrAirportCityCounty getArrAirportCityCounty() { DARABONBA_PTR_GET(arrAirportCityCounty_, FlightInfoList::ArrAirportCityCounty) };
        inline FlightInfoList& setArrAirportCityCounty(const FlightInfoList::ArrAirportCityCounty & arrAirportCityCounty) { DARABONBA_PTR_SET_VALUE(arrAirportCityCounty_, arrAirportCityCounty) };
        inline FlightInfoList& setArrAirportCityCounty(FlightInfoList::ArrAirportCityCounty && arrAirportCityCounty) { DARABONBA_PTR_SET_RVALUE(arrAirportCityCounty_, arrAirportCityCounty) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline FlightInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrAirportName Field Functions 
        bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
        void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
        inline string getArrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
        inline FlightInfoList& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


        // arrCityAdCode Field Functions 
        bool hasArrCityAdCode() const { return this->arrCityAdCode_ != nullptr;};
        void deleteArrCityAdCode() { this->arrCityAdCode_ = nullptr;};
        inline string getArrCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityAdCode_, "") };
        inline FlightInfoList& setArrCityAdCode(string arrCityAdCode) { DARABONBA_PTR_SET_VALUE(arrCityAdCode_, arrCityAdCode) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline FlightInfoList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTerminal Field Functions 
        bool hasArrTerminal() const { return this->arrTerminal_ != nullptr;};
        void deleteArrTerminal() { this->arrTerminal_ = nullptr;};
        inline string getArrTerminal() const { DARABONBA_PTR_GET_DEFAULT(arrTerminal_, "") };
        inline FlightInfoList& setArrTerminal(string arrTerminal) { DARABONBA_PTR_SET_VALUE(arrTerminal_, arrTerminal) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline FlightInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline FlightInfoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinLevel Field Functions 
        bool hasCabinLevel() const { return this->cabinLevel_ != nullptr;};
        void deleteCabinLevel() { this->cabinLevel_ = nullptr;};
        inline string getCabinLevel() const { DARABONBA_PTR_GET_DEFAULT(cabinLevel_, "") };
        inline FlightInfoList& setCabinLevel(string cabinLevel) { DARABONBA_PTR_SET_VALUE(cabinLevel_, cabinLevel) };


        // depAirportCityCounty Field Functions 
        bool hasDepAirportCityCounty() const { return this->depAirportCityCounty_ != nullptr;};
        void deleteDepAirportCityCounty() { this->depAirportCityCounty_ = nullptr;};
        inline const FlightInfoList::DepAirportCityCounty & getDepAirportCityCounty() const { DARABONBA_PTR_GET_CONST(depAirportCityCounty_, FlightInfoList::DepAirportCityCounty) };
        inline FlightInfoList::DepAirportCityCounty getDepAirportCityCounty() { DARABONBA_PTR_GET(depAirportCityCounty_, FlightInfoList::DepAirportCityCounty) };
        inline FlightInfoList& setDepAirportCityCounty(const FlightInfoList::DepAirportCityCounty & depAirportCityCounty) { DARABONBA_PTR_SET_VALUE(depAirportCityCounty_, depAirportCityCounty) };
        inline FlightInfoList& setDepAirportCityCounty(FlightInfoList::DepAirportCityCounty && depAirportCityCounty) { DARABONBA_PTR_SET_RVALUE(depAirportCityCounty_, depAirportCityCounty) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline FlightInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depAirportName Field Functions 
        bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
        void deleteDepAirportName() { this->depAirportName_ = nullptr;};
        inline string getDepAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
        inline FlightInfoList& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


        // depCityAdCode Field Functions 
        bool hasDepCityAdCode() const { return this->depCityAdCode_ != nullptr;};
        void deleteDepCityAdCode() { this->depCityAdCode_ = nullptr;};
        inline string getDepCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(depCityAdCode_, "") };
        inline FlightInfoList& setDepCityAdCode(string depCityAdCode) { DARABONBA_PTR_SET_VALUE(depCityAdCode_, depCityAdCode) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline FlightInfoList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTerminal Field Functions 
        bool hasDepTerminal() const { return this->depTerminal_ != nullptr;};
        void deleteDepTerminal() { this->depTerminal_ = nullptr;};
        inline string getDepTerminal() const { DARABONBA_PTR_GET_DEFAULT(depTerminal_, "") };
        inline FlightInfoList& setDepTerminal(string depTerminal) { DARABONBA_PTR_SET_VALUE(depTerminal_, depTerminal) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline FlightInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // flightMile Field Functions 
        bool hasFlightMile() const { return this->flightMile_ != nullptr;};
        void deleteFlightMile() { this->flightMile_ = nullptr;};
        inline int32_t getFlightMile() const { DARABONBA_PTR_GET_DEFAULT(flightMile_, 0) };
        inline FlightInfoList& setFlightMile(int32_t flightMile) { DARABONBA_PTR_SET_VALUE(flightMile_, flightMile) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline FlightInfoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline FlightInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline FlightInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        // stopCity Field Functions 
        bool hasStopCity() const { return this->stopCity_ != nullptr;};
        void deleteStopCity() { this->stopCity_ = nullptr;};
        inline const vector<string> & getStopCity() const { DARABONBA_PTR_GET_CONST(stopCity_, vector<string>) };
        inline vector<string> getStopCity() { DARABONBA_PTR_GET(stopCity_, vector<string>) };
        inline FlightInfoList& setStopCity(const vector<string> & stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };
        inline FlightInfoList& setStopCity(vector<string> && stopCity) { DARABONBA_PTR_SET_RVALUE(stopCity_, stopCity) };


        // stopCityInfoList Field Functions 
        bool hasStopCityInfoList() const { return this->stopCityInfoList_ != nullptr;};
        void deleteStopCityInfoList() { this->stopCityInfoList_ = nullptr;};
        inline const vector<FlightInfoList::StopCityInfoList> & getStopCityInfoList() const { DARABONBA_PTR_GET_CONST(stopCityInfoList_, vector<FlightInfoList::StopCityInfoList>) };
        inline vector<FlightInfoList::StopCityInfoList> getStopCityInfoList() { DARABONBA_PTR_GET(stopCityInfoList_, vector<FlightInfoList::StopCityInfoList>) };
        inline FlightInfoList& setStopCityInfoList(const vector<FlightInfoList::StopCityInfoList> & stopCityInfoList) { DARABONBA_PTR_SET_VALUE(stopCityInfoList_, stopCityInfoList) };
        inline FlightInfoList& setStopCityInfoList(vector<FlightInfoList::StopCityInfoList> && stopCityInfoList) { DARABONBA_PTR_SET_RVALUE(stopCityInfoList_, stopCityInfoList) };


      protected:
        shared_ptr<string> airlineCode_ {};
        shared_ptr<string> airlineName_ {};
        shared_ptr<FlightInfoList::ArrAirportCityCounty> arrAirportCityCounty_ {};
        shared_ptr<string> arrAirportCode_ {};
        shared_ptr<string> arrAirportName_ {};
        shared_ptr<string> arrCityAdCode_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTerminal_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<string> cabinLevel_ {};
        shared_ptr<FlightInfoList::DepAirportCityCounty> depAirportCityCounty_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depAirportName_ {};
        shared_ptr<string> depCityAdCode_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTerminal_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<int32_t> flightMile_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<int32_t> segmentIndex_ {};
        shared_ptr<vector<string>> stopCity_ {};
        shared_ptr<vector<FlightInfoList::StopCityInfoList>> stopCityInfoList_ {};
      };

      class FlightChangeTicketInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlightChangeTicketInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_TO_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(change_cabin, changeCabin_);
          DARABONBA_PTR_TO_JSON(change_cabin_level, changeCabinLevel_);
          DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
          DARABONBA_PTR_TO_JSON(change_flight_no, changeFlightNo_);
          DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
          DARABONBA_PTR_TO_JSON(change_reason, changeReason_);
          DARABONBA_PTR_TO_JSON(change_type, changeType_);
          DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_TO_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_TO_JSON(origin_ticket_no, originTicketNo_);
          DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
          DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_TO_JSON(stop_city, stopCity_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(ticket_status, ticketStatus_);
          DARABONBA_PTR_TO_JSON(ticket_status_code, ticketStatusCode_);
          DARABONBA_PTR_TO_JSON(upgrade_fee, upgradeFee_);
        };
        friend void from_json(const Darabonba::Json& j, FlightChangeTicketInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
          DARABONBA_PTR_FROM_JSON(arr_airport_code, arrAirportCode_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(change_cabin, changeCabin_);
          DARABONBA_PTR_FROM_JSON(change_cabin_level, changeCabinLevel_);
          DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
          DARABONBA_PTR_FROM_JSON(change_flight_no, changeFlightNo_);
          DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
          DARABONBA_PTR_FROM_JSON(change_reason, changeReason_);
          DARABONBA_PTR_FROM_JSON(change_type, changeType_);
          DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
          DARABONBA_PTR_FROM_JSON(dep_airport_code, depAirportCode_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modify, gmtModify_);
          DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
          DARABONBA_PTR_FROM_JSON(origin_ticket_no, originTicketNo_);
          DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
          DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
          DARABONBA_PTR_FROM_JSON(stop_city, stopCity_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_FROM_JSON(ticket_status, ticketStatus_);
          DARABONBA_PTR_FROM_JSON(ticket_status_code, ticketStatusCode_);
          DARABONBA_PTR_FROM_JSON(upgrade_fee, upgradeFee_);
        };
        FlightChangeTicketInfoList() = default ;
        FlightChangeTicketInfoList(const FlightChangeTicketInfoList &) = default ;
        FlightChangeTicketInfoList(FlightChangeTicketInfoList &&) = default ;
        FlightChangeTicketInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlightChangeTicketInfoList() = default ;
        FlightChangeTicketInfoList& operator=(const FlightChangeTicketInfoList &) = default ;
        FlightChangeTicketInfoList& operator=(FlightChangeTicketInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyId_ == nullptr
        && this->arrAirport_ == nullptr && this->arrAirportCode_ == nullptr && this->arrCity_ == nullptr && this->arrCityCode_ == nullptr && this->arrTime_ == nullptr
        && this->changeCabin_ == nullptr && this->changeCabinLevel_ == nullptr && this->changeFee_ == nullptr && this->changeFlightNo_ == nullptr && this->changeOrderId_ == nullptr
        && this->changeReason_ == nullptr && this->changeType_ == nullptr && this->depAirport_ == nullptr && this->depAirportCode_ == nullptr && this->depCity_ == nullptr
        && this->depCityCode_ == nullptr && this->depTime_ == nullptr && this->discount_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModify_ == nullptr
        && this->journeyIndex_ == nullptr && this->originTicketNo_ == nullptr && this->outApplyId_ == nullptr && this->segmentIndex_ == nullptr && this->stopCity_ == nullptr
        && this->ticketNo_ == nullptr && this->ticketStatus_ == nullptr && this->ticketStatusCode_ == nullptr && this->upgradeFee_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline FlightChangeTicketInfoList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // arrAirport Field Functions 
        bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
        void deleteArrAirport() { this->arrAirport_ = nullptr;};
        inline string getArrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
        inline FlightChangeTicketInfoList& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


        // arrAirportCode Field Functions 
        bool hasArrAirportCode() const { return this->arrAirportCode_ != nullptr;};
        void deleteArrAirportCode() { this->arrAirportCode_ = nullptr;};
        inline string getArrAirportCode() const { DARABONBA_PTR_GET_DEFAULT(arrAirportCode_, "") };
        inline FlightChangeTicketInfoList& setArrAirportCode(string arrAirportCode) { DARABONBA_PTR_SET_VALUE(arrAirportCode_, arrAirportCode) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline FlightChangeTicketInfoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityCode Field Functions 
        bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
        void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
        inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
        inline FlightChangeTicketInfoList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline FlightChangeTicketInfoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // changeCabin Field Functions 
        bool hasChangeCabin() const { return this->changeCabin_ != nullptr;};
        void deleteChangeCabin() { this->changeCabin_ = nullptr;};
        inline string getChangeCabin() const { DARABONBA_PTR_GET_DEFAULT(changeCabin_, "") };
        inline FlightChangeTicketInfoList& setChangeCabin(string changeCabin) { DARABONBA_PTR_SET_VALUE(changeCabin_, changeCabin) };


        // changeCabinLevel Field Functions 
        bool hasChangeCabinLevel() const { return this->changeCabinLevel_ != nullptr;};
        void deleteChangeCabinLevel() { this->changeCabinLevel_ = nullptr;};
        inline string getChangeCabinLevel() const { DARABONBA_PTR_GET_DEFAULT(changeCabinLevel_, "") };
        inline FlightChangeTicketInfoList& setChangeCabinLevel(string changeCabinLevel) { DARABONBA_PTR_SET_VALUE(changeCabinLevel_, changeCabinLevel) };


        // changeFee Field Functions 
        bool hasChangeFee() const { return this->changeFee_ != nullptr;};
        void deleteChangeFee() { this->changeFee_ = nullptr;};
        inline double getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0.0) };
        inline FlightChangeTicketInfoList& setChangeFee(double changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


        // changeFlightNo Field Functions 
        bool hasChangeFlightNo() const { return this->changeFlightNo_ != nullptr;};
        void deleteChangeFlightNo() { this->changeFlightNo_ = nullptr;};
        inline string getChangeFlightNo() const { DARABONBA_PTR_GET_DEFAULT(changeFlightNo_, "") };
        inline FlightChangeTicketInfoList& setChangeFlightNo(string changeFlightNo) { DARABONBA_PTR_SET_VALUE(changeFlightNo_, changeFlightNo) };


        // changeOrderId Field Functions 
        bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
        void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
        inline int64_t getChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, 0L) };
        inline FlightChangeTicketInfoList& setChangeOrderId(int64_t changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


        // changeReason Field Functions 
        bool hasChangeReason() const { return this->changeReason_ != nullptr;};
        void deleteChangeReason() { this->changeReason_ = nullptr;};
        inline string getChangeReason() const { DARABONBA_PTR_GET_DEFAULT(changeReason_, "") };
        inline FlightChangeTicketInfoList& setChangeReason(string changeReason) { DARABONBA_PTR_SET_VALUE(changeReason_, changeReason) };


        // changeType Field Functions 
        bool hasChangeType() const { return this->changeType_ != nullptr;};
        void deleteChangeType() { this->changeType_ = nullptr;};
        inline int32_t getChangeType() const { DARABONBA_PTR_GET_DEFAULT(changeType_, 0) };
        inline FlightChangeTicketInfoList& setChangeType(int32_t changeType) { DARABONBA_PTR_SET_VALUE(changeType_, changeType) };


        // depAirport Field Functions 
        bool hasDepAirport() const { return this->depAirport_ != nullptr;};
        void deleteDepAirport() { this->depAirport_ = nullptr;};
        inline string getDepAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
        inline FlightChangeTicketInfoList& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


        // depAirportCode Field Functions 
        bool hasDepAirportCode() const { return this->depAirportCode_ != nullptr;};
        void deleteDepAirportCode() { this->depAirportCode_ = nullptr;};
        inline string getDepAirportCode() const { DARABONBA_PTR_GET_DEFAULT(depAirportCode_, "") };
        inline FlightChangeTicketInfoList& setDepAirportCode(string depAirportCode) { DARABONBA_PTR_SET_VALUE(depAirportCode_, depAirportCode) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline FlightChangeTicketInfoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityCode Field Functions 
        bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
        void deleteDepCityCode() { this->depCityCode_ = nullptr;};
        inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
        inline FlightChangeTicketInfoList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline FlightChangeTicketInfoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
        inline FlightChangeTicketInfoList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline FlightChangeTicketInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModify Field Functions 
        bool hasGmtModify() const { return this->gmtModify_ != nullptr;};
        void deleteGmtModify() { this->gmtModify_ = nullptr;};
        inline string getGmtModify() const { DARABONBA_PTR_GET_DEFAULT(gmtModify_, "") };
        inline FlightChangeTicketInfoList& setGmtModify(string gmtModify) { DARABONBA_PTR_SET_VALUE(gmtModify_, gmtModify) };


        // journeyIndex Field Functions 
        bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
        void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
        inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
        inline FlightChangeTicketInfoList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


        // originTicketNo Field Functions 
        bool hasOriginTicketNo() const { return this->originTicketNo_ != nullptr;};
        void deleteOriginTicketNo() { this->originTicketNo_ = nullptr;};
        inline string getOriginTicketNo() const { DARABONBA_PTR_GET_DEFAULT(originTicketNo_, "") };
        inline FlightChangeTicketInfoList& setOriginTicketNo(string originTicketNo) { DARABONBA_PTR_SET_VALUE(originTicketNo_, originTicketNo) };


        // outApplyId Field Functions 
        bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
        void deleteOutApplyId() { this->outApplyId_ = nullptr;};
        inline string getOutApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
        inline FlightChangeTicketInfoList& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


        // segmentIndex Field Functions 
        bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
        void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
        inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
        inline FlightChangeTicketInfoList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


        // stopCity Field Functions 
        bool hasStopCity() const { return this->stopCity_ != nullptr;};
        void deleteStopCity() { this->stopCity_ = nullptr;};
        inline string getStopCity() const { DARABONBA_PTR_GET_DEFAULT(stopCity_, "") };
        inline FlightChangeTicketInfoList& setStopCity(string stopCity) { DARABONBA_PTR_SET_VALUE(stopCity_, stopCity) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline FlightChangeTicketInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


        // ticketStatus Field Functions 
        bool hasTicketStatus() const { return this->ticketStatus_ != nullptr;};
        void deleteTicketStatus() { this->ticketStatus_ = nullptr;};
        inline string getTicketStatus() const { DARABONBA_PTR_GET_DEFAULT(ticketStatus_, "") };
        inline FlightChangeTicketInfoList& setTicketStatus(string ticketStatus) { DARABONBA_PTR_SET_VALUE(ticketStatus_, ticketStatus) };


        // ticketStatusCode Field Functions 
        bool hasTicketStatusCode() const { return this->ticketStatusCode_ != nullptr;};
        void deleteTicketStatusCode() { this->ticketStatusCode_ = nullptr;};
        inline int32_t getTicketStatusCode() const { DARABONBA_PTR_GET_DEFAULT(ticketStatusCode_, 0) };
        inline FlightChangeTicketInfoList& setTicketStatusCode(int32_t ticketStatusCode) { DARABONBA_PTR_SET_VALUE(ticketStatusCode_, ticketStatusCode) };


        // upgradeFee Field Functions 
        bool hasUpgradeFee() const { return this->upgradeFee_ != nullptr;};
        void deleteUpgradeFee() { this->upgradeFee_ = nullptr;};
        inline double getUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(upgradeFee_, 0.0) };
        inline FlightChangeTicketInfoList& setUpgradeFee(double upgradeFee) { DARABONBA_PTR_SET_VALUE(upgradeFee_, upgradeFee) };


      protected:
        shared_ptr<string> applyId_ {};
        shared_ptr<string> arrAirport_ {};
        shared_ptr<string> arrAirportCode_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> changeCabin_ {};
        shared_ptr<string> changeCabinLevel_ {};
        shared_ptr<double> changeFee_ {};
        shared_ptr<string> changeFlightNo_ {};
        shared_ptr<int64_t> changeOrderId_ {};
        shared_ptr<string> changeReason_ {};
        shared_ptr<int32_t> changeType_ {};
        shared_ptr<string> depAirport_ {};
        shared_ptr<string> depAirportCode_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<string> discount_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModify_ {};
        shared_ptr<int32_t> journeyIndex_ {};
        shared_ptr<string> originTicketNo_ {};
        shared_ptr<string> outApplyId_ {};
        shared_ptr<int32_t> segmentIndex_ {};
        shared_ptr<string> stopCity_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<string> ticketStatus_ {};
        shared_ptr<int32_t> ticketStatusCode_ {};
        shared_ptr<double> upgradeFee_ {};
      };

      virtual bool empty() const override { return this->flightChangeTicketInfoList_ == nullptr
        && this->flightInfoList_ == nullptr && this->flightRefundTicketInfoList_ == nullptr && this->flightTicketInfoList_ == nullptr && this->insuranceInfoList_ == nullptr && this->invoiceInfo_ == nullptr
        && this->orderBaseInfo_ == nullptr && this->passengerInfoList_ == nullptr && this->priceInfoList_ == nullptr; };
      // flightChangeTicketInfoList Field Functions 
      bool hasFlightChangeTicketInfoList() const { return this->flightChangeTicketInfoList_ != nullptr;};
      void deleteFlightChangeTicketInfoList() { this->flightChangeTicketInfoList_ = nullptr;};
      inline const vector<Module::FlightChangeTicketInfoList> & getFlightChangeTicketInfoList() const { DARABONBA_PTR_GET_CONST(flightChangeTicketInfoList_, vector<Module::FlightChangeTicketInfoList>) };
      inline vector<Module::FlightChangeTicketInfoList> getFlightChangeTicketInfoList() { DARABONBA_PTR_GET(flightChangeTicketInfoList_, vector<Module::FlightChangeTicketInfoList>) };
      inline Module& setFlightChangeTicketInfoList(const vector<Module::FlightChangeTicketInfoList> & flightChangeTicketInfoList) { DARABONBA_PTR_SET_VALUE(flightChangeTicketInfoList_, flightChangeTicketInfoList) };
      inline Module& setFlightChangeTicketInfoList(vector<Module::FlightChangeTicketInfoList> && flightChangeTicketInfoList) { DARABONBA_PTR_SET_RVALUE(flightChangeTicketInfoList_, flightChangeTicketInfoList) };


      // flightInfoList Field Functions 
      bool hasFlightInfoList() const { return this->flightInfoList_ != nullptr;};
      void deleteFlightInfoList() { this->flightInfoList_ = nullptr;};
      inline const vector<Module::FlightInfoList> & getFlightInfoList() const { DARABONBA_PTR_GET_CONST(flightInfoList_, vector<Module::FlightInfoList>) };
      inline vector<Module::FlightInfoList> getFlightInfoList() { DARABONBA_PTR_GET(flightInfoList_, vector<Module::FlightInfoList>) };
      inline Module& setFlightInfoList(const vector<Module::FlightInfoList> & flightInfoList) { DARABONBA_PTR_SET_VALUE(flightInfoList_, flightInfoList) };
      inline Module& setFlightInfoList(vector<Module::FlightInfoList> && flightInfoList) { DARABONBA_PTR_SET_RVALUE(flightInfoList_, flightInfoList) };


      // flightRefundTicketInfoList Field Functions 
      bool hasFlightRefundTicketInfoList() const { return this->flightRefundTicketInfoList_ != nullptr;};
      void deleteFlightRefundTicketInfoList() { this->flightRefundTicketInfoList_ = nullptr;};
      inline const vector<Module::FlightRefundTicketInfoList> & getFlightRefundTicketInfoList() const { DARABONBA_PTR_GET_CONST(flightRefundTicketInfoList_, vector<Module::FlightRefundTicketInfoList>) };
      inline vector<Module::FlightRefundTicketInfoList> getFlightRefundTicketInfoList() { DARABONBA_PTR_GET(flightRefundTicketInfoList_, vector<Module::FlightRefundTicketInfoList>) };
      inline Module& setFlightRefundTicketInfoList(const vector<Module::FlightRefundTicketInfoList> & flightRefundTicketInfoList) { DARABONBA_PTR_SET_VALUE(flightRefundTicketInfoList_, flightRefundTicketInfoList) };
      inline Module& setFlightRefundTicketInfoList(vector<Module::FlightRefundTicketInfoList> && flightRefundTicketInfoList) { DARABONBA_PTR_SET_RVALUE(flightRefundTicketInfoList_, flightRefundTicketInfoList) };


      // flightTicketInfoList Field Functions 
      bool hasFlightTicketInfoList() const { return this->flightTicketInfoList_ != nullptr;};
      void deleteFlightTicketInfoList() { this->flightTicketInfoList_ = nullptr;};
      inline const vector<Module::FlightTicketInfoList> & getFlightTicketInfoList() const { DARABONBA_PTR_GET_CONST(flightTicketInfoList_, vector<Module::FlightTicketInfoList>) };
      inline vector<Module::FlightTicketInfoList> getFlightTicketInfoList() { DARABONBA_PTR_GET(flightTicketInfoList_, vector<Module::FlightTicketInfoList>) };
      inline Module& setFlightTicketInfoList(const vector<Module::FlightTicketInfoList> & flightTicketInfoList) { DARABONBA_PTR_SET_VALUE(flightTicketInfoList_, flightTicketInfoList) };
      inline Module& setFlightTicketInfoList(vector<Module::FlightTicketInfoList> && flightTicketInfoList) { DARABONBA_PTR_SET_RVALUE(flightTicketInfoList_, flightTicketInfoList) };


      // insuranceInfoList Field Functions 
      bool hasInsuranceInfoList() const { return this->insuranceInfoList_ != nullptr;};
      void deleteInsuranceInfoList() { this->insuranceInfoList_ = nullptr;};
      inline const vector<Module::InsuranceInfoList> & getInsuranceInfoList() const { DARABONBA_PTR_GET_CONST(insuranceInfoList_, vector<Module::InsuranceInfoList>) };
      inline vector<Module::InsuranceInfoList> getInsuranceInfoList() { DARABONBA_PTR_GET(insuranceInfoList_, vector<Module::InsuranceInfoList>) };
      inline Module& setInsuranceInfoList(const vector<Module::InsuranceInfoList> & insuranceInfoList) { DARABONBA_PTR_SET_VALUE(insuranceInfoList_, insuranceInfoList) };
      inline Module& setInsuranceInfoList(vector<Module::InsuranceInfoList> && insuranceInfoList) { DARABONBA_PTR_SET_RVALUE(insuranceInfoList_, insuranceInfoList) };


      // invoiceInfo Field Functions 
      bool hasInvoiceInfo() const { return this->invoiceInfo_ != nullptr;};
      void deleteInvoiceInfo() { this->invoiceInfo_ = nullptr;};
      inline const Module::InvoiceInfo & getInvoiceInfo() const { DARABONBA_PTR_GET_CONST(invoiceInfo_, Module::InvoiceInfo) };
      inline Module::InvoiceInfo getInvoiceInfo() { DARABONBA_PTR_GET(invoiceInfo_, Module::InvoiceInfo) };
      inline Module& setInvoiceInfo(const Module::InvoiceInfo & invoiceInfo) { DARABONBA_PTR_SET_VALUE(invoiceInfo_, invoiceInfo) };
      inline Module& setInvoiceInfo(Module::InvoiceInfo && invoiceInfo) { DARABONBA_PTR_SET_RVALUE(invoiceInfo_, invoiceInfo) };


      // orderBaseInfo Field Functions 
      bool hasOrderBaseInfo() const { return this->orderBaseInfo_ != nullptr;};
      void deleteOrderBaseInfo() { this->orderBaseInfo_ = nullptr;};
      inline const Module::OrderBaseInfo & getOrderBaseInfo() const { DARABONBA_PTR_GET_CONST(orderBaseInfo_, Module::OrderBaseInfo) };
      inline Module::OrderBaseInfo getOrderBaseInfo() { DARABONBA_PTR_GET(orderBaseInfo_, Module::OrderBaseInfo) };
      inline Module& setOrderBaseInfo(const Module::OrderBaseInfo & orderBaseInfo) { DARABONBA_PTR_SET_VALUE(orderBaseInfo_, orderBaseInfo) };
      inline Module& setOrderBaseInfo(Module::OrderBaseInfo && orderBaseInfo) { DARABONBA_PTR_SET_RVALUE(orderBaseInfo_, orderBaseInfo) };


      // passengerInfoList Field Functions 
      bool hasPassengerInfoList() const { return this->passengerInfoList_ != nullptr;};
      void deletePassengerInfoList() { this->passengerInfoList_ = nullptr;};
      inline const vector<Module::PassengerInfoList> & getPassengerInfoList() const { DARABONBA_PTR_GET_CONST(passengerInfoList_, vector<Module::PassengerInfoList>) };
      inline vector<Module::PassengerInfoList> getPassengerInfoList() { DARABONBA_PTR_GET(passengerInfoList_, vector<Module::PassengerInfoList>) };
      inline Module& setPassengerInfoList(const vector<Module::PassengerInfoList> & passengerInfoList) { DARABONBA_PTR_SET_VALUE(passengerInfoList_, passengerInfoList) };
      inline Module& setPassengerInfoList(vector<Module::PassengerInfoList> && passengerInfoList) { DARABONBA_PTR_SET_RVALUE(passengerInfoList_, passengerInfoList) };


      // priceInfoList Field Functions 
      bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
      void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
      inline const vector<Module::PriceInfoList> & getPriceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Module::PriceInfoList>) };
      inline vector<Module::PriceInfoList> getPriceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Module::PriceInfoList>) };
      inline Module& setPriceInfoList(const vector<Module::PriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
      inline Module& setPriceInfoList(vector<Module::PriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    protected:
      shared_ptr<vector<Module::FlightChangeTicketInfoList>> flightChangeTicketInfoList_ {};
      shared_ptr<vector<Module::FlightInfoList>> flightInfoList_ {};
      shared_ptr<vector<Module::FlightRefundTicketInfoList>> flightRefundTicketInfoList_ {};
      shared_ptr<vector<Module::FlightTicketInfoList>> flightTicketInfoList_ {};
      shared_ptr<vector<Module::InsuranceInfoList>> insuranceInfoList_ {};
      shared_ptr<Module::InvoiceInfo> invoiceInfo_ {};
      shared_ptr<Module::OrderBaseInfo> orderBaseInfo_ {};
      shared_ptr<vector<Module::PassengerInfoList>> passengerInfoList_ {};
      shared_ptr<vector<Module::PriceInfoList>> priceInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightOrderQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOrderQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightOrderQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightOrderQueryResponseBody::Module) };
    inline FlightOrderQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightOrderQueryResponseBody::Module) };
    inline FlightOrderQueryResponseBody& setModule(const FlightOrderQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOrderQueryResponseBody& setModule(FlightOrderQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOrderQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOrderQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOrderQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightOrderQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
