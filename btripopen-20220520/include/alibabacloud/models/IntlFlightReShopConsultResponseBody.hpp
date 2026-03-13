// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPCONSULTRESPONSEBODY_HPP_
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
  class IntlFlightReShopConsultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopConsultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopConsultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    IntlFlightReShopConsultResponseBody() = default ;
    IntlFlightReShopConsultResponseBody(const IntlFlightReShopConsultResponseBody &) = default ;
    IntlFlightReShopConsultResponseBody(IntlFlightReShopConsultResponseBody &&) = default ;
    IntlFlightReShopConsultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopConsultResponseBody() = default ;
    IntlFlightReShopConsultResponseBody& operator=(const IntlFlightReShopConsultResponseBody &) = default ;
    IntlFlightReShopConsultResponseBody& operator=(IntlFlightReShopConsultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(passenger_journey_group_info_list, passengerJourneyGroupInfoList_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(passenger_journey_group_info_list, passengerJourneyGroupInfoList_);
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
      class PassengerJourneyGroupInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PassengerJourneyGroupInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
          DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_TO_JSON(passenger_segment_status_info_list, passengerSegmentStatusInfoList_);
          DARABONBA_PTR_TO_JSON(re_shop_reason_info_list, reShopReasonInfoList_);
          DARABONBA_PTR_TO_JSON(segment_list, segmentList_);
        };
        friend void from_json(const Darabonba::Json& j, PassengerJourneyGroupInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_journey_group_key, passengerJourneyGroupKey_);
          DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
          DARABONBA_PTR_FROM_JSON(passenger_segment_status_info_list, passengerSegmentStatusInfoList_);
          DARABONBA_PTR_FROM_JSON(re_shop_reason_info_list, reShopReasonInfoList_);
          DARABONBA_PTR_FROM_JSON(segment_list, segmentList_);
        };
        PassengerJourneyGroupInfoList() = default ;
        PassengerJourneyGroupInfoList(const PassengerJourneyGroupInfoList &) = default ;
        PassengerJourneyGroupInfoList(PassengerJourneyGroupInfoList &&) = default ;
        PassengerJourneyGroupInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PassengerJourneyGroupInfoList() = default ;
        PassengerJourneyGroupInfoList& operator=(const PassengerJourneyGroupInfoList &) = default ;
        PassengerJourneyGroupInfoList& operator=(PassengerJourneyGroupInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SegmentList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SegmentList& obj) { 
            DARABONBA_PTR_TO_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_TO_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_TO_JSON(dep_time, depTime_);
            DARABONBA_PTR_TO_JSON(flight_no, flightNo_);
            DARABONBA_PTR_TO_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_TO_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
          };
          friend void from_json(const Darabonba::Json& j, SegmentList& obj) { 
            DARABONBA_PTR_FROM_JSON(arr_city_code, arrCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_city_code, depCityCode_);
            DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
            DARABONBA_PTR_FROM_JSON(flight_no, flightNo_);
            DARABONBA_PTR_FROM_JSON(journey_index, journeyIndex_);
            DARABONBA_PTR_FROM_JSON(segment_index, segmentIndex_);
            DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
          };
          SegmentList() = default ;
          SegmentList(const SegmentList &) = default ;
          SegmentList(SegmentList &&) = default ;
          SegmentList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SegmentList() = default ;
          SegmentList& operator=(const SegmentList &) = default ;
          SegmentList& operator=(SegmentList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->arrCityCode_ == nullptr
        && this->depCityCode_ == nullptr && this->depTime_ == nullptr && this->flightNo_ == nullptr && this->journeyIndex_ == nullptr && this->segmentIndex_ == nullptr
        && this->segmentKey_ == nullptr; };
          // arrCityCode Field Functions 
          bool hasArrCityCode() const { return this->arrCityCode_ != nullptr;};
          void deleteArrCityCode() { this->arrCityCode_ = nullptr;};
          inline string getArrCityCode() const { DARABONBA_PTR_GET_DEFAULT(arrCityCode_, "") };
          inline SegmentList& setArrCityCode(string arrCityCode) { DARABONBA_PTR_SET_VALUE(arrCityCode_, arrCityCode) };


          // depCityCode Field Functions 
          bool hasDepCityCode() const { return this->depCityCode_ != nullptr;};
          void deleteDepCityCode() { this->depCityCode_ = nullptr;};
          inline string getDepCityCode() const { DARABONBA_PTR_GET_DEFAULT(depCityCode_, "") };
          inline SegmentList& setDepCityCode(string depCityCode) { DARABONBA_PTR_SET_VALUE(depCityCode_, depCityCode) };


          // depTime Field Functions 
          bool hasDepTime() const { return this->depTime_ != nullptr;};
          void deleteDepTime() { this->depTime_ = nullptr;};
          inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
          inline SegmentList& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


          // flightNo Field Functions 
          bool hasFlightNo() const { return this->flightNo_ != nullptr;};
          void deleteFlightNo() { this->flightNo_ = nullptr;};
          inline string getFlightNo() const { DARABONBA_PTR_GET_DEFAULT(flightNo_, "") };
          inline SegmentList& setFlightNo(string flightNo) { DARABONBA_PTR_SET_VALUE(flightNo_, flightNo) };


          // journeyIndex Field Functions 
          bool hasJourneyIndex() const { return this->journeyIndex_ != nullptr;};
          void deleteJourneyIndex() { this->journeyIndex_ = nullptr;};
          inline int32_t getJourneyIndex() const { DARABONBA_PTR_GET_DEFAULT(journeyIndex_, 0) };
          inline SegmentList& setJourneyIndex(int32_t journeyIndex) { DARABONBA_PTR_SET_VALUE(journeyIndex_, journeyIndex) };


          // segmentIndex Field Functions 
          bool hasSegmentIndex() const { return this->segmentIndex_ != nullptr;};
          void deleteSegmentIndex() { this->segmentIndex_ = nullptr;};
          inline int32_t getSegmentIndex() const { DARABONBA_PTR_GET_DEFAULT(segmentIndex_, 0) };
          inline SegmentList& setSegmentIndex(int32_t segmentIndex) { DARABONBA_PTR_SET_VALUE(segmentIndex_, segmentIndex) };


          // segmentKey Field Functions 
          bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
          void deleteSegmentKey() { this->segmentKey_ = nullptr;};
          inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
          inline SegmentList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


        protected:
          shared_ptr<string> arrCityCode_ {};
          shared_ptr<string> depCityCode_ {};
          shared_ptr<string> depTime_ {};
          shared_ptr<string> flightNo_ {};
          shared_ptr<int32_t> journeyIndex_ {};
          shared_ptr<int32_t> segmentIndex_ {};
          shared_ptr<string> segmentKey_ {};
        };

        class ReShopReasonInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ReShopReasonInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
            DARABONBA_PTR_TO_JSON(reason_desc, reasonDesc_);
            DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
          };
          friend void from_json(const Darabonba::Json& j, ReShopReasonInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
            DARABONBA_PTR_FROM_JSON(reason_desc, reasonDesc_);
            DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
          };
          ReShopReasonInfoList() = default ;
          ReShopReasonInfoList(const ReShopReasonInfoList &) = default ;
          ReShopReasonInfoList(ReShopReasonInfoList &&) = default ;
          ReShopReasonInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ReShopReasonInfoList() = default ;
          ReShopReasonInfoList& operator=(const ReShopReasonInfoList &) = default ;
          ReShopReasonInfoList& operator=(ReShopReasonInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->reasonCode_ == nullptr
        && this->reasonDesc_ == nullptr && this->voluntary_ == nullptr; };
          // reasonCode Field Functions 
          bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
          void deleteReasonCode() { this->reasonCode_ = nullptr;};
          inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
          inline ReShopReasonInfoList& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


          // reasonDesc Field Functions 
          bool hasReasonDesc() const { return this->reasonDesc_ != nullptr;};
          void deleteReasonDesc() { this->reasonDesc_ = nullptr;};
          inline string getReasonDesc() const { DARABONBA_PTR_GET_DEFAULT(reasonDesc_, "") };
          inline ReShopReasonInfoList& setReasonDesc(string reasonDesc) { DARABONBA_PTR_SET_VALUE(reasonDesc_, reasonDesc) };


          // voluntary Field Functions 
          bool hasVoluntary() const { return this->voluntary_ != nullptr;};
          void deleteVoluntary() { this->voluntary_ = nullptr;};
          inline bool getVoluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
          inline ReShopReasonInfoList& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


        protected:
          shared_ptr<string> reasonCode_ {};
          shared_ptr<string> reasonDesc_ {};
          shared_ptr<bool> voluntary_ {};
        };

        class PassengerSegmentStatusInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PassengerSegmentStatusInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(can_re_shop, canReShop_);
            DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
            DARABONBA_PTR_TO_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_TO_JSON(un_re_shop_reason, unReShopReason_);
            DARABONBA_PTR_TO_JSON(un_re_shop_reason_code, unReShopReasonCode_);
          };
          friend void from_json(const Darabonba::Json& j, PassengerSegmentStatusInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(can_re_shop, canReShop_);
            DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
            DARABONBA_PTR_FROM_JSON(segment_key, segmentKey_);
            DARABONBA_PTR_FROM_JSON(un_re_shop_reason, unReShopReason_);
            DARABONBA_PTR_FROM_JSON(un_re_shop_reason_code, unReShopReasonCode_);
          };
          PassengerSegmentStatusInfoList() = default ;
          PassengerSegmentStatusInfoList(const PassengerSegmentStatusInfoList &) = default ;
          PassengerSegmentStatusInfoList(PassengerSegmentStatusInfoList &&) = default ;
          PassengerSegmentStatusInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PassengerSegmentStatusInfoList() = default ;
          PassengerSegmentStatusInfoList& operator=(const PassengerSegmentStatusInfoList &) = default ;
          PassengerSegmentStatusInfoList& operator=(PassengerSegmentStatusInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->canReShop_ == nullptr
        && this->passengerId_ == nullptr && this->segmentKey_ == nullptr && this->unReShopReason_ == nullptr && this->unReShopReasonCode_ == nullptr; };
          // canReShop Field Functions 
          bool hasCanReShop() const { return this->canReShop_ != nullptr;};
          void deleteCanReShop() { this->canReShop_ = nullptr;};
          inline bool getCanReShop() const { DARABONBA_PTR_GET_DEFAULT(canReShop_, false) };
          inline PassengerSegmentStatusInfoList& setCanReShop(bool canReShop) { DARABONBA_PTR_SET_VALUE(canReShop_, canReShop) };


          // passengerId Field Functions 
          bool hasPassengerId() const { return this->passengerId_ != nullptr;};
          void deletePassengerId() { this->passengerId_ = nullptr;};
          inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
          inline PassengerSegmentStatusInfoList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


          // segmentKey Field Functions 
          bool hasSegmentKey() const { return this->segmentKey_ != nullptr;};
          void deleteSegmentKey() { this->segmentKey_ = nullptr;};
          inline string getSegmentKey() const { DARABONBA_PTR_GET_DEFAULT(segmentKey_, "") };
          inline PassengerSegmentStatusInfoList& setSegmentKey(string segmentKey) { DARABONBA_PTR_SET_VALUE(segmentKey_, segmentKey) };


          // unReShopReason Field Functions 
          bool hasUnReShopReason() const { return this->unReShopReason_ != nullptr;};
          void deleteUnReShopReason() { this->unReShopReason_ = nullptr;};
          inline string getUnReShopReason() const { DARABONBA_PTR_GET_DEFAULT(unReShopReason_, "") };
          inline PassengerSegmentStatusInfoList& setUnReShopReason(string unReShopReason) { DARABONBA_PTR_SET_VALUE(unReShopReason_, unReShopReason) };


          // unReShopReasonCode Field Functions 
          bool hasUnReShopReasonCode() const { return this->unReShopReasonCode_ != nullptr;};
          void deleteUnReShopReasonCode() { this->unReShopReasonCode_ = nullptr;};
          inline string getUnReShopReasonCode() const { DARABONBA_PTR_GET_DEFAULT(unReShopReasonCode_, "") };
          inline PassengerSegmentStatusInfoList& setUnReShopReasonCode(string unReShopReasonCode) { DARABONBA_PTR_SET_VALUE(unReShopReasonCode_, unReShopReasonCode) };


        protected:
          shared_ptr<bool> canReShop_ {};
          shared_ptr<int64_t> passengerId_ {};
          shared_ptr<string> segmentKey_ {};
          shared_ptr<string> unReShopReason_ {};
          shared_ptr<string> unReShopReasonCode_ {};
        };

        class PassengerList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PassengerList& obj) { 
            DARABONBA_PTR_TO_JSON(full_name, fullName_);
            DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          };
          friend void from_json(const Darabonba::Json& j, PassengerList& obj) { 
            DARABONBA_PTR_FROM_JSON(full_name, fullName_);
            DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
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
          virtual bool empty() const override { return this->fullName_ == nullptr
        && this->passengerId_ == nullptr; };
          // fullName Field Functions 
          bool hasFullName() const { return this->fullName_ != nullptr;};
          void deleteFullName() { this->fullName_ = nullptr;};
          inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
          inline PassengerList& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


          // passengerId Field Functions 
          bool hasPassengerId() const { return this->passengerId_ != nullptr;};
          void deletePassengerId() { this->passengerId_ = nullptr;};
          inline int64_t getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, 0L) };
          inline PassengerList& setPassengerId(int64_t passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        protected:
          shared_ptr<string> fullName_ {};
          shared_ptr<int64_t> passengerId_ {};
        };

        virtual bool empty() const override { return this->passengerJourneyGroupKey_ == nullptr
        && this->passengerList_ == nullptr && this->passengerSegmentStatusInfoList_ == nullptr && this->reShopReasonInfoList_ == nullptr && this->segmentList_ == nullptr; };
        // passengerJourneyGroupKey Field Functions 
        bool hasPassengerJourneyGroupKey() const { return this->passengerJourneyGroupKey_ != nullptr;};
        void deletePassengerJourneyGroupKey() { this->passengerJourneyGroupKey_ = nullptr;};
        inline string getPassengerJourneyGroupKey() const { DARABONBA_PTR_GET_DEFAULT(passengerJourneyGroupKey_, "") };
        inline PassengerJourneyGroupInfoList& setPassengerJourneyGroupKey(string passengerJourneyGroupKey) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupKey_, passengerJourneyGroupKey) };


        // passengerList Field Functions 
        bool hasPassengerList() const { return this->passengerList_ != nullptr;};
        void deletePassengerList() { this->passengerList_ = nullptr;};
        inline const vector<PassengerJourneyGroupInfoList::PassengerList> & getPassengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<PassengerJourneyGroupInfoList::PassengerList>) };
        inline vector<PassengerJourneyGroupInfoList::PassengerList> getPassengerList() { DARABONBA_PTR_GET(passengerList_, vector<PassengerJourneyGroupInfoList::PassengerList>) };
        inline PassengerJourneyGroupInfoList& setPassengerList(const vector<PassengerJourneyGroupInfoList::PassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
        inline PassengerJourneyGroupInfoList& setPassengerList(vector<PassengerJourneyGroupInfoList::PassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


        // passengerSegmentStatusInfoList Field Functions 
        bool hasPassengerSegmentStatusInfoList() const { return this->passengerSegmentStatusInfoList_ != nullptr;};
        void deletePassengerSegmentStatusInfoList() { this->passengerSegmentStatusInfoList_ = nullptr;};
        inline const vector<PassengerJourneyGroupInfoList::PassengerSegmentStatusInfoList> & getPassengerSegmentStatusInfoList() const { DARABONBA_PTR_GET_CONST(passengerSegmentStatusInfoList_, vector<PassengerJourneyGroupInfoList::PassengerSegmentStatusInfoList>) };
        inline vector<PassengerJourneyGroupInfoList::PassengerSegmentStatusInfoList> getPassengerSegmentStatusInfoList() { DARABONBA_PTR_GET(passengerSegmentStatusInfoList_, vector<PassengerJourneyGroupInfoList::PassengerSegmentStatusInfoList>) };
        inline PassengerJourneyGroupInfoList& setPassengerSegmentStatusInfoList(const vector<PassengerJourneyGroupInfoList::PassengerSegmentStatusInfoList> & passengerSegmentStatusInfoList) { DARABONBA_PTR_SET_VALUE(passengerSegmentStatusInfoList_, passengerSegmentStatusInfoList) };
        inline PassengerJourneyGroupInfoList& setPassengerSegmentStatusInfoList(vector<PassengerJourneyGroupInfoList::PassengerSegmentStatusInfoList> && passengerSegmentStatusInfoList) { DARABONBA_PTR_SET_RVALUE(passengerSegmentStatusInfoList_, passengerSegmentStatusInfoList) };


        // reShopReasonInfoList Field Functions 
        bool hasReShopReasonInfoList() const { return this->reShopReasonInfoList_ != nullptr;};
        void deleteReShopReasonInfoList() { this->reShopReasonInfoList_ = nullptr;};
        inline const vector<PassengerJourneyGroupInfoList::ReShopReasonInfoList> & getReShopReasonInfoList() const { DARABONBA_PTR_GET_CONST(reShopReasonInfoList_, vector<PassengerJourneyGroupInfoList::ReShopReasonInfoList>) };
        inline vector<PassengerJourneyGroupInfoList::ReShopReasonInfoList> getReShopReasonInfoList() { DARABONBA_PTR_GET(reShopReasonInfoList_, vector<PassengerJourneyGroupInfoList::ReShopReasonInfoList>) };
        inline PassengerJourneyGroupInfoList& setReShopReasonInfoList(const vector<PassengerJourneyGroupInfoList::ReShopReasonInfoList> & reShopReasonInfoList) { DARABONBA_PTR_SET_VALUE(reShopReasonInfoList_, reShopReasonInfoList) };
        inline PassengerJourneyGroupInfoList& setReShopReasonInfoList(vector<PassengerJourneyGroupInfoList::ReShopReasonInfoList> && reShopReasonInfoList) { DARABONBA_PTR_SET_RVALUE(reShopReasonInfoList_, reShopReasonInfoList) };


        // segmentList Field Functions 
        bool hasSegmentList() const { return this->segmentList_ != nullptr;};
        void deleteSegmentList() { this->segmentList_ = nullptr;};
        inline const vector<PassengerJourneyGroupInfoList::SegmentList> & getSegmentList() const { DARABONBA_PTR_GET_CONST(segmentList_, vector<PassengerJourneyGroupInfoList::SegmentList>) };
        inline vector<PassengerJourneyGroupInfoList::SegmentList> getSegmentList() { DARABONBA_PTR_GET(segmentList_, vector<PassengerJourneyGroupInfoList::SegmentList>) };
        inline PassengerJourneyGroupInfoList& setSegmentList(const vector<PassengerJourneyGroupInfoList::SegmentList> & segmentList) { DARABONBA_PTR_SET_VALUE(segmentList_, segmentList) };
        inline PassengerJourneyGroupInfoList& setSegmentList(vector<PassengerJourneyGroupInfoList::SegmentList> && segmentList) { DARABONBA_PTR_SET_RVALUE(segmentList_, segmentList) };


      protected:
        shared_ptr<string> passengerJourneyGroupKey_ {};
        shared_ptr<vector<PassengerJourneyGroupInfoList::PassengerList>> passengerList_ {};
        shared_ptr<vector<PassengerJourneyGroupInfoList::PassengerSegmentStatusInfoList>> passengerSegmentStatusInfoList_ {};
        shared_ptr<vector<PassengerJourneyGroupInfoList::ReShopReasonInfoList>> reShopReasonInfoList_ {};
        shared_ptr<vector<PassengerJourneyGroupInfoList::SegmentList>> segmentList_ {};
      };

      virtual bool empty() const override { return this->passengerJourneyGroupInfoList_ == nullptr; };
      // passengerJourneyGroupInfoList Field Functions 
      bool hasPassengerJourneyGroupInfoList() const { return this->passengerJourneyGroupInfoList_ != nullptr;};
      void deletePassengerJourneyGroupInfoList() { this->passengerJourneyGroupInfoList_ = nullptr;};
      inline const vector<Module::PassengerJourneyGroupInfoList> & getPassengerJourneyGroupInfoList() const { DARABONBA_PTR_GET_CONST(passengerJourneyGroupInfoList_, vector<Module::PassengerJourneyGroupInfoList>) };
      inline vector<Module::PassengerJourneyGroupInfoList> getPassengerJourneyGroupInfoList() { DARABONBA_PTR_GET(passengerJourneyGroupInfoList_, vector<Module::PassengerJourneyGroupInfoList>) };
      inline Module& setPassengerJourneyGroupInfoList(const vector<Module::PassengerJourneyGroupInfoList> & passengerJourneyGroupInfoList) { DARABONBA_PTR_SET_VALUE(passengerJourneyGroupInfoList_, passengerJourneyGroupInfoList) };
      inline Module& setPassengerJourneyGroupInfoList(vector<Module::PassengerJourneyGroupInfoList> && passengerJourneyGroupInfoList) { DARABONBA_PTR_SET_RVALUE(passengerJourneyGroupInfoList_, passengerJourneyGroupInfoList) };


    protected:
      shared_ptr<vector<Module::PassengerJourneyGroupInfoList>> passengerJourneyGroupInfoList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline IntlFlightReShopConsultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline IntlFlightReShopConsultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const IntlFlightReShopConsultResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, IntlFlightReShopConsultResponseBody::Module) };
    inline IntlFlightReShopConsultResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, IntlFlightReShopConsultResponseBody::Module) };
    inline IntlFlightReShopConsultResponseBody& setModule(const IntlFlightReShopConsultResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline IntlFlightReShopConsultResponseBody& setModule(IntlFlightReShopConsultResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline IntlFlightReShopConsultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline IntlFlightReShopConsultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline IntlFlightReShopConsultResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<IntlFlightReShopConsultResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
