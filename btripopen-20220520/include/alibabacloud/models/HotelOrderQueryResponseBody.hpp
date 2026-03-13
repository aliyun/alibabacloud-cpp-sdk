// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERQUERYRESPONSEBODY_HPP_
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
  class HotelOrderQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelOrderQueryResponseBody() = default ;
    HotelOrderQueryResponseBody(const HotelOrderQueryResponseBody &) = default ;
    HotelOrderQueryResponseBody(HotelOrderQueryResponseBody &&) = default ;
    HotelOrderQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderQueryResponseBody() = default ;
    HotelOrderQueryResponseBody& operator=(const HotelOrderQueryResponseBody &) = default ;
    HotelOrderQueryResponseBody& operator=(HotelOrderQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(hotel_info, hotelInfo_);
        DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
        DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
        DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(hotel_info, hotelInfo_);
        DARABONBA_PTR_FROM_JSON(invoice_info, invoiceInfo_);
        DARABONBA_PTR_FROM_JSON(order_base_info, orderBaseInfo_);
        DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
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
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
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
        && this->gmtCreate_ == nullptr && this->payType_ == nullptr && this->price_ == nullptr && this->tradeId_ == nullptr && this->type_ == nullptr; };
        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline int32_t getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
        inline PriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline PriceInfoList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


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
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      class PassengerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
          DARABONBA_PTR_TO_JSON(apply_id, applyId_);
          DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(occupant_type, occupantType_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_id, projectId_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
          DARABONBA_PTR_TO_JSON(user_type, userType_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(occupant_type, occupantType_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_id, projectId_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
          DARABONBA_PTR_FROM_JSON(user_type, userType_);
        };
        PassengerList() = default ;
        PassengerList(const PassengerList &) = default ;
        PassengerList(PassengerList &&) = default ;
        PassengerList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerList() = default ;
        PassengerList& operator=(const PassengerList &) = default ;
        PassengerList& operator=(PassengerList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->applyId_ == nullptr
        && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr && this->costCenterNumber_ == nullptr && this->itineraryId_ == nullptr && this->occupantType_ == nullptr
        && this->projectCode_ == nullptr && this->projectId_ == nullptr && this->projectTitle_ == nullptr && this->thirdpartApplyId_ == nullptr && this->thirdpartCostCenterId_ == nullptr
        && this->thirdpartProjectId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->userType_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline PassengerList& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // costCenterId Field Functions 
        bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
        void deleteCostCenterId() { this->costCenterId_ = nullptr;};
        inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
        inline PassengerList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline PassengerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // costCenterNumber Field Functions 
        bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
        void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
        inline string getCostCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
        inline PassengerList& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline PassengerList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // occupantType Field Functions 
        bool hasOccupantType() const { return this->occupantType_ != nullptr;};
        void deleteOccupantType() { this->occupantType_ = nullptr;};
        inline int32_t getOccupantType() const { DARABONBA_PTR_GET_DEFAULT(occupantType_, 0) };
        inline PassengerList& setOccupantType(int32_t occupantType) { DARABONBA_PTR_SET_VALUE(occupantType_, occupantType) };


        // projectCode Field Functions 
        bool hasProjectCode() const { return this->projectCode_ != nullptr;};
        void deleteProjectCode() { this->projectCode_ = nullptr;};
        inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
        inline PassengerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline PassengerList& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectTitle Field Functions 
        bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
        void deleteProjectTitle() { this->projectTitle_ = nullptr;};
        inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
        inline PassengerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


        // thirdpartApplyId Field Functions 
        bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
        void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
        inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
        inline PassengerList& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


        // thirdpartCostCenterId Field Functions 
        bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
        void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
        inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
        inline PassengerList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


        // thirdpartProjectId Field Functions 
        bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
        void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
        inline string getThirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
        inline PassengerList& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline PassengerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline PassengerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


        // userType Field Functions 
        bool hasUserType() const { return this->userType_ != nullptr;};
        void deleteUserType() { this->userType_ = nullptr;};
        inline int32_t getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, 0) };
        inline PassengerList& setUserType(int32_t userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


      protected:
        shared_ptr<string> applyId_ {};
        shared_ptr<int64_t> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<int32_t> occupantType_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartApplyId_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
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
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(corp_id, corpId_);
          DARABONBA_PTR_TO_JSON(corp_name, corpName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(depart_name, departName_);
          DARABONBA_PTR_TO_JSON(exceed_apply_nos, exceedApplyNos_);
          DARABONBA_PTR_TO_JSON(extend_field, extendField_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(order_type, orderType_);
          DARABONBA_PTR_TO_JSON(supplier, supplier_);
          DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
          DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, OrderBaseInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
          DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(depart_name, departName_);
          DARABONBA_PTR_FROM_JSON(exceed_apply_nos, exceedApplyNos_);
          DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(order_type, orderType_);
          DARABONBA_PTR_FROM_JSON(supplier, supplier_);
          DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
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
        && this->btripTitle_ == nullptr && this->category_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr && this->departId_ == nullptr
        && this->departName_ == nullptr && this->exceedApplyNos_ == nullptr && this->extendField_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->itineraryId_ == nullptr && this->orderStatus_ == nullptr && this->orderType_ == nullptr && this->supplier_ == nullptr
        && this->thirdpartApplyId_ == nullptr && this->thirdpartBusinessId_ == nullptr && this->thirdpartDepartId_ == nullptr && this->thirdpartItineraryId_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
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


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
        inline OrderBaseInfo& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


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


        // exceedApplyNos Field Functions 
        bool hasExceedApplyNos() const { return this->exceedApplyNos_ != nullptr;};
        void deleteExceedApplyNos() { this->exceedApplyNos_ = nullptr;};
        inline const vector<string> & getExceedApplyNos() const { DARABONBA_PTR_GET_CONST(exceedApplyNos_, vector<string>) };
        inline vector<string> getExceedApplyNos() { DARABONBA_PTR_GET(exceedApplyNos_, vector<string>) };
        inline OrderBaseInfo& setExceedApplyNos(const vector<string> & exceedApplyNos) { DARABONBA_PTR_SET_VALUE(exceedApplyNos_, exceedApplyNos) };
        inline OrderBaseInfo& setExceedApplyNos(vector<string> && exceedApplyNos) { DARABONBA_PTR_SET_RVALUE(exceedApplyNos_, exceedApplyNos) };


        // extendField Field Functions 
        bool hasExtendField() const { return this->extendField_ != nullptr;};
        void deleteExtendField() { this->extendField_ = nullptr;};
        inline string getExtendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
        inline OrderBaseInfo& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline OrderBaseInfo& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
        inline OrderBaseInfo& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline OrderBaseInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline OrderBaseInfo& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // orderStatus Field Functions 
        bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
        void deleteOrderStatus() { this->orderStatus_ = nullptr;};
        inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
        inline OrderBaseInfo& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


        // orderType Field Functions 
        bool hasOrderType() const { return this->orderType_ != nullptr;};
        void deleteOrderType() { this->orderType_ = nullptr;};
        inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
        inline OrderBaseInfo& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


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


        // thirdpartDepartId Field Functions 
        bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
        void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
        inline string getThirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
        inline OrderBaseInfo& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline OrderBaseInfo& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline OrderBaseInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline OrderBaseInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> applyId_ {};
        shared_ptr<string> btripTitle_ {};
        shared_ptr<int32_t> category_ {};
        shared_ptr<string> corpId_ {};
        shared_ptr<string> corpName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<string> departName_ {};
        shared_ptr<vector<string>> exceedApplyNos_ {};
        shared_ptr<string> extendField_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<int32_t> orderStatus_ {};
        shared_ptr<int32_t> orderType_ {};
        shared_ptr<string> supplier_ {};
        shared_ptr<string> thirdpartApplyId_ {};
        shared_ptr<string> thirdpartBusinessId_ {};
        shared_ptr<string> thirdpartDepartId_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
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

      class HotelInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelInfo& obj) { 
          DARABONBA_PTR_TO_JSON(brand_code, brandCode_);
          DARABONBA_PTR_TO_JSON(brand_group, brandGroup_);
          DARABONBA_PTR_TO_JSON(brand_name, brandName_);
          DARABONBA_PTR_TO_JSON(check_in, checkIn_);
          DARABONBA_PTR_TO_JSON(check_out, checkOut_);
          DARABONBA_PTR_TO_JSON(city, city_);
          DARABONBA_PTR_TO_JSON(city_ad_code, cityAdCode_);
          DARABONBA_PTR_TO_JSON(country_code, countryCode_);
          DARABONBA_PTR_TO_JSON(country_name, countryName_);
          DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(hotel_phone, hotelPhone_);
          DARABONBA_PTR_TO_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
          DARABONBA_PTR_TO_JSON(night, night_);
          DARABONBA_PTR_TO_JSON(room_num, roomNum_);
          DARABONBA_PTR_TO_JSON(room_type, roomType_);
          DARABONBA_PTR_TO_JSON(star, star_);
        };
        friend void from_json(const Darabonba::Json& j, HotelInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(brand_code, brandCode_);
          DARABONBA_PTR_FROM_JSON(brand_group, brandGroup_);
          DARABONBA_PTR_FROM_JSON(brand_name, brandName_);
          DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
          DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
          DARABONBA_PTR_FROM_JSON(city, city_);
          DARABONBA_PTR_FROM_JSON(city_ad_code, cityAdCode_);
          DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
          DARABONBA_PTR_FROM_JSON(country_name, countryName_);
          DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(hotel_phone, hotelPhone_);
          DARABONBA_PTR_FROM_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
          DARABONBA_PTR_FROM_JSON(night, night_);
          DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
          DARABONBA_PTR_FROM_JSON(room_type, roomType_);
          DARABONBA_PTR_FROM_JSON(star, star_);
        };
        HotelInfo() = default ;
        HotelInfo(const HotelInfo &) = default ;
        HotelInfo(HotelInfo &&) = default ;
        HotelInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelInfo() = default ;
        HotelInfo& operator=(const HotelInfo &) = default ;
        HotelInfo& operator=(HotelInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->brandCode_ == nullptr
        && this->brandGroup_ == nullptr && this->brandName_ == nullptr && this->checkIn_ == nullptr && this->checkOut_ == nullptr && this->city_ == nullptr
        && this->cityAdCode_ == nullptr && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->hotelAddress_ == nullptr && this->hotelName_ == nullptr
        && this->hotelPhone_ == nullptr && this->hotelSupportVatInvoiceType_ == nullptr && this->night_ == nullptr && this->roomNum_ == nullptr && this->roomType_ == nullptr
        && this->star_ == nullptr; };
        // brandCode Field Functions 
        bool hasBrandCode() const { return this->brandCode_ != nullptr;};
        void deleteBrandCode() { this->brandCode_ = nullptr;};
        inline string getBrandCode() const { DARABONBA_PTR_GET_DEFAULT(brandCode_, "") };
        inline HotelInfo& setBrandCode(string brandCode) { DARABONBA_PTR_SET_VALUE(brandCode_, brandCode) };


        // brandGroup Field Functions 
        bool hasBrandGroup() const { return this->brandGroup_ != nullptr;};
        void deleteBrandGroup() { this->brandGroup_ = nullptr;};
        inline string getBrandGroup() const { DARABONBA_PTR_GET_DEFAULT(brandGroup_, "") };
        inline HotelInfo& setBrandGroup(string brandGroup) { DARABONBA_PTR_SET_VALUE(brandGroup_, brandGroup) };


        // brandName Field Functions 
        bool hasBrandName() const { return this->brandName_ != nullptr;};
        void deleteBrandName() { this->brandName_ = nullptr;};
        inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
        inline HotelInfo& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


        // checkIn Field Functions 
        bool hasCheckIn() const { return this->checkIn_ != nullptr;};
        void deleteCheckIn() { this->checkIn_ = nullptr;};
        inline int64_t getCheckIn() const { DARABONBA_PTR_GET_DEFAULT(checkIn_, 0L) };
        inline HotelInfo& setCheckIn(int64_t checkIn) { DARABONBA_PTR_SET_VALUE(checkIn_, checkIn) };


        // checkOut Field Functions 
        bool hasCheckOut() const { return this->checkOut_ != nullptr;};
        void deleteCheckOut() { this->checkOut_ = nullptr;};
        inline int64_t getCheckOut() const { DARABONBA_PTR_GET_DEFAULT(checkOut_, 0L) };
        inline HotelInfo& setCheckOut(int64_t checkOut) { DARABONBA_PTR_SET_VALUE(checkOut_, checkOut) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline HotelInfo& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // cityAdCode Field Functions 
        bool hasCityAdCode() const { return this->cityAdCode_ != nullptr;};
        void deleteCityAdCode() { this->cityAdCode_ = nullptr;};
        inline string getCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(cityAdCode_, "") };
        inline HotelInfo& setCityAdCode(string cityAdCode) { DARABONBA_PTR_SET_VALUE(cityAdCode_, cityAdCode) };


        // countryCode Field Functions 
        bool hasCountryCode() const { return this->countryCode_ != nullptr;};
        void deleteCountryCode() { this->countryCode_ = nullptr;};
        inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
        inline HotelInfo& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


        // countryName Field Functions 
        bool hasCountryName() const { return this->countryName_ != nullptr;};
        void deleteCountryName() { this->countryName_ = nullptr;};
        inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
        inline HotelInfo& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


        // hotelAddress Field Functions 
        bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
        void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
        inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
        inline HotelInfo& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline HotelInfo& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // hotelPhone Field Functions 
        bool hasHotelPhone() const { return this->hotelPhone_ != nullptr;};
        void deleteHotelPhone() { this->hotelPhone_ = nullptr;};
        inline string getHotelPhone() const { DARABONBA_PTR_GET_DEFAULT(hotelPhone_, "") };
        inline HotelInfo& setHotelPhone(string hotelPhone) { DARABONBA_PTR_SET_VALUE(hotelPhone_, hotelPhone) };


        // hotelSupportVatInvoiceType Field Functions 
        bool hasHotelSupportVatInvoiceType() const { return this->hotelSupportVatInvoiceType_ != nullptr;};
        void deleteHotelSupportVatInvoiceType() { this->hotelSupportVatInvoiceType_ = nullptr;};
        inline int32_t getHotelSupportVatInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(hotelSupportVatInvoiceType_, 0) };
        inline HotelInfo& setHotelSupportVatInvoiceType(int32_t hotelSupportVatInvoiceType) { DARABONBA_PTR_SET_VALUE(hotelSupportVatInvoiceType_, hotelSupportVatInvoiceType) };


        // night Field Functions 
        bool hasNight() const { return this->night_ != nullptr;};
        void deleteNight() { this->night_ = nullptr;};
        inline int32_t getNight() const { DARABONBA_PTR_GET_DEFAULT(night_, 0) };
        inline HotelInfo& setNight(int32_t night) { DARABONBA_PTR_SET_VALUE(night_, night) };


        // roomNum Field Functions 
        bool hasRoomNum() const { return this->roomNum_ != nullptr;};
        void deleteRoomNum() { this->roomNum_ = nullptr;};
        inline int32_t getRoomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
        inline HotelInfo& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


        // roomType Field Functions 
        bool hasRoomType() const { return this->roomType_ != nullptr;};
        void deleteRoomType() { this->roomType_ = nullptr;};
        inline string getRoomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, "") };
        inline HotelInfo& setRoomType(string roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


        // star Field Functions 
        bool hasStar() const { return this->star_ != nullptr;};
        void deleteStar() { this->star_ = nullptr;};
        inline string getStar() const { DARABONBA_PTR_GET_DEFAULT(star_, "") };
        inline HotelInfo& setStar(string star) { DARABONBA_PTR_SET_VALUE(star_, star) };


      protected:
        shared_ptr<string> brandCode_ {};
        shared_ptr<string> brandGroup_ {};
        shared_ptr<string> brandName_ {};
        shared_ptr<int64_t> checkIn_ {};
        shared_ptr<int64_t> checkOut_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> cityAdCode_ {};
        shared_ptr<string> countryCode_ {};
        shared_ptr<string> countryName_ {};
        shared_ptr<string> hotelAddress_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<string> hotelPhone_ {};
        shared_ptr<int32_t> hotelSupportVatInvoiceType_ {};
        shared_ptr<int32_t> night_ {};
        shared_ptr<int32_t> roomNum_ {};
        shared_ptr<string> roomType_ {};
        shared_ptr<string> star_ {};
      };

      virtual bool empty() const override { return this->hotelInfo_ == nullptr
        && this->invoiceInfo_ == nullptr && this->orderBaseInfo_ == nullptr && this->passengerList_ == nullptr && this->priceInfoList_ == nullptr; };
      // hotelInfo Field Functions 
      bool hasHotelInfo() const { return this->hotelInfo_ != nullptr;};
      void deleteHotelInfo() { this->hotelInfo_ = nullptr;};
      inline const Module::HotelInfo & getHotelInfo() const { DARABONBA_PTR_GET_CONST(hotelInfo_, Module::HotelInfo) };
      inline Module::HotelInfo getHotelInfo() { DARABONBA_PTR_GET(hotelInfo_, Module::HotelInfo) };
      inline Module& setHotelInfo(const Module::HotelInfo & hotelInfo) { DARABONBA_PTR_SET_VALUE(hotelInfo_, hotelInfo) };
      inline Module& setHotelInfo(Module::HotelInfo && hotelInfo) { DARABONBA_PTR_SET_RVALUE(hotelInfo_, hotelInfo) };


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


      // passengerList Field Functions 
      bool hasPassengerList() const { return this->passengerList_ != nullptr;};
      void deletePassengerList() { this->passengerList_ = nullptr;};
      inline const vector<Module::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Module::PassengerList>) };
      inline vector<Module::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<Module::PassengerList>) };
      inline Module& setPassengerList(const vector<Module::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
      inline Module& setPassengerList(vector<Module::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


      // priceInfoList Field Functions 
      bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
      void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
      inline const vector<Module::PriceInfoList> & getPriceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Module::PriceInfoList>) };
      inline vector<Module::PriceInfoList> getPriceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Module::PriceInfoList>) };
      inline Module& setPriceInfoList(const vector<Module::PriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
      inline Module& setPriceInfoList(vector<Module::PriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


    protected:
      shared_ptr<Module::HotelInfo> hotelInfo_ {};
      shared_ptr<Module::InvoiceInfo> invoiceInfo_ {};
      shared_ptr<Module::OrderBaseInfo> orderBaseInfo_ {};
      shared_ptr<vector<Module::PassengerList>> passengerList_ {};
      shared_ptr<vector<Module::PriceInfoList>> priceInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelOrderQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelOrderQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelOrderQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelOrderQueryResponseBody::Module) };
    inline HotelOrderQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelOrderQueryResponseBody::Module) };
    inline HotelOrderQueryResponseBody& setModule(const HotelOrderQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelOrderQueryResponseBody& setModule(HotelOrderQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelOrderQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelOrderQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelOrderQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module。
    shared_ptr<HotelOrderQueryResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
