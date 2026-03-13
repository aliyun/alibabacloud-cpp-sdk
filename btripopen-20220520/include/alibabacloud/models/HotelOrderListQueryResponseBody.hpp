// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERLISTQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERLISTQUERYRESPONSEBODY_HPP_
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
  class HotelOrderListQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(page_info, pageInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderListQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(page_info, pageInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelOrderListQueryResponseBody() = default ;
    HotelOrderListQueryResponseBody(const HotelOrderListQueryResponseBody &) = default ;
    HotelOrderListQueryResponseBody(HotelOrderListQueryResponseBody &&) = default ;
    HotelOrderListQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderListQueryResponseBody() = default ;
    HotelOrderListQueryResponseBody& operator=(const HotelOrderListQueryResponseBody &) = default ;
    HotelOrderListQueryResponseBody& operator=(HotelOrderListQueryResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(btrip_title, btripTitle_);
        DARABONBA_PTR_TO_JSON(category, category_);
        DARABONBA_PTR_TO_JSON(check_in, checkIn_);
        DARABONBA_PTR_TO_JSON(check_out, checkOut_);
        DARABONBA_PTR_TO_JSON(city, city_);
        DARABONBA_PTR_TO_JSON(city_ad_code, cityAdCode_);
        DARABONBA_PTR_TO_JSON(contact_name, contactName_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(cost_center, costCenter_);
        DARABONBA_PTR_TO_JSON(country_code, countryCode_);
        DARABONBA_PTR_TO_JSON(country_name, countryName_);
        DARABONBA_PTR_TO_JSON(depart_id, departId_);
        DARABONBA_PTR_TO_JSON(depart_name, departName_);
        DARABONBA_PTR_TO_JSON(extend_field, extendField_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(guest, guest_);
        DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
        DARABONBA_PTR_TO_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(invoice, invoice_);
        DARABONBA_PTR_TO_JSON(night, night_);
        DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
        DARABONBA_PTR_TO_JSON(order_status_desc, orderStatusDesc_);
        DARABONBA_PTR_TO_JSON(order_type, orderType_);
        DARABONBA_PTR_TO_JSON(order_type_desc, orderTypeDesc_);
        DARABONBA_PTR_TO_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_id, projectId_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(room_num, roomNum_);
        DARABONBA_PTR_TO_JSON(room_type, roomType_);
        DARABONBA_PTR_TO_JSON(supplier, supplier_);
        DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_TO_JSON(thirdpart_project_id, thirdpartProjectId_);
        DARABONBA_PTR_TO_JSON(user_affiliate_list, userAffiliateList_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(btrip_title, btripTitle_);
        DARABONBA_PTR_FROM_JSON(category, category_);
        DARABONBA_PTR_FROM_JSON(check_in, checkIn_);
        DARABONBA_PTR_FROM_JSON(check_out, checkOut_);
        DARABONBA_PTR_FROM_JSON(city, city_);
        DARABONBA_PTR_FROM_JSON(city_ad_code, cityAdCode_);
        DARABONBA_PTR_FROM_JSON(contact_name, contactName_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(cost_center, costCenter_);
        DARABONBA_PTR_FROM_JSON(country_code, countryCode_);
        DARABONBA_PTR_FROM_JSON(country_name, countryName_);
        DARABONBA_PTR_FROM_JSON(depart_id, departId_);
        DARABONBA_PTR_FROM_JSON(depart_name, departName_);
        DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(guest, guest_);
        DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
        DARABONBA_PTR_FROM_JSON(hotel_support_vat_invoice_type, hotelSupportVatInvoiceType_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(invoice, invoice_);
        DARABONBA_PTR_FROM_JSON(night, night_);
        DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
        DARABONBA_PTR_FROM_JSON(order_status_desc, orderStatusDesc_);
        DARABONBA_PTR_FROM_JSON(order_type, orderType_);
        DARABONBA_PTR_FROM_JSON(order_type_desc, orderTypeDesc_);
        DARABONBA_PTR_FROM_JSON(price_info_list, priceInfoList_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_id, projectId_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(room_num, roomNum_);
        DARABONBA_PTR_FROM_JSON(room_type, roomType_);
        DARABONBA_PTR_FROM_JSON(supplier, supplier_);
        DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_project_id, thirdpartProjectId_);
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
          DARABONBA_PTR_TO_JSON(category, category_);
          DARABONBA_PTR_TO_JSON(category_code, categoryCode_);
          DARABONBA_PTR_TO_JSON(category_type, categoryType_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(pay_type, payType_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(trade_id, tradeId_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, PriceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(category, category_);
          DARABONBA_PTR_FROM_JSON(category_code, categoryCode_);
          DARABONBA_PTR_FROM_JSON(category_type, categoryType_);
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
        virtual bool empty() const override { return this->category_ == nullptr
        && this->categoryCode_ == nullptr && this->categoryType_ == nullptr && this->gmtCreate_ == nullptr && this->passengerName_ == nullptr && this->payType_ == nullptr
        && this->price_ == nullptr && this->tradeId_ == nullptr && this->type_ == nullptr; };
        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline PriceInfoList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


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
        shared_ptr<string> category_ {};
        shared_ptr<int32_t> categoryCode_ {};
        shared_ptr<int32_t> categoryType_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int32_t> payType_ {};
        shared_ptr<double> price_ {};
        shared_ptr<string> tradeId_ {};
        shared_ptr<int32_t> type_ {};
      };

      class Invoice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Invoice& obj) { 
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, Invoice& obj) { 
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
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
        && this->invoiceType_ == nullptr && this->title_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Invoice& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // invoiceType Field Functions 
        bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
        void deleteInvoiceType() { this->invoiceType_ = nullptr;};
        inline int32_t getInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, 0) };
        inline Invoice& setInvoiceType(int32_t invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline Invoice& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<int64_t> id_ {};
        shared_ptr<int32_t> invoiceType_ {};
        shared_ptr<string> title_ {};
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
        && this->btripTitle_ == nullptr && this->category_ == nullptr && this->checkIn_ == nullptr && this->checkOut_ == nullptr && this->city_ == nullptr
        && this->cityAdCode_ == nullptr && this->contactName_ == nullptr && this->corpId_ == nullptr && this->corpName_ == nullptr && this->costCenter_ == nullptr
        && this->countryCode_ == nullptr && this->countryName_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr && this->extendField_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->guest_ == nullptr && this->hotelName_ == nullptr && this->hotelSupportVatInvoiceType_ == nullptr
        && this->id_ == nullptr && this->invoice_ == nullptr && this->night_ == nullptr && this->orderStatus_ == nullptr && this->orderStatusDesc_ == nullptr
        && this->orderType_ == nullptr && this->orderTypeDesc_ == nullptr && this->priceInfoList_ == nullptr && this->projectCode_ == nullptr && this->projectId_ == nullptr
        && this->projectTitle_ == nullptr && this->roomNum_ == nullptr && this->roomType_ == nullptr && this->supplier_ == nullptr && this->thirdpartApplyId_ == nullptr
        && this->thirdpartBusinessId_ == nullptr && this->thirdpartItineraryId_ == nullptr && this->thirdpartProjectId_ == nullptr && this->userAffiliateList_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // btripTitle Field Functions 
      bool hasBtripTitle() const { return this->btripTitle_ != nullptr;};
      void deleteBtripTitle() { this->btripTitle_ = nullptr;};
      inline string getBtripTitle() const { DARABONBA_PTR_GET_DEFAULT(btripTitle_, "") };
      inline Module& setBtripTitle(string btripTitle) { DARABONBA_PTR_SET_VALUE(btripTitle_, btripTitle) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline int32_t getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, 0) };
      inline Module& setCategory(int32_t category) { DARABONBA_PTR_SET_VALUE(category_, category) };


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


      // city Field Functions 
      bool hasCity() const { return this->city_ != nullptr;};
      void deleteCity() { this->city_ = nullptr;};
      inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
      inline Module& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


      // cityAdCode Field Functions 
      bool hasCityAdCode() const { return this->cityAdCode_ != nullptr;};
      void deleteCityAdCode() { this->cityAdCode_ = nullptr;};
      inline string getCityAdCode() const { DARABONBA_PTR_GET_DEFAULT(cityAdCode_, "") };
      inline Module& setCityAdCode(string cityAdCode) { DARABONBA_PTR_SET_VALUE(cityAdCode_, cityAdCode) };


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


      // countryCode Field Functions 
      bool hasCountryCode() const { return this->countryCode_ != nullptr;};
      void deleteCountryCode() { this->countryCode_ = nullptr;};
      inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
      inline Module& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


      // countryName Field Functions 
      bool hasCountryName() const { return this->countryName_ != nullptr;};
      void deleteCountryName() { this->countryName_ = nullptr;};
      inline string getCountryName() const { DARABONBA_PTR_GET_DEFAULT(countryName_, "") };
      inline Module& setCountryName(string countryName) { DARABONBA_PTR_SET_VALUE(countryName_, countryName) };


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


      // extendField Field Functions 
      bool hasExtendField() const { return this->extendField_ != nullptr;};
      void deleteExtendField() { this->extendField_ = nullptr;};
      inline string getExtendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
      inline Module& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


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


      // guest Field Functions 
      bool hasGuest() const { return this->guest_ != nullptr;};
      void deleteGuest() { this->guest_ = nullptr;};
      inline string getGuest() const { DARABONBA_PTR_GET_DEFAULT(guest_, "") };
      inline Module& setGuest(string guest) { DARABONBA_PTR_SET_VALUE(guest_, guest) };


      // hotelName Field Functions 
      bool hasHotelName() const { return this->hotelName_ != nullptr;};
      void deleteHotelName() { this->hotelName_ = nullptr;};
      inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
      inline Module& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


      // hotelSupportVatInvoiceType Field Functions 
      bool hasHotelSupportVatInvoiceType() const { return this->hotelSupportVatInvoiceType_ != nullptr;};
      void deleteHotelSupportVatInvoiceType() { this->hotelSupportVatInvoiceType_ = nullptr;};
      inline int32_t getHotelSupportVatInvoiceType() const { DARABONBA_PTR_GET_DEFAULT(hotelSupportVatInvoiceType_, 0) };
      inline Module& setHotelSupportVatInvoiceType(int32_t hotelSupportVatInvoiceType) { DARABONBA_PTR_SET_VALUE(hotelSupportVatInvoiceType_, hotelSupportVatInvoiceType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // invoice Field Functions 
      bool hasInvoice() const { return this->invoice_ != nullptr;};
      void deleteInvoice() { this->invoice_ = nullptr;};
      inline const Module::Invoice & getInvoice() const { DARABONBA_PTR_GET_CONST(invoice_, Module::Invoice) };
      inline Module::Invoice getInvoice() { DARABONBA_PTR_GET(invoice_, Module::Invoice) };
      inline Module& setInvoice(const Module::Invoice & invoice) { DARABONBA_PTR_SET_VALUE(invoice_, invoice) };
      inline Module& setInvoice(Module::Invoice && invoice) { DARABONBA_PTR_SET_RVALUE(invoice_, invoice) };


      // night Field Functions 
      bool hasNight() const { return this->night_ != nullptr;};
      void deleteNight() { this->night_ = nullptr;};
      inline int32_t getNight() const { DARABONBA_PTR_GET_DEFAULT(night_, 0) };
      inline Module& setNight(int32_t night) { DARABONBA_PTR_SET_VALUE(night_, night) };


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


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline int32_t getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, 0) };
      inline Module& setOrderType(int32_t orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // orderTypeDesc Field Functions 
      bool hasOrderTypeDesc() const { return this->orderTypeDesc_ != nullptr;};
      void deleteOrderTypeDesc() { this->orderTypeDesc_ = nullptr;};
      inline string getOrderTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(orderTypeDesc_, "") };
      inline Module& setOrderTypeDesc(string orderTypeDesc) { DARABONBA_PTR_SET_VALUE(orderTypeDesc_, orderTypeDesc) };


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


      // roomNum Field Functions 
      bool hasRoomNum() const { return this->roomNum_ != nullptr;};
      void deleteRoomNum() { this->roomNum_ = nullptr;};
      inline int32_t getRoomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
      inline Module& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


      // roomType Field Functions 
      bool hasRoomType() const { return this->roomType_ != nullptr;};
      void deleteRoomType() { this->roomType_ = nullptr;};
      inline string getRoomType() const { DARABONBA_PTR_GET_DEFAULT(roomType_, "") };
      inline Module& setRoomType(string roomType) { DARABONBA_PTR_SET_VALUE(roomType_, roomType) };


      // supplier Field Functions 
      bool hasSupplier() const { return this->supplier_ != nullptr;};
      void deleteSupplier() { this->supplier_ = nullptr;};
      inline string getSupplier() const { DARABONBA_PTR_GET_DEFAULT(supplier_, "") };
      inline Module& setSupplier(string supplier) { DARABONBA_PTR_SET_VALUE(supplier_, supplier) };


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


      // thirdpartProjectId Field Functions 
      bool hasThirdpartProjectId() const { return this->thirdpartProjectId_ != nullptr;};
      void deleteThirdpartProjectId() { this->thirdpartProjectId_ = nullptr;};
      inline string getThirdpartProjectId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartProjectId_, "") };
      inline Module& setThirdpartProjectId(string thirdpartProjectId) { DARABONBA_PTR_SET_VALUE(thirdpartProjectId_, thirdpartProjectId) };


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
      shared_ptr<string> btripTitle_ {};
      shared_ptr<int32_t> category_ {};
      shared_ptr<string> checkIn_ {};
      shared_ptr<string> checkOut_ {};
      shared_ptr<string> city_ {};
      shared_ptr<string> cityAdCode_ {};
      shared_ptr<string> contactName_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<Module::CostCenter> costCenter_ {};
      shared_ptr<string> countryCode_ {};
      shared_ptr<string> countryName_ {};
      shared_ptr<string> departId_ {};
      shared_ptr<string> departName_ {};
      shared_ptr<string> extendField_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> guest_ {};
      shared_ptr<string> hotelName_ {};
      shared_ptr<int32_t> hotelSupportVatInvoiceType_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<Module::Invoice> invoice_ {};
      shared_ptr<int32_t> night_ {};
      shared_ptr<int32_t> orderStatus_ {};
      shared_ptr<string> orderStatusDesc_ {};
      shared_ptr<int32_t> orderType_ {};
      shared_ptr<string> orderTypeDesc_ {};
      shared_ptr<vector<Module::PriceInfoList>> priceInfoList_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<int64_t> projectId_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<int32_t> roomNum_ {};
      shared_ptr<string> roomType_ {};
      shared_ptr<string> supplier_ {};
      shared_ptr<string> thirdpartApplyId_ {};
      shared_ptr<string> thirdpartBusinessId_ {};
      shared_ptr<string> thirdpartItineraryId_ {};
      shared_ptr<string> thirdpartProjectId_ {};
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
    inline HotelOrderListQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelOrderListQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const vector<HotelOrderListQueryResponseBody::Module> & getModule() const { DARABONBA_PTR_GET_CONST(module_, vector<HotelOrderListQueryResponseBody::Module>) };
    inline vector<HotelOrderListQueryResponseBody::Module> getModule() { DARABONBA_PTR_GET(module_, vector<HotelOrderListQueryResponseBody::Module>) };
    inline HotelOrderListQueryResponseBody& setModule(const vector<HotelOrderListQueryResponseBody::Module> & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelOrderListQueryResponseBody& setModule(vector<HotelOrderListQueryResponseBody::Module> && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const HotelOrderListQueryResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, HotelOrderListQueryResponseBody::PageInfo) };
    inline HotelOrderListQueryResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, HotelOrderListQueryResponseBody::PageInfo) };
    inline HotelOrderListQueryResponseBody& setPageInfo(const HotelOrderListQueryResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline HotelOrderListQueryResponseBody& setPageInfo(HotelOrderListQueryResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelOrderListQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelOrderListQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelOrderListQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<HotelOrderListQueryResponseBody::Module>> module_ {};
    shared_ptr<HotelOrderListQueryResponseBody::PageInfo> pageInfo_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
