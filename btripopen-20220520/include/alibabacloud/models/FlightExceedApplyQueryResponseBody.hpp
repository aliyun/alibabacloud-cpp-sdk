// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTEXCEEDAPPLYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTEXCEEDAPPLYQUERYRESPONSEBODY_HPP_
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
  class FlightExceedApplyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightExceedApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightExceedApplyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightExceedApplyQueryResponseBody() = default ;
    FlightExceedApplyQueryResponseBody(const FlightExceedApplyQueryResponseBody &) = default ;
    FlightExceedApplyQueryResponseBody(FlightExceedApplyQueryResponseBody &&) = default ;
    FlightExceedApplyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightExceedApplyQueryResponseBody() = default ;
    FlightExceedApplyQueryResponseBody& operator=(const FlightExceedApplyQueryResponseBody &) = default ;
    FlightExceedApplyQueryResponseBody& operator=(FlightExceedApplyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(apply_id, applyId_);
        DARABONBA_PTR_TO_JSON(apply_intention_info_do, applyIntentionInfoDo_);
        DARABONBA_PTR_TO_JSON(apply_intention_info_do_list, applyIntentionInfoDoList_);
        DARABONBA_PTR_TO_JSON(apply_recommend_flights, applyRecommendFlights_);
        DARABONBA_PTR_TO_JSON(btrip_cause, btripCause_);
        DARABONBA_PTR_TO_JSON(corp_id, corpId_);
        DARABONBA_PTR_TO_JSON(exceed_reason, exceedReason_);
        DARABONBA_PTR_TO_JSON(exceed_type, exceedType_);
        DARABONBA_PTR_TO_JSON(origin_standard, originStandard_);
        DARABONBA_PTR_TO_JSON(status, status_);
        DARABONBA_PTR_TO_JSON(submit_time, submitTime_);
        DARABONBA_PTR_TO_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_TO_JSON(thirdpart_corp_id, thirdpartCorpId_);
        DARABONBA_PTR_TO_JSON(user_id, userId_);
        DARABONBA_PTR_TO_JSON(user_name, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
        DARABONBA_PTR_FROM_JSON(apply_intention_info_do, applyIntentionInfoDo_);
        DARABONBA_PTR_FROM_JSON(apply_intention_info_do_list, applyIntentionInfoDoList_);
        DARABONBA_PTR_FROM_JSON(apply_recommend_flights, applyRecommendFlights_);
        DARABONBA_PTR_FROM_JSON(btrip_cause, btripCause_);
        DARABONBA_PTR_FROM_JSON(corp_id, corpId_);
        DARABONBA_PTR_FROM_JSON(exceed_reason, exceedReason_);
        DARABONBA_PTR_FROM_JSON(exceed_type, exceedType_);
        DARABONBA_PTR_FROM_JSON(origin_standard, originStandard_);
        DARABONBA_PTR_FROM_JSON(status, status_);
        DARABONBA_PTR_FROM_JSON(submit_time, submitTime_);
        DARABONBA_PTR_FROM_JSON(thirdpart_apply_id, thirdpartApplyId_);
        DARABONBA_PTR_FROM_JSON(thirdpart_corp_id, thirdpartCorpId_);
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
      class ApplyRecommendFlights : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyRecommendFlights& obj) { 
          DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_class_str, cabinClassStr_);
          DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(transfer_airport_name, transferAirportName_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyRecommendFlights& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_str, cabinClassStr_);
          DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(transfer_airport_name, transferAirportName_);
        };
        ApplyRecommendFlights() = default ;
        ApplyRecommendFlights(const ApplyRecommendFlights &) = default ;
        ApplyRecommendFlights(ApplyRecommendFlights &&) = default ;
        ApplyRecommendFlights(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyRecommendFlights() = default ;
        ApplyRecommendFlights& operator=(const ApplyRecommendFlights &) = default ;
        ApplyRecommendFlights& operator=(ApplyRecommendFlights &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrAirportName_ == nullptr
        && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr && this->cabinClassStr_ == nullptr
        && this->depAirportName_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr && this->discount_ == nullptr && this->flightNo_ == nullptr
        && this->price_ == nullptr && this->transferAirportName_ == nullptr; };
        // arrAirportName Field Functions 
        bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
        void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
        inline string getArrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
        inline ApplyRecommendFlights& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline ApplyRecommendFlights& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline ApplyRecommendFlights& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline ApplyRecommendFlights& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline int32_t getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, 0) };
        inline ApplyRecommendFlights& setCabinClass(int32_t cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassStr Field Functions 
        bool hasCabinClassStr() const { return this->cabinClassStr_ != nullptr;};
        void deleteCabinClassStr() { this->cabinClassStr_ = nullptr;};
        inline string getCabinClassStr() const { DARABONBA_PTR_GET_DEFAULT(cabinClassStr_, "") };
        inline ApplyRecommendFlights& setCabinClassStr(string cabinClassStr) { DARABONBA_PTR_SET_VALUE(cabinClassStr_, cabinClassStr) };


        // depAirportName Field Functions 
        bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
        void deleteDepAirportName() { this->depAirportName_ = nullptr;};
        inline string getDepAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
        inline ApplyRecommendFlights& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline ApplyRecommendFlights& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline ApplyRecommendFlights& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
        inline ApplyRecommendFlights& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline ApplyRecommendFlights& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline ApplyRecommendFlights& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // transferAirportName Field Functions 
        bool hasTransferAirportName() const { return this->transferAirportName_ != nullptr;};
        void deleteTransferAirportName() { this->transferAirportName_ = nullptr;};
        inline string getTransferAirportName() const { DARABONBA_PTR_GET_DEFAULT(transferAirportName_, "") };
        inline ApplyRecommendFlights& setTransferAirportName(string transferAirportName) { DARABONBA_PTR_SET_VALUE(transferAirportName_, transferAirportName) };


      protected:
        shared_ptr<string> arrAirportName_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<int32_t> cabinClass_ {};
        shared_ptr<string> cabinClassStr_ {};
        shared_ptr<string> depAirportName_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<string> discount_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<string> transferAirportName_ {};
      };

      class ApplyIntentionInfoDoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyIntentionInfoDoList& obj) { 
          DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_class_str, cabinClassStr_);
          DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyIntentionInfoDoList& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_str, cabinClassStr_);
          DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ApplyIntentionInfoDoList() = default ;
        ApplyIntentionInfoDoList(const ApplyIntentionInfoDoList &) = default ;
        ApplyIntentionInfoDoList(ApplyIntentionInfoDoList &&) = default ;
        ApplyIntentionInfoDoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyIntentionInfoDoList() = default ;
        ApplyIntentionInfoDoList& operator=(const ApplyIntentionInfoDoList &) = default ;
        ApplyIntentionInfoDoList& operator=(ApplyIntentionInfoDoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrAirportName_ == nullptr
        && this->arrCity_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr
        && this->cabinClassStr_ == nullptr && this->depAirportName_ == nullptr && this->depCity_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->discount_ == nullptr && this->flightNo_ == nullptr && this->price_ == nullptr && this->type_ == nullptr; };
        // arrAirportName Field Functions 
        bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
        void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
        inline string getArrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
        inline ApplyIntentionInfoDoList& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline ApplyIntentionInfoDoList& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline ApplyIntentionInfoDoList& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline ApplyIntentionInfoDoList& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline ApplyIntentionInfoDoList& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline int32_t getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, 0) };
        inline ApplyIntentionInfoDoList& setCabinClass(int32_t cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassStr Field Functions 
        bool hasCabinClassStr() const { return this->cabinClassStr_ != nullptr;};
        void deleteCabinClassStr() { this->cabinClassStr_ = nullptr;};
        inline string getCabinClassStr() const { DARABONBA_PTR_GET_DEFAULT(cabinClassStr_, "") };
        inline ApplyIntentionInfoDoList& setCabinClassStr(string cabinClassStr) { DARABONBA_PTR_SET_VALUE(cabinClassStr_, cabinClassStr) };


        // depAirportName Field Functions 
        bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
        void deleteDepAirportName() { this->depAirportName_ = nullptr;};
        inline string getDepAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
        inline ApplyIntentionInfoDoList& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline ApplyIntentionInfoDoList& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline ApplyIntentionInfoDoList& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline ApplyIntentionInfoDoList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
        inline ApplyIntentionInfoDoList& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline ApplyIntentionInfoDoList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline ApplyIntentionInfoDoList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline ApplyIntentionInfoDoList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> arrAirportName_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<int32_t> cabinClass_ {};
        shared_ptr<string> cabinClassStr_ {};
        shared_ptr<string> depAirportName_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<string> discount_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<int32_t> type_ {};
      };

      class ApplyIntentionInfoDo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApplyIntentionInfoDo& obj) { 
          DARABONBA_PTR_TO_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
          DARABONBA_PTR_TO_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
          DARABONBA_PTR_TO_JSON(cabin, cabin_);
          DARABONBA_PTR_TO_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_TO_JSON(cabin_class_str, cabinClassStr_);
          DARABONBA_PTR_TO_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_TO_JSON(dep_city, depCity_);
          DARABONBA_PTR_TO_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(discount, discount_);
          DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
          DARABONBA_PTR_TO_JSON(price, price_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ApplyIntentionInfoDo& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_airport_name, arrAirportName_);
          DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
          DARABONBA_PTR_FROM_JSON(arr_city_name, arrCityName_);
          DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
          DARABONBA_PTR_FROM_JSON(cabin, cabin_);
          DARABONBA_PTR_FROM_JSON(cabin_class, cabinClass_);
          DARABONBA_PTR_FROM_JSON(cabin_class_str, cabinClassStr_);
          DARABONBA_PTR_FROM_JSON(dep_airport_name, depAirportName_);
          DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
          DARABONBA_PTR_FROM_JSON(dep_city_name, depCityName_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(discount, discount_);
          DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
          DARABONBA_PTR_FROM_JSON(price, price_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ApplyIntentionInfoDo() = default ;
        ApplyIntentionInfoDo(const ApplyIntentionInfoDo &) = default ;
        ApplyIntentionInfoDo(ApplyIntentionInfoDo &&) = default ;
        ApplyIntentionInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApplyIntentionInfoDo() = default ;
        ApplyIntentionInfoDo& operator=(const ApplyIntentionInfoDo &) = default ;
        ApplyIntentionInfoDo& operator=(ApplyIntentionInfoDo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arrAirportName_ == nullptr
        && this->arrCity_ == nullptr && this->arrCityName_ == nullptr && this->arrTime_ == nullptr && this->cabin_ == nullptr && this->cabinClass_ == nullptr
        && this->cabinClassStr_ == nullptr && this->depAirportName_ == nullptr && this->depCity_ == nullptr && this->depCityName_ == nullptr && this->depTime_ == nullptr
        && this->discount_ == nullptr && this->flightNo_ == nullptr && this->price_ == nullptr && this->type_ == nullptr; };
        // arrAirportName Field Functions 
        bool hasArrAirportName() const { return this->arrAirportName_ != nullptr;};
        void deleteArrAirportName() { this->arrAirportName_ = nullptr;};
        inline string getArrAirportName() const { DARABONBA_PTR_GET_DEFAULT(arrAirportName_, "") };
        inline ApplyIntentionInfoDo& setArrAirportName(string arrAirportName) { DARABONBA_PTR_SET_VALUE(arrAirportName_, arrAirportName) };


        // arrCity Field Functions 
        bool hasArrCity() const { return this->arrCity_ != nullptr;};
        void deleteArrCity() { this->arrCity_ = nullptr;};
        inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
        inline ApplyIntentionInfoDo& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


        // arrCityName Field Functions 
        bool hasArrCityName() const { return this->arrCityName_ != nullptr;};
        void deleteArrCityName() { this->arrCityName_ = nullptr;};
        inline string getArrCityName() const { DARABONBA_PTR_GET_DEFAULT(arrCityName_, "") };
        inline ApplyIntentionInfoDo& setArrCityName(string arrCityName) { DARABONBA_PTR_SET_VALUE(arrCityName_, arrCityName) };


        // arrTime Field Functions 
        bool hasArrTime() const { return this->arrTime_ != nullptr;};
        void deleteArrTime() { this->arrTime_ = nullptr;};
        inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
        inline ApplyIntentionInfoDo& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


        // cabin Field Functions 
        bool hasCabin() const { return this->cabin_ != nullptr;};
        void deleteCabin() { this->cabin_ = nullptr;};
        inline string getCabin() const { DARABONBA_PTR_GET_DEFAULT(cabin_, "") };
        inline ApplyIntentionInfoDo& setCabin(string cabin) { DARABONBA_PTR_SET_VALUE(cabin_, cabin) };


        // cabinClass Field Functions 
        bool hasCabinClass() const { return this->cabinClass_ != nullptr;};
        void deleteCabinClass() { this->cabinClass_ = nullptr;};
        inline int32_t getCabinClass() const { DARABONBA_PTR_GET_DEFAULT(cabinClass_, 0) };
        inline ApplyIntentionInfoDo& setCabinClass(int32_t cabinClass) { DARABONBA_PTR_SET_VALUE(cabinClass_, cabinClass) };


        // cabinClassStr Field Functions 
        bool hasCabinClassStr() const { return this->cabinClassStr_ != nullptr;};
        void deleteCabinClassStr() { this->cabinClassStr_ = nullptr;};
        inline string getCabinClassStr() const { DARABONBA_PTR_GET_DEFAULT(cabinClassStr_, "") };
        inline ApplyIntentionInfoDo& setCabinClassStr(string cabinClassStr) { DARABONBA_PTR_SET_VALUE(cabinClassStr_, cabinClassStr) };


        // depAirportName Field Functions 
        bool hasDepAirportName() const { return this->depAirportName_ != nullptr;};
        void deleteDepAirportName() { this->depAirportName_ = nullptr;};
        inline string getDepAirportName() const { DARABONBA_PTR_GET_DEFAULT(depAirportName_, "") };
        inline ApplyIntentionInfoDo& setDepAirportName(string depAirportName) { DARABONBA_PTR_SET_VALUE(depAirportName_, depAirportName) };


        // depCity Field Functions 
        bool hasDepCity() const { return this->depCity_ != nullptr;};
        void deleteDepCity() { this->depCity_ = nullptr;};
        inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
        inline ApplyIntentionInfoDo& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


        // depCityName Field Functions 
        bool hasDepCityName() const { return this->depCityName_ != nullptr;};
        void deleteDepCityName() { this->depCityName_ = nullptr;};
        inline string getDepCityName() const { DARABONBA_PTR_GET_DEFAULT(depCityName_, "") };
        inline ApplyIntentionInfoDo& setDepCityName(string depCityName) { DARABONBA_PTR_SET_VALUE(depCityName_, depCityName) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline ApplyIntentionInfoDo& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // discount Field Functions 
        bool hasDiscount() const { return this->discount_ != nullptr;};
        void deleteDiscount() { this->discount_ = nullptr;};
        inline string getDiscount() const { DARABONBA_PTR_GET_DEFAULT(discount_, "") };
        inline ApplyIntentionInfoDo& setDiscount(string discount) { DARABONBA_PTR_SET_VALUE(discount_, discount) };


        // flightNo Field Functions 
        bool hasFlightNo() const { return this->flightNo_ != nullptr;};
        void deleteFlightNo() { this->flightNo_ = nullptr;};
        inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
        inline ApplyIntentionInfoDo& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
        inline ApplyIntentionInfoDo& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
        inline ApplyIntentionInfoDo& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> arrAirportName_ {};
        shared_ptr<string> arrCity_ {};
        shared_ptr<string> arrCityName_ {};
        shared_ptr<string> arrTime_ {};
        shared_ptr<string> cabin_ {};
        shared_ptr<int32_t> cabinClass_ {};
        shared_ptr<string> cabinClassStr_ {};
        shared_ptr<string> depAirportName_ {};
        shared_ptr<string> depCity_ {};
        shared_ptr<string> depCityName_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<string> discount_ {};
        shared_ptr<string> flightNo_ {};
        shared_ptr<int64_t> price_ {};
        shared_ptr<int32_t> type_ {};
      };

      virtual bool empty() const override { return this->applyId_ == nullptr
        && this->applyIntentionInfoDo_ == nullptr && this->applyIntentionInfoDoList_ == nullptr && this->applyRecommendFlights_ == nullptr && this->btripCause_ == nullptr && this->corpId_ == nullptr
        && this->exceedReason_ == nullptr && this->exceedType_ == nullptr && this->originStandard_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr
        && this->thirdpartApplyId_ == nullptr && this->thirdpartCorpId_ == nullptr && this->userId_ == nullptr && this->userName_ == nullptr; };
      // applyId Field Functions 
      bool hasApplyId() const { return this->applyId_ != nullptr;};
      void deleteApplyId() { this->applyId_ = nullptr;};
      inline int64_t getApplyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, 0L) };
      inline Module& setApplyId(int64_t applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


      // applyIntentionInfoDo Field Functions 
      bool hasApplyIntentionInfoDo() const { return this->applyIntentionInfoDo_ != nullptr;};
      void deleteApplyIntentionInfoDo() { this->applyIntentionInfoDo_ = nullptr;};
      inline const Module::ApplyIntentionInfoDo & getApplyIntentionInfoDo() const { DARABONBA_PTR_GET_CONST(applyIntentionInfoDo_, Module::ApplyIntentionInfoDo) };
      inline Module::ApplyIntentionInfoDo getApplyIntentionInfoDo() { DARABONBA_PTR_GET(applyIntentionInfoDo_, Module::ApplyIntentionInfoDo) };
      inline Module& setApplyIntentionInfoDo(const Module::ApplyIntentionInfoDo & applyIntentionInfoDo) { DARABONBA_PTR_SET_VALUE(applyIntentionInfoDo_, applyIntentionInfoDo) };
      inline Module& setApplyIntentionInfoDo(Module::ApplyIntentionInfoDo && applyIntentionInfoDo) { DARABONBA_PTR_SET_RVALUE(applyIntentionInfoDo_, applyIntentionInfoDo) };


      // applyIntentionInfoDoList Field Functions 
      bool hasApplyIntentionInfoDoList() const { return this->applyIntentionInfoDoList_ != nullptr;};
      void deleteApplyIntentionInfoDoList() { this->applyIntentionInfoDoList_ = nullptr;};
      inline const vector<Module::ApplyIntentionInfoDoList> & getApplyIntentionInfoDoList() const { DARABONBA_PTR_GET_CONST(applyIntentionInfoDoList_, vector<Module::ApplyIntentionInfoDoList>) };
      inline vector<Module::ApplyIntentionInfoDoList> getApplyIntentionInfoDoList() { DARABONBA_PTR_GET(applyIntentionInfoDoList_, vector<Module::ApplyIntentionInfoDoList>) };
      inline Module& setApplyIntentionInfoDoList(const vector<Module::ApplyIntentionInfoDoList> & applyIntentionInfoDoList) { DARABONBA_PTR_SET_VALUE(applyIntentionInfoDoList_, applyIntentionInfoDoList) };
      inline Module& setApplyIntentionInfoDoList(vector<Module::ApplyIntentionInfoDoList> && applyIntentionInfoDoList) { DARABONBA_PTR_SET_RVALUE(applyIntentionInfoDoList_, applyIntentionInfoDoList) };


      // applyRecommendFlights Field Functions 
      bool hasApplyRecommendFlights() const { return this->applyRecommendFlights_ != nullptr;};
      void deleteApplyRecommendFlights() { this->applyRecommendFlights_ = nullptr;};
      inline const Module::ApplyRecommendFlights & getApplyRecommendFlights() const { DARABONBA_PTR_GET_CONST(applyRecommendFlights_, Module::ApplyRecommendFlights) };
      inline Module::ApplyRecommendFlights getApplyRecommendFlights() { DARABONBA_PTR_GET(applyRecommendFlights_, Module::ApplyRecommendFlights) };
      inline Module& setApplyRecommendFlights(const Module::ApplyRecommendFlights & applyRecommendFlights) { DARABONBA_PTR_SET_VALUE(applyRecommendFlights_, applyRecommendFlights) };
      inline Module& setApplyRecommendFlights(Module::ApplyRecommendFlights && applyRecommendFlights) { DARABONBA_PTR_SET_RVALUE(applyRecommendFlights_, applyRecommendFlights) };


      // btripCause Field Functions 
      bool hasBtripCause() const { return this->btripCause_ != nullptr;};
      void deleteBtripCause() { this->btripCause_ = nullptr;};
      inline string getBtripCause() const { DARABONBA_PTR_GET_DEFAULT(btripCause_, "") };
      inline Module& setBtripCause(string btripCause) { DARABONBA_PTR_SET_VALUE(btripCause_, btripCause) };


      // corpId Field Functions 
      bool hasCorpId() const { return this->corpId_ != nullptr;};
      void deleteCorpId() { this->corpId_ = nullptr;};
      inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
      inline Module& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


      // exceedReason Field Functions 
      bool hasExceedReason() const { return this->exceedReason_ != nullptr;};
      void deleteExceedReason() { this->exceedReason_ = nullptr;};
      inline string getExceedReason() const { DARABONBA_PTR_GET_DEFAULT(exceedReason_, "") };
      inline Module& setExceedReason(string exceedReason) { DARABONBA_PTR_SET_VALUE(exceedReason_, exceedReason) };


      // exceedType Field Functions 
      bool hasExceedType() const { return this->exceedType_ != nullptr;};
      void deleteExceedType() { this->exceedType_ = nullptr;};
      inline int32_t getExceedType() const { DARABONBA_PTR_GET_DEFAULT(exceedType_, 0) };
      inline Module& setExceedType(int32_t exceedType) { DARABONBA_PTR_SET_VALUE(exceedType_, exceedType) };


      // originStandard Field Functions 
      bool hasOriginStandard() const { return this->originStandard_ != nullptr;};
      void deleteOriginStandard() { this->originStandard_ = nullptr;};
      inline string getOriginStandard() const { DARABONBA_PTR_GET_DEFAULT(originStandard_, "") };
      inline Module& setOriginStandard(string originStandard) { DARABONBA_PTR_SET_VALUE(originStandard_, originStandard) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Module& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // submitTime Field Functions 
      bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
      void deleteSubmitTime() { this->submitTime_ = nullptr;};
      inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
      inline Module& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


      // thirdpartApplyId Field Functions 
      bool hasThirdpartApplyId() const { return this->thirdpartApplyId_ != nullptr;};
      void deleteThirdpartApplyId() { this->thirdpartApplyId_ = nullptr;};
      inline string getThirdpartApplyId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartApplyId_, "") };
      inline Module& setThirdpartApplyId(string thirdpartApplyId) { DARABONBA_PTR_SET_VALUE(thirdpartApplyId_, thirdpartApplyId) };


      // thirdpartCorpId Field Functions 
      bool hasThirdpartCorpId() const { return this->thirdpartCorpId_ != nullptr;};
      void deleteThirdpartCorpId() { this->thirdpartCorpId_ = nullptr;};
      inline string getThirdpartCorpId() const { DARABONBA_PTR_GET_DEFAULT(thirdpartCorpId_, "") };
      inline Module& setThirdpartCorpId(string thirdpartCorpId) { DARABONBA_PTR_SET_VALUE(thirdpartCorpId_, thirdpartCorpId) };


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
      shared_ptr<Module::ApplyIntentionInfoDo> applyIntentionInfoDo_ {};
      shared_ptr<vector<Module::ApplyIntentionInfoDoList>> applyIntentionInfoDoList_ {};
      shared_ptr<Module::ApplyRecommendFlights> applyRecommendFlights_ {};
      shared_ptr<string> btripCause_ {};
      shared_ptr<string> corpId_ {};
      shared_ptr<string> exceedReason_ {};
      shared_ptr<int32_t> exceedType_ {};
      shared_ptr<string> originStandard_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> submitTime_ {};
      shared_ptr<string> thirdpartApplyId_ {};
      shared_ptr<string> thirdpartCorpId_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightExceedApplyQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightExceedApplyQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightExceedApplyQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightExceedApplyQueryResponseBody::Module) };
    inline FlightExceedApplyQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightExceedApplyQueryResponseBody::Module) };
    inline FlightExceedApplyQueryResponseBody& setModule(const FlightExceedApplyQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightExceedApplyQueryResponseBody& setModule(FlightExceedApplyQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightExceedApplyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightExceedApplyQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightExceedApplyQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightExceedApplyQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
