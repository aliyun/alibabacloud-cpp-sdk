// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUEST_HPP_
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
  class TrainApplyChangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyChangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_TO_JSON(change_train_info_s, changeTrainInfoS_);
      DARABONBA_PTR_TO_JSON(force_match, forceMatch_);
      DARABONBA_PTR_TO_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyChangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_FROM_JSON(change_train_info_s, changeTrainInfoS_);
      DARABONBA_PTR_FROM_JSON(force_match, forceMatch_);
      DARABONBA_PTR_FROM_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
    };
    TrainApplyChangeRequest() = default ;
    TrainApplyChangeRequest(const TrainApplyChangeRequest &) = default ;
    TrainApplyChangeRequest(TrainApplyChangeRequest &&) = default ;
    TrainApplyChangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyChangeRequest() = default ;
    TrainApplyChangeRequest& operator=(const TrainApplyChangeRequest &) = default ;
    TrainApplyChangeRequest& operator=(TrainApplyChangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChangeTrainInfoS : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChangeTrainInfoS& obj) { 
        DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
        DARABONBA_PTR_TO_JSON(change_ticket_info_s, changeTicketInfoS_);
        DARABONBA_PTR_TO_JSON(choose_bed_s, chooseBedS_);
        DARABONBA_PTR_TO_JSON(choose_seat_s, chooseSeatS_);
        DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
        DARABONBA_PTR_TO_JSON(dep_time, depTime_);
        DARABONBA_PTR_TO_JSON(original_dep_time, originalDepTime_);
        DARABONBA_PTR_TO_JSON(original_train_no, originalTrainNo_);
        DARABONBA_PTR_TO_JSON(train_no, trainNo_);
      };
      friend void from_json(const Darabonba::Json& j, ChangeTrainInfoS& obj) { 
        DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
        DARABONBA_PTR_FROM_JSON(change_ticket_info_s, changeTicketInfoS_);
        DARABONBA_PTR_FROM_JSON(choose_bed_s, chooseBedS_);
        DARABONBA_PTR_FROM_JSON(choose_seat_s, chooseSeatS_);
        DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
        DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
        DARABONBA_PTR_FROM_JSON(original_dep_time, originalDepTime_);
        DARABONBA_PTR_FROM_JSON(original_train_no, originalTrainNo_);
        DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
      };
      ChangeTrainInfoS() = default ;
      ChangeTrainInfoS(const ChangeTrainInfoS &) = default ;
      ChangeTrainInfoS(ChangeTrainInfoS &&) = default ;
      ChangeTrainInfoS(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChangeTrainInfoS() = default ;
      ChangeTrainInfoS& operator=(const ChangeTrainInfoS &) = default ;
      ChangeTrainInfoS& operator=(ChangeTrainInfoS &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ChangeTicketInfoS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeTicketInfoS& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
          DARABONBA_PTR_TO_JSON(seat_type, seatType_);
          DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_TO_JSON(ticket_type, ticketType_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeTicketInfoS& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
          DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
          DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          DARABONBA_PTR_FROM_JSON(ticket_type, ticketType_);
        };
        ChangeTicketInfoS() = default ;
        ChangeTicketInfoS(const ChangeTicketInfoS &) = default ;
        ChangeTicketInfoS(ChangeTicketInfoS &&) = default ;
        ChangeTicketInfoS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeTicketInfoS() = default ;
        ChangeTicketInfoS& operator=(const ChangeTicketInfoS &) = default ;
        ChangeTicketInfoS& operator=(ChangeTicketInfoS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PassengerInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PassengerInfo& obj) { 
            DARABONBA_PTR_TO_JSON(passenger_cert_no, passengerCertNo_);
            DARABONBA_PTR_TO_JSON(passenger_cert_type, passengerCertType_);
            DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
            DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          };
          friend void from_json(const Darabonba::Json& j, PassengerInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(passenger_cert_no, passengerCertNo_);
            DARABONBA_PTR_FROM_JSON(passenger_cert_type, passengerCertType_);
            DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
            DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          };
          PassengerInfo() = default ;
          PassengerInfo(const PassengerInfo &) = default ;
          PassengerInfo(PassengerInfo &&) = default ;
          PassengerInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PassengerInfo() = default ;
          PassengerInfo& operator=(const PassengerInfo &) = default ;
          PassengerInfo& operator=(PassengerInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->passengerCertNo_ == nullptr
        && this->passengerCertType_ == nullptr && this->passengerId_ == nullptr && this->passengerName_ == nullptr; };
          // passengerCertNo Field Functions 
          bool hasPassengerCertNo() const { return this->passengerCertNo_ != nullptr;};
          void deletePassengerCertNo() { this->passengerCertNo_ = nullptr;};
          inline string getPassengerCertNo() const { DARABONBA_PTR_GET_DEFAULT(passengerCertNo_, "") };
          inline PassengerInfo& setPassengerCertNo(string passengerCertNo) { DARABONBA_PTR_SET_VALUE(passengerCertNo_, passengerCertNo) };


          // passengerCertType Field Functions 
          bool hasPassengerCertType() const { return this->passengerCertType_ != nullptr;};
          void deletePassengerCertType() { this->passengerCertType_ = nullptr;};
          inline string getPassengerCertType() const { DARABONBA_PTR_GET_DEFAULT(passengerCertType_, "") };
          inline PassengerInfo& setPassengerCertType(string passengerCertType) { DARABONBA_PTR_SET_VALUE(passengerCertType_, passengerCertType) };


          // passengerId Field Functions 
          bool hasPassengerId() const { return this->passengerId_ != nullptr;};
          void deletePassengerId() { this->passengerId_ = nullptr;};
          inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
          inline PassengerInfo& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


          // passengerName Field Functions 
          bool hasPassengerName() const { return this->passengerName_ != nullptr;};
          void deletePassengerName() { this->passengerName_ = nullptr;};
          inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
          inline PassengerInfo& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        protected:
          // This parameter is required.
          shared_ptr<string> passengerCertNo_ {};
          // This parameter is required.
          shared_ptr<string> passengerCertType_ {};
          // This parameter is required.
          shared_ptr<string> passengerId_ {};
          // This parameter is required.
          shared_ptr<string> passengerName_ {};
        };

        virtual bool empty() const override { return this->passengerInfo_ == nullptr
        && this->seatType_ == nullptr && this->ticketPrice_ == nullptr && this->ticketType_ == nullptr; };
        // passengerInfo Field Functions 
        bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
        void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
        inline const ChangeTicketInfoS::PassengerInfo & getPassengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, ChangeTicketInfoS::PassengerInfo) };
        inline ChangeTicketInfoS::PassengerInfo getPassengerInfo() { DARABONBA_PTR_GET(passengerInfo_, ChangeTicketInfoS::PassengerInfo) };
        inline ChangeTicketInfoS& setPassengerInfo(const ChangeTicketInfoS::PassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
        inline ChangeTicketInfoS& setPassengerInfo(ChangeTicketInfoS::PassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


        // seatType Field Functions 
        bool hasSeatType() const { return this->seatType_ != nullptr;};
        void deleteSeatType() { this->seatType_ = nullptr;};
        inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
        inline ChangeTicketInfoS& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


        // ticketPrice Field Functions 
        bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
        void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
        inline string getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, "") };
        inline ChangeTicketInfoS& setTicketPrice(string ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        // ticketType Field Functions 
        bool hasTicketType() const { return this->ticketType_ != nullptr;};
        void deleteTicketType() { this->ticketType_ = nullptr;};
        inline string getTicketType() const { DARABONBA_PTR_GET_DEFAULT(ticketType_, "") };
        inline ChangeTicketInfoS& setTicketType(string ticketType) { DARABONBA_PTR_SET_VALUE(ticketType_, ticketType) };


      protected:
        // This parameter is required.
        shared_ptr<ChangeTicketInfoS::PassengerInfo> passengerInfo_ {};
        // This parameter is required.
        shared_ptr<string> seatType_ {};
        // This parameter is required.
        shared_ptr<string> ticketPrice_ {};
        // This parameter is required.
        shared_ptr<string> ticketType_ {};
      };

      virtual bool empty() const override { return this->arrStationCode_ == nullptr
        && this->changeTicketInfoS_ == nullptr && this->chooseBedS_ == nullptr && this->chooseSeatS_ == nullptr && this->depStationCode_ == nullptr && this->depTime_ == nullptr
        && this->originalDepTime_ == nullptr && this->originalTrainNo_ == nullptr && this->trainNo_ == nullptr; };
      // arrStationCode Field Functions 
      bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
      void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
      inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
      inline ChangeTrainInfoS& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


      // changeTicketInfoS Field Functions 
      bool hasChangeTicketInfoS() const { return this->changeTicketInfoS_ != nullptr;};
      void deleteChangeTicketInfoS() { this->changeTicketInfoS_ = nullptr;};
      inline const vector<ChangeTrainInfoS::ChangeTicketInfoS> & getChangeTicketInfoS() const { DARABONBA_PTR_GET_CONST(changeTicketInfoS_, vector<ChangeTrainInfoS::ChangeTicketInfoS>) };
      inline vector<ChangeTrainInfoS::ChangeTicketInfoS> getChangeTicketInfoS() { DARABONBA_PTR_GET(changeTicketInfoS_, vector<ChangeTrainInfoS::ChangeTicketInfoS>) };
      inline ChangeTrainInfoS& setChangeTicketInfoS(const vector<ChangeTrainInfoS::ChangeTicketInfoS> & changeTicketInfoS) { DARABONBA_PTR_SET_VALUE(changeTicketInfoS_, changeTicketInfoS) };
      inline ChangeTrainInfoS& setChangeTicketInfoS(vector<ChangeTrainInfoS::ChangeTicketInfoS> && changeTicketInfoS) { DARABONBA_PTR_SET_RVALUE(changeTicketInfoS_, changeTicketInfoS) };


      // chooseBedS Field Functions 
      bool hasChooseBedS() const { return this->chooseBedS_ != nullptr;};
      void deleteChooseBedS() { this->chooseBedS_ = nullptr;};
      inline string getChooseBedS() const { DARABONBA_PTR_GET_DEFAULT(chooseBedS_, "") };
      inline ChangeTrainInfoS& setChooseBedS(string chooseBedS) { DARABONBA_PTR_SET_VALUE(chooseBedS_, chooseBedS) };


      // chooseSeatS Field Functions 
      bool hasChooseSeatS() const { return this->chooseSeatS_ != nullptr;};
      void deleteChooseSeatS() { this->chooseSeatS_ = nullptr;};
      inline string getChooseSeatS() const { DARABONBA_PTR_GET_DEFAULT(chooseSeatS_, "") };
      inline ChangeTrainInfoS& setChooseSeatS(string chooseSeatS) { DARABONBA_PTR_SET_VALUE(chooseSeatS_, chooseSeatS) };


      // depStationCode Field Functions 
      bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
      void deleteDepStationCode() { this->depStationCode_ = nullptr;};
      inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
      inline ChangeTrainInfoS& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


      // depTime Field Functions 
      bool hasDepTime() const { return this->depTime_ != nullptr;};
      void deleteDepTime() { this->depTime_ = nullptr;};
      inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
      inline ChangeTrainInfoS& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


      // originalDepTime Field Functions 
      bool hasOriginalDepTime() const { return this->originalDepTime_ != nullptr;};
      void deleteOriginalDepTime() { this->originalDepTime_ = nullptr;};
      inline string getOriginalDepTime() const { DARABONBA_PTR_GET_DEFAULT(originalDepTime_, "") };
      inline ChangeTrainInfoS& setOriginalDepTime(string originalDepTime) { DARABONBA_PTR_SET_VALUE(originalDepTime_, originalDepTime) };


      // originalTrainNo Field Functions 
      bool hasOriginalTrainNo() const { return this->originalTrainNo_ != nullptr;};
      void deleteOriginalTrainNo() { this->originalTrainNo_ = nullptr;};
      inline string getOriginalTrainNo() const { DARABONBA_PTR_GET_DEFAULT(originalTrainNo_, "") };
      inline ChangeTrainInfoS& setOriginalTrainNo(string originalTrainNo) { DARABONBA_PTR_SET_VALUE(originalTrainNo_, originalTrainNo) };


      // trainNo Field Functions 
      bool hasTrainNo() const { return this->trainNo_ != nullptr;};
      void deleteTrainNo() { this->trainNo_ = nullptr;};
      inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
      inline ChangeTrainInfoS& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


    protected:
      // This parameter is required.
      shared_ptr<string> arrStationCode_ {};
      // This parameter is required.
      shared_ptr<vector<ChangeTrainInfoS::ChangeTicketInfoS>> changeTicketInfoS_ {};
      shared_ptr<string> chooseBedS_ {};
      shared_ptr<string> chooseSeatS_ {};
      // This parameter is required.
      shared_ptr<string> depStationCode_ {};
      // This parameter is required.
      shared_ptr<string> depTime_ {};
      // This parameter is required.
      shared_ptr<string> originalDepTime_ {};
      // This parameter is required.
      shared_ptr<string> originalTrainNo_ {};
      // This parameter is required.
      shared_ptr<string> trainNo_ {};
    };

    virtual bool empty() const override { return this->acceptNoSeat_ == nullptr
        && this->changeTrainInfoS_ == nullptr && this->forceMatch_ == nullptr && this->isPayNow_ == nullptr && this->orderId_ == nullptr && this->outChangeApplyId_ == nullptr
        && this->outOrderId_ == nullptr; };
    // acceptNoSeat Field Functions 
    bool hasAcceptNoSeat() const { return this->acceptNoSeat_ != nullptr;};
    void deleteAcceptNoSeat() { this->acceptNoSeat_ = nullptr;};
    inline string getAcceptNoSeat() const { DARABONBA_PTR_GET_DEFAULT(acceptNoSeat_, "") };
    inline TrainApplyChangeRequest& setAcceptNoSeat(string acceptNoSeat) { DARABONBA_PTR_SET_VALUE(acceptNoSeat_, acceptNoSeat) };


    // changeTrainInfoS Field Functions 
    bool hasChangeTrainInfoS() const { return this->changeTrainInfoS_ != nullptr;};
    void deleteChangeTrainInfoS() { this->changeTrainInfoS_ = nullptr;};
    inline const vector<TrainApplyChangeRequest::ChangeTrainInfoS> & getChangeTrainInfoS() const { DARABONBA_PTR_GET_CONST(changeTrainInfoS_, vector<TrainApplyChangeRequest::ChangeTrainInfoS>) };
    inline vector<TrainApplyChangeRequest::ChangeTrainInfoS> getChangeTrainInfoS() { DARABONBA_PTR_GET(changeTrainInfoS_, vector<TrainApplyChangeRequest::ChangeTrainInfoS>) };
    inline TrainApplyChangeRequest& setChangeTrainInfoS(const vector<TrainApplyChangeRequest::ChangeTrainInfoS> & changeTrainInfoS) { DARABONBA_PTR_SET_VALUE(changeTrainInfoS_, changeTrainInfoS) };
    inline TrainApplyChangeRequest& setChangeTrainInfoS(vector<TrainApplyChangeRequest::ChangeTrainInfoS> && changeTrainInfoS) { DARABONBA_PTR_SET_RVALUE(changeTrainInfoS_, changeTrainInfoS) };


    // forceMatch Field Functions 
    bool hasForceMatch() const { return this->forceMatch_ != nullptr;};
    void deleteForceMatch() { this->forceMatch_ = nullptr;};
    inline string getForceMatch() const { DARABONBA_PTR_GET_DEFAULT(forceMatch_, "") };
    inline TrainApplyChangeRequest& setForceMatch(string forceMatch) { DARABONBA_PTR_SET_VALUE(forceMatch_, forceMatch) };


    // isPayNow Field Functions 
    bool hasIsPayNow() const { return this->isPayNow_ != nullptr;};
    void deleteIsPayNow() { this->isPayNow_ = nullptr;};
    inline bool getIsPayNow() const { DARABONBA_PTR_GET_DEFAULT(isPayNow_, false) };
    inline TrainApplyChangeRequest& setIsPayNow(bool isPayNow) { DARABONBA_PTR_SET_VALUE(isPayNow_, isPayNow) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainApplyChangeRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outChangeApplyId Field Functions 
    bool hasOutChangeApplyId() const { return this->outChangeApplyId_ != nullptr;};
    void deleteOutChangeApplyId() { this->outChangeApplyId_ = nullptr;};
    inline string getOutChangeApplyId() const { DARABONBA_PTR_GET_DEFAULT(outChangeApplyId_, "") };
    inline TrainApplyChangeRequest& setOutChangeApplyId(string outChangeApplyId) { DARABONBA_PTR_SET_VALUE(outChangeApplyId_, outChangeApplyId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string getOutOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainApplyChangeRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


  protected:
    shared_ptr<string> acceptNoSeat_ {};
    // This parameter is required.
    shared_ptr<vector<TrainApplyChangeRequest::ChangeTrainInfoS>> changeTrainInfoS_ {};
    shared_ptr<string> forceMatch_ {};
    shared_ptr<bool> isPayNow_ {};
    // This parameter is required.
    shared_ptr<string> orderId_ {};
    // This parameter is required.
    shared_ptr<string> outChangeApplyId_ {};
    // This parameter is required.
    shared_ptr<string> outOrderId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
