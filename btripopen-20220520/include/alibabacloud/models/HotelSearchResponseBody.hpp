// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELSEARCHRESPONSEBODY_HPP_
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
  class HotelSearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelSearchResponseBody() = default ;
    HotelSearchResponseBody(const HotelSearchResponseBody &) = default ;
    HotelSearchResponseBody(HotelSearchResponseBody &&) = default ;
    HotelSearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSearchResponseBody() = default ;
    HotelSearchResponseBody& operator=(const HotelSearchResponseBody &) = default ;
    HotelSearchResponseBody& operator=(HotelSearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(items, items_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(brand_name, brandName_);
          DARABONBA_PTR_TO_JSON(btand_code, btandCode_);
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(discount_desc, discountDesc_);
          DARABONBA_PTR_TO_JSON(distance, distance_);
          DARABONBA_PTR_TO_JSON(district_code, districtCode_);
          DARABONBA_PTR_TO_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_TO_JSON(hotel_code, hotelCode_);
          DARABONBA_PTR_TO_JSON(hotel_en_name, hotelEnName_);
          DARABONBA_PTR_TO_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_TO_JSON(hotel_star, hotelStar_);
          DARABONBA_PTR_TO_JSON(image_url, imageUrl_);
          DARABONBA_PTR_TO_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_TO_JSON(location, location_);
          DARABONBA_PTR_TO_JSON(min_price, minPrice_);
          DARABONBA_PTR_TO_JSON(original_min_price, originalMinPrice_);
          DARABONBA_PTR_TO_JSON(score, score_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(tel, tel_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(brand_name, brandName_);
          DARABONBA_PTR_FROM_JSON(btand_code, btandCode_);
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(discount_desc, discountDesc_);
          DARABONBA_PTR_FROM_JSON(distance, distance_);
          DARABONBA_PTR_FROM_JSON(district_code, districtCode_);
          DARABONBA_PTR_FROM_JSON(hotel_address, hotelAddress_);
          DARABONBA_PTR_FROM_JSON(hotel_code, hotelCode_);
          DARABONBA_PTR_FROM_JSON(hotel_en_name, hotelEnName_);
          DARABONBA_PTR_FROM_JSON(hotel_name, hotelName_);
          DARABONBA_PTR_FROM_JSON(hotel_star, hotelStar_);
          DARABONBA_PTR_FROM_JSON(image_url, imageUrl_);
          DARABONBA_PTR_FROM_JSON(is_protocol, isProtocol_);
          DARABONBA_PTR_FROM_JSON(location, location_);
          DARABONBA_PTR_FROM_JSON(min_price, minPrice_);
          DARABONBA_PTR_FROM_JSON(original_min_price, originalMinPrice_);
          DARABONBA_PTR_FROM_JSON(score, score_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(tel, tel_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DiscountDesc : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DiscountDesc& obj) { 
            DARABONBA_PTR_TO_JSON(cash_reduce_total, cashReduceTotal_);
            DARABONBA_PTR_TO_JSON(dinamic_label, dinamicLabel_);
            DARABONBA_PTR_TO_JSON(discount_detail, discountDetail_);
            DARABONBA_PTR_TO_JSON(sub_title, subTitle_);
            DARABONBA_PTR_TO_JSON(title, title_);
          };
          friend void from_json(const Darabonba::Json& j, DiscountDesc& obj) { 
            DARABONBA_PTR_FROM_JSON(cash_reduce_total, cashReduceTotal_);
            DARABONBA_PTR_FROM_JSON(dinamic_label, dinamicLabel_);
            DARABONBA_PTR_FROM_JSON(discount_detail, discountDetail_);
            DARABONBA_PTR_FROM_JSON(sub_title, subTitle_);
            DARABONBA_PTR_FROM_JSON(title, title_);
          };
          DiscountDesc() = default ;
          DiscountDesc(const DiscountDesc &) = default ;
          DiscountDesc(DiscountDesc &&) = default ;
          DiscountDesc(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DiscountDesc() = default ;
          DiscountDesc& operator=(const DiscountDesc &) = default ;
          DiscountDesc& operator=(DiscountDesc &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DiscountDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DiscountDetail& obj) { 
              DARABONBA_PTR_TO_JSON(label_name, labelName_);
              DARABONBA_PTR_TO_JSON(money_desc, moneyDesc_);
            };
            friend void from_json(const Darabonba::Json& j, DiscountDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(label_name, labelName_);
              DARABONBA_PTR_FROM_JSON(money_desc, moneyDesc_);
            };
            DiscountDetail() = default ;
            DiscountDetail(const DiscountDetail &) = default ;
            DiscountDetail(DiscountDetail &&) = default ;
            DiscountDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DiscountDetail() = default ;
            DiscountDetail& operator=(const DiscountDetail &) = default ;
            DiscountDetail& operator=(DiscountDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->labelName_ == nullptr
        && this->moneyDesc_ == nullptr; };
            // labelName Field Functions 
            bool hasLabelName() const { return this->labelName_ != nullptr;};
            void deleteLabelName() { this->labelName_ = nullptr;};
            inline const vector<string> & getLabelName() const { DARABONBA_PTR_GET_CONST(labelName_, vector<string>) };
            inline vector<string> getLabelName() { DARABONBA_PTR_GET(labelName_, vector<string>) };
            inline DiscountDetail& setLabelName(const vector<string> & labelName) { DARABONBA_PTR_SET_VALUE(labelName_, labelName) };
            inline DiscountDetail& setLabelName(vector<string> && labelName) { DARABONBA_PTR_SET_RVALUE(labelName_, labelName) };


            // moneyDesc Field Functions 
            bool hasMoneyDesc() const { return this->moneyDesc_ != nullptr;};
            void deleteMoneyDesc() { this->moneyDesc_ = nullptr;};
            inline string getMoneyDesc() const { DARABONBA_PTR_GET_DEFAULT(moneyDesc_, "") };
            inline DiscountDetail& setMoneyDesc(string moneyDesc) { DARABONBA_PTR_SET_VALUE(moneyDesc_, moneyDesc) };


          protected:
            shared_ptr<vector<string>> labelName_ {};
            shared_ptr<string> moneyDesc_ {};
          };

          virtual bool empty() const override { return this->cashReduceTotal_ == nullptr
        && this->dinamicLabel_ == nullptr && this->discountDetail_ == nullptr && this->subTitle_ == nullptr && this->title_ == nullptr; };
          // cashReduceTotal Field Functions 
          bool hasCashReduceTotal() const { return this->cashReduceTotal_ != nullptr;};
          void deleteCashReduceTotal() { this->cashReduceTotal_ = nullptr;};
          inline string getCashReduceTotal() const { DARABONBA_PTR_GET_DEFAULT(cashReduceTotal_, "") };
          inline DiscountDesc& setCashReduceTotal(string cashReduceTotal) { DARABONBA_PTR_SET_VALUE(cashReduceTotal_, cashReduceTotal) };


          // dinamicLabel Field Functions 
          bool hasDinamicLabel() const { return this->dinamicLabel_ != nullptr;};
          void deleteDinamicLabel() { this->dinamicLabel_ = nullptr;};
          inline string getDinamicLabel() const { DARABONBA_PTR_GET_DEFAULT(dinamicLabel_, "") };
          inline DiscountDesc& setDinamicLabel(string dinamicLabel) { DARABONBA_PTR_SET_VALUE(dinamicLabel_, dinamicLabel) };


          // discountDetail Field Functions 
          bool hasDiscountDetail() const { return this->discountDetail_ != nullptr;};
          void deleteDiscountDetail() { this->discountDetail_ = nullptr;};
          inline const vector<DiscountDesc::DiscountDetail> & getDiscountDetail() const { DARABONBA_PTR_GET_CONST(discountDetail_, vector<DiscountDesc::DiscountDetail>) };
          inline vector<DiscountDesc::DiscountDetail> getDiscountDetail() { DARABONBA_PTR_GET(discountDetail_, vector<DiscountDesc::DiscountDetail>) };
          inline DiscountDesc& setDiscountDetail(const vector<DiscountDesc::DiscountDetail> & discountDetail) { DARABONBA_PTR_SET_VALUE(discountDetail_, discountDetail) };
          inline DiscountDesc& setDiscountDetail(vector<DiscountDesc::DiscountDetail> && discountDetail) { DARABONBA_PTR_SET_RVALUE(discountDetail_, discountDetail) };


          // subTitle Field Functions 
          bool hasSubTitle() const { return this->subTitle_ != nullptr;};
          void deleteSubTitle() { this->subTitle_ = nullptr;};
          inline string getSubTitle() const { DARABONBA_PTR_GET_DEFAULT(subTitle_, "") };
          inline DiscountDesc& setSubTitle(string subTitle) { DARABONBA_PTR_SET_VALUE(subTitle_, subTitle) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline DiscountDesc& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<string> cashReduceTotal_ {};
          shared_ptr<string> dinamicLabel_ {};
          shared_ptr<vector<DiscountDesc::DiscountDetail>> discountDetail_ {};
          shared_ptr<string> subTitle_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->brandName_ == nullptr
        && this->btandCode_ == nullptr && this->cityCode_ == nullptr && this->discountDesc_ == nullptr && this->distance_ == nullptr && this->districtCode_ == nullptr
        && this->hotelAddress_ == nullptr && this->hotelCode_ == nullptr && this->hotelEnName_ == nullptr && this->hotelName_ == nullptr && this->hotelStar_ == nullptr
        && this->imageUrl_ == nullptr && this->isProtocol_ == nullptr && this->location_ == nullptr && this->minPrice_ == nullptr && this->originalMinPrice_ == nullptr
        && this->score_ == nullptr && this->status_ == nullptr && this->tel_ == nullptr; };
        // brandName Field Functions 
        bool hasBrandName() const { return this->brandName_ != nullptr;};
        void deleteBrandName() { this->brandName_ = nullptr;};
        inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
        inline Items& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


        // btandCode Field Functions 
        bool hasBtandCode() const { return this->btandCode_ != nullptr;};
        void deleteBtandCode() { this->btandCode_ = nullptr;};
        inline string getBtandCode() const { DARABONBA_PTR_GET_DEFAULT(btandCode_, "") };
        inline Items& setBtandCode(string btandCode) { DARABONBA_PTR_SET_VALUE(btandCode_, btandCode) };


        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline Items& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // discountDesc Field Functions 
        bool hasDiscountDesc() const { return this->discountDesc_ != nullptr;};
        void deleteDiscountDesc() { this->discountDesc_ = nullptr;};
        inline const Items::DiscountDesc & getDiscountDesc() const { DARABONBA_PTR_GET_CONST(discountDesc_, Items::DiscountDesc) };
        inline Items::DiscountDesc getDiscountDesc() { DARABONBA_PTR_GET(discountDesc_, Items::DiscountDesc) };
        inline Items& setDiscountDesc(const Items::DiscountDesc & discountDesc) { DARABONBA_PTR_SET_VALUE(discountDesc_, discountDesc) };
        inline Items& setDiscountDesc(Items::DiscountDesc && discountDesc) { DARABONBA_PTR_SET_RVALUE(discountDesc_, discountDesc) };


        // distance Field Functions 
        bool hasDistance() const { return this->distance_ != nullptr;};
        void deleteDistance() { this->distance_ = nullptr;};
        inline int32_t getDistance() const { DARABONBA_PTR_GET_DEFAULT(distance_, 0) };
        inline Items& setDistance(int32_t distance) { DARABONBA_PTR_SET_VALUE(distance_, distance) };


        // districtCode Field Functions 
        bool hasDistrictCode() const { return this->districtCode_ != nullptr;};
        void deleteDistrictCode() { this->districtCode_ = nullptr;};
        inline string getDistrictCode() const { DARABONBA_PTR_GET_DEFAULT(districtCode_, "") };
        inline Items& setDistrictCode(string districtCode) { DARABONBA_PTR_SET_VALUE(districtCode_, districtCode) };


        // hotelAddress Field Functions 
        bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
        void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
        inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
        inline Items& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


        // hotelCode Field Functions 
        bool hasHotelCode() const { return this->hotelCode_ != nullptr;};
        void deleteHotelCode() { this->hotelCode_ = nullptr;};
        inline string getHotelCode() const { DARABONBA_PTR_GET_DEFAULT(hotelCode_, "") };
        inline Items& setHotelCode(string hotelCode) { DARABONBA_PTR_SET_VALUE(hotelCode_, hotelCode) };


        // hotelEnName Field Functions 
        bool hasHotelEnName() const { return this->hotelEnName_ != nullptr;};
        void deleteHotelEnName() { this->hotelEnName_ = nullptr;};
        inline string getHotelEnName() const { DARABONBA_PTR_GET_DEFAULT(hotelEnName_, "") };
        inline Items& setHotelEnName(string hotelEnName) { DARABONBA_PTR_SET_VALUE(hotelEnName_, hotelEnName) };


        // hotelName Field Functions 
        bool hasHotelName() const { return this->hotelName_ != nullptr;};
        void deleteHotelName() { this->hotelName_ = nullptr;};
        inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
        inline Items& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


        // hotelStar Field Functions 
        bool hasHotelStar() const { return this->hotelStar_ != nullptr;};
        void deleteHotelStar() { this->hotelStar_ = nullptr;};
        inline string getHotelStar() const { DARABONBA_PTR_GET_DEFAULT(hotelStar_, "") };
        inline Items& setHotelStar(string hotelStar) { DARABONBA_PTR_SET_VALUE(hotelStar_, hotelStar) };


        // imageUrl Field Functions 
        bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
        void deleteImageUrl() { this->imageUrl_ = nullptr;};
        inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
        inline Items& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


        // isProtocol Field Functions 
        bool hasIsProtocol() const { return this->isProtocol_ != nullptr;};
        void deleteIsProtocol() { this->isProtocol_ = nullptr;};
        inline bool getIsProtocol() const { DARABONBA_PTR_GET_DEFAULT(isProtocol_, false) };
        inline Items& setIsProtocol(bool isProtocol) { DARABONBA_PTR_SET_VALUE(isProtocol_, isProtocol) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Items& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // minPrice Field Functions 
        bool hasMinPrice() const { return this->minPrice_ != nullptr;};
        void deleteMinPrice() { this->minPrice_ = nullptr;};
        inline double getMinPrice() const { DARABONBA_PTR_GET_DEFAULT(minPrice_, 0.0) };
        inline Items& setMinPrice(double minPrice) { DARABONBA_PTR_SET_VALUE(minPrice_, minPrice) };


        // originalMinPrice Field Functions 
        bool hasOriginalMinPrice() const { return this->originalMinPrice_ != nullptr;};
        void deleteOriginalMinPrice() { this->originalMinPrice_ = nullptr;};
        inline double getOriginalMinPrice() const { DARABONBA_PTR_GET_DEFAULT(originalMinPrice_, 0.0) };
        inline Items& setOriginalMinPrice(double originalMinPrice) { DARABONBA_PTR_SET_VALUE(originalMinPrice_, originalMinPrice) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
        inline Items& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Items& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tel Field Functions 
        bool hasTel() const { return this->tel_ != nullptr;};
        void deleteTel() { this->tel_ = nullptr;};
        inline string getTel() const { DARABONBA_PTR_GET_DEFAULT(tel_, "") };
        inline Items& setTel(string tel) { DARABONBA_PTR_SET_VALUE(tel_, tel) };


      protected:
        shared_ptr<string> brandName_ {};
        shared_ptr<string> btandCode_ {};
        shared_ptr<string> cityCode_ {};
        shared_ptr<Items::DiscountDesc> discountDesc_ {};
        shared_ptr<int32_t> distance_ {};
        shared_ptr<string> districtCode_ {};
        shared_ptr<string> hotelAddress_ {};
        shared_ptr<string> hotelCode_ {};
        shared_ptr<string> hotelEnName_ {};
        shared_ptr<string> hotelName_ {};
        shared_ptr<string> hotelStar_ {};
        shared_ptr<string> imageUrl_ {};
        shared_ptr<bool> isProtocol_ {};
        shared_ptr<string> location_ {};
        shared_ptr<double> minPrice_ {};
        shared_ptr<double> originalMinPrice_ {};
        shared_ptr<string> score_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> tel_ {};
      };

      virtual bool empty() const override { return this->count_ == nullptr
        && this->items_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Module& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Module::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Module::Items>) };
      inline vector<Module::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Module::Items>) };
      inline Module& setItems(const vector<Module::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Module& setItems(vector<Module::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      shared_ptr<int32_t> count_ {};
      shared_ptr<vector<Module::Items>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelSearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelSearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelSearchResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelSearchResponseBody::Module) };
    inline HotelSearchResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelSearchResponseBody::Module) };
    inline HotelSearchResponseBody& setModule(const HotelSearchResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelSearchResponseBody& setModule(HotelSearchResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelSearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelSearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelSearchResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelSearchResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
