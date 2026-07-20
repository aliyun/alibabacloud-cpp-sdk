// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARORDERQUERYRESPONSEBODY_HPP_
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
  class CarOrderQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CarOrderQueryResponseBody() = default ;
    CarOrderQueryResponseBody(const CarOrderQueryResponseBody &) = default ;
    CarOrderQueryResponseBody(CarOrderQueryResponseBody &&) = default ;
    CarOrderQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderQueryResponseBody() = default ;
    CarOrderQueryResponseBody& operator=(const CarOrderQueryResponseBody &) = default ;
    CarOrderQueryResponseBody& operator=(CarOrderQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(car_info, carInfo_);
        DARABONBA_PTR_TO_JSON(invoice_info, invoiceInfo_);
        DARABONBA_PTR_TO_JSON(order_base_info, orderBaseInfo_);
        DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(car_info, carInfo_);
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
          DARABONBA_PTR_TO_JSON(person_price, personPrice_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(pay_type, payType_);
          DARABONBA_PTR_FROM_JSON(person_price, personPrice_);
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
        && this->gmtCreate_ == nullptr && this->payType_ == nullptr && this->personPrice_ == nullptr && this->price_ == nullptr && this->tradeId_ == nullptr
        && this->type_ == nullptr; };
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


        // personPrice Field Functions 
        bool hasPersonPrice() const { return this->personPrice_ != nullptr;};
        void deletePersonPrice() { this->personPrice_ = nullptr;};
        inline int64_t getPersonPrice() const { DARABONBA_PTR_GET_DEFAULT(personPrice_, 0L) };
        inline PriceInfoList& setPersonPrice(int64_t personPrice) { DARABONBA_PTR_SET_VALUE(personPrice_, personPrice) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline PriceInfoList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


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
        shared_ptr<int64_t> personPrice_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      class PassengerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
          DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_id, projectId_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
          DARABONBA_PTR_TO_JSON(user_type, userType_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
          DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_id, projectId_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
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
        virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->costCenterName_ == nullptr && this->costCenterNumber_ == nullptr && this->projectCode_ == nullptr && this->projectId_ == nullptr && this->projectTitle_ == nullptr
        && this->thirdpartCostCenterId_ == nullptr && this->thirdpartProjectId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr && this->userType_ == nullptr; };
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
        shared_ptr<int64_t> costCenterId_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> costCenterNumber_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<int64_t> projectId_ {};
        shared_ptr<string> projectTitle_ {};
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
          DARABONBA_PTR_TO_JSON(btrip_cause, btripCause_);
          DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_TO_JSON(car_order_source_type, carOrderSourceType_);
          DARABONBA_PTR_TO_JSON(corp_id, corpId_);
          DARABONBA_PTR_TO_JSON(corp_name, corpName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(depart_name, departName_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(order_id, orderId_);
          DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
          DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_TO_JSON(third_depart_id, thirdDepartId_);
          DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, OrderBaseInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
          DARABONBA_PTR_FROM_JSON(btrip_cause, btripCause_);
          DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
          DARABONBA_PTR_FROM_JSON(car_order_source_type, carOrderSourceType_);
          DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
          DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(depart_name, departName_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(order_id, orderId_);
          DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
          DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
          DARABONBA_PTR_FROM_JSON(third_depart_id, thirdDepartId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
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
        && this->btripCause_ == nullptr && this->btripTitle_ == nullptr && this->carOrderSourceType_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr
        && this->departId_ == nullptr && this->departName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->itineraryId_ == nullptr
        && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->subOrderId_ == nullptr && this->thirdDepartId_ == nullptr && this->thirdpartApplyId_ == nullptr
        && this->thirdpartBusinessId_ == nullptr && this->thirdpartItineraryId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
        // applyId Field Functions 
        bool hasApplyId() const { return this->applyId_ != nullptr;};
        void deleteApplyId() { this->applyId_ = nullptr;};
        inline string getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
        inline OrderBaseInfo& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


        // btripCause Field Functions 
        bool hasBtripCause() const { return this->btripCause_ != nullptr;};
        void deleteBtripCause() { this->btripCause_ = nullptr;};
        inline string getBtripCause() const { DARABONBA_PTR_GET_DEFAULT(btripCause_, "") };
        inline OrderBaseInfo& setBtripCause(string btripCause) { DARABONBA_PTR_SET_VALUE(btripCause_, btripCause) };


        // btripTitle Field Functions 
        bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
        void deleteBtripTitle() { this->btripTitle_ = nullptr;};
        inline string getBtripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
        inline OrderBaseInfo& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


        // carOrderSourceType Field Functions 
        bool hasCarOrderSourceType() const { return this->carOrderSourceType_ != nullptr;};
        void deleteCarOrderSourceType() { this->carOrderSourceType_ = nullptr;};
        inline int64_t getCarOrderSourceType() const { DARABONBA_PTR_GET_DEFAULT(carOrderSourceType_, 0L) };
        inline OrderBaseInfo& setCarOrderSourceType(int64_t carOrderSourceType) { DARABONBA_PTR_SET_VALUE(carOrderSourceType_, carOrderSourceType) };


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


        // subOrderId Field Functions 
        bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
        void deleteSubOrderId() { this->subOrderId_ = nullptr;};
        inline int64_t getSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
        inline OrderBaseInfo& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


        // thirdDepartId Field Functions 
        bool hasThirdDepartId() const { return this->thirdDepartId_ != nullptr;};
        void deleteThirdDepartId() { this->thirdDepartId_ = nullptr;};
        inline string getThirdDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdDepartId_, "") };
        inline OrderBaseInfo& setThirdDepartId(string thirdDepartId) { DARABONBA_PTR_SET_VALUE(thirdDepartId_, thirdDepartId) };


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
        shared_ptr<string> btripCause_ {};
        shared_ptr<string> btripTitle_ {};
        shared_ptr<int64_t> carOrderSourceType_ {};
        shared_ptr<string> corpId_ {};
        shared_ptr<string> corpName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<string> departName_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtModified_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<int64_t> orderId_ {};
        shared_ptr<int32_t> orderStatus_ {};
        shared_ptr<int64_t> subOrderId_ {};
        shared_ptr<string> thirdDepartId_ {};
        shared_ptr<string> thirdpartApplyId_ {};
        shared_ptr<string> thirdpartBusinessId_ {};
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

      class CarInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CarInfo& obj) { 
          DARABONBA_PTR_TO_JSON(business_category, businessCategory_);
          DARABONBA_PTR_TO_JSON(cancel_time, cancelTime_);
          DARABONBA_PTR_TO_JSON(car_info, carInfo_);
          DARABONBA_PTR_TO_JSON(car_level, carLevel_);
          DARABONBA_PTR_TO_JSON(driver_card, driverCard_);
          DARABONBA_PTR_TO_JSON(driver_confirm_time, driverConfirmTime_);
          DARABONBA_PTR_TO_JSON(driver_name, driverName_);
          DARABONBA_PTR_TO_JSON(estimate_price, estimatePrice_);
          DARABONBA_PTR_TO_JSON(from_address, fromAddress_);
          DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
          DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
          DARABONBA_PTR_TO_JSON(is_special, isSpecial_);
          DARABONBA_PTR_TO_JSON(memo, memo_);
          DARABONBA_PTR_TO_JSON(pay_time, payTime_);
          DARABONBA_PTR_TO_JSON(publish_time, publishTime_);
          DARABONBA_PTR_TO_JSON(real_from_address, realFromAddress_);
          DARABONBA_PTR_TO_JSON(real_from_city_ad_code, realFromCityAdCode_);
          DARABONBA_PTR_TO_JSON(real_from_city_name, realFromCityName_);
          DARABONBA_PTR_TO_JSON(real_to_address, realToAddress_);
          DARABONBA_PTR_TO_JSON(real_to_city_ad_code, realToCityAdCode_);
          DARABONBA_PTR_TO_JSON(real_to_city_name, realToCityName_);
          DARABONBA_PTR_TO_JSON(service_type, serviceType_);
          DARABONBA_PTR_TO_JSON(special_types, specialTypes_);
          DARABONBA_PTR_TO_JSON(taken_time, takenTime_);
          DARABONBA_PTR_TO_JSON(to_address, toAddress_);
          DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
          DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
          DARABONBA_PTR_TO_JSON(travel_distance, travelDistance_);
          DARABONBA_PTR_TO_JSON(way_points, wayPoints_);
        };
        friend void from_json(const Darabonba::Json& j, CarInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(business_category, businessCategory_);
          DARABONBA_PTR_FROM_JSON(cancel_time, cancelTime_);
          DARABONBA_PTR_FROM_JSON(car_info, carInfo_);
          DARABONBA_PTR_FROM_JSON(car_level, carLevel_);
          DARABONBA_PTR_FROM_JSON(driver_card, driverCard_);
          DARABONBA_PTR_FROM_JSON(driver_confirm_time, driverConfirmTime_);
          DARABONBA_PTR_FROM_JSON(driver_name, driverName_);
          DARABONBA_PTR_FROM_JSON(estimate_price, estimatePrice_);
          DARABONBA_PTR_FROM_JSON(from_address, fromAddress_);
          DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
          DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
          DARABONBA_PTR_FROM_JSON(is_special, isSpecial_);
          DARABONBA_PTR_FROM_JSON(memo, memo_);
          DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
          DARABONBA_PTR_FROM_JSON(publish_time, publishTime_);
          DARABONBA_PTR_FROM_JSON(real_from_address, realFromAddress_);
          DARABONBA_PTR_FROM_JSON(real_from_city_ad_code, realFromCityAdCode_);
          DARABONBA_PTR_FROM_JSON(real_from_city_name, realFromCityName_);
          DARABONBA_PTR_FROM_JSON(real_to_address, realToAddress_);
          DARABONBA_PTR_FROM_JSON(real_to_city_ad_code, realToCityAdCode_);
          DARABONBA_PTR_FROM_JSON(real_to_city_name, realToCityName_);
          DARABONBA_PTR_FROM_JSON(service_type, serviceType_);
          DARABONBA_PTR_FROM_JSON(special_types, specialTypes_);
          DARABONBA_PTR_FROM_JSON(taken_time, takenTime_);
          DARABONBA_PTR_FROM_JSON(to_address, toAddress_);
          DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
          DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
          DARABONBA_PTR_FROM_JSON(travel_distance, travelDistance_);
          DARABONBA_PTR_FROM_JSON(way_points, wayPoints_);
        };
        CarInfo() = default ;
        CarInfo(const CarInfo &) = default ;
        CarInfo(CarInfo &&) = default ;
        CarInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CarInfo() = default ;
        CarInfo& operator=(const CarInfo &) = default ;
        CarInfo& operator=(CarInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class WayPoints : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WayPoints& obj) { 
            DARABONBA_PTR_TO_JSON(address, address_);
            DARABONBA_PTR_TO_JSON(index, index_);
            DARABONBA_PTR_TO_JSON(latitude, latitude_);
            DARABONBA_PTR_TO_JSON(longitude, longitude_);
          };
          friend void from_json(const Darabonba::Json& j, WayPoints& obj) { 
            DARABONBA_PTR_FROM_JSON(address, address_);
            DARABONBA_PTR_FROM_JSON(index, index_);
            DARABONBA_PTR_FROM_JSON(latitude, latitude_);
            DARABONBA_PTR_FROM_JSON(longitude, longitude_);
          };
          WayPoints() = default ;
          WayPoints(const WayPoints &) = default ;
          WayPoints(WayPoints &&) = default ;
          WayPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WayPoints() = default ;
          WayPoints& operator=(const WayPoints &) = default ;
          WayPoints& operator=(WayPoints &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->address_ == nullptr
        && this->index_ == nullptr && this->latitude_ == nullptr && this->longitude_ == nullptr; };
          // address Field Functions 
          bool hasAddress() const { return this->address_ != nullptr;};
          void deleteAddress() { this->address_ = nullptr;};
          inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
          inline WayPoints& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
          inline WayPoints& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // latitude Field Functions 
          bool hasLatitude() const { return this->latitude_ != nullptr;};
          void deleteLatitude() { this->latitude_ = nullptr;};
          inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
          inline WayPoints& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


          // longitude Field Functions 
          bool hasLongitude() const { return this->longitude_ != nullptr;};
          void deleteLongitude() { this->longitude_ = nullptr;};
          inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
          inline WayPoints& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


        protected:
          shared_ptr<string> address_ {};
          shared_ptr<string> index_ {};
          shared_ptr<string> latitude_ {};
          shared_ptr<string> longitude_ {};
        };

        virtual bool empty() const override { return this->businessCategory_ == nullptr
        && this->cancelTime_ == nullptr && this->carInfo_ == nullptr && this->carLevel_ == nullptr && this->driverCard_ == nullptr && this->driverConfirmTime_ == nullptr
        && this->driverName_ == nullptr && this->estimatePrice_ == nullptr && this->fromAddress_ == nullptr && this->fromCityAdCode_ == nullptr && this->fromCityName_ == nullptr
        && this->isSpecial_ == nullptr && this->memo_ == nullptr && this->payTime_ == nullptr && this->publishTime_ == nullptr && this->realFromAddress_ == nullptr
        && this->realFromCityAdCode_ == nullptr && this->realFromCityName_ == nullptr && this->realToAddress_ == nullptr && this->realToCityAdCode_ == nullptr && this->realToCityName_ == nullptr
        && this->serviceType_ == nullptr && this->specialTypes_ == nullptr && this->takenTime_ == nullptr && this->toAddress_ == nullptr && this->toCityAdCode_ == nullptr
        && this->toCityName_ == nullptr && this->travelDistance_ == nullptr && this->wayPoints_ == nullptr; };
        // businessCategory Field Functions 
        bool hasBusinessCategory() const { return this->businessCategory_ != nullptr;};
        void deleteBusinessCategory() { this->businessCategory_ = nullptr;};
        inline string getBusinessCategory() const { DARABONBA_PTR_GET_DEFAULT(businessCategory_, "") };
        inline CarInfo& setBusinessCategory(string businessCategory) { DARABONBA_PTR_SET_VALUE(businessCategory_, businessCategory) };


        // cancelTime Field Functions 
        bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
        void deleteCancelTime() { this->cancelTime_ = nullptr;};
        inline int64_t getCancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, 0L) };
        inline CarInfo& setCancelTime(int64_t cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


        // carInfo Field Functions 
        bool hasCarInfo() const { return this->carInfo_ != nullptr;};
        void deleteCarInfo() { this->carInfo_ = nullptr;};
        inline string getCarInfo() const { DARABONBA_PTR_GET_DEFAULT(carInfo_, "") };
        inline CarInfo& setCarInfo(string carInfo) { DARABONBA_PTR_SET_VALUE(carInfo_, carInfo) };


        // carLevel Field Functions 
        bool hasCarLevel() const { return this->carLevel_ != nullptr;};
        void deleteCarLevel() { this->carLevel_ = nullptr;};
        inline int32_t getCarLevel() const { DARABONBA_PTR_GET_DEFAULT(carLevel_, 0) };
        inline CarInfo& setCarLevel(int32_t carLevel) { DARABONBA_PTR_SET_VALUE(carLevel_, carLevel) };


        // driverCard Field Functions 
        bool hasDriverCard() const { return this->driverCard_ != nullptr;};
        void deleteDriverCard() { this->driverCard_ = nullptr;};
        inline string getDriverCard() const { DARABONBA_PTR_GET_DEFAULT(driverCard_, "") };
        inline CarInfo& setDriverCard(string driverCard) { DARABONBA_PTR_SET_VALUE(driverCard_, driverCard) };


        // driverConfirmTime Field Functions 
        bool hasDriverConfirmTime() const { return this->driverConfirmTime_ != nullptr;};
        void deleteDriverConfirmTime() { this->driverConfirmTime_ = nullptr;};
        inline int64_t getDriverConfirmTime() const { DARABONBA_PTR_GET_DEFAULT(driverConfirmTime_, 0L) };
        inline CarInfo& setDriverConfirmTime(int64_t driverConfirmTime) { DARABONBA_PTR_SET_VALUE(driverConfirmTime_, driverConfirmTime) };


        // driverName Field Functions 
        bool hasDriverName() const { return this->driverName_ != nullptr;};
        void deleteDriverName() { this->driverName_ = nullptr;};
        inline string getDriverName() const { DARABONBA_PTR_GET_DEFAULT(driverName_, "") };
        inline CarInfo& setDriverName(string driverName) { DARABONBA_PTR_SET_VALUE(driverName_, driverName) };


        // estimatePrice Field Functions 
        bool hasEstimatePrice() const { return this->estimatePrice_ != nullptr;};
        void deleteEstimatePrice() { this->estimatePrice_ = nullptr;};
        inline int64_t getEstimatePrice() const { DARABONBA_PTR_GET_DEFAULT(estimatePrice_, 0L) };
        inline CarInfo& setEstimatePrice(int64_t estimatePrice) { DARABONBA_PTR_SET_VALUE(estimatePrice_, estimatePrice) };


        // fromAddress Field Functions 
        bool hasFromAddress() const { return this->fromAddress_ != nullptr;};
        void deleteFromAddress() { this->fromAddress_ = nullptr;};
        inline string getFromAddress() const { DARABONBA_PTR_GET_DEFAULT(fromAddress_, "") };
        inline CarInfo& setFromAddress(string fromAddress) { DARABONBA_PTR_SET_VALUE(fromAddress_, fromAddress) };


        // fromCityAdCode Field Functions 
        bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
        void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
        inline string getFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
        inline CarInfo& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


        // fromCityName Field Functions 
        bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
        void deleteFromCityName() { this->fromCityName_ = nullptr;};
        inline string getFromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
        inline CarInfo& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


        // isSpecial Field Functions 
        bool hasIsSpecial() const { return this->isSpecial_ != nullptr;};
        void deleteIsSpecial() { this->isSpecial_ = nullptr;};
        inline bool getIsSpecial() const { DARABONBA_PTR_GET_DEFAULT(isSpecial_, false) };
        inline CarInfo& setIsSpecial(bool isSpecial) { DARABONBA_PTR_SET_VALUE(isSpecial_, isSpecial) };


        // memo Field Functions 
        bool hasMemo() const { return this->memo_ != nullptr;};
        void deleteMemo() { this->memo_ = nullptr;};
        inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
        inline CarInfo& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


        // payTime Field Functions 
        bool hasPayTime() const { return this->payTime_ != nullptr;};
        void deletePayTime() { this->payTime_ = nullptr;};
        inline int64_t getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
        inline CarInfo& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


        // publishTime Field Functions 
        bool hasPublishTime() const { return this->publishTime_ != nullptr;};
        void deletePublishTime() { this->publishTime_ = nullptr;};
        inline int64_t getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
        inline CarInfo& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


        // realFromAddress Field Functions 
        bool hasRealFromAddress() const { return this->realFromAddress_ != nullptr;};
        void deleteRealFromAddress() { this->realFromAddress_ = nullptr;};
        inline string getRealFromAddress() const { DARABONBA_PTR_GET_DEFAULT(realFromAddress_, "") };
        inline CarInfo& setRealFromAddress(string realFromAddress) { DARABONBA_PTR_SET_VALUE(realFromAddress_, realFromAddress) };


        // realFromCityAdCode Field Functions 
        bool hasRealFromCityAdCode() const { return this->realFromCityAdCode_ != nullptr;};
        void deleteRealFromCityAdCode() { this->realFromCityAdCode_ = nullptr;};
        inline string getRealFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realFromCityAdCode_, "") };
        inline CarInfo& setRealFromCityAdCode(string realFromCityAdCode) { DARABONBA_PTR_SET_VALUE(realFromCityAdCode_, realFromCityAdCode) };


        // realFromCityName Field Functions 
        bool hasRealFromCityName() const { return this->realFromCityName_ != nullptr;};
        void deleteRealFromCityName() { this->realFromCityName_ = nullptr;};
        inline string getRealFromCityName() const { DARABONBA_PTR_GET_DEFAULT(realFromCityName_, "") };
        inline CarInfo& setRealFromCityName(string realFromCityName) { DARABONBA_PTR_SET_VALUE(realFromCityName_, realFromCityName) };


        // realToAddress Field Functions 
        bool hasRealToAddress() const { return this->realToAddress_ != nullptr;};
        void deleteRealToAddress() { this->realToAddress_ = nullptr;};
        inline string getRealToAddress() const { DARABONBA_PTR_GET_DEFAULT(realToAddress_, "") };
        inline CarInfo& setRealToAddress(string realToAddress) { DARABONBA_PTR_SET_VALUE(realToAddress_, realToAddress) };


        // realToCityAdCode Field Functions 
        bool hasRealToCityAdCode() const { return this->realToCityAdCode_ != nullptr;};
        void deleteRealToCityAdCode() { this->realToCityAdCode_ = nullptr;};
        inline string getRealToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realToCityAdCode_, "") };
        inline CarInfo& setRealToCityAdCode(string realToCityAdCode) { DARABONBA_PTR_SET_VALUE(realToCityAdCode_, realToCityAdCode) };


        // realToCityName Field Functions 
        bool hasRealToCityName() const { return this->realToCityName_ != nullptr;};
        void deleteRealToCityName() { this->realToCityName_ = nullptr;};
        inline string getRealToCityName() const { DARABONBA_PTR_GET_DEFAULT(realToCityName_, "") };
        inline CarInfo& setRealToCityName(string realToCityName) { DARABONBA_PTR_SET_VALUE(realToCityName_, realToCityName) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline int32_t getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
        inline CarInfo& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // specialTypes Field Functions 
        bool hasSpecialTypes() const { return this->specialTypes_ != nullptr;};
        void deleteSpecialTypes() { this->specialTypes_ = nullptr;};
        inline string getSpecialTypes() const { DARABONBA_PTR_GET_DEFAULT(specialTypes_, "") };
        inline CarInfo& setSpecialTypes(string specialTypes) { DARABONBA_PTR_SET_VALUE(specialTypes_, specialTypes) };


        // takenTime Field Functions 
        bool hasTakenTime() const { return this->takenTime_ != nullptr;};
        void deleteTakenTime() { this->takenTime_ = nullptr;};
        inline int64_t getTakenTime() const { DARABONBA_PTR_GET_DEFAULT(takenTime_, 0L) };
        inline CarInfo& setTakenTime(int64_t takenTime) { DARABONBA_PTR_SET_VALUE(takenTime_, takenTime) };


        // toAddress Field Functions 
        bool hasToAddress() const { return this->toAddress_ != nullptr;};
        void deleteToAddress() { this->toAddress_ = nullptr;};
        inline string getToAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
        inline CarInfo& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


        // toCityAdCode Field Functions 
        bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
        void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
        inline string getToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
        inline CarInfo& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


        // toCityName Field Functions 
        bool hasToCityName() const { return this->toCityName_ != nullptr;};
        void deleteToCityName() { this->toCityName_ = nullptr;};
        inline string getToCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
        inline CarInfo& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


        // travelDistance Field Functions 
        bool hasTravelDistance() const { return this->travelDistance_ != nullptr;};
        void deleteTravelDistance() { this->travelDistance_ = nullptr;};
        inline string getTravelDistance() const { DARABONBA_PTR_GET_DEFAULT(travelDistance_, "") };
        inline CarInfo& setTravelDistance(string travelDistance) { DARABONBA_PTR_SET_VALUE(travelDistance_, travelDistance) };


        // wayPoints Field Functions 
        bool hasWayPoints() const { return this->wayPoints_ != nullptr;};
        void deleteWayPoints() { this->wayPoints_ = nullptr;};
        inline const vector<CarInfo::WayPoints> & getWayPoints() const { DARABONBA_PTR_GET_CONST(wayPoints_, vector<CarInfo::WayPoints>) };
        inline vector<CarInfo::WayPoints> getWayPoints() { DARABONBA_PTR_GET(wayPoints_, vector<CarInfo::WayPoints>) };
        inline CarInfo& setWayPoints(const vector<CarInfo::WayPoints> & wayPoints) { DARABONBA_PTR_SET_VALUE(wayPoints_, wayPoints) };
        inline CarInfo& setWayPoints(vector<CarInfo::WayPoints> && wayPoints) { DARABONBA_PTR_SET_RVALUE(wayPoints_, wayPoints) };


      protected:
        shared_ptr<string> businessCategory_ {};
        shared_ptr<int64_t> cancelTime_ {};
        shared_ptr<string> carInfo_ {};
        shared_ptr<int32_t> carLevel_ {};
        shared_ptr<string> driverCard_ {};
        shared_ptr<int64_t> driverConfirmTime_ {};
        shared_ptr<string> driverName_ {};
        shared_ptr<int64_t> estimatePrice_ {};
        shared_ptr<string> fromAddress_ {};
        shared_ptr<string> fromCityAdCode_ {};
        shared_ptr<string> fromCityName_ {};
        shared_ptr<bool> isSpecial_ {};
        shared_ptr<string> memo_ {};
        shared_ptr<int64_t> payTime_ {};
        shared_ptr<int64_t> publishTime_ {};
        shared_ptr<string> realFromAddress_ {};
        shared_ptr<string> realFromCityAdCode_ {};
        shared_ptr<string> realFromCityName_ {};
        shared_ptr<string> realToAddress_ {};
        shared_ptr<string> realToCityAdCode_ {};
        shared_ptr<string> realToCityName_ {};
        shared_ptr<int32_t> serviceType_ {};
        shared_ptr<string> specialTypes_ {};
        shared_ptr<int64_t> takenTime_ {};
        shared_ptr<string> toAddress_ {};
        shared_ptr<string> toCityAdCode_ {};
        shared_ptr<string> toCityName_ {};
        shared_ptr<string> travelDistance_ {};
        shared_ptr<vector<CarInfo::WayPoints>> wayPoints_ {};
      };

      virtual bool empty() const override { return this->carInfo_ == nullptr
        && this->invoiceInfo_ == nullptr && this->orderBaseInfo_ == nullptr && this->passengerList_ == nullptr && this->priceInfoList_ == nullptr; };
      // carInfo Field Functions 
      bool hasCarInfo() const { return this->carInfo_ != nullptr;};
      void deleteCarInfo() { this->carInfo_ = nullptr;};
      inline const Module::CarInfo & getCarInfo() const { DARABONBA_PTR_GET_CONST(carInfo_, Module::CarInfo) };
      inline Module::CarInfo getCarInfo() { DARABONBA_PTR_GET(carInfo_, Module::CarInfo) };
      inline Module& setCarInfo(const Module::CarInfo & carInfo) { DARABONBA_PTR_SET_VALUE(carInfo_, carInfo) };
      inline Module& setCarInfo(Module::CarInfo && carInfo) { DARABONBA_PTR_SET_RVALUE(carInfo_, carInfo) };


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
      shared_ptr<Module::CarInfo> carInfo_ {};
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
    inline CarOrderQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CarOrderQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CarOrderQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CarOrderQueryResponseBody::Module) };
    inline CarOrderQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CarOrderQueryResponseBody::Module) };
    inline CarOrderQueryResponseBody& setModule(const CarOrderQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CarOrderQueryResponseBody& setModule(CarOrderQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CarOrderQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CarOrderQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CarOrderQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<CarOrderQueryResponseBody::Module> module_ {};
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
