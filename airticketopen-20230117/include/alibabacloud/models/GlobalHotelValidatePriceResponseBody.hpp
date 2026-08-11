// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELVALIDATEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELVALIDATEPRICERESPONSEBODY_HPP_
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
  class GlobalHotelValidatePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelValidatePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelValidatePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelValidatePriceResponseBody() = default ;
    GlobalHotelValidatePriceResponseBody(const GlobalHotelValidatePriceResponseBody &) = default ;
    GlobalHotelValidatePriceResponseBody(GlobalHotelValidatePriceResponseBody &&) = default ;
    GlobalHotelValidatePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelValidatePriceResponseBody() = default ;
    GlobalHotelValidatePriceResponseBody& operator=(const GlobalHotelValidatePriceResponseBody &) = default ;
    GlobalHotelValidatePriceResponseBody& operator=(GlobalHotelValidatePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CancellationPolicies, cancellationPolicies_);
        DARABONBA_PTR_TO_JSON(DailyPrices, dailyPrices_);
        DARABONBA_PTR_TO_JSON(ItemOfferId, itemOfferId_);
        DARABONBA_PTR_TO_JSON(TotalPrice, totalPrice_);
        DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CancellationPolicies, cancellationPolicies_);
        DARABONBA_PTR_FROM_JSON(DailyPrices, dailyPrices_);
        DARABONBA_PTR_FROM_JSON(ItemOfferId, itemOfferId_);
        DARABONBA_PTR_FROM_JSON(TotalPrice, totalPrice_);
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
      class TotalPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalPrice& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, TotalPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        TotalPrice() = default ;
        TotalPrice(const TotalPrice &) = default ;
        TotalPrice(TotalPrice &&) = default ;
        TotalPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalPrice() = default ;
        TotalPrice& operator=(const TotalPrice &) = default ;
        TotalPrice& operator=(TotalPrice &&) = default ;
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
        inline TotalPrice& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline TotalPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline TotalPrice& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        // The amount in the smallest currency unit.
        shared_ptr<string> amount_ {};
        // The currency code (ISO 4217).
        shared_ptr<string> currency_ {};
        // null
        shared_ptr<string> tracerId_ {};
      };

      class DailyPrices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DailyPrices& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(Price, price_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, DailyPrices& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(Price, price_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        DailyPrices() = default ;
        DailyPrices(const DailyPrices &) = default ;
        DailyPrices(DailyPrices &&) = default ;
        DailyPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DailyPrices() = default ;
        DailyPrices& operator=(const DailyPrices &) = default ;
        DailyPrices& operator=(DailyPrices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Price : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Price& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, Price& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          Price() = default ;
          Price(const Price &) = default ;
          Price(Price &&) = default ;
          Price(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Price() = default ;
          Price& operator=(const Price &) = default ;
          Price& operator=(Price &&) = default ;
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
          inline Price& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline Price& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The amount in the smallest currency unit.
          shared_ptr<string> amount_ {};
          // The currency code (ISO 4217).
          shared_ptr<string> currency_ {};
          // null
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->date_ == nullptr
        && this->price_ == nullptr && this->tracerId_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline DailyPrices& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline const DailyPrices::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, DailyPrices::Price) };
        inline DailyPrices::Price getPrice() { DARABONBA_PTR_GET(price_, DailyPrices::Price) };
        inline DailyPrices& setPrice(const DailyPrices::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
        inline DailyPrices& setPrice(DailyPrices::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline DailyPrices& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        // The date in yyyy-MM-dd format, in the local time zone of the hotel.
        shared_ptr<string> date_ {};
        // The price for the night.
        shared_ptr<DailyPrices::Price> price_ {};
        // null
        shared_ptr<string> tracerId_ {};
      };

      class CancellationPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CancellationPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(Penalties, penalties_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, CancellationPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(Penalties, penalties_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        CancellationPolicies() = default ;
        CancellationPolicies(const CancellationPolicies &) = default ;
        CancellationPolicies(CancellationPolicies &&) = default ;
        CancellationPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CancellationPolicies() = default ;
        CancellationPolicies& operator=(const CancellationPolicies &) = default ;
        CancellationPolicies& operator=(CancellationPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Penalties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Penalties& obj) { 
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(End, end_);
            DARABONBA_PTR_TO_JSON(PenaltyType, penaltyType_);
            DARABONBA_PTR_TO_JSON(PenaltyValue, penaltyValue_);
            DARABONBA_PTR_TO_JSON(Start, start_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, Penalties& obj) { 
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(End, end_);
            DARABONBA_PTR_FROM_JSON(PenaltyType, penaltyType_);
            DARABONBA_PTR_FROM_JSON(PenaltyValue, penaltyValue_);
            DARABONBA_PTR_FROM_JSON(Start, start_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          Penalties() = default ;
          Penalties(const Penalties &) = default ;
          Penalties(Penalties &&) = default ;
          Penalties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Penalties() = default ;
          Penalties& operator=(const Penalties &) = default ;
          Penalties& operator=(Penalties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->currency_ == nullptr
        && this->end_ == nullptr && this->penaltyType_ == nullptr && this->penaltyValue_ == nullptr && this->start_ == nullptr && this->tracerId_ == nullptr; };
          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Penalties& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // end Field Functions 
          bool hasEnd() const { return this->end_ != nullptr;};
          void deleteEnd() { this->end_ = nullptr;};
          inline string getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
          inline Penalties& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


          // penaltyType Field Functions 
          bool hasPenaltyType() const { return this->penaltyType_ != nullptr;};
          void deletePenaltyType() { this->penaltyType_ = nullptr;};
          inline string getPenaltyType() const { DARABONBA_PTR_GET_DEFAULT(penaltyType_, "") };
          inline Penalties& setPenaltyType(string penaltyType) { DARABONBA_PTR_SET_VALUE(penaltyType_, penaltyType) };


          // penaltyValue Field Functions 
          bool hasPenaltyValue() const { return this->penaltyValue_ != nullptr;};
          void deletePenaltyValue() { this->penaltyValue_ = nullptr;};
          inline string getPenaltyValue() const { DARABONBA_PTR_GET_DEFAULT(penaltyValue_, "") };
          inline Penalties& setPenaltyValue(string penaltyValue) { DARABONBA_PTR_SET_VALUE(penaltyValue_, penaltyValue) };


          // start Field Functions 
          bool hasStart() const { return this->start_ != nullptr;};
          void deleteStart() { this->start_ = nullptr;};
          inline string getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, "") };
          inline Penalties& setStart(string start) { DARABONBA_PTR_SET_VALUE(start_, start) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline Penalties& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          // The currency code. This field has a value only when the penalty type is AMOUNT.
          shared_ptr<string> currency_ {};
          // The effective end time as a UTC millisecond timestamp.
          shared_ptr<string> end_ {};
          // The penalty type (PERCENT/NIGHTS/NON_CANCELLABLE).
          shared_ptr<string> penaltyType_ {};
          // The penalty value (percentage, amount, or number of nights). This field is not present when PenaltyType is NON_CANCELLABLE.
          shared_ptr<string> penaltyValue_ {};
          // The effective start time as a UTC millisecond timestamp.
          shared_ptr<string> start_ {};
          // TracerId
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->penalties_ == nullptr
        && this->policyType_ == nullptr && this->tracerId_ == nullptr; };
        // penalties Field Functions 
        bool hasPenalties() const { return this->penalties_ != nullptr;};
        void deletePenalties() { this->penalties_ = nullptr;};
        inline const vector<CancellationPolicies::Penalties> & getPenalties() const { DARABONBA_PTR_GET_CONST(penalties_, vector<CancellationPolicies::Penalties>) };
        inline vector<CancellationPolicies::Penalties> getPenalties() { DARABONBA_PTR_GET(penalties_, vector<CancellationPolicies::Penalties>) };
        inline CancellationPolicies& setPenalties(const vector<CancellationPolicies::Penalties> & penalties) { DARABONBA_PTR_SET_VALUE(penalties_, penalties) };
        inline CancellationPolicies& setPenalties(vector<CancellationPolicies::Penalties> && penalties) { DARABONBA_PTR_SET_RVALUE(penalties_, penalties) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline CancellationPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline CancellationPolicies& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        // The list of cancellation penalty details.
        shared_ptr<vector<CancellationPolicies::Penalties>> penalties_ {};
        // The cancellation policy type (FREE_CANCEL/CONDITIONAL/NON_REFUNDABLE).
        shared_ptr<string> policyType_ {};
        // TracerId
        shared_ptr<string> tracerId_ {};
      };

      virtual bool empty() const override { return this->cancellationPolicies_ == nullptr
        && this->dailyPrices_ == nullptr && this->itemOfferId_ == nullptr && this->totalPrice_ == nullptr && this->tracerId_ == nullptr; };
      // cancellationPolicies Field Functions 
      bool hasCancellationPolicies() const { return this->cancellationPolicies_ != nullptr;};
      void deleteCancellationPolicies() { this->cancellationPolicies_ = nullptr;};
      inline const vector<Data::CancellationPolicies> & getCancellationPolicies() const { DARABONBA_PTR_GET_CONST(cancellationPolicies_, vector<Data::CancellationPolicies>) };
      inline vector<Data::CancellationPolicies> getCancellationPolicies() { DARABONBA_PTR_GET(cancellationPolicies_, vector<Data::CancellationPolicies>) };
      inline Data& setCancellationPolicies(const vector<Data::CancellationPolicies> & cancellationPolicies) { DARABONBA_PTR_SET_VALUE(cancellationPolicies_, cancellationPolicies) };
      inline Data& setCancellationPolicies(vector<Data::CancellationPolicies> && cancellationPolicies) { DARABONBA_PTR_SET_RVALUE(cancellationPolicies_, cancellationPolicies) };


      // dailyPrices Field Functions 
      bool hasDailyPrices() const { return this->dailyPrices_ != nullptr;};
      void deleteDailyPrices() { this->dailyPrices_ = nullptr;};
      inline const vector<Data::DailyPrices> & getDailyPrices() const { DARABONBA_PTR_GET_CONST(dailyPrices_, vector<Data::DailyPrices>) };
      inline vector<Data::DailyPrices> getDailyPrices() { DARABONBA_PTR_GET(dailyPrices_, vector<Data::DailyPrices>) };
      inline Data& setDailyPrices(const vector<Data::DailyPrices> & dailyPrices) { DARABONBA_PTR_SET_VALUE(dailyPrices_, dailyPrices) };
      inline Data& setDailyPrices(vector<Data::DailyPrices> && dailyPrices) { DARABONBA_PTR_SET_RVALUE(dailyPrices_, dailyPrices) };


      // itemOfferId Field Functions 
      bool hasItemOfferId() const { return this->itemOfferId_ != nullptr;};
      void deleteItemOfferId() { this->itemOfferId_ = nullptr;};
      inline string getItemOfferId() const { DARABONBA_PTR_GET_DEFAULT(itemOfferId_, "") };
      inline Data& setItemOfferId(string itemOfferId) { DARABONBA_PTR_SET_VALUE(itemOfferId_, itemOfferId) };


      // totalPrice Field Functions 
      bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
      void deleteTotalPrice() { this->totalPrice_ = nullptr;};
      inline const Data::TotalPrice & getTotalPrice() const { DARABONBA_PTR_GET_CONST(totalPrice_, Data::TotalPrice) };
      inline Data::TotalPrice getTotalPrice() { DARABONBA_PTR_GET(totalPrice_, Data::TotalPrice) };
      inline Data& setTotalPrice(const Data::TotalPrice & totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };
      inline Data& setTotalPrice(Data::TotalPrice && totalPrice) { DARABONBA_PTR_SET_RVALUE(totalPrice_, totalPrice) };


      // tracerId Field Functions 
      bool hasTracerId() const { return this->tracerId_ != nullptr;};
      void deleteTracerId() { this->tracerId_ = nullptr;};
      inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
      inline Data& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


    protected:
      // The cancellation policies.
      shared_ptr<vector<Data::CancellationPolicies>> cancellationPolicies_ {};
      // The list of daily prices.
      shared_ptr<vector<Data::DailyPrices>> dailyPrices_ {};
      // The price validation result ID, used for subsequent order creation.
      shared_ptr<string> itemOfferId_ {};
      // The total selling price.
      shared_ptr<Data::TotalPrice> totalPrice_ {};
      // TracerId
      shared_ptr<string> tracerId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tracerId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GlobalHotelValidatePriceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GlobalHotelValidatePriceResponseBody::Data) };
    inline GlobalHotelValidatePriceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GlobalHotelValidatePriceResponseBody::Data) };
    inline GlobalHotelValidatePriceResponseBody& setData(const GlobalHotelValidatePriceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GlobalHotelValidatePriceResponseBody& setData(GlobalHotelValidatePriceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GlobalHotelValidatePriceResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GlobalHotelValidatePriceResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GlobalHotelValidatePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GlobalHotelValidatePriceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelValidatePriceResponseBody& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The business data.
    shared_ptr<GlobalHotelValidatePriceResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // TracerId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
