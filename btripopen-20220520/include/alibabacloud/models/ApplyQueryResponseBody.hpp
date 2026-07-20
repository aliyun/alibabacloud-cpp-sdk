// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPLYQUERYRESPONSEBODY_HPP_
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
  class ApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    ApplyQueryResponseBody() = default ;
    ApplyQueryResponseBody(const ApplyQueryResponseBody &) = default ;
    ApplyQueryResponseBody(ApplyQueryResponseBody &&) = default ;
    ApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyQueryResponseBody() = default ;
    ApplyQueryResponseBody& operator=(const ApplyQueryResponseBody &) = default ;
    ApplyQueryResponseBody& operator=(ApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_show_id, applyShowId_);
        DARABONBA_PTR_TO_JSON(approver_list, approverList_);
        DARABONBA_PTR_TO_JSON(budget, budget_);
        DARABONBA_PTR_TO_JSON(budget_merge, budgetMerge_);
        DARABONBA_PTR_TO_JSON(car_rule, carRule_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(corp_name, corpName_);
        DARABONBA_PTR_TO_JSON(depart_id, departId_);
        DARABONBA_PTR_TO_JSON(depart_name, departName_);
        DARABONBA_PTR_TO_JSON(extend_field, extendField_);
        DARABONBA_PTR_TO_JSON(external_traveler_list, externalTravelerList_);
        DARABONBA_PTR_TO_JSON(flight_budget, flightBudget_);
        DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_TO_JSON(hotel_budget, hotelBudget_);
        DARABONBA_PTR_TO_JSON(hotel_share, hotelShare_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(intl_flight_budget, intlFlightBudget_);
        DARABONBA_PTR_TO_JSON(intl_hotel_budget, intlHotelBudget_);
        DARABONBA_PTR_TO_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_TO_JSON(itinerary_rule, itineraryRule_);
        DARABONBA_PTR_TO_JSON(itinerary_set_list, itinerarySetList_);
        DARABONBA_PTR_TO_JSON(job_no, jobNo_);
        DARABONBA_PTR_TO_JSON(limit_traveler, limitTraveler_);
        DARABONBA_PTR_TO_JSON(meal_budget, mealBudget_);
        DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
        DARABONBA_PTR_TO_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_TO_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_TO_JSON(together_book_rule, togetherBookRule_);
        DARABONBA_PTR_TO_JSON(train_budget, trainBudget_);
        DARABONBA_PTR_TO_JSON(traveler_list, travelerList_);
        DARABONBA_PTR_TO_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_TO_JSON(trip_day, tripDay_);
        DARABONBA_PTR_TO_JSON(trip_title, tripTitle_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(union_no, unionNo_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
        DARABONBA_PTR_TO_JSON(vehicle_budget, vehicleBudget_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_show_id, applyShowId_);
        DARABONBA_PTR_FROM_JSON(approver_list, approverList_);
        DARABONBA_PTR_FROM_JSON(budget, budget_);
        DARABONBA_PTR_FROM_JSON(budget_merge, budgetMerge_);
        DARABONBA_PTR_FROM_JSON(car_rule, carRule_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(corp_name, corpName_);
        DARABONBA_PTR_FROM_JSON(depart_id, departId_);
        DARABONBA_PTR_FROM_JSON(depart_name, departName_);
        DARABONBA_PTR_FROM_JSON(extend_field, extendField_);
        DARABONBA_PTR_FROM_JSON(external_traveler_list, externalTravelerList_);
        DARABONBA_PTR_FROM_JSON(flight_budget, flightBudget_);
        DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(hotel_budget, hotelBudget_);
        DARABONBA_PTR_FROM_JSON(hotel_share, hotelShare_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(intl_flight_budget, intlFlightBudget_);
        DARABONBA_PTR_FROM_JSON(intl_hotel_budget, intlHotelBudget_);
        DARABONBA_PTR_FROM_JSON(itinerary_list, itineraryList_);
        DARABONBA_PTR_FROM_JSON(itinerary_rule, itineraryRule_);
        DARABONBA_PTR_FROM_JSON(itinerary_set_list, itinerarySetList_);
        DARABONBA_PTR_FROM_JSON(job_no, jobNo_);
        DARABONBA_PTR_FROM_JSON(limit_traveler, limitTraveler_);
        DARABONBA_PTR_FROM_JSON(meal_budget, mealBudget_);
        DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
        DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
        DARABONBA_PTR_FROM_JSON(thirdpart_business_id, thirdpartBusinessId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_id, thirdpartId_);
        DARABONBA_PTR_FROM_JSON(together_book_rule, togetherBookRule_);
        DARABONBA_PTR_FROM_JSON(train_budget, trainBudget_);
        DARABONBA_PTR_FROM_JSON(traveler_list, travelerList_);
        DARABONBA_PTR_FROM_JSON(trip_cause, tripCause_);
        DARABONBA_PTR_FROM_JSON(trip_day, tripDay_);
        DARABONBA_PTR_FROM_JSON(trip_title, tripTitle_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(union_no, unionNo_);
        DARABONBA_PTR_FROM_JSON(user_id, userId_);
        DARABONBA_PTR_FROM_JSON(user_name, userName_);
        DARABONBA_PTR_FROM_JSON(vehicle_budget, vehicleBudget_);
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
      class TravelerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TravelerList& obj) { 
          DARABONBA_PTR_TO_JSON(attribute, attribute_);
          DARABONBA_PTR_TO_JSON(business_discount, businessDiscount_);
          DARABONBA_PTR_TO_JSON(car_city_set, carCitySet_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(economy_discount, economyDiscount_);
          DARABONBA_PTR_TO_JSON(first_discount, firstDiscount_);
          DARABONBA_PTR_TO_JSON(flight_cabins, flightCabins_);
          DARABONBA_PTR_TO_JSON(flight_intl_rule_code, flightIntlRuleCode_);
          DARABONBA_PTR_TO_JSON(flight_rule_code, flightRuleCode_);
          DARABONBA_PTR_TO_JSON(hotel_citys, hotelCitys_);
          DARABONBA_PTR_TO_JSON(hotel_intl_citys, hotelIntlCitys_);
          DARABONBA_PTR_TO_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
          DARABONBA_PTR_TO_JSON(hotel_rule_code, hotelRuleCode_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(premium_economy_discount, premiumEconomyDiscount_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(reserve_type, reserveType_);
          DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_TO_JSON(train_rule_code, trainRuleCode_);
          DARABONBA_PTR_TO_JSON(train_seats, trainSeats_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, TravelerList& obj) { 
          DARABONBA_PTR_FROM_JSON(attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(business_discount, businessDiscount_);
          DARABONBA_PTR_FROM_JSON(car_city_set, carCitySet_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(economy_discount, economyDiscount_);
          DARABONBA_PTR_FROM_JSON(first_discount, firstDiscount_);
          DARABONBA_PTR_FROM_JSON(flight_cabins, flightCabins_);
          DARABONBA_PTR_FROM_JSON(flight_intl_rule_code, flightIntlRuleCode_);
          DARABONBA_PTR_FROM_JSON(flight_rule_code, flightRuleCode_);
          DARABONBA_PTR_FROM_JSON(hotel_citys, hotelCitys_);
          DARABONBA_PTR_FROM_JSON(hotel_intl_citys, hotelIntlCitys_);
          DARABONBA_PTR_FROM_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
          DARABONBA_PTR_FROM_JSON(hotel_rule_code, hotelRuleCode_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(premium_economy_discount, premiumEconomyDiscount_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(reserve_type, reserveType_);
          DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_FROM_JSON(train_rule_code, trainRuleCode_);
          DARABONBA_PTR_FROM_JSON(train_seats, trainSeats_);
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
          shared_ptr<string> cityCode_ {};
          shared_ptr<string> cityName_ {};
        };

        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->businessDiscount_ == nullptr && this->carCitySet_ == nullptr && this->costCenterName_ == nullptr && this->departId_ == nullptr && this->economyDiscount_ == nullptr
        && this->firstDiscount_ == nullptr && this->flightCabins_ == nullptr && this->flightIntlRuleCode_ == nullptr && this->flightRuleCode_ == nullptr && this->hotelCitys_ == nullptr
        && this->hotelIntlCitys_ == nullptr && this->hotelIntlRuleCode_ == nullptr && this->hotelRuleCode_ == nullptr && this->invoiceName_ == nullptr && this->paymentDepartmentId_ == nullptr
        && this->paymentDepartmentName_ == nullptr && this->premiumEconomyDiscount_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->reserveType_ == nullptr
        && this->thirdPartInvoiceId_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->thirdpartDepartId_ == nullptr && this->trainRuleCode_ == nullptr && this->trainSeats_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline TravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // businessDiscount Field Functions 
        bool hasBusinessDiscount() const { return this->businessDiscount_ != nullptr;};
        void deleteBusinessDiscount() { this->businessDiscount_ = nullptr;};
        inline int32_t getBusinessDiscount() const { DARABONBA_PTR_GET_DEFAULT(businessDiscount_, 0) };
        inline TravelerList& setBusinessDiscount(int32_t businessDiscount) { DARABONBA_PTR_SET_VALUE(businessDiscount_, businessDiscount) };


        // carCitySet Field Functions 
        bool hasCarCitySet() const { return this->carCitySet_ != nullptr;};
        void deleteCarCitySet() { this->carCitySet_ = nullptr;};
        inline const vector<TravelerList::CarCitySet> & getCarCitySet() const { DARABONBA_PTR_GET_CONST(carCitySet_, vector<TravelerList::CarCitySet>) };
        inline vector<TravelerList::CarCitySet> getCarCitySet() { DARABONBA_PTR_GET(carCitySet_, vector<TravelerList::CarCitySet>) };
        inline TravelerList& setCarCitySet(const vector<TravelerList::CarCitySet> & carCitySet) { DARABONBA_PTR_SET_VALUE(carCitySet_, carCitySet) };
        inline TravelerList& setCarCitySet(vector<TravelerList::CarCitySet> && carCitySet) { DARABONBA_PTR_SET_RVALUE(carCitySet_, carCitySet) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline TravelerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // departId Field Functions 
        bool hasDepartId() const { return this->departId_ != nullptr;};
        void deleteDepartId() { this->departId_ = nullptr;};
        inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
        inline TravelerList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


        // economyDiscount Field Functions 
        bool hasEconomyDiscount() const { return this->economyDiscount_ != nullptr;};
        void deleteEconomyDiscount() { this->economyDiscount_ = nullptr;};
        inline int32_t getEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(economyDiscount_, 0) };
        inline TravelerList& setEconomyDiscount(int32_t economyDiscount) { DARABONBA_PTR_SET_VALUE(economyDiscount_, economyDiscount) };


        // firstDiscount Field Functions 
        bool hasFirstDiscount() const { return this->firstDiscount_ != nullptr;};
        void deleteFirstDiscount() { this->firstDiscount_ = nullptr;};
        inline int32_t getFirstDiscount() const { DARABONBA_PTR_GET_DEFAULT(firstDiscount_, 0) };
        inline TravelerList& setFirstDiscount(int32_t firstDiscount) { DARABONBA_PTR_SET_VALUE(firstDiscount_, firstDiscount) };


        // flightCabins Field Functions 
        bool hasFlightCabins() const { return this->flightCabins_ != nullptr;};
        void deleteFlightCabins() { this->flightCabins_ = nullptr;};
        inline string getFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(flightCabins_, "") };
        inline TravelerList& setFlightCabins(string flightCabins) { DARABONBA_PTR_SET_VALUE(flightCabins_, flightCabins) };


        // flightIntlRuleCode Field Functions 
        bool hasFlightIntlRuleCode() const { return this->flightIntlRuleCode_ != nullptr;};
        void deleteFlightIntlRuleCode() { this->flightIntlRuleCode_ = nullptr;};
        inline int64_t getFlightIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightIntlRuleCode_, 0L) };
        inline TravelerList& setFlightIntlRuleCode(int64_t flightIntlRuleCode) { DARABONBA_PTR_SET_VALUE(flightIntlRuleCode_, flightIntlRuleCode) };


        // flightRuleCode Field Functions 
        bool hasFlightRuleCode() const { return this->flightRuleCode_ != nullptr;};
        void deleteFlightRuleCode() { this->flightRuleCode_ = nullptr;};
        inline int64_t getFlightRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightRuleCode_, 0L) };
        inline TravelerList& setFlightRuleCode(int64_t flightRuleCode) { DARABONBA_PTR_SET_VALUE(flightRuleCode_, flightRuleCode) };


        // hotelCitys Field Functions 
        bool hasHotelCitys() const { return this->hotelCitys_ != nullptr;};
        void deleteHotelCitys() { this->hotelCitys_ = nullptr;};
        inline const vector<TravelerList::HotelCitys> & getHotelCitys() const { DARABONBA_PTR_GET_CONST(hotelCitys_, vector<TravelerList::HotelCitys>) };
        inline vector<TravelerList::HotelCitys> getHotelCitys() { DARABONBA_PTR_GET(hotelCitys_, vector<TravelerList::HotelCitys>) };
        inline TravelerList& setHotelCitys(const vector<TravelerList::HotelCitys> & hotelCitys) { DARABONBA_PTR_SET_VALUE(hotelCitys_, hotelCitys) };
        inline TravelerList& setHotelCitys(vector<TravelerList::HotelCitys> && hotelCitys) { DARABONBA_PTR_SET_RVALUE(hotelCitys_, hotelCitys) };


        // hotelIntlCitys Field Functions 
        bool hasHotelIntlCitys() const { return this->hotelIntlCitys_ != nullptr;};
        void deleteHotelIntlCitys() { this->hotelIntlCitys_ = nullptr;};
        inline const vector<TravelerList::HotelIntlCitys> & getHotelIntlCitys() const { DARABONBA_PTR_GET_CONST(hotelIntlCitys_, vector<TravelerList::HotelIntlCitys>) };
        inline vector<TravelerList::HotelIntlCitys> getHotelIntlCitys() { DARABONBA_PTR_GET(hotelIntlCitys_, vector<TravelerList::HotelIntlCitys>) };
        inline TravelerList& setHotelIntlCitys(const vector<TravelerList::HotelIntlCitys> & hotelIntlCitys) { DARABONBA_PTR_SET_VALUE(hotelIntlCitys_, hotelIntlCitys) };
        inline TravelerList& setHotelIntlCitys(vector<TravelerList::HotelIntlCitys> && hotelIntlCitys) { DARABONBA_PTR_SET_RVALUE(hotelIntlCitys_, hotelIntlCitys) };


        // hotelIntlRuleCode Field Functions 
        bool hasHotelIntlRuleCode() const { return this->hotelIntlRuleCode_ != nullptr;};
        void deleteHotelIntlRuleCode() { this->hotelIntlRuleCode_ = nullptr;};
        inline int64_t getHotelIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelIntlRuleCode_, 0L) };
        inline TravelerList& setHotelIntlRuleCode(int64_t hotelIntlRuleCode) { DARABONBA_PTR_SET_VALUE(hotelIntlRuleCode_, hotelIntlRuleCode) };


        // hotelRuleCode Field Functions 
        bool hasHotelRuleCode() const { return this->hotelRuleCode_ != nullptr;};
        void deleteHotelRuleCode() { this->hotelRuleCode_ = nullptr;};
        inline int64_t getHotelRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelRuleCode_, 0L) };
        inline TravelerList& setHotelRuleCode(int64_t hotelRuleCode) { DARABONBA_PTR_SET_VALUE(hotelRuleCode_, hotelRuleCode) };


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline TravelerList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


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


        // premiumEconomyDiscount Field Functions 
        bool hasPremiumEconomyDiscount() const { return this->premiumEconomyDiscount_ != nullptr;};
        void deletePremiumEconomyDiscount() { this->premiumEconomyDiscount_ = nullptr;};
        inline int32_t getPremiumEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(premiumEconomyDiscount_, 0) };
        inline TravelerList& setPremiumEconomyDiscount(int32_t premiumEconomyDiscount) { DARABONBA_PTR_SET_VALUE(premiumEconomyDiscount_, premiumEconomyDiscount) };


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


        // reserveType Field Functions 
        bool hasReserveType() const { return this->reserveType_ != nullptr;};
        void deleteReserveType() { this->reserveType_ = nullptr;};
        inline int32_t getReserveType() const { DARABONBA_PTR_GET_DEFAULT(reserveType_, 0) };
        inline TravelerList& setReserveType(int32_t reserveType) { DARABONBA_PTR_SET_VALUE(reserveType_, reserveType) };


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


        // trainRuleCode Field Functions 
        bool hasTrainRuleCode() const { return this->trainRuleCode_ != nullptr;};
        void deleteTrainRuleCode() { this->trainRuleCode_ = nullptr;};
        inline int64_t getTrainRuleCode() const { DARABONBA_PTR_GET_DEFAULT(trainRuleCode_, 0L) };
        inline TravelerList& setTrainRuleCode(int64_t trainRuleCode) { DARABONBA_PTR_SET_VALUE(trainRuleCode_, trainRuleCode) };


        // trainSeats Field Functions 
        bool hasTrainSeats() const { return this->trainSeats_ != nullptr;};
        void deleteTrainSeats() { this->trainSeats_ = nullptr;};
        inline string getTrainSeats() const { DARABONBA_PTR_GET_DEFAULT(trainSeats_, "") };
        inline TravelerList& setTrainSeats(string trainSeats) { DARABONBA_PTR_SET_VALUE(trainSeats_, trainSeats) };


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
        shared_ptr<int32_t> businessDiscount_ {};
        shared_ptr<vector<TravelerList::CarCitySet>> carCitySet_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<int32_t> economyDiscount_ {};
        shared_ptr<int32_t> firstDiscount_ {};
        shared_ptr<string> flightCabins_ {};
        shared_ptr<int64_t> flightIntlRuleCode_ {};
        shared_ptr<int64_t> flightRuleCode_ {};
        shared_ptr<vector<TravelerList::HotelCitys>> hotelCitys_ {};
        shared_ptr<vector<TravelerList::HotelIntlCitys>> hotelIntlCitys_ {};
        shared_ptr<int64_t> hotelIntlRuleCode_ {};
        shared_ptr<int64_t> hotelRuleCode_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<int32_t> premiumEconomyDiscount_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<int32_t> reserveType_ {};
        shared_ptr<string> thirdPartInvoiceId_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
        shared_ptr<string> thirdpartDepartId_ {};
        shared_ptr<int64_t> trainRuleCode_ {};
        shared_ptr<string> trainSeats_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      class ItinerarySetList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItinerarySetList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(attribute, attribute_);
          DARABONBA_PTR_TO_JSON(can_order_type_list, canOrderTypeList_);
          DARABONBA_PTR_TO_JSON(city_code_set, cityCodeSet_);
          DARABONBA_PTR_TO_JSON(city_set, citySet_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(dep_date, depDate_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
          DARABONBA_PTR_TO_JSON(itinerary_travel_standard, itineraryTravelStandard_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
        };
        friend void from_json(const Darabonba::Json& j, ItinerarySetList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(can_order_type_list, canOrderTypeList_);
          DARABONBA_PTR_FROM_JSON(city_code_set, cityCodeSet_);
          DARABONBA_PTR_FROM_JSON(city_set, citySet_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
          DARABONBA_PTR_FROM_JSON(itinerary_travel_standard, itineraryTravelStandard_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
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
        && this->attribute_ == nullptr && this->canOrderTypeList_ == nullptr && this->cityCodeSet_ == nullptr && this->citySet_ == nullptr && this->costCenterName_ == nullptr
        && this->depDate_ == nullptr && this->invoiceName_ == nullptr && this->itineraryId_ == nullptr && this->itineraryNo_ == nullptr && this->itineraryTravelStandard_ == nullptr
        && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->thirdpartInvoiceId_ == nullptr && this->thirdpartItineraryId_ == nullptr
        && this->trafficType_ == nullptr; };
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


        // canOrderTypeList Field Functions 
        bool hasCanOrderTypeList() const { return this->canOrderTypeList_ != nullptr;};
        void deleteCanOrderTypeList() { this->canOrderTypeList_ = nullptr;};
        inline const vector<string> & getCanOrderTypeList() const { DARABONBA_PTR_GET_CONST(canOrderTypeList_, vector<string>) };
        inline vector<string> getCanOrderTypeList() { DARABONBA_PTR_GET(canOrderTypeList_, vector<string>) };
        inline ItinerarySetList& setCanOrderTypeList(const vector<string> & canOrderTypeList) { DARABONBA_PTR_SET_VALUE(canOrderTypeList_, canOrderTypeList) };
        inline ItinerarySetList& setCanOrderTypeList(vector<string> && canOrderTypeList) { DARABONBA_PTR_SET_RVALUE(canOrderTypeList_, canOrderTypeList) };


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


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline ItinerarySetList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // depDate Field Functions 
        bool hasDepDate() const { return this->depDate_ != nullptr;};
        void deleteDepDate() { this->depDate_ = nullptr;};
        inline string getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, "") };
        inline ItinerarySetList& setDepDate(string depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline ItinerarySetList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline ItinerarySetList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // itineraryNo Field Functions 
        bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
        void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
        inline string getItineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
        inline ItinerarySetList& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


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


        // thirdpartCostCenterId Field Functions 
        bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
        void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
        inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
        inline ItinerarySetList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


        // thirdpartInvoiceId Field Functions 
        bool hasThirdpartInvoiceId() const { return this->thirdpartInvoiceId_ != nullptr;};
        void deleteThirdpartInvoiceId() { this->thirdpartInvoiceId_ = nullptr;};
        inline string getThirdpartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartInvoiceId_, "") };
        inline ItinerarySetList& setThirdpartInvoiceId(string thirdpartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdpartInvoiceId_, thirdpartInvoiceId) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline ItinerarySetList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


        // trafficType Field Functions 
        bool hasTrafficType() const { return this->trafficType_ != nullptr;};
        void deleteTrafficType() { this->trafficType_ = nullptr;};
        inline int32_t getTrafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, 0) };
        inline ItinerarySetList& setTrafficType(int32_t trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


      protected:
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> attribute_ {};
        shared_ptr<vector<string>> canOrderTypeList_ {};
        shared_ptr<string> cityCodeSet_ {};
        shared_ptr<string> citySet_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> depDate_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<string> itineraryNo_ {};
        shared_ptr<ItinerarySetList::ItineraryTravelStandard> itineraryTravelStandard_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
        shared_ptr<string> thirdpartInvoiceId_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
        shared_ptr<int32_t> trafficType_ {};
      };

      class ItineraryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItineraryList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
          DARABONBA_PTR_TO_JSON(attribute, attribute_);
          DARABONBA_PTR_TO_JSON(can_order_type_list, canOrderTypeList_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_TO_JSON(dep_date, depDate_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(itinerary_no, itineraryNo_);
          DARABONBA_PTR_TO_JSON(itinerary_travel_standard, itineraryTravelStandard_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_TO_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
          DARABONBA_PTR_TO_JSON(traffic_type, trafficType_);
          DARABONBA_PTR_TO_JSON(trip_way, tripWay_);
        };
        friend void from_json(const Darabonba::Json& j, ItineraryList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
          DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
          DARABONBA_PTR_FROM_JSON(attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(can_order_type_list, canOrderTypeList_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
          DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(itinerary_no, itineraryNo_);
          DARABONBA_PTR_FROM_JSON(itinerary_travel_standard, itineraryTravelStandard_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_invoice_id, thirdpartInvoiceId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_itinerary_id, thirdpartItineraryId_);
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
        && this->arrCityCode_ == nullptr && this->arrDate_ == nullptr && this->attribute_ == nullptr && this->canOrderTypeList_ == nullptr && this->costCenterName_ == nullptr
        && this->depCity_ == nullptr && this->depCityCode_ == nullptr && this->depDate_ == nullptr && this->invoiceName_ == nullptr && this->itineraryId_ == nullptr
        && this->itineraryNo_ == nullptr && this->itineraryTravelStandard_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->thirdpartCostCenterId_ == nullptr
        && this->thirdpartInvoiceId_ == nullptr && this->thirdpartItineraryId_ == nullptr && this->trafficType_ == nullptr && this->tripWay_ == nullptr; };
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


        // canOrderTypeList Field Functions 
        bool hasCanOrderTypeList() const { return this->canOrderTypeList_ != nullptr;};
        void deleteCanOrderTypeList() { this->canOrderTypeList_ = nullptr;};
        inline const vector<string> & getCanOrderTypeList() const { DARABONBA_PTR_GET_CONST(canOrderTypeList_, vector<string>) };
        inline vector<string> getCanOrderTypeList() { DARABONBA_PTR_GET(canOrderTypeList_, vector<string>) };
        inline ItineraryList& setCanOrderTypeList(const vector<string> & canOrderTypeList) { DARABONBA_PTR_SET_VALUE(canOrderTypeList_, canOrderTypeList) };
        inline ItineraryList& setCanOrderTypeList(vector<string> && canOrderTypeList) { DARABONBA_PTR_SET_RVALUE(canOrderTypeList_, canOrderTypeList) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline ItineraryList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


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


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline ItineraryList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline ItineraryList& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // itineraryNo Field Functions 
        bool hasItineraryNo() const { return this->itineraryNo_ != nullptr;};
        void deleteItineraryNo() { this->itineraryNo_ = nullptr;};
        inline string getItineraryNo() const { DARABONBA_PTR_GET_DEFAULT(itineraryNo_, "") };
        inline ItineraryList& setItineraryNo(string itineraryNo) { DARABONBA_PTR_SET_VALUE(itineraryNo_, itineraryNo) };


        // itineraryTravelStandard Field Functions 
        bool hasItineraryTravelStandard() const { return this->itineraryTravelStandard_ != nullptr;};
        void deleteItineraryTravelStandard() { this->itineraryTravelStandard_ = nullptr;};
        inline const ItineraryList::ItineraryTravelStandard & getItineraryTravelStandard() const { DARABONBA_PTR_GET_CONST(itineraryTravelStandard_, ItineraryList::ItineraryTravelStandard) };
        inline ItineraryList::ItineraryTravelStandard getItineraryTravelStandard() { DARABONBA_PTR_GET(itineraryTravelStandard_, ItineraryList::ItineraryTravelStandard) };
        inline ItineraryList& setItineraryTravelStandard(const ItineraryList::ItineraryTravelStandard & itineraryTravelStandard) { DARABONBA_PTR_SET_VALUE(itineraryTravelStandard_, itineraryTravelStandard) };
        inline ItineraryList& setItineraryTravelStandard(ItineraryList::ItineraryTravelStandard && itineraryTravelStandard) { DARABONBA_PTR_SET_RVALUE(itineraryTravelStandard_, itineraryTravelStandard) };


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


        // thirdpartCostCenterId Field Functions 
        bool hasThirdpartCostCenterId() const { return this->thirdpartCostCenterId_ != nullptr;};
        void deleteThirdpartCostCenterId() { this->thirdpartCostCenterId_ = nullptr;};
        inline string getThirdpartCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCostCenterId_, "") };
        inline ItineraryList& setThirdpartCostCenterId(string thirdpartCostCenterId) { DARABONBA_PTR_SET_VALUE(thirdpartCostCenterId_, thirdpartCostCenterId) };


        // thirdpartInvoiceId Field Functions 
        bool hasThirdpartInvoiceId() const { return this->thirdpartInvoiceId_ != nullptr;};
        void deleteThirdpartInvoiceId() { this->thirdpartInvoiceId_ = nullptr;};
        inline string getThirdpartInvoiceId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartInvoiceId_, "") };
        inline ItineraryList& setThirdpartInvoiceId(string thirdpartInvoiceId) { DARABONBA_PTR_SET_VALUE(thirdpartInvoiceId_, thirdpartInvoiceId) };


        // thirdpartItineraryId Field Functions 
        bool hasThirdpartItineraryId() const { return this->thirdpartItineraryId_ != nullptr;};
        void deleteThirdpartItineraryId() { this->thirdpartItineraryId_ = nullptr;};
        inline string getThirdpartItineraryId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartItineraryId_, "") };
        inline ItineraryList& setThirdpartItineraryId(string thirdpartItineraryId) { DARABONBA_PTR_SET_VALUE(thirdpartItineraryId_, thirdpartItineraryId) };


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
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityCode_ {};
        shared_ptr<string> arrDate_ {};
        shared_ptr<string> attribute_ {};
        shared_ptr<vector<string>> canOrderTypeList_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityCode_ {};
        shared_ptr<string> depDate_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<string> itineraryNo_ {};
        shared_ptr<ItineraryList::ItineraryTravelStandard> itineraryTravelStandard_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
        shared_ptr<string> thirdpartInvoiceId_ {};
        shared_ptr<string> thirdpartItineraryId_ {};
        shared_ptr<int32_t> trafficType_ {};
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

      class ExternalTravelerList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExternalTravelerList& obj) { 
          DARABONBA_PTR_TO_JSON(attribute, attribute_);
          DARABONBA_PTR_TO_JSON(business_discount, businessDiscount_);
          DARABONBA_PTR_TO_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_TO_JSON(depart_id, departId_);
          DARABONBA_PTR_TO_JSON(economy_discount, economyDiscount_);
          DARABONBA_PTR_TO_JSON(external_user_id, externalUserId_);
          DARABONBA_PTR_TO_JSON(first_discount, firstDiscount_);
          DARABONBA_PTR_TO_JSON(flight_cabins, flightCabins_);
          DARABONBA_PTR_TO_JSON(flight_intl_rule_code, flightIntlRuleCode_);
          DARABONBA_PTR_TO_JSON(flight_rule_code, flightRuleCode_);
          DARABONBA_PTR_TO_JSON(hotel_citys, hotelCitys_);
          DARABONBA_PTR_TO_JSON(hotel_intl_citys, hotelIntlCitys_);
          DARABONBA_PTR_TO_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
          DARABONBA_PTR_TO_JSON(hotel_rule_code, hotelRuleCode_);
          DARABONBA_PTR_TO_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_TO_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_TO_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_TO_JSON(premium_economy_discount, premiumEconomyDiscount_);
          DARABONBA_PTR_TO_JSON(project_code, projectCode_);
          DARABONBA_PTR_TO_JSON(project_title, projectTitle_);
          DARABONBA_PTR_TO_JSON(reserve_type, reserveType_);
          DARABONBA_PTR_TO_JSON(third_part_invoice_id, thirdPartInvoiceId_);
          DARABONBA_PTR_TO_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_TO_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_TO_JSON(train_rule_code, trainRuleCode_);
          DARABONBA_PTR_TO_JSON(train_seats, trainSeats_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, ExternalTravelerList& obj) { 
          DARABONBA_PTR_FROM_JSON(attribute, attribute_);
          DARABONBA_PTR_FROM_JSON(business_discount, businessDiscount_);
          DARABONBA_PTR_FROM_JSON(cost_center_name, costCenterName_);
          DARABONBA_PTR_FROM_JSON(depart_id, departId_);
          DARABONBA_PTR_FROM_JSON(economy_discount, economyDiscount_);
          DARABONBA_PTR_FROM_JSON(external_user_id, externalUserId_);
          DARABONBA_PTR_FROM_JSON(first_discount, firstDiscount_);
          DARABONBA_PTR_FROM_JSON(flight_cabins, flightCabins_);
          DARABONBA_PTR_FROM_JSON(flight_intl_rule_code, flightIntlRuleCode_);
          DARABONBA_PTR_FROM_JSON(flight_rule_code, flightRuleCode_);
          DARABONBA_PTR_FROM_JSON(hotel_citys, hotelCitys_);
          DARABONBA_PTR_FROM_JSON(hotel_intl_citys, hotelIntlCitys_);
          DARABONBA_PTR_FROM_JSON(hotel_intl_rule_code, hotelIntlRuleCode_);
          DARABONBA_PTR_FROM_JSON(hotel_rule_code, hotelRuleCode_);
          DARABONBA_PTR_FROM_JSON(invoice_name, invoiceName_);
          DARABONBA_PTR_FROM_JSON(payment_department_id, paymentDepartmentId_);
          DARABONBA_PTR_FROM_JSON(payment_department_name, paymentDepartmentName_);
          DARABONBA_PTR_FROM_JSON(premium_economy_discount, premiumEconomyDiscount_);
          DARABONBA_PTR_FROM_JSON(project_code, projectCode_);
          DARABONBA_PTR_FROM_JSON(project_title, projectTitle_);
          DARABONBA_PTR_FROM_JSON(reserve_type, reserveType_);
          DARABONBA_PTR_FROM_JSON(third_part_invoice_id, thirdPartInvoiceId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_cost_center_id, thirdpartCostCenterId_);
          DARABONBA_PTR_FROM_JSON(thirdpart_depart_id, thirdpartDepartId_);
          DARABONBA_PTR_FROM_JSON(train_rule_code, trainRuleCode_);
          DARABONBA_PTR_FROM_JSON(train_seats, trainSeats_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
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

        virtual bool empty() const override { return this->attribute_ == nullptr
        && this->businessDiscount_ == nullptr && this->costCenterName_ == nullptr && this->departId_ == nullptr && this->economyDiscount_ == nullptr && this->externalUserId_ == nullptr
        && this->firstDiscount_ == nullptr && this->flightCabins_ == nullptr && this->flightIntlRuleCode_ == nullptr && this->flightRuleCode_ == nullptr && this->hotelCitys_ == nullptr
        && this->hotelIntlCitys_ == nullptr && this->hotelIntlRuleCode_ == nullptr && this->hotelRuleCode_ == nullptr && this->invoiceName_ == nullptr && this->paymentDepartmentId_ == nullptr
        && this->paymentDepartmentName_ == nullptr && this->premiumEconomyDiscount_ == nullptr && this->projectCode_ == nullptr && this->projectTitle_ == nullptr && this->reserveType_ == nullptr
        && this->thirdPartInvoiceId_ == nullptr && this->thirdpartCostCenterId_ == nullptr && this->thirdpartDepartId_ == nullptr && this->trainRuleCode_ == nullptr && this->trainSeats_ == nullptr
        && this->userName_ == nullptr; };
        // attribute Field Functions 
        bool hasAttribute() const { return this->attribute_ != nullptr;};
        void deleteAttribute() { this->attribute_ = nullptr;};
        inline string getAttribute() const { DARABONBA_PTR_GET_DEFAULT(attribute_, "") };
        inline ExternalTravelerList& setAttribute(string attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };


        // businessDiscount Field Functions 
        bool hasBusinessDiscount() const { return this->businessDiscount_ != nullptr;};
        void deleteBusinessDiscount() { this->businessDiscount_ = nullptr;};
        inline int32_t getBusinessDiscount() const { DARABONBA_PTR_GET_DEFAULT(businessDiscount_, 0) };
        inline ExternalTravelerList& setBusinessDiscount(int32_t businessDiscount) { DARABONBA_PTR_SET_VALUE(businessDiscount_, businessDiscount) };


        // costCenterName Field Functions 
        bool hasCostCenterName() const { return this->costCenterName_ != nullptr;};
        void deleteCostCenterName() { this->costCenterName_ = nullptr;};
        inline string getCostCenterName() const { DARABONBA_PTR_GET_DEFAULT(costCenterName_, "") };
        inline ExternalTravelerList& setCostCenterName(string costCenterName) { DARABONBA_PTR_SET_VALUE(costCenterName_, costCenterName) };


        // departId Field Functions 
        bool hasDepartId() const { return this->departId_ != nullptr;};
        void deleteDepartId() { this->departId_ = nullptr;};
        inline string getDepartId() const { DARABONBA_PTR_GET_DEFAULT(departId_, "") };
        inline ExternalTravelerList& setDepartId(string departId) { DARABONBA_PTR_SET_VALUE(departId_, departId) };


        // economyDiscount Field Functions 
        bool hasEconomyDiscount() const { return this->economyDiscount_ != nullptr;};
        void deleteEconomyDiscount() { this->economyDiscount_ = nullptr;};
        inline int32_t getEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(economyDiscount_, 0) };
        inline ExternalTravelerList& setEconomyDiscount(int32_t economyDiscount) { DARABONBA_PTR_SET_VALUE(economyDiscount_, economyDiscount) };


        // externalUserId Field Functions 
        bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
        void deleteExternalUserId() { this->externalUserId_ = nullptr;};
        inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
        inline ExternalTravelerList& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


        // firstDiscount Field Functions 
        bool hasFirstDiscount() const { return this->firstDiscount_ != nullptr;};
        void deleteFirstDiscount() { this->firstDiscount_ = nullptr;};
        inline int32_t getFirstDiscount() const { DARABONBA_PTR_GET_DEFAULT(firstDiscount_, 0) };
        inline ExternalTravelerList& setFirstDiscount(int32_t firstDiscount) { DARABONBA_PTR_SET_VALUE(firstDiscount_, firstDiscount) };


        // flightCabins Field Functions 
        bool hasFlightCabins() const { return this->flightCabins_ != nullptr;};
        void deleteFlightCabins() { this->flightCabins_ = nullptr;};
        inline string getFlightCabins() const { DARABONBA_PTR_GET_DEFAULT(flightCabins_, "") };
        inline ExternalTravelerList& setFlightCabins(string flightCabins) { DARABONBA_PTR_SET_VALUE(flightCabins_, flightCabins) };


        // flightIntlRuleCode Field Functions 
        bool hasFlightIntlRuleCode() const { return this->flightIntlRuleCode_ != nullptr;};
        void deleteFlightIntlRuleCode() { this->flightIntlRuleCode_ = nullptr;};
        inline int64_t getFlightIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightIntlRuleCode_, 0L) };
        inline ExternalTravelerList& setFlightIntlRuleCode(int64_t flightIntlRuleCode) { DARABONBA_PTR_SET_VALUE(flightIntlRuleCode_, flightIntlRuleCode) };


        // flightRuleCode Field Functions 
        bool hasFlightRuleCode() const { return this->flightRuleCode_ != nullptr;};
        void deleteFlightRuleCode() { this->flightRuleCode_ = nullptr;};
        inline int64_t getFlightRuleCode() const { DARABONBA_PTR_GET_DEFAULT(flightRuleCode_, 0L) };
        inline ExternalTravelerList& setFlightRuleCode(int64_t flightRuleCode) { DARABONBA_PTR_SET_VALUE(flightRuleCode_, flightRuleCode) };


        // hotelCitys Field Functions 
        bool hasHotelCitys() const { return this->hotelCitys_ != nullptr;};
        void deleteHotelCitys() { this->hotelCitys_ = nullptr;};
        inline const vector<ExternalTravelerList::HotelCitys> & getHotelCitys() const { DARABONBA_PTR_GET_CONST(hotelCitys_, vector<ExternalTravelerList::HotelCitys>) };
        inline vector<ExternalTravelerList::HotelCitys> getHotelCitys() { DARABONBA_PTR_GET(hotelCitys_, vector<ExternalTravelerList::HotelCitys>) };
        inline ExternalTravelerList& setHotelCitys(const vector<ExternalTravelerList::HotelCitys> & hotelCitys) { DARABONBA_PTR_SET_VALUE(hotelCitys_, hotelCitys) };
        inline ExternalTravelerList& setHotelCitys(vector<ExternalTravelerList::HotelCitys> && hotelCitys) { DARABONBA_PTR_SET_RVALUE(hotelCitys_, hotelCitys) };


        // hotelIntlCitys Field Functions 
        bool hasHotelIntlCitys() const { return this->hotelIntlCitys_ != nullptr;};
        void deleteHotelIntlCitys() { this->hotelIntlCitys_ = nullptr;};
        inline const vector<ExternalTravelerList::HotelIntlCitys> & getHotelIntlCitys() const { DARABONBA_PTR_GET_CONST(hotelIntlCitys_, vector<ExternalTravelerList::HotelIntlCitys>) };
        inline vector<ExternalTravelerList::HotelIntlCitys> getHotelIntlCitys() { DARABONBA_PTR_GET(hotelIntlCitys_, vector<ExternalTravelerList::HotelIntlCitys>) };
        inline ExternalTravelerList& setHotelIntlCitys(const vector<ExternalTravelerList::HotelIntlCitys> & hotelIntlCitys) { DARABONBA_PTR_SET_VALUE(hotelIntlCitys_, hotelIntlCitys) };
        inline ExternalTravelerList& setHotelIntlCitys(vector<ExternalTravelerList::HotelIntlCitys> && hotelIntlCitys) { DARABONBA_PTR_SET_RVALUE(hotelIntlCitys_, hotelIntlCitys) };


        // hotelIntlRuleCode Field Functions 
        bool hasHotelIntlRuleCode() const { return this->hotelIntlRuleCode_ != nullptr;};
        void deleteHotelIntlRuleCode() { this->hotelIntlRuleCode_ = nullptr;};
        inline int64_t getHotelIntlRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelIntlRuleCode_, 0L) };
        inline ExternalTravelerList& setHotelIntlRuleCode(int64_t hotelIntlRuleCode) { DARABONBA_PTR_SET_VALUE(hotelIntlRuleCode_, hotelIntlRuleCode) };


        // hotelRuleCode Field Functions 
        bool hasHotelRuleCode() const { return this->hotelRuleCode_ != nullptr;};
        void deleteHotelRuleCode() { this->hotelRuleCode_ = nullptr;};
        inline int64_t getHotelRuleCode() const { DARABONBA_PTR_GET_DEFAULT(hotelRuleCode_, 0L) };
        inline ExternalTravelerList& setHotelRuleCode(int64_t hotelRuleCode) { DARABONBA_PTR_SET_VALUE(hotelRuleCode_, hotelRuleCode) };


        // invoiceName Field Functions 
        bool hasInvoiceName() const { return this->invoiceName_ != nullptr;};
        void deleteInvoiceName() { this->invoiceName_ = nullptr;};
        inline string getInvoiceName() const { DARABONBA_PTR_GET_DEFAULT(invoiceName_, "") };
        inline ExternalTravelerList& setInvoiceName(string invoiceName) { DARABONBA_PTR_SET_VALUE(invoiceName_, invoiceName) };


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


        // premiumEconomyDiscount Field Functions 
        bool hasPremiumEconomyDiscount() const { return this->premiumEconomyDiscount_ != nullptr;};
        void deletePremiumEconomyDiscount() { this->premiumEconomyDiscount_ = nullptr;};
        inline int32_t getPremiumEconomyDiscount() const { DARABONBA_PTR_GET_DEFAULT(premiumEconomyDiscount_, 0) };
        inline ExternalTravelerList& setPremiumEconomyDiscount(int32_t premiumEconomyDiscount) { DARABONBA_PTR_SET_VALUE(premiumEconomyDiscount_, premiumEconomyDiscount) };


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


        // reserveType Field Functions 
        bool hasReserveType() const { return this->reserveType_ != nullptr;};
        void deleteReserveType() { this->reserveType_ = nullptr;};
        inline int32_t getReserveType() const { DARABONBA_PTR_GET_DEFAULT(reserveType_, 0) };
        inline ExternalTravelerList& setReserveType(int32_t reserveType) { DARABONBA_PTR_SET_VALUE(reserveType_, reserveType) };


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


        // trainRuleCode Field Functions 
        bool hasTrainRuleCode() const { return this->trainRuleCode_ != nullptr;};
        void deleteTrainRuleCode() { this->trainRuleCode_ = nullptr;};
        inline int64_t getTrainRuleCode() const { DARABONBA_PTR_GET_DEFAULT(trainRuleCode_, 0L) };
        inline ExternalTravelerList& setTrainRuleCode(int64_t trainRuleCode) { DARABONBA_PTR_SET_VALUE(trainRuleCode_, trainRuleCode) };


        // trainSeats Field Functions 
        bool hasTrainSeats() const { return this->trainSeats_ != nullptr;};
        void deleteTrainSeats() { this->trainSeats_ = nullptr;};
        inline string getTrainSeats() const { DARABONBA_PTR_GET_DEFAULT(trainSeats_, "") };
        inline ExternalTravelerList& setTrainSeats(string trainSeats) { DARABONBA_PTR_SET_VALUE(trainSeats_, trainSeats) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline ExternalTravelerList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> attribute_ {};
        shared_ptr<int32_t> businessDiscount_ {};
        shared_ptr<string> costCenterName_ {};
        shared_ptr<string> departId_ {};
        shared_ptr<int32_t> economyDiscount_ {};
        shared_ptr<string> externalUserId_ {};
        shared_ptr<int32_t> firstDiscount_ {};
        shared_ptr<string> flightCabins_ {};
        shared_ptr<int64_t> flightIntlRuleCode_ {};
        shared_ptr<int64_t> flightRuleCode_ {};
        shared_ptr<vector<ExternalTravelerList::HotelCitys>> hotelCitys_ {};
        shared_ptr<vector<ExternalTravelerList::HotelIntlCitys>> hotelIntlCitys_ {};
        shared_ptr<int64_t> hotelIntlRuleCode_ {};
        shared_ptr<int64_t> hotelRuleCode_ {};
        shared_ptr<string> invoiceName_ {};
        shared_ptr<string> paymentDepartmentId_ {};
        shared_ptr<string> paymentDepartmentName_ {};
        shared_ptr<int32_t> premiumEconomyDiscount_ {};
        shared_ptr<string> projectCode_ {};
        shared_ptr<string> projectTitle_ {};
        shared_ptr<int32_t> reserveType_ {};
        shared_ptr<string> thirdPartInvoiceId_ {};
        shared_ptr<string> thirdpartCostCenterId_ {};
        shared_ptr<string> thirdpartDepartId_ {};
        shared_ptr<int64_t> trainRuleCode_ {};
        shared_ptr<string> trainSeats_ {};
        shared_ptr<string> userName_ {};
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

      class ApproverList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApproverList& obj) { 
          DARABONBA_PTR_TO_JSON(note, note_);
          DARABONBA_PTR_TO_JSON(operate_time, operateTime_);
          DARABONBA_PTR_TO_JSON(order, order_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
          DARABONBA_PTR_TO_JSON(user_name, userName_);
        };
        friend void from_json(const Darabonba::Json& j, ApproverList& obj) { 
          DARABONBA_PTR_FROM_JSON(note, note_);
          DARABONBA_PTR_FROM_JSON(operate_time, operateTime_);
          DARABONBA_PTR_FROM_JSON(order, order_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(status_desc, statusDesc_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
          DARABONBA_PTR_FROM_JSON(user_name, userName_);
        };
        ApproverList() = default ;
        ApproverList(const ApproverList &) = default ;
        ApproverList(ApproverList &&) = default ;
        ApproverList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApproverList() = default ;
        ApproverList& operator=(const ApproverList &) = default ;
        ApproverList& operator=(ApproverList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->note_ == nullptr
        && this->operateTime_ == nullptr && this->order_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->userId_ == nullptr
        && this->userName_ == nullptr; };
        // note Field Functions 
        bool hasNote() const { return this->note_ != nullptr;};
        void deleteNote() { this->note_ = nullptr;};
        inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
        inline ApproverList& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


        // operateTime Field Functions 
        bool hasOperateTime() const { return this->operateTime_ != nullptr;};
        void deleteOperateTime() { this->operateTime_ = nullptr;};
        inline string getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, "") };
        inline ApproverList& setOperateTime(string operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
        inline ApproverList& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ApproverList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusDesc Field Functions 
        bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
        void deleteStatusDesc() { this->statusDesc_ = nullptr;};
        inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
        inline ApproverList& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline ApproverList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline ApproverList& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        shared_ptr<string> note_ {};
        shared_ptr<string> operateTime_ {};
        shared_ptr<int32_t> order_ {};
        shared_ptr<int32_t> status_ {};
        shared_ptr<string> statusDesc_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->applyShowId_ == nullptr
        && this->approverList_ == nullptr && this->budget_ == nullptr && this->budgetMerge_ == nullptr && this->carRule_ == nullptr && this->corpId_ == nullptr
        && this->corpName_ == nullptr && this->departId_ == nullptr && this->departName_ == nullptr && this->extendField_ == nullptr && this->externalTravelerList_ == nullptr
        && this->flightBudget_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->hotelBudget_ == nullptr && this->hotelShare_ == nullptr
        && this->id_ == nullptr && this->intlFlightBudget_ == nullptr && this->intlHotelBudget_ == nullptr && this->itineraryList_ == nullptr && this->itineraryRule_ == nullptr
        && this->itinerarySetList_ == nullptr && this->jobNo_ == nullptr && this->limitTraveler_ == nullptr && this->mealBudget_ == nullptr && this->paymentDepartmentId_ == nullptr
        && this->paymentDepartmentName_ == nullptr && this->status_ == nullptr && this->statusDesc_ == nullptr && this->thirdpartBusinessId_ == nullptr && this->thirdpartId_ == nullptr
        && this->togetherBookRule_ == nullptr && this->trainBudget_ == nullptr && this->travelerList_ == nullptr && this->tripCause_ == nullptr && this->tripDay_ == nullptr
        && this->tripTitle_ == nullptr && this->type_ == nullptr && this->unionNo_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr
        && this->vehicleBudget_ == nullptr; };
      // applyShowId Field Functions 
      bool hasApplyShowId() const { return this->applyShowId_ != nullptr;};
      void deleteApplyShowId() { this->applyShowId_ = nullptr;};
      inline string getApplyShowId() const { DARABONBA_PTR_GET_DEFAULT(applyShowId_, "") };
      inline Module& setApplyShowId(string applyShowId) { DARABONBA_PTR_SET_VALUE(applyShowId_, applyShowId) };


      // approverList Field Functions 
      bool hasApproverList() const { return this->approverList_ != nullptr;};
      void deleteApproverList() { this->approverList_ = nullptr;};
      inline const vector<Module::ApproverList> & getApproverList() const { DARABONBA_PTR_GET_CONST(approverList_, vector<Module::ApproverList>) };
      inline vector<Module::ApproverList> getApproverList() { DARABONBA_PTR_GET(approverList_, vector<Module::ApproverList>) };
      inline Module& setApproverList(const vector<Module::ApproverList> & approverList) { DARABONBA_PTR_SET_VALUE(approverList_, approverList) };
      inline Module& setApproverList(vector<Module::ApproverList> && approverList) { DARABONBA_PTR_SET_RVALUE(approverList_, approverList) };


      // budget Field Functions 
      bool hasBudget() const { return this->budget_ != nullptr;};
      void deleteBudget() { this->budget_ = nullptr;};
      inline int64_t getBudget() const { DARABONBA_PTR_GET_DEFAULT(budget_, 0L) };
      inline Module& setBudget(int64_t budget) { DARABONBA_PTR_SET_VALUE(budget_, budget) };


      // budgetMerge Field Functions 
      bool hasBudgetMerge() const { return this->budgetMerge_ != nullptr;};
      void deleteBudgetMerge() { this->budgetMerge_ = nullptr;};
      inline int32_t getBudgetMerge() const { DARABONBA_PTR_GET_DEFAULT(budgetMerge_, 0) };
      inline Module& setBudgetMerge(int32_t budgetMerge) { DARABONBA_PTR_SET_VALUE(budgetMerge_, budgetMerge) };


      // carRule Field Functions 
      bool hasCarRule() const { return this->carRule_ != nullptr;};
      void deleteCarRule() { this->carRule_ = nullptr;};
      inline const Module::CarRule & getCarRule() const { DARABONBA_PTR_GET_CONST(carRule_, Module::CarRule) };
      inline Module::CarRule getCarRule() { DARABONBA_PTR_GET(carRule_, Module::CarRule) };
      inline Module& setCarRule(const Module::CarRule & carRule) { DARABONBA_PTR_SET_VALUE(carRule_, carRule) };
      inline Module& setCarRule(Module::CarRule && carRule) { DARABONBA_PTR_SET_RVALUE(carRule_, carRule) };


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


      // externalTravelerList Field Functions 
      bool hasExternalTravelerList() const { return this->externalTravelerList_ != nullptr;};
      void deleteExternalTravelerList() { this->externalTravelerList_ = nullptr;};
      inline const vector<Module::ExternalTravelerList> & getExternalTravelerList() const { DARABONBA_PTR_GET_CONST(externalTravelerList_, vector<Module::ExternalTravelerList>) };
      inline vector<Module::ExternalTravelerList> getExternalTravelerList() { DARABONBA_PTR_GET(externalTravelerList_, vector<Module::ExternalTravelerList>) };
      inline Module& setExternalTravelerList(const vector<Module::ExternalTravelerList> & externalTravelerList) { DARABONBA_PTR_SET_VALUE(externalTravelerList_, externalTravelerList) };
      inline Module& setExternalTravelerList(vector<Module::ExternalTravelerList> && externalTravelerList) { DARABONBA_PTR_SET_RVALUE(externalTravelerList_, externalTravelerList) };


      // flightBudget Field Functions 
      bool hasFlightBudget() const { return this->flightBudget_ != nullptr;};
      void deleteFlightBudget() { this->flightBudget_ = nullptr;};
      inline int64_t getFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(flightBudget_, 0L) };
      inline Module& setFlightBudget(int64_t flightBudget) { DARABONBA_PTR_SET_VALUE(flightBudget_, flightBudget) };


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


      // hotelBudget Field Functions 
      bool hasHotelBudget() const { return this->hotelBudget_ != nullptr;};
      void deleteHotelBudget() { this->hotelBudget_ = nullptr;};
      inline int64_t getHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(hotelBudget_, 0L) };
      inline Module& setHotelBudget(int64_t hotelBudget) { DARABONBA_PTR_SET_VALUE(hotelBudget_, hotelBudget) };


      // hotelShare Field Functions 
      bool hasHotelShare() const { return this->hotelShare_ != nullptr;};
      void deleteHotelShare() { this->hotelShare_ = nullptr;};
      inline const Module::HotelShare & getHotelShare() const { DARABONBA_PTR_GET_CONST(hotelShare_, Module::HotelShare) };
      inline Module::HotelShare getHotelShare() { DARABONBA_PTR_GET(hotelShare_, Module::HotelShare) };
      inline Module& setHotelShare(const Module::HotelShare & hotelShare) { DARABONBA_PTR_SET_VALUE(hotelShare_, hotelShare) };
      inline Module& setHotelShare(Module::HotelShare && hotelShare) { DARABONBA_PTR_SET_RVALUE(hotelShare_, hotelShare) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Module& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // intlFlightBudget Field Functions 
      bool hasIntlFlightBudget() const { return this->intlFlightBudget_ != nullptr;};
      void deleteIntlFlightBudget() { this->intlFlightBudget_ = nullptr;};
      inline int64_t getIntlFlightBudget() const { DARABONBA_PTR_GET_DEFAULT(intlFlightBudget_, 0L) };
      inline Module& setIntlFlightBudget(int64_t intlFlightBudget) { DARABONBA_PTR_SET_VALUE(intlFlightBudget_, intlFlightBudget) };


      // intlHotelBudget Field Functions 
      bool hasIntlHotelBudget() const { return this->intlHotelBudget_ != nullptr;};
      void deleteIntlHotelBudget() { this->intlHotelBudget_ = nullptr;};
      inline int64_t getIntlHotelBudget() const { DARABONBA_PTR_GET_DEFAULT(intlHotelBudget_, 0L) };
      inline Module& setIntlHotelBudget(int64_t intlHotelBudget) { DARABONBA_PTR_SET_VALUE(intlHotelBudget_, intlHotelBudget) };


      // itineraryList Field Functions 
      bool hasItineraryList() const { return this->itineraryList_ != nullptr;};
      void deleteItineraryList() { this->itineraryList_ = nullptr;};
      inline const vector<Module::ItineraryList> & getItineraryList() const { DARABONBA_PTR_GET_CONST(itineraryList_, vector<Module::ItineraryList>) };
      inline vector<Module::ItineraryList> getItineraryList() { DARABONBA_PTR_GET(itineraryList_, vector<Module::ItineraryList>) };
      inline Module& setItineraryList(const vector<Module::ItineraryList> & itineraryList) { DARABONBA_PTR_SET_VALUE(itineraryList_, itineraryList) };
      inline Module& setItineraryList(vector<Module::ItineraryList> && itineraryList) { DARABONBA_PTR_SET_RVALUE(itineraryList_, itineraryList) };


      // itineraryRule Field Functions 
      bool hasItineraryRule() const { return this->itineraryRule_ != nullptr;};
      void deleteItineraryRule() { this->itineraryRule_ = nullptr;};
      inline int32_t getItineraryRule() const { DARABONBA_PTR_GET_DEFAULT(itineraryRule_, 0) };
      inline Module& setItineraryRule(int32_t itineraryRule) { DARABONBA_PTR_SET_VALUE(itineraryRule_, itineraryRule) };


      // itinerarySetList Field Functions 
      bool hasItinerarySetList() const { return this->itinerarySetList_ != nullptr;};
      void deleteItinerarySetList() { this->itinerarySetList_ = nullptr;};
      inline const vector<Module::ItinerarySetList> & getItinerarySetList() const { DARABONBA_PTR_GET_CONST(itinerarySetList_, vector<Module::ItinerarySetList>) };
      inline vector<Module::ItinerarySetList> getItinerarySetList() { DARABONBA_PTR_GET(itinerarySetList_, vector<Module::ItinerarySetList>) };
      inline Module& setItinerarySetList(const vector<Module::ItinerarySetList> & itinerarySetList) { DARABONBA_PTR_SET_VALUE(itinerarySetList_, itinerarySetList) };
      inline Module& setItinerarySetList(vector<Module::ItinerarySetList> && itinerarySetList) { DARABONBA_PTR_SET_RVALUE(itinerarySetList_, itinerarySetList) };


      // jobNo Field Functions 
      bool hasJobNo() const { return this->jobNo_ != nullptr;};
      void deleteJobNo() { this->jobNo_ = nullptr;};
      inline string getJobNo() const { DARABONBA_PTR_GET_DEFAULT(jobNo_, "") };
      inline Module& setJobNo(string jobNo) { DARABONBA_PTR_SET_VALUE(jobNo_, jobNo) };


      // limitTraveler Field Functions 
      bool hasLimitTraveler() const { return this->limitTraveler_ != nullptr;};
      void deleteLimitTraveler() { this->limitTraveler_ = nullptr;};
      inline int32_t getLimitTraveler() const { DARABONBA_PTR_GET_DEFAULT(limitTraveler_, 0) };
      inline Module& setLimitTraveler(int32_t limitTraveler) { DARABONBA_PTR_SET_VALUE(limitTraveler_, limitTraveler) };


      // mealBudget Field Functions 
      bool hasMealBudget() const { return this->mealBudget_ != nullptr;};
      void deleteMealBudget() { this->mealBudget_ = nullptr;};
      inline int64_t getMealBudget() const { DARABONBA_PTR_GET_DEFAULT(mealBudget_, 0L) };
      inline Module& setMealBudget(int64_t mealBudget) { DARABONBA_PTR_SET_VALUE(mealBudget_, mealBudget) };


      // paymentDepartmentId Field Functions 
      bool hasPaymentDepartmentId() const { return this->paymentDepartmentId_ != nullptr;};
      void deletePaymentDepartmentId() { this->paymentDepartmentId_ = nullptr;};
      inline string getPaymentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentId_, "") };
      inline Module& setPaymentDepartmentId(string paymentDepartmentId) { DARABONBA_PTR_SET_VALUE(paymentDepartmentId_, paymentDepartmentId) };


      // paymentDepartmentName Field Functions 
      bool hasPaymentDepartmentName() const { return this->paymentDepartmentName_ != nullptr;};
      void deletePaymentDepartmentName() { this->paymentDepartmentName_ = nullptr;};
      inline string getPaymentDepartmentName() const { DARABONBA_PTR_GET_DEFAULT(paymentDepartmentName_, "") };
      inline Module& setPaymentDepartmentName(string paymentDepartmentName) { DARABONBA_PTR_SET_VALUE(paymentDepartmentName_, paymentDepartmentName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusDesc Field Functions 
      bool hasStatusDesc() const { return this->statusDesc_ != nullptr;};
      void deleteStatusDesc() { this->statusDesc_ = nullptr;};
      inline string getStatusDesc() const { DARABONBA_PTR_GET_DEFAULT(statusDesc_, "") };
      inline Module& setStatusDesc(string statusDesc) { DARABONBA_PTR_SET_VALUE(statusDesc_, statusDesc) };


      // thirdpartBusinessId Field Functions 
      bool hasThirdpartBusinessId() const { return this->thirdpartBusinessId_ != nullptr;};
      void deleteThirdpartBusinessId() { this->thirdpartBusinessId_ = nullptr;};
      inline string getThirdpartBusinessId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartBusinessId_, "") };
      inline Module& setThirdpartBusinessId(string thirdpartBusinessId) { DARABONBA_PTR_SET_VALUE(thirdpartBusinessId_, thirdpartBusinessId) };


      // thirdpartId Field Functions 
      bool hasThirdpartId() const { return this->thirdpartId_ != nullptr;};
      void deleteThirdpartId() { this->thirdpartId_ = nullptr;};
      inline string getThirdpartId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartId_, "") };
      inline Module& setThirdpartId(string thirdpartId) { DARABONBA_PTR_SET_VALUE(thirdpartId_, thirdpartId) };


      // togetherBookRule Field Functions 
      bool hasTogetherBookRule() const { return this->togetherBookRule_ != nullptr;};
      void deleteTogetherBookRule() { this->togetherBookRule_ = nullptr;};
      inline int32_t getTogetherBookRule() const { DARABONBA_PTR_GET_DEFAULT(togetherBookRule_, 0) };
      inline Module& setTogetherBookRule(int32_t togetherBookRule) { DARABONBA_PTR_SET_VALUE(togetherBookRule_, togetherBookRule) };


      // trainBudget Field Functions 
      bool hasTrainBudget() const { return this->trainBudget_ != nullptr;};
      void deleteTrainBudget() { this->trainBudget_ = nullptr;};
      inline int64_t getTrainBudget() const { DARABONBA_PTR_GET_DEFAULT(trainBudget_, 0L) };
      inline Module& setTrainBudget(int64_t trainBudget) { DARABONBA_PTR_SET_VALUE(trainBudget_, trainBudget) };


      // travelerList Field Functions 
      bool hasTravelerList() const { return this->travelerList_ != nullptr;};
      void deleteTravelerList() { this->travelerList_ = nullptr;};
      inline const vector<Module::TravelerList> & getTravelerList() const { DARABONBA_PTR_GET_CONST(travelerList_, vector<Module::TravelerList>) };
      inline vector<Module::TravelerList> getTravelerList() { DARABONBA_PTR_GET(travelerList_, vector<Module::TravelerList>) };
      inline Module& setTravelerList(const vector<Module::TravelerList> & travelerList) { DARABONBA_PTR_SET_VALUE(travelerList_, travelerList) };
      inline Module& setTravelerList(vector<Module::TravelerList> && travelerList) { DARABONBA_PTR_SET_RVALUE(travelerList_, travelerList) };


      // tripCause Field Functions 
      bool hasTripCause() const { return this->tripCause_ != nullptr;};
      void deleteTripCause() { this->tripCause_ = nullptr;};
      inline string getTripCause() const { DARABONBA_PTR_GET_DEFAULT(tripCause_, "") };
      inline Module& setTripCause(string tripCause) { DARABONBA_PTR_SET_VALUE(tripCause_, tripCause) };


      // tripDay Field Functions 
      bool hasTripDay() const { return this->tripDay_ != nullptr;};
      void deleteTripDay() { this->tripDay_ = nullptr;};
      inline int32_t getTripDay() const { DARABONBA_PTR_GET_DEFAULT(tripDay_, 0) };
      inline Module& setTripDay(int32_t tripDay) { DARABONBA_PTR_SET_VALUE(tripDay_, tripDay) };


      // tripTitle Field Functions 
      bool hasTripTitle() const { return this->tripTitle_ != nullptr;};
      void deleteTripTitle() { this->tripTitle_ = nullptr;};
      inline string getTripTitle() const { DARABONBA_PTR_GET_DEFAULT(tripTitle_, "") };
      inline Module& setTripTitle(string tripTitle) { DARABONBA_PTR_SET_VALUE(tripTitle_, tripTitle) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
      inline Module& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // unionNo Field Functions 
      bool hasUnionNo() const { return this->unionNo_ != nullptr;};
      void deleteUnionNo() { this->unionNo_ = nullptr;};
      inline string getUnionNo() const { DARABONBA_PTR_GET_DEFAULT(unionNo_, "") };
      inline Module& setUnionNo(string unionNo) { DARABONBA_PTR_SET_VALUE(unionNo_, unionNo) };


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


      // vehicleBudget Field Functions 
      bool hasVehicleBudget() const { return this->vehicleBudget_ != nullptr;};
      void deleteVehicleBudget() { this->vehicleBudget_ = nullptr;};
      inline int64_t getVehicleBudget() const { DARABONBA_PTR_GET_DEFAULT(vehicleBudget_, 0L) };
      inline Module& setVehicleBudget(int64_t vehicleBudget) { DARABONBA_PTR_SET_VALUE(vehicleBudget_, vehicleBudget) };


    protected:
      shared_ptr<string> applyShowId_ {};
      shared_ptr<vector<Module::ApproverList>> approverList_ {};
      shared_ptr<int64_t> budget_ {};
      shared_ptr<int32_t> budgetMerge_ {};
      shared_ptr<Module::CarRule> carRule_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> corpName_ {};
      shared_ptr<string> departId_ {};
      shared_ptr<string> departName_ {};
      // 补充描述，账单中将会体现此字段的值。可以用于企业的统计和对账
      shared_ptr<string> extendField_ {};
      shared_ptr<vector<Module::ExternalTravelerList>> externalTravelerList_ {};
      shared_ptr<int64_t> flightBudget_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<int64_t> hotelBudget_ {};
      shared_ptr<Module::HotelShare> hotelShare_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<int64_t> intlFlightBudget_ {};
      shared_ptr<int64_t> intlHotelBudget_ {};
      shared_ptr<vector<Module::ItineraryList>> itineraryList_ {};
      shared_ptr<int32_t> itineraryRule_ {};
      shared_ptr<vector<Module::ItinerarySetList>> itinerarySetList_ {};
      shared_ptr<string> jobNo_ {};
      shared_ptr<int32_t> limitTraveler_ {};
      shared_ptr<int64_t> mealBudget_ {};
      shared_ptr<string> paymentDepartmentId_ {};
      shared_ptr<string> paymentDepartmentName_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> statusDesc_ {};
      shared_ptr<string> thirdpartBusinessId_ {};
      shared_ptr<string> thirdpartId_ {};
      shared_ptr<int32_t> togetherBookRule_ {};
      shared_ptr<int64_t> trainBudget_ {};
      shared_ptr<vector<Module::TravelerList>> travelerList_ {};
      shared_ptr<string> tripCause_ {};
      shared_ptr<int32_t> tripDay_ {};
      shared_ptr<string> tripTitle_ {};
      shared_ptr<int32_t> type_ {};
      shared_ptr<string> unionNo_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
      shared_ptr<int64_t> vehicleBudget_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const ApplyQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, ApplyQueryResponseBody::Module) };
    inline ApplyQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, ApplyQueryResponseBody::Module) };
    inline ApplyQueryResponseBody& setModule(const ApplyQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline ApplyQueryResponseBody& setModule(ApplyQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ApplyQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
