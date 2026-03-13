// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALV2RESPONSEBODY_HPP_
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
  class FlightRefundPreCalV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightRefundPreCalV2ResponseBody() = default ;
    FlightRefundPreCalV2ResponseBody(const FlightRefundPreCalV2ResponseBody &) = default ;
    FlightRefundPreCalV2ResponseBody(FlightRefundPreCalV2ResponseBody &&) = default ;
    FlightRefundPreCalV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalV2ResponseBody() = default ;
    FlightRefundPreCalV2ResponseBody& operator=(const FlightRefundPreCalV2ResponseBody &) = default ;
    FlightRefundPreCalV2ResponseBody& operator=(FlightRefundPreCalV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(multi_refund_fee_d_t_o_s, multiRefundFeeDTOS_);
        DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
        DARABONBA_PTR_TO_JSON(refund_charge_fee, refundChargeFee_);
        DARABONBA_PTR_TO_JSON(refund_reason_option_d_t_o_s, refundReasonOptionDTOS_);
        DARABONBA_PTR_TO_JSON(service_charge_fee, serviceChargeFee_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(multi_refund_fee_d_t_o_s, multiRefundFeeDTOS_);
        DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
        DARABONBA_PTR_FROM_JSON(refund_charge_fee, refundChargeFee_);
        DARABONBA_PTR_FROM_JSON(refund_reason_option_d_t_o_s, refundReasonOptionDTOS_);
        DARABONBA_PTR_FROM_JSON(service_charge_fee, serviceChargeFee_);
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
      class RefundReasonOptionDTOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundReasonOptionDTOS& obj) { 
          DARABONBA_PTR_TO_JSON(reason, reason_);
          DARABONBA_PTR_TO_JSON(reason_type, reasonType_);
          DARABONBA_PTR_TO_JSON(volunteer, volunteer_);
        };
        friend void from_json(const Darabonba::Json& j, RefundReasonOptionDTOS& obj) { 
          DARABONBA_PTR_FROM_JSON(reason, reason_);
          DARABONBA_PTR_FROM_JSON(reason_type, reasonType_);
          DARABONBA_PTR_FROM_JSON(volunteer, volunteer_);
        };
        RefundReasonOptionDTOS() = default ;
        RefundReasonOptionDTOS(const RefundReasonOptionDTOS &) = default ;
        RefundReasonOptionDTOS(RefundReasonOptionDTOS &&) = default ;
        RefundReasonOptionDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundReasonOptionDTOS() = default ;
        RefundReasonOptionDTOS& operator=(const RefundReasonOptionDTOS &) = default ;
        RefundReasonOptionDTOS& operator=(RefundReasonOptionDTOS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reason_ == nullptr
        && this->reasonType_ == nullptr && this->volunteer_ == nullptr; };
        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline RefundReasonOptionDTOS& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // reasonType Field Functions 
        bool hasReasonType() const { return this->reasonType_ != nullptr;};
        void deleteReasonType() { this->reasonType_ = nullptr;};
        inline int32_t getReasonType() const { DARABONBA_PTR_GET_DEFAULT(reasonType_, 0) };
        inline RefundReasonOptionDTOS& setReasonType(int32_t reasonType) { DARABONBA_PTR_SET_VALUE(reasonType_, reasonType) };


        // volunteer Field Functions 
        bool hasVolunteer() const { return this->volunteer_ != nullptr;};
        void deleteVolunteer() { this->volunteer_ = nullptr;};
        inline bool getVolunteer() const { DARABONBA_PTR_GET_DEFAULT(volunteer_, false) };
        inline RefundReasonOptionDTOS& setVolunteer(bool volunteer) { DARABONBA_PTR_SET_VALUE(volunteer_, volunteer) };


      protected:
        shared_ptr<string> reason_ {};
        shared_ptr<int32_t> reasonType_ {};
        shared_ptr<bool> volunteer_ {};
      };

      class MultiRefundFeeDTOS : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiRefundFeeDTOS& obj) { 
          DARABONBA_PTR_TO_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_TO_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
          DARABONBA_PTR_TO_JSON(refund_charge_fee, refundChargeFee_);
        };
        friend void from_json(const Darabonba::Json& j, MultiRefundFeeDTOS& obj) { 
          DARABONBA_PTR_FROM_JSON(passenger_id, passengerId_);
          DARABONBA_PTR_FROM_JSON(passenger_name, passengerName_);
          DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
          DARABONBA_PTR_FROM_JSON(refund_charge_fee, refundChargeFee_);
        };
        MultiRefundFeeDTOS() = default ;
        MultiRefundFeeDTOS(const MultiRefundFeeDTOS &) = default ;
        MultiRefundFeeDTOS(MultiRefundFeeDTOS &&) = default ;
        MultiRefundFeeDTOS(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiRefundFeeDTOS() = default ;
        MultiRefundFeeDTOS& operator=(const MultiRefundFeeDTOS &) = default ;
        MultiRefundFeeDTOS& operator=(MultiRefundFeeDTOS &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->passengerId_ == nullptr
        && this->passengerName_ == nullptr && this->preRefundMoney_ == nullptr && this->refundChargeFee_ == nullptr; };
        // passengerId Field Functions 
        bool hasPassengerId() const { return this->passengerId_ != nullptr;};
        void deletePassengerId() { this->passengerId_ = nullptr;};
        inline string getPassengerId() const { DARABONBA_PTR_GET_DEFAULT(passengerId_, "") };
        inline MultiRefundFeeDTOS& setPassengerId(string passengerId) { DARABONBA_PTR_SET_VALUE(passengerId_, passengerId) };


        // passengerName Field Functions 
        bool hasPassengerName() const { return this->passengerName_ != nullptr;};
        void deletePassengerName() { this->passengerName_ = nullptr;};
        inline string getPassengerName() const { DARABONBA_PTR_GET_DEFAULT(passengerName_, "") };
        inline MultiRefundFeeDTOS& setPassengerName(string passengerName) { DARABONBA_PTR_SET_VALUE(passengerName_, passengerName) };


        // preRefundMoney Field Functions 
        bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
        void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
        inline int64_t getPreRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
        inline MultiRefundFeeDTOS& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


        // refundChargeFee Field Functions 
        bool hasRefundChargeFee() const { return this->refundChargeFee_ != nullptr;};
        void deleteRefundChargeFee() { this->refundChargeFee_ = nullptr;};
        inline int64_t getRefundChargeFee() const { DARABONBA_PTR_GET_DEFAULT(refundChargeFee_, 0L) };
        inline MultiRefundFeeDTOS& setRefundChargeFee(int64_t refundChargeFee) { DARABONBA_PTR_SET_VALUE(refundChargeFee_, refundChargeFee) };


      protected:
        shared_ptr<string> passengerId_ {};
        shared_ptr<string> passengerName_ {};
        shared_ptr<int64_t> preRefundMoney_ {};
        shared_ptr<int64_t> refundChargeFee_ {};
      };

      virtual bool empty() const override { return this->multiRefundFeeDTOS_ == nullptr
        && this->preRefundMoney_ == nullptr && this->refundChargeFee_ == nullptr && this->refundReasonOptionDTOS_ == nullptr && this->serviceChargeFee_ == nullptr; };
      // multiRefundFeeDTOS Field Functions 
      bool hasMultiRefundFeeDTOS() const { return this->multiRefundFeeDTOS_ != nullptr;};
      void deleteMultiRefundFeeDTOS() { this->multiRefundFeeDTOS_ = nullptr;};
      inline const vector<Module::MultiRefundFeeDTOS> & getMultiRefundFeeDTOS() const { DARABONBA_PTR_GET_CONST(multiRefundFeeDTOS_, vector<Module::MultiRefundFeeDTOS>) };
      inline vector<Module::MultiRefundFeeDTOS> getMultiRefundFeeDTOS() { DARABONBA_PTR_GET(multiRefundFeeDTOS_, vector<Module::MultiRefundFeeDTOS>) };
      inline Module& setMultiRefundFeeDTOS(const vector<Module::MultiRefundFeeDTOS> & multiRefundFeeDTOS) { DARABONBA_PTR_SET_VALUE(multiRefundFeeDTOS_, multiRefundFeeDTOS) };
      inline Module& setMultiRefundFeeDTOS(vector<Module::MultiRefundFeeDTOS> && multiRefundFeeDTOS) { DARABONBA_PTR_SET_RVALUE(multiRefundFeeDTOS_, multiRefundFeeDTOS) };


      // preRefundMoney Field Functions 
      bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
      void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
      inline int64_t getPreRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
      inline Module& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


      // refundChargeFee Field Functions 
      bool hasRefundChargeFee() const { return this->refundChargeFee_ != nullptr;};
      void deleteRefundChargeFee() { this->refundChargeFee_ = nullptr;};
      inline int64_t getRefundChargeFee() const { DARABONBA_PTR_GET_DEFAULT(refundChargeFee_, 0L) };
      inline Module& setRefundChargeFee(int64_t refundChargeFee) { DARABONBA_PTR_SET_VALUE(refundChargeFee_, refundChargeFee) };


      // refundReasonOptionDTOS Field Functions 
      bool hasRefundReasonOptionDTOS() const { return this->refundReasonOptionDTOS_ != nullptr;};
      void deleteRefundReasonOptionDTOS() { this->refundReasonOptionDTOS_ = nullptr;};
      inline const vector<Module::RefundReasonOptionDTOS> & getRefundReasonOptionDTOS() const { DARABONBA_PTR_GET_CONST(refundReasonOptionDTOS_, vector<Module::RefundReasonOptionDTOS>) };
      inline vector<Module::RefundReasonOptionDTOS> getRefundReasonOptionDTOS() { DARABONBA_PTR_GET(refundReasonOptionDTOS_, vector<Module::RefundReasonOptionDTOS>) };
      inline Module& setRefundReasonOptionDTOS(const vector<Module::RefundReasonOptionDTOS> & refundReasonOptionDTOS) { DARABONBA_PTR_SET_VALUE(refundReasonOptionDTOS_, refundReasonOptionDTOS) };
      inline Module& setRefundReasonOptionDTOS(vector<Module::RefundReasonOptionDTOS> && refundReasonOptionDTOS) { DARABONBA_PTR_SET_RVALUE(refundReasonOptionDTOS_, refundReasonOptionDTOS) };


      // serviceChargeFee Field Functions 
      bool hasServiceChargeFee() const { return this->serviceChargeFee_ != nullptr;};
      void deleteServiceChargeFee() { this->serviceChargeFee_ = nullptr;};
      inline int64_t getServiceChargeFee() const { DARABONBA_PTR_GET_DEFAULT(serviceChargeFee_, 0L) };
      inline Module& setServiceChargeFee(int64_t serviceChargeFee) { DARABONBA_PTR_SET_VALUE(serviceChargeFee_, serviceChargeFee) };


    protected:
      shared_ptr<vector<Module::MultiRefundFeeDTOS>> multiRefundFeeDTOS_ {};
      shared_ptr<int64_t> preRefundMoney_ {};
      shared_ptr<int64_t> refundChargeFee_ {};
      shared_ptr<vector<Module::RefundReasonOptionDTOS>> refundReasonOptionDTOS_ {};
      shared_ptr<int64_t> serviceChargeFee_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightRefundPreCalV2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightRefundPreCalV2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightRefundPreCalV2ResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightRefundPreCalV2ResponseBody::Module) };
    inline FlightRefundPreCalV2ResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightRefundPreCalV2ResponseBody::Module) };
    inline FlightRefundPreCalV2ResponseBody& setModule(const FlightRefundPreCalV2ResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightRefundPreCalV2ResponseBody& setModule(FlightRefundPreCalV2ResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightRefundPreCalV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightRefundPreCalV2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightRefundPreCalV2ResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module
    shared_ptr<FlightRefundPreCalV2ResponseBody::Module> module_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
