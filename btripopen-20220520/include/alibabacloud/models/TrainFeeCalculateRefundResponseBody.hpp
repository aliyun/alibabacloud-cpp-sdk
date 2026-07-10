// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRAINFEECALCULATEREFUNDRESPONSEBODY_HPP_
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
  class TrainFeeCalculateRefundResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainFeeCalculateRefundResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainFeeCalculateRefundResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TrainFeeCalculateRefundResponseBody() = default ;
    TrainFeeCalculateRefundResponseBody(const TrainFeeCalculateRefundResponseBody &) = default ;
    TrainFeeCalculateRefundResponseBody(TrainFeeCalculateRefundResponseBody &&) = default ;
    TrainFeeCalculateRefundResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainFeeCalculateRefundResponseBody() = default ;
    TrainFeeCalculateRefundResponseBody& operator=(const TrainFeeCalculateRefundResponseBody &) = default ;
    TrainFeeCalculateRefundResponseBody& operator=(TrainFeeCalculateRefundResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(distribute_order_id, distributeOrderId_);
        DARABONBA_PTR_TO_JSON(order_id, orderId_);
        DARABONBA_PTR_TO_JSON(refund_train_details, refundTrainDetails_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(distribute_order_id, distributeOrderId_);
        DARABONBA_PTR_FROM_JSON(order_id, orderId_);
        DARABONBA_PTR_FROM_JSON(refund_train_details, refundTrainDetails_);
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
      class RefundTrainDetails : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundTrainDetails& obj) { 
          DARABONBA_PTR_TO_JSON(arr_station_code, arrStationCode_);
          DARABONBA_PTR_TO_JSON(dep_station_code, depStationCode_);
          DARABONBA_PTR_TO_JSON(dep_time, depTime_);
          DARABONBA_PTR_TO_JSON(refund_ticket_details, refundTicketDetails_);
          DARABONBA_PTR_TO_JSON(train_no, trainNo_);
        };
        friend void from_json(const Darabonba::Json& j, RefundTrainDetails& obj) { 
          DARABONBA_PTR_FROM_JSON(arr_station_code, arrStationCode_);
          DARABONBA_PTR_FROM_JSON(dep_station_code, depStationCode_);
          DARABONBA_PTR_FROM_JSON(dep_time, depTime_);
          DARABONBA_PTR_FROM_JSON(refund_ticket_details, refundTicketDetails_);
          DARABONBA_PTR_FROM_JSON(train_no, trainNo_);
        };
        RefundTrainDetails() = default ;
        RefundTrainDetails(const RefundTrainDetails &) = default ;
        RefundTrainDetails(RefundTrainDetails &&) = default ;
        RefundTrainDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundTrainDetails() = default ;
        RefundTrainDetails& operator=(const RefundTrainDetails &) = default ;
        RefundTrainDetails& operator=(RefundTrainDetails &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RefundTicketDetails : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundTicketDetails& obj) { 
            DARABONBA_PTR_TO_JSON(can_refund, canRefund_);
            DARABONBA_PTR_TO_JSON(passenger_info, passengerInfo_);
            DARABONBA_PTR_TO_JSON(refund_cost_fee, refundCostFee_);
            DARABONBA_PTR_TO_JSON(refund_price, refundPrice_);
            DARABONBA_PTR_TO_JSON(refund_rate, refundRate_);
            DARABONBA_PTR_TO_JSON(ticket_price, ticketPrice_);
          };
          friend void from_json(const Darabonba::Json& j, RefundTicketDetails& obj) { 
            DARABONBA_PTR_FROM_JSON(can_refund, canRefund_);
            DARABONBA_PTR_FROM_JSON(passenger_info, passengerInfo_);
            DARABONBA_PTR_FROM_JSON(refund_cost_fee, refundCostFee_);
            DARABONBA_PTR_FROM_JSON(refund_price, refundPrice_);
            DARABONBA_PTR_FROM_JSON(refund_rate, refundRate_);
            DARABONBA_PTR_FROM_JSON(ticket_price, ticketPrice_);
          };
          RefundTicketDetails() = default ;
          RefundTicketDetails(const RefundTicketDetails &) = default ;
          RefundTicketDetails(RefundTicketDetails &&) = default ;
          RefundTicketDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundTicketDetails() = default ;
          RefundTicketDetails& operator=(const RefundTicketDetails &) = default ;
          RefundTicketDetails& operator=(RefundTicketDetails &&) = default ;
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

          virtual bool empty() const override { return this->canRefund_ == nullptr
        && this->passengerInfo_ == nullptr && this->refundCostFee_ == nullptr && this->refundPrice_ == nullptr && this->refundRate_ == nullptr && this->ticketPrice_ == nullptr; };
          // canRefund Field Functions 
          bool hasCanRefund() const { return this->canRefund_ != nullptr;};
          void deleteCanRefund() { this->canRefund_ = nullptr;};
          inline bool getCanRefund() const { DARABONBA_PTR_GET_DEFAULT(canRefund_, false) };
          inline RefundTicketDetails& setCanRefund(bool canRefund) { DARABONBA_PTR_SET_VALUE(canRefund_, canRefund) };


          // passengerInfo Field Functions 
          bool hasPassengerInfo() const { return this->passengerInfo_ != nullptr;};
          void deletePassengerInfo() { this->passengerInfo_ = nullptr;};
          inline const RefundTicketDetails::PassengerInfo & getPassengerInfo() const { DARABONBA_PTR_GET_CONST(passengerInfo_, RefundTicketDetails::PassengerInfo) };
          inline RefundTicketDetails::PassengerInfo getPassengerInfo() { DARABONBA_PTR_GET(passengerInfo_, RefundTicketDetails::PassengerInfo) };
          inline RefundTicketDetails& setPassengerInfo(const RefundTicketDetails::PassengerInfo & passengerInfo) { DARABONBA_PTR_SET_VALUE(passengerInfo_, passengerInfo) };
          inline RefundTicketDetails& setPassengerInfo(RefundTicketDetails::PassengerInfo && passengerInfo) { DARABONBA_PTR_SET_RVALUE(passengerInfo_, passengerInfo) };


          // refundCostFee Field Functions 
          bool hasRefundCostFee() const { return this->refundCostFee_ != nullptr;};
          void deleteRefundCostFee() { this->refundCostFee_ = nullptr;};
          inline int64_t getRefundCostFee() const { DARABONBA_PTR_GET_DEFAULT(refundCostFee_, 0L) };
          inline RefundTicketDetails& setRefundCostFee(int64_t refundCostFee) { DARABONBA_PTR_SET_VALUE(refundCostFee_, refundCostFee) };


          // refundPrice Field Functions 
          bool hasRefundPrice() const { return this->refundPrice_ != nullptr;};
          void deleteRefundPrice() { this->refundPrice_ = nullptr;};
          inline int64_t getRefundPrice() const { DARABONBA_PTR_GET_DEFAULT(refundPrice_, 0L) };
          inline RefundTicketDetails& setRefundPrice(int64_t refundPrice) { DARABONBA_PTR_SET_VALUE(refundPrice_, refundPrice) };


          // refundRate Field Functions 
          bool hasRefundRate() const { return this->refundRate_ != nullptr;};
          void deleteRefundRate() { this->refundRate_ = nullptr;};
          inline int64_t getRefundRate() const { DARABONBA_PTR_GET_DEFAULT(refundRate_, 0L) };
          inline RefundTicketDetails& setRefundRate(int64_t refundRate) { DARABONBA_PTR_SET_VALUE(refundRate_, refundRate) };


          // ticketPrice Field Functions 
          bool hasTicketPrice() const { return this->ticketPrice_ != nullptr;};
          void deleteTicketPrice() { this->ticketPrice_ = nullptr;};
          inline int64_t getTicketPrice() const { DARABONBA_PTR_GET_DEFAULT(ticketPrice_, 0L) };
          inline RefundTicketDetails& setTicketPrice(int64_t ticketPrice) { DARABONBA_PTR_SET_VALUE(ticketPrice_, ticketPrice) };


        protected:
          shared_ptr<bool> canRefund_ {};
          shared_ptr<RefundTicketDetails::PassengerInfo> passengerInfo_ {};
          shared_ptr<int64_t> refundCostFee_ {};
          shared_ptr<int64_t> refundPrice_ {};
          shared_ptr<int64_t> refundRate_ {};
          shared_ptr<int64_t> ticketPrice_ {};
        };

        virtual bool empty() const override { return this->arrStationCode_ == nullptr
        && this->depStationCode_ == nullptr && this->depTime_ == nullptr && this->refundTicketDetails_ == nullptr && this->trainNo_ == nullptr; };
        // arrStationCode Field Functions 
        bool hasArrStationCode() const { return this->arrStationCode_ != nullptr;};
        void deleteArrStationCode() { this->arrStationCode_ = nullptr;};
        inline string getArrStationCode() const { DARABONBA_PTR_GET_DEFAULT(arrStationCode_, "") };
        inline RefundTrainDetails& setArrStationCode(string arrStationCode) { DARABONBA_PTR_SET_VALUE(arrStationCode_, arrStationCode) };


        // depStationCode Field Functions 
        bool hasDepStationCode() const { return this->depStationCode_ != nullptr;};
        void deleteDepStationCode() { this->depStationCode_ = nullptr;};
        inline string getDepStationCode() const { DARABONBA_PTR_GET_DEFAULT(depStationCode_, "") };
        inline RefundTrainDetails& setDepStationCode(string depStationCode) { DARABONBA_PTR_SET_VALUE(depStationCode_, depStationCode) };


        // depTime Field Functions 
        bool hasDepTime() const { return this->depTime_ != nullptr;};
        void deleteDepTime() { this->depTime_ = nullptr;};
        inline string getDepTime() const { DARABONBA_PTR_GET_DEFAULT(depTime_, "") };
        inline RefundTrainDetails& setDepTime(string depTime) { DARABONBA_PTR_SET_VALUE(depTime_, depTime) };


        // refundTicketDetails Field Functions 
        bool hasRefundTicketDetails() const { return this->refundTicketDetails_ != nullptr;};
        void deleteRefundTicketDetails() { this->refundTicketDetails_ = nullptr;};
        inline const vector<RefundTrainDetails::RefundTicketDetails> & getRefundTicketDetails() const { DARABONBA_PTR_GET_CONST(refundTicketDetails_, vector<RefundTrainDetails::RefundTicketDetails>) };
        inline vector<RefundTrainDetails::RefundTicketDetails> getRefundTicketDetails() { DARABONBA_PTR_GET(refundTicketDetails_, vector<RefundTrainDetails::RefundTicketDetails>) };
        inline RefundTrainDetails& setRefundTicketDetails(const vector<RefundTrainDetails::RefundTicketDetails> & refundTicketDetails) { DARABONBA_PTR_SET_VALUE(refundTicketDetails_, refundTicketDetails) };
        inline RefundTrainDetails& setRefundTicketDetails(vector<RefundTrainDetails::RefundTicketDetails> && refundTicketDetails) { DARABONBA_PTR_SET_RVALUE(refundTicketDetails_, refundTicketDetails) };


        // trainNo Field Functions 
        bool hasTrainNo() const { return this->trainNo_ != nullptr;};
        void deleteTrainNo() { this->trainNo_ = nullptr;};
        inline string getTrainNo() const { DARABONBA_PTR_GET_DEFAULT(trainNo_, "") };
        inline RefundTrainDetails& setTrainNo(string trainNo) { DARABONBA_PTR_SET_VALUE(trainNo_, trainNo) };


      protected:
        shared_ptr<string> arrStationCode_ {};
        shared_ptr<string> depStationCode_ {};
        shared_ptr<string> depTime_ {};
        shared_ptr<vector<RefundTrainDetails::RefundTicketDetails>> refundTicketDetails_ {};
        shared_ptr<string> trainNo_ {};
      };

      virtual bool empty() const override { return this->distributeOrderId_ == nullptr
        && this->orderId_ == nullptr && this->refundTrainDetails_ == nullptr; };
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


      // refundTrainDetails Field Functions 
      bool hasRefundTrainDetails() const { return this->refundTrainDetails_ != nullptr;};
      void deleteRefundTrainDetails() { this->refundTrainDetails_ = nullptr;};
      inline const vector<Module::RefundTrainDetails> & getRefundTrainDetails() const { DARABONBA_PTR_GET_CONST(refundTrainDetails_, vector<Module::RefundTrainDetails>) };
      inline vector<Module::RefundTrainDetails> getRefundTrainDetails() { DARABONBA_PTR_GET(refundTrainDetails_, vector<Module::RefundTrainDetails>) };
      inline Module& setRefundTrainDetails(const vector<Module::RefundTrainDetails> & refundTrainDetails) { DARABONBA_PTR_SET_VALUE(refundTrainDetails_, refundTrainDetails) };
      inline Module& setRefundTrainDetails(vector<Module::RefundTrainDetails> && refundTrainDetails) { DARABONBA_PTR_SET_RVALUE(refundTrainDetails_, refundTrainDetails) };


    protected:
      shared_ptr<string> distributeOrderId_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<vector<Module::RefundTrainDetails>> refundTrainDetails_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TrainFeeCalculateRefundResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrainFeeCalculateRefundResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TrainFeeCalculateRefundResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TrainFeeCalculateRefundResponseBody::Module) };
    inline TrainFeeCalculateRefundResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TrainFeeCalculateRefundResponseBody::Module) };
    inline TrainFeeCalculateRefundResponseBody& setModule(const TrainFeeCalculateRefundResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TrainFeeCalculateRefundResponseBody& setModule(TrainFeeCalculateRefundResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TrainFeeCalculateRefundResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TrainFeeCalculateRefundResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TrainFeeCalculateRefundResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<TrainFeeCalculateRefundResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
