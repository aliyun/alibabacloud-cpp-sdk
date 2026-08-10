// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELAPPLYREFUNDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELAPPLYREFUNDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelApplyRefundResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelApplyRefundResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelApplyRefundResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelApplyRefundResponseBody() = default ;
    GlobalHotelApplyRefundResponseBody(const GlobalHotelApplyRefundResponseBody &) = default ;
    GlobalHotelApplyRefundResponseBody(GlobalHotelApplyRefundResponseBody &&) = default ;
    GlobalHotelApplyRefundResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelApplyRefundResponseBody() = default ;
    GlobalHotelApplyRefundResponseBody& operator=(const GlobalHotelApplyRefundResponseBody &) = default ;
    GlobalHotelApplyRefundResponseBody& operator=(GlobalHotelApplyRefundResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SellRefundOrderId, sellRefundOrderId_);
        DARABONBA_PTR_TO_JSON(TotalPenaltyAmount, totalPenaltyAmount_);
        DARABONBA_PTR_TO_JSON(TotalRefundAmount, totalRefundAmount_);
        DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SellRefundOrderId, sellRefundOrderId_);
        DARABONBA_PTR_FROM_JSON(TotalPenaltyAmount, totalPenaltyAmount_);
        DARABONBA_PTR_FROM_JSON(TotalRefundAmount, totalRefundAmount_);
        DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
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
      class TotalRefundAmount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalRefundAmount& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, TotalRefundAmount& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        TotalRefundAmount() = default ;
        TotalRefundAmount(const TotalRefundAmount &) = default ;
        TotalRefundAmount(TotalRefundAmount &&) = default ;
        TotalRefundAmount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalRefundAmount() = default ;
        TotalRefundAmount& operator=(const TotalRefundAmount &) = default ;
        TotalRefundAmount& operator=(TotalRefundAmount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline TotalRefundAmount& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline TotalRefundAmount& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline TotalRefundAmount& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        // The amount in the smallest currency unit.
        shared_ptr<string> amount_ {};
        // The currency code in ISO 4217 format.
        shared_ptr<string> currency_ {};
        // TraceId
        shared_ptr<string> tracerId_ {};
      };

      class TotalPenaltyAmount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalPenaltyAmount& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, TotalPenaltyAmount& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        TotalPenaltyAmount() = default ;
        TotalPenaltyAmount(const TotalPenaltyAmount &) = default ;
        TotalPenaltyAmount(TotalPenaltyAmount &&) = default ;
        TotalPenaltyAmount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalPenaltyAmount() = default ;
        TotalPenaltyAmount& operator=(const TotalPenaltyAmount &) = default ;
        TotalPenaltyAmount& operator=(TotalPenaltyAmount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
        inline TotalPenaltyAmount& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline TotalPenaltyAmount& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline TotalPenaltyAmount& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        // The amount in the smallest currency unit.
        shared_ptr<string> amount_ {};
        // The currency code in ISO 4217 format.
        shared_ptr<string> currency_ {};
        // TraceId
        shared_ptr<string> tracerId_ {};
      };

      virtual bool empty() const override { return this->sellRefundOrderId_ == nullptr
        && this->totalPenaltyAmount_ == nullptr && this->totalRefundAmount_ == nullptr && this->tracerId_ == nullptr; };
      // sellRefundOrderId Field Functions 
      bool hasSellRefundOrderId() const { return this->sellRefundOrderId_ != nullptr;};
      void deleteSellRefundOrderId() { this->sellRefundOrderId_ = nullptr;};
      inline int64_t getSellRefundOrderId() const { DARABONBA_PTR_GET_DEFAULT(sellRefundOrderId_, 0L) };
      inline Data& setSellRefundOrderId(int64_t sellRefundOrderId) { DARABONBA_PTR_SET_VALUE(sellRefundOrderId_, sellRefundOrderId) };


      // totalPenaltyAmount Field Functions 
      bool hasTotalPenaltyAmount() const { return this->totalPenaltyAmount_ != nullptr;};
      void deleteTotalPenaltyAmount() { this->totalPenaltyAmount_ = nullptr;};
      inline const Data::TotalPenaltyAmount & getTotalPenaltyAmount() const { DARABONBA_PTR_GET_CONST(totalPenaltyAmount_, Data::TotalPenaltyAmount) };
      inline Data::TotalPenaltyAmount getTotalPenaltyAmount() { DARABONBA_PTR_GET(totalPenaltyAmount_, Data::TotalPenaltyAmount) };
      inline Data& setTotalPenaltyAmount(const Data::TotalPenaltyAmount & totalPenaltyAmount) { DARABONBA_PTR_SET_VALUE(totalPenaltyAmount_, totalPenaltyAmount) };
      inline Data& setTotalPenaltyAmount(Data::TotalPenaltyAmount && totalPenaltyAmount) { DARABONBA_PTR_SET_RVALUE(totalPenaltyAmount_, totalPenaltyAmount) };


      // totalRefundAmount Field Functions 
      bool hasTotalRefundAmount() const { return this->totalRefundAmount_ != nullptr;};
      void deleteTotalRefundAmount() { this->totalRefundAmount_ = nullptr;};
      inline const Data::TotalRefundAmount & getTotalRefundAmount() const { DARABONBA_PTR_GET_CONST(totalRefundAmount_, Data::TotalRefundAmount) };
      inline Data::TotalRefundAmount getTotalRefundAmount() { DARABONBA_PTR_GET(totalRefundAmount_, Data::TotalRefundAmount) };
      inline Data& setTotalRefundAmount(const Data::TotalRefundAmount & totalRefundAmount) { DARABONBA_PTR_SET_VALUE(totalRefundAmount_, totalRefundAmount) };
      inline Data& setTotalRefundAmount(Data::TotalRefundAmount && totalRefundAmount) { DARABONBA_PTR_SET_RVALUE(totalRefundAmount_, totalRefundAmount) };


      // tracerId Field Functions 
      bool hasTracerId() const { return this->tracerId_ != nullptr;};
      void deleteTracerId() { this->tracerId_ = nullptr;};
      inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
      inline Data& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


    protected:
      // The after-sales refund order ID.
      shared_ptr<int64_t> sellRefundOrderId_ {};
      // The total penalty amount.
      shared_ptr<Data::TotalPenaltyAmount> totalPenaltyAmount_ {};
      // The total refund amount.
      shared_ptr<Data::TotalRefundAmount> totalRefundAmount_ {};
      // TraceId
      shared_ptr<string> tracerId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GlobalHotelApplyRefundResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GlobalHotelApplyRefundResponseBody::Data) };
    inline GlobalHotelApplyRefundResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GlobalHotelApplyRefundResponseBody::Data) };
    inline GlobalHotelApplyRefundResponseBody& setData(const GlobalHotelApplyRefundResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GlobalHotelApplyRefundResponseBody& setData(GlobalHotelApplyRefundResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GlobalHotelApplyRefundResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GlobalHotelApplyRefundResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalHotelApplyRefundResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GlobalHotelApplyRefundResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelApplyRefundResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The business data.
    shared_ptr<GlobalHotelApplyRefundResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // TraceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
