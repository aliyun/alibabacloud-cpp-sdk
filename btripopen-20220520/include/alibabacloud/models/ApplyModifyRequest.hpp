// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYMODIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYMODIFYREQUEST_HPP_
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
  class ApplyModifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyModifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(budget, budget_);
      DARABONBA_PTR_TO_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_TO_JSON(car_rule, carRule_);
      DARABONBA_PTR_TO_JSON(corp_name, corpName_);
      DARABONBA_PTR_TO_JSON(default_standard, defaultStandard_);
      DARABONBA_PTR_TO_JSON(depart_id, departId_);
      DARABONBA_PTR_TO_JSON(depart_name, departName_);
      DARABONBA_PTR_TO_JSON(extend_field, extendField_);
      DARABONBA_PTR_TO_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_TO_JSON(external_traveler_standard, externalTravelerStandard_);
      DARABONBA_PTR_TO_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_TO_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_TO_JSON(hotel_share, hotelShare_);
      DARABONBA_PTR_TO_JSON(intl_flight_budget, intlFlightBudget_);
      DARABONBA_PTR_TO_JSON(intl_hotel_budget, intlHotelBudget_);
      DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_TO_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_TO_JSON(itinerary_set_list, itinerarySetList_);
      DARABONBA_PTR_TO_JSON(limit_traveler, limitTraveler_);
      DARABONBA_PTR_TO_JSON(meal_budget, mealBudget_);
      DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_TO_JSON(together_book_rule, togetherBookRule_);
      DARABONBA_PTR_TO_JSON(train_budget, trainBudget_);
      DARABONBA_PTR_TO_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_TO_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_TO_JSON(trip_day, tripDay_);
      DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_TO_JSON(union_no, unionNo_);
      DARABONBA_PTR_TO_JSON(user_id, userId_);
      DARABONBA_PTR_TO_JSON(user_name, userName_);
      DARABONBA_PTR_TO_JSON(vehicle_budget, vehicleBudget_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyModifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(budget, budget_);
      DARABONBA_PTR_FROM_JSON(budget_merge, budgetMerge_);
      DARABONBA_PTR_FROM_JSON(car_rule, carRule_);
      DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
      DARABONBA_PTR_FROM_JSON(default_standard, defaultStandard_);
      DARABONBA_PTR_FROM_JSON(depart_id, departId_);
      DARABONBA_PTR_FROM_JSON(depart_name, departName_);
      DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
      DARABONBA_PTR_FROM_JSON(external_traveler_list, externalTravelerList_);
      DARABONBA_PTR_FROM_JSON(external_traveler_standard, externalTravelerStandard_);
      DARABONBA_PTR_FROM_JSON(flight_budget, flightBudget_);
      DARABONBA_PTR_FROM_JSON(hotel_budget, hotelBudget_);
      DARABONBA_PTR_FROM_JSON(hotel_share, hotelShare_);
      DARABONBA_PTR_FROM_JSON(intl_flight_budget, intlFlightBudget_);
      DARABONBA_PTR_FROM_JSON(intl_hotel_budget, intlHotelBudget_);
      DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
      DARABONBA_PTR_FROM_JSON(itinerary_rule, itineraryRule_);
      DARABONBA_PTR_FROM_JSON(itinerary_set_list, itinerarySetList_);
      DARABONBA_PTR_FROM_JSON(limit_traveler, limitTraveler_);
      DARABONBA_PTR_FROM_JSON(meal_budget, mealBudget_);
      DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_corp_id, subCorpId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
      DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
      DARABONBA_PTR_FROM_JSON(together_book_rule, togetherBookRule_);
      DARABONBA_PTR_FROM_JSON(train_budget, trainBudget_);
      DARABONBA_PTR_FROM_JSON(traveler_list, travelerList_);
      DARABONBA_PTR_FROM_JSON(traveler_standard, travelerStandard_);
      DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
      DARABONBA_PTR_FROM_JSON(trip_day, tripDay_);
      DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
      DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
      DARABONBA_PTR_FROM_JSON(user_id, userId_);
      DARABONBA_PTR_FROM_JSON(user_name, userName_);
      DARABONBA_PTR_FROM_JSON(vehicle_budget, vehicleBudget_);
    };
    ApplyModifyRequest() = default ;
    ApplyModifyRequest(const ApplyModifyRequest &) = default ;
    ApplyModifyRequest(ApplyModifyRequest &&) = default ;
    ApplyModifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyModifyRequest() = default ;
    ApplyModifyRequest& operator=(const ApplyModifyRequest &) = default ;
    ApplyModifyRequest& operator=(ApplyModifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TravelerStandard : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TravelerStandard& obj) { 
        DARABONBA_PTR_TO_JSON(business_discount, businessDiscount_);
        DARABONBA_PTR_TO_JSON(car_city_set, carCitySet_);
        DARABONBA_PTR_TO_JSON(car_standard, carStandard_);
        DARABONBA_PTR_TO_JSON(economy_discount, economyDiscount_);
        DARABONBA_PTR_TO_JSON(first_discount, firstDiscount_);
        DARABONBA_PTR_TO_JSON(flight_cabins, flightCabins_);
        DARABONBA_PTR_TO_JSON(flight_intl_rule_code, flightIntlRuleCode_);
        DARABONBA_PTR_TO_JSON(flight_rule_code, flightRuleCode_);
        DARABONBA_PTR_TO_JSON(hotel_citys, hotelCitys_);
        DARABONBA_PTR_TO_JSON(hotel_intl_citys, hotelIntlCitys_);
        DARABONBA_PTR_TO_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
        DARABONBA_PTR_TO_JSON(hotel_rule_code, hotelRuleCode_);
        DARABONBA_PTR_TO_JSON(international_flight_cabins, internationalFlightCabins_);
        DARABONBA_PTR_TO_JSON(premium_economy_discount, premiumEconomyDiscount_);
        DARABONBA_PTR_TO_JSON(reserve_type, reserveType_);
        DARABONBA_PTR_TO_JSON(train_rule_code, trainRuleCode_);
        DARABONBA_PTR_TO_JSON(train_seats, trainSeats_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TravelerStandard& obj) { 
        DARABONBA_PTR_FROM_JSON(business_discount, businessDiscount_);
        DARABONBA_PTR_FROM_JSON(car_city_set, carCitySet_);
        DARABONBA_PTR_FROM_JSON(car_standard, carStandard_);
        DARABONBA_PTR_FROM_JSON(economy_discount, economyDiscount_);
        DARABONBA_PTR_FROM_JSON(first_discount, firstDiscount_);
        DARABONBA_PTR_FROM_JSON(flight_cabins, flightCabins_);
        DARABONBA_PTR_FROM_JSON(flight_intl_rule_code, flightIntlRuleCode_);
        DARABONBA_PTR_FROM_JSON(flight_rule_code, flightRuleCode_);
        DARABONBA_PTR_FROM_JSON(hotel_citys, hotelCitys_);
        DARABONBA_PTR_FROM_JSON(hotel_intl_citys, hotelIntlCitys_);
        DARABONBA_PTR_FROM_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
        DARABONBA_PTR_FROM_JSON(hotel_rule_code, hotelRuleCode_);
        DARABONBA_PTR_FROM_JSON(international_flight_cabins, internationalFlightCabins_);
        DARABONBA_PTR_FROM_JSON(premium_economy_discount, premiumEconomyDiscount_);
        DARABONBA_PTR_FROM_JSON(reserve_type, reserveType_);
        DARABONBA_PTR_FROM_JSON(train_rule_code, trainRuleCode_);
        DARABONBA_PTR_FROM_JSON(train_seats, trainSeats_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
      };
      TravelerStandard() = default ;
      TravelerStandard(const TravelerStandard &) = default ;
      TravelerStandard(TravelerStandard &&) = default ;
      TravelerStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TravelerStandard() = default ;
      TravelerStandard& operator=(const TravelerStandard &) = default ;
      TravelerStandard& operator=(TravelerStandard &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HotelIntlCitys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelIntlCitys& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(fee, fee_);
        };
        friend void from_json(const Darabonba::Json& j, HotelIntlCitys& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(fee, fee_);
        };
        HotelIntlCitys() = default ;
        HotelIntlCitys(const HotelIntlCitys &) = default ;
        HotelIntlCitys(HotelIntlCitys &&) = default ;
        HotelIntlCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelIntlCitys() = default ;
        HotelIntlCitys& operator=(const HotelIntlCitys &) = default ;
        HotelIntlCitys& operator=(HotelIntlCitys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->fee_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelIntlCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelIntlCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
        inline HotelIntlCitys& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<int64_t> fee_ {};
      };

      class HotelCitys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelCitys& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(fee, fee_);
        };
        friend void from_json(const Darabonba::Json& j, HotelCitys& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(fee, fee_);
        };
        HotelCitys() = default ;
        HotelCitys(const HotelCitys &) = default ;
        HotelCitys(HotelCitys &&) = default ;
        HotelCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelCitys() = default ;
        HotelCitys& operator=(const HotelCitys &) = default ;
        HotelCitys& operator=(HotelCitys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->fee_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
        inline HotelCitys& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<int64_t> fee_ {};
      };

      class CarStandard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CarStandard& obj) { 
          DARABONBA_PTR_TO_JSON(book_allow_info, bookAllowInfo_);
          DARABONBA_PTR_TO_JSON(car_helper, carHelper_);
          DARABONBA_PTR_TO_JSON(car_time_control, carTimeControl_);
          DARABONBA_PTR_TO_JSON(city_control_info, cityControlInfo_);
          DARABONBA_PTR_TO_JSON(cross_city_info, crossCityInfo_);
          DARABONBA_PTR_TO_JSON(electronic_fence_info, electronicFenceInfo_);
          DARABONBA_PTR_TO_JSON(level_codes, levelCodes_);
          DARABONBA_PTR_TO_JSON(modify_destination_info, modifyDestinationInfo_);
          DARABONBA_PTR_TO_JSON(times_total, timesTotal_);
          DARABONBA_PTR_TO_JSON(times_type, timesType_);
        };
        friend void from_json(const Darabonba::Json& j, CarStandard& obj) { 
          DARABONBA_PTR_FROM_JSON(book_allow_info, bookAllowInfo_);
          DARABONBA_PTR_FROM_JSON(car_helper, carHelper_);
          DARABONBA_PTR_FROM_JSON(car_time_control, carTimeControl_);
          DARABONBA_PTR_FROM_JSON(city_control_info, cityControlInfo_);
          DARABONBA_PTR_FROM_JSON(cross_city_info, crossCityInfo_);
          DARABONBA_PTR_FROM_JSON(electronic_fence_info, electronicFenceInfo_);
          DARABONBA_PTR_FROM_JSON(level_codes, levelCodes_);
          DARABONBA_PTR_FROM_JSON(modify_destination_info, modifyDestinationInfo_);
          DARABONBA_PTR_FROM_JSON(times_total, timesTotal_);
          DARABONBA_PTR_FROM_JSON(times_type, timesType_);
        };
        CarStandard() = default ;
        CarStandard(const CarStandard &) = default ;
        CarStandard(CarStandard &&) = default ;
        CarStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CarStandard() = default ;
        CarStandard& operator=(const CarStandard &) = default ;
        CarStandard& operator=(CarStandard &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ModifyDestinationInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ModifyDestinationInfo& obj) { 
            DARABONBA_PTR_TO_JSON(modify_destination, modifyDestination_);
          };
          friend void from_json(const Darabonba::Json& j, ModifyDestinationInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(modify_destination, modifyDestination_);
          };
          ModifyDestinationInfo() = default ;
          ModifyDestinationInfo(const ModifyDestinationInfo &) = default ;
          ModifyDestinationInfo(ModifyDestinationInfo &&) = default ;
          ModifyDestinationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ModifyDestinationInfo() = default ;
          ModifyDestinationInfo& operator=(const ModifyDestinationInfo &) = default ;
          ModifyDestinationInfo& operator=(ModifyDestinationInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modifyDestination_ == nullptr; };
          // modifyDestination Field Functions 
          bool hasModifyDestination() const { return this->modifyDestination_ != nullptr;};
          void deleteModifyDestination() { this->modifyDestination_ = nullptr;};
          inline bool getModifyDestination() const { DARABONBA_PTR_GET_DEFAULT(modifyDestination_, false) };
          inline ModifyDestinationInfo& setModifyDestination(bool modifyDestination) { DARABONBA_PTR_SET_VALUE(modifyDestination_, modifyDestination) };


        protected:
          // This parameter is required.
          shared_ptr<bool> modifyDestination_ {};
        };

        class ElectronicFenceInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ElectronicFenceInfo& obj) { 
            DARABONBA_PTR_TO_JSON(electronic_fence_locations_from, electronicFenceLocationsFrom_);
            DARABONBA_PTR_TO_JSON(electronic_fence_locations_to, electronicFenceLocationsTo_);
            DARABONBA_PTR_TO_JSON(electronic_fence_type, electronicFenceType_);
          };
          friend void from_json(const Darabonba::Json& j, ElectronicFenceInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(electronic_fence_locations_from, electronicFenceLocationsFrom_);
            DARABONBA_PTR_FROM_JSON(electronic_fence_locations_to, electronicFenceLocationsTo_);
            DARABONBA_PTR_FROM_JSON(electronic_fence_type, electronicFenceType_);
          };
          ElectronicFenceInfo() = default ;
          ElectronicFenceInfo(const ElectronicFenceInfo &) = default ;
          ElectronicFenceInfo(ElectronicFenceInfo &&) = default ;
          ElectronicFenceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ElectronicFenceInfo() = default ;
          ElectronicFenceInfo& operator=(const ElectronicFenceInfo &) = default ;
          ElectronicFenceInfo& operator=(ElectronicFenceInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ElectronicFenceLocationsTo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ElectronicFenceLocationsTo& obj) { 
              DARABONBA_PTR_TO_JSON(address, address_);
              DARABONBA_PTR_TO_JSON(latitude, latitude_);
              DARABONBA_PTR_TO_JSON(longitude, longitude_);
              DARABONBA_PTR_TO_JSON(radius, radius_);
            };
            friend void from_json(const Darabonba::Json& j, ElectronicFenceLocationsTo& obj) { 
              DARABONBA_PTR_FROM_JSON(address, address_);
              DARABONBA_PTR_FROM_JSON(latitude, latitude_);
              DARABONBA_PTR_FROM_JSON(longitude, longitude_);
              DARABONBA_PTR_FROM_JSON(radius, radius_);
            };
            ElectronicFenceLocationsTo() = default ;
            ElectronicFenceLocationsTo(const ElectronicFenceLocationsTo &) = default ;
            ElectronicFenceLocationsTo(ElectronicFenceLocationsTo &&) = default ;
            ElectronicFenceLocationsTo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ElectronicFenceLocationsTo() = default ;
            ElectronicFenceLocationsTo& operator=(const ElectronicFenceLocationsTo &) = default ;
            ElectronicFenceLocationsTo& operator=(ElectronicFenceLocationsTo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->address_ == nullptr
        && this->latitude_ == nullptr && this->longitude_ == nullptr && this->radius_ == nullptr; };
            // address Field Functions 
            bool hasAddress() const { return this->address_ != nullptr;};
            void deleteAddress() { this->address_ = nullptr;};
            inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
            inline ElectronicFenceLocationsTo& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


            // latitude Field Functions 
            bool hasLatitude() const { return this->latitude_ != nullptr;};
            void deleteLatitude() { this->latitude_ = nullptr;};
            inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
            inline ElectronicFenceLocationsTo& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


            // longitude Field Functions 
            bool hasLongitude() const { return this->longitude_ != nullptr;};
            void deleteLongitude() { this->longitude_ = nullptr;};
            inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
            inline ElectronicFenceLocationsTo& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


            // radius Field Functions 
            bool hasRadius() const { return this->radius_ != nullptr;};
            void deleteRadius() { this->radius_ = nullptr;};
            inline int32_t getRadius() const { DARABONBA_PTR_GET_DEFAULT(radius_, 0) };
            inline ElectronicFenceLocationsTo& setRadius(int32_t radius) { DARABONBA_PTR_SET_VALUE(radius_, radius) };


          protected:
            // This parameter is required.
            shared_ptr<string> address_ {};
            // This parameter is required.
            shared_ptr<string> latitude_ {};
            // This parameter is required.
            shared_ptr<string> longitude_ {};
            // This parameter is required.
            shared_ptr<int32_t> radius_ {};
          };

          class ElectronicFenceLocationsFrom : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ElectronicFenceLocationsFrom& obj) { 
              DARABONBA_PTR_TO_JSON(address, address_);
              DARABONBA_PTR_TO_JSON(latitude, latitude_);
              DARABONBA_PTR_TO_JSON(longitude, longitude_);
              DARABONBA_PTR_TO_JSON(radius, radius_);
            };
            friend void from_json(const Darabonba::Json& j, ElectronicFenceLocationsFrom& obj) { 
              DARABONBA_PTR_FROM_JSON(address, address_);
              DARABONBA_PTR_FROM_JSON(latitude, latitude_);
              DARABONBA_PTR_FROM_JSON(longitude, longitude_);
              DARABONBA_PTR_FROM_JSON(radius, radius_);
            };
            ElectronicFenceLocationsFrom() = default ;
            ElectronicFenceLocationsFrom(const ElectronicFenceLocationsFrom &) = default ;
            ElectronicFenceLocationsFrom(ElectronicFenceLocationsFrom &&) = default ;
            ElectronicFenceLocationsFrom(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ElectronicFenceLocationsFrom() = default ;
            ElectronicFenceLocationsFrom& operator=(const ElectronicFenceLocationsFrom &) = default ;
            ElectronicFenceLocationsFrom& operator=(ElectronicFenceLocationsFrom &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->address_ == nullptr
        && this->latitude_ == nullptr && this->longitude_ == nullptr && this->radius_ == nullptr; };
            // address Field Functions 
            bool hasAddress() const { return this->address_ != nullptr;};
            void deleteAddress() { this->address_ = nullptr;};
            inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
            inline ElectronicFenceLocationsFrom& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


            // latitude Field Functions 
            bool hasLatitude() const { return this->latitude_ != nullptr;};
            void deleteLatitude() { this->latitude_ = nullptr;};
            inline string getLatitude() const { DARABONBA_PTR_GET_DEFAULT(latitude_, "") };
            inline ElectronicFenceLocationsFrom& setLatitude(string latitude) { DARABONBA_PTR_SET_VALUE(latitude_, latitude) };


            // longitude Field Functions 
            bool hasLongitude() const { return this->longitude_ != nullptr;};
            void deleteLongitude() { this->longitude_ = nullptr;};
            inline string getLongitude() const { DARABONBA_PTR_GET_DEFAULT(longitude_, "") };
            inline ElectronicFenceLocationsFrom& setLongitude(string longitude) { DARABONBA_PTR_SET_VALUE(longitude_, longitude) };


            // radius Field Functions 
            bool hasRadius() const { return this->radius_ != nullptr;};
            void deleteRadius() { this->radius_ = nullptr;};
            inline int32_t getRadius() const { DARABONBA_PTR_GET_DEFAULT(radius_, 0) };
            inline ElectronicFenceLocationsFrom& setRadius(int32_t radius) { DARABONBA_PTR_SET_VALUE(radius_, radius) };


          protected:
            // This parameter is required.
            shared_ptr<string> address_ {};
            // This parameter is required.
            shared_ptr<string> latitude_ {};
            // This parameter is required.
            shared_ptr<string> longitude_ {};
            // This parameter is required.
            shared_ptr<int32_t> radius_ {};
          };

          virtual bool empty() const override { return this->electronicFenceLocationsFrom_ == nullptr
        && this->electronicFenceLocationsTo_ == nullptr && this->electronicFenceType_ == nullptr; };
          // electronicFenceLocationsFrom Field Functions 
          bool hasElectronicFenceLocationsFrom() const { return this->electronicFenceLocationsFrom_ != nullptr;};
          void deleteElectronicFenceLocationsFrom() { this->electronicFenceLocationsFrom_ = nullptr;};
          inline const vector<ElectronicFenceInfo::ElectronicFenceLocationsFrom> & getElectronicFenceLocationsFrom() const { DARABONBA_PTR_GET_CONST(electronicFenceLocationsFrom_, vector<ElectronicFenceInfo::ElectronicFenceLocationsFrom>) };
          inline vector<ElectronicFenceInfo::ElectronicFenceLocationsFrom> getElectronicFenceLocationsFrom() { DARABONBA_PTR_GET(electronicFenceLocationsFrom_, vector<ElectronicFenceInfo::ElectronicFenceLocationsFrom>) };
          inline ElectronicFenceInfo& setElectronicFenceLocationsFrom(const vector<ElectronicFenceInfo::ElectronicFenceLocationsFrom> & electronicFenceLocationsFrom) { DARABONBA_PTR_SET_VALUE(electronicFenceLocationsFrom_, electronicFenceLocationsFrom) };
          inline ElectronicFenceInfo& setElectronicFenceLocationsFrom(vector<ElectronicFenceInfo::ElectronicFenceLocationsFrom> && electronicFenceLocationsFrom) { DARABONBA_PTR_SET_RVALUE(electronicFenceLocationsFrom_, electronicFenceLocationsFrom) };


          // electronicFenceLocationsTo Field Functions 
          bool hasElectronicFenceLocationsTo() const { return this->electronicFenceLocationsTo_ != nullptr;};
          void deleteElectronicFenceLocationsTo() { this->electronicFenceLocationsTo_ = nullptr;};
          inline const vector<ElectronicFenceInfo::ElectronicFenceLocationsTo> & getElectronicFenceLocationsTo() const { DARABONBA_PTR_GET_CONST(electronicFenceLocationsTo_, vector<ElectronicFenceInfo::ElectronicFenceLocationsTo>) };
          inline vector<ElectronicFenceInfo::ElectronicFenceLocationsTo> getElectronicFenceLocationsTo() { DARABONBA_PTR_GET(electronicFenceLocationsTo_, vector<ElectronicFenceInfo::ElectronicFenceLocationsTo>) };
          inline ElectronicFenceInfo& setElectronicFenceLocationsTo(const vector<ElectronicFenceInfo::ElectronicFenceLocationsTo> & electronicFenceLocationsTo) { DARABONBA_PTR_SET_VALUE(electronicFenceLocationsTo_, electronicFenceLocationsTo) };
          inline ElectronicFenceInfo& setElectronicFenceLocationsTo(vector<ElectronicFenceInfo::ElectronicFenceLocationsTo> && electronicFenceLocationsTo) { DARABONBA_PTR_SET_RVALUE(electronicFenceLocationsTo_, electronicFenceLocationsTo) };


          // electronicFenceType Field Functions 
          bool hasElectronicFenceType() const { return this->electronicFenceType_ != nullptr;};
          void deleteElectronicFenceType() { this->electronicFenceType_ = nullptr;};
          inline int32_t getElectronicFenceType() const { DARABONBA_PTR_GET_DEFAULT(electronicFenceType_, 0) };
          inline ElectronicFenceInfo& setElectronicFenceType(int32_t electronicFenceType) { DARABONBA_PTR_SET_VALUE(electronicFenceType_, electronicFenceType) };


        protected:
          // This parameter is required.
          shared_ptr<vector<ElectronicFenceInfo::ElectronicFenceLocationsFrom>> electronicFenceLocationsFrom_ {};
          // This parameter is required.
          shared_ptr<vector<ElectronicFenceInfo::ElectronicFenceLocationsTo>> electronicFenceLocationsTo_ {};
          // This parameter is required.
          shared_ptr<int32_t> electronicFenceType_ {};
        };

        class CrossCityInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CrossCityInfo& obj) { 
            DARABONBA_PTR_TO_JSON(cross_city_list, crossCityList_);
            DARABONBA_PTR_TO_JSON(cross_city_type, crossCityType_);
          };
          friend void from_json(const Darabonba::Json& j, CrossCityInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(cross_city_list, crossCityList_);
            DARABONBA_PTR_FROM_JSON(cross_city_type, crossCityType_);
          };
          CrossCityInfo() = default ;
          CrossCityInfo(const CrossCityInfo &) = default ;
          CrossCityInfo(CrossCityInfo &&) = default ;
          CrossCityInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CrossCityInfo() = default ;
          CrossCityInfo& operator=(const CrossCityInfo &) = default ;
          CrossCityInfo& operator=(CrossCityInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CrossCityList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CrossCityList& obj) { 
              DARABONBA_PTR_TO_JSON(from_adcode, fromAdcode_);
              DARABONBA_PTR_TO_JSON(from_city_code, fromCityCode_);
              DARABONBA_PTR_TO_JSON(from_city_name, fromCityName_);
              DARABONBA_PTR_TO_JSON(to_adcode, toAdcode_);
              DARABONBA_PTR_TO_JSON(to_city_code, toCityCode_);
              DARABONBA_PTR_TO_JSON(to_city_name, toCityName_);
            };
            friend void from_json(const Darabonba::Json& j, CrossCityList& obj) { 
              DARABONBA_PTR_FROM_JSON(from_adcode, fromAdcode_);
              DARABONBA_PTR_FROM_JSON(from_city_code, fromCityCode_);
              DARABONBA_PTR_FROM_JSON(from_city_name, fromCityName_);
              DARABONBA_PTR_FROM_JSON(to_adcode, toAdcode_);
              DARABONBA_PTR_FROM_JSON(to_city_code, toCityCode_);
              DARABONBA_PTR_FROM_JSON(to_city_name, toCityName_);
            };
            CrossCityList() = default ;
            CrossCityList(const CrossCityList &) = default ;
            CrossCityList(CrossCityList &&) = default ;
            CrossCityList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CrossCityList() = default ;
            CrossCityList& operator=(const CrossCityList &) = default ;
            CrossCityList& operator=(CrossCityList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->fromAdcode_ == nullptr
        && this->fromCityCode_ == nullptr && this->fromCityName_ == nullptr && this->toAdcode_ == nullptr && this->toCityCode_ == nullptr && this->toCityName_ == nullptr; };
            // fromAdcode Field Functions 
            bool hasFromAdcode() const { return this->fromAdcode_ != nullptr;};
            void deleteFromAdcode() { this->fromAdcode_ = nullptr;};
            inline string getFromAdcode() const { DARABONBA_PTR_GET_DEFAULT(fromAdcode_, "") };
            inline CrossCityList& setFromAdcode(string fromAdcode) { DARABONBA_PTR_SET_VALUE(fromAdcode_, fromAdcode) };


            // fromCityCode Field Functions 
            bool hasFromCityCode() const { return this->fromCityCode_ != nullptr;};
            void deleteFromCityCode() { this->fromCityCode_ = nullptr;};
            inline string getFromCityCode() const { DARABONBA_PTR_GET_DEFAULT(fromCityCode_, "") };
            inline CrossCityList& setFromCityCode(string fromCityCode) { DARABONBA_PTR_SET_VALUE(fromCityCode_, fromCityCode) };


            // fromCityName Field Functions 
            bool hasFromCityName() const { return this->fromCityName_ != nullptr;};
            void deleteFromCityName() { this->fromCityName_ = nullptr;};
            inline string getFromCityName() const { DARABONBA_PTR_GET_DEFAULT(fromCityName_, "") };
            inline CrossCityList& setFromCityName(string fromCityName) { DARABONBA_PTR_SET_VALUE(fromCityName_, fromCityName) };


            // toAdcode Field Functions 
            bool hasToAdcode() const { return this->toAdcode_ != nullptr;};
            void deleteToAdcode() { this->toAdcode_ = nullptr;};
            inline string getToAdcode() const { DARABONBA_PTR_GET_DEFAULT(toAdcode_, "") };
            inline CrossCityList& setToAdcode(string toAdcode) { DARABONBA_PTR_SET_VALUE(toAdcode_, toAdcode) };


            // toCityCode Field Functions 
            bool hasToCityCode() const { return this->toCityCode_ != nullptr;};
            void deleteToCityCode() { this->toCityCode_ = nullptr;};
            inline string getToCityCode() const { DARABONBA_PTR_GET_DEFAULT(toCityCode_, "") };
            inline CrossCityList& setToCityCode(string toCityCode) { DARABONBA_PTR_SET_VALUE(toCityCode_, toCityCode) };


            // toCityName Field Functions 
            bool hasToCityName() const { return this->toCityName_ != nullptr;};
            void deleteToCityName() { this->toCityName_ = nullptr;};
            inline string getToCityName() const { DARABONBA_PTR_GET_DEFAULT(toCityName_, "") };
            inline CrossCityList& setToCityName(string toCityName) { DARABONBA_PTR_SET_VALUE(toCityName_, toCityName) };


          protected:
            // This parameter is required.
            shared_ptr<string> fromAdcode_ {};
            // This parameter is required.
            shared_ptr<string> fromCityCode_ {};
            // This parameter is required.
            shared_ptr<string> fromCityName_ {};
            // This parameter is required.
            shared_ptr<string> toAdcode_ {};
            // This parameter is required.
            shared_ptr<string> toCityCode_ {};
            // This parameter is required.
            shared_ptr<string> toCityName_ {};
          };

          virtual bool empty() const override { return this->crossCityList_ == nullptr
        && this->crossCityType_ == nullptr; };
          // crossCityList Field Functions 
          bool hasCrossCityList() const { return this->crossCityList_ != nullptr;};
          void deleteCrossCityList() { this->crossCityList_ = nullptr;};
          inline const vector<CrossCityInfo::CrossCityList> & getCrossCityList() const { DARABONBA_PTR_GET_CONST(crossCityList_, vector<CrossCityInfo::CrossCityList>) };
          inline vector<CrossCityInfo::CrossCityList> getCrossCityList() { DARABONBA_PTR_GET(crossCityList_, vector<CrossCityInfo::CrossCityList>) };
          inline CrossCityInfo& setCrossCityList(const vector<CrossCityInfo::CrossCityList> & crossCityList) { DARABONBA_PTR_SET_VALUE(crossCityList_, crossCityList) };
          inline CrossCityInfo& setCrossCityList(vector<CrossCityInfo::CrossCityList> && crossCityList) { DARABONBA_PTR_SET_RVALUE(crossCityList_, crossCityList) };


          // crossCityType Field Functions 
          bool hasCrossCityType() const { return this->crossCityType_ != nullptr;};
          void deleteCrossCityType() { this->crossCityType_ = nullptr;};
          inline int32_t getCrossCityType() const { DARABONBA_PTR_GET_DEFAULT(crossCityType_, 0) };
          inline CrossCityInfo& setCrossCityType(int32_t crossCityType) { DARABONBA_PTR_SET_VALUE(crossCityType_, crossCityType) };


        protected:
          shared_ptr<vector<CrossCityInfo::CrossCityList>> crossCityList_ {};
          // This parameter is required.
          shared_ptr<int32_t> crossCityType_ {};
        };

        class CityControlInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CityControlInfo& obj) { 
            DARABONBA_PTR_TO_JSON(city_control_type, cityControlType_);
            DARABONBA_PTR_TO_JSON(city_infos, cityInfos_);
          };
          friend void from_json(const Darabonba::Json& j, CityControlInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(city_control_type, cityControlType_);
            DARABONBA_PTR_FROM_JSON(city_infos, cityInfos_);
          };
          CityControlInfo() = default ;
          CityControlInfo(const CityControlInfo &) = default ;
          CityControlInfo(CityControlInfo &&) = default ;
          CityControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CityControlInfo() = default ;
          CityControlInfo& operator=(const CityControlInfo &) = default ;
          CityControlInfo& operator=(CityControlInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CityInfos : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CityInfos& obj) { 
              DARABONBA_PTR_TO_JSON(adcode, adcode_);
              DARABONBA_PTR_TO_JSON(city_code, cityCode_);
              DARABONBA_PTR_TO_JSON(city_name, cityName_);
            };
            friend void from_json(const Darabonba::Json& j, CityInfos& obj) { 
              DARABONBA_PTR_FROM_JSON(adcode, adcode_);
              DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
              DARABONBA_PTR_FROM_JSON(city_name, cityName_);
            };
            CityInfos() = default ;
            CityInfos(const CityInfos &) = default ;
            CityInfos(CityInfos &&) = default ;
            CityInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CityInfos() = default ;
            CityInfos& operator=(const CityInfos &) = default ;
            CityInfos& operator=(CityInfos &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->adcode_ == nullptr
        && this->cityCode_ == nullptr && this->cityName_ == nullptr; };
            // adcode Field Functions 
            bool hasAdcode() const { return this->adcode_ != nullptr;};
            void deleteAdcode() { this->adcode_ = nullptr;};
            inline string getAdcode() const { DARABONBA_PTR_GET_DEFAULT(adcode_, "") };
            inline CityInfos& setAdcode(string adcode) { DARABONBA_PTR_SET_VALUE(adcode_, adcode) };


            // cityCode Field Functions 
            bool hasCityCode() const { return this->cityCode_ != nullptr;};
            void deleteCityCode() { this->cityCode_ = nullptr;};
            inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
            inline CityInfos& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


            // cityName Field Functions 
            bool hasCityName() const { return this->cityName_ != nullptr;};
            void deleteCityName() { this->cityName_ = nullptr;};
            inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
            inline CityInfos& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


          protected:
            // This parameter is required.
            shared_ptr<string> adcode_ {};
            // This parameter is required.
            shared_ptr<string> cityCode_ {};
            // This parameter is required.
            shared_ptr<string> cityName_ {};
          };

          virtual bool empty() const override { return this->cityControlType_ == nullptr
        && this->cityInfos_ == nullptr; };
          // cityControlType Field Functions 
          bool hasCityControlType() const { return this->cityControlType_ != nullptr;};
          void deleteCityControlType() { this->cityControlType_ = nullptr;};
          inline int32_t getCityControlType() const { DARABONBA_PTR_GET_DEFAULT(cityControlType_, 0) };
          inline CityControlInfo& setCityControlType(int32_t cityControlType) { DARABONBA_PTR_SET_VALUE(cityControlType_, cityControlType) };


          // cityInfos Field Functions 
          bool hasCityInfos() const { return this->cityInfos_ != nullptr;};
          void deleteCityInfos() { this->cityInfos_ = nullptr;};
          inline const vector<CityControlInfo::CityInfos> & getCityInfos() const { DARABONBA_PTR_GET_CONST(cityInfos_, vector<CityControlInfo::CityInfos>) };
          inline vector<CityControlInfo::CityInfos> getCityInfos() { DARABONBA_PTR_GET(cityInfos_, vector<CityControlInfo::CityInfos>) };
          inline CityControlInfo& setCityInfos(const vector<CityControlInfo::CityInfos> & cityInfos) { DARABONBA_PTR_SET_VALUE(cityInfos_, cityInfos) };
          inline CityControlInfo& setCityInfos(vector<CityControlInfo::CityInfos> && cityInfos) { DARABONBA_PTR_SET_RVALUE(cityInfos_, cityInfos) };


        protected:
          // This parameter is required.
          shared_ptr<int32_t> cityControlType_ {};
          // This parameter is required.
          shared_ptr<vector<CityControlInfo::CityInfos>> cityInfos_ {};
        };

        class CarTimeControl : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CarTimeControl& obj) { 
            DARABONBA_PTR_TO_JSON(time_limit, timeLimit_);
            DARABONBA_PTR_TO_JSON(time_switch, timeSwitch_);
          };
          friend void from_json(const Darabonba::Json& j, CarTimeControl& obj) { 
            DARABONBA_PTR_FROM_JSON(time_limit, timeLimit_);
            DARABONBA_PTR_FROM_JSON(time_switch, timeSwitch_);
          };
          CarTimeControl() = default ;
          CarTimeControl(const CarTimeControl &) = default ;
          CarTimeControl(CarTimeControl &&) = default ;
          CarTimeControl(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CarTimeControl() = default ;
          CarTimeControl& operator=(const CarTimeControl &) = default ;
          CarTimeControl& operator=(CarTimeControl &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class TimeLimit : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TimeLimit& obj) { 
              DARABONBA_PTR_TO_JSON(end_time, endTime_);
              DARABONBA_PTR_TO_JSON(start_time, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, TimeLimit& obj) { 
              DARABONBA_PTR_FROM_JSON(end_time, endTime_);
              DARABONBA_PTR_FROM_JSON(start_time, startTime_);
            };
            TimeLimit() = default ;
            TimeLimit(const TimeLimit &) = default ;
            TimeLimit(TimeLimit &&) = default ;
            TimeLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TimeLimit() = default ;
            TimeLimit& operator=(const TimeLimit &) = default ;
            TimeLimit& operator=(TimeLimit &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline TimeLimit& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline TimeLimit& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            // This parameter is required.
            shared_ptr<string> endTime_ {};
            // This parameter is required.
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->timeLimit_ == nullptr
        && this->timeSwitch_ == nullptr; };
          // timeLimit Field Functions 
          bool hasTimeLimit() const { return this->timeLimit_ != nullptr;};
          void deleteTimeLimit() { this->timeLimit_ = nullptr;};
          inline const vector<CarTimeControl::TimeLimit> & getTimeLimit() const { DARABONBA_PTR_GET_CONST(timeLimit_, vector<CarTimeControl::TimeLimit>) };
          inline vector<CarTimeControl::TimeLimit> getTimeLimit() { DARABONBA_PTR_GET(timeLimit_, vector<CarTimeControl::TimeLimit>) };
          inline CarTimeControl& setTimeLimit(const vector<CarTimeControl::TimeLimit> & timeLimit) { DARABONBA_PTR_SET_VALUE(timeLimit_, timeLimit) };
          inline CarTimeControl& setTimeLimit(vector<CarTimeControl::TimeLimit> && timeLimit) { DARABONBA_PTR_SET_RVALUE(timeLimit_, timeLimit) };


          // timeSwitch Field Functions 
          bool hasTimeSwitch() const { return this->timeSwitch_ != nullptr;};
          void deleteTimeSwitch() { this->timeSwitch_ = nullptr;};
          inline bool getTimeSwitch() const { DARABONBA_PTR_GET_DEFAULT(timeSwitch_, false) };
          inline CarTimeControl& setTimeSwitch(bool timeSwitch) { DARABONBA_PTR_SET_VALUE(timeSwitch_, timeSwitch) };


        protected:
          // This parameter is required.
          shared_ptr<vector<CarTimeControl::TimeLimit>> timeLimit_ {};
          // This parameter is required.
          shared_ptr<bool> timeSwitch_ {};
        };

        class CarHelper : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CarHelper& obj) { 
            DARABONBA_PTR_TO_JSON(car_helper_type, carHelperType_);
          };
          friend void from_json(const Darabonba::Json& j, CarHelper& obj) { 
            DARABONBA_PTR_FROM_JSON(car_helper_type, carHelperType_);
          };
          CarHelper() = default ;
          CarHelper(const CarHelper &) = default ;
          CarHelper(CarHelper &&) = default ;
          CarHelper(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CarHelper() = default ;
          CarHelper& operator=(const CarHelper &) = default ;
          CarHelper& operator=(CarHelper &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->carHelperType_ == nullptr; };
          // carHelperType Field Functions 
          bool hasCarHelperType() const { return this->carHelperType_ != nullptr;};
          void deleteCarHelperType() { this->carHelperType_ = nullptr;};
          inline string getCarHelperType() const { DARABONBA_PTR_GET_DEFAULT(carHelperType_, "") };
          inline CarHelper& setCarHelperType(string carHelperType) { DARABONBA_PTR_SET_VALUE(carHelperType_, carHelperType) };


        protected:
          // This parameter is required.
          shared_ptr<string> carHelperType_ {};
        };

        class BookAllowInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BookAllowInfo& obj) { 
            DARABONBA_PTR_TO_JSON(book_allow, bookAllow_);
          };
          friend void from_json(const Darabonba::Json& j, BookAllowInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(book_allow, bookAllow_);
          };
          BookAllowInfo() = default ;
          BookAllowInfo(const BookAllowInfo &) = default ;
          BookAllowInfo(BookAllowInfo &&) = default ;
          BookAllowInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BookAllowInfo() = default ;
          BookAllowInfo& operator=(const BookAllowInfo &) = default ;
          BookAllowInfo& operator=(BookAllowInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bookAllow_ == nullptr; };
          // bookAllow Field Functions 
          bool hasBookAllow() const { return this->bookAllow_ != nullptr;};
          void deleteBookAllow() { this->bookAllow_ = nullptr;};
          inline bool getBookAllow() const { DARABONBA_PTR_GET_DEFAULT(bookAllow_, false) };
          inline BookAllowInfo& setBookAllow(bool bookAllow) { DARABONBA_PTR_SET_VALUE(bookAllow_, bookAllow) };


        protected:
          // This parameter is required.
          shared_ptr<bool> bookAllow_ {};
        };

        virtual bool empty() const override { return this->bookAllowInfo_ == nullptr
        && this->carHelper_ == nullptr && this->carTimeControl_ == nullptr && this->cityControlInfo_ == nullptr && this->crossCityInfo_ == nullptr && this->electronicFenceInfo_ == nullptr
        && this->levelCodes_ == nullptr && this->modifyDestinationInfo_ == nullptr && this->timesTotal_ == nullptr && this->timesType_ == nullptr; };
        // bookAllowInfo Field Functions 
        bool hasBookAllowInfo() const { return this->bookAllowInfo_ != nullptr;};
        void deleteBookAllowInfo() { this->bookAllowInfo_ = nullptr;};
        inline const CarStandard::BookAllowInfo & getBookAllowInfo() const { DARABONBA_PTR_GET_CONST(bookAllowInfo_, CarStandard::BookAllowInfo) };
        inline CarStandard::BookAllowInfo getBookAllowInfo() { DARABONBA_PTR_GET(bookAllowInfo_, CarStandard::BookAllowInfo) };
        inline CarStandard& setBookAllowInfo(const CarStandard::BookAllowInfo & bookAllowInfo) { DARABONBA_PTR_SET_VALUE(bookAllowInfo_, bookAllowInfo) };
        inline CarStandard& setBookAllowInfo(CarStandard::BookAllowInfo && bookAllowInfo) { DARABONBA_PTR_SET_RVALUE(bookAllowInfo_, bookAllowInfo) };


        // carHelper Field Functions 
        bool hasCarHelper() const { return this->carHelper_ != nullptr;};
        void deleteCarHelper() { this->carHelper_ = nullptr;};
        inline const CarStandard::CarHelper & getCarHelper() const { DARABONBA_PTR_GET_CONST(carHelper_, CarStandard::CarHelper) };
        inline CarStandard::CarHelper getCarHelper() { DARABONBA_PTR_GET(carHelper_, CarStandard::CarHelper) };
        inline CarStandard& setCarHelper(const CarStandard::CarHelper & carHelper) { DARABONBA_PTR_SET_VALUE(carHelper_, carHelper) };
        inline CarStandard& setCarHelper(CarStandard::CarHelper && carHelper) { DARABONBA_PTR_SET_RVALUE(carHelper_, carHelper) };


        // carTimeControl Field Functions 
        bool hasCarTimeControl() const { return this->carTimeControl_ != nullptr;};
        void deleteCarTimeControl() { this->carTimeControl_ = nullptr;};
        inline const CarStandard::CarTimeControl & getCarTimeControl() const { DARABONBA_PTR_GET_CONST(carTimeControl_, CarStandard::CarTimeControl) };
        inline CarStandard::CarTimeControl getCarTimeControl() { DARABONBA_PTR_GET(carTimeControl_, CarStandard::CarTimeControl) };
        inline CarStandard& setCarTimeControl(const CarStandard::CarTimeControl & carTimeControl) { DARABONBA_PTR_SET_VALUE(carTimeControl_, carTimeControl) };
        inline CarStandard& setCarTimeControl(CarStandard::CarTimeControl && carTimeControl) { DARABONBA_PTR_SET_RVALUE(carTimeControl_, carTimeControl) };


        // cityControlInfo Field Functions 
        bool hasCityControlInfo() const { return this->cityControlInfo_ != nullptr;};
        void deleteCityControlInfo() { this->cityControlInfo_ = nullptr;};
        inline const CarStandard::CityControlInfo & getCityControlInfo() const { DARABONBA_PTR_GET_CONST(cityControlInfo_, CarStandard::CityControlInfo) };
        inline CarStandard::CityControlInfo getCityControlInfo() { DARABONBA_PTR_GET(cityControlInfo_, CarStandard::CityControlInfo) };
        inline CarStandard& setCityControlInfo(const CarStandard::CityControlInfo & cityControlInfo) { DARABONBA_PTR_SET_VALUE(cityControlInfo_, cityControlInfo) };
        inline CarStandard& setCityControlInfo(CarStandard::CityControlInfo && cityControlInfo) { DARABONBA_PTR_SET_RVALUE(cityControlInfo_, cityControlInfo) };


        // crossCityInfo Field Functions 
        bool hasCrossCityInfo() const { return this->crossCityInfo_ != nullptr;};
        void deleteCrossCityInfo() { this->crossCityInfo_ = nullptr;};
        inline const CarStandard::CrossCityInfo & getCrossCityInfo() const { DARABONBA_PTR_GET_CONST(crossCityInfo_, CarStandard::CrossCityInfo) };
        inline CarStandard::CrossCityInfo getCrossCityInfo() { DARABONBA_PTR_GET(crossCityInfo_, CarStandard::CrossCityInfo) };
        inline CarStandard& setCrossCityInfo(const CarStandard::CrossCityInfo & crossCityInfo) { DARABONBA_PTR_SET_VALUE(crossCityInfo_, crossCityInfo) };
        inline CarStandard& setCrossCityInfo(CarStandard::CrossCityInfo && crossCityInfo) { DARABONBA_PTR_SET_RVALUE(crossCityInfo_, crossCityInfo) };


        // electronicFenceInfo Field Functions 
        bool hasElectronicFenceInfo() const { return this->electronicFenceInfo_ != nullptr;};
        void deleteElectronicFenceInfo() { this->electronicFenceInfo_ = nullptr;};
        inline const CarStandard::ElectronicFenceInfo & getElectronicFenceInfo() const { DARABONBA_PTR_GET_CONST(electronicFenceInfo_, CarStandard::ElectronicFenceInfo) };
        inline CarStandard::ElectronicFenceInfo getElectronicFenceInfo() { DARABONBA_PTR_GET(electronicFenceInfo_, CarStandard::ElectronicFenceInfo) };
        inline CarStandard& setElectronicFenceInfo(const CarStandard::ElectronicFenceInfo & electronicFenceInfo) { DARABONBA_PTR_SET_VALUE(electronicFenceInfo_, electronicFenceInfo) };
        inline CarStandard& setElectronicFenceInfo(CarStandard::ElectronicFenceInfo && electronicFenceInfo) { DARABONBA_PTR_SET_RVALUE(electronicFenceInfo_, electronicFenceInfo) };


        // levelCodes Field Functions 
        bool hasLevelCodes() const { return this->levelCodes_ != nullptr;};
        void deleteLevelCodes() { this->levelCodes_ = nullptr;};
        inline string getLevelCodes() const { DARABONBA_PTR_GET_DEFAULT(levelCodes_, "") };
        inline CarStandard& setLevelCodes(string levelCodes) { DARABONBA_PTR_SET_VALUE(levelCodes_, levelCodes) };


        // modifyDestinationInfo Field Functions 
        bool hasModifyDestinationInfo() const { return this->modifyDestinationInfo_ != nullptr;};
        void deleteModifyDestinationInfo() { this->modifyDestinationInfo_ = nullptr;};
        inline const CarStandard::ModifyDestinationInfo & getModifyDestinationInfo() const { DARABONBA_PTR_GET_CONST(modifyDestinationInfo_, CarStandard::ModifyDestinationInfo) };
        inline CarStandard::ModifyDestinationInfo getModifyDestinationInfo() { DARABONBA_PTR_GET(modifyDestinationInfo_, CarStandard::ModifyDestinationInfo) };
        inline CarStandard& setModifyDestinationInfo(const CarStandard::ModifyDestinationInfo & modifyDestinationInfo) { DARABONBA_PTR_SET_VALUE(modifyDestinationInfo_, modifyDestinationInfo) };
        inline CarStandard& setModifyDestinationInfo(CarStandard::ModifyDestinationInfo && modifyDestinationInfo) { DARABONBA_PTR_SET_RVALUE(modifyDestinationInfo_, modifyDestinationInfo) };


        // timesTotal Field Functions 
        bool hasTimesTotal() const { return this->timesTotal_ != nullptr;};
        void deleteTimesTotal() { this->timesTotal_ = nullptr;};
        inline int32_t getTimesTotal() const { DARABONBA_PTR_GET_DEFAULT(timesTotal_, 0) };
        inline CarStandard& setTimesTotal(int32_t timesTotal) { DARABONBA_PTR_SET_VALUE(timesTotal_, timesTotal) };


        // timesType Field Functions 
        bool hasTimesType() const { return this->timesType_ != nullptr;};
        void deleteTimesType() { this->timesType_ = nullptr;};
        inline int32_t getTimesType() const { DARABONBA_PTR_GET_DEFAULT(timesType_, 0) };
        inline CarStandard& setTimesType(int32_t timesType) { DARABONBA_PTR_SET_VALUE(timesType_, timesType) };


      protected:
        shared_ptr<CarStandard::BookAllowInfo> bookAllowInfo_ {};
        shared_ptr<CarStandard::CarHelper> carHelper_ {};
        shared_ptr<CarStandard::CarTimeControl> carTimeControl_ {};
        shared_ptr<CarStandard::CityControlInfo> cityControlInfo_ {};
        shared_ptr<CarStandard::CrossCityInfo> crossCityInfo_ {};
        shared_ptr<CarStandard::ElectronicFenceInfo> electronicFenceInfo_ {};
        shared_ptr<string> levelCodes_ {};
        shared_ptr<CarStandard::ModifyDestinationInfo> modifyDestinationInfo_ {};
        shared_ptr<int32_t> timesTotal_ {};
        shared_ptr<int32_t> timesType_ {};
      };

      class CarCitySet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CarCitySet& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
        };
        friend void from_json(const Darabonba::Json& j, CarCitySet& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
        };
        CarCitySet() = default ;
        CarCitySet(const CarCitySet &) = default ;
        CarCitySet(CarCitySet &&) = default ;
        CarCitySet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CarCitySet() = default ;
        CarCitySet& operator=(const CarCitySet &) = default ;
        CarCitySet& operator=(CarCitySet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline CarCitySet& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline CarCitySet& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


      protected:
        // This parameter is required.
        shared_ptr<string> cityCode_ {};
        // This parameter is required.
        shared_ptr<string> cityName_ {};
      };

      virtual bool empty() const override { return this->businessDiscount_ == nullptr
        && this->carCitySet_ == nullptr && this->carStandard_ == nullptr && this->economyDiscount_ == nullptr && this->firstDiscount_ == nullptr && this->flightCabins_ == nullptr
        && this->flightIntlRuleCode_ == nullptr && this->flightRuleCode_ == nullptr && this->hotelCitys_ == nullptr && this->hotelIntlCitys_ == nullptr && this->hotelIntlRuleCode_ == nullptr
        && this->hotelRuleCode_ == nullptr && this->internationalFlightCabins_ == nullptr && this->premiumEconomyDiscount_ == nullptr && this->reserveType_ == nullptr && this->trainRuleCode_ == nullptr
        && this->trainSeats_ == nullptr && this->userId_ == nullptr; };
      // businessDiscount Field Functions 
      bool hasBusinessDiscount() const { return this->businessDiscount_ != nullptr;};
      void deleteBusinessDiscount() { this->businessDiscount_ = nullptr;};
      inline int32_t getBusinessDiscount() const { DARABONBA_PTR_GET_DEFAULT(businessDiscount_, 0) };
      inline TravelerStandard& setBusinessDiscount(int32_t businessDiscount) { DARABONBA_PTR_SET_VALUE(businessDiscount_, businessDiscount) };


      // carCitySet Field Functions 
      bool hasCarCitySet() const { return this->carCitySet_ != nullptr;};
      void deleteCarCitySet() { this->carCitySet_ = nullptr;};
      inline const vector<TravelerStandard::CarCitySet> & getCarCitySet() const { DARABONBA_PTR_GET_CONST(carCitySet_, vector<TravelerStandard::CarCitySet>) };
      inline vector<TravelerStandard::CarCitySet> getCarCitySet() { DARABONBA_PTR_GET(carCitySet_, vector<TravelerStandard::CarCitySet>) };
      inline TravelerStandard& setCarCitySet(const vector<TravelerStandard::CarCitySet> & carCitySet) { DARABONBA_PTR_SET_VALUE(carCitySet_, carCitySet) };
      inline TravelerStandard& setCarCitySet(vector<TravelerStandard::CarCitySet> && carCitySet) { DARABONBA_PTR_SET_RVALUE(carCitySet_, carCitySet) };


      // carStandard Field Functions 
      bool hasCarStandard() const { return this->carStandard_ != nullptr;};
      void deleteCarStandard() { this->carStandard_ = nullptr;};
      inline const TravelerStandard::CarStandard & getCarStandard() const { DARABONBA_PTR_GET_CONST(carStandard_, TravelerStandard::CarStandard) };
      inline TravelerStandard::CarStandard getCarStandard() { DARABONBA_PTR_GET(carStandard_, TravelerStandard::CarStandard) };
      inline TravelerStandard& setCarStandard(const TravelerStandard::CarStandard & carStandard) { DARABONBA_PTR_SET_VALUE(carStandard_, carStandard) };
      inline TravelerStandard& setCarStandard(TravelerStandard::CarStandard && carStandard) { DARABONBA_PTR_SET_RVALUE(carStandard_, carStandard) };


      // economyDiscount Field Functions 
      bool hasEconomyDiscount() const { return this->economyDiscount_ != nullptr;};
      void deleteEconomyDiscount() { this->economyDiscount_ = nullptr;};
      inline int32_t getEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(economyDiscount_, 0) };
      inline TravelerStandard& setEconomyDiscount(int32_t economyDiscount) { DARABONBA_PTR_SET_VALUE(economyDiscount_, economyDiscount) };


      // firstDiscount Field Functions 
      bool hasFirstDiscount() const { return this->firstDiscount_ != nullptr;};
      void deleteFirstDiscount() { this->firstDiscount_ = nullptr;};
      inline int32_t getFirstDiscount() const { DARABONBA_PTR_GET_DEFAULT(firstDiscount_, 0) };
      inline TravelerStandard& setFirstDiscount(int32_t firstDiscount) { DARABONBA_PTR_SET_VALUE(firstDiscount_, firstDiscount) };


      // flightCabins Field Functions 
      bool hasFlightCabins() const { return this->flightCabins_ != nullptr;};
      void deleteFlightCabins() { this->flightCabins_ = nullptr;};
      inline string getFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(flightCabins_, "") };
      inline TravelerStandard& setFlightCabins(string flightCabins) { DARABONBA_PTR_SET_VALUE(flightCabins_, flightCabins) };


      // flightIntlRuleCode Field Functions 
      bool hasFlightIntlRuleCode() const { return this->flightIntlRuleCode_ != nullptr;};
      void deleteFlightIntlRuleCode() { this->flightIntlRuleCode_ = nullptr;};
      inline int64_t getFlightIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightIntlRuleCode_, 0L) };
      inline TravelerStandard& setFlightIntlRuleCode(int64_t flightIntlRuleCode) { DARABONBA_PTR_SET_VALUE(flightIntlRuleCode_, flightIntlRuleCode) };


      // flightRuleCode Field Functions 
      bool hasFlightRuleCode() const { return this->flightRuleCode_ != nullptr;};
      void deleteFlightRuleCode() { this->flightRuleCode_ = nullptr;};
      inline int64_t getFlightRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightRuleCode_, 0L) };
      inline TravelerStandard& setFlightRuleCode(int64_t flightRuleCode) { DARABONBA_PTR_SET_VALUE(flightRuleCode_, flightRuleCode) };


      // hotelCitys Field Functions 
      bool hasHotelCitys() const { return this->hotelCitys_ != nullptr;};
      void deleteHotelCitys() { this->hotelCitys_ = nullptr;};
      inline const vector<TravelerStandard::HotelCitys> & getHotelCitys() const { DARABONBA_PTR_GET_CONST(hotelCitys_, vector<TravelerStandard::HotelCitys>) };
      inline vector<TravelerStandard::HotelCitys> getHotelCitys() { DARABONBA_PTR_GET(hotelCitys_, vector<TravelerStandard::HotelCitys>) };
      inline TravelerStandard& setHotelCitys(const vector<TravelerStandard::HotelCitys> & hotelCitys) { DARABONBA_PTR_SET_VALUE(hotelCitys_, hotelCitys) };
      inline TravelerStandard& setHotelCitys(vector<TravelerStandard::HotelCitys> && hotelCitys) { DARABONBA_PTR_SET_RVALUE(hotelCitys_, hotelCitys) };


      // hotelIntlCitys Field Functions 
      bool hasHotelIntlCitys() const { return this->hotelIntlCitys_ != nullptr;};
      void deleteHotelIntlCitys() { this->hotelIntlCitys_ = nullptr;};
      inline const vector<TravelerStandard::HotelIntlCitys> & getHotelIntlCitys() const { DARABONBA_PTR_GET_CONST(hotelIntlCitys_, vector<TravelerStandard::HotelIntlCitys>) };
      inline vector<TravelerStandard::HotelIntlCitys> getHotelIntlCitys() { DARABONBA_PTR_GET(hotelIntlCitys_, vector<TravelerStandard::HotelIntlCitys>) };
      inline TravelerStandard& setHotelIntlCitys(const vector<TravelerStandard::HotelIntlCitys> & hotelIntlCitys) { DARABONBA_PTR_SET_VALUE(hotelIntlCitys_, hotelIntlCitys) };
      inline TravelerStandard& setHotelIntlCitys(vector<TravelerStandard::HotelIntlCitys> && hotelIntlCitys) { DARABONBA_PTR_SET_RVALUE(hotelIntlCitys_, hotelIntlCitys) };


      // hotelIntlRuleCode Field Functions 
      bool hasHotelIntlRuleCode() const { return this->hotelIntlRuleCode_ != nullptr;};
      void deleteHotelIntlRuleCode() { this->hotelIntlRuleCode_ = nullptr;};
      inline int64_t getHotelIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelIntlRuleCode_, 0L) };
      inline TravelerStandard& setHotelIntlRuleCode(int64_t hotelIntlRuleCode) { DARABONBA_PTR_SET_VALUE(hotelIntlRuleCode_, hotelIntlRuleCode) };


      // hotelRuleCode Field Functions 
      bool hasHotelRuleCode() const { return this->hotelRuleCode_ != nullptr;};
      void deleteHotelRuleCode() { this->hotelRuleCode_ = nullptr;};
      inline int64_t getHotelRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelRuleCode_, 0L) };
      inline TravelerStandard& setHotelRuleCode(int64_t hotelRuleCode) { DARABONBA_PTR_SET_VALUE(hotelRuleCode_, hotelRuleCode) };


      // internationalFlightCabins Field Functions 
      bool hasInternationalFlightCabins() const { return this->internationalFlightCabins_ != nullptr;};
      void deleteInternationalFlightCabins() { this->internationalFlightCabins_ = nullptr;};
      inline string getInternationalFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightCabins_, "") };
      inline TravelerStandard& setInternationalFlightCabins(string internationalFlightCabins) { DARABONBA_PTR_SET_VALUE(internationalFlightCabins_, internationalFlightCabins) };


      // premiumEconomyDiscount Field Functions 
      bool hasPremiumEconomyDiscount() const { return this->premiumEconomyDiscount_ != nullptr;};
      void deletePremiumEconomyDiscount() { this->premiumEconomyDiscount_ = nullptr;};
      inline int32_t getPremiumEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(premiumEconomyDiscount_, 0) };
      inline TravelerStandard& setPremiumEconomyDiscount(int32_t premiumEconomyDiscount) { DARABONBA_PTR_SET_VALUE(premiumEconomyDiscount_, premiumEconomyDiscount) };


      // reserveType Field Functions 
      bool hasReserveType() const { return this->reserveType_ != nullptr;};
      void deleteReserveType() { this->reserveType_ = nullptr;};
      inline int32_t getReserveType() const { DARABONBA_PTR_GET_DEFAULT(reserveType_, 0) };
      inline TravelerStandard& setReserveType(int32_t reserveType) { DARABONBA_PTR_SET_VALUE(reserveType_, reserveType) };


      // trainRuleCode Field Functions 
      bool hasTrainRuleCode() const { return this->trainRuleCode_ != nullptr;};
      void deleteTrainRuleCode() { this->trainRuleCode_ = nullptr;};
      inline int64_t getTrainRuleCode() const { DARABONBA_PTR_GET_DEFAULT(trainRuleCode_, 0L) };
      inline TravelerStandard& setTrainRuleCode(int64_t trainRuleCode) { DARABONBA_PTR_SET_VALUE(trainRuleCode_, trainRuleCode) };


      // trainSeats Field Functions 
      bool hasTrainSeats() const { return this->trainSeats_ != nullptr;};
      void deleteTrainSeats() { this->trainSeats_ = nullptr;};
      inline string getTrainSeats() const { DARABONBA_PTR_GET_DEFAULT(trainSeats_, "") };
      inline TravelerStandard& setTrainSeats(string trainSeats) { DARABONBA_PTR_SET_VALUE(trainSeats_, trainSeats) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TravelerStandard& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<int32_t> businessDiscount_ {};
      shared_ptr<vector<TravelerStandard::CarCitySet>> carCitySet_ {};
      shared_ptr<TravelerStandard::CarStandard> carStandard_ {};
      shared_ptr<int32_t> economyDiscount_ {};
      shared_ptr<int32_t> firstDiscount_ {};
      shared_ptr<string> flightCabins_ {};
      shared_ptr<int64_t> flightIntlRuleCode_ {};
      shared_ptr<int64_t> flightRuleCode_ {};
      shared_ptr<vector<TravelerStandard::HotelCitys>> hotelCitys_ {};
      shared_ptr<vector<TravelerStandard::HotelIntlCitys>> hotelIntlCitys_ {};
      shared_ptr<int64_t> hotelIntlRuleCode_ {};
      shared_ptr<int64_t> hotelRuleCode_ {};
      shared_ptr<string> internationalFlightCabins_ {};
      // 超级经济舱折扣。1到10的整数
      shared_ptr<int32_t> premiumEconomyDiscount_ {};
      shared_ptr<int32_t> reserveType_ {};
      shared_ptr<int64_t> trainRuleCode_ {};
      shared_ptr<string> trainSeats_ {};
      shared_ptr<string> userId_ {};
    };

    class TravelerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TravelerList& obj) { 
        DARABONBA_PTR_TO_JSON(attribute, attribute_);
        DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, TravelerList& obj) { 
        DARABONBA_PTR_FROM_JSON(attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
      };
      TravelerList() = default ;
      TravelerList(const TravelerList &) = default ;
      TravelerList(TravelerList &&) = default ;
      TravelerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TravelerList() = default ;
      TravelerList& operator=(const TravelerList &) = default ;
      TravelerList& operator=(TravelerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attribute_ == nullptr
        && this->costCenterId_ == nullptr && this->invoiceId_ == nullptr && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr && this->projectCode_ == nullptr
        && this->projectTitle_ == nullptr && this->thirdPartInvoiceId_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->thirdpartDepartId_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
      // attribute Field Functions 
      bool hasAttribute() const { return this->attribute_ != nullptr;};
      void deleteAttribute() { this->attribute_ = nullptr;};
      inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
      inline TravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline TravelerList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // invoiceId Field Functions 
      bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
      void deleteInvoiceId() { this->invoiceId_ = nullptr;};
      inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
      inline TravelerList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


      // paymentDepartmentId Field Functions 
      bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
      void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
      inline string getPaymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
      inline TravelerList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


      // paymentDepartmentName Field Functions 
      bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
      void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
      inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
      inline TravelerList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


      // projectCode Field Functions 
      bool hasProjectCode() const { return this->projectCode_ != nullptr;};
      void deleteProjectCode() { this->projectCode_ = nullptr;};
      inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
      inline TravelerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


      // projectTitle Field Functions 
      bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
      void deleteProjectTitle() { this->projectTitle_ = nullptr;};
      inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
      inline TravelerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


      // thirdPartInvoiceId Field Functions 
      bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
      void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
      inline string getThirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
      inline TravelerList& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


      // thirdpartCostCenterId Field Functions 
      bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
      void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
      inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
      inline TravelerList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


      // thirdpartDepartId Field Functions 
      bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
      void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
      inline string getThirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
      inline TravelerList& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TravelerList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline TravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<string> attribute_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<int64_t> invoiceId_ {};
      shared_ptr<string> paymentDepartmentId_ {};
      shared_ptr<string> paymentDepartmentName_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<string> thirdPartInvoiceId_ {};
      shared_ptr<string> thirdpartCostCenterId_ {};
      shared_ptr<string> thirdpartDepartId_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    class ItinerarySetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ItinerarySetList& obj) { 
        DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
        DARABONBA_PTR_TO_JSON(attribute, attribute_);
        DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
        DARABONBA_PTR_TO_JSON(city_set, citySet_);
        DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_TO_JSON(dep_date, depDate_);
        DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
        DARABONBA_PTR_TO_JSON(itinerary_travel_standard, itineraryTravelStandard_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
        DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
      };
      friend void from_json(const Darabonba::Json& j, ItinerarySetList& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
        DARABONBA_PTR_FROM_JSON(attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
        DARABONBA_PTR_FROM_JSON(city_set, citySet_);
        DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
        DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
        DARABONBA_PTR_FROM_JSON(itinerary_travel_standard, itineraryTravelStandard_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
        DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
      };
      ItinerarySetList() = default ;
      ItinerarySetList(const ItinerarySetList &) = default ;
      ItinerarySetList(ItinerarySetList &&) = default ;
      ItinerarySetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ItinerarySetList() = default ;
      ItinerarySetList& operator=(const ItinerarySetList &) = default ;
      ItinerarySetList& operator=(ItinerarySetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ItineraryTravelStandard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItineraryTravelStandard& obj) { 
          DARABONBA_PTR_TO_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
        };
        friend void from_json(const Darabonba::Json& j, ItineraryTravelStandard& obj) { 
          DARABONBA_PTR_FROM_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
        };
        ItineraryTravelStandard() = default ;
        ItineraryTravelStandard(const ItineraryTravelStandard &) = default ;
        ItineraryTravelStandard(ItineraryTravelStandard &&) = default ;
        ItineraryTravelStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItineraryTravelStandard() = default ;
        ItineraryTravelStandard& operator=(const ItineraryTravelStandard &) = default ;
        ItineraryTravelStandard& operator=(ItineraryTravelStandard &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hotelAvailableNightsPerDay_ == nullptr; };
        // hotelAvailableNightsPerDay Field Functions 
        bool hasHotelAvailableNightsPerDay() const { return this->hotelAvailableNightsPerDay_ != nullptr;};
        void deleteHotelAvailableNightsPerDay() { this->hotelAvailableNightsPerDay_ = nullptr;};
        inline int32_t getHotelAvailableNightsPerDay() const { DARABONBA_PTR_GET_DEFAULT(hotelAvailableNightsPerDay_, 0) };
        inline ItineraryTravelStandard& setHotelAvailableNightsPerDay(int32_t hotelAvailableNightsPerDay) { DARABONBA_PTR_SET_VALUE(hotelAvailableNightsPerDay_, hotelAvailableNightsPerDay) };


      protected:
        shared_ptr<int32_t> hotelAvailableNightsPerDay_ {};
      };

      virtual bool empty() const override { return this->arrDate_ == nullptr
        && this->attribute_ == nullptr && this->cityCodeSet_ == nullptr && this->citySet_ == nullptr && this->costCenterId_ == nullptr && this->depDate_ == nullptr
        && this->invoiceId_ == nullptr && this->itineraryId_ == nullptr && this->itineraryTravelStandard_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr
        && this->provinceTravelCityAdcodes_ == nullptr && this->thirdPartInvoiceId_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->trafficType_ == nullptr; };
      // arrDate Field Functions 
      bool hasArrDate() const { return this->arrDate_ != nullptr;};
      void deleteArrDate() { this->arrDate_ = nullptr;};
      inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
      inline ItinerarySetList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


      // attribute Field Functions 
      bool hasAttribute() const { return this->attribute_ != nullptr;};
      void deleteAttribute() { this->attribute_ = nullptr;};
      inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
      inline ItinerarySetList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


      // cityCodeSet Field Functions 
      bool hasCityCodeSet() const { return this->cityCodeSet_ != nullptr;};
      void deleteCityCodeSet() { this->cityCodeSet_ = nullptr;};
      inline string getCityCodeSet() const { DARABONBA_PTR_GET_DEFAULT(cityCodeSet_, "") };
      inline ItinerarySetList& setCityCodeSet(string cityCodeSet) { DARABONBA_PTR_SET_VALUE(cityCodeSet_, cityCodeSet) };


      // citySet Field Functions 
      bool hasCitySet() const { return this->citySet_ != nullptr;};
      void deleteCitySet() { this->citySet_ = nullptr;};
      inline string getCitySet() const { DARABONBA_PTR_GET_DEFAULT(citySet_, "") };
      inline ItinerarySetList& setCitySet(string citySet) { DARABONBA_PTR_SET_VALUE(citySet_, citySet) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline ItinerarySetList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // depDate Field Functions 
      bool hasDepDate() const { return this->depDate_ != nullptr;};
      void deleteDepDate() { this->depDate_ = nullptr;};
      inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
      inline ItinerarySetList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


      // invoiceId Field Functions 
      bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
      void deleteInvoiceId() { this->invoiceId_ = nullptr;};
      inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
      inline ItinerarySetList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


      // itineraryId Field Functions 
      bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
      void deleteItineraryId() { this->itineraryId_ = nullptr;};
      inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
      inline ItinerarySetList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


      // itineraryTravelStandard Field Functions 
      bool hasItineraryTravelStandard() const { return this->itineraryTravelStandard_ != nullptr;};
      void deleteItineraryTravelStandard() { this->itineraryTravelStandard_ = nullptr;};
      inline const ItinerarySetList::ItineraryTravelStandard & getItineraryTravelStandard() const { DARABONBA_PTR_GET_CONST(itineraryTravelStandard_, ItinerarySetList::ItineraryTravelStandard) };
      inline ItinerarySetList::ItineraryTravelStandard getItineraryTravelStandard() { DARABONBA_PTR_GET(itineraryTravelStandard_, ItinerarySetList::ItineraryTravelStandard) };
      inline ItinerarySetList& setItineraryTravelStandard(const ItinerarySetList::ItineraryTravelStandard & itineraryTravelStandard) { DARABONBA_PTR_SET_VALUE(itineraryTravelStandard_, itineraryTravelStandard) };
      inline ItinerarySetList& setItineraryTravelStandard(ItinerarySetList::ItineraryTravelStandard && itineraryTravelStandard) { DARABONBA_PTR_SET_RVALUE(itineraryTravelStandard_, itineraryTravelStandard) };


      // projectCode Field Functions 
      bool hasProjectCode() const { return this->projectCode_ != nullptr;};
      void deleteProjectCode() { this->projectCode_ = nullptr;};
      inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
      inline ItinerarySetList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


      // projectTitle Field Functions 
      bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
      void deleteProjectTitle() { this->projectTitle_ = nullptr;};
      inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
      inline ItinerarySetList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


      // provinceTravelCityAdcodes Field Functions 
      bool hasProvinceTravelCityAdcodes() const { return this->provinceTravelCityAdcodes_ != nullptr;};
      void deleteProvinceTravelCityAdcodes() { this->provinceTravelCityAdcodes_ = nullptr;};
      inline const vector<string> & getProvinceTravelCityAdcodes() const { DARABONBA_PTR_GET_CONST(provinceTravelCityAdcodes_, vector<string>) };
      inline vector<string> getProvinceTravelCityAdcodes() { DARABONBA_PTR_GET(provinceTravelCityAdcodes_, vector<string>) };
      inline ItinerarySetList& setProvinceTravelCityAdcodes(const vector<string> & provinceTravelCityAdcodes) { DARABONBA_PTR_SET_VALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };
      inline ItinerarySetList& setProvinceTravelCityAdcodes(vector<string> && provinceTravelCityAdcodes) { DARABONBA_PTR_SET_RVALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };


      // thirdPartInvoiceId Field Functions 
      bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
      void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
      inline string getThirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
      inline ItinerarySetList& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


      // thirdpartCostCenterId Field Functions 
      bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
      void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
      inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
      inline ItinerarySetList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


      // trafficType Field Functions 
      bool hasTrafficType() const { return this->trafficType_ != nullptr;};
      void deleteTrafficType() { this->trafficType_ = nullptr;};
      inline int32_t getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
      inline ItinerarySetList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


    protected:
      shared_ptr<string> arrDate_ {};
      shared_ptr<string> attribute_ {};
      shared_ptr<string> cityCodeSet_ {};
      shared_ptr<string> citySet_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> depDate_ {};
      shared_ptr<int64_t> invoiceId_ {};
      shared_ptr<string> itineraryId_ {};
      shared_ptr<ItinerarySetList::ItineraryTravelStandard> itineraryTravelStandard_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<vector<string>> provinceTravelCityAdcodes_ {};
      shared_ptr<string> thirdPartInvoiceId_ {};
      shared_ptr<string> thirdpartCostCenterId_ {};
      shared_ptr<int32_t> trafficType_ {};
    };

    class ItineraryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ItineraryList& obj) { 
        DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
        DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
        DARABONBA_PTR_TO_JSON(attribute, attribute_);
        DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_TO_JSON(dep_city, depCity_);
        DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_TO_JSON(dep_date, depDate_);
        DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
        DARABONBA_PTR_TO_JSON(itinerary_travel_standard, itineraryTravelStandard_);
        DARABONBA_PTR_TO_JSON(need_hotel, needHotel_);
        DARABONBA_PTR_TO_JSON(need_traffic, needTraffic_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
        DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
        DARABONBA_PTR_TO_JSON(trip_way, tripWay_);
      };
      friend void from_json(const Darabonba::Json& j, ItineraryList& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
        DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
        DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
        DARABONBA_PTR_FROM_JSON(attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
        DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
        DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
        DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
        DARABONBA_PTR_FROM_JSON(itinerary_travel_standard, itineraryTravelStandard_);
        DARABONBA_PTR_FROM_JSON(need_hotel, needHotel_);
        DARABONBA_PTR_FROM_JSON(need_traffic, needTraffic_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(province_travel_city_adcodes, provinceTravelCityAdcodes_);
        DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_FROM_JSON(traffic_type, trafficType_);
        DARABONBA_PTR_FROM_JSON(trip_way, tripWay_);
      };
      ItineraryList() = default ;
      ItineraryList(const ItineraryList &) = default ;
      ItineraryList(ItineraryList &&) = default ;
      ItineraryList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ItineraryList() = default ;
      ItineraryList& operator=(const ItineraryList &) = default ;
      ItineraryList& operator=(ItineraryList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ItineraryTravelStandard : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItineraryTravelStandard& obj) { 
          DARABONBA_PTR_TO_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
        };
        friend void from_json(const Darabonba::Json& j, ItineraryTravelStandard& obj) { 
          DARABONBA_PTR_FROM_JSON(hotel_available_nights_per_day, hotelAvailableNightsPerDay_);
        };
        ItineraryTravelStandard() = default ;
        ItineraryTravelStandard(const ItineraryTravelStandard &) = default ;
        ItineraryTravelStandard(ItineraryTravelStandard &&) = default ;
        ItineraryTravelStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItineraryTravelStandard() = default ;
        ItineraryTravelStandard& operator=(const ItineraryTravelStandard &) = default ;
        ItineraryTravelStandard& operator=(ItineraryTravelStandard &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->hotelAvailableNightsPerDay_ == nullptr; };
        // hotelAvailableNightsPerDay Field Functions 
        bool hasHotelAvailableNightsPerDay() const { return this->hotelAvailableNightsPerDay_ != nullptr;};
        void deleteHotelAvailableNightsPerDay() { this->hotelAvailableNightsPerDay_ = nullptr;};
        inline int32_t getHotelAvailableNightsPerDay() const { DARABONBA_PTR_GET_DEFAULT(hotelAvailableNightsPerDay_, 0) };
        inline ItineraryTravelStandard& setHotelAvailableNightsPerDay(int32_t hotelAvailableNightsPerDay) { DARABONBA_PTR_SET_VALUE(hotelAvailableNightsPerDay_, hotelAvailableNightsPerDay) };


      protected:
        shared_ptr<int32_t> hotelAvailableNightsPerDay_ {};
      };

      virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->arrCityCode_ == nullptr && this->arrDate_ == nullptr && this->attribute_ == nullptr && this->costCenterId_ == nullptr && this->depCity_ == nullptr
        && this->depCityCode_ == nullptr && this->depDate_ == nullptr && this->invoiceId_ == nullptr && this->itineraryId_ == nullptr && this->itineraryTravelStandard_ == nullptr
        && this->needHotel_ == nullptr && this->needTraffic_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->provinceTravelCityAdcodes_ == nullptr
        && this->thirdPartInvoiceId_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->trafficType_ == nullptr && this->tripWay_ == nullptr; };
      // arrCity Field Functions 
      bool hasArrCity() const { return this->arrCity_ != nullptr;};
      void deleteArrCity() { this->arrCity_ = nullptr;};
      inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
      inline ItineraryList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


      // arrCityCode Field Functions 
      bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
      void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
      inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
      inline ItineraryList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


      // arrDate Field Functions 
      bool hasArrDate() const { return this->arrDate_ != nullptr;};
      void deleteArrDate() { this->arrDate_ = nullptr;};
      inline string getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, "") };
      inline ItineraryList& setArrDate(string arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


      // attribute Field Functions 
      bool hasAttribute() const { return this->attribute_ != nullptr;};
      void deleteAttribute() { this->attribute_ = nullptr;};
      inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
      inline ItineraryList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline ItineraryList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // depCity Field Functions 
      bool hasDepCity() const { return this->depCity_ != nullptr;};
      void deleteDepCity() { this->depCity_ = nullptr;};
      inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
      inline ItineraryList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


      // depCityCode Field Functions 
      bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
      void deleteDepCityCode() { this->depCityCode_ = nullptr;};
      inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
      inline ItineraryList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


      // depDate Field Functions 
      bool hasDepDate() const { return this->depDate_ != nullptr;};
      void deleteDepDate() { this->depDate_ = nullptr;};
      inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
      inline ItineraryList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


      // invoiceId Field Functions 
      bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
      void deleteInvoiceId() { this->invoiceId_ = nullptr;};
      inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
      inline ItineraryList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


      // itineraryId Field Functions 
      bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
      void deleteItineraryId() { this->itineraryId_ = nullptr;};
      inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
      inline ItineraryList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


      // itineraryTravelStandard Field Functions 
      bool hasItineraryTravelStandard() const { return this->itineraryTravelStandard_ != nullptr;};
      void deleteItineraryTravelStandard() { this->itineraryTravelStandard_ = nullptr;};
      inline const ItineraryList::ItineraryTravelStandard & getItineraryTravelStandard() const { DARABONBA_PTR_GET_CONST(itineraryTravelStandard_, ItineraryList::ItineraryTravelStandard) };
      inline ItineraryList::ItineraryTravelStandard getItineraryTravelStandard() { DARABONBA_PTR_GET(itineraryTravelStandard_, ItineraryList::ItineraryTravelStandard) };
      inline ItineraryList& setItineraryTravelStandard(const ItineraryList::ItineraryTravelStandard & itineraryTravelStandard) { DARABONBA_PTR_SET_VALUE(itineraryTravelStandard_, itineraryTravelStandard) };
      inline ItineraryList& setItineraryTravelStandard(ItineraryList::ItineraryTravelStandard && itineraryTravelStandard) { DARABONBA_PTR_SET_RVALUE(itineraryTravelStandard_, itineraryTravelStandard) };


      // needHotel Field Functions 
      bool hasNeedHotel() const { return this->needHotel_ != nullptr;};
      void deleteNeedHotel() { this->needHotel_ = nullptr;};
      inline bool getNeedHotel() const { DARABONBA_PTR_GET_DEFAULT(needHotel_, false) };
      inline ItineraryList& setNeedHotel(bool needHotel) { DARABONBA_PTR_SET_VALUE(needHotel_, needHotel) };


      // needTraffic Field Functions 
      bool hasNeedTraffic() const { return this->needTraffic_ != nullptr;};
      void deleteNeedTraffic() { this->needTraffic_ = nullptr;};
      inline bool getNeedTraffic() const { DARABONBA_PTR_GET_DEFAULT(needTraffic_, false) };
      inline ItineraryList& setNeedTraffic(bool needTraffic) { DARABONBA_PTR_SET_VALUE(needTraffic_, needTraffic) };


      // projectCode Field Functions 
      bool hasProjectCode() const { return this->projectCode_ != nullptr;};
      void deleteProjectCode() { this->projectCode_ = nullptr;};
      inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
      inline ItineraryList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


      // projectTitle Field Functions 
      bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
      void deleteProjectTitle() { this->projectTitle_ = nullptr;};
      inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
      inline ItineraryList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


      // provinceTravelCityAdcodes Field Functions 
      bool hasProvinceTravelCityAdcodes() const { return this->provinceTravelCityAdcodes_ != nullptr;};
      void deleteProvinceTravelCityAdcodes() { this->provinceTravelCityAdcodes_ = nullptr;};
      inline const vector<string> & getProvinceTravelCityAdcodes() const { DARABONBA_PTR_GET_CONST(provinceTravelCityAdcodes_, vector<string>) };
      inline vector<string> getProvinceTravelCityAdcodes() { DARABONBA_PTR_GET(provinceTravelCityAdcodes_, vector<string>) };
      inline ItineraryList& setProvinceTravelCityAdcodes(const vector<string> & provinceTravelCityAdcodes) { DARABONBA_PTR_SET_VALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };
      inline ItineraryList& setProvinceTravelCityAdcodes(vector<string> && provinceTravelCityAdcodes) { DARABONBA_PTR_SET_RVALUE(provinceTravelCityAdcodes_, provinceTravelCityAdcodes) };


      // thirdPartInvoiceId Field Functions 
      bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
      void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
      inline string getThirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
      inline ItineraryList& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


      // thirdpartCostCenterId Field Functions 
      bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
      void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
      inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
      inline ItineraryList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


      // trafficType Field Functions 
      bool hasTrafficType() const { return this->trafficType_ != nullptr;};
      void deleteTrafficType() { this->trafficType_ = nullptr;};
      inline int32_t getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
      inline ItineraryList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


      // tripWay Field Functions 
      bool hasTripWay() const { return this->tripWay_ != nullptr;};
      void deleteTripWay() { this->tripWay_ = nullptr;};
      inline int32_t getTripWay() const { DARABONBA_PTR_GET_DEFAULT(tripWay_, 0) };
      inline ItineraryList& setTripWay(int32_t tripWay) { DARABONBA_PTR_SET_VALUE(tripWay_, tripWay) };


    protected:
      // This parameter is required.
      shared_ptr<string> arrCity_ {};
      shared_ptr<string> arrCityCode_ {};
      // This parameter is required.
      shared_ptr<string> arrDate_ {};
      shared_ptr<string> attribute_ {};
      shared_ptr<int64_t> costCenterId_ {};
      // This parameter is required.
      shared_ptr<string> depCity_ {};
      shared_ptr<string> depCityCode_ {};
      // This parameter is required.
      shared_ptr<string> depDate_ {};
      shared_ptr<int64_t> invoiceId_ {};
      // This parameter is required.
      shared_ptr<string> itineraryId_ {};
      shared_ptr<ItineraryList::ItineraryTravelStandard> itineraryTravelStandard_ {};
      shared_ptr<bool> needHotel_ {};
      shared_ptr<bool> needTraffic_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<vector<string>> provinceTravelCityAdcodes_ {};
      shared_ptr<string> thirdPartInvoiceId_ {};
      shared_ptr<string> thirdpartCostCenterId_ {};
      // This parameter is required.
      shared_ptr<int32_t> trafficType_ {};
      // This parameter is required.
      shared_ptr<int32_t> tripWay_ {};
    };

    class HotelShare : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HotelShare& obj) { 
        DARABONBA_PTR_TO_JSON(param, param_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, HotelShare& obj) { 
        DARABONBA_PTR_FROM_JSON(param, param_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      HotelShare() = default ;
      HotelShare(const HotelShare &) = default ;
      HotelShare(HotelShare &&) = default ;
      HotelShare(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HotelShare() = default ;
      HotelShare& operator=(const HotelShare &) = default ;
      HotelShare& operator=(HotelShare &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->param_ == nullptr
        && this->type_ == nullptr; };
      // param Field Functions 
      bool hasParam() const { return this->param_ != nullptr;};
      void deleteParam() { this->param_ = nullptr;};
      inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
      inline HotelShare& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline HotelShare& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> param_ {};
      shared_ptr<string> type_ {};
    };

    class ExternalTravelerStandard : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExternalTravelerStandard& obj) { 
        DARABONBA_PTR_TO_JSON(business_discount, businessDiscount_);
        DARABONBA_PTR_TO_JSON(economy_discount, economyDiscount_);
        DARABONBA_PTR_TO_JSON(first_discount, firstDiscount_);
        DARABONBA_PTR_TO_JSON(flight_cabins, flightCabins_);
        DARABONBA_PTR_TO_JSON(flight_intl_rule_code, flightIntlRuleCode_);
        DARABONBA_PTR_TO_JSON(flight_rule_code, flightRuleCode_);
        DARABONBA_PTR_TO_JSON(hotel_citys, hotelCitys_);
        DARABONBA_PTR_TO_JSON(hotel_intl_citys, hotelIntlCitys_);
        DARABONBA_PTR_TO_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
        DARABONBA_PTR_TO_JSON(hotel_rule_code, hotelRuleCode_);
        DARABONBA_PTR_TO_JSON(international_flight_cabins, internationalFlightCabins_);
        DARABONBA_PTR_TO_JSON(premium_economy_discount, premiumEconomyDiscount_);
        DARABONBA_PTR_TO_JSON(reserve_type, reserveType_);
        DARABONBA_PTR_TO_JSON(train_rule_code, trainRuleCode_);
        DARABONBA_PTR_TO_JSON(train_seats, trainSeats_);
      };
      friend void from_json(const Darabonba::Json& j, ExternalTravelerStandard& obj) { 
        DARABONBA_PTR_FROM_JSON(business_discount, businessDiscount_);
        DARABONBA_PTR_FROM_JSON(economy_discount, economyDiscount_);
        DARABONBA_PTR_FROM_JSON(first_discount, firstDiscount_);
        DARABONBA_PTR_FROM_JSON(flight_cabins, flightCabins_);
        DARABONBA_PTR_FROM_JSON(flight_intl_rule_code, flightIntlRuleCode_);
        DARABONBA_PTR_FROM_JSON(flight_rule_code, flightRuleCode_);
        DARABONBA_PTR_FROM_JSON(hotel_citys, hotelCitys_);
        DARABONBA_PTR_FROM_JSON(hotel_intl_citys, hotelIntlCitys_);
        DARABONBA_PTR_FROM_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
        DARABONBA_PTR_FROM_JSON(hotel_rule_code, hotelRuleCode_);
        DARABONBA_PTR_FROM_JSON(international_flight_cabins, internationalFlightCabins_);
        DARABONBA_PTR_FROM_JSON(premium_economy_discount, premiumEconomyDiscount_);
        DARABONBA_PTR_FROM_JSON(reserve_type, reserveType_);
        DARABONBA_PTR_FROM_JSON(train_rule_code, trainRuleCode_);
        DARABONBA_PTR_FROM_JSON(train_seats, trainSeats_);
      };
      ExternalTravelerStandard() = default ;
      ExternalTravelerStandard(const ExternalTravelerStandard &) = default ;
      ExternalTravelerStandard(ExternalTravelerStandard &&) = default ;
      ExternalTravelerStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExternalTravelerStandard() = default ;
      ExternalTravelerStandard& operator=(const ExternalTravelerStandard &) = default ;
      ExternalTravelerStandard& operator=(ExternalTravelerStandard &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HotelIntlCitys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelIntlCitys& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(fee, fee_);
        };
        friend void from_json(const Darabonba::Json& j, HotelIntlCitys& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(fee, fee_);
        };
        HotelIntlCitys() = default ;
        HotelIntlCitys(const HotelIntlCitys &) = default ;
        HotelIntlCitys(HotelIntlCitys &&) = default ;
        HotelIntlCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelIntlCitys() = default ;
        HotelIntlCitys& operator=(const HotelIntlCitys &) = default ;
        HotelIntlCitys& operator=(HotelIntlCitys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->fee_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelIntlCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelIntlCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
        inline HotelIntlCitys& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<int64_t> fee_ {};
      };

      class HotelCitys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelCitys& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(fee, fee_);
        };
        friend void from_json(const Darabonba::Json& j, HotelCitys& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(fee, fee_);
        };
        HotelCitys() = default ;
        HotelCitys(const HotelCitys &) = default ;
        HotelCitys(HotelCitys &&) = default ;
        HotelCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelCitys() = default ;
        HotelCitys& operator=(const HotelCitys &) = default ;
        HotelCitys& operator=(HotelCitys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->fee_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
        inline HotelCitys& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<int64_t> fee_ {};
      };

      virtual bool empty() const override { return this->businessDiscount_ == nullptr
        && this->economyDiscount_ == nullptr && this->firstDiscount_ == nullptr && this->flightCabins_ == nullptr && this->flightIntlRuleCode_ == nullptr && this->flightRuleCode_ == nullptr
        && this->hotelCitys_ == nullptr && this->hotelIntlCitys_ == nullptr && this->hotelIntlRuleCode_ == nullptr && this->hotelRuleCode_ == nullptr && this->internationalFlightCabins_ == nullptr
        && this->premiumEconomyDiscount_ == nullptr && this->reserveType_ == nullptr && this->trainRuleCode_ == nullptr && this->trainSeats_ == nullptr; };
      // businessDiscount Field Functions 
      bool hasBusinessDiscount() const { return this->businessDiscount_ != nullptr;};
      void deleteBusinessDiscount() { this->businessDiscount_ = nullptr;};
      inline int32_t getBusinessDiscount() const { DARABONBA_PTR_GET_DEFAULT(businessDiscount_, 0) };
      inline ExternalTravelerStandard& setBusinessDiscount(int32_t businessDiscount) { DARABONBA_PTR_SET_VALUE(businessDiscount_, businessDiscount) };


      // economyDiscount Field Functions 
      bool hasEconomyDiscount() const { return this->economyDiscount_ != nullptr;};
      void deleteEconomyDiscount() { this->economyDiscount_ = nullptr;};
      inline int32_t getEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(economyDiscount_, 0) };
      inline ExternalTravelerStandard& setEconomyDiscount(int32_t economyDiscount) { DARABONBA_PTR_SET_VALUE(economyDiscount_, economyDiscount) };


      // firstDiscount Field Functions 
      bool hasFirstDiscount() const { return this->firstDiscount_ != nullptr;};
      void deleteFirstDiscount() { this->firstDiscount_ = nullptr;};
      inline int32_t getFirstDiscount() const { DARABONBA_PTR_GET_DEFAULT(firstDiscount_, 0) };
      inline ExternalTravelerStandard& setFirstDiscount(int32_t firstDiscount) { DARABONBA_PTR_SET_VALUE(firstDiscount_, firstDiscount) };


      // flightCabins Field Functions 
      bool hasFlightCabins() const { return this->flightCabins_ != nullptr;};
      void deleteFlightCabins() { this->flightCabins_ = nullptr;};
      inline string getFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(flightCabins_, "") };
      inline ExternalTravelerStandard& setFlightCabins(string flightCabins) { DARABONBA_PTR_SET_VALUE(flightCabins_, flightCabins) };


      // flightIntlRuleCode Field Functions 
      bool hasFlightIntlRuleCode() const { return this->flightIntlRuleCode_ != nullptr;};
      void deleteFlightIntlRuleCode() { this->flightIntlRuleCode_ = nullptr;};
      inline int64_t getFlightIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightIntlRuleCode_, 0L) };
      inline ExternalTravelerStandard& setFlightIntlRuleCode(int64_t flightIntlRuleCode) { DARABONBA_PTR_SET_VALUE(flightIntlRuleCode_, flightIntlRuleCode) };


      // flightRuleCode Field Functions 
      bool hasFlightRuleCode() const { return this->flightRuleCode_ != nullptr;};
      void deleteFlightRuleCode() { this->flightRuleCode_ = nullptr;};
      inline int64_t getFlightRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightRuleCode_, 0L) };
      inline ExternalTravelerStandard& setFlightRuleCode(int64_t flightRuleCode) { DARABONBA_PTR_SET_VALUE(flightRuleCode_, flightRuleCode) };


      // hotelCitys Field Functions 
      bool hasHotelCitys() const { return this->hotelCitys_ != nullptr;};
      void deleteHotelCitys() { this->hotelCitys_ = nullptr;};
      inline const vector<ExternalTravelerStandard::HotelCitys> & getHotelCitys() const { DARABONBA_PTR_GET_CONST(hotelCitys_, vector<ExternalTravelerStandard::HotelCitys>) };
      inline vector<ExternalTravelerStandard::HotelCitys> getHotelCitys() { DARABONBA_PTR_GET(hotelCitys_, vector<ExternalTravelerStandard::HotelCitys>) };
      inline ExternalTravelerStandard& setHotelCitys(const vector<ExternalTravelerStandard::HotelCitys> & hotelCitys) { DARABONBA_PTR_SET_VALUE(hotelCitys_, hotelCitys) };
      inline ExternalTravelerStandard& setHotelCitys(vector<ExternalTravelerStandard::HotelCitys> && hotelCitys) { DARABONBA_PTR_SET_RVALUE(hotelCitys_, hotelCitys) };


      // hotelIntlCitys Field Functions 
      bool hasHotelIntlCitys() const { return this->hotelIntlCitys_ != nullptr;};
      void deleteHotelIntlCitys() { this->hotelIntlCitys_ = nullptr;};
      inline const vector<ExternalTravelerStandard::HotelIntlCitys> & getHotelIntlCitys() const { DARABONBA_PTR_GET_CONST(hotelIntlCitys_, vector<ExternalTravelerStandard::HotelIntlCitys>) };
      inline vector<ExternalTravelerStandard::HotelIntlCitys> getHotelIntlCitys() { DARABONBA_PTR_GET(hotelIntlCitys_, vector<ExternalTravelerStandard::HotelIntlCitys>) };
      inline ExternalTravelerStandard& setHotelIntlCitys(const vector<ExternalTravelerStandard::HotelIntlCitys> & hotelIntlCitys) { DARABONBA_PTR_SET_VALUE(hotelIntlCitys_, hotelIntlCitys) };
      inline ExternalTravelerStandard& setHotelIntlCitys(vector<ExternalTravelerStandard::HotelIntlCitys> && hotelIntlCitys) { DARABONBA_PTR_SET_RVALUE(hotelIntlCitys_, hotelIntlCitys) };


      // hotelIntlRuleCode Field Functions 
      bool hasHotelIntlRuleCode() const { return this->hotelIntlRuleCode_ != nullptr;};
      void deleteHotelIntlRuleCode() { this->hotelIntlRuleCode_ = nullptr;};
      inline int64_t getHotelIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelIntlRuleCode_, 0L) };
      inline ExternalTravelerStandard& setHotelIntlRuleCode(int64_t hotelIntlRuleCode) { DARABONBA_PTR_SET_VALUE(hotelIntlRuleCode_, hotelIntlRuleCode) };


      // hotelRuleCode Field Functions 
      bool hasHotelRuleCode() const { return this->hotelRuleCode_ != nullptr;};
      void deleteHotelRuleCode() { this->hotelRuleCode_ = nullptr;};
      inline int64_t getHotelRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelRuleCode_, 0L) };
      inline ExternalTravelerStandard& setHotelRuleCode(int64_t hotelRuleCode) { DARABONBA_PTR_SET_VALUE(hotelRuleCode_, hotelRuleCode) };


      // internationalFlightCabins Field Functions 
      bool hasInternationalFlightCabins() const { return this->internationalFlightCabins_ != nullptr;};
      void deleteInternationalFlightCabins() { this->internationalFlightCabins_ = nullptr;};
      inline string getInternationalFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightCabins_, "") };
      inline ExternalTravelerStandard& setInternationalFlightCabins(string internationalFlightCabins) { DARABONBA_PTR_SET_VALUE(internationalFlightCabins_, internationalFlightCabins) };


      // premiumEconomyDiscount Field Functions 
      bool hasPremiumEconomyDiscount() const { return this->premiumEconomyDiscount_ != nullptr;};
      void deletePremiumEconomyDiscount() { this->premiumEconomyDiscount_ = nullptr;};
      inline int32_t getPremiumEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(premiumEconomyDiscount_, 0) };
      inline ExternalTravelerStandard& setPremiumEconomyDiscount(int32_t premiumEconomyDiscount) { DARABONBA_PTR_SET_VALUE(premiumEconomyDiscount_, premiumEconomyDiscount) };


      // reserveType Field Functions 
      bool hasReserveType() const { return this->reserveType_ != nullptr;};
      void deleteReserveType() { this->reserveType_ = nullptr;};
      inline int32_t getReserveType() const { DARABONBA_PTR_GET_DEFAULT(reserveType_, 0) };
      inline ExternalTravelerStandard& setReserveType(int32_t reserveType) { DARABONBA_PTR_SET_VALUE(reserveType_, reserveType) };


      // trainRuleCode Field Functions 
      bool hasTrainRuleCode() const { return this->trainRuleCode_ != nullptr;};
      void deleteTrainRuleCode() { this->trainRuleCode_ = nullptr;};
      inline int64_t getTrainRuleCode() const { DARABONBA_PTR_GET_DEFAULT(trainRuleCode_, 0L) };
      inline ExternalTravelerStandard& setTrainRuleCode(int64_t trainRuleCode) { DARABONBA_PTR_SET_VALUE(trainRuleCode_, trainRuleCode) };


      // trainSeats Field Functions 
      bool hasTrainSeats() const { return this->trainSeats_ != nullptr;};
      void deleteTrainSeats() { this->trainSeats_ = nullptr;};
      inline string getTrainSeats() const { DARABONBA_PTR_GET_DEFAULT(trainSeats_, "") };
      inline ExternalTravelerStandard& setTrainSeats(string trainSeats) { DARABONBA_PTR_SET_VALUE(trainSeats_, trainSeats) };


    protected:
      shared_ptr<int32_t> businessDiscount_ {};
      shared_ptr<int32_t> economyDiscount_ {};
      shared_ptr<int32_t> firstDiscount_ {};
      shared_ptr<string> flightCabins_ {};
      shared_ptr<int64_t> flightIntlRuleCode_ {};
      shared_ptr<int64_t> flightRuleCode_ {};
      shared_ptr<vector<ExternalTravelerStandard::HotelCitys>> hotelCitys_ {};
      shared_ptr<vector<ExternalTravelerStandard::HotelIntlCitys>> hotelIntlCitys_ {};
      shared_ptr<int64_t> hotelIntlRuleCode_ {};
      shared_ptr<int64_t> hotelRuleCode_ {};
      shared_ptr<string> internationalFlightCabins_ {};
      // 超级经济舱折扣。1到10的整数
      shared_ptr<int32_t> premiumEconomyDiscount_ {};
      shared_ptr<int32_t> reserveType_ {};
      shared_ptr<int64_t> trainRuleCode_ {};
      shared_ptr<string> trainSeats_ {};
    };

    class ExternalTravelerList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExternalTravelerList& obj) { 
        DARABONBA_PTR_TO_JSON(attribute, attribute_);
        DARABONBA_PTR_TO_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_TO_JSON(external_user_id, externalUserId_);
        DARABONBA_PTR_TO_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_TO_JSON(project_code, projectCode_);
        DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
        DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
        DARABONBA_PTR_TO_JSON(user_name_en, userNameEn_);
      };
      friend void from_json(const Darabonba::Json& j, ExternalTravelerList& obj) { 
        DARABONBA_PTR_FROM_JSON(attribute, attribute_);
        DARABONBA_PTR_FROM_JSON(cost_center_id, costCenterId_);
        DARABONBA_PTR_FROM_JSON(external_user_id, externalUserId_);
        DARABONBA_PTR_FROM_JSON(invoice_id, invoiceId_);
        DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
        DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
        DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
        DARABONBA_PTR_FROM_JSON(user_name_en, userNameEn_);
      };
      ExternalTravelerList() = default ;
      ExternalTravelerList(const ExternalTravelerList &) = default ;
      ExternalTravelerList(ExternalTravelerList &&) = default ;
      ExternalTravelerList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExternalTravelerList() = default ;
      ExternalTravelerList& operator=(const ExternalTravelerList &) = default ;
      ExternalTravelerList& operator=(ExternalTravelerList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attribute_ == nullptr
        && this->costCenterId_ == nullptr && this->externalUserId_ == nullptr && this->invoiceId_ == nullptr && this->paymentDepartmentId_ == nullptr && this->paymentDepartmentName_ == nullptr
        && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->thirdPartInvoiceId_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->thirdpartDepartId_ == nullptr
        && this->userName_ == nullptr && this->userNameEn_ == nullptr; };
      // attribute Field Functions 
      bool hasAttribute() const { return this->attribute_ != nullptr;};
      void deleteAttribute() { this->attribute_ = nullptr;};
      inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
      inline ExternalTravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


      // costCenterId Field Functions 
      bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
      void deleteCostCenterId() { this->costCenterId_ = nullptr;};
      inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
      inline ExternalTravelerList& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


      // externalUserId Field Functions 
      bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
      void deleteExternalUserId() { this->externalUserId_ = nullptr;};
      inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
      inline ExternalTravelerList& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


      // invoiceId Field Functions 
      bool hasInvoiceId() const { return this->invoiceId_ != nullptr;};
      void deleteInvoiceId() { this->invoiceId_ = nullptr;};
      inline int64_t getInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(invoiceId_, 0L) };
      inline ExternalTravelerList& setInvoiceId(int64_t invoiceId) { DARABONBA_PTR_SET_VALUE(invoiceId_, invoiceId) };


      // paymentDepartmentId Field Functions 
      bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
      void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
      inline string getPaymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
      inline ExternalTravelerList& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


      // paymentDepartmentName Field Functions 
      bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
      void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
      inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
      inline ExternalTravelerList& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


      // projectCode Field Functions 
      bool hasProjectCode() const { return this->projectCode_ != nullptr;};
      void deleteProjectCode() { this->projectCode_ = nullptr;};
      inline string getProjectCode() const { DARABONBA_PTR_GET_DEFAULT(projectCode_, "") };
      inline ExternalTravelerList& setProjectCode(string projectCode) { DARABONBA_PTR_SET_VALUE(projectCode_, projectCode) };


      // projectTitle Field Functions 
      bool hasProjectTitle() const { return this->projectTitle_ != nullptr;};
      void deleteProjectTitle() { this->projectTitle_ = nullptr;};
      inline string getProjectTitle() const { DARABONBA_PTR_GET_DEFAULT(projectTitle_, "") };
      inline ExternalTravelerList& setProjectTitle(string projectTitle) { DARABONBA_PTR_SET_VALUE(projectTitle_, projectTitle) };


      // thirdPartInvoiceId Field Functions 
      bool hasThirdPartInvoiceId() const { return this->thirdPartInvoiceId_ != nullptr;};
      void deleteThirdPartInvoiceId() { this->thirdPartInvoiceId_ = nullptr;};
      inline string getThirdPartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartInvoiceId_, "") };
      inline ExternalTravelerList& setThirdPartInvoiceId(string thirdPartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdPartInvoiceId_, thirdPartInvoiceId) };


      // thirdpartCostCenterId Field Functions 
      bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
      void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
      inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
      inline ExternalTravelerList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


      // thirdpartDepartId Field Functions 
      bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
      void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
      inline string getThirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
      inline ExternalTravelerList& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline ExternalTravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // userNameEn Field Functions 
      bool hasUserNameEn() const { return this->userNameEn_ != nullptr;};
      void deleteUserNameEn() { this->userNameEn_ = nullptr;};
      inline string getUserNameEn() const { DARABONBA_PTR_GET_DEFAULT(userNameEn_, "") };
      inline ExternalTravelerList& setUserNameEn(string userNameEn) { DARABONBA_PTR_SET_VALUE(userNameEn_, userNameEn) };


    protected:
      shared_ptr<string> attribute_ {};
      shared_ptr<int64_t> costCenterId_ {};
      shared_ptr<string> externalUserId_ {};
      shared_ptr<int64_t> invoiceId_ {};
      shared_ptr<string> paymentDepartmentId_ {};
      shared_ptr<string> paymentDepartmentName_ {};
      shared_ptr<string> projectCode_ {};
      shared_ptr<string> projectTitle_ {};
      shared_ptr<string> thirdPartInvoiceId_ {};
      shared_ptr<string> thirdpartCostCenterId_ {};
      shared_ptr<string> thirdpartDepartId_ {};
      shared_ptr<string> userName_ {};
      shared_ptr<string> userNameEn_ {};
    };

    class DefaultStandard : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DefaultStandard& obj) { 
        DARABONBA_PTR_TO_JSON(business_discount, businessDiscount_);
        DARABONBA_PTR_TO_JSON(economy_discount, economyDiscount_);
        DARABONBA_PTR_TO_JSON(first_discount, firstDiscount_);
        DARABONBA_PTR_TO_JSON(flight_cabins, flightCabins_);
        DARABONBA_PTR_TO_JSON(flight_intl_rule_code, flightIntlRuleCode_);
        DARABONBA_PTR_TO_JSON(flight_rule_code, flightRuleCode_);
        DARABONBA_PTR_TO_JSON(hotel_citys, hotelCitys_);
        DARABONBA_PTR_TO_JSON(hotel_intl_citys, hotelIntlCitys_);
        DARABONBA_PTR_TO_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
        DARABONBA_PTR_TO_JSON(hotel_rule_code, hotelRuleCode_);
        DARABONBA_PTR_TO_JSON(international_flight_cabins, internationalFlightCabins_);
        DARABONBA_PTR_TO_JSON(premium_economy_discount, premiumEconomyDiscount_);
        DARABONBA_PTR_TO_JSON(reserve_type, reserveType_);
        DARABONBA_PTR_TO_JSON(train_rule_code, trainRuleCode_);
        DARABONBA_PTR_TO_JSON(train_seats, trainSeats_);
      };
      friend void from_json(const Darabonba::Json& j, DefaultStandard& obj) { 
        DARABONBA_PTR_FROM_JSON(business_discount, businessDiscount_);
        DARABONBA_PTR_FROM_JSON(economy_discount, economyDiscount_);
        DARABONBA_PTR_FROM_JSON(first_discount, firstDiscount_);
        DARABONBA_PTR_FROM_JSON(flight_cabins, flightCabins_);
        DARABONBA_PTR_FROM_JSON(flight_intl_rule_code, flightIntlRuleCode_);
        DARABONBA_PTR_FROM_JSON(flight_rule_code, flightRuleCode_);
        DARABONBA_PTR_FROM_JSON(hotel_citys, hotelCitys_);
        DARABONBA_PTR_FROM_JSON(hotel_intl_citys, hotelIntlCitys_);
        DARABONBA_PTR_FROM_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
        DARABONBA_PTR_FROM_JSON(hotel_rule_code, hotelRuleCode_);
        DARABONBA_PTR_FROM_JSON(international_flight_cabins, internationalFlightCabins_);
        DARABONBA_PTR_FROM_JSON(premium_economy_discount, premiumEconomyDiscount_);
        DARABONBA_PTR_FROM_JSON(reserve_type, reserveType_);
        DARABONBA_PTR_FROM_JSON(train_rule_code, trainRuleCode_);
        DARABONBA_PTR_FROM_JSON(train_seats, trainSeats_);
      };
      DefaultStandard() = default ;
      DefaultStandard(const DefaultStandard &) = default ;
      DefaultStandard(DefaultStandard &&) = default ;
      DefaultStandard(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DefaultStandard() = default ;
      DefaultStandard& operator=(const DefaultStandard &) = default ;
      DefaultStandard& operator=(DefaultStandard &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class HotelIntlCitys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelIntlCitys& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(fee, fee_);
        };
        friend void from_json(const Darabonba::Json& j, HotelIntlCitys& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(fee, fee_);
        };
        HotelIntlCitys() = default ;
        HotelIntlCitys(const HotelIntlCitys &) = default ;
        HotelIntlCitys(HotelIntlCitys &&) = default ;
        HotelIntlCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelIntlCitys() = default ;
        HotelIntlCitys& operator=(const HotelIntlCitys &) = default ;
        HotelIntlCitys& operator=(HotelIntlCitys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->fee_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelIntlCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelIntlCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
        inline HotelIntlCitys& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<int64_t> fee_ {};
      };

      class HotelCitys : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelCitys& obj) { 
          DARABONBA_PTR_TO_JSON(city_code, cityCode_);
          DARABONBA_PTR_TO_JSON(city_name, cityName_);
          DARABONBA_PTR_TO_JSON(fee, fee_);
        };
        friend void from_json(const Darabonba::Json& j, HotelCitys& obj) { 
          DARABONBA_PTR_FROM_JSON(city_code, cityCode_);
          DARABONBA_PTR_FROM_JSON(city_name, cityName_);
          DARABONBA_PTR_FROM_JSON(fee, fee_);
        };
        HotelCitys() = default ;
        HotelCitys(const HotelCitys &) = default ;
        HotelCitys(HotelCitys &&) = default ;
        HotelCitys(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelCitys() = default ;
        HotelCitys& operator=(const HotelCitys &) = default ;
        HotelCitys& operator=(HotelCitys &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cityCode_ == nullptr
        && this->cityName_ == nullptr && this->fee_ == nullptr; };
        // cityCode Field Functions 
        bool hasCityCode() const { return this->cityCode_ != nullptr;};
        void deleteCityCode() { this->cityCode_ = nullptr;};
        inline string getCityCode() const { DARABONBA_PTR_GET_DEFAULT(cityCode_, "") };
        inline HotelCitys& setCityCode(string cityCode) { DARABONBA_PTR_SET_VALUE(cityCode_, cityCode) };


        // cityName Field Functions 
        bool hasCityName() const { return this->cityName_ != nullptr;};
        void deleteCityName() { this->cityName_ = nullptr;};
        inline string getCityName() const { DARABONBA_PTR_GET_DEFAULT(cityName_, "") };
        inline HotelCitys& setCityName(string cityName) { DARABONBA_PTR_SET_VALUE(cityName_, cityName) };


        // fee Field Functions 
        bool hasFee() const { return this->fee_ != nullptr;};
        void deleteFee() { this->fee_ = nullptr;};
        inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
        inline HotelCitys& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


      protected:
        shared_ptr<string> cityCode_ {};
        shared_ptr<string> cityName_ {};
        shared_ptr<int64_t> fee_ {};
      };

      virtual bool empty() const override { return this->businessDiscount_ == nullptr
        && this->economyDiscount_ == nullptr && this->firstDiscount_ == nullptr && this->flightCabins_ == nullptr && this->flightIntlRuleCode_ == nullptr && this->flightRuleCode_ == nullptr
        && this->hotelCitys_ == nullptr && this->hotelIntlCitys_ == nullptr && this->hotelIntlRuleCode_ == nullptr && this->hotelRuleCode_ == nullptr && this->internationalFlightCabins_ == nullptr
        && this->premiumEconomyDiscount_ == nullptr && this->reserveType_ == nullptr && this->trainRuleCode_ == nullptr && this->trainSeats_ == nullptr; };
      // businessDiscount Field Functions 
      bool hasBusinessDiscount() const { return this->businessDiscount_ != nullptr;};
      void deleteBusinessDiscount() { this->businessDiscount_ = nullptr;};
      inline int32_t getBusinessDiscount() const { DARABONBA_PTR_GET_DEFAULT(businessDiscount_, 0) };
      inline DefaultStandard& setBusinessDiscount(int32_t businessDiscount) { DARABONBA_PTR_SET_VALUE(businessDiscount_, businessDiscount) };


      // economyDiscount Field Functions 
      bool hasEconomyDiscount() const { return this->economyDiscount_ != nullptr;};
      void deleteEconomyDiscount() { this->economyDiscount_ = nullptr;};
      inline int32_t getEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(economyDiscount_, 0) };
      inline DefaultStandard& setEconomyDiscount(int32_t economyDiscount) { DARABONBA_PTR_SET_VALUE(economyDiscount_, economyDiscount) };


      // firstDiscount Field Functions 
      bool hasFirstDiscount() const { return this->firstDiscount_ != nullptr;};
      void deleteFirstDiscount() { this->firstDiscount_ = nullptr;};
      inline int32_t getFirstDiscount() const { DARABONBA_PTR_GET_DEFAULT(firstDiscount_, 0) };
      inline DefaultStandard& setFirstDiscount(int32_t firstDiscount) { DARABONBA_PTR_SET_VALUE(firstDiscount_, firstDiscount) };


      // flightCabins Field Functions 
      bool hasFlightCabins() const { return this->flightCabins_ != nullptr;};
      void deleteFlightCabins() { this->flightCabins_ = nullptr;};
      inline string getFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(flightCabins_, "") };
      inline DefaultStandard& setFlightCabins(string flightCabins) { DARABONBA_PTR_SET_VALUE(flightCabins_, flightCabins) };


      // flightIntlRuleCode Field Functions 
      bool hasFlightIntlRuleCode() const { return this->flightIntlRuleCode_ != nullptr;};
      void deleteFlightIntlRuleCode() { this->flightIntlRuleCode_ = nullptr;};
      inline int64_t getFlightIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightIntlRuleCode_, 0L) };
      inline DefaultStandard& setFlightIntlRuleCode(int64_t flightIntlRuleCode) { DARABONBA_PTR_SET_VALUE(flightIntlRuleCode_, flightIntlRuleCode) };


      // flightRuleCode Field Functions 
      bool hasFlightRuleCode() const { return this->flightRuleCode_ != nullptr;};
      void deleteFlightRuleCode() { this->flightRuleCode_ = nullptr;};
      inline int64_t getFlightRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightRuleCode_, 0L) };
      inline DefaultStandard& setFlightRuleCode(int64_t flightRuleCode) { DARABONBA_PTR_SET_VALUE(flightRuleCode_, flightRuleCode) };


      // hotelCitys Field Functions 
      bool hasHotelCitys() const { return this->hotelCitys_ != nullptr;};
      void deleteHotelCitys() { this->hotelCitys_ = nullptr;};
      inline const vector<DefaultStandard::HotelCitys> & getHotelCitys() const { DARABONBA_PTR_GET_CONST(hotelCitys_, vector<DefaultStandard::HotelCitys>) };
      inline vector<DefaultStandard::HotelCitys> getHotelCitys() { DARABONBA_PTR_GET(hotelCitys_, vector<DefaultStandard::HotelCitys>) };
      inline DefaultStandard& setHotelCitys(const vector<DefaultStandard::HotelCitys> & hotelCitys) { DARABONBA_PTR_SET_VALUE(hotelCitys_, hotelCitys) };
      inline DefaultStandard& setHotelCitys(vector<DefaultStandard::HotelCitys> && hotelCitys) { DARABONBA_PTR_SET_RVALUE(hotelCitys_, hotelCitys) };


      // hotelIntlCitys Field Functions 
      bool hasHotelIntlCitys() const { return this->hotelIntlCitys_ != nullptr;};
      void deleteHotelIntlCitys() { this->hotelIntlCitys_ = nullptr;};
      inline const vector<DefaultStandard::HotelIntlCitys> & getHotelIntlCitys() const { DARABONBA_PTR_GET_CONST(hotelIntlCitys_, vector<DefaultStandard::HotelIntlCitys>) };
      inline vector<DefaultStandard::HotelIntlCitys> getHotelIntlCitys() { DARABONBA_PTR_GET(hotelIntlCitys_, vector<DefaultStandard::HotelIntlCitys>) };
      inline DefaultStandard& setHotelIntlCitys(const vector<DefaultStandard::HotelIntlCitys> & hotelIntlCitys) { DARABONBA_PTR_SET_VALUE(hotelIntlCitys_, hotelIntlCitys) };
      inline DefaultStandard& setHotelIntlCitys(vector<DefaultStandard::HotelIntlCitys> && hotelIntlCitys) { DARABONBA_PTR_SET_RVALUE(hotelIntlCitys_, hotelIntlCitys) };


      // hotelIntlRuleCode Field Functions 
      bool hasHotelIntlRuleCode() const { return this->hotelIntlRuleCode_ != nullptr;};
      void deleteHotelIntlRuleCode() { this->hotelIntlRuleCode_ = nullptr;};
      inline int64_t getHotelIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelIntlRuleCode_, 0L) };
      inline DefaultStandard& setHotelIntlRuleCode(int64_t hotelIntlRuleCode) { DARABONBA_PTR_SET_VALUE(hotelIntlRuleCode_, hotelIntlRuleCode) };


      // hotelRuleCode Field Functions 
      bool hasHotelRuleCode() const { return this->hotelRuleCode_ != nullptr;};
      void deleteHotelRuleCode() { this->hotelRuleCode_ = nullptr;};
      inline int64_t getHotelRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelRuleCode_, 0L) };
      inline DefaultStandard& setHotelRuleCode(int64_t hotelRuleCode) { DARABONBA_PTR_SET_VALUE(hotelRuleCode_, hotelRuleCode) };


      // internationalFlightCabins Field Functions 
      bool hasInternationalFlightCabins() const { return this->internationalFlightCabins_ != nullptr;};
      void deleteInternationalFlightCabins() { this->internationalFlightCabins_ = nullptr;};
      inline string getInternationalFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(internationalFlightCabins_, "") };
      inline DefaultStandard& setInternationalFlightCabins(string internationalFlightCabins) { DARABONBA_PTR_SET_VALUE(internationalFlightCabins_, internationalFlightCabins) };


      // premiumEconomyDiscount Field Functions 
      bool hasPremiumEconomyDiscount() const { return this->premiumEconomyDiscount_ != nullptr;};
      void deletePremiumEconomyDiscount() { this->premiumEconomyDiscount_ = nullptr;};
      inline int32_t getPremiumEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(premiumEconomyDiscount_, 0) };
      inline DefaultStandard& setPremiumEconomyDiscount(int32_t premiumEconomyDiscount) { DARABONBA_PTR_SET_VALUE(premiumEconomyDiscount_, premiumEconomyDiscount) };


      // reserveType Field Functions 
      bool hasReserveType() const { return this->reserveType_ != nullptr;};
      void deleteReserveType() { this->reserveType_ = nullptr;};
      inline int32_t getReserveType() const { DARABONBA_PTR_GET_DEFAULT(reserveType_, 0) };
      inline DefaultStandard& setReserveType(int32_t reserveType) { DARABONBA_PTR_SET_VALUE(reserveType_, reserveType) };


      // trainRuleCode Field Functions 
      bool hasTrainRuleCode() const { return this->trainRuleCode_ != nullptr;};
      void deleteTrainRuleCode() { this->trainRuleCode_ = nullptr;};
      inline int64_t getTrainRuleCode() const { DARABONBA_PTR_GET_DEFAULT(trainRuleCode_, 0L) };
      inline DefaultStandard& setTrainRuleCode(int64_t trainRuleCode) { DARABONBA_PTR_SET_VALUE(trainRuleCode_, trainRuleCode) };


      // trainSeats Field Functions 
      bool hasTrainSeats() const { return this->trainSeats_ != nullptr;};
      void deleteTrainSeats() { this->trainSeats_ = nullptr;};
      inline string getTrainSeats() const { DARABONBA_PTR_GET_DEFAULT(trainSeats_, "") };
      inline DefaultStandard& setTrainSeats(string trainSeats) { DARABONBA_PTR_SET_VALUE(trainSeats_, trainSeats) };


    protected:
      shared_ptr<int32_t> businessDiscount_ {};
      shared_ptr<int32_t> economyDiscount_ {};
      shared_ptr<int32_t> firstDiscount_ {};
      shared_ptr<string> flightCabins_ {};
      shared_ptr<int64_t> flightIntlRuleCode_ {};
      shared_ptr<int64_t> flightRuleCode_ {};
      shared_ptr<vector<DefaultStandard::HotelCitys>> hotelCitys_ {};
      shared_ptr<vector<DefaultStandard::HotelIntlCitys>> hotelIntlCitys_ {};
      shared_ptr<int64_t> hotelIntlRuleCode_ {};
      shared_ptr<int64_t> hotelRuleCode_ {};
      shared_ptr<string> internationalFlightCabins_ {};
      shared_ptr<int32_t> premiumEconomyDiscount_ {};
      shared_ptr<int32_t> reserveType_ {};
      shared_ptr<int64_t> trainRuleCode_ {};
      shared_ptr<string> trainSeats_ {};
    };

    class CarRule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CarRule& obj) { 
        DARABONBA_PTR_TO_JSON(scenario_template_id, scenarioTemplateId_);
        DARABONBA_PTR_TO_JSON(scenario_template_name, scenarioTemplateName_);
      };
      friend void from_json(const Darabonba::Json& j, CarRule& obj) { 
        DARABONBA_PTR_FROM_JSON(scenario_template_id, scenarioTemplateId_);
        DARABONBA_PTR_FROM_JSON(scenario_template_name, scenarioTemplateName_);
      };
      CarRule() = default ;
      CarRule(const CarRule &) = default ;
      CarRule(CarRule &&) = default ;
      CarRule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CarRule() = default ;
      CarRule& operator=(const CarRule &) = default ;
      CarRule& operator=(CarRule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scenarioTemplateId_ == nullptr
        && this->scenarioTemplateName_ == nullptr; };
      // scenarioTemplateId Field Functions 
      bool hasScenarioTemplateId() const { return this->scenarioTemplateId_ != nullptr;};
      void deleteScenarioTemplateId() { this->scenarioTemplateId_ = nullptr;};
      inline string getScenarioTemplateId() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateId_, "") };
      inline CarRule& setScenarioTemplateId(string scenarioTemplateId) { DARABONBA_PTR_SET_VALUE(scenarioTemplateId_, scenarioTemplateId) };


      // scenarioTemplateName Field Functions 
      bool hasScenarioTemplateName() const { return this->scenarioTemplateName_ != nullptr;};
      void deleteScenarioTemplateName() { this->scenarioTemplateName_ = nullptr;};
      inline string getScenarioTemplateName() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateName_, "") };
      inline CarRule& setScenarioTemplateName(string scenarioTemplateName) { DARABONBA_PTR_SET_VALUE(scenarioTemplateName_, scenarioTemplateName) };


    protected:
      shared_ptr<string> scenarioTemplateId_ {};
      shared_ptr<string> scenarioTemplateName_ {};
    };

    virtual bool empty() const override { return this->budget_ == nullptr
        && this->budgetMerge_ == nullptr && this->carRule_ == nullptr && this->corpName_ == nullptr && this->defaultStandard_ == nullptr && this->departId_ == nullptr
        && this->departName_ == nullptr && this->extendField_ == nullptr && this->externalTravelerList_ == nullptr && this->externalTravelerStandard_ == nullptr && this->flightBudget_ == nullptr
        && this->hotelBudget_ == nullptr && this->hotelShare_ == nullptr && this->intlFlightBudget_ == nullptr && this->intlHotelBudget_ == nullptr && this->itineraryList_ == nullptr
        && this->itineraryRule_ == nullptr && this->itinerarySetList_ == nullptr && this->limitTraveler_ == nullptr && this->mealBudget_ == nullptr && this->paymentDepartmentId_ == nullptr
        && this->paymentDepartmentName_ == nullptr && this->status_ == nullptr && this->subCorpId_ == nullptr && this->thirdpartApplyId_ == nullptr && this->thirdpartBusinessId_ == nullptr
        && this->thirdpartDepartId_ == nullptr && this->togetherBookRule_ == nullptr && this->trainBudget_ == nullptr && this->travelerList_ == nullptr && this->travelerStandard_ == nullptr
        && this->tripCause_ == nullptr && this->tripDay_ == nullptr && this->tripTitle_ == nullptr && this->unionNo_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr && this->vehicleBudget_ == nullptr; };
    // budget Field Functions 
    bool hasBudget() const { return this->budget_ != nullptr;};
    void deleteBudget() { this->budget_ = nullptr;};
    inline int64_t getBudget() const { DARABONBA_PTR_GET_DEFAULT(budget_, 0L) };
    inline ApplyModifyRequest& setBudget(int64_t budget) { DARABONBA_PTR_SET_VALUE(budget_, budget) };


    // budgetMerge Field Functions 
    bool hasBudgetMerge() const { return this->budgetMerge_ != nullptr;};
    void deleteBudgetMerge() { this->budgetMerge_ = nullptr;};
    inline int32_t getBudgetMerge() const { DARABONBA_PTR_GET_DEFAULT(budgetMerge_, 0) };
    inline ApplyModifyRequest& setBudgetMerge(int32_t budgetMerge) { DARABONBA_PTR_SET_VALUE(budgetMerge_, budgetMerge) };


    // carRule Field Functions 
    bool hasCarRule() const { return this->carRule_ != nullptr;};
    void deleteCarRule() { this->carRule_ = nullptr;};
    inline const ApplyModifyRequest::CarRule & getCarRule() const { DARABONBA_PTR_GET_CONST(carRule_, ApplyModifyRequest::CarRule) };
    inline ApplyModifyRequest::CarRule getCarRule() { DARABONBA_PTR_GET(carRule_, ApplyModifyRequest::CarRule) };
    inline ApplyModifyRequest& setCarRule(const ApplyModifyRequest::CarRule & carRule) { DARABONBA_PTR_SET_VALUE(carRule_, carRule) };
    inline ApplyModifyRequest& setCarRule(ApplyModifyRequest::CarRule && carRule) { DARABONBA_PTR_SET_RVALUE(carRule_, carRule) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ApplyModifyRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // defaultStandard Field Functions 
    bool hasDefaultStandard() const { return this->defaultStandard_ != nullptr;};
    void deleteDefaultStandard() { this->defaultStandard_ = nullptr;};
    inline const ApplyModifyRequest::DefaultStandard & getDefaultStandard() const { DARABONBA_PTR_GET_CONST(defaultStandard_, ApplyModifyRequest::DefaultStandard) };
    inline ApplyModifyRequest::DefaultStandard getDefaultStandard() { DARABONBA_PTR_GET(defaultStandard_, ApplyModifyRequest::DefaultStandard) };
    inline ApplyModifyRequest& setDefaultStandard(const ApplyModifyRequest::DefaultStandard & defaultStandard) { DARABONBA_PTR_SET_VALUE(defaultStandard_, defaultStandard) };
    inline ApplyModifyRequest& setDefaultStandard(ApplyModifyRequest::DefaultStandard && defaultStandard) { DARABONBA_PTR_SET_RVALUE(defaultStandard_, defaultStandard) };


    // departId Field Functions 
    bool hasDepartId() const { return this->departId_ != nullptr;};
    void deleteDepartId() { this->departId_ = nullptr;};
    inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
    inline ApplyModifyRequest& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


    // departName Field Functions 
    bool hasDepartName() const { return this->departName_ != nullptr;};
    void deleteDepartName() { this->departName_ = nullptr;};
    inline string getDepartName() const { DARABONBA_PTR_GET_DEFAULT(departName_, "") };
    inline ApplyModifyRequest& setDepartName(string departName) { DARABONBA_PTR_SET_VALUE(departName_, departName) };


    // extendField Field Functions 
    bool hasExtendField() const { return this->extendField_ != nullptr;};
    void deleteExtendField() { this->extendField_ = nullptr;};
    inline string getExtendField() const { DARABONBA_PTR_GET_DEFAULT(extendField_, "") };
    inline ApplyModifyRequest& setExtendField(string extendField) { DARABONBA_PTR_SET_VALUE(extendField_, extendField) };


    // externalTravelerList Field Functions 
    bool hasExternalTravelerList() const { return this->externalTravelerList_ != nullptr;};
    void deleteExternalTravelerList() { this->externalTravelerList_ = nullptr;};
    inline const vector<ApplyModifyRequest::ExternalTravelerList> & getExternalTravelerList() const { DARABONBA_PTR_GET_CONST(externalTravelerList_, vector<ApplyModifyRequest::ExternalTravelerList>) };
    inline vector<ApplyModifyRequest::ExternalTravelerList> getExternalTravelerList() { DARABONBA_PTR_GET(externalTravelerList_, vector<ApplyModifyRequest::ExternalTravelerList>) };
    inline ApplyModifyRequest& setExternalTravelerList(const vector<ApplyModifyRequest::ExternalTravelerList> & externalTravelerList) { DARABONBA_PTR_SET_VALUE(externalTravelerList_, externalTravelerList) };
    inline ApplyModifyRequest& setExternalTravelerList(vector<ApplyModifyRequest::ExternalTravelerList> && externalTravelerList) { DARABONBA_PTR_SET_RVALUE(externalTravelerList_, externalTravelerList) };


    // externalTravelerStandard Field Functions 
    bool hasExternalTravelerStandard() const { return this->externalTravelerStandard_ != nullptr;};
    void deleteExternalTravelerStandard() { this->externalTravelerStandard_ = nullptr;};
    inline const ApplyModifyRequest::ExternalTravelerStandard & getExternalTravelerStandard() const { DARABONBA_PTR_GET_CONST(externalTravelerStandard_, ApplyModifyRequest::ExternalTravelerStandard) };
    inline ApplyModifyRequest::ExternalTravelerStandard getExternalTravelerStandard() { DARABONBA_PTR_GET(externalTravelerStandard_, ApplyModifyRequest::ExternalTravelerStandard) };
    inline ApplyModifyRequest& setExternalTravelerStandard(const ApplyModifyRequest::ExternalTravelerStandard & externalTravelerStandard) { DARABONBA_PTR_SET_VALUE(externalTravelerStandard_, externalTravelerStandard) };
    inline ApplyModifyRequest& setExternalTravelerStandard(ApplyModifyRequest::ExternalTravelerStandard && externalTravelerStandard) { DARABONBA_PTR_SET_RVALUE(externalTravelerStandard_, externalTravelerStandard) };


    // flightBudget Field Functions 
    bool hasFlightBudget() const { return this->flightBudget_ != nullptr;};
    void deleteFlightBudget() { this->flightBudget_ = nullptr;};
    inline int64_t getFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(flightBudget_, 0L) };
    inline ApplyModifyRequest& setFlightBudget(int64_t flightBudget) { DARABONBA_PTR_SET_VALUE(flightBudget_, flightBudget) };


    // hotelBudget Field Functions 
    bool hasHotelBudget() const { return this->hotelBudget_ != nullptr;};
    void deleteHotelBudget() { this->hotelBudget_ = nullptr;};
    inline int64_t getHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(hotelBudget_, 0L) };
    inline ApplyModifyRequest& setHotelBudget(int64_t hotelBudget) { DARABONBA_PTR_SET_VALUE(hotelBudget_, hotelBudget) };


    // hotelShare Field Functions 
    bool hasHotelShare() const { return this->hotelShare_ != nullptr;};
    void deleteHotelShare() { this->hotelShare_ = nullptr;};
    inline const ApplyModifyRequest::HotelShare & getHotelShare() const { DARABONBA_PTR_GET_CONST(hotelShare_, ApplyModifyRequest::HotelShare) };
    inline ApplyModifyRequest::HotelShare getHotelShare() { DARABONBA_PTR_GET(hotelShare_, ApplyModifyRequest::HotelShare) };
    inline ApplyModifyRequest& setHotelShare(const ApplyModifyRequest::HotelShare & hotelShare) { DARABONBA_PTR_SET_VALUE(hotelShare_, hotelShare) };
    inline ApplyModifyRequest& setHotelShare(ApplyModifyRequest::HotelShare && hotelShare) { DARABONBA_PTR_SET_RVALUE(hotelShare_, hotelShare) };


    // intlFlightBudget Field Functions 
    bool hasIntlFlightBudget() const { return this->intlFlightBudget_ != nullptr;};
    void deleteIntlFlightBudget() { this->intlFlightBudget_ = nullptr;};
    inline int64_t getIntlFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(intlFlightBudget_, 0L) };
    inline ApplyModifyRequest& setIntlFlightBudget(int64_t intlFlightBudget) { DARABONBA_PTR_SET_VALUE(intlFlightBudget_, intlFlightBudget) };


    // intlHotelBudget Field Functions 
    bool hasIntlHotelBudget() const { return this->intlHotelBudget_ != nullptr;};
    void deleteIntlHotelBudget() { this->intlHotelBudget_ = nullptr;};
    inline int64_t getIntlHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(intlHotelBudget_, 0L) };
    inline ApplyModifyRequest& setIntlHotelBudget(int64_t intlHotelBudget) { DARABONBA_PTR_SET_VALUE(intlHotelBudget_, intlHotelBudget) };


    // itineraryList Field Functions 
    bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
    void deleteItineraryList() { this->itineraryList_ = nullptr;};
    inline const vector<ApplyModifyRequest::ItineraryList> & getItineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<ApplyModifyRequest::ItineraryList>) };
    inline vector<ApplyModifyRequest::ItineraryList> getItineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<ApplyModifyRequest::ItineraryList>) };
    inline ApplyModifyRequest& setItineraryList(const vector<ApplyModifyRequest::ItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
    inline ApplyModifyRequest& setItineraryList(vector<ApplyModifyRequest::ItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


    // itineraryRule Field Functions 
    bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
    void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
    inline int32_t getItineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
    inline ApplyModifyRequest& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


    // itinerarySetList Field Functions 
    bool hasItinerarySetList() const { return this->itinerarySetList_ != nullptr;};
    void deleteItinerarySetList() { this->itinerarySetList_ = nullptr;};
    inline const vector<ApplyModifyRequest::ItinerarySetList> & getItinerarySetList() const { DARABONBA_PTR_GET_CONST(itinerarySetList_, vector<ApplyModifyRequest::ItinerarySetList>) };
    inline vector<ApplyModifyRequest::ItinerarySetList> getItinerarySetList() { DARABONBA_PTR_GET(itinerarySetList_, vector<ApplyModifyRequest::ItinerarySetList>) };
    inline ApplyModifyRequest& setItinerarySetList(const vector<ApplyModifyRequest::ItinerarySetList> & itinerarySetList) { DARABONBA_PTR_SET_VALUE(itinerarySetList_, itinerarySetList) };
    inline ApplyModifyRequest& setItinerarySetList(vector<ApplyModifyRequest::ItinerarySetList> && itinerarySetList) { DARABONBA_PTR_SET_RVALUE(itinerarySetList_, itinerarySetList) };


    // limitTraveler Field Functions 
    bool hasLimitTraveler() const { return this->limitTraveler_ != nullptr;};
    void deleteLimitTraveler() { this->limitTraveler_ = nullptr;};
    inline int32_t getLimitTraveler() const { DARABONBA_PTR_GET_DEFAULT(limitTraveler_, 0) };
    inline ApplyModifyRequest& setLimitTraveler(int32_t limitTraveler) { DARABONBA_PTR_SET_VALUE(limitTraveler_, limitTraveler) };


    // mealBudget Field Functions 
    bool hasMealBudget() const { return this->mealBudget_ != nullptr;};
    void deleteMealBudget() { this->mealBudget_ = nullptr;};
    inline int64_t getMealBudget() const { DARABONBA_PTR_GET_DEFAULT(mealBudget_, 0L) };
    inline ApplyModifyRequest& setMealBudget(int64_t mealBudget) { DARABONBA_PTR_SET_VALUE(mealBudget_, mealBudget) };


    // paymentDepartmentId Field Functions 
    bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
    void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
    inline string getPaymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
    inline ApplyModifyRequest& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


    // paymentDepartmentName Field Functions 
    bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
    void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
    inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
    inline ApplyModifyRequest& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ApplyModifyRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subCorpId Field Functions 
    bool hasSubCorpId() const { return this->subCorpId_ != nullptr;};
    void deleteSubCorpId() { this->subCorpId_ = nullptr;};
    inline string getSubCorpId() const { DARABONBA_PTR_GET_DEFAULT(subCorpId_, "") };
    inline ApplyModifyRequest& setSubCorpId(string subCorpId) { DARABONBA_PTR_SET_VALUE(subCorpId_, subCorpId) };


    // thirdpartApplyId Field Functions 
    bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
    void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
    inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
    inline ApplyModifyRequest& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


    // thirdpartBusinessId Field Functions 
    bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
    void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
    inline string getThirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
    inline ApplyModifyRequest& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


    // thirdpartDepartId Field Functions 
    bool hasThirdpartDepartId() const { return this->thirdpartDepartId_ != nullptr;};
    void deleteThirdpartDepartId() { this->thirdpartDepartId_ = nullptr;};
    inline string getThirdpartDepartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartDepartId_, "") };
    inline ApplyModifyRequest& setThirdpartDepartId(string thirdpartDepartId) { DARABONBA_PTR_SET_VALUE(thirdpartDepartId_, thirdpartDepartId) };


    // togetherBookRule Field Functions 
    bool hasTogetherBookRule() const { return this->togetherBookRule_ != nullptr;};
    void deleteTogetherBookRule() { this->togetherBookRule_ = nullptr;};
    inline int32_t getTogetherBookRule() const { DARABONBA_PTR_GET_DEFAULT(togetherBookRule_, 0) };
    inline ApplyModifyRequest& setTogetherBookRule(int32_t togetherBookRule) { DARABONBA_PTR_SET_VALUE(togetherBookRule_, togetherBookRule) };


    // trainBudget Field Functions 
    bool hasTrainBudget() const { return this->trainBudget_ != nullptr;};
    void deleteTrainBudget() { this->trainBudget_ = nullptr;};
    inline int64_t getTrainBudget() const { DARABONBA_PTR_GET_DEFAULT(trainBudget_, 0L) };
    inline ApplyModifyRequest& setTrainBudget(int64_t trainBudget) { DARABONBA_PTR_SET_VALUE(trainBudget_, trainBudget) };


    // travelerList Field Functions 
    bool hasTravelerList() const { return this->travelerList_ != nullptr;};
    void deleteTravelerList() { this->travelerList_ = nullptr;};
    inline const vector<ApplyModifyRequest::TravelerList> & getTravelerList() const { DARABONBA_PTR_GET_CONST(travelerList_, vector<ApplyModifyRequest::TravelerList>) };
    inline vector<ApplyModifyRequest::TravelerList> getTravelerList() { DARABONBA_PTR_GET(travelerList_, vector<ApplyModifyRequest::TravelerList>) };
    inline ApplyModifyRequest& setTravelerList(const vector<ApplyModifyRequest::TravelerList> & travelerList) { DARABONBA_PTR_SET_VALUE(travelerList_, travelerList) };
    inline ApplyModifyRequest& setTravelerList(vector<ApplyModifyRequest::TravelerList> && travelerList) { DARABONBA_PTR_SET_RVALUE(travelerList_, travelerList) };


    // travelerStandard Field Functions 
    bool hasTravelerStandard() const { return this->travelerStandard_ != nullptr;};
    void deleteTravelerStandard() { this->travelerStandard_ = nullptr;};
    inline const vector<ApplyModifyRequest::TravelerStandard> & getTravelerStandard() const { DARABONBA_PTR_GET_CONST(travelerStandard_, vector<ApplyModifyRequest::TravelerStandard>) };
    inline vector<ApplyModifyRequest::TravelerStandard> getTravelerStandard() { DARABONBA_PTR_GET(travelerStandard_, vector<ApplyModifyRequest::TravelerStandard>) };
    inline ApplyModifyRequest& setTravelerStandard(const vector<ApplyModifyRequest::TravelerStandard> & travelerStandard) { DARABONBA_PTR_SET_VALUE(travelerStandard_, travelerStandard) };
    inline ApplyModifyRequest& setTravelerStandard(vector<ApplyModifyRequest::TravelerStandard> && travelerStandard) { DARABONBA_PTR_SET_RVALUE(travelerStandard_, travelerStandard) };


    // tripCause Field Functions 
    bool hasTripCause() const { return this->tripCause_ != nullptr;};
    void deleteTripCause() { this->tripCause_ = nullptr;};
    inline string getTripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
    inline ApplyModifyRequest& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


    // tripDay Field Functions 
    bool hasTripDay() const { return this->tripDay_ != nullptr;};
    void deleteTripDay() { this->tripDay_ = nullptr;};
    inline int32_t getTripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
    inline ApplyModifyRequest& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


    // tripTitle Field Functions 
    bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
    void deleteTripTitle() { this->tripTitle_ = nullptr;};
    inline string getTripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
    inline ApplyModifyRequest& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


    // unionNo Field Functions 
    bool hasUnionNo() const { return this->unionNo_ != nullptr;};
    void deleteUnionNo() { this->unionNo_ = nullptr;};
    inline string getUnionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
    inline ApplyModifyRequest& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ApplyModifyRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ApplyModifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // vehicleBudget Field Functions 
    bool hasVehicleBudget() const { return this->vehicleBudget_ != nullptr;};
    void deleteVehicleBudget() { this->vehicleBudget_ = nullptr;};
    inline int64_t getVehicleBudget() const { DARABONBA_PTR_GET_DEFAULT(vehicleBudget_, 0L) };
    inline ApplyModifyRequest& setVehicleBudget(int64_t vehicleBudget) { DARABONBA_PTR_SET_VALUE(vehicleBudget_, vehicleBudget) };


  protected:
    shared_ptr<int64_t> budget_ {};
    shared_ptr<int32_t> budgetMerge_ {};
    shared_ptr<ApplyModifyRequest::CarRule> carRule_ {};
    shared_ptr<string> corpName_ {};
    shared_ptr<ApplyModifyRequest::DefaultStandard> defaultStandard_ {};
    shared_ptr<string> departId_ {};
    shared_ptr<string> departName_ {};
    // 可将补充描述传入此字段，账单中将会体现此字段的值。可以用于企业的统计和对账
    shared_ptr<string> extendField_ {};
    shared_ptr<vector<ApplyModifyRequest::ExternalTravelerList>> externalTravelerList_ {};
    shared_ptr<ApplyModifyRequest::ExternalTravelerStandard> externalTravelerStandard_ {};
    shared_ptr<int64_t> flightBudget_ {};
    shared_ptr<int64_t> hotelBudget_ {};
    shared_ptr<ApplyModifyRequest::HotelShare> hotelShare_ {};
    shared_ptr<int64_t> intlFlightBudget_ {};
    shared_ptr<int64_t> intlHotelBudget_ {};
    shared_ptr<vector<ApplyModifyRequest::ItineraryList>> itineraryList_ {};
    shared_ptr<int32_t> itineraryRule_ {};
    shared_ptr<vector<ApplyModifyRequest::ItinerarySetList>> itinerarySetList_ {};
    shared_ptr<int32_t> limitTraveler_ {};
    shared_ptr<int64_t> mealBudget_ {};
    shared_ptr<string> paymentDepartmentId_ {};
    shared_ptr<string> paymentDepartmentName_ {};
    shared_ptr<int32_t> status_ {};
    // 子企业Id
    shared_ptr<string> subCorpId_ {};
    // This parameter is required.
    shared_ptr<string> thirdpartApplyId_ {};
    shared_ptr<string> thirdpartBusinessId_ {};
    shared_ptr<string> thirdpartDepartId_ {};
    shared_ptr<int32_t> togetherBookRule_ {};
    shared_ptr<int64_t> trainBudget_ {};
    shared_ptr<vector<ApplyModifyRequest::TravelerList>> travelerList_ {};
    shared_ptr<vector<ApplyModifyRequest::TravelerStandard>> travelerStandard_ {};
    // This parameter is required.
    shared_ptr<string> tripCause_ {};
    shared_ptr<int32_t> tripDay_ {};
    // This parameter is required.
    shared_ptr<string> tripTitle_ {};
    shared_ptr<string> unionNo_ {};
    // This parameter is required.
    shared_ptr<string> userId_ {};
    shared_ptr<string> userName_ {};
    shared_ptr<int64_t> vehicleBudget_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
