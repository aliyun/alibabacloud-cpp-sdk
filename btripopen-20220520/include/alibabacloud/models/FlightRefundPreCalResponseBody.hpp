// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTREFUNDPRECALRESPONSEBODY_HPP_
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
  class FlightRefundPreCalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightRefundPreCalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightRefundPreCalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    FlightRefundPreCalResponseBody() = default ;
    FlightRefundPreCalResponseBody(const FlightRefundPreCalResponseBody &) = default ;
    FlightRefundPreCalResponseBody(FlightRefundPreCalResponseBody &&) = default ;
    FlightRefundPreCalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightRefundPreCalResponseBody() = default ;
    FlightRefundPreCalResponseBody& operator=(const FlightRefundPreCalResponseBody &) = default ;
    FlightRefundPreCalResponseBody& operator=(FlightRefundPreCalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(flight_change, flightChange_);
        DARABONBA_PTR_TO_JSON(item_unit_id, itemUnitId_);
        DARABONBA_PTR_TO_JSON(multi_refund_cal_list, multiRefundCalList_);
        DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
        DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_TO_JSON(return_reason, returnReason_);
        DARABONBA_PTR_TO_JSON(session_id, sessionId_);
        DARABONBA_PTR_TO_JSON(tips, tips_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(flight_change, flightChange_);
        DARABONBA_PTR_FROM_JSON(item_unit_id, itemUnitId_);
        DARABONBA_PTR_FROM_JSON(multi_refund_cal_list, multiRefundCalList_);
        DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
        DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
        DARABONBA_PTR_FROM_JSON(return_reason, returnReason_);
        DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
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
      class ReturnReason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReturnReason& obj) { 
          DARABONBA_PTR_TO_JSON(extend_desc, extendDesc_);
          DARABONBA_PTR_TO_JSON(person, person_);
          DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
          DARABONBA_PTR_TO_JSON(reason_show, reasonShow_);
          DARABONBA_PTR_TO_JSON(reason_type, reasonType_);
          DARABONBA_PTR_TO_JSON(volunteer, volunteer_);
        };
        friend void from_json(const Darabonba::Json& j, ReturnReason& obj) { 
          DARABONBA_PTR_FROM_JSON(extend_desc, extendDesc_);
          DARABONBA_PTR_FROM_JSON(person, person_);
          DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
          DARABONBA_PTR_FROM_JSON(reason_show, reasonShow_);
          DARABONBA_PTR_FROM_JSON(reason_type, reasonType_);
          DARABONBA_PTR_FROM_JSON(volunteer, volunteer_);
        };
        ReturnReason() = default ;
        ReturnReason(const ReturnReason &) = default ;
        ReturnReason(ReturnReason &&) = default ;
        ReturnReason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReturnReason() = default ;
        ReturnReason& operator=(const ReturnReason &) = default ;
        ReturnReason& operator=(ReturnReason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extendDesc_ == nullptr
        && this->person_ == nullptr && this->reasonCode_ == nullptr && this->reasonShow_ == nullptr && this->reasonType_ == nullptr && this->volunteer_ == nullptr; };
        // extendDesc Field Functions 
        bool hasExtendDesc() const { return this->extendDesc_ != nullptr;};
        void deleteExtendDesc() { this->extendDesc_ = nullptr;};
        inline string getExtendDesc() const { DARABONBA_PTR_GET_DEFAULT(extendDesc_, "") };
        inline ReturnReason& setExtendDesc(string extendDesc) { DARABONBA_PTR_SET_VALUE(extendDesc_, extendDesc) };


        // person Field Functions 
        bool hasPerson() const { return this->person_ != nullptr;};
        void deletePerson() { this->person_ = nullptr;};
        inline int32_t getPerson() const { DARABONBA_PTR_GET_DEFAULT(person_, 0) };
        inline ReturnReason& setPerson(int32_t person) { DARABONBA_PTR_SET_VALUE(person_, person) };


        // reasonCode Field Functions 
        bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
        void deleteReasonCode() { this->reasonCode_ = nullptr;};
        inline int32_t getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, 0) };
        inline ReturnReason& setReasonCode(int32_t reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


        // reasonShow Field Functions 
        bool hasReasonShow() const { return this->reasonShow_ != nullptr;};
        void deleteReasonShow() { this->reasonShow_ = nullptr;};
        inline string getReasonShow() const { DARABONBA_PTR_GET_DEFAULT(reasonShow_, "") };
        inline ReturnReason& setReasonShow(string reasonShow) { DARABONBA_PTR_SET_VALUE(reasonShow_, reasonShow) };


        // reasonType Field Functions 
        bool hasReasonType() const { return this->reasonType_ != nullptr;};
        void deleteReasonType() { this->reasonType_ = nullptr;};
        inline int32_t getReasonType() const { DARABONBA_PTR_GET_DEFAULT(reasonType_, 0) };
        inline ReturnReason& setReasonType(int32_t reasonType) { DARABONBA_PTR_SET_VALUE(reasonType_, reasonType) };


        // volunteer Field Functions 
        bool hasVolunteer() const { return this->volunteer_ != nullptr;};
        void deleteVolunteer() { this->volunteer_ = nullptr;};
        inline int32_t getVolunteer() const { DARABONBA_PTR_GET_DEFAULT(volunteer_, 0) };
        inline ReturnReason& setVolunteer(int32_t volunteer) { DARABONBA_PTR_SET_VALUE(volunteer_, volunteer) };


      protected:
        shared_ptr<string> extendDesc_ {};
        shared_ptr<int32_t> person_ {};
        shared_ptr<int32_t> reasonCode_ {};
        shared_ptr<string> reasonShow_ {};
        shared_ptr<int32_t> reasonType_ {};
        shared_ptr<int32_t> volunteer_ {};
      };

      class MultiRefundCalList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiRefundCalList& obj) { 
          DARABONBA_PTR_TO_JSON(can_apply_refund, canApplyRefund_);
          DARABONBA_PTR_TO_JSON(name, name_);
          DARABONBA_PTR_TO_JSON(pre_refund_money, preRefundMoney_);
          DARABONBA_PTR_TO_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_TO_JSON(user_id, userId_);
        };
        friend void from_json(const Darabonba::Json& j, MultiRefundCalList& obj) { 
          DARABONBA_PTR_FROM_JSON(can_apply_refund, canApplyRefund_);
          DARABONBA_PTR_FROM_JSON(name, name_);
          DARABONBA_PTR_FROM_JSON(pre_refund_money, preRefundMoney_);
          DARABONBA_PTR_FROM_JSON(refund_fee, refundFee_);
          DARABONBA_PTR_FROM_JSON(user_id, userId_);
        };
        MultiRefundCalList() = default ;
        MultiRefundCalList(const MultiRefundCalList &) = default ;
        MultiRefundCalList(MultiRefundCalList &&) = default ;
        MultiRefundCalList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiRefundCalList() = default ;
        MultiRefundCalList& operator=(const MultiRefundCalList &) = default ;
        MultiRefundCalList& operator=(MultiRefundCalList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canApplyRefund_ == nullptr
        && this->name_ == nullptr && this->preRefundMoney_ == nullptr && this->refundFee_ == nullptr && this->userId_ == nullptr; };
        // canApplyRefund Field Functions 
        bool hasCanApplyRefund() const { return this->canApplyRefund_ != nullptr;};
        void deleteCanApplyRefund() { this->canApplyRefund_ = nullptr;};
        inline bool getCanApplyRefund() const { DARABONBA_PTR_GET_DEFAULT(canApplyRefund_, false) };
        inline MultiRefundCalList& setCanApplyRefund(bool canApplyRefund) { DARABONBA_PTR_SET_VALUE(canApplyRefund_, canApplyRefund) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MultiRefundCalList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // preRefundMoney Field Functions 
        bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
        void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
        inline int64_t getPreRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
        inline MultiRefundCalList& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


        // refundFee Field Functions 
        bool hasRefundFee() const { return this->refundFee_ != nullptr;};
        void deleteRefundFee() { this->refundFee_ = nullptr;};
        inline int64_t getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
        inline MultiRefundCalList& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline MultiRefundCalList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<bool> canApplyRefund_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int64_t> preRefundMoney_ {};
        shared_ptr<int64_t> refundFee_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->flightChange_ == nullptr
        && this->itemUnitId_ == nullptr && this->multiRefundCalList_ == nullptr && this->preRefundMoney_ == nullptr && this->refundFee_ == nullptr && this->returnReason_ == nullptr
        && this->sessionId_ == nullptr && this->tips_ == nullptr; };
      // flightChange Field Functions 
      bool hasFlightChange() const { return this->flightChange_ != nullptr;};
      void deleteFlightChange() { this->flightChange_ = nullptr;};
      inline bool getFlightChange() const { DARABONBA_PTR_GET_DEFAULT(flightChange_, false) };
      inline Module& setFlightChange(bool flightChange) { DARABONBA_PTR_SET_VALUE(flightChange_, flightChange) };


      // itemUnitId Field Functions 
      bool hasItemUnitId() const { return this->itemUnitId_ != nullptr;};
      void deleteItemUnitId() { this->itemUnitId_ = nullptr;};
      inline string getItemUnitId() const { DARABONBA_PTR_GET_DEFAULT(itemUnitId_, "") };
      inline Module& setItemUnitId(string itemUnitId) { DARABONBA_PTR_SET_VALUE(itemUnitId_, itemUnitId) };


      // multiRefundCalList Field Functions 
      bool hasMultiRefundCalList() const { return this->multiRefundCalList_ != nullptr;};
      void deleteMultiRefundCalList() { this->multiRefundCalList_ = nullptr;};
      inline const vector<Module::MultiRefundCalList> & getMultiRefundCalList() const { DARABONBA_PTR_GET_CONST(multiRefundCalList_, vector<Module::MultiRefundCalList>) };
      inline vector<Module::MultiRefundCalList> getMultiRefundCalList() { DARABONBA_PTR_GET(multiRefundCalList_, vector<Module::MultiRefundCalList>) };
      inline Module& setMultiRefundCalList(const vector<Module::MultiRefundCalList> & multiRefundCalList) { DARABONBA_PTR_SET_VALUE(multiRefundCalList_, multiRefundCalList) };
      inline Module& setMultiRefundCalList(vector<Module::MultiRefundCalList> && multiRefundCalList) { DARABONBA_PTR_SET_RVALUE(multiRefundCalList_, multiRefundCalList) };


      // preRefundMoney Field Functions 
      bool hasPreRefundMoney() const { return this->preRefundMoney_ != nullptr;};
      void deletePreRefundMoney() { this->preRefundMoney_ = nullptr;};
      inline int64_t getPreRefundMoney() const { DARABONBA_PTR_GET_DEFAULT(preRefundMoney_, 0L) };
      inline Module& setPreRefundMoney(int64_t preRefundMoney) { DARABONBA_PTR_SET_VALUE(preRefundMoney_, preRefundMoney) };


      // refundFee Field Functions 
      bool hasRefundFee() const { return this->refundFee_ != nullptr;};
      void deleteRefundFee() { this->refundFee_ = nullptr;};
      inline int64_t getRefundFee() const { DARABONBA_PTR_GET_DEFAULT(refundFee_, 0L) };
      inline Module& setRefundFee(int64_t refundFee) { DARABONBA_PTR_SET_VALUE(refundFee_, refundFee) };


      // returnReason Field Functions 
      bool hasReturnReason() const { return this->returnReason_ != nullptr;};
      void deleteReturnReason() { this->returnReason_ = nullptr;};
      inline const vector<Module::ReturnReason> & getReturnReason() const { DARABONBA_PTR_GET_CONST(returnReason_, vector<Module::ReturnReason>) };
      inline vector<Module::ReturnReason> getReturnReason() { DARABONBA_PTR_GET(returnReason_, vector<Module::ReturnReason>) };
      inline Module& setReturnReason(const vector<Module::ReturnReason> & returnReason) { DARABONBA_PTR_SET_VALUE(returnReason_, returnReason) };
      inline Module& setReturnReason(vector<Module::ReturnReason> && returnReason) { DARABONBA_PTR_SET_RVALUE(returnReason_, returnReason) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Module& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // tips Field Functions 
      bool hasTips() const { return this->tips_ != nullptr;};
      void deleteTips() { this->tips_ = nullptr;};
      inline string getTips() const { DARABONBA_PTR_GET_DEFAULT(tips_, "") };
      inline Module& setTips(string tips) { DARABONBA_PTR_SET_VALUE(tips_, tips) };


    protected:
      shared_ptr<bool> flightChange_ {};
      shared_ptr<string> itemUnitId_ {};
      shared_ptr<vector<Module::MultiRefundCalList>> multiRefundCalList_ {};
      shared_ptr<int64_t> preRefundMoney_ {};
      shared_ptr<int64_t> refundFee_ {};
      shared_ptr<vector<Module::ReturnReason>> returnReason_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> tips_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FlightRefundPreCalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FlightRefundPreCalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const FlightRefundPreCalResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, FlightRefundPreCalResponseBody::Module) };
    inline FlightRefundPreCalResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, FlightRefundPreCalResponseBody::Module) };
    inline FlightRefundPreCalResponseBody& setModule(const FlightRefundPreCalResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline FlightRefundPreCalResponseBody& setModule(FlightRefundPreCalResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FlightRefundPreCalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FlightRefundPreCalResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline FlightRefundPreCalResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<FlightRefundPreCalResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
