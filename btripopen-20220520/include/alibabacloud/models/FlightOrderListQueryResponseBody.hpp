// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTORDERLISTQUERYRESPONSEBODY_HPP_
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
  class FlightOrderListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightOrderListQueryResponseBody() = default ;
    FlightOrderListQueryResponseBody(const FlightOrderListQueryResponseBody &) = default ;
    FlightOrderListQueryResponseBody(FlightOrderListQueryResponseBody &&) = default ;
    FlightOrderListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOrderListQueryResponseBody() = default ;
    FlightOrderListQueryResponseBody& operator=(const FlightOrderListQueryResponseBody &) = default ;
    FlightOrderListQueryResponseBody& operator=(FlightOrderListQueryResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(arr_airport, arrAirport_);
        DARABONBA_PTR_TO_JSON(arr_apt_prefecture_ad_code, arrAptPrefectureAdCode_);
        DARABONBA_PTR_TO_JSON(arr_apt_prefecture_name, arrAptPrefectureName_);
        DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
        DARABONBA_PTR_TO_JSON(arr_city_ad_code, arrCityAdCode_);
        DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
        DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
        DARABONBA_PTR_TO_JSON(contact_name, contactName_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
        DARABONBA_PTR_TO_JSON(dep_airport, depAirport_);
        DARABONBA_PTR_TO_JSON(dep_apt_prefecture_ad_code, depAptPrefectureAdCode_);
        DARABONBA_PTR_TO_JSON(dep_apt_prefecture_name, depAptPrefectureName_);
        DARABONBA_PTR_TO_JSON(dep_city, depCity_);
        DARABONBA_PTR_TO_JSON(dep_city_ad_code, depCityAdCode_);
        DARABONBA_PTR_TO_JSON(dep_date, depDate_);
        DARABONBA_PTR_TO_JSON(depart_id, departId_);
        DARABONBA_PTR_TO_JSON(depart_name, departName_);
        DARABONBA_PTR_TO_JSON(discount, discount_);
        DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(insure_info_list, insureInfoList_);
        DARABONBA_PTR_TO_JSON(invoice, invoice_);
        DARABONBA_PTR_TO_JSON(passenger_count, passengerCount_);
        DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_id, projectId_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(ret_date, retDate_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(third_part_project_id, thirdPartProjectId_);
        DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_TO_JSON(trip_type, tripType_);
        DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(arr_airport, arrAirport_);
        DARABONBA_PTR_FROM_JSON(arr_apt_prefecture_ad_code, arrAptPrefectureAdCode_);
        DARABONBA_PTR_FROM_JSON(arr_apt_prefecture_name, arrAptPrefectureName_);
        DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
        DARABONBA_PTR_FROM_JSON(arr_city_ad_code, arrCityAdCode_);
        DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
        DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
        DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
        DARABONBA_PTR_FROM_JSON(dep_airport, depAirport_);
        DARABONBA_PTR_FROM_JSON(dep_apt_prefecture_ad_code, depAptPrefectureAdCode_);
        DARABONBA_PTR_FROM_JSON(dep_apt_prefecture_name, depAptPrefectureName_);
        DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
        DARABONBA_PTR_FROM_JSON(dep_city_ad_code, depCityAdCode_);
        DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
        DARABONBA_PTR_FROM_JSON(depart_id, departId_);
        DARABONBA_PTR_FROM_JSON(depart_name, departName_);
        DARABONBA_PTR_FROM_JSON(discount, discount_);
        DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(insure_info_list, insureInfoList_);
        DARABONBA_PTR_FROM_JSON(invoice, invoice_);
        DARABONBA_PTR_FROM_JSON(passenger_count, passengerCount_);
        DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
        DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_id, projectId_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(ret_date, retDate_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(third_part_project_id, thirdPartProjectId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
        DARABONBA_PTR_FROM_JSON(user_affiliate_list, userAffiliateList_);
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
          DARABONBA_PTR_TO_JSON(change_flight_no, changeFlightNo_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(end_time, endTime_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(original_ticket_no, originalTicketNo_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(start_time, startTime_);
          DARABONBA_PTR_TO_JSON(ticket_no, ticketNo_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(category_type, categoryType_);
          DARABONBA_PTR_FROM_JSON(change_flight_no, changeFlightNo_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(end_time, endTime_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(original_ticket_no, originalTicketNo_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(pay_type, payType_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(start_time, startTime_);
          DARABONBA_PTR_FROM_JSON(ticket_no, ticketNo_);
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
        && this->categoryType_ == nullptr && this->changeFlightNo_ == nullptr && this->discount_ == nullptr && this->endTime_ == nullptr && this->gmtCreate_ == nullptr
        && this->originalTicketNo_ == nullptr && this->passengerName_ == nullptr && this->payType_ == nullptr && this->price_ == nullptr && this->startTime_ == nullptr
        && this->ticketNo_ == nullptr && this->tradeId_ == nullptr && this->type_ == nullptr; };
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


        // changeFlightNo Field Functions 
        bool hasChangeFlightNo() const { return this->changeFlightNo_ != nullptr;};
        void deleteChangeFlightNo() { this->changeFlightNo_ = nullptr;};
        inline string getChangeFlightNo() const { DARABONBA_PTR_GET_DEFAULT(changeFlightNo_, "") };
        inline PriceInfoList& setChangeFlightNo(string changeFlightNo) { DARABONBA_PTR_SET_VALUE(changeFlightNo_, changeFlightNo) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
        inline PriceInfoList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline PriceInfoList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline PriceInfoList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // originalTicketNo Field Functions 
        bool hasOriginalTicketNo() const { return this->originalTicketNo_ != nullptr;};
        void deleteOriginalTicketNo() { this->originalTicketNo_ = nullptr;};
        inline string getOriginalTicketNo() const { DARABONBA_PTR_GET_DEFAULT(originalTicketNo_, "") };
        inline PriceInfoList& setOriginalTicketNo(string originalTicketNo) { DARABONBA_PTR_SET_VALUE(originalTicketNo_, originalTicketNo) };


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


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline PriceInfoList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // ticketNo Field Functions 
        bool hasTicketNo() const { return this->ticketNo_ != nullptr;};
        void deleteTicketNo() { this->ticketNo_ = nullptr;};
        inline string getTicketNo() const { DARABONBA_PTR_GET_DEFAULT(ticketNo_, "") };
        inline PriceInfoList& setTicketNo(string ticketNo) { DARABONBA_PTR_SET_VALUE(ticketNo_, ticketNo) };


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
        shared_ptr<string> changeFlightNo_ {};
        shared_ptr<string> discount_ {};
        shared_ptr<string> endTime_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> originalTicketNo_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> startTime_ {};
        shared_ptr<string> ticketNo_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      class Invoice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Invoice& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Invoice& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        Invoice() = default ;
        Invoice(const Invoice &) = default ;
        Invoice(Invoice &&) = default ;
        Invoice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Invoice() = default ;
        Invoice& operator=(const Invoice &) = default ;
        Invoice& operator=(Invoice &&) = default ;
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
        inline Invoice& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Invoice& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> title_ {};
      };

      class InsureInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InsureInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(insure_no, insureNo_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InsureInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(insure_no, insureNo_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        InsureInfoList() = default ;
        InsureInfoList(const InsureInfoList &) = default ;
        InsureInfoList(InsureInfoList &&) = default ;
        InsureInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InsureInfoList() = default ;
        InsureInfoList& operator=(const InsureInfoList &) = default ;
        InsureInfoList& operator=(InsureInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->insureNo_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
        // insureNo Field Functions 
        bool hasInsureNo() const { return this->insureNo_ != nullptr;};
        void deleteInsureNo() { this->insureNo_ = nullptr;};
        inline string getInsureNo() const { DARABONBA_PTR_GET_DEFAULT(insureNo_, "") };
        inline InsureInfoList& setInsureNo(string insureNo) { DARABONBA_PTR_SET_VALUE(insureNo_, insureNo) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InsureInfoList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline InsureInfoList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> insureNo_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> status_ {};
      };

      class CostCenter : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CostCenter& obj) { 
          DARABONBA_PTR_TO_JSON(corp_id, corpId_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(number, number_);
        };
        friend void from_json(const Darabonba::Json& j, CostCenter& obj) { 
          DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(number, number_);
        };
        CostCenter() = default ;
        CostCenter(const CostCenter &) = default ;
        CostCenter(CostCenter &&) = default ;
        CostCenter(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CostCenter() = default ;
        CostCenter& operator=(const CostCenter &) = default ;
        CostCenter& operator=(CostCenter &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->corpId_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->number_ == nullptr; };
        // corpId Field Functions 
        bool hasCorpId() const { return this->corpId_ != nullptr;};
        void deleteCorpId() { this->corpId_ = nullptr;};
        inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
        inline CostCenter& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline CostCenter& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline CostCenter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline CostCenter& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


      protected:
        shared_ptr<string> corpId_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> number_ {};
      };

      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->arrAirport_ == nullptr && this->arrAptPrefectureAdCode_ == nullptr && this->arrAptPrefectureName_ == nullptr && this->arrCity_ == nullptr && this->arrCityAdCode_ == nullptr
        && this->btripTitle_ == nullptr && this->cabinClass_ == nullptr && this->contactName_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr
        && this->costCenter_ == nullptr && this->depAirport_ == nullptr && this->depAptPrefectureAdCode_ == nullptr && this->depAptPrefectureName_ == nullptr && this->depCity_ == nullptr
        && this->depCityAdCode_ == nullptr && this->depDate_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr && this->discount_ == nullptr
        && this->flightNo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->insureInfoList_ == nullptr
        && this->invoice_ == nullptr && this->passengerCount_ == nullptr && this->passengerName_ == nullptr && this->priceInfoList_ == nullptr && this->projectCode_ == nullptr
        && this->projectId_ == nullptr && this->projectTitle_ == nullptr && this->retDate_ == nullptr && this->status_ == nullptr && this->thirdPartProjectId_ == nullptr
        && this->thirdpartApplyId_ == nullptr && this->thirdpartBusinessId_ == nullptr && this->thirdpartItineraryId_ == nullptr && this->tripType_ == nullptr && this->userAffiliateList_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // arrAirport Field Functions 
      bool hasArrAirport() const { return this->arrAirport_ != nullptr;};
      void deleteArrAirport() { this->arrAirport_ = nullptr;};
      inline string getArrAirport() const { DARABONBA_PTR_GET_DEFAULT(arrAirport_, "") };
      inline Module& setArrAirport(string arrAirport) { DARABONBA_PTR_SET_VALUE(arrAirport_, arrAirport) };


      // arrAptPrefectureAdCode Field Functions 
      bool hasArrAptPrefectureAdCode() const { return this->arrAptPrefectureAdCode_ != nullptr;};
      void deleteArrAptPrefectureAdCode() { this->arrAptPrefectureAdCode_ = nullptr;};
      inline string getArrAptPrefectureAdCode() const { DARABONBA_PTR_GET_DEFAULT(arrAptPrefectureAdCode_, "") };
      inline Module& setArrAptPrefectureAdCode(string arrAptPrefectureAdCode) { DARABONBA_PTR_SET_VALUE(arrAptPrefectureAdCode_, arrAptPrefectureAdCode) };


      // arrAptPrefectureName Field Functions 
      bool hasArrAptPrefectureName() const { return this->arrAptPrefectureName_ != nullptr;};
      void deleteArrAptPrefectureName() { this->arrAptPrefectureName_ = nullptr;};
      inline string getArrAptPrefectureName() const { DARABONBA_PTR_GET_DEFAULT(arrAptPrefectureName_, "") };
      inline Module& setArrAptPrefectureName(string arrAptPrefectureName) { DARABONBA_PTR_SET_VALUE(arrAptPrefectureName_, arrAptPrefectureName) };


      // arrCity Field Functions 
      bool hasArrCity() const { return this->arrCity_ != nullptr;};
      void deleteArrCity() { this->arrCity_ = nullptr;};
      inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
      inline Module& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


      // arrCityAdCode Field Functions 
      bool hasArrCityAdCode() const { return this->arrCityAdCode_ != nullptr;};
      void deleteArrCityAdCode() { this->arrCityAdCode_ = nullptr;};
      inline string getArrCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityAdCode_, "") };
      inline Module& setArrCityAdCode(string arrCityAdCode) { DARABONBA_PTR_SET_VALUE(arrCityAdCode_, arrCityAdCode) };


      // btripTitle Field Functions 
      bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
      void deleteBtripTitle() { this->btripTitle_ = nullptr;};
      inline string getBtripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
      inline Module& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


      // cabinClass Field Functions 
      bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
      void deleteCabinClass() { this->cabinClass_ = nullptr;};
      inline string getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, "") };
      inline Module& setCabinClass(string cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


      // contactName Field Functions 
      bool hasContactName() const { return this->contactName_ != nullptr;};
      void deleteContactName() { this->contactName_ = nullptr;};
      inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
      inline Module& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


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


      // costCenter Field Functions 
      bool hasCostCenter() const { return this->costCenter_ != nullptr;};
      void deleteCostCenter() { this->costCenter_ = nullptr;};
      inline const Module::CostCenter & getCostCenter() const { DARABONBA_PTR_GET_CONST(costCenter_, Module::CostCenter) };
      inline Module::CostCenter getCostCenter() { DARABONBA_PTR_GET(costCenter_, Module::CostCenter) };
      inline Module& setCostCenter(const Module::CostCenter & costCenter) { DARABONBA_PTR_SET_VALUE(costCenter_, costCenter) };
      inline Module& setCostCenter(Module::CostCenter && costCenter) { DARABONBA_PTR_SET_RVALUE(costCenter_, costCenter) };


      // depAirport Field Functions 
      bool hasDepAirport() const { return this->depAirport_ != nullptr;};
      void deleteDepAirport() { this->depAirport_ = nullptr;};
      inline string getDepAirport() const { DARABONBA_PTR_GET_DEFAULT(depAirport_, "") };
      inline Module& setDepAirport(string depAirport) { DARABONBA_PTR_SET_VALUE(depAirport_, depAirport) };


      // depAptPrefectureAdCode Field Functions 
      bool hasDepAptPrefectureAdCode() const { return this->depAptPrefectureAdCode_ != nullptr;};
      void deleteDepAptPrefectureAdCode() { this->depAptPrefectureAdCode_ = nullptr;};
      inline string getDepAptPrefectureAdCode() const { DARABONBA_PTR_GET_DEFAULT(depAptPrefectureAdCode_, "") };
      inline Module& setDepAptPrefectureAdCode(string depAptPrefectureAdCode) { DARABONBA_PTR_SET_VALUE(depAptPrefectureAdCode_, depAptPrefectureAdCode) };


      // depAptPrefectureName Field Functions 
      bool hasDepAptPrefectureName() const { return this->depAptPrefectureName_ != nullptr;};
      void deleteDepAptPrefectureName() { this->depAptPrefectureName_ = nullptr;};
      inline string getDepAptPrefectureName() const { DARABONBA_PTR_GET_DEFAULT(depAptPrefectureName_, "") };
      inline Module& setDepAptPrefectureName(string depAptPrefectureName) { DARABONBA_PTR_SET_VALUE(depAptPrefectureName_, depAptPrefectureName) };


      // depCity Field Functions 
      bool hasDepCity() const { return this->depCity_ != nullptr;};
      void deleteDepCity() { this->depCity_ = nullptr;};
      inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
      inline Module& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


      // depCityAdCode Field Functions 
      bool hasDepCityAdCode() const { return this->depCityAdCode_ != nullptr;};
      void deleteDepCityAdCode() { this->depCityAdCode_ = nullptr;};
      inline string getDepCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(depCityAdCode_, "") };
      inline Module& setDepCityAdCode(string depCityAdCode) { DARABONBA_PTR_SET_VALUE(depCityAdCode_, depCityAdCode) };


      // depDate Field Functions 
      bool hasDepDate() const { return this->depDate_ != nullptr;};
      void deleteDepDate() { this->depDate_ = nullptr;};
      inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
      inline Module& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


      // departId Field Functions 
      bool hasDepartId() const { return this->departId_ != nullptr;};
      void deleteDepartId() { this->departId_ = nullptr;};
      inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
      inline Module& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


      // departName Field Functions 
      bool hasDepartName() const { return this->departName_ != nullptr;};
      void deleteDepartName() { this->departName_ = nullptr;};
      inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
      inline Module& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


      // discount Field Functions 
      bool hasDiscount() const { return this->discount_ != nullptr;};
      void deleteDiscount() { this->discount_ = nullptr;};
      inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
      inline Module& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


      // flightNo Field Functions 
      bool hasFlightNo() const { return this->flightNo_ != nullptr;};
      void deleteFlightNo() { this->flightNo_ = nullptr;};
      inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
      inline Module& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


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


      // insureInfoList Field Functions 
      bool hasInsureInfoList() const { return this->insureInfoList_ != nullptr;};
      void deleteInsureInfoList() { this->insureInfoList_ = nullptr;};
      inline const vector<Module::InsureInfoList> & getInsureInfoList() const { DARABONBA_PTR_GET_CONST(insureInfoList_, vector<Module::InsureInfoList>) };
      inline vector<Module::InsureInfoList> getInsureInfoList() { DARABONBA_PTR_GET(insureInfoList_, vector<Module::InsureInfoList>) };
      inline Module& setInsureInfoList(const vector<Module::InsureInfoList> & insureInfoList) { DARABONBA_PTR_SET_VALUE(insureInfoList_, insureInfoList) };
      inline Module& setInsureInfoList(vector<Module::InsureInfoList> && insureInfoList) { DARABONBA_PTR_SET_RVALUE(insureInfoList_, insureInfoList) };


      // invoice Field Functions 
      bool hasInvoice() const { return this->invoice_ != nullptr;};
      void deleteInvoice() { this->invoice_ = nullptr;};
      inline const Module::Invoice & getInvoice() const { DARABONBA_PTR_GET_CONST(invoice_, Module::Invoice) };
      inline Module::Invoice getInvoice() { DARABONBA_PTR_GET(invoice_, Module::Invoice) };
      inline Module& setInvoice(const Module::Invoice & invoice) { DARABONBA_PTR_SET_VALUE(invoice_, invoice) };
      inline Module& setInvoice(Module::Invoice && invoice) { DARABONBA_PTR_SET_RVALUE(invoice_, invoice) };


      // passengerCount Field Functions 
      bool hasPassengerCount() const { return this->passengerCount_ != nullptr;};
      void deletePassengerCount() { this->passengerCount_ = nullptr;};
      inline int32_t getPassengerCount() const { DARABONBA_PTR_GET_DEFAULT(passengerCount_, 0) };
      inline Module& setPassengerCount(int32_t passengerCount) { DARABONBA_PTR_SET_VALUE(passengerCount_, passengerCount) };


      // passengerName Field Functions 
      bool hasPassengerName() const { return this->passengerName_ != nullptr;};
      void deletePassengerName() { this->passengerName_ = nullptr;};
      inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
      inline Module& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


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


      // retDate Field Functions 
      bool hasRetDate() const { return this->retDate_ != nullptr;};
      void deleteRetDate() { this->retDate_ = nullptr;};
      inline string getRetDate() const { DARABONBA_PTR_GET_DEFAULT(retDate_, "") };
      inline Module& setRetDate(string retDate) { DARABONBA_PTR_SET_VALUE(retDate_, retDate) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // thirdPartProjectId Field Functions 
      bool hasThirdPartProjectId() const { return this->thirdPartProjectId_ != nullptr;};
      void deleteThirdPartProjectId() { this->thirdPartProjectId_ = nullptr;};
      inline string getThirdPartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartProjectId_, "") };
      inline Module& setThirdPartProjectId(string thirdPartProjectId) { DARABONBA_PTR_SET_VALUE(thirdPartProjectId_, thirdPartProjectId) };


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


      // tripType Field Functions 
      bool hasTripType() const { return this->tripType_ != nullptr;};
      void deleteTripType() { this->tripType_ = nullptr;};
      inline int32_t getTripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
      inline Module& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


      // userAffiliateList Field Functions 
      bool hasUserAffiliateList() const { return this->userAffiliateList_ != nullptr;};
      void deleteUserAffiliateList() { this->userAffiliateList_ = nullptr;};
      inline const vector<Module::UserAffiliateList> & getUserAffiliateList() const { DARABONBA_PTR_GET_CONST(userAffiliateList_, vector<Module::UserAffiliateList>) };
      inline vector<Module::UserAffiliateList> getUserAffiliateList() { DARABONBA_PTR_GET(userAffiliateList_, vector<Module::UserAffiliateList>) };
      inline Module& setUserAffiliateList(const vector<Module::UserAffiliateList> & userAffiliateList) { DARABONBA_PTR_SET_VALUE(userAffiliateList_, userAffiliateList) };
      inline Module& setUserAffiliateList(vector<Module::UserAffiliateList> && userAffiliateList) { DARABONBA_PTR_SET_RVALUE(userAffiliateList_, userAffiliateList) };


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
      shared_ptr<string> arrAirport_ {};
      shared_ptr<string> arrAptPrefectureAdCode_ {};
      shared_ptr<string> arrAptPrefectureName_ {};
      shared_ptr<string> arrCity_ {};
      shared_ptr<string> arrCityAdCode_ {};
      shared_ptr<string> btripTitle_ {};
      shared_ptr<string> cabinClass_ {};
      shared_ptr<string> contactName_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<Module::CostCenter> costCenter_ {};
      shared_ptr<string> depAirport_ {};
      shared_ptr<string> depAptPrefectureAdCode_ {};
      shared_ptr<string> depAptPrefectureName_ {};
      shared_ptr<string> depCity_ {};
      shared_ptr<string> depCityAdCode_ {};
      shared_ptr<string> depDate_ {};
      shared_ptr<string> departId_ {};
      shared_ptr<string> departName_ {};
      shared_ptr<string> discount_ {};
      shared_ptr<string> flightNo_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<vector<Module::InsureInfoList>> insureInfoList_ {};
      shared_ptr<Module::Invoice> invoice_ {};
      shared_ptr<int32_t> passengerCount_ {};
      shared_ptr<string> passengerName_ {};
      shared_ptr<vector<Module::PriceInfoList>> priceInfoList_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<string> retDate_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> thirdPartProjectId_ {};
      shared_ptr<string> thirdpartApplyId_ {};
      shared_ptr<string> thirdpartBusinessId_ {};
      shared_ptr<string> thirdpartItineraryId_ {};
      shared_ptr<int32_t> tripType_ {};
      shared_ptr<vector<Module::UserAffiliateList>> userAffiliateList_ {};
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
    inline FlightOrderListQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightOrderListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<FlightOrderListQueryResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<FlightOrderListQueryResponseBody::Module>) };
    inline vector<FlightOrderListQueryResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<FlightOrderListQueryResponseBody::Module>) };
    inline FlightOrderListQueryResponseBody& setModule(const vector<FlightOrderListQueryResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightOrderListQueryResponseBody& setModule(vector<FlightOrderListQueryResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const FlightOrderListQueryResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, FlightOrderListQueryResponseBody::PageInfo) };
    inline FlightOrderListQueryResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, FlightOrderListQueryResponseBody::PageInfo) };
    inline FlightOrderListQueryResponseBody& setPageInfo(const FlightOrderListQueryResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline FlightOrderListQueryResponseBody& setPageInfo(FlightOrderListQueryResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightOrderListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightOrderListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightOrderListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<FlightOrderListQueryResponseBody::Module>> module_ {};
    shared_ptr<FlightOrderListQueryResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
