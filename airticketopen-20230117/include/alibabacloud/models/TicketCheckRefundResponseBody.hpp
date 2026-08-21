// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHECKREFUNDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHECKREFUNDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketCheckRefundResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketCheckRefundResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TicketCheckRefundResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TicketCheckRefundResponseBody() = default ;
    TicketCheckRefundResponseBody(const TicketCheckRefundResponseBody &) = default ;
    TicketCheckRefundResponseBody(TicketCheckRefundResponseBody &&) = default ;
    TicketCheckRefundResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketCheckRefundResponseBody() = default ;
    TicketCheckRefundResponseBody& operator=(const TicketCheckRefundResponseBody &) = default ;
    TicketCheckRefundResponseBody& operator=(TicketCheckRefundResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CanRefund, canRefund_);
        DARABONBA_PTR_TO_JSON(RefundAmount, refundAmount_);
        DARABONBA_PTR_TO_JSON(RefundRule, refundRule_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CanRefund, canRefund_);
        DARABONBA_PTR_FROM_JSON(RefundAmount, refundAmount_);
        DARABONBA_PTR_FROM_JSON(RefundRule, refundRule_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RefundRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundRule& obj) { 
          DARABONBA_PTR_TO_JSON(RefundStageRules, refundStageRules_);
          DARABONBA_PTR_TO_JSON(RefundType, refundType_);
        };
        friend void from_json(const Darabonba::Json& j, RefundRule& obj) { 
          DARABONBA_PTR_FROM_JSON(RefundStageRules, refundStageRules_);
          DARABONBA_PTR_FROM_JSON(RefundType, refundType_);
        };
        RefundRule() = default ;
        RefundRule(const RefundRule &) = default ;
        RefundRule(RefundRule &&) = default ;
        RefundRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundRule() = default ;
        RefundRule& operator=(const RefundRule &) = default ;
        RefundRule& operator=(RefundRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RefundStageRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RefundStageRules& obj) { 
            DARABONBA_PTR_TO_JSON(Fee, fee_);
            DARABONBA_PTR_TO_JSON(FeeBase, feeBase_);
            DARABONBA_PTR_TO_JSON(FeeType, feeType_);
            DARABONBA_PTR_TO_JSON(From, from_);
            DARABONBA_PTR_TO_JSON(To, to_);
          };
          friend void from_json(const Darabonba::Json& j, RefundStageRules& obj) { 
            DARABONBA_PTR_FROM_JSON(Fee, fee_);
            DARABONBA_PTR_FROM_JSON(FeeBase, feeBase_);
            DARABONBA_PTR_FROM_JSON(FeeType, feeType_);
            DARABONBA_PTR_FROM_JSON(From, from_);
            DARABONBA_PTR_FROM_JSON(To, to_);
          };
          RefundStageRules() = default ;
          RefundStageRules(const RefundStageRules &) = default ;
          RefundStageRules(RefundStageRules &&) = default ;
          RefundStageRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RefundStageRules() = default ;
          RefundStageRules& operator=(const RefundStageRules &) = default ;
          RefundStageRules& operator=(RefundStageRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class To : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const To& obj) { 
              DARABONBA_PTR_TO_JSON(Anchor, anchor_);
              DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
            };
            friend void from_json(const Darabonba::Json& j, To& obj) { 
              DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
              DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
            };
            To() = default ;
            To(const To &) = default ;
            To(To &&) = default ;
            To(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~To() = default ;
            To& operator=(const To &) = default ;
            To& operator=(To &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
            // anchor Field Functions 
            bool hasAnchor() const { return this->anchor_ != nullptr;};
            void deleteAnchor() { this->anchor_ = nullptr;};
            inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
            inline To& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


            // fixedTime Field Functions 
            bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
            void deleteFixedTime() { this->fixedTime_ = nullptr;};
            inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
            inline To& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


            // offsetDayOfTime Field Functions 
            bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
            void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
            inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
            inline To& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


            // offsetUnit Field Functions 
            bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
            void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
            inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
            inline To& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


            // offsetValue Field Functions 
            bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
            void deleteOffsetValue() { this->offsetValue_ = nullptr;};
            inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
            inline To& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


          protected:
            shared_ptr<int32_t> anchor_ {};
            shared_ptr<string> fixedTime_ {};
            shared_ptr<string> offsetDayOfTime_ {};
            shared_ptr<int32_t> offsetUnit_ {};
            shared_ptr<int32_t> offsetValue_ {};
          };

          class From : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const From& obj) { 
              DARABONBA_PTR_TO_JSON(Anchor, anchor_);
              DARABONBA_PTR_TO_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_TO_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_TO_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_TO_JSON(OffsetValue, offsetValue_);
            };
            friend void from_json(const Darabonba::Json& j, From& obj) { 
              DARABONBA_PTR_FROM_JSON(Anchor, anchor_);
              DARABONBA_PTR_FROM_JSON(FixedTime, fixedTime_);
              DARABONBA_PTR_FROM_JSON(OffsetDayOfTime, offsetDayOfTime_);
              DARABONBA_PTR_FROM_JSON(OffsetUnit, offsetUnit_);
              DARABONBA_PTR_FROM_JSON(OffsetValue, offsetValue_);
            };
            From() = default ;
            From(const From &) = default ;
            From(From &&) = default ;
            From(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~From() = default ;
            From& operator=(const From &) = default ;
            From& operator=(From &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->anchor_ == nullptr
        && this->fixedTime_ == nullptr && this->offsetDayOfTime_ == nullptr && this->offsetUnit_ == nullptr && this->offsetValue_ == nullptr; };
            // anchor Field Functions 
            bool hasAnchor() const { return this->anchor_ != nullptr;};
            void deleteAnchor() { this->anchor_ = nullptr;};
            inline int32_t getAnchor() const { DARABONBA_PTR_GET_DEFAULT(anchor_, 0) };
            inline From& setAnchor(int32_t anchor) { DARABONBA_PTR_SET_VALUE(anchor_, anchor) };


            // fixedTime Field Functions 
            bool hasFixedTime() const { return this->fixedTime_ != nullptr;};
            void deleteFixedTime() { this->fixedTime_ = nullptr;};
            inline string getFixedTime() const { DARABONBA_PTR_GET_DEFAULT(fixedTime_, "") };
            inline From& setFixedTime(string fixedTime) { DARABONBA_PTR_SET_VALUE(fixedTime_, fixedTime) };


            // offsetDayOfTime Field Functions 
            bool hasOffsetDayOfTime() const { return this->offsetDayOfTime_ != nullptr;};
            void deleteOffsetDayOfTime() { this->offsetDayOfTime_ = nullptr;};
            inline string getOffsetDayOfTime() const { DARABONBA_PTR_GET_DEFAULT(offsetDayOfTime_, "") };
            inline From& setOffsetDayOfTime(string offsetDayOfTime) { DARABONBA_PTR_SET_VALUE(offsetDayOfTime_, offsetDayOfTime) };


            // offsetUnit Field Functions 
            bool hasOffsetUnit() const { return this->offsetUnit_ != nullptr;};
            void deleteOffsetUnit() { this->offsetUnit_ = nullptr;};
            inline int32_t getOffsetUnit() const { DARABONBA_PTR_GET_DEFAULT(offsetUnit_, 0) };
            inline From& setOffsetUnit(int32_t offsetUnit) { DARABONBA_PTR_SET_VALUE(offsetUnit_, offsetUnit) };


            // offsetValue Field Functions 
            bool hasOffsetValue() const { return this->offsetValue_ != nullptr;};
            void deleteOffsetValue() { this->offsetValue_ = nullptr;};
            inline int32_t getOffsetValue() const { DARABONBA_PTR_GET_DEFAULT(offsetValue_, 0) };
            inline From& setOffsetValue(int32_t offsetValue) { DARABONBA_PTR_SET_VALUE(offsetValue_, offsetValue) };


          protected:
            shared_ptr<int32_t> anchor_ {};
            shared_ptr<string> fixedTime_ {};
            shared_ptr<string> offsetDayOfTime_ {};
            shared_ptr<int32_t> offsetUnit_ {};
            shared_ptr<int32_t> offsetValue_ {};
          };

          virtual bool empty() const override { return this->fee_ == nullptr
        && this->feeBase_ == nullptr && this->feeType_ == nullptr && this->from_ == nullptr && this->to_ == nullptr; };
          // fee Field Functions 
          bool hasFee() const { return this->fee_ != nullptr;};
          void deleteFee() { this->fee_ = nullptr;};
          inline double getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0.0) };
          inline RefundStageRules& setFee(double fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


          // feeBase Field Functions 
          bool hasFeeBase() const { return this->feeBase_ != nullptr;};
          void deleteFeeBase() { this->feeBase_ = nullptr;};
          inline int32_t getFeeBase() const { DARABONBA_PTR_GET_DEFAULT(feeBase_, 0) };
          inline RefundStageRules& setFeeBase(int32_t feeBase) { DARABONBA_PTR_SET_VALUE(feeBase_, feeBase) };


          // feeType Field Functions 
          bool hasFeeType() const { return this->feeType_ != nullptr;};
          void deleteFeeType() { this->feeType_ = nullptr;};
          inline int32_t getFeeType() const { DARABONBA_PTR_GET_DEFAULT(feeType_, 0) };
          inline RefundStageRules& setFeeType(int32_t feeType) { DARABONBA_PTR_SET_VALUE(feeType_, feeType) };


          // from Field Functions 
          bool hasFrom() const { return this->from_ != nullptr;};
          void deleteFrom() { this->from_ = nullptr;};
          inline const RefundStageRules::From & getFrom() const { DARABONBA_PTR_GET_CONST(from_, RefundStageRules::From) };
          inline RefundStageRules::From getFrom() { DARABONBA_PTR_GET(from_, RefundStageRules::From) };
          inline RefundStageRules& setFrom(const RefundStageRules::From & from) { DARABONBA_PTR_SET_VALUE(from_, from) };
          inline RefundStageRules& setFrom(RefundStageRules::From && from) { DARABONBA_PTR_SET_RVALUE(from_, from) };


          // to Field Functions 
          bool hasTo() const { return this->to_ != nullptr;};
          void deleteTo() { this->to_ = nullptr;};
          inline const RefundStageRules::To & getTo() const { DARABONBA_PTR_GET_CONST(to_, RefundStageRules::To) };
          inline RefundStageRules::To getTo() { DARABONBA_PTR_GET(to_, RefundStageRules::To) };
          inline RefundStageRules& setTo(const RefundStageRules::To & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
          inline RefundStageRules& setTo(RefundStageRules::To && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


        protected:
          shared_ptr<double> fee_ {};
          shared_ptr<int32_t> feeBase_ {};
          shared_ptr<int32_t> feeType_ {};
          shared_ptr<RefundStageRules::From> from_ {};
          shared_ptr<RefundStageRules::To> to_ {};
        };

        virtual bool empty() const override { return this->refundStageRules_ == nullptr
        && this->refundType_ == nullptr; };
        // refundStageRules Field Functions 
        bool hasRefundStageRules() const { return this->refundStageRules_ != nullptr;};
        void deleteRefundStageRules() { this->refundStageRules_ = nullptr;};
        inline const vector<RefundRule::RefundStageRules> & getRefundStageRules() const { DARABONBA_PTR_GET_CONST(refundStageRules_, vector<RefundRule::RefundStageRules>) };
        inline vector<RefundRule::RefundStageRules> getRefundStageRules() { DARABONBA_PTR_GET(refundStageRules_, vector<RefundRule::RefundStageRules>) };
        inline RefundRule& setRefundStageRules(const vector<RefundRule::RefundStageRules> & refundStageRules) { DARABONBA_PTR_SET_VALUE(refundStageRules_, refundStageRules) };
        inline RefundRule& setRefundStageRules(vector<RefundRule::RefundStageRules> && refundStageRules) { DARABONBA_PTR_SET_RVALUE(refundStageRules_, refundStageRules) };


        // refundType Field Functions 
        bool hasRefundType() const { return this->refundType_ != nullptr;};
        void deleteRefundType() { this->refundType_ = nullptr;};
        inline int32_t getRefundType() const { DARABONBA_PTR_GET_DEFAULT(refundType_, 0) };
        inline RefundRule& setRefundType(int32_t refundType) { DARABONBA_PTR_SET_VALUE(refundType_, refundType) };


      protected:
        shared_ptr<vector<RefundRule::RefundStageRules>> refundStageRules_ {};
        shared_ptr<int32_t> refundType_ {};
      };

      class RefundAmount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RefundAmount& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
        };
        friend void from_json(const Darabonba::Json& j, RefundAmount& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
        };
        RefundAmount() = default ;
        RefundAmount(const RefundAmount &) = default ;
        RefundAmount(RefundAmount &&) = default ;
        RefundAmount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RefundAmount() = default ;
        RefundAmount& operator=(const RefundAmount &) = default ;
        RefundAmount& operator=(RefundAmount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currencyCode_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
        inline RefundAmount& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currencyCode Field Functions 
        bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
        void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
        inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
        inline RefundAmount& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


      protected:
        shared_ptr<int64_t> amount_ {};
        shared_ptr<string> currencyCode_ {};
      };

      virtual bool empty() const override { return this->canRefund_ == nullptr
        && this->refundAmount_ == nullptr && this->refundRule_ == nullptr; };
      // canRefund Field Functions 
      bool hasCanRefund() const { return this->canRefund_ != nullptr;};
      void deleteCanRefund() { this->canRefund_ = nullptr;};
      inline bool getCanRefund() const { DARABONBA_PTR_GET_DEFAULT(canRefund_, false) };
      inline Data& setCanRefund(bool canRefund) { DARABONBA_PTR_SET_VALUE(canRefund_, canRefund) };


      // refundAmount Field Functions 
      bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
      void deleteRefundAmount() { this->refundAmount_ = nullptr;};
      inline const Data::RefundAmount & getRefundAmount() const { DARABONBA_PTR_GET_CONST(refundAmount_, Data::RefundAmount) };
      inline Data::RefundAmount getRefundAmount() { DARABONBA_PTR_GET(refundAmount_, Data::RefundAmount) };
      inline Data& setRefundAmount(const Data::RefundAmount & refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };
      inline Data& setRefundAmount(Data::RefundAmount && refundAmount) { DARABONBA_PTR_SET_RVALUE(refundAmount_, refundAmount) };


      // refundRule Field Functions 
      bool hasRefundRule() const { return this->refundRule_ != nullptr;};
      void deleteRefundRule() { this->refundRule_ = nullptr;};
      inline const Data::RefundRule & getRefundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Data::RefundRule) };
      inline Data::RefundRule getRefundRule() { DARABONBA_PTR_GET(refundRule_, Data::RefundRule) };
      inline Data& setRefundRule(const Data::RefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
      inline Data& setRefundRule(Data::RefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    protected:
      shared_ptr<bool> canRefund_ {};
      shared_ptr<Data::RefundAmount> refundAmount_ {};
      shared_ptr<Data::RefundRule> refundRule_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TicketCheckRefundResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TicketCheckRefundResponseBody::Data) };
    inline TicketCheckRefundResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TicketCheckRefundResponseBody::Data) };
    inline TicketCheckRefundResponseBody& setData(const TicketCheckRefundResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TicketCheckRefundResponseBody& setData(TicketCheckRefundResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TicketCheckRefundResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TicketCheckRefundResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketCheckRefundResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketCheckRefundResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<TicketCheckRefundResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
