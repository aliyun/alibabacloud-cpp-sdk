// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAHOTELSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAHOTELSVALUE_HPP_
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
  class DataHotelsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataHotelsValue& obj) { 
      DARABONBA_PTR_TO_JSON(CheckInDate, checkInDate_);
      DARABONBA_PTR_TO_JSON(CheckOutDate, checkOutDate_);
      DARABONBA_PTR_TO_JSON(Rooms, rooms_);
      DARABONBA_PTR_TO_JSON(StandardRoomId, standardRoomId_);
      DARABONBA_PTR_TO_JSON(Offers, offers_);
    };
    friend void from_json(const Darabonba::Json& j, DataHotelsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckInDate, checkInDate_);
      DARABONBA_PTR_FROM_JSON(CheckOutDate, checkOutDate_);
      DARABONBA_PTR_FROM_JSON(Rooms, rooms_);
      DARABONBA_PTR_FROM_JSON(StandardRoomId, standardRoomId_);
      DARABONBA_PTR_FROM_JSON(Offers, offers_);
    };
    DataHotelsValue() = default ;
    DataHotelsValue(const DataHotelsValue &) = default ;
    DataHotelsValue(DataHotelsValue &&) = default ;
    DataHotelsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataHotelsValue() = default ;
    DataHotelsValue& operator=(const DataHotelsValue &) = default ;
    DataHotelsValue& operator=(DataHotelsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Offers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Offers& obj) { 
        DARABONBA_PTR_TO_JSON(ItemOfferKey, itemOfferKey_);
        DARABONBA_PTR_TO_JSON(RatePlanName, ratePlanName_);
        DARABONBA_PTR_TO_JSON(MealType, mealType_);
        DARABONBA_PTR_TO_JSON(MealCount, mealCount_);
        DARABONBA_PTR_TO_JSON(CancelPolicy, cancelPolicy_);
        DARABONBA_PTR_TO_JSON(SellingTotalPrice, sellingTotalPrice_);
        DARABONBA_PTR_TO_JSON(SellingDailyPrices, sellingDailyPrices_);
        DARABONBA_PTR_TO_JSON(AvailableRooms, availableRooms_);
        DARABONBA_PTR_TO_JSON(MaxOccupancy, maxOccupancy_);
        DARABONBA_PTR_TO_JSON(ConfirmType, confirmType_);
      };
      friend void from_json(const Darabonba::Json& j, Offers& obj) { 
        DARABONBA_PTR_FROM_JSON(ItemOfferKey, itemOfferKey_);
        DARABONBA_PTR_FROM_JSON(RatePlanName, ratePlanName_);
        DARABONBA_PTR_FROM_JSON(MealType, mealType_);
        DARABONBA_PTR_FROM_JSON(MealCount, mealCount_);
        DARABONBA_PTR_FROM_JSON(CancelPolicy, cancelPolicy_);
        DARABONBA_PTR_FROM_JSON(SellingTotalPrice, sellingTotalPrice_);
        DARABONBA_PTR_FROM_JSON(SellingDailyPrices, sellingDailyPrices_);
        DARABONBA_PTR_FROM_JSON(AvailableRooms, availableRooms_);
        DARABONBA_PTR_FROM_JSON(MaxOccupancy, maxOccupancy_);
        DARABONBA_PTR_FROM_JSON(ConfirmType, confirmType_);
      };
      Offers() = default ;
      Offers(const Offers &) = default ;
      Offers(Offers &&) = default ;
      Offers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Offers() = default ;
      Offers& operator=(const Offers &) = default ;
      Offers& operator=(Offers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SellingDailyPrices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SellingDailyPrices& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(Price, price_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, SellingDailyPrices& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(Price, price_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        SellingDailyPrices() = default ;
        SellingDailyPrices(const SellingDailyPrices &) = default ;
        SellingDailyPrices(SellingDailyPrices &&) = default ;
        SellingDailyPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SellingDailyPrices() = default ;
        SellingDailyPrices& operator=(const SellingDailyPrices &) = default ;
        SellingDailyPrices& operator=(SellingDailyPrices &&) = default ;
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
          inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
          inline Price& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


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
          shared_ptr<double> amount_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->date_ == nullptr
        && this->price_ == nullptr && this->tracerId_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline SellingDailyPrices& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // price Field Functions 
        bool hasPrice() const { return this->price_ != nullptr;};
        void deletePrice() { this->price_ = nullptr;};
        inline const SellingDailyPrices::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, SellingDailyPrices::Price) };
        inline SellingDailyPrices::Price getPrice() { DARABONBA_PTR_GET(price_, SellingDailyPrices::Price) };
        inline SellingDailyPrices& setPrice(const SellingDailyPrices::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
        inline SellingDailyPrices& setPrice(SellingDailyPrices::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline SellingDailyPrices& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<SellingDailyPrices::Price> price_ {};
        shared_ptr<string> tracerId_ {};
      };

      class SellingTotalPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SellingTotalPrice& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, SellingTotalPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        SellingTotalPrice() = default ;
        SellingTotalPrice(const SellingTotalPrice &) = default ;
        SellingTotalPrice(SellingTotalPrice &&) = default ;
        SellingTotalPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SellingTotalPrice() = default ;
        SellingTotalPrice& operator=(const SellingTotalPrice &) = default ;
        SellingTotalPrice& operator=(SellingTotalPrice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
        inline SellingTotalPrice& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline SellingTotalPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline SellingTotalPrice& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        shared_ptr<double> amount_ {};
        shared_ptr<string> currency_ {};
        shared_ptr<string> tracerId_ {};
      };

      class CancelPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CancelPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(Penalties, penalties_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, CancelPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(Penalties, penalties_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        CancelPolicy() = default ;
        CancelPolicy(const CancelPolicy &) = default ;
        CancelPolicy(CancelPolicy &&) = default ;
        CancelPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CancelPolicy() = default ;
        CancelPolicy& operator=(const CancelPolicy &) = default ;
        CancelPolicy& operator=(CancelPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Penalties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Penalties& obj) { 
            DARABONBA_PTR_TO_JSON(Start, start_);
            DARABONBA_PTR_TO_JSON(End, end_);
            DARABONBA_PTR_TO_JSON(PenaltyType, penaltyType_);
            DARABONBA_PTR_TO_JSON(PenaltyValue, penaltyValue_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, Penalties& obj) { 
            DARABONBA_PTR_FROM_JSON(Start, start_);
            DARABONBA_PTR_FROM_JSON(End, end_);
            DARABONBA_PTR_FROM_JSON(PenaltyType, penaltyType_);
            DARABONBA_PTR_FROM_JSON(PenaltyValue, penaltyValue_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
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
          virtual bool empty() const override { return this->start_ == nullptr
        && this->end_ == nullptr && this->penaltyType_ == nullptr && this->penaltyValue_ == nullptr && this->currency_ == nullptr && this->tracerId_ == nullptr; };
          // start Field Functions 
          bool hasStart() const { return this->start_ != nullptr;};
          void deleteStart() { this->start_ = nullptr;};
          inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
          inline Penalties& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


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


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline Penalties& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline Penalties& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          shared_ptr<int64_t> start_ {};
          shared_ptr<int64_t> end_ {};
          shared_ptr<string> penaltyType_ {};
          shared_ptr<string> penaltyValue_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->policyType_ == nullptr
        && this->penalties_ == nullptr && this->tracerId_ == nullptr; };
        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline CancelPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // penalties Field Functions 
        bool hasPenalties() const { return this->penalties_ != nullptr;};
        void deletePenalties() { this->penalties_ = nullptr;};
        inline const vector<CancelPolicy::Penalties> & getPenalties() const { DARABONBA_PTR_GET_CONST(penalties_, vector<CancelPolicy::Penalties>) };
        inline vector<CancelPolicy::Penalties> getPenalties() { DARABONBA_PTR_GET(penalties_, vector<CancelPolicy::Penalties>) };
        inline CancelPolicy& setPenalties(const vector<CancelPolicy::Penalties> & penalties) { DARABONBA_PTR_SET_VALUE(penalties_, penalties) };
        inline CancelPolicy& setPenalties(vector<CancelPolicy::Penalties> && penalties) { DARABONBA_PTR_SET_RVALUE(penalties_, penalties) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline CancelPolicy& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        shared_ptr<string> policyType_ {};
        shared_ptr<vector<CancelPolicy::Penalties>> penalties_ {};
        shared_ptr<string> tracerId_ {};
      };

      virtual bool empty() const override { return this->itemOfferKey_ == nullptr
        && this->ratePlanName_ == nullptr && this->mealType_ == nullptr && this->mealCount_ == nullptr && this->cancelPolicy_ == nullptr && this->sellingTotalPrice_ == nullptr
        && this->sellingDailyPrices_ == nullptr && this->availableRooms_ == nullptr && this->maxOccupancy_ == nullptr && this->confirmType_ == nullptr; };
      // itemOfferKey Field Functions 
      bool hasItemOfferKey() const { return this->itemOfferKey_ != nullptr;};
      void deleteItemOfferKey() { this->itemOfferKey_ = nullptr;};
      inline string getItemOfferKey() const { DARABONBA_PTR_GET_DEFAULT(itemOfferKey_, "") };
      inline Offers& setItemOfferKey(string itemOfferKey) { DARABONBA_PTR_SET_VALUE(itemOfferKey_, itemOfferKey) };


      // ratePlanName Field Functions 
      bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
      void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
      inline string getRatePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
      inline Offers& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


      // mealType Field Functions 
      bool hasMealType() const { return this->mealType_ != nullptr;};
      void deleteMealType() { this->mealType_ = nullptr;};
      inline string getMealType() const { DARABONBA_PTR_GET_DEFAULT(mealType_, "") };
      inline Offers& setMealType(string mealType) { DARABONBA_PTR_SET_VALUE(mealType_, mealType) };


      // mealCount Field Functions 
      bool hasMealCount() const { return this->mealCount_ != nullptr;};
      void deleteMealCount() { this->mealCount_ = nullptr;};
      inline int32_t getMealCount() const { DARABONBA_PTR_GET_DEFAULT(mealCount_, 0) };
      inline Offers& setMealCount(int32_t mealCount) { DARABONBA_PTR_SET_VALUE(mealCount_, mealCount) };


      // cancelPolicy Field Functions 
      bool hasCancelPolicy() const { return this->cancelPolicy_ != nullptr;};
      void deleteCancelPolicy() { this->cancelPolicy_ = nullptr;};
      inline const Offers::CancelPolicy & getCancelPolicy() const { DARABONBA_PTR_GET_CONST(cancelPolicy_, Offers::CancelPolicy) };
      inline Offers::CancelPolicy getCancelPolicy() { DARABONBA_PTR_GET(cancelPolicy_, Offers::CancelPolicy) };
      inline Offers& setCancelPolicy(const Offers::CancelPolicy & cancelPolicy) { DARABONBA_PTR_SET_VALUE(cancelPolicy_, cancelPolicy) };
      inline Offers& setCancelPolicy(Offers::CancelPolicy && cancelPolicy) { DARABONBA_PTR_SET_RVALUE(cancelPolicy_, cancelPolicy) };


      // sellingTotalPrice Field Functions 
      bool hasSellingTotalPrice() const { return this->sellingTotalPrice_ != nullptr;};
      void deleteSellingTotalPrice() { this->sellingTotalPrice_ = nullptr;};
      inline const Offers::SellingTotalPrice & getSellingTotalPrice() const { DARABONBA_PTR_GET_CONST(sellingTotalPrice_, Offers::SellingTotalPrice) };
      inline Offers::SellingTotalPrice getSellingTotalPrice() { DARABONBA_PTR_GET(sellingTotalPrice_, Offers::SellingTotalPrice) };
      inline Offers& setSellingTotalPrice(const Offers::SellingTotalPrice & sellingTotalPrice) { DARABONBA_PTR_SET_VALUE(sellingTotalPrice_, sellingTotalPrice) };
      inline Offers& setSellingTotalPrice(Offers::SellingTotalPrice && sellingTotalPrice) { DARABONBA_PTR_SET_RVALUE(sellingTotalPrice_, sellingTotalPrice) };


      // sellingDailyPrices Field Functions 
      bool hasSellingDailyPrices() const { return this->sellingDailyPrices_ != nullptr;};
      void deleteSellingDailyPrices() { this->sellingDailyPrices_ = nullptr;};
      inline const vector<Offers::SellingDailyPrices> & getSellingDailyPrices() const { DARABONBA_PTR_GET_CONST(sellingDailyPrices_, vector<Offers::SellingDailyPrices>) };
      inline vector<Offers::SellingDailyPrices> getSellingDailyPrices() { DARABONBA_PTR_GET(sellingDailyPrices_, vector<Offers::SellingDailyPrices>) };
      inline Offers& setSellingDailyPrices(const vector<Offers::SellingDailyPrices> & sellingDailyPrices) { DARABONBA_PTR_SET_VALUE(sellingDailyPrices_, sellingDailyPrices) };
      inline Offers& setSellingDailyPrices(vector<Offers::SellingDailyPrices> && sellingDailyPrices) { DARABONBA_PTR_SET_RVALUE(sellingDailyPrices_, sellingDailyPrices) };


      // availableRooms Field Functions 
      bool hasAvailableRooms() const { return this->availableRooms_ != nullptr;};
      void deleteAvailableRooms() { this->availableRooms_ = nullptr;};
      inline int32_t getAvailableRooms() const { DARABONBA_PTR_GET_DEFAULT(availableRooms_, 0) };
      inline Offers& setAvailableRooms(int32_t availableRooms) { DARABONBA_PTR_SET_VALUE(availableRooms_, availableRooms) };


      // maxOccupancy Field Functions 
      bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
      void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
      inline int32_t getMaxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
      inline Offers& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


      // confirmType Field Functions 
      bool hasConfirmType() const { return this->confirmType_ != nullptr;};
      void deleteConfirmType() { this->confirmType_ = nullptr;};
      inline string getConfirmType() const { DARABONBA_PTR_GET_DEFAULT(confirmType_, "") };
      inline Offers& setConfirmType(string confirmType) { DARABONBA_PTR_SET_VALUE(confirmType_, confirmType) };


    protected:
      shared_ptr<string> itemOfferKey_ {};
      shared_ptr<string> ratePlanName_ {};
      shared_ptr<string> mealType_ {};
      shared_ptr<int32_t> mealCount_ {};
      shared_ptr<Offers::CancelPolicy> cancelPolicy_ {};
      shared_ptr<Offers::SellingTotalPrice> sellingTotalPrice_ {};
      shared_ptr<vector<Offers::SellingDailyPrices>> sellingDailyPrices_ {};
      shared_ptr<int32_t> availableRooms_ {};
      shared_ptr<int32_t> maxOccupancy_ {};
      shared_ptr<string> confirmType_ {};
    };

    class Rooms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rooms& obj) { 
        DARABONBA_PTR_TO_JSON(StandardRoomId, standardRoomId_);
        DARABONBA_PTR_TO_JSON(LowestSellingPrice, lowestSellingPrice_);
        DARABONBA_PTR_TO_JSON(Offers, offers_);
      };
      friend void from_json(const Darabonba::Json& j, Rooms& obj) { 
        DARABONBA_PTR_FROM_JSON(StandardRoomId, standardRoomId_);
        DARABONBA_PTR_FROM_JSON(LowestSellingPrice, lowestSellingPrice_);
        DARABONBA_PTR_FROM_JSON(Offers, offers_);
      };
      Rooms() = default ;
      Rooms(const Rooms &) = default ;
      Rooms(Rooms &&) = default ;
      Rooms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rooms() = default ;
      Rooms& operator=(const Rooms &) = default ;
      Rooms& operator=(Rooms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Offers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Offers& obj) { 
          DARABONBA_PTR_TO_JSON(ItemOfferKey, itemOfferKey_);
          DARABONBA_PTR_TO_JSON(RatePlanName, ratePlanName_);
          DARABONBA_PTR_TO_JSON(MealType, mealType_);
          DARABONBA_PTR_TO_JSON(MealCount, mealCount_);
          DARABONBA_PTR_TO_JSON(CancelPolicy, cancelPolicy_);
          DARABONBA_PTR_TO_JSON(SellingTotalPrice, sellingTotalPrice_);
          DARABONBA_PTR_TO_JSON(SellingDailyPrices, sellingDailyPrices_);
          DARABONBA_PTR_TO_JSON(AvailableRooms, availableRooms_);
          DARABONBA_PTR_TO_JSON(MaxOccupancy, maxOccupancy_);
          DARABONBA_PTR_TO_JSON(ConfirmType, confirmType_);
        };
        friend void from_json(const Darabonba::Json& j, Offers& obj) { 
          DARABONBA_PTR_FROM_JSON(ItemOfferKey, itemOfferKey_);
          DARABONBA_PTR_FROM_JSON(RatePlanName, ratePlanName_);
          DARABONBA_PTR_FROM_JSON(MealType, mealType_);
          DARABONBA_PTR_FROM_JSON(MealCount, mealCount_);
          DARABONBA_PTR_FROM_JSON(CancelPolicy, cancelPolicy_);
          DARABONBA_PTR_FROM_JSON(SellingTotalPrice, sellingTotalPrice_);
          DARABONBA_PTR_FROM_JSON(SellingDailyPrices, sellingDailyPrices_);
          DARABONBA_PTR_FROM_JSON(AvailableRooms, availableRooms_);
          DARABONBA_PTR_FROM_JSON(MaxOccupancy, maxOccupancy_);
          DARABONBA_PTR_FROM_JSON(ConfirmType, confirmType_);
        };
        Offers() = default ;
        Offers(const Offers &) = default ;
        Offers(Offers &&) = default ;
        Offers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Offers() = default ;
        Offers& operator=(const Offers &) = default ;
        Offers& operator=(Offers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SellingDailyPrices : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SellingDailyPrices& obj) { 
            DARABONBA_PTR_TO_JSON(Date, date_);
            DARABONBA_PTR_TO_JSON(Price, price_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, SellingDailyPrices& obj) { 
            DARABONBA_PTR_FROM_JSON(Date, date_);
            DARABONBA_PTR_FROM_JSON(Price, price_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          SellingDailyPrices() = default ;
          SellingDailyPrices(const SellingDailyPrices &) = default ;
          SellingDailyPrices(SellingDailyPrices &&) = default ;
          SellingDailyPrices(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SellingDailyPrices() = default ;
          SellingDailyPrices& operator=(const SellingDailyPrices &) = default ;
          SellingDailyPrices& operator=(SellingDailyPrices &&) = default ;
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
            inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
            inline Price& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


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
            shared_ptr<double> amount_ {};
            shared_ptr<string> currency_ {};
            shared_ptr<string> tracerId_ {};
          };

          virtual bool empty() const override { return this->date_ == nullptr
        && this->price_ == nullptr && this->tracerId_ == nullptr; };
          // date Field Functions 
          bool hasDate() const { return this->date_ != nullptr;};
          void deleteDate() { this->date_ = nullptr;};
          inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
          inline SellingDailyPrices& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


          // price Field Functions 
          bool hasPrice() const { return this->price_ != nullptr;};
          void deletePrice() { this->price_ = nullptr;};
          inline const SellingDailyPrices::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, SellingDailyPrices::Price) };
          inline SellingDailyPrices::Price getPrice() { DARABONBA_PTR_GET(price_, SellingDailyPrices::Price) };
          inline SellingDailyPrices& setPrice(const SellingDailyPrices::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
          inline SellingDailyPrices& setPrice(SellingDailyPrices::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline SellingDailyPrices& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          shared_ptr<string> date_ {};
          shared_ptr<SellingDailyPrices::Price> price_ {};
          shared_ptr<string> tracerId_ {};
        };

        class SellingTotalPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SellingTotalPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(Currency, currency_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, SellingTotalPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(Currency, currency_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          SellingTotalPrice() = default ;
          SellingTotalPrice(const SellingTotalPrice &) = default ;
          SellingTotalPrice(SellingTotalPrice &&) = default ;
          SellingTotalPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SellingTotalPrice() = default ;
          SellingTotalPrice& operator=(const SellingTotalPrice &) = default ;
          SellingTotalPrice& operator=(SellingTotalPrice &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
          // amount Field Functions 
          bool hasAmount() const { return this->amount_ != nullptr;};
          void deleteAmount() { this->amount_ = nullptr;};
          inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
          inline SellingTotalPrice& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currency Field Functions 
          bool hasCurrency() const { return this->currency_ != nullptr;};
          void deleteCurrency() { this->currency_ = nullptr;};
          inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
          inline SellingTotalPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline SellingTotalPrice& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          shared_ptr<double> amount_ {};
          shared_ptr<string> currency_ {};
          shared_ptr<string> tracerId_ {};
        };

        class CancelPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CancelPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
            DARABONBA_PTR_TO_JSON(Penalties, penalties_);
            DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
          };
          friend void from_json(const Darabonba::Json& j, CancelPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
            DARABONBA_PTR_FROM_JSON(Penalties, penalties_);
            DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
          };
          CancelPolicy() = default ;
          CancelPolicy(const CancelPolicy &) = default ;
          CancelPolicy(CancelPolicy &&) = default ;
          CancelPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CancelPolicy() = default ;
          CancelPolicy& operator=(const CancelPolicy &) = default ;
          CancelPolicy& operator=(CancelPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Penalties : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Penalties& obj) { 
              DARABONBA_PTR_TO_JSON(Start, start_);
              DARABONBA_PTR_TO_JSON(End, end_);
              DARABONBA_PTR_TO_JSON(PenaltyType, penaltyType_);
              DARABONBA_PTR_TO_JSON(PenaltyValue, penaltyValue_);
              DARABONBA_PTR_TO_JSON(Currency, currency_);
              DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
            };
            friend void from_json(const Darabonba::Json& j, Penalties& obj) { 
              DARABONBA_PTR_FROM_JSON(Start, start_);
              DARABONBA_PTR_FROM_JSON(End, end_);
              DARABONBA_PTR_FROM_JSON(PenaltyType, penaltyType_);
              DARABONBA_PTR_FROM_JSON(PenaltyValue, penaltyValue_);
              DARABONBA_PTR_FROM_JSON(Currency, currency_);
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
            virtual bool empty() const override { return this->start_ == nullptr
        && this->end_ == nullptr && this->penaltyType_ == nullptr && this->penaltyValue_ == nullptr && this->currency_ == nullptr && this->tracerId_ == nullptr; };
            // start Field Functions 
            bool hasStart() const { return this->start_ != nullptr;};
            void deleteStart() { this->start_ = nullptr;};
            inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
            inline Penalties& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


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


            // currency Field Functions 
            bool hasCurrency() const { return this->currency_ != nullptr;};
            void deleteCurrency() { this->currency_ = nullptr;};
            inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
            inline Penalties& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


            // tracerId Field Functions 
            bool hasTracerId() const { return this->tracerId_ != nullptr;};
            void deleteTracerId() { this->tracerId_ = nullptr;};
            inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
            inline Penalties& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


          protected:
            shared_ptr<int64_t> start_ {};
            shared_ptr<int64_t> end_ {};
            shared_ptr<string> penaltyType_ {};
            shared_ptr<string> penaltyValue_ {};
            shared_ptr<string> currency_ {};
            shared_ptr<string> tracerId_ {};
          };

          virtual bool empty() const override { return this->policyType_ == nullptr
        && this->penalties_ == nullptr && this->tracerId_ == nullptr; };
          // policyType Field Functions 
          bool hasPolicyType() const { return this->policyType_ != nullptr;};
          void deletePolicyType() { this->policyType_ = nullptr;};
          inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
          inline CancelPolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


          // penalties Field Functions 
          bool hasPenalties() const { return this->penalties_ != nullptr;};
          void deletePenalties() { this->penalties_ = nullptr;};
          inline const vector<CancelPolicy::Penalties> & getPenalties() const { DARABONBA_PTR_GET_CONST(penalties_, vector<CancelPolicy::Penalties>) };
          inline vector<CancelPolicy::Penalties> getPenalties() { DARABONBA_PTR_GET(penalties_, vector<CancelPolicy::Penalties>) };
          inline CancelPolicy& setPenalties(const vector<CancelPolicy::Penalties> & penalties) { DARABONBA_PTR_SET_VALUE(penalties_, penalties) };
          inline CancelPolicy& setPenalties(vector<CancelPolicy::Penalties> && penalties) { DARABONBA_PTR_SET_RVALUE(penalties_, penalties) };


          // tracerId Field Functions 
          bool hasTracerId() const { return this->tracerId_ != nullptr;};
          void deleteTracerId() { this->tracerId_ = nullptr;};
          inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
          inline CancelPolicy& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


        protected:
          shared_ptr<string> policyType_ {};
          shared_ptr<vector<CancelPolicy::Penalties>> penalties_ {};
          shared_ptr<string> tracerId_ {};
        };

        virtual bool empty() const override { return this->itemOfferKey_ == nullptr
        && this->ratePlanName_ == nullptr && this->mealType_ == nullptr && this->mealCount_ == nullptr && this->cancelPolicy_ == nullptr && this->sellingTotalPrice_ == nullptr
        && this->sellingDailyPrices_ == nullptr && this->availableRooms_ == nullptr && this->maxOccupancy_ == nullptr && this->confirmType_ == nullptr; };
        // itemOfferKey Field Functions 
        bool hasItemOfferKey() const { return this->itemOfferKey_ != nullptr;};
        void deleteItemOfferKey() { this->itemOfferKey_ = nullptr;};
        inline string getItemOfferKey() const { DARABONBA_PTR_GET_DEFAULT(itemOfferKey_, "") };
        inline Offers& setItemOfferKey(string itemOfferKey) { DARABONBA_PTR_SET_VALUE(itemOfferKey_, itemOfferKey) };


        // ratePlanName Field Functions 
        bool hasRatePlanName() const { return this->ratePlanName_ != nullptr;};
        void deleteRatePlanName() { this->ratePlanName_ = nullptr;};
        inline string getRatePlanName() const { DARABONBA_PTR_GET_DEFAULT(ratePlanName_, "") };
        inline Offers& setRatePlanName(string ratePlanName) { DARABONBA_PTR_SET_VALUE(ratePlanName_, ratePlanName) };


        // mealType Field Functions 
        bool hasMealType() const { return this->mealType_ != nullptr;};
        void deleteMealType() { this->mealType_ = nullptr;};
        inline string getMealType() const { DARABONBA_PTR_GET_DEFAULT(mealType_, "") };
        inline Offers& setMealType(string mealType) { DARABONBA_PTR_SET_VALUE(mealType_, mealType) };


        // mealCount Field Functions 
        bool hasMealCount() const { return this->mealCount_ != nullptr;};
        void deleteMealCount() { this->mealCount_ = nullptr;};
        inline int32_t getMealCount() const { DARABONBA_PTR_GET_DEFAULT(mealCount_, 0) };
        inline Offers& setMealCount(int32_t mealCount) { DARABONBA_PTR_SET_VALUE(mealCount_, mealCount) };


        // cancelPolicy Field Functions 
        bool hasCancelPolicy() const { return this->cancelPolicy_ != nullptr;};
        void deleteCancelPolicy() { this->cancelPolicy_ = nullptr;};
        inline const Offers::CancelPolicy & getCancelPolicy() const { DARABONBA_PTR_GET_CONST(cancelPolicy_, Offers::CancelPolicy) };
        inline Offers::CancelPolicy getCancelPolicy() { DARABONBA_PTR_GET(cancelPolicy_, Offers::CancelPolicy) };
        inline Offers& setCancelPolicy(const Offers::CancelPolicy & cancelPolicy) { DARABONBA_PTR_SET_VALUE(cancelPolicy_, cancelPolicy) };
        inline Offers& setCancelPolicy(Offers::CancelPolicy && cancelPolicy) { DARABONBA_PTR_SET_RVALUE(cancelPolicy_, cancelPolicy) };


        // sellingTotalPrice Field Functions 
        bool hasSellingTotalPrice() const { return this->sellingTotalPrice_ != nullptr;};
        void deleteSellingTotalPrice() { this->sellingTotalPrice_ = nullptr;};
        inline const Offers::SellingTotalPrice & getSellingTotalPrice() const { DARABONBA_PTR_GET_CONST(sellingTotalPrice_, Offers::SellingTotalPrice) };
        inline Offers::SellingTotalPrice getSellingTotalPrice() { DARABONBA_PTR_GET(sellingTotalPrice_, Offers::SellingTotalPrice) };
        inline Offers& setSellingTotalPrice(const Offers::SellingTotalPrice & sellingTotalPrice) { DARABONBA_PTR_SET_VALUE(sellingTotalPrice_, sellingTotalPrice) };
        inline Offers& setSellingTotalPrice(Offers::SellingTotalPrice && sellingTotalPrice) { DARABONBA_PTR_SET_RVALUE(sellingTotalPrice_, sellingTotalPrice) };


        // sellingDailyPrices Field Functions 
        bool hasSellingDailyPrices() const { return this->sellingDailyPrices_ != nullptr;};
        void deleteSellingDailyPrices() { this->sellingDailyPrices_ = nullptr;};
        inline const vector<Offers::SellingDailyPrices> & getSellingDailyPrices() const { DARABONBA_PTR_GET_CONST(sellingDailyPrices_, vector<Offers::SellingDailyPrices>) };
        inline vector<Offers::SellingDailyPrices> getSellingDailyPrices() { DARABONBA_PTR_GET(sellingDailyPrices_, vector<Offers::SellingDailyPrices>) };
        inline Offers& setSellingDailyPrices(const vector<Offers::SellingDailyPrices> & sellingDailyPrices) { DARABONBA_PTR_SET_VALUE(sellingDailyPrices_, sellingDailyPrices) };
        inline Offers& setSellingDailyPrices(vector<Offers::SellingDailyPrices> && sellingDailyPrices) { DARABONBA_PTR_SET_RVALUE(sellingDailyPrices_, sellingDailyPrices) };


        // availableRooms Field Functions 
        bool hasAvailableRooms() const { return this->availableRooms_ != nullptr;};
        void deleteAvailableRooms() { this->availableRooms_ = nullptr;};
        inline int32_t getAvailableRooms() const { DARABONBA_PTR_GET_DEFAULT(availableRooms_, 0) };
        inline Offers& setAvailableRooms(int32_t availableRooms) { DARABONBA_PTR_SET_VALUE(availableRooms_, availableRooms) };


        // maxOccupancy Field Functions 
        bool hasMaxOccupancy() const { return this->maxOccupancy_ != nullptr;};
        void deleteMaxOccupancy() { this->maxOccupancy_ = nullptr;};
        inline int32_t getMaxOccupancy() const { DARABONBA_PTR_GET_DEFAULT(maxOccupancy_, 0) };
        inline Offers& setMaxOccupancy(int32_t maxOccupancy) { DARABONBA_PTR_SET_VALUE(maxOccupancy_, maxOccupancy) };


        // confirmType Field Functions 
        bool hasConfirmType() const { return this->confirmType_ != nullptr;};
        void deleteConfirmType() { this->confirmType_ = nullptr;};
        inline string getConfirmType() const { DARABONBA_PTR_GET_DEFAULT(confirmType_, "") };
        inline Offers& setConfirmType(string confirmType) { DARABONBA_PTR_SET_VALUE(confirmType_, confirmType) };


      protected:
        shared_ptr<string> itemOfferKey_ {};
        shared_ptr<string> ratePlanName_ {};
        shared_ptr<string> mealType_ {};
        shared_ptr<int32_t> mealCount_ {};
        shared_ptr<Offers::CancelPolicy> cancelPolicy_ {};
        shared_ptr<Offers::SellingTotalPrice> sellingTotalPrice_ {};
        shared_ptr<vector<Offers::SellingDailyPrices>> sellingDailyPrices_ {};
        shared_ptr<int32_t> availableRooms_ {};
        shared_ptr<int32_t> maxOccupancy_ {};
        shared_ptr<string> confirmType_ {};
      };

      class LowestSellingPrice : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LowestSellingPrice& obj) { 
          DARABONBA_PTR_TO_JSON(Amount, amount_);
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
        };
        friend void from_json(const Darabonba::Json& j, LowestSellingPrice& obj) { 
          DARABONBA_PTR_FROM_JSON(Amount, amount_);
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
        };
        LowestSellingPrice() = default ;
        LowestSellingPrice(const LowestSellingPrice &) = default ;
        LowestSellingPrice(LowestSellingPrice &&) = default ;
        LowestSellingPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LowestSellingPrice() = default ;
        LowestSellingPrice& operator=(const LowestSellingPrice &) = default ;
        LowestSellingPrice& operator=(LowestSellingPrice &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->currency_ == nullptr && this->tracerId_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline double getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
        inline LowestSellingPrice& setAmount(double amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline LowestSellingPrice& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // tracerId Field Functions 
        bool hasTracerId() const { return this->tracerId_ != nullptr;};
        void deleteTracerId() { this->tracerId_ = nullptr;};
        inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
        inline LowestSellingPrice& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


      protected:
        shared_ptr<double> amount_ {};
        shared_ptr<string> currency_ {};
        shared_ptr<string> tracerId_ {};
      };

      virtual bool empty() const override { return this->standardRoomId_ == nullptr
        && this->lowestSellingPrice_ == nullptr && this->offers_ == nullptr; };
      // standardRoomId Field Functions 
      bool hasStandardRoomId() const { return this->standardRoomId_ != nullptr;};
      void deleteStandardRoomId() { this->standardRoomId_ = nullptr;};
      inline string getStandardRoomId() const { DARABONBA_PTR_GET_DEFAULT(standardRoomId_, "") };
      inline Rooms& setStandardRoomId(string standardRoomId) { DARABONBA_PTR_SET_VALUE(standardRoomId_, standardRoomId) };


      // lowestSellingPrice Field Functions 
      bool hasLowestSellingPrice() const { return this->lowestSellingPrice_ != nullptr;};
      void deleteLowestSellingPrice() { this->lowestSellingPrice_ = nullptr;};
      inline const Rooms::LowestSellingPrice & getLowestSellingPrice() const { DARABONBA_PTR_GET_CONST(lowestSellingPrice_, Rooms::LowestSellingPrice) };
      inline Rooms::LowestSellingPrice getLowestSellingPrice() { DARABONBA_PTR_GET(lowestSellingPrice_, Rooms::LowestSellingPrice) };
      inline Rooms& setLowestSellingPrice(const Rooms::LowestSellingPrice & lowestSellingPrice) { DARABONBA_PTR_SET_VALUE(lowestSellingPrice_, lowestSellingPrice) };
      inline Rooms& setLowestSellingPrice(Rooms::LowestSellingPrice && lowestSellingPrice) { DARABONBA_PTR_SET_RVALUE(lowestSellingPrice_, lowestSellingPrice) };


      // offers Field Functions 
      bool hasOffers() const { return this->offers_ != nullptr;};
      void deleteOffers() { this->offers_ = nullptr;};
      inline const vector<Rooms::Offers> & getOffers() const { DARABONBA_PTR_GET_CONST(offers_, vector<Rooms::Offers>) };
      inline vector<Rooms::Offers> getOffers() { DARABONBA_PTR_GET(offers_, vector<Rooms::Offers>) };
      inline Rooms& setOffers(const vector<Rooms::Offers> & offers) { DARABONBA_PTR_SET_VALUE(offers_, offers) };
      inline Rooms& setOffers(vector<Rooms::Offers> && offers) { DARABONBA_PTR_SET_RVALUE(offers_, offers) };


    protected:
      shared_ptr<string> standardRoomId_ {};
      shared_ptr<Rooms::LowestSellingPrice> lowestSellingPrice_ {};
      shared_ptr<vector<Rooms::Offers>> offers_ {};
    };

    virtual bool empty() const override { return this->checkInDate_ == nullptr
        && this->checkOutDate_ == nullptr && this->rooms_ == nullptr && this->standardRoomId_ == nullptr && this->offers_ == nullptr; };
    // checkInDate Field Functions 
    bool hasCheckInDate() const { return this->checkInDate_ != nullptr;};
    void deleteCheckInDate() { this->checkInDate_ = nullptr;};
    inline string getCheckInDate() const { DARABONBA_PTR_GET_DEFAULT(checkInDate_, "") };
    inline DataHotelsValue& setCheckInDate(string checkInDate) { DARABONBA_PTR_SET_VALUE(checkInDate_, checkInDate) };


    // checkOutDate Field Functions 
    bool hasCheckOutDate() const { return this->checkOutDate_ != nullptr;};
    void deleteCheckOutDate() { this->checkOutDate_ = nullptr;};
    inline string getCheckOutDate() const { DARABONBA_PTR_GET_DEFAULT(checkOutDate_, "") };
    inline DataHotelsValue& setCheckOutDate(string checkOutDate) { DARABONBA_PTR_SET_VALUE(checkOutDate_, checkOutDate) };


    // rooms Field Functions 
    bool hasRooms() const { return this->rooms_ != nullptr;};
    void deleteRooms() { this->rooms_ = nullptr;};
    inline const vector<DataHotelsValue::Rooms> & getRooms() const { DARABONBA_PTR_GET_CONST(rooms_, vector<DataHotelsValue::Rooms>) };
    inline vector<DataHotelsValue::Rooms> getRooms() { DARABONBA_PTR_GET(rooms_, vector<DataHotelsValue::Rooms>) };
    inline DataHotelsValue& setRooms(const vector<DataHotelsValue::Rooms> & rooms) { DARABONBA_PTR_SET_VALUE(rooms_, rooms) };
    inline DataHotelsValue& setRooms(vector<DataHotelsValue::Rooms> && rooms) { DARABONBA_PTR_SET_RVALUE(rooms_, rooms) };


    // standardRoomId Field Functions 
    bool hasStandardRoomId() const { return this->standardRoomId_ != nullptr;};
    void deleteStandardRoomId() { this->standardRoomId_ = nullptr;};
    inline string getStandardRoomId() const { DARABONBA_PTR_GET_DEFAULT(standardRoomId_, "") };
    inline DataHotelsValue& setStandardRoomId(string standardRoomId) { DARABONBA_PTR_SET_VALUE(standardRoomId_, standardRoomId) };


    // offers Field Functions 
    bool hasOffers() const { return this->offers_ != nullptr;};
    void deleteOffers() { this->offers_ = nullptr;};
    inline const vector<DataHotelsValue::Offers> & getOffers() const { DARABONBA_PTR_GET_CONST(offers_, vector<DataHotelsValue::Offers>) };
    inline vector<DataHotelsValue::Offers> getOffers() { DARABONBA_PTR_GET(offers_, vector<DataHotelsValue::Offers>) };
    inline DataHotelsValue& setOffers(const vector<DataHotelsValue::Offers> & offers) { DARABONBA_PTR_SET_VALUE(offers_, offers) };
    inline DataHotelsValue& setOffers(vector<DataHotelsValue::Offers> && offers) { DARABONBA_PTR_SET_RVALUE(offers_, offers) };


  protected:
    shared_ptr<string> checkInDate_ {};
    shared_ptr<string> checkOutDate_ {};
    shared_ptr<vector<DataHotelsValue::Rooms>> rooms_ {};
    shared_ptr<string> standardRoomId_ {};
    shared_ptr<vector<DataHotelsValue::Offers>> offers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
