// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATECHANGERESPONSEBODY_HPP_
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
  class TrainFeeCalculateChangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateChangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateChangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainFeeCalculateChangeResponseBody() = default ;
    TrainFeeCalculateChangeResponseBody(const TrainFeeCalculateChangeResponseBody &) = default ;
    TrainFeeCalculateChangeResponseBody(TrainFeeCalculateChangeResponseBody &&) = default ;
    TrainFeeCalculateChangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateChangeResponseBody() = default ;
    TrainFeeCalculateChangeResponseBody& operator=(const TrainFeeCalculateChangeResponseBody &) = default ;
    TrainFeeCalculateChangeResponseBody& operator=(TrainFeeCalculateChangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(change_train_details, changeTrainDetails_);
        DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(change_train_details, changeTrainDetails_);
        DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
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
      class ChangeTrainDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChangeTrainDetails& obj) { 
          DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
          DARABONBA_PTR_TO_JSON(change_ticket_details, changeTicketDetails_);
          DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(train_no, trainNo_);
        };
        friend void from_json(const Darabonba::Json& j, ChangeTrainDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
          DARABONBA_PTR_FROM_JSON(change_ticket_details, changeTicketDetails_);
          DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
        };
        ChangeTrainDetails() = default ;
        ChangeTrainDetails(const ChangeTrainDetails &) = default ;
        ChangeTrainDetails(ChangeTrainDetails &&) = default ;
        ChangeTrainDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChangeTrainDetails() = default ;
        ChangeTrainDetails& operator=(const ChangeTrainDetails &) = default ;
        ChangeTrainDetails& operator=(ChangeTrainDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ChangeTicketDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ChangeTicketDetails& obj) { 
            DARABONBA_PTR_TO_JSON(change_fee, changeFee_);
            DARABONBA_PTR_TO_JSON(change_rate, changeRate_);
            DARABONBA_PTR_TO_JSON(change_refund_fee, changeRefundFee_);
            DARABONBA_PTR_TO_JSON(change_refund_rate, changeRefundRate_);
            DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
            DARABONBA_PTR_TO_JSON(seat_type, seatType_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          };
          friend void from_json(const Darabonba::Json& j, ChangeTicketDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(change_fee, changeFee_);
            DARABONBA_PTR_FROM_JSON(change_rate, changeRate_);
            DARABONBA_PTR_FROM_JSON(change_refund_fee, changeRefundFee_);
            DARABONBA_PTR_FROM_JSON(change_refund_rate, changeRefundRate_);
            DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
            DARABONBA_PTR_FROM_JSON(seat_type, seatType_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          };
          ChangeTicketDetails() = default ;
          ChangeTicketDetails(const ChangeTicketDetails &) = default ;
          ChangeTicketDetails(ChangeTicketDetails &&) = default ;
          ChangeTicketDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ChangeTicketDetails() = default ;
          ChangeTicketDetails& operator=(const ChangeTicketDetails &) = default ;
          ChangeTicketDetails& operator=(ChangeTicketDetails &&) = default ;
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
            shared_ptr<string> passengerCertNo_ {};
            shared_ptr<string> passengerCertType_ {};
            shared_ptr<string> passengerId_ {};
            shared_ptr<string> passengerName_ {};
          };

          virtual bool empty() const override { return this->changeFee_ == nullptr
        && this->changeRate_ == nullptr && this->changeRefundFee_ == nullptr && this->changeRefundRate_ == nullptr && this->passengerInfo_ == nullptr && this->seatType_ == nullptr
        && this->ticketPrice_ == nullptr; };
          // changeFee Field Functions 
          bool hasChangeFee() const { return this->changeFee_ != nullptr;};
          void deleteChangeFee() { this->changeFee_ = nullptr;};
          inline int64_t getChangeFee() const { DARABONBA_PTR_GET_DEFAULT(changeFee_, 0L) };
          inline ChangeTicketDetails& setChangeFee(int64_t changeFee) { DARABONBA_PTR_SET_VALUE(changeFee_, changeFee) };


          // changeRate Field Functions 
          bool hasChangeRate() const { return this->changeRate_ != nullptr;};
          void deleteChangeRate() { this->changeRate_ = nullptr;};
          inline int64_t getChangeRate() const { DARABONBA_PTR_GET_DEFAULT(changeRate_, 0L) };
          inline ChangeTicketDetails& setChangeRate(int64_t changeRate) { DARABONBA_PTR_SET_VALUE(changeRate_, changeRate) };


          // changeRefundFee Field Functions 
          bool hasChangeRefundFee() const { return this->changeRefundFee_ != nullptr;};
          void deleteChangeRefundFee() { this->changeRefundFee_ = nullptr;};
          inline int64_t getChangeRefundFee() const { DARABONBA_PTR_GET_DEFAULT(changeRefundFee_, 0L) };
          inline ChangeTicketDetails& setChangeRefundFee(int64_t changeRefundFee) { DARABONBA_PTR_SET_VALUE(changeRefundFee_, changeRefundFee) };


          // changeRefundRate Field Functions 
          bool hasChangeRefundRate() const { return this->changeRefundRate_ != nullptr;};
          void deleteChangeRefundRate() { this->changeRefundRate_ = nullptr;};
          inline int64_t getChangeRefundRate() const { DARABONBA_PTR_GET_DEFAULT(changeRefundRate_, 0L) };
          inline ChangeTicketDetails& setChangeRefundRate(int64_t changeRefundRate) { DARABONBA_PTR_SET_VALUE(changeRefundRate_, changeRefundRate) };


          // passengerInfo Field Functions 
          bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
          void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
          inline const ChangeTicketDetails::PassengerInfo & getPassengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, ChangeTicketDetails::PassengerInfo) };
          inline ChangeTicketDetails::PassengerInfo getPassengerInfo() { DARABONBA_PTR_GET(passengerInfo_, ChangeTicketDetails::PassengerInfo) };
          inline ChangeTicketDetails& setPassengerInfo(const ChangeTicketDetails::PassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
          inline ChangeTicketDetails& setPassengerInfo(ChangeTicketDetails::PassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


          // seatType Field Functions 
          bool hasSeatType() const { return this->seatType_ != nullptr;};
          void deleteSeatType() { this->seatType_ = nullptr;};
          inline string getSeatType() const { DARABONBA_PTR_GET_DEFAULT(seatType_, "") };
          inline ChangeTicketDetails& setSeatType(string seatType) { DARABONBA_PTR_SET_VALUE(seatType_, seatType) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
          inline ChangeTicketDetails& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        protected:
          shared_ptr<int64_t> changeFee_ {};
          shared_ptr<int64_t> changeRate_ {};
          shared_ptr<int64_t> changeRefundFee_ {};
          shared_ptr<int64_t> changeRefundRate_ {};
          shared_ptr<ChangeTicketDetails::PassengerInfo> passengerInfo_ {};
          shared_ptr<string> seatType_ {};
          shared_ptr<int64_t> ticketPrice_ {};
        };

        virtual bool empty() const override { return this->arrStationCode_ == nullptr
        && this->changeTicketDetails_ == nullptr && this->depStationCode_ == nullptr && this->depTime_ == nullptr && this->trainNo_ == nullptr; };
        // arrStationCode Field Functions 
        bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
        void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
        inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
        inline ChangeTrainDetails& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


        // changeTicketDetails Field Functions 
        bool hasChangeTicketDetails() const { return this->changeTicketDetails_ != nullptr;};
        void deleteChangeTicketDetails() { this->changeTicketDetails_ = nullptr;};
        inline const vector<ChangeTrainDetails::ChangeTicketDetails> & getChangeTicketDetails() const { DARABONBA_PTR_GET_CONST(changeTicketDetails_, vector<ChangeTrainDetails::ChangeTicketDetails>) };
        inline vector<ChangeTrainDetails::ChangeTicketDetails> getChangeTicketDetails() { DARABONBA_PTR_GET(changeTicketDetails_, vector<ChangeTrainDetails::ChangeTicketDetails>) };
        inline ChangeTrainDetails& setChangeTicketDetails(const vector<ChangeTrainDetails::ChangeTicketDetails> & changeTicketDetails) { DARABONBA_PTR_SET_VALUE(changeTicketDetails_, changeTicketDetails) };
        inline ChangeTrainDetails& setChangeTicketDetails(vector<ChangeTrainDetails::ChangeTicketDetails> && changeTicketDetails) { DARABONBA_PTR_SET_RVALUE(changeTicketDetails_, changeTicketDetails) };


        // depStationCode Field Functions 
        bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
        void deleteDepStationCode() { this->depStationCode_ = nullptr;};
        inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
        inline ChangeTrainDetails& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline ChangeTrainDetails& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // trainNo Field Functions 
        bool hasTrainNo() const { return this->trainNo_ != nullptr;};
        void deleteTrainNo() { this->trainNo_ = nullptr;};
        inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
        inline ChangeTrainDetails& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


      protected:
        shared_ptr<string> arrStationCode_ {};
        shared_ptr<vector<ChangeTrainDetails::ChangeTicketDetails>> changeTicketDetails_ {};
        shared_ptr<string> depStationCode_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<string> trainNo_ {};
      };

      virtual bool empty() const override { return this->changeTrainDetails_ == nullptr
        && this->distributeOrderId_ == nullptr && this->orderId_ == nullptr; };
      // changeTrainDetails Field Functions 
      bool hasChangeTrainDetails() const { return this->changeTrainDetails_ != nullptr;};
      void deleteChangeTrainDetails() { this->changeTrainDetails_ = nullptr;};
      inline const vector<Module::ChangeTrainDetails> & getChangeTrainDetails() const { DARABONBA_PTR_GET_CONST(changeTrainDetails_, vector<Module::ChangeTrainDetails>) };
      inline vector<Module::ChangeTrainDetails> getChangeTrainDetails() { DARABONBA_PTR_GET(changeTrainDetails_, vector<Module::ChangeTrainDetails>) };
      inline Module& setChangeTrainDetails(const vector<Module::ChangeTrainDetails> & changeTrainDetails) { DARABONBA_PTR_SET_VALUE(changeTrainDetails_, changeTrainDetails) };
      inline Module& setChangeTrainDetails(vector<Module::ChangeTrainDetails> && changeTrainDetails) { DARABONBA_PTR_SET_RVALUE(changeTrainDetails_, changeTrainDetails) };


      // distributeOrderId Field Functions 
      bool hasDistributeOrderId() const { return this->distributeOrderId_ != nullptr;};
      void deleteDistributeOrderId() { this->distributeOrderId_ = nullptr;};
      inline string getDistributeOrderId() const { DARABONBA_PTR_GET_DEFAULT(distributeOrderId_, "") };
      inline Module& setDistributeOrderId(string distributeOrderId) { DARABONBA_PTR_SET_VALUE(distributeOrderId_, distributeOrderId) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Module& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    protected:
      shared_ptr<vector<Module::ChangeTrainDetails>> changeTrainDetails_ {};
      shared_ptr<string> distributeOrderId_ {};
      shared_ptr<string> orderId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainFeeCalculateChangeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainFeeCalculateChangeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainFeeCalculateChangeResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainFeeCalculateChangeResponseBody::Module) };
    inline TrainFeeCalculateChangeResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainFeeCalculateChangeResponseBody::Module) };
    inline TrainFeeCalculateChangeResponseBody& setModule(const TrainFeeCalculateChangeResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainFeeCalculateChangeResponseBody& setModule(TrainFeeCalculateChangeResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainFeeCalculateChangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainFeeCalculateChangeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainFeeCalculateChangeResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TrainFeeCalculateChangeResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
