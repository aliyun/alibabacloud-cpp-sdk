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
        DARABONBA_PTR_TO_JSON(ItemOfferId, itemOfferId_);
        DARABONBA_PTR_TO_JSON(Pricing, pricing_);
        DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CancellationPolicies, cancellationPolicies_);
        DARABONBA_PTR_FROM_JSON(ItemOfferId, itemOfferId_);
        DARABONBA_PTR_FROM_JSON(Pricing, pricing_);
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
      class Pricing : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pricing& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(NightlyPrices, nightlyPrices_);
          DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, Pricing& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(NightlyPrices, nightlyPrices_);
          DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        Pricing() = default ;
        Pricing(const Pricing &) = default ;
        Pricing(Pricing &&) = default ;
        Pricing(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pricing() = default ;
        Pricing& operator=(const Pricing &) = default ;
        Pricing& operator=(Pricing &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NightlyPrices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NightlyPrices& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Date, date_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, NightlyPrices& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Date, date_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          NightlyPrices() = default ;
          NightlyPrices(const NightlyPrices &) = default ;
          NightlyPrices(NightlyPrices &&) = default ;
          NightlyPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NightlyPrices() = default ;
          NightlyPrices& operator=(const NightlyPrices &) = default ;
          NightlyPrices& operator=(NightlyPrices &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->date_ == nullptr && this->tracerId_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline string getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
          inline NightlyPrices& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // date Field Functions 
          bool hasDate() const { return this->date_ != nullptr;};
          void deleteDate() { this->date_ = nullptr;};
          inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
          inline NightlyPrices& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline NightlyPrices& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          shared_ptr<string> amount_ {};
          shared_ptr<string> date_ {};
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->currency_ == nullptr
        && this->nightlyPrices_ == nullptr && this->totalAmount_ == nullptr && this->tracerId_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Pricing& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // nightlyPrices Field Functions 
        bool hasNightlyPrices() const { return this->nightlyPrices_ != nullptr;};
        void deleteNightlyPrices() { this->nightlyPrices_ = nullptr;};
        inline const vector<Pricing::NightlyPrices> & getNightlyPrices() const { DARABONBA_PTR_GET_CONST(nightlyPrices_, vector<Pricing::NightlyPrices>) };
        inline vector<Pricing::NightlyPrices> getNightlyPrices() { DARABONBA_PTR_GET(nightlyPrices_, vector<Pricing::NightlyPrices>) };
        inline Pricing& setNightlyPrices(const vector<Pricing::NightlyPrices> & nightlyPrices) { DARABONBA_PTR_SET_VALUE(nightlyPrices_, nightlyPrices) };
        inline Pricing& setNightlyPrices(vector<Pricing::NightlyPrices> && nightlyPrices) { DARABONBA_PTR_SET_RVALUE(nightlyPrices_, nightlyPrices) };


        // totalAmount Field Functions 
        bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
        void deleteTotalAmount() { this->totalAmount_ = nullptr;};
        inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
        inline Pricing& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline Pricing& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        shared_ptr<string> currency_ {};
        shared_ptr<vector<Pricing::NightlyPrices>> nightlyPrices_ {};
        shared_ptr<string> totalAmount_ {};
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
          inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
          inline Penalties& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


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
          inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
          inline Penalties& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline Penalties& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          shared_ptr<string> currency_ {};
          shared_ptr<int64_t> end_ {};
          shared_ptr<string> penaltyType_ {};
          shared_ptr<string> penaltyValue_ {};
          shared_ptr<int64_t> start_ {};
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
        shared_ptr<vector<CancellationPolicies::Penalties>> penalties_ {};
        shared_ptr<string> policyType_ {};
        shared_ptr<string> tracerId_ {};
      };

      virtual bool empty() const override { return this->cancellationPolicies_ == nullptr
        && this->itemOfferId_ == nullptr && this->pricing_ == nullptr && this->tracerId_ == nullptr; };
      // cancellationPolicies Field Functions 
      bool hasCancellationPolicies() const { return this->cancellationPolicies_ != nullptr;};
      void deleteCancellationPolicies() { this->cancellationPolicies_ = nullptr;};
      inline const vector<Data::CancellationPolicies> & getCancellationPolicies() const { DARABONBA_PTR_GET_CONST(cancellationPolicies_, vector<Data::CancellationPolicies>) };
      inline vector<Data::CancellationPolicies> getCancellationPolicies() { DARABONBA_PTR_GET(cancellationPolicies_, vector<Data::CancellationPolicies>) };
      inline Data& setCancellationPolicies(const vector<Data::CancellationPolicies> & cancellationPolicies) { DARABONBA_PTR_SET_VALUE(cancellationPolicies_, cancellationPolicies) };
      inline Data& setCancellationPolicies(vector<Data::CancellationPolicies> && cancellationPolicies) { DARABONBA_PTR_SET_RVALUE(cancellationPolicies_, cancellationPolicies) };


      // itemOfferId Field Functions 
      bool hasItemOfferId() const { return this->itemOfferId_ != nullptr;};
      void deleteItemOfferId() { this->itemOfferId_ = nullptr;};
      inline string getItemOfferId() const { DARABONBA_PTR_GET_DEFAULT(itemOfferId_, "") };
      inline Data& setItemOfferId(string itemOfferId) { DARABONBA_PTR_SET_VALUE(itemOfferId_, itemOfferId) };


      // pricing Field Functions 
      bool hasPricing() const { return this->pricing_ != nullptr;};
      void deletePricing() { this->pricing_ = nullptr;};
      inline const Data::Pricing & getPricing() const { DARABONBA_PTR_GET_CONST(pricing_, Data::Pricing) };
      inline Data::Pricing getPricing() { DARABONBA_PTR_GET(pricing_, Data::Pricing) };
      inline Data& setPricing(const Data::Pricing & pricing) { DARABONBA_PTR_SET_VALUE(pricing_, pricing) };
      inline Data& setPricing(Data::Pricing && pricing) { DARABONBA_PTR_SET_RVALUE(pricing_, pricing) };


      // tracerId Field Functions 
      bool hasTracerId() const { return this->tracerId_ != nullptr;};
      void deleteTracerId() { this->tracerId_ = nullptr;};
      inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
      inline Data& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


    protected:
      shared_ptr<vector<Data::CancellationPolicies>> cancellationPolicies_ {};
      shared_ptr<string> itemOfferId_ {};
      shared_ptr<Data::Pricing> pricing_ {};
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
    shared_ptr<GlobalHotelValidatePriceResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
