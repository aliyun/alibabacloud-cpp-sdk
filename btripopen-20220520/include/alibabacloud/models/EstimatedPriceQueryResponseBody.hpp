// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ESTIMATEDPRICEQUERYRESPONSEBODY_HPP_
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
  class EstimatedPriceQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EstimatedPriceQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, EstimatedPriceQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    EstimatedPriceQueryResponseBody() = default ;
    EstimatedPriceQueryResponseBody(const EstimatedPriceQueryResponseBody &) = default ;
    EstimatedPriceQueryResponseBody(EstimatedPriceQueryResponseBody &&) = default ;
    EstimatedPriceQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EstimatedPriceQueryResponseBody() = default ;
    EstimatedPriceQueryResponseBody& operator=(const EstimatedPriceQueryResponseBody &) = default ;
    EstimatedPriceQueryResponseBody& operator=(EstimatedPriceQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(hotel_fee_detail, hotelFeeDetail_);
        DARABONBA_PTR_TO_JSON(total_hotel_fee, totalHotelFee_);
        DARABONBA_PTR_TO_JSON(traffic_fee, trafficFee_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(hotel_fee_detail, hotelFeeDetail_);
        DARABONBA_PTR_FROM_JSON(total_hotel_fee, totalHotelFee_);
        DARABONBA_PTR_FROM_JSON(traffic_fee, trafficFee_);
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
      class TrafficFee : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrafficFee& obj) { 
          DARABONBA_PTR_TO_JSON(btrip_routes, btripRoutes_);
          DARABONBA_PTR_TO_JSON(err_msg, errMsg_);
          DARABONBA_PTR_TO_JSON(max_fee, maxFee_);
          DARABONBA_PTR_TO_JSON(min_fee, minFee_);
          DARABONBA_PTR_TO_JSON(success, success_);
        };
        friend void from_json(const Darabonba::Json& j, TrafficFee& obj) { 
          DARABONBA_PTR_FROM_JSON(btrip_routes, btripRoutes_);
          DARABONBA_PTR_FROM_JSON(err_msg, errMsg_);
          DARABONBA_PTR_FROM_JSON(max_fee, maxFee_);
          DARABONBA_PTR_FROM_JSON(min_fee, minFee_);
          DARABONBA_PTR_FROM_JSON(success, success_);
        };
        TrafficFee() = default ;
        TrafficFee(const TrafficFee &) = default ;
        TrafficFee(TrafficFee &&) = default ;
        TrafficFee(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrafficFee() = default ;
        TrafficFee& operator=(const TrafficFee &) = default ;
        TrafficFee& operator=(TrafficFee &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class BtripRoutes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BtripRoutes& obj) { 
            DARABONBA_PTR_TO_JSON(arr_city, arrCity_);
            DARABONBA_PTR_TO_JSON(arr_date, arrDate_);
            DARABONBA_PTR_TO_JSON(cheapest, cheapest_);
            DARABONBA_PTR_TO_JSON(dep_city, depCity_);
            DARABONBA_PTR_TO_JSON(dep_date, depDate_);
            DARABONBA_PTR_TO_JSON(err_msg, errMsg_);
            DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
            DARABONBA_PTR_TO_JSON(most_expensive, mostExpensive_);
            DARABONBA_PTR_TO_JSON(success, success_);
          };
          friend void from_json(const Darabonba::Json& j, BtripRoutes& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_city, arrCity_);
            DARABONBA_PTR_FROM_JSON(arr_date, arrDate_);
            DARABONBA_PTR_FROM_JSON(cheapest, cheapest_);
            DARABONBA_PTR_FROM_JSON(dep_city, depCity_);
            DARABONBA_PTR_FROM_JSON(dep_date, depDate_);
            DARABONBA_PTR_FROM_JSON(err_msg, errMsg_);
            DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
            DARABONBA_PTR_FROM_JSON(most_expensive, mostExpensive_);
            DARABONBA_PTR_FROM_JSON(success, success_);
          };
          BtripRoutes() = default ;
          BtripRoutes(const BtripRoutes &) = default ;
          BtripRoutes(BtripRoutes &&) = default ;
          BtripRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BtripRoutes() = default ;
          BtripRoutes& operator=(const BtripRoutes &) = default ;
          BtripRoutes& operator=(BtripRoutes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class MostExpensive : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const MostExpensive& obj) { 
              DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
              DARABONBA_PTR_TO_JSON(dep_time, depTime_);
              DARABONBA_PTR_TO_JSON(fee, fee_);
              DARABONBA_PTR_TO_JSON(seat_grade, seatGrade_);
              DARABONBA_PTR_TO_JSON(vehicle_no, vehicleNo_);
            };
            friend void from_json(const Darabonba::Json& j, MostExpensive& obj) { 
              DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
              DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
              DARABONBA_PTR_FROM_JSON(fee, fee_);
              DARABONBA_PTR_FROM_JSON(seat_grade, seatGrade_);
              DARABONBA_PTR_FROM_JSON(vehicle_no, vehicleNo_);
            };
            MostExpensive() = default ;
            MostExpensive(const MostExpensive &) = default ;
            MostExpensive(MostExpensive &&) = default ;
            MostExpensive(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~MostExpensive() = default ;
            MostExpensive& operator=(const MostExpensive &) = default ;
            MostExpensive& operator=(MostExpensive &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->arrTime_ == nullptr
        && this->depTime_ == nullptr && this->fee_ == nullptr && this->seatGrade_ == nullptr && this->vehicleNo_ == nullptr; };
            // arrTime Field Functions 
            bool hasArrTime() const { return this->arrTime_ != nullptr;};
            void deleteArrTime() { this->arrTime_ = nullptr;};
            inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
            inline MostExpensive& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


            // depTime Field Functions 
            bool hasDepTime() const { return this->depTime_ != nullptr;};
            void deleteDepTime() { this->depTime_ = nullptr;};
            inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
            inline MostExpensive& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


            // fee Field Functions 
            bool hasFee() const { return this->fee_ != nullptr;};
            void deleteFee() { this->fee_ = nullptr;};
            inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
            inline MostExpensive& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


            // seatGrade Field Functions 
            bool hasSeatGrade() const { return this->seatGrade_ != nullptr;};
            void deleteSeatGrade() { this->seatGrade_ = nullptr;};
            inline string getSeatGrade() const { DARABONBA_PTR_GET_DEFAULT(seatGrade_, "") };
            inline MostExpensive& setSeatGrade(string seatGrade) { DARABONBA_PTR_SET_VALUE(seatGrade_, seatGrade) };


            // vehicleNo Field Functions 
            bool hasVehicleNo() const { return this->vehicleNo_ != nullptr;};
            void deleteVehicleNo() { this->vehicleNo_ = nullptr;};
            inline string getVehicleNo() const { DARABONBA_PTR_GET_DEFAULT(vehicleNo_, "") };
            inline MostExpensive& setVehicleNo(string vehicleNo) { DARABONBA_PTR_SET_VALUE(vehicleNo_, vehicleNo) };


          protected:
            shared_ptr<string> arrTime_ {};
            shared_ptr<string> depTime_ {};
            shared_ptr<int64_t> fee_ {};
            shared_ptr<string> seatGrade_ {};
            shared_ptr<string> vehicleNo_ {};
          };

          class Cheapest : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Cheapest& obj) { 
              DARABONBA_PTR_TO_JSON(arr_time, arrTime_);
              DARABONBA_PTR_TO_JSON(dep_time, depTime_);
              DARABONBA_PTR_TO_JSON(fee, fee_);
              DARABONBA_PTR_TO_JSON(seat_grade, seatGrade_);
              DARABONBA_PTR_TO_JSON(vehicle_no, vehicleNo_);
            };
            friend void from_json(const Darabonba::Json& j, Cheapest& obj) { 
              DARABONBA_PTR_FROM_JSON(arr_time, arrTime_);
              DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
              DARABONBA_PTR_FROM_JSON(fee, fee_);
              DARABONBA_PTR_FROM_JSON(seat_grade, seatGrade_);
              DARABONBA_PTR_FROM_JSON(vehicle_no, vehicleNo_);
            };
            Cheapest() = default ;
            Cheapest(const Cheapest &) = default ;
            Cheapest(Cheapest &&) = default ;
            Cheapest(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Cheapest() = default ;
            Cheapest& operator=(const Cheapest &) = default ;
            Cheapest& operator=(Cheapest &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->arrTime_ == nullptr
        && this->depTime_ == nullptr && this->fee_ == nullptr && this->seatGrade_ == nullptr && this->vehicleNo_ == nullptr; };
            // arrTime Field Functions 
            bool hasArrTime() const { return this->arrTime_ != nullptr;};
            void deleteArrTime() { this->arrTime_ = nullptr;};
            inline string getArrTime() const { DARABONBA_PTR_GET_DEFAULT(arrTime_, "") };
            inline Cheapest& setArrTime(string arrTime) { DARABONBA_PTR_SET_VALUE(arrTime_, arrTime) };


            // depTime Field Functions 
            bool hasDepTime() const { return this->depTime_ != nullptr;};
            void deleteDepTime() { this->depTime_ = nullptr;};
            inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
            inline Cheapest& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


            // fee Field Functions 
            bool hasFee() const { return this->fee_ != nullptr;};
            void deleteFee() { this->fee_ = nullptr;};
            inline int64_t getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0L) };
            inline Cheapest& setFee(int64_t fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


            // seatGrade Field Functions 
            bool hasSeatGrade() const { return this->seatGrade_ != nullptr;};
            void deleteSeatGrade() { this->seatGrade_ = nullptr;};
            inline string getSeatGrade() const { DARABONBA_PTR_GET_DEFAULT(seatGrade_, "") };
            inline Cheapest& setSeatGrade(string seatGrade) { DARABONBA_PTR_SET_VALUE(seatGrade_, seatGrade) };


            // vehicleNo Field Functions 
            bool hasVehicleNo() const { return this->vehicleNo_ != nullptr;};
            void deleteVehicleNo() { this->vehicleNo_ = nullptr;};
            inline string getVehicleNo() const { DARABONBA_PTR_GET_DEFAULT(vehicleNo_, "") };
            inline Cheapest& setVehicleNo(string vehicleNo) { DARABONBA_PTR_SET_VALUE(vehicleNo_, vehicleNo) };


          protected:
            shared_ptr<string> arrTime_ {};
            shared_ptr<string> depTime_ {};
            shared_ptr<int64_t> fee_ {};
            shared_ptr<string> seatGrade_ {};
            shared_ptr<string> vehicleNo_ {};
          };

          virtual bool empty() const override { return this->arrCity_ == nullptr
        && this->arrDate_ == nullptr && this->cheapest_ == nullptr && this->depCity_ == nullptr && this->depDate_ == nullptr && this->errMsg_ == nullptr
        && this->itineraryId_ == nullptr && this->mostExpensive_ == nullptr && this->success_ == nullptr; };
          // arrCity Field Functions 
          bool hasArrCity() const { return this->arrCity_ != nullptr;};
          void deleteArrCity() { this->arrCity_ = nullptr;};
          inline string getArrCity() const { DARABONBA_PTR_GET_DEFAULT(arrCity_, "") };
          inline BtripRoutes& setArrCity(string arrCity) { DARABONBA_PTR_SET_VALUE(arrCity_, arrCity) };


          // arrDate Field Functions 
          bool hasArrDate() const { return this->arrDate_ != nullptr;};
          void deleteArrDate() { this->arrDate_ = nullptr;};
          inline int64_t getArrDate() const { DARABONBA_PTR_GET_DEFAULT(arrDate_, 0L) };
          inline BtripRoutes& setArrDate(int64_t arrDate) { DARABONBA_PTR_SET_VALUE(arrDate_, arrDate) };


          // cheapest Field Functions 
          bool hasCheapest() const { return this->cheapest_ != nullptr;};
          void deleteCheapest() { this->cheapest_ = nullptr;};
          inline const BtripRoutes::Cheapest & getCheapest() const { DARABONBA_PTR_GET_CONST(cheapest_, BtripRoutes::Cheapest) };
          inline BtripRoutes::Cheapest getCheapest() { DARABONBA_PTR_GET(cheapest_, BtripRoutes::Cheapest) };
          inline BtripRoutes& setCheapest(const BtripRoutes::Cheapest & cheapest) { DARABONBA_PTR_SET_VALUE(cheapest_, cheapest) };
          inline BtripRoutes& setCheapest(BtripRoutes::Cheapest && cheapest) { DARABONBA_PTR_SET_RVALUE(cheapest_, cheapest) };


          // depCity Field Functions 
          bool hasDepCity() const { return this->depCity_ != nullptr;};
          void deleteDepCity() { this->depCity_ = nullptr;};
          inline string getDepCity() const { DARABONBA_PTR_GET_DEFAULT(depCity_, "") };
          inline BtripRoutes& setDepCity(string depCity) { DARABONBA_PTR_SET_VALUE(depCity_, depCity) };


          // depDate Field Functions 
          bool hasDepDate() const { return this->depDate_ != nullptr;};
          void deleteDepDate() { this->depDate_ = nullptr;};
          inline int64_t getDepDate() const { DARABONBA_PTR_GET_DEFAULT(depDate_, 0L) };
          inline BtripRoutes& setDepDate(int64_t depDate) { DARABONBA_PTR_SET_VALUE(depDate_, depDate) };


          // errMsg Field Functions 
          bool hasErrMsg() const { return this->errMsg_ != nullptr;};
          void deleteErrMsg() { this->errMsg_ = nullptr;};
          inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
          inline BtripRoutes& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


          // itineraryId Field Functions 
          bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
          void deleteItineraryId() { this->itineraryId_ = nullptr;};
          inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
          inline BtripRoutes& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


          // mostExpensive Field Functions 
          bool hasMostExpensive() const { return this->mostExpensive_ != nullptr;};
          void deleteMostExpensive() { this->mostExpensive_ = nullptr;};
          inline const BtripRoutes::MostExpensive & getMostExpensive() const { DARABONBA_PTR_GET_CONST(mostExpensive_, BtripRoutes::MostExpensive) };
          inline BtripRoutes::MostExpensive getMostExpensive() { DARABONBA_PTR_GET(mostExpensive_, BtripRoutes::MostExpensive) };
          inline BtripRoutes& setMostExpensive(const BtripRoutes::MostExpensive & mostExpensive) { DARABONBA_PTR_SET_VALUE(mostExpensive_, mostExpensive) };
          inline BtripRoutes& setMostExpensive(BtripRoutes::MostExpensive && mostExpensive) { DARABONBA_PTR_SET_RVALUE(mostExpensive_, mostExpensive) };


          // success Field Functions 
          bool hasSuccess() const { return this->success_ != nullptr;};
          void deleteSuccess() { this->success_ = nullptr;};
          inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
          inline BtripRoutes& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


        protected:
          shared_ptr<string> arrCity_ {};
          shared_ptr<int64_t> arrDate_ {};
          shared_ptr<BtripRoutes::Cheapest> cheapest_ {};
          shared_ptr<string> depCity_ {};
          shared_ptr<int64_t> depDate_ {};
          shared_ptr<string> errMsg_ {};
          shared_ptr<string> itineraryId_ {};
          shared_ptr<BtripRoutes::MostExpensive> mostExpensive_ {};
          shared_ptr<bool> success_ {};
        };

        virtual bool empty() const override { return this->btripRoutes_ == nullptr
        && this->errMsg_ == nullptr && this->maxFee_ == nullptr && this->minFee_ == nullptr && this->success_ == nullptr; };
        // btripRoutes Field Functions 
        bool hasBtripRoutes() const { return this->btripRoutes_ != nullptr;};
        void deleteBtripRoutes() { this->btripRoutes_ = nullptr;};
        inline const vector<TrafficFee::BtripRoutes> & getBtripRoutes() const { DARABONBA_PTR_GET_CONST(btripRoutes_, vector<TrafficFee::BtripRoutes>) };
        inline vector<TrafficFee::BtripRoutes> getBtripRoutes() { DARABONBA_PTR_GET(btripRoutes_, vector<TrafficFee::BtripRoutes>) };
        inline TrafficFee& setBtripRoutes(const vector<TrafficFee::BtripRoutes> & btripRoutes) { DARABONBA_PTR_SET_VALUE(btripRoutes_, btripRoutes) };
        inline TrafficFee& setBtripRoutes(vector<TrafficFee::BtripRoutes> && btripRoutes) { DARABONBA_PTR_SET_RVALUE(btripRoutes_, btripRoutes) };


        // errMsg Field Functions 
        bool hasErrMsg() const { return this->errMsg_ != nullptr;};
        void deleteErrMsg() { this->errMsg_ = nullptr;};
        inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
        inline TrafficFee& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


        // maxFee Field Functions 
        bool hasMaxFee() const { return this->maxFee_ != nullptr;};
        void deleteMaxFee() { this->maxFee_ = nullptr;};
        inline int64_t getMaxFee() const { DARABONBA_PTR_GET_DEFAULT(maxFee_, 0L) };
        inline TrafficFee& setMaxFee(int64_t maxFee) { DARABONBA_PTR_SET_VALUE(maxFee_, maxFee) };


        // minFee Field Functions 
        bool hasMinFee() const { return this->minFee_ != nullptr;};
        void deleteMinFee() { this->minFee_ = nullptr;};
        inline int64_t getMinFee() const { DARABONBA_PTR_GET_DEFAULT(minFee_, 0L) };
        inline TrafficFee& setMinFee(int64_t minFee) { DARABONBA_PTR_SET_VALUE(minFee_, minFee) };


        // success Field Functions 
        bool hasSuccess() const { return this->success_ != nullptr;};
        void deleteSuccess() { this->success_ = nullptr;};
        inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
        inline TrafficFee& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      protected:
        shared_ptr<vector<TrafficFee::BtripRoutes>> btripRoutes_ {};
        shared_ptr<string> errMsg_ {};
        shared_ptr<int64_t> maxFee_ {};
        shared_ptr<int64_t> minFee_ {};
        shared_ptr<bool> success_ {};
      };

      class HotelFeeDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HotelFeeDetail& obj) { 
          DARABONBA_PTR_TO_JSON(city, city_);
          DARABONBA_PTR_TO_JSON(criterion, criterion_);
          DARABONBA_PTR_TO_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_TO_JSON(total, total_);
          DARABONBA_PTR_TO_JSON(trip_days, tripDays_);
        };
        friend void from_json(const Darabonba::Json& j, HotelFeeDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(city, city_);
          DARABONBA_PTR_FROM_JSON(criterion, criterion_);
          DARABONBA_PTR_FROM_JSON(itinerary_id, itineraryId_);
          DARABONBA_PTR_FROM_JSON(total, total_);
          DARABONBA_PTR_FROM_JSON(trip_days, tripDays_);
        };
        HotelFeeDetail() = default ;
        HotelFeeDetail(const HotelFeeDetail &) = default ;
        HotelFeeDetail(HotelFeeDetail &&) = default ;
        HotelFeeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HotelFeeDetail() = default ;
        HotelFeeDetail& operator=(const HotelFeeDetail &) = default ;
        HotelFeeDetail& operator=(HotelFeeDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->city_ == nullptr
        && this->criterion_ == nullptr && this->itineraryId_ == nullptr && this->total_ == nullptr && this->tripDays_ == nullptr; };
        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline HotelFeeDetail& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // criterion Field Functions 
        bool hasCriterion() const { return this->criterion_ != nullptr;};
        void deleteCriterion() { this->criterion_ = nullptr;};
        inline int64_t getCriterion() const { DARABONBA_PTR_GET_DEFAULT(criterion_, 0L) };
        inline HotelFeeDetail& setCriterion(int64_t criterion) { DARABONBA_PTR_SET_VALUE(criterion_, criterion) };


        // itineraryId Field Functions 
        bool hasItineraryId() const { return this->itineraryId_ != nullptr;};
        void deleteItineraryId() { this->itineraryId_ = nullptr;};
        inline string getItineraryId() const { DARABONBA_PTR_GET_DEFAULT(itineraryId_, "") };
        inline HotelFeeDetail& setItineraryId(string itineraryId) { DARABONBA_PTR_SET_VALUE(itineraryId_, itineraryId) };


        // total Field Functions 
        bool hasTotal() const { return this->total_ != nullptr;};
        void deleteTotal() { this->total_ = nullptr;};
        inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
        inline HotelFeeDetail& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        // tripDays Field Functions 
        bool hasTripDays() const { return this->tripDays_ != nullptr;};
        void deleteTripDays() { this->tripDays_ = nullptr;};
        inline int32_t getTripDays() const { DARABONBA_PTR_GET_DEFAULT(tripDays_, 0) };
        inline HotelFeeDetail& setTripDays(int32_t tripDays) { DARABONBA_PTR_SET_VALUE(tripDays_, tripDays) };


      protected:
        shared_ptr<string> city_ {};
        shared_ptr<int64_t> criterion_ {};
        shared_ptr<string> itineraryId_ {};
        shared_ptr<int64_t> total_ {};
        shared_ptr<int32_t> tripDays_ {};
      };

      virtual bool empty() const override { return this->hotelFeeDetail_ == nullptr
        && this->totalHotelFee_ == nullptr && this->trafficFee_ == nullptr; };
      // hotelFeeDetail Field Functions 
      bool hasHotelFeeDetail() const { return this->hotelFeeDetail_ != nullptr;};
      void deleteHotelFeeDetail() { this->hotelFeeDetail_ = nullptr;};
      inline const vector<Module::HotelFeeDetail> & getHotelFeeDetail() const { DARABONBA_PTR_GET_CONST(hotelFeeDetail_, vector<Module::HotelFeeDetail>) };
      inline vector<Module::HotelFeeDetail> getHotelFeeDetail() { DARABONBA_PTR_GET(hotelFeeDetail_, vector<Module::HotelFeeDetail>) };
      inline Module& setHotelFeeDetail(const vector<Module::HotelFeeDetail> & hotelFeeDetail) { DARABONBA_PTR_SET_VALUE(hotelFeeDetail_, hotelFeeDetail) };
      inline Module& setHotelFeeDetail(vector<Module::HotelFeeDetail> && hotelFeeDetail) { DARABONBA_PTR_SET_RVALUE(hotelFeeDetail_, hotelFeeDetail) };


      // totalHotelFee Field Functions 
      bool hasTotalHotelFee() const { return this->totalHotelFee_ != nullptr;};
      void deleteTotalHotelFee() { this->totalHotelFee_ = nullptr;};
      inline int64_t getTotalHotelFee() const { DARABONBA_PTR_GET_DEFAULT(totalHotelFee_, 0L) };
      inline Module& setTotalHotelFee(int64_t totalHotelFee) { DARABONBA_PTR_SET_VALUE(totalHotelFee_, totalHotelFee) };


      // trafficFee Field Functions 
      bool hasTrafficFee() const { return this->trafficFee_ != nullptr;};
      void deleteTrafficFee() { this->trafficFee_ = nullptr;};
      inline const Module::TrafficFee & getTrafficFee() const { DARABONBA_PTR_GET_CONST(trafficFee_, Module::TrafficFee) };
      inline Module::TrafficFee getTrafficFee() { DARABONBA_PTR_GET(trafficFee_, Module::TrafficFee) };
      inline Module& setTrafficFee(const Module::TrafficFee & trafficFee) { DARABONBA_PTR_SET_VALUE(trafficFee_, trafficFee) };
      inline Module& setTrafficFee(Module::TrafficFee && trafficFee) { DARABONBA_PTR_SET_RVALUE(trafficFee_, trafficFee) };


    protected:
      shared_ptr<vector<Module::HotelFeeDetail>> hotelFeeDetail_ {};
      // 酒店费用总额，单位为元
      shared_ptr<int64_t> totalHotelFee_ {};
      shared_ptr<Module::TrafficFee> trafficFee_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline EstimatedPriceQueryResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EstimatedPriceQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const EstimatedPriceQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, EstimatedPriceQueryResponseBody::Module) };
    inline EstimatedPriceQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, EstimatedPriceQueryResponseBody::Module) };
    inline EstimatedPriceQueryResponseBody& setModule(const EstimatedPriceQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline EstimatedPriceQueryResponseBody& setModule(EstimatedPriceQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EstimatedPriceQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline EstimatedPriceQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline EstimatedPriceQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<EstimatedPriceQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
