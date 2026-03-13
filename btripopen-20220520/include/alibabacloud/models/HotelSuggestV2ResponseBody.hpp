// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_HOTELSUGGESTV2RESPONSEBODY_HPP_
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
  class HotelSuggestV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelSuggestV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelSuggestV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    HotelSuggestV2ResponseBody() = default ;
    HotelSuggestV2ResponseBody(const HotelSuggestV2ResponseBody &) = default ;
    HotelSuggestV2ResponseBody(HotelSuggestV2ResponseBody &&) = default ;
    HotelSuggestV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelSuggestV2ResponseBody() = default ;
    HotelSuggestV2ResponseBody& operator=(const HotelSuggestV2ResponseBody &) = default ;
    HotelSuggestV2ResponseBody& operator=(HotelSuggestV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(guess_suggest_infos, guessSuggestInfos_);
        DARABONBA_PTR_TO_JSON(keyword_suggest_infos, keywordSuggestInfos_);
        DARABONBA_PTR_TO_JSON(popular_suggest_infos, popularSuggestInfos_);
        DARABONBA_PTR_TO_JSON(tips, tips_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(guess_suggest_infos, guessSuggestInfos_);
        DARABONBA_PTR_FROM_JSON(keyword_suggest_infos, keywordSuggestInfos_);
        DARABONBA_PTR_FROM_JSON(popular_suggest_infos, popularSuggestInfos_);
        DARABONBA_PTR_FROM_JSON(tips, tips_);
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
      class PopularSuggestInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PopularSuggestInfos& obj) { 
          DARABONBA_PTR_TO_JSON(icon, icon_);
          DARABONBA_PTR_TO_JSON(popular_infos, popularInfos_);
          DARABONBA_PTR_TO_JSON(title, title_);
        };
        friend void from_json(const Darabonba::Json& j, PopularSuggestInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(icon, icon_);
          DARABONBA_PTR_FROM_JSON(popular_infos, popularInfos_);
          DARABONBA_PTR_FROM_JSON(title, title_);
        };
        PopularSuggestInfos() = default ;
        PopularSuggestInfos(const PopularSuggestInfos &) = default ;
        PopularSuggestInfos(PopularSuggestInfos &&) = default ;
        PopularSuggestInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PopularSuggestInfos() = default ;
        PopularSuggestInfos& operator=(const PopularSuggestInfos &) = default ;
        PopularSuggestInfos& operator=(PopularSuggestInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PopularInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PopularInfos& obj) { 
            DARABONBA_PTR_TO_JSON(display_name, displayName_);
          };
          friend void from_json(const Darabonba::Json& j, PopularInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(display_name, displayName_);
          };
          PopularInfos() = default ;
          PopularInfos(const PopularInfos &) = default ;
          PopularInfos(PopularInfos &&) = default ;
          PopularInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PopularInfos() = default ;
          PopularInfos& operator=(const PopularInfos &) = default ;
          PopularInfos& operator=(PopularInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->displayName_ == nullptr; };
          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline PopularInfos& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        protected:
          shared_ptr<string> displayName_ {};
        };

        virtual bool empty() const override { return this->icon_ == nullptr
        && this->popularInfos_ == nullptr && this->title_ == nullptr; };
        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline PopularSuggestInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // popularInfos Field Functions 
        bool hasPopularInfos() const { return this->popularInfos_ != nullptr;};
        void deletePopularInfos() { this->popularInfos_ = nullptr;};
        inline const vector<PopularSuggestInfos::PopularInfos> & getPopularInfos() const { DARABONBA_PTR_GET_CONST(popularInfos_, vector<PopularSuggestInfos::PopularInfos>) };
        inline vector<PopularSuggestInfos::PopularInfos> getPopularInfos() { DARABONBA_PTR_GET(popularInfos_, vector<PopularSuggestInfos::PopularInfos>) };
        inline PopularSuggestInfos& setPopularInfos(const vector<PopularSuggestInfos::PopularInfos> & popularInfos) { DARABONBA_PTR_SET_VALUE(popularInfos_, popularInfos) };
        inline PopularSuggestInfos& setPopularInfos(vector<PopularSuggestInfos::PopularInfos> && popularInfos) { DARABONBA_PTR_SET_RVALUE(popularInfos_, popularInfos) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
        inline PopularSuggestInfos& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      protected:
        shared_ptr<string> icon_ {};
        shared_ptr<vector<PopularSuggestInfos::PopularInfos>> popularInfos_ {};
        shared_ptr<string> title_ {};
      };

      class KeywordSuggestInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeywordSuggestInfos& obj) { 
          DARABONBA_PTR_TO_JSON(address, address_);
          DARABONBA_PTR_TO_JSON(business_area_with_city, businessAreaWithCity_);
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(display_name, displayName_);
          DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_TO_JSON(icon, icon_);
          DARABONBA_PTR_TO_JSON(point, point_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(type_desc, typeDesc_);
        };
        friend void from_json(const Darabonba::Json& j, KeywordSuggestInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(address, address_);
          DARABONBA_PTR_FROM_JSON(business_area_with_city, businessAreaWithCity_);
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(display_name, displayName_);
          DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_FROM_JSON(icon, icon_);
          DARABONBA_PTR_FROM_JSON(point, point_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(type_desc, typeDesc_);
        };
        KeywordSuggestInfos() = default ;
        KeywordSuggestInfos(const KeywordSuggestInfos &) = default ;
        KeywordSuggestInfos(KeywordSuggestInfos &&) = default ;
        KeywordSuggestInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeywordSuggestInfos() = default ;
        KeywordSuggestInfos& operator=(const KeywordSuggestInfos &) = default ;
        KeywordSuggestInfos& operator=(KeywordSuggestInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BusinessAreaWithCity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BusinessAreaWithCity& obj) { 
            DARABONBA_PTR_TO_JSON(address, address_);
            DARABONBA_PTR_TO_JSON(city_code, cityCode_);
            DARABONBA_PTR_TO_JSON(city_name, cityName_);
            DARABONBA_PTR_TO_JSON(display_name, displayName_);
            DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
            DARABONBA_PTR_TO_JSON(icon, icon_);
            DARABONBA_PTR_TO_JSON(point, point_);
            DARABONBA_PTR_TO_JSON(price, price_);
            DARABONBA_PTR_TO_JSON(region, region_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(type_desc, typeDesc_);
          };
          friend void from_json(const Darabonba::Json& j, BusinessAreaWithCity& obj) { 
            DARABONBA_PTR_FROM_JSON(address, address_);
            DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
            DARABONBA_PTR_FROM_JSON(city_name, cityName_);
            DARABONBA_PTR_FROM_JSON(display_name, displayName_);
            DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
            DARABONBA_PTR_FROM_JSON(icon, icon_);
            DARABONBA_PTR_FROM_JSON(point, point_);
            DARABONBA_PTR_FROM_JSON(price, price_);
            DARABONBA_PTR_FROM_JSON(region, region_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(type_desc, typeDesc_);
          };
          BusinessAreaWithCity() = default ;
          BusinessAreaWithCity(const BusinessAreaWithCity &) = default ;
          BusinessAreaWithCity(BusinessAreaWithCity &&) = default ;
          BusinessAreaWithCity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BusinessAreaWithCity() = default ;
          BusinessAreaWithCity& operator=(const BusinessAreaWithCity &) = default ;
          BusinessAreaWithCity& operator=(BusinessAreaWithCity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->address_ == nullptr
        && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->displayName_ == nullptr && this->hotelId_ == nullptr && this->icon_ == nullptr
        && this->point_ == nullptr && this->price_ == nullptr && this->region_ == nullptr && this->type_ == nullptr && this->typeDesc_ == nullptr; };
          // address Field Functions 
          bool hasAddress() const { return this->address_ != nullptr;};
          void deleteAddress() { this->address_ = nullptr;};
          inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
          inline BusinessAreaWithCity& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


          // cityCode Field Functions 
          bool hasCityCode() const { return this->cityCode_ != nullptr;};
          void deleteCityCode() { this->cityCode_ = nullptr;};
          inline int32_t getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0) };
          inline BusinessAreaWithCity& setCityCode(int32_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


          // cityName Field Functions 
          bool hasCityName() const { return this->cityName_ != nullptr;};
          void deleteCityName() { this->cityName_ = nullptr;};
          inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
          inline BusinessAreaWithCity& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline BusinessAreaWithCity& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // hotelId Field Functions 
          bool hasHotelId() const { return this->hotelId_ != nullptr;};
          void deleteHotelId() { this->hotelId_ = nullptr;};
          inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
          inline BusinessAreaWithCity& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


          // icon Field Functions 
          bool hasIcon() const { return this->icon_ != nullptr;};
          void deleteIcon() { this->icon_ = nullptr;};
          inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
          inline BusinessAreaWithCity& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


          // point Field Functions 
          bool hasPoint() const { return this->point_ != nullptr;};
          void deletePoint() { this->point_ = nullptr;};
          inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
          inline BusinessAreaWithCity& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
          inline BusinessAreaWithCity& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
          inline BusinessAreaWithCity& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline BusinessAreaWithCity& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // typeDesc Field Functions 
          bool hasTypeDesc() const { return this->typeDesc_ != nullptr;};
          void deleteTypeDesc() { this->typeDesc_ = nullptr;};
          inline string getTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(typeDesc_, "") };
          inline BusinessAreaWithCity& setTypeDesc(string typeDesc) { DARABONBA_PTR_SET_VALUE(typeDesc_, typeDesc) };


        protected:
          shared_ptr<string> address_ {};
          shared_ptr<int32_t> cityCode_ {};
          shared_ptr<string> cityName_ {};
          shared_ptr<string> displayName_ {};
          shared_ptr<string> hotelId_ {};
          shared_ptr<string> icon_ {};
          shared_ptr<string> point_ {};
          shared_ptr<string> price_ {};
          shared_ptr<int32_t> region_ {};
          shared_ptr<int32_t> type_ {};
          shared_ptr<string> typeDesc_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->businessAreaWithCity_ == nullptr && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->displayName_ == nullptr && this->hotelId_ == nullptr
        && this->icon_ == nullptr && this->point_ == nullptr && this->price_ == nullptr && this->region_ == nullptr && this->type_ == nullptr
        && this->typeDesc_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline KeywordSuggestInfos& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // businessAreaWithCity Field Functions 
        bool hasBusinessAreaWithCity() const { return this->businessAreaWithCity_ != nullptr;};
        void deleteBusinessAreaWithCity() { this->businessAreaWithCity_ = nullptr;};
        inline const vector<KeywordSuggestInfos::BusinessAreaWithCity> & getBusinessAreaWithCity() const { DARABONBA_PTR_GET_CONST(businessAreaWithCity_, vector<KeywordSuggestInfos::BusinessAreaWithCity>) };
        inline vector<KeywordSuggestInfos::BusinessAreaWithCity> getBusinessAreaWithCity() { DARABONBA_PTR_GET(businessAreaWithCity_, vector<KeywordSuggestInfos::BusinessAreaWithCity>) };
        inline KeywordSuggestInfos& setBusinessAreaWithCity(const vector<KeywordSuggestInfos::BusinessAreaWithCity> & businessAreaWithCity) { DARABONBA_PTR_SET_VALUE(businessAreaWithCity_, businessAreaWithCity) };
        inline KeywordSuggestInfos& setBusinessAreaWithCity(vector<KeywordSuggestInfos::BusinessAreaWithCity> && businessAreaWithCity) { DARABONBA_PTR_SET_RVALUE(businessAreaWithCity_, businessAreaWithCity) };


        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline int32_t getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0) };
        inline KeywordSuggestInfos& setCityCode(int32_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline KeywordSuggestInfos& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline KeywordSuggestInfos& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // hotelId Field Functions 
        bool hasHotelId() const { return this->hotelId_ != nullptr;};
        void deleteHotelId() { this->hotelId_ = nullptr;};
        inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
        inline KeywordSuggestInfos& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline KeywordSuggestInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // point Field Functions 
        bool hasPoint() const { return this->point_ != nullptr;};
        void deletePoint() { this->point_ = nullptr;};
        inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
        inline KeywordSuggestInfos& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
        inline KeywordSuggestInfos& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
        inline KeywordSuggestInfos& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline KeywordSuggestInfos& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // typeDesc Field Functions 
        bool hasTypeDesc() const { return this->typeDesc_ != nullptr;};
        void deleteTypeDesc() { this->typeDesc_ = nullptr;};
        inline string getTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(typeDesc_, "") };
        inline KeywordSuggestInfos& setTypeDesc(string typeDesc) { DARABONBA_PTR_SET_VALUE(typeDesc_, typeDesc) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<vector<KeywordSuggestInfos::BusinessAreaWithCity>> businessAreaWithCity_ {};
        shared_ptr<int32_t> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> hotelId_ {};
        shared_ptr<string> icon_ {};
        shared_ptr<string> point_ {};
        shared_ptr<string> price_ {};
        shared_ptr<int32_t> region_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> typeDesc_ {};
      };

      class GuessSuggestInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GuessSuggestInfos& obj) { 
          DARABONBA_PTR_TO_JSON(address, address_);
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(display_name, displayName_);
          DARABONBA_PTR_TO_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_TO_JSON(icon, icon_);
          DARABONBA_PTR_TO_JSON(point, point_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(region, region_);
          DARABONBA_PTR_TO_JSON(type, type_);
          DARABONBA_PTR_TO_JSON(type_desc, typeDesc_);
        };
        friend void from_json(const Darabonba::Json& j, GuessSuggestInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(address, address_);
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(display_name, displayName_);
          DARABONBA_PTR_FROM_JSON(hotel_id, hotelId_);
          DARABONBA_PTR_FROM_JSON(icon, icon_);
          DARABONBA_PTR_FROM_JSON(point, point_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(region, region_);
          DARABONBA_PTR_FROM_JSON(type, type_);
          DARABONBA_PTR_FROM_JSON(type_desc, typeDesc_);
        };
        GuessSuggestInfos() = default ;
        GuessSuggestInfos(const GuessSuggestInfos &) = default ;
        GuessSuggestInfos(GuessSuggestInfos &&) = default ;
        GuessSuggestInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GuessSuggestInfos() = default ;
        GuessSuggestInfos& operator=(const GuessSuggestInfos &) = default ;
        GuessSuggestInfos& operator=(GuessSuggestInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->address_ == nullptr
        && this->cityCode_ == nullptr && this->cityName_ == nullptr && this->displayName_ == nullptr && this->hotelId_ == nullptr && this->icon_ == nullptr
        && this->point_ == nullptr && this->price_ == nullptr && this->region_ == nullptr && this->type_ == nullptr && this->typeDesc_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline GuessSuggestInfos& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline int32_t getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, 0) };
        inline GuessSuggestInfos& setCityCode(int32_t cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline GuessSuggestInfos& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline GuessSuggestInfos& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // hotelId Field Functions 
        bool hasHotelId() const { return this->hotelId_ != nullptr;};
        void deleteHotelId() { this->hotelId_ = nullptr;};
        inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
        inline GuessSuggestInfos& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


        // icon Field Functions 
        bool hasIcon() const { return this->icon_ != nullptr;};
        void deleteIcon() { this->icon_ = nullptr;};
        inline string getIcon() const { DARABONBA_PTR_GET_DEFAULT(icon_, "") };
        inline GuessSuggestInfos& setIcon(string icon) { DARABONBA_PTR_SET_VALUE(icon_, icon) };


        // point Field Functions 
        bool hasPoint() const { return this->point_ != nullptr;};
        void deletePoint() { this->point_ = nullptr;};
        inline string getPoint() const { DARABONBA_PTR_GET_DEFAULT(point_, "") };
        inline GuessSuggestInfos& setPoint(string point) { DARABONBA_PTR_SET_VALUE(point_, point) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
        inline GuessSuggestInfos& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline int32_t getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, 0) };
        inline GuessSuggestInfos& setRegion(int32_t region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline GuessSuggestInfos& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // typeDesc Field Functions 
        bool hasTypeDesc() const { return this->typeDesc_ != nullptr;};
        void deleteTypeDesc() { this->typeDesc_ = nullptr;};
        inline string getTypeDesc() const { DARABONBA_PTR_GET_DEFAULT(typeDesc_, "") };
        inline GuessSuggestInfos& setTypeDesc(string typeDesc) { DARABONBA_PTR_SET_VALUE(typeDesc_, typeDesc) };


      protected:
        shared_ptr<string> address_ {};
        shared_ptr<int32_t> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> hotelId_ {};
        shared_ptr<string> icon_ {};
        shared_ptr<string> point_ {};
        shared_ptr<string> price_ {};
        shared_ptr<int32_t> region_ {};
        shared_ptr<int32_t> type_ {};
        shared_ptr<string> typeDesc_ {};
      };

      virtual bool empty() const override { return this->guessSuggestInfos_ == nullptr
        && this->keywordSuggestInfos_ == nullptr && this->popularSuggestInfos_ == nullptr && this->tips_ == nullptr; };
      // guessSuggestInfos Field Functions 
      bool hasGuessSuggestInfos() const { return this->guessSuggestInfos_ != nullptr;};
      void deleteGuessSuggestInfos() { this->guessSuggestInfos_ = nullptr;};
      inline const vector<Module::GuessSuggestInfos> & getGuessSuggestInfos() const { DARABONBA_PTR_GET_CONST(guessSuggestInfos_, vector<Module::GuessSuggestInfos>) };
      inline vector<Module::GuessSuggestInfos> getGuessSuggestInfos() { DARABONBA_PTR_GET(guessSuggestInfos_, vector<Module::GuessSuggestInfos>) };
      inline Module& setGuessSuggestInfos(const vector<Module::GuessSuggestInfos> & guessSuggestInfos) { DARABONBA_PTR_SET_VALUE(guessSuggestInfos_, guessSuggestInfos) };
      inline Module& setGuessSuggestInfos(vector<Module::GuessSuggestInfos> && guessSuggestInfos) { DARABONBA_PTR_SET_RVALUE(guessSuggestInfos_, guessSuggestInfos) };


      // keywordSuggestInfos Field Functions 
      bool hasKeywordSuggestInfos() const { return this->keywordSuggestInfos_ != nullptr;};
      void deleteKeywordSuggestInfos() { this->keywordSuggestInfos_ = nullptr;};
      inline const vector<Module::KeywordSuggestInfos> & getKeywordSuggestInfos() const { DARABONBA_PTR_GET_CONST(keywordSuggestInfos_, vector<Module::KeywordSuggestInfos>) };
      inline vector<Module::KeywordSuggestInfos> getKeywordSuggestInfos() { DARABONBA_PTR_GET(keywordSuggestInfos_, vector<Module::KeywordSuggestInfos>) };
      inline Module& setKeywordSuggestInfos(const vector<Module::KeywordSuggestInfos> & keywordSuggestInfos) { DARABONBA_PTR_SET_VALUE(keywordSuggestInfos_, keywordSuggestInfos) };
      inline Module& setKeywordSuggestInfos(vector<Module::KeywordSuggestInfos> && keywordSuggestInfos) { DARABONBA_PTR_SET_RVALUE(keywordSuggestInfos_, keywordSuggestInfos) };


      // popularSuggestInfos Field Functions 
      bool hasPopularSuggestInfos() const { return this->popularSuggestInfos_ != nullptr;};
      void deletePopularSuggestInfos() { this->popularSuggestInfos_ = nullptr;};
      inline const vector<Module::PopularSuggestInfos> & getPopularSuggestInfos() const { DARABONBA_PTR_GET_CONST(popularSuggestInfos_, vector<Module::PopularSuggestInfos>) };
      inline vector<Module::PopularSuggestInfos> getPopularSuggestInfos() { DARABONBA_PTR_GET(popularSuggestInfos_, vector<Module::PopularSuggestInfos>) };
      inline Module& setPopularSuggestInfos(const vector<Module::PopularSuggestInfos> & popularSuggestInfos) { DARABONBA_PTR_SET_VALUE(popularSuggestInfos_, popularSuggestInfos) };
      inline Module& setPopularSuggestInfos(vector<Module::PopularSuggestInfos> && popularSuggestInfos) { DARABONBA_PTR_SET_RVALUE(popularSuggestInfos_, popularSuggestInfos) };


      // tips Field Functions 
      bool hasTips() const { return this->tips_ != nullptr;};
      void deleteTips() { this->tips_ = nullptr;};
      inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
      inline Module& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


    protected:
      shared_ptr<vector<Module::GuessSuggestInfos>> guessSuggestInfos_ {};
      shared_ptr<vector<Module::KeywordSuggestInfos>> keywordSuggestInfos_ {};
      shared_ptr<vector<Module::PopularSuggestInfos>> popularSuggestInfos_ {};
      shared_ptr<string> tips_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline HotelSuggestV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline HotelSuggestV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const HotelSuggestV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, HotelSuggestV2ResponseBody::Module) };
    inline HotelSuggestV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, HotelSuggestV2ResponseBody::Module) };
    inline HotelSuggestV2ResponseBody& setModule(const HotelSuggestV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline HotelSuggestV2ResponseBody& setModule(HotelSuggestV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline HotelSuggestV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline HotelSuggestV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline HotelSuggestV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<HotelSuggestV2ResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
