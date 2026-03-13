// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CARORDERLISTQUERYRESPONSEBODY_HPP_
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
  class CarOrderListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, CarOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    CarOrderListQueryResponseBody() = default ;
    CarOrderListQueryResponseBody(const CarOrderListQueryResponseBody &) = default ;
    CarOrderListQueryResponseBody(CarOrderListQueryResponseBody &&) = default ;
    CarOrderListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarOrderListQueryResponseBody() = default ;
    CarOrderListQueryResponseBody& operator=(const CarOrderListQueryResponseBody &) = default ;
    CarOrderListQueryResponseBody& operator=(CarOrderListQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(page, page_);
        DARABONBA_PTR_TO_JSON(page_size, pageSize_);
        DARABONBA_PTR_TO_JSON(total_number, totalNumber_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(page, page_);
        DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
        DARABONBA_PTR_FROM_JSON(total_number, totalNumber_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->totalNumber_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline PageInfo& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNumber Field Functions 
      bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
      void deleteTotalNumber() { this->totalNumber_ = nullptr;};
      inline int32_t getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, 0) };
      inline PageInfo& setTotalNumber(int32_t totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


    protected:
      shared_ptr<int32_t> page_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalNumber_ {};
    };

    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_id, applyId_);
        DARABONBA_PTR_TO_JSON(apply_show_id, applyShowId_);
        DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
        DARABONBA_PTR_TO_JSON(business_category, businessCategory_);
        DARABONBA_PTR_TO_JSON(cancel_time, cancelTime_);
        DARABONBA_PTR_TO_JSON(car_info, carInfo_);
        DARABONBA_PTR_TO_JSON(car_level, carLevel_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
        DARABONBA_PTR_TO_JSON(cost_center_number, costCenterNumber_);
        DARABONBA_PTR_TO_JSON(dept_id, deptId_);
        DARABONBA_PTR_TO_JSON(dept_name, deptName_);
        DARABONBA_PTR_TO_JSON(driver_confirm_time, driverConfirmTime_);
        DARABONBA_PTR_TO_JSON(estimate_price, estimatePrice_);
        DARABONBA_PTR_TO_JSON(from_address, fromAddress_);
        DARABONBA_PTR_TO_JSON(from_city_ad_code, fromCityAdCode_);
        DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_TO_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_TO_JSON(is_special, isSpecial_);
        DARABONBA_PTR_TO_JSON(memo, memo_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
        DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_TO_JSON(pay_time, payTime_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_id, projectId_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(provider, provider_);
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
        DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_TO_JSON(to_address, toAddress_);
        DARABONBA_PTR_TO_JSON(to_city_ad_code, toCityAdCode_);
        DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
        DARABONBA_PTR_TO_JSON(travel_distance, travelDistance_);
        DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
        DARABONBA_PTR_TO_JSON(user_confirm, userConfirm_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(apply_show_id, applyShowId_);
        DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
        DARABONBA_PTR_FROM_JSON(business_category, businessCategory_);
        DARABONBA_PTR_FROM_JSON(cancel_time, cancelTime_);
        DARABONBA_PTR_FROM_JSON(car_info, carInfo_);
        DARABONBA_PTR_FROM_JSON(car_level, carLevel_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
        DARABONBA_PTR_FROM_JSON(cost_center_number, costCenterNumber_);
        DARABONBA_PTR_FROM_JSON(dept_id, deptId_);
        DARABONBA_PTR_FROM_JSON(dept_name, deptName_);
        DARABONBA_PTR_FROM_JSON(driver_confirm_time, driverConfirmTime_);
        DARABONBA_PTR_FROM_JSON(estimate_price, estimatePrice_);
        DARABONBA_PTR_FROM_JSON(from_address, fromAddress_);
        DARABONBA_PTR_FROM_JSON(from_city_ad_code, fromCityAdCode_);
        DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_FROM_JSON(invoice_title, invoiceTitle_);
        DARABONBA_PTR_FROM_JSON(is_special, isSpecial_);
        DARABONBA_PTR_FROM_JSON(memo, memo_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
        DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
        DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_id, projectId_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(provider, provider_);
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
        DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_FROM_JSON(to_address, toAddress_);
        DARABONBA_PTR_FROM_JSON(to_city_ad_code, toCityAdCode_);
        DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
        DARABONBA_PTR_FROM_JSON(travel_distance, travelDistance_);
        DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
        DARABONBA_PTR_FROM_JSON(user_confirm, userConfirm_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
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
      class UserAffiliateList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserAffiliateList& obj) { 
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, UserAffiliateList& obj) { 
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
        };
        UserAffiliateList() = default ;
        UserAffiliateList(const UserAffiliateList &) = default ;
        UserAffiliateList(UserAffiliateList &&) = default ;
        UserAffiliateList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserAffiliateList() = default ;
        UserAffiliateList& operator=(const UserAffiliateList &) = default ;
        UserAffiliateList& operator=(UserAffiliateList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline UserAffiliateList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline UserAffiliateList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      class PriceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PriceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
          DARABONBA_PTR_TO_JSON(category_type, categoryType_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(person_price, personPrice_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(category_type, categoryType_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
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
        && this->categoryType_ == nullptr && this->gmtCreate_ == nullptr && this->passengerName_ == nullptr && this->payType_ == nullptr && this->personPrice_ == nullptr
        && this->price_ == nullptr && this->tradeId_ == nullptr && this->type_ == nullptr; };
        // categoryCode Field Functions 
        bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
        void deleteCategoryCode() { this->categoryCode_ = nullptr;};
        inline int32_t getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, 0) };
        inline PriceInfoList& setCategoryCode(int32_t categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


        // categoryType Field Functions 
        bool hasCategoryType() const { return this->categoryType_ != nullptr;};
        void deleteCategoryType() { this->categoryType_ = nullptr;};
        inline int32_t getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, 0) };
        inline PriceInfoList& setCategoryType(int32_t categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


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


        // personPrice Field Functions 
        bool hasPersonPrice() const { return this->personPrice_ != nullptr;};
        void deletePersonPrice() { this->personPrice_ = nullptr;};
        inline double getPersonPrice() const { DARABONBA_PTR_GET_DEFAULT(personPrice_, 0.0) };
        inline PriceInfoList& setPersonPrice(double personPrice) { DARABONBA_PTR_SET_VALUE(personPrice_, personPrice) };


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
        shared_ptr<int32_t> categoryType_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> personPrice_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->applyShowId_ == nullptr && this->btripTitle_ == nullptr && this->businessCategory_ == nullptr && this->cancelTime_ == nullptr && this->carInfo_ == nullptr
        && this->carLevel_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr && this->costCenterId_ == nullptr && this->costCenterName_ == nullptr
        && this->costCenterNumber_ == nullptr && this->deptId_ == nullptr && this->deptName_ == nullptr && this->driverConfirmTime_ == nullptr && this->estimatePrice_ == nullptr
        && this->fromAddress_ == nullptr && this->fromCityAdCode_ == nullptr && this->fromCityName_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr
        && this->id_ == nullptr && this->invoiceId_ == nullptr && this->invoiceTitle_ == nullptr && this->isSpecial_ == nullptr && this->memo_ == nullptr
        && this->orderId_ == nullptr && this->orderStatus_ == nullptr && this->passengerName_ == nullptr && this->payTime_ == nullptr && this->priceInfoList_ == nullptr
        && this->projectCode_ == nullptr && this->projectId_ == nullptr && this->projectTitle_ == nullptr && this->provider_ == nullptr && this->publishTime_ == nullptr
        && this->realFromAddress_ == nullptr && this->realFromCityAdCode_ == nullptr && this->realFromCityName_ == nullptr && this->realToAddress_ == nullptr && this->realToCityAdCode_ == nullptr
        && this->realToCityName_ == nullptr && this->serviceType_ == nullptr && this->specialTypes_ == nullptr && this->takenTime_ == nullptr && this->thirdpartApplyId_ == nullptr
        && this->thirdpartBusinessId_ == nullptr && this->thirdpartItineraryId_ == nullptr && this->toAddress_ == nullptr && this->toCityAdCode_ == nullptr && this->toCityName_ == nullptr
        && this->travelDistance_ == nullptr && this->userAffiliateList_ == nullptr && this->userConfirm_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // applyShowId Field Functions 
      bool hasApplyShowId() const { return this->applyShowId_ != nullptr;};
      void deleteApplyShowId() { this->applyShowId_ = nullptr;};
      inline string getApplyShowId() const { DARABONBA_PTR_GET_DEFAULT(applyShowId_, "") };
      inline Module& setApplyShowId(string applyShowId) { DARABONBA_PTR_SET_VALUE(applyShowId_, applyShowId) };


      // btripTitle Field Functions 
      bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
      void deleteBtripTitle() { this->btripTitle_ = nullptr;};
      inline string getBtripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
      inline Module& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


      // businessCategory Field Functions 
      bool hasBusinessCategory() const { return this->businessCategory_ != nullptr;};
      void deleteBusinessCategory() { this->businessCategory_ = nullptr;};
      inline string getBusinessCategory() const { DARABONBA_PTR_GET_DEFAULT(businessCategory_, "") };
      inline Module& setBusinessCategory(string businessCategory) { DARABONBA_PTR_SET_VALUE(businessCategory_, businessCategory) };


      // cancelTime Field Functions 
      bool hasCancelTime() const { return this->cancelTime_ != nullptr;};
      void deleteCancelTime() { this->cancelTime_ = nullptr;};
      inline string getCancelTime() const { DARABONBA_PTR_GET_DEFAULT(cancelTime_, "") };
      inline Module& setCancelTime(string cancelTime) { DARABONBA_PTR_SET_VALUE(cancelTime_, cancelTime) };


      // carInfo Field Functions 
      bool hasCarInfo() const { return this->carInfo_ != nullptr;};
      void deleteCarInfo() { this->carInfo_ = nullptr;};
      inline string getCarInfo() const { DARABONBA_PTR_GET_DEFAULT(carInfo_, "") };
      inline Module& setCarInfo(string carInfo) { DARABONBA_PTR_SET_VALUE(carInfo_, carInfo) };


      // carLevel Field Functions 
      bool hasCarLevel() const { return this->carLevel_ != nullptr;};
      void deleteCarLevel() { this->carLevel_ = nullptr;};
      inline int32_t getCarLevel() const { DARABONBA_PTR_GET_DEFAULT(carLevel_, 0) };
      inline Module& setCarLevel(int32_t carLevel) { DARABONBA_PTR_SET_VALUE(carLevel_, carLevel) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // corpName Field Functions 
      bool hasCorpName() const { return this->corpName_ != nullptr;};
      void deleteCorpName() { this->corpName_ = nullptr;};
      inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
      inline Module& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline Module& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // costCenterName Field Functions 
      bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
      void deleteCostCenterName() { this->costCenterName_ = nullptr;};
      inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
      inline Module& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


      // costCenterNumber Field Functions 
      bool hasCostCenterNumber() const { return this->costCenterNumber_ != nullptr;};
      void deleteCostCenterNumber() { this->costCenterNumber_ = nullptr;};
      inline string getCostCenterNumber() const { DARABONBA_PTR_GET_DEFAULT(costCenterNumber_, "") };
      inline Module& setCostCenterNumber(string costCenterNumber) { DARABONBA_PTR_SET_VALUE(costCenterNumber_, costCenterNumber) };


      // deptId Field Functions 
      bool hasDeptId() const { return this->deptId_ != nullptr;};
      void deleteDeptId() { this->deptId_ = nullptr;};
      inline int64_t getDeptId() const { DARABONBA_PTR_GET_DEFAULT(deptId_, 0L) };
      inline Module& setDeptId(int64_t deptId) { DARABONBA_PTR_SET_VALUE(deptId_, deptId) };


      // deptName Field Functions 
      bool hasDeptName() const { return this->deptName_ != nullptr;};
      void deleteDeptName() { this->deptName_ = nullptr;};
      inline string getDeptName() const { DARABONBA_PTR_GET_DEFAULT(deptName_, "") };
      inline Module& setDeptName(string deptName) { DARABONBA_PTR_SET_VALUE(deptName_, deptName) };


      // driverConfirmTime Field Functions 
      bool hasDriverConfirmTime() const { return this->driverConfirmTime_ != nullptr;};
      void deleteDriverConfirmTime() { this->driverConfirmTime_ = nullptr;};
      inline string getDriverConfirmTime() const { DARABONBA_PTR_GET_DEFAULT(driverConfirmTime_, "") };
      inline Module& setDriverConfirmTime(string driverConfirmTime) { DARABONBA_PTR_SET_VALUE(driverConfirmTime_, driverConfirmTime) };


      // estimatePrice Field Functions 
      bool hasEstimatePrice() const { return this->estimatePrice_ != nullptr;};
      void deleteEstimatePrice() { this->estimatePrice_ = nullptr;};
      inline double getEstimatePrice() const { DARABONBA_PTR_GET_DEFAULT(estimatePrice_, 0.0) };
      inline Module& setEstimatePrice(double estimatePrice) { DARABONBA_PTR_SET_VALUE(estimatePrice_, estimatePrice) };


      // fromAddress Field Functions 
      bool hasFromAddress() const { return this->fromAddress_ != nullptr;};
      void deleteFromAddress() { this->fromAddress_ = nullptr;};
      inline string getFromAddress() const { DARABONBA_PTR_GET_DEFAULT(fromAddress_, "") };
      inline Module& setFromAddress(string fromAddress) { DARABONBA_PTR_SET_VALUE(fromAddress_, fromAddress) };


      // fromCityAdCode Field Functions 
      bool hasFromCityAdCode() const { return this->fromCityAdCode_ != nullptr;};
      void deleteFromCityAdCode() { this->fromCityAdCode_ = nullptr;};
      inline string getFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityAdCode_, "") };
      inline Module& setFromCityAdCode(string fromCityAdCode) { DARABONBA_PTR_SET_VALUE(fromCityAdCode_, fromCityAdCode) };


      // fromCityName Field Functions 
      bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
      void deleteFromCityName() { this->fromCityName_ = nullptr;};
      inline string getFromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
      inline Module& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Module& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Module& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // invoiceId Field Functions 
      bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
      void deleteInvoiceId() { this->invoiceId_ = nullptr;};
      inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
      inline Module& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


      // invoiceTitle Field Functions 
      bool hasInvoiceTitle() const { return this->invoiceTitle_ != nullptr;};
      void deleteInvoiceTitle() { this->invoiceTitle_ = nullptr;};
      inline string getInvoiceTitle() const { DARABONBA_PTR_GET_DEFAULT(invoiceTitle_, "") };
      inline Module& setInvoiceTitle(string invoiceTitle) { DARABONBA_PTR_SET_VALUE(invoiceTitle_, invoiceTitle) };


      // isSpecial Field Functions 
      bool hasIsSpecial() const { return this->isSpecial_ != nullptr;};
      void deleteIsSpecial() { this->isSpecial_ = nullptr;};
      inline bool getIsSpecial() const { DARABONBA_PTR_GET_DEFAULT(isSpecial_, false) };
      inline Module& setIsSpecial(bool isSpecial) { DARABONBA_PTR_SET_VALUE(isSpecial_, isSpecial) };


      // memo Field Functions 
      bool hasMemo() const { return this->memo_ != nullptr;};
      void deleteMemo() { this->memo_ = nullptr;};
      inline string getMemo() const { DARABONBA_PTR_GET_DEFAULT(memo_, "") };
      inline Module& setMemo(string memo) { DARABONBA_PTR_SET_VALUE(memo_, memo) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // orderStatus Field Functions 
      bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
      void deleteOrderStatus() { this->orderStatus_ = nullptr;};
      inline int32_t getOrderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
      inline Module& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


      // passengerName Field Functions 
      bool hasPassengerName() const { return this->passengerName_ != nullptr;};
      void deletePassengerName() { this->passengerName_ = nullptr;};
      inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
      inline Module& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


      // payTime Field Functions 
      bool hasPayTime() const { return this->payTime_ != nullptr;};
      void deletePayTime() { this->payTime_ = nullptr;};
      inline string getPayTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
      inline Module& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


      // priceInfoList Field Functions 
      bool hasPriceInfoList() const { return this->priceInfoList_ != nullptr;};
      void deletePriceInfoList() { this->priceInfoList_ = nullptr;};
      inline const vector<Module::PriceInfoList> & getPriceInfoList() const { DARABONBA_PTR_GET_CONST(priceInfoList_, vector<Module::PriceInfoList>) };
      inline vector<Module::PriceInfoList> getPriceInfoList() { DARABONBA_PTR_GET(priceInfoList_, vector<Module::PriceInfoList>) };
      inline Module& setPriceInfoList(const vector<Module::PriceInfoList> & priceInfoList) { DARABONBA_PTR_SET_VALUE(priceInfoList_, priceInfoList) };
      inline Module& setPriceInfoList(vector<Module::PriceInfoList> && priceInfoList) { DARABONBA_PTR_SET_RVALUE(priceInfoList_, priceInfoList) };


      // projectCode Field Functions 
      bool hasProjectCode() const { return this->projectCode_ != nullptr;};
      void deleteProjectCode() { this->projectCode_ = nullptr;};
      inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
      inline Module& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Module& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectTitle Field Functions 
      bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
      void deleteProjectTitle() { this->projectTitle_ = nullptr;};
      inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
      inline Module& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline int32_t getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, 0) };
      inline Module& setProvider(int32_t provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Module& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // realFromAddress Field Functions 
      bool hasRealFromAddress() const { return this->realFromAddress_ != nullptr;};
      void deleteRealFromAddress() { this->realFromAddress_ = nullptr;};
      inline string getRealFromAddress() const { DARABONBA_PTR_GET_DEFAULT(realFromAddress_, "") };
      inline Module& setRealFromAddress(string realFromAddress) { DARABONBA_PTR_SET_VALUE(realFromAddress_, realFromAddress) };


      // realFromCityAdCode Field Functions 
      bool hasRealFromCityAdCode() const { return this->realFromCityAdCode_ != nullptr;};
      void deleteRealFromCityAdCode() { this->realFromCityAdCode_ = nullptr;};
      inline string getRealFromCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realFromCityAdCode_, "") };
      inline Module& setRealFromCityAdCode(string realFromCityAdCode) { DARABONBA_PTR_SET_VALUE(realFromCityAdCode_, realFromCityAdCode) };


      // realFromCityName Field Functions 
      bool hasRealFromCityName() const { return this->realFromCityName_ != nullptr;};
      void deleteRealFromCityName() { this->realFromCityName_ = nullptr;};
      inline string getRealFromCityName() const { DARABONBA_PTR_GET_DEFAULT(realFromCityName_, "") };
      inline Module& setRealFromCityName(string realFromCityName) { DARABONBA_PTR_SET_VALUE(realFromCityName_, realFromCityName) };


      // realToAddress Field Functions 
      bool hasRealToAddress() const { return this->realToAddress_ != nullptr;};
      void deleteRealToAddress() { this->realToAddress_ = nullptr;};
      inline string getRealToAddress() const { DARABONBA_PTR_GET_DEFAULT(realToAddress_, "") };
      inline Module& setRealToAddress(string realToAddress) { DARABONBA_PTR_SET_VALUE(realToAddress_, realToAddress) };


      // realToCityAdCode Field Functions 
      bool hasRealToCityAdCode() const { return this->realToCityAdCode_ != nullptr;};
      void deleteRealToCityAdCode() { this->realToCityAdCode_ = nullptr;};
      inline string getRealToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(realToCityAdCode_, "") };
      inline Module& setRealToCityAdCode(string realToCityAdCode) { DARABONBA_PTR_SET_VALUE(realToCityAdCode_, realToCityAdCode) };


      // realToCityName Field Functions 
      bool hasRealToCityName() const { return this->realToCityName_ != nullptr;};
      void deleteRealToCityName() { this->realToCityName_ = nullptr;};
      inline string getRealToCityName() const { DARABONBA_PTR_GET_DEFAULT(realToCityName_, "") };
      inline Module& setRealToCityName(string realToCityName) { DARABONBA_PTR_SET_VALUE(realToCityName_, realToCityName) };


      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline int32_t getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0) };
      inline Module& setServiceType(int32_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // specialTypes Field Functions 
      bool hasSpecialTypes() const { return this->specialTypes_ != nullptr;};
      void deleteSpecialTypes() { this->specialTypes_ = nullptr;};
      inline const vector<string> & getSpecialTypes() const { DARABONBA_PTR_GET_CONST(specialTypes_, vector<string>) };
      inline vector<string> getSpecialTypes() { DARABONBA_PTR_GET(specialTypes_, vector<string>) };
      inline Module& setSpecialTypes(const vector<string> & specialTypes) { DARABONBA_PTR_SET_VALUE(specialTypes_, specialTypes) };
      inline Module& setSpecialTypes(vector<string> && specialTypes) { DARABONBA_PTR_SET_RVALUE(specialTypes_, specialTypes) };


      // takenTime Field Functions 
      bool hasTakenTime() const { return this->takenTime_ != nullptr;};
      void deleteTakenTime() { this->takenTime_ = nullptr;};
      inline string getTakenTime() const { DARABONBA_PTR_GET_DEFAULT(takenTime_, "") };
      inline Module& setTakenTime(string takenTime) { DARABONBA_PTR_SET_VALUE(takenTime_, takenTime) };


      // thirdpartApplyId Field Functions 
      bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
      void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
      inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
      inline Module& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


      // thirdpartBusinessId Field Functions 
      bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
      void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
      inline string getThirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
      inline Module& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


      // thirdpartItineraryId Field Functions 
      bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
      void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
      inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
      inline Module& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


      // toAddress Field Functions 
      bool hasToAddress() const { return this->toAddress_ != nullptr;};
      void deleteToAddress() { this->toAddress_ = nullptr;};
      inline string getToAddress() const { DARABONBA_PTR_GET_DEFAULT(toAddress_, "") };
      inline Module& setToAddress(string toAddress) { DARABONBA_PTR_SET_VALUE(toAddress_, toAddress) };


      // toCityAdCode Field Functions 
      bool hasToCityAdCode() const { return this->toCityAdCode_ != nullptr;};
      void deleteToCityAdCode() { this->toCityAdCode_ = nullptr;};
      inline string getToCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(toCityAdCode_, "") };
      inline Module& setToCityAdCode(string toCityAdCode) { DARABONBA_PTR_SET_VALUE(toCityAdCode_, toCityAdCode) };


      // toCityName Field Functions 
      bool hasToCityName() const { return this->toCityName_ != nullptr;};
      void deleteToCityName() { this->toCityName_ = nullptr;};
      inline string getToCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
      inline Module& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


      // travelDistance Field Functions 
      bool hasTravelDistance() const { return this->travelDistance_ != nullptr;};
      void deleteTravelDistance() { this->travelDistance_ = nullptr;};
      inline double getTravelDistance() const { DARABONBA_PTR_GET_DEFAULT(travelDistance_, 0.0) };
      inline Module& setTravelDistance(double travelDistance) { DARABONBA_PTR_SET_VALUE(travelDistance_, travelDistance) };


      // userAffiliateList Field Functions 
      bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
      void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
      inline const vector<Module::UserAffiliateList> & getUserAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Module::UserAffiliateList>) };
      inline vector<Module::UserAffiliateList> getUserAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Module::UserAffiliateList>) };
      inline Module& setUserAffiliateList(const vector<Module::UserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
      inline Module& setUserAffiliateList(vector<Module::UserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


      // userConfirm Field Functions 
      bool hasUserConfirm() const { return this->userConfirm_ != nullptr;};
      void deleteUserConfirm() { this->userConfirm_ = nullptr;};
      inline int32_t getUserConfirm() const { DARABONBA_PTR_GET_DEFAULT(userConfirm_, 0) };
      inline Module& setUserConfirm(int32_t userConfirm) { DARABONBA_PTR_SET_VALUE(userConfirm_, userConfirm) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Module& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Module& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<int64_t> applyId_ {};
      shared_ptr<string> applyShowId_ {};
      shared_ptr<string> btripTitle_ {};
      shared_ptr<string> businessCategory_ {};
      shared_ptr<string> cancelTime_ {};
      shared_ptr<string> carInfo_ {};
      shared_ptr<int32_t> carLevel_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> costCenterName_ {};
      shared_ptr<string> costCenterNumber_ {};
      shared_ptr<int64_t> deptId_ {};
      shared_ptr<string> deptName_ {};
      shared_ptr<string> driverConfirmTime_ {};
      shared_ptr<double> estimatePrice_ {};
      shared_ptr<string> fromAddress_ {};
      shared_ptr<string> fromCityAdCode_ {};
      shared_ptr<string> fromCityName_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> invoiceId_ {};
      shared_ptr<string> invoiceTitle_ {};
      shared_ptr<bool> isSpecial_ {};
      shared_ptr<string> memo_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<int32_t> orderStatus_ {};
      shared_ptr<string> passengerName_ {};
      shared_ptr<string> payTime_ {};
      shared_ptr<vector<Module::PriceInfoList>> priceInfoList_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<int32_t> provider_ {};
      shared_ptr<string> publishTime_ {};
      shared_ptr<string> realFromAddress_ {};
      shared_ptr<string> realFromCityAdCode_ {};
      shared_ptr<string> realFromCityName_ {};
      shared_ptr<string> realToAddress_ {};
      shared_ptr<string> realToCityAdCode_ {};
      shared_ptr<string> realToCityName_ {};
      shared_ptr<int32_t> serviceType_ {};
      shared_ptr<vector<string>> specialTypes_ {};
      shared_ptr<string> takenTime_ {};
      shared_ptr<string> thirdpartApplyId_ {};
      shared_ptr<string> thirdpartBusinessId_ {};
      shared_ptr<string> thirdpartItineraryId_ {};
      shared_ptr<string> toAddress_ {};
      shared_ptr<string> toCityAdCode_ {};
      shared_ptr<string> toCityName_ {};
      shared_ptr<double> travelDistance_ {};
      shared_ptr<vector<Module::UserAffiliateList>> userAffiliateList_ {};
      shared_ptr<int32_t> userConfirm_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CarOrderListQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CarOrderListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<CarOrderListQueryResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<CarOrderListQueryResponseBody::Module>) };
    inline vector<CarOrderListQueryResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<CarOrderListQueryResponseBody::Module>) };
    inline CarOrderListQueryResponseBody& setModule(const vector<CarOrderListQueryResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CarOrderListQueryResponseBody& setModule(vector<CarOrderListQueryResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const CarOrderListQueryResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, CarOrderListQueryResponseBody::PageInfo) };
    inline CarOrderListQueryResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, CarOrderListQueryResponseBody::PageInfo) };
    inline CarOrderListQueryResponseBody& setPageInfo(const CarOrderListQueryResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline CarOrderListQueryResponseBody& setPageInfo(CarOrderListQueryResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CarOrderListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CarOrderListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline CarOrderListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<CarOrderListQueryResponseBody::Module>> module_ {};
    shared_ptr<CarOrderListQueryResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
