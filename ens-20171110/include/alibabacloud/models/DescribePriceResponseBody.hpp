// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribePriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePriceResponseBody() = default ;
    DescribePriceResponseBody(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody(DescribePriceResponseBody &&) = default ;
    DescribePriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBody() = default ;
    DescribePriceResponseBody& operator=(const DescribePriceResponseBody &) = default ;
    DescribePriceResponseBody& operator=(DescribePriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PriceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PriceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Price, price_);
      };
      friend void from_json(const Darabonba::Json& j, PriceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Price, price_);
      };
      PriceInfo() = default ;
      PriceInfo(const PriceInfo &) = default ;
      PriceInfo(PriceInfo &&) = default ;
      PriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PriceInfo() = default ;
      PriceInfo& operator=(const PriceInfo &) = default ;
      PriceInfo& operator=(PriceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Price : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Price& obj) { 
          DARABONBA_PTR_TO_JSON(Currency, currency_);
          DARABONBA_PTR_TO_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_TO_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_TO_JSON(TradePrice, tradePrice_);
        };
        friend void from_json(const Darabonba::Json& j, Price& obj) { 
          DARABONBA_PTR_FROM_JSON(Currency, currency_);
          DARABONBA_PTR_FROM_JSON(DiscountPrice, discountPrice_);
          DARABONBA_PTR_FROM_JSON(OriginalPrice, originalPrice_);
          DARABONBA_PTR_FROM_JSON(TradePrice, tradePrice_);
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
        virtual bool empty() const override { return this->currency_ == nullptr
        && this->discountPrice_ == nullptr && this->originalPrice_ == nullptr && this->tradePrice_ == nullptr; };
        // currency Field Functions 
        bool hasCurrency() const { return this->currency_ != nullptr;};
        void deleteCurrency() { this->currency_ = nullptr;};
        inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
        inline Price& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


        // discountPrice Field Functions 
        bool hasDiscountPrice() const { return this->discountPrice_ != nullptr;};
        void deleteDiscountPrice() { this->discountPrice_ = nullptr;};
        inline float getDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(discountPrice_, 0.0) };
        inline Price& setDiscountPrice(float discountPrice) { DARABONBA_PTR_SET_VALUE(discountPrice_, discountPrice) };


        // originalPrice Field Functions 
        bool hasOriginalPrice() const { return this->originalPrice_ != nullptr;};
        void deleteOriginalPrice() { this->originalPrice_ = nullptr;};
        inline float getOriginalPrice() const { DARABONBA_PTR_GET_DEFAULT(originalPrice_, 0.0) };
        inline Price& setOriginalPrice(float originalPrice) { DARABONBA_PTR_SET_VALUE(originalPrice_, originalPrice) };


        // tradePrice Field Functions 
        bool hasTradePrice() const { return this->tradePrice_ != nullptr;};
        void deleteTradePrice() { this->tradePrice_ = nullptr;};
        inline float getTradePrice() const { DARABONBA_PTR_GET_DEFAULT(tradePrice_, 0.0) };
        inline Price& setTradePrice(float tradePrice) { DARABONBA_PTR_SET_VALUE(tradePrice_, tradePrice) };


      protected:
        // The type of currency.
        // 
        // *   USD: US dollar
        // *   JPY: Japanese Yen
        shared_ptr<string> currency_ {};
        // The discount.
        shared_ptr<float> discountPrice_ {};
        // The original price.
        shared_ptr<float> originalPrice_ {};
        // The final price.
        shared_ptr<float> tradePrice_ {};
      };

      virtual bool empty() const override { return this->price_ == nullptr; };
      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline const PriceInfo::Price & getPrice() const { DARABONBA_PTR_GET_CONST(price_, PriceInfo::Price) };
      inline PriceInfo::Price getPrice() { DARABONBA_PTR_GET(price_, PriceInfo::Price) };
      inline PriceInfo& setPrice(const PriceInfo::Price & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
      inline PriceInfo& setPrice(PriceInfo::Price && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    protected:
      // The price.
      shared_ptr<PriceInfo::Price> price_ {};
    };

    virtual bool empty() const override { return this->priceInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const DescribePriceResponseBody::PriceInfo & getPriceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, DescribePriceResponseBody::PriceInfo) };
    inline DescribePriceResponseBody::PriceInfo getPriceInfo() { DARABONBA_PTR_GET(priceInfo_, DescribePriceResponseBody::PriceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(const DescribePriceResponseBody::PriceInfo & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline DescribePriceResponseBody& setPriceInfo(DescribePriceResponseBody::PriceInfo && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price information.
    shared_ptr<DescribePriceResponseBody::PriceInfo> priceInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
