// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETQUERYPRICESTOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TICKETQUERYPRICESTOCKRESPONSEBODY_HPP_
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
  class TicketQueryPriceStockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketQueryPriceStockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, TicketQueryPriceStockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    TicketQueryPriceStockResponseBody() = default ;
    TicketQueryPriceStockResponseBody(const TicketQueryPriceStockResponseBody &) = default ;
    TicketQueryPriceStockResponseBody(TicketQueryPriceStockResponseBody &&) = default ;
    TicketQueryPriceStockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketQueryPriceStockResponseBody() = default ;
    TicketQueryPriceStockResponseBody& operator=(const TicketQueryPriceStockResponseBody &) = default ;
    TicketQueryPriceStockResponseBody& operator=(TicketQueryPriceStockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CalendarPriceStocks, calendarPriceStocks_);
        DARABONBA_PTR_TO_JSON(NormalPriceStock, normalPriceStock_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(StockType, stockType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CalendarPriceStocks, calendarPriceStocks_);
        DARABONBA_PTR_FROM_JSON(NormalPriceStock, normalPriceStock_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(StockType, stockType_);
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
      class NormalPriceStock : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalPriceStock& obj) { 
          DARABONBA_PTR_TO_JSON(DistributionPrice, distributionPrice_);
          DARABONBA_PTR_TO_JSON(MarketPrice, marketPrice_);
          DARABONBA_PTR_TO_JSON(Stock, stock_);
          DARABONBA_PTR_TO_JSON(SuggestedPrice, suggestedPrice_);
        };
        friend void from_json(const Darabonba::Json& j, NormalPriceStock& obj) { 
          DARABONBA_PTR_FROM_JSON(DistributionPrice, distributionPrice_);
          DARABONBA_PTR_FROM_JSON(MarketPrice, marketPrice_);
          DARABONBA_PTR_FROM_JSON(Stock, stock_);
          DARABONBA_PTR_FROM_JSON(SuggestedPrice, suggestedPrice_);
        };
        NormalPriceStock() = default ;
        NormalPriceStock(const NormalPriceStock &) = default ;
        NormalPriceStock(NormalPriceStock &&) = default ;
        NormalPriceStock(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalPriceStock() = default ;
        NormalPriceStock& operator=(const NormalPriceStock &) = default ;
        NormalPriceStock& operator=(NormalPriceStock &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SuggestedPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SuggestedPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
          };
          friend void from_json(const Darabonba::Json& j, SuggestedPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
          };
          SuggestedPrice() = default ;
          SuggestedPrice(const SuggestedPrice &) = default ;
          SuggestedPrice(SuggestedPrice &&) = default ;
          SuggestedPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SuggestedPrice() = default ;
          SuggestedPrice& operator=(const SuggestedPrice &) = default ;
          SuggestedPrice& operator=(SuggestedPrice &&) = default ;
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
          inline SuggestedPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currencyCode Field Functions 
          bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
          void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
          inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
          inline SuggestedPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


        protected:
          shared_ptr<int64_t> amount_ {};
          shared_ptr<string> currencyCode_ {};
        };

        class MarketPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MarketPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
          };
          friend void from_json(const Darabonba::Json& j, MarketPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
          };
          MarketPrice() = default ;
          MarketPrice(const MarketPrice &) = default ;
          MarketPrice(MarketPrice &&) = default ;
          MarketPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MarketPrice() = default ;
          MarketPrice& operator=(const MarketPrice &) = default ;
          MarketPrice& operator=(MarketPrice &&) = default ;
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
          inline MarketPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currencyCode Field Functions 
          bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
          void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
          inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
          inline MarketPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


        protected:
          shared_ptr<int64_t> amount_ {};
          shared_ptr<string> currencyCode_ {};
        };

        class DistributionPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DistributionPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
          };
          friend void from_json(const Darabonba::Json& j, DistributionPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
          };
          DistributionPrice() = default ;
          DistributionPrice(const DistributionPrice &) = default ;
          DistributionPrice(DistributionPrice &&) = default ;
          DistributionPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DistributionPrice() = default ;
          DistributionPrice& operator=(const DistributionPrice &) = default ;
          DistributionPrice& operator=(DistributionPrice &&) = default ;
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
          inline DistributionPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currencyCode Field Functions 
          bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
          void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
          inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
          inline DistributionPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


        protected:
          shared_ptr<int64_t> amount_ {};
          shared_ptr<string> currencyCode_ {};
        };

        virtual bool empty() const override { return this->distributionPrice_ == nullptr
        && this->marketPrice_ == nullptr && this->stock_ == nullptr && this->suggestedPrice_ == nullptr; };
        // distributionPrice Field Functions 
        bool hasDistributionPrice() const { return this->distributionPrice_ != nullptr;};
        void deleteDistributionPrice() { this->distributionPrice_ = nullptr;};
        inline const NormalPriceStock::DistributionPrice & getDistributionPrice() const { DARABONBA_PTR_GET_CONST(distributionPrice_, NormalPriceStock::DistributionPrice) };
        inline NormalPriceStock::DistributionPrice getDistributionPrice() { DARABONBA_PTR_GET(distributionPrice_, NormalPriceStock::DistributionPrice) };
        inline NormalPriceStock& setDistributionPrice(const NormalPriceStock::DistributionPrice & distributionPrice) { DARABONBA_PTR_SET_VALUE(distributionPrice_, distributionPrice) };
        inline NormalPriceStock& setDistributionPrice(NormalPriceStock::DistributionPrice && distributionPrice) { DARABONBA_PTR_SET_RVALUE(distributionPrice_, distributionPrice) };


        // marketPrice Field Functions 
        bool hasMarketPrice() const { return this->marketPrice_ != nullptr;};
        void deleteMarketPrice() { this->marketPrice_ = nullptr;};
        inline const NormalPriceStock::MarketPrice & getMarketPrice() const { DARABONBA_PTR_GET_CONST(marketPrice_, NormalPriceStock::MarketPrice) };
        inline NormalPriceStock::MarketPrice getMarketPrice() { DARABONBA_PTR_GET(marketPrice_, NormalPriceStock::MarketPrice) };
        inline NormalPriceStock& setMarketPrice(const NormalPriceStock::MarketPrice & marketPrice) { DARABONBA_PTR_SET_VALUE(marketPrice_, marketPrice) };
        inline NormalPriceStock& setMarketPrice(NormalPriceStock::MarketPrice && marketPrice) { DARABONBA_PTR_SET_RVALUE(marketPrice_, marketPrice) };


        // stock Field Functions 
        bool hasStock() const { return this->stock_ != nullptr;};
        void deleteStock() { this->stock_ = nullptr;};
        inline int64_t getStock() const { DARABONBA_PTR_GET_DEFAULT(stock_, 0L) };
        inline NormalPriceStock& setStock(int64_t stock) { DARABONBA_PTR_SET_VALUE(stock_, stock) };


        // suggestedPrice Field Functions 
        bool hasSuggestedPrice() const { return this->suggestedPrice_ != nullptr;};
        void deleteSuggestedPrice() { this->suggestedPrice_ = nullptr;};
        inline const NormalPriceStock::SuggestedPrice & getSuggestedPrice() const { DARABONBA_PTR_GET_CONST(suggestedPrice_, NormalPriceStock::SuggestedPrice) };
        inline NormalPriceStock::SuggestedPrice getSuggestedPrice() { DARABONBA_PTR_GET(suggestedPrice_, NormalPriceStock::SuggestedPrice) };
        inline NormalPriceStock& setSuggestedPrice(const NormalPriceStock::SuggestedPrice & suggestedPrice) { DARABONBA_PTR_SET_VALUE(suggestedPrice_, suggestedPrice) };
        inline NormalPriceStock& setSuggestedPrice(NormalPriceStock::SuggestedPrice && suggestedPrice) { DARABONBA_PTR_SET_RVALUE(suggestedPrice_, suggestedPrice) };


      protected:
        shared_ptr<NormalPriceStock::DistributionPrice> distributionPrice_ {};
        shared_ptr<NormalPriceStock::MarketPrice> marketPrice_ {};
        shared_ptr<int64_t> stock_ {};
        shared_ptr<NormalPriceStock::SuggestedPrice> suggestedPrice_ {};
      };

      class CalendarPriceStocks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CalendarPriceStocks& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(DistributionPrice, distributionPrice_);
          DARABONBA_PTR_TO_JSON(MarketPrice, marketPrice_);
          DARABONBA_PTR_TO_JSON(Stock, stock_);
          DARABONBA_PTR_TO_JSON(SuggestedPrice, suggestedPrice_);
        };
        friend void from_json(const Darabonba::Json& j, CalendarPriceStocks& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(DistributionPrice, distributionPrice_);
          DARABONBA_PTR_FROM_JSON(MarketPrice, marketPrice_);
          DARABONBA_PTR_FROM_JSON(Stock, stock_);
          DARABONBA_PTR_FROM_JSON(SuggestedPrice, suggestedPrice_);
        };
        CalendarPriceStocks() = default ;
        CalendarPriceStocks(const CalendarPriceStocks &) = default ;
        CalendarPriceStocks(CalendarPriceStocks &&) = default ;
        CalendarPriceStocks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CalendarPriceStocks() = default ;
        CalendarPriceStocks& operator=(const CalendarPriceStocks &) = default ;
        CalendarPriceStocks& operator=(CalendarPriceStocks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SuggestedPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SuggestedPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
          };
          friend void from_json(const Darabonba::Json& j, SuggestedPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
          };
          SuggestedPrice() = default ;
          SuggestedPrice(const SuggestedPrice &) = default ;
          SuggestedPrice(SuggestedPrice &&) = default ;
          SuggestedPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SuggestedPrice() = default ;
          SuggestedPrice& operator=(const SuggestedPrice &) = default ;
          SuggestedPrice& operator=(SuggestedPrice &&) = default ;
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
          inline SuggestedPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currencyCode Field Functions 
          bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
          void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
          inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
          inline SuggestedPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


        protected:
          shared_ptr<int64_t> amount_ {};
          shared_ptr<string> currencyCode_ {};
        };

        class MarketPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MarketPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
          };
          friend void from_json(const Darabonba::Json& j, MarketPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
          };
          MarketPrice() = default ;
          MarketPrice(const MarketPrice &) = default ;
          MarketPrice(MarketPrice &&) = default ;
          MarketPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MarketPrice() = default ;
          MarketPrice& operator=(const MarketPrice &) = default ;
          MarketPrice& operator=(MarketPrice &&) = default ;
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
          inline MarketPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currencyCode Field Functions 
          bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
          void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
          inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
          inline MarketPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


        protected:
          shared_ptr<int64_t> amount_ {};
          shared_ptr<string> currencyCode_ {};
        };

        class DistributionPrice : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DistributionPrice& obj) { 
            DARABONBA_PTR_TO_JSON(Amount, amount_);
            DARABONBA_PTR_TO_JSON(CurrencyCode, currencyCode_);
          };
          friend void from_json(const Darabonba::Json& j, DistributionPrice& obj) { 
            DARABONBA_PTR_FROM_JSON(Amount, amount_);
            DARABONBA_PTR_FROM_JSON(CurrencyCode, currencyCode_);
          };
          DistributionPrice() = default ;
          DistributionPrice(const DistributionPrice &) = default ;
          DistributionPrice(DistributionPrice &&) = default ;
          DistributionPrice(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DistributionPrice() = default ;
          DistributionPrice& operator=(const DistributionPrice &) = default ;
          DistributionPrice& operator=(DistributionPrice &&) = default ;
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
          inline DistributionPrice& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


          // currencyCode Field Functions 
          bool hasCurrencyCode() const { return this->currencyCode_ != nullptr;};
          void deleteCurrencyCode() { this->currencyCode_ = nullptr;};
          inline string getCurrencyCode() const { DARABONBA_PTR_GET_DEFAULT(currencyCode_, "") };
          inline DistributionPrice& setCurrencyCode(string currencyCode) { DARABONBA_PTR_SET_VALUE(currencyCode_, currencyCode) };


        protected:
          shared_ptr<int64_t> amount_ {};
          shared_ptr<string> currencyCode_ {};
        };

        virtual bool empty() const override { return this->date_ == nullptr
        && this->distributionPrice_ == nullptr && this->marketPrice_ == nullptr && this->stock_ == nullptr && this->suggestedPrice_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline CalendarPriceStocks& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // distributionPrice Field Functions 
        bool hasDistributionPrice() const { return this->distributionPrice_ != nullptr;};
        void deleteDistributionPrice() { this->distributionPrice_ = nullptr;};
        inline const CalendarPriceStocks::DistributionPrice & getDistributionPrice() const { DARABONBA_PTR_GET_CONST(distributionPrice_, CalendarPriceStocks::DistributionPrice) };
        inline CalendarPriceStocks::DistributionPrice getDistributionPrice() { DARABONBA_PTR_GET(distributionPrice_, CalendarPriceStocks::DistributionPrice) };
        inline CalendarPriceStocks& setDistributionPrice(const CalendarPriceStocks::DistributionPrice & distributionPrice) { DARABONBA_PTR_SET_VALUE(distributionPrice_, distributionPrice) };
        inline CalendarPriceStocks& setDistributionPrice(CalendarPriceStocks::DistributionPrice && distributionPrice) { DARABONBA_PTR_SET_RVALUE(distributionPrice_, distributionPrice) };


        // marketPrice Field Functions 
        bool hasMarketPrice() const { return this->marketPrice_ != nullptr;};
        void deleteMarketPrice() { this->marketPrice_ = nullptr;};
        inline const CalendarPriceStocks::MarketPrice & getMarketPrice() const { DARABONBA_PTR_GET_CONST(marketPrice_, CalendarPriceStocks::MarketPrice) };
        inline CalendarPriceStocks::MarketPrice getMarketPrice() { DARABONBA_PTR_GET(marketPrice_, CalendarPriceStocks::MarketPrice) };
        inline CalendarPriceStocks& setMarketPrice(const CalendarPriceStocks::MarketPrice & marketPrice) { DARABONBA_PTR_SET_VALUE(marketPrice_, marketPrice) };
        inline CalendarPriceStocks& setMarketPrice(CalendarPriceStocks::MarketPrice && marketPrice) { DARABONBA_PTR_SET_RVALUE(marketPrice_, marketPrice) };


        // stock Field Functions 
        bool hasStock() const { return this->stock_ != nullptr;};
        void deleteStock() { this->stock_ = nullptr;};
        inline int64_t getStock() const { DARABONBA_PTR_GET_DEFAULT(stock_, 0L) };
        inline CalendarPriceStocks& setStock(int64_t stock) { DARABONBA_PTR_SET_VALUE(stock_, stock) };


        // suggestedPrice Field Functions 
        bool hasSuggestedPrice() const { return this->suggestedPrice_ != nullptr;};
        void deleteSuggestedPrice() { this->suggestedPrice_ = nullptr;};
        inline const CalendarPriceStocks::SuggestedPrice & getSuggestedPrice() const { DARABONBA_PTR_GET_CONST(suggestedPrice_, CalendarPriceStocks::SuggestedPrice) };
        inline CalendarPriceStocks::SuggestedPrice getSuggestedPrice() { DARABONBA_PTR_GET(suggestedPrice_, CalendarPriceStocks::SuggestedPrice) };
        inline CalendarPriceStocks& setSuggestedPrice(const CalendarPriceStocks::SuggestedPrice & suggestedPrice) { DARABONBA_PTR_SET_VALUE(suggestedPrice_, suggestedPrice) };
        inline CalendarPriceStocks& setSuggestedPrice(CalendarPriceStocks::SuggestedPrice && suggestedPrice) { DARABONBA_PTR_SET_RVALUE(suggestedPrice_, suggestedPrice) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<CalendarPriceStocks::DistributionPrice> distributionPrice_ {};
        shared_ptr<CalendarPriceStocks::MarketPrice> marketPrice_ {};
        shared_ptr<int64_t> stock_ {};
        shared_ptr<CalendarPriceStocks::SuggestedPrice> suggestedPrice_ {};
      };

      virtual bool empty() const override { return this->calendarPriceStocks_ == nullptr
        && this->normalPriceStock_ == nullptr && this->productId_ == nullptr && this->stockType_ == nullptr; };
      // calendarPriceStocks Field Functions 
      bool hasCalendarPriceStocks() const { return this->calendarPriceStocks_ != nullptr;};
      void deleteCalendarPriceStocks() { this->calendarPriceStocks_ = nullptr;};
      inline const vector<Data::CalendarPriceStocks> & getCalendarPriceStocks() const { DARABONBA_PTR_GET_CONST(calendarPriceStocks_, vector<Data::CalendarPriceStocks>) };
      inline vector<Data::CalendarPriceStocks> getCalendarPriceStocks() { DARABONBA_PTR_GET(calendarPriceStocks_, vector<Data::CalendarPriceStocks>) };
      inline Data& setCalendarPriceStocks(const vector<Data::CalendarPriceStocks> & calendarPriceStocks) { DARABONBA_PTR_SET_VALUE(calendarPriceStocks_, calendarPriceStocks) };
      inline Data& setCalendarPriceStocks(vector<Data::CalendarPriceStocks> && calendarPriceStocks) { DARABONBA_PTR_SET_RVALUE(calendarPriceStocks_, calendarPriceStocks) };


      // normalPriceStock Field Functions 
      bool hasNormalPriceStock() const { return this->normalPriceStock_ != nullptr;};
      void deleteNormalPriceStock() { this->normalPriceStock_ = nullptr;};
      inline const Data::NormalPriceStock & getNormalPriceStock() const { DARABONBA_PTR_GET_CONST(normalPriceStock_, Data::NormalPriceStock) };
      inline Data::NormalPriceStock getNormalPriceStock() { DARABONBA_PTR_GET(normalPriceStock_, Data::NormalPriceStock) };
      inline Data& setNormalPriceStock(const Data::NormalPriceStock & normalPriceStock) { DARABONBA_PTR_SET_VALUE(normalPriceStock_, normalPriceStock) };
      inline Data& setNormalPriceStock(Data::NormalPriceStock && normalPriceStock) { DARABONBA_PTR_SET_RVALUE(normalPriceStock_, normalPriceStock) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Data& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // stockType Field Functions 
      bool hasStockType() const { return this->stockType_ != nullptr;};
      void deleteStockType() { this->stockType_ = nullptr;};
      inline int32_t getStockType() const { DARABONBA_PTR_GET_DEFAULT(stockType_, 0) };
      inline Data& setStockType(int32_t stockType) { DARABONBA_PTR_SET_VALUE(stockType_, stockType) };


    protected:
      shared_ptr<vector<Data::CalendarPriceStocks>> calendarPriceStocks_ {};
      shared_ptr<Data::NormalPriceStock> normalPriceStock_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<int32_t> stockType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TicketQueryPriceStockResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TicketQueryPriceStockResponseBody::Data) };
    inline TicketQueryPriceStockResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TicketQueryPriceStockResponseBody::Data) };
    inline TicketQueryPriceStockResponseBody& setData(const TicketQueryPriceStockResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TicketQueryPriceStockResponseBody& setData(TicketQueryPriceStockResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline TicketQueryPriceStockResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline TicketQueryPriceStockResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TicketQueryPriceStockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TicketQueryPriceStockResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<TicketQueryPriceStockResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
