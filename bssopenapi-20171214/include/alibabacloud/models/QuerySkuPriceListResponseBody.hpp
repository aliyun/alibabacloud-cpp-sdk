// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSKUPRICELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySkuPriceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySkuPriceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySkuPriceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySkuPriceListResponseBody() = default ;
    QuerySkuPriceListResponseBody(const QuerySkuPriceListResponseBody &) = default ;
    QuerySkuPriceListResponseBody(QuerySkuPriceListResponseBody &&) = default ;
    QuerySkuPriceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySkuPriceListResponseBody() = default ;
    QuerySkuPriceListResponseBody& operator=(const QuerySkuPriceListResponseBody &) = default ;
    QuerySkuPriceListResponseBody& operator=(QuerySkuPriceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SkuPricePage, skuPricePage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SkuPricePage, skuPricePage_);
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
      class SkuPricePage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SkuPricePage& obj) { 
          DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
          DARABONBA_PTR_TO_JSON(SkuPriceList, skuPriceList_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, SkuPricePage& obj) { 
          DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
          DARABONBA_PTR_FROM_JSON(SkuPriceList, skuPriceList_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        SkuPricePage() = default ;
        SkuPricePage(const SkuPricePage &) = default ;
        SkuPricePage(SkuPricePage &&) = default ;
        SkuPricePage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SkuPricePage() = default ;
        SkuPricePage& operator=(const SkuPricePage &) = default ;
        SkuPricePage& operator=(SkuPricePage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SkuPriceList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SkuPriceList& obj) { 
            DARABONBA_PTR_TO_JSON(CskuPriceList, cskuPriceList_);
            DARABONBA_PTR_TO_JSON(SkuCode, skuCode_);
            DARABONBA_PTR_TO_JSON(SkuFactorMap, skuFactorMap_);
          };
          friend void from_json(const Darabonba::Json& j, SkuPriceList& obj) { 
            DARABONBA_PTR_FROM_JSON(CskuPriceList, cskuPriceList_);
            DARABONBA_PTR_FROM_JSON(SkuCode, skuCode_);
            DARABONBA_PTR_FROM_JSON(SkuFactorMap, skuFactorMap_);
          };
          SkuPriceList() = default ;
          SkuPriceList(const SkuPriceList &) = default ;
          SkuPriceList(SkuPriceList &&) = default ;
          SkuPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SkuPriceList() = default ;
          SkuPriceList& operator=(const SkuPriceList &) = default ;
          SkuPriceList& operator=(SkuPriceList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CskuPriceList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CskuPriceList& obj) { 
              DARABONBA_PTR_TO_JSON(CskuCode, cskuCode_);
              DARABONBA_PTR_TO_JSON(Currency, currency_);
              DARABONBA_PTR_TO_JSON(Price, price_);
              DARABONBA_PTR_TO_JSON(PriceMode, priceMode_);
              DARABONBA_PTR_TO_JSON(PriceType, priceType_);
              DARABONBA_PTR_TO_JSON(PriceUnit, priceUnit_);
              DARABONBA_PTR_TO_JSON(RangeList, rangeList_);
              DARABONBA_PTR_TO_JSON(UsageUnit, usageUnit_);
            };
            friend void from_json(const Darabonba::Json& j, CskuPriceList& obj) { 
              DARABONBA_PTR_FROM_JSON(CskuCode, cskuCode_);
              DARABONBA_PTR_FROM_JSON(Currency, currency_);
              DARABONBA_PTR_FROM_JSON(Price, price_);
              DARABONBA_PTR_FROM_JSON(PriceMode, priceMode_);
              DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
              DARABONBA_PTR_FROM_JSON(PriceUnit, priceUnit_);
              DARABONBA_PTR_FROM_JSON(RangeList, rangeList_);
              DARABONBA_PTR_FROM_JSON(UsageUnit, usageUnit_);
            };
            CskuPriceList() = default ;
            CskuPriceList(const CskuPriceList &) = default ;
            CskuPriceList(CskuPriceList &&) = default ;
            CskuPriceList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CskuPriceList() = default ;
            CskuPriceList& operator=(const CskuPriceList &) = default ;
            CskuPriceList& operator=(CskuPriceList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class RangeList : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const RangeList& obj) { 
                DARABONBA_PTR_TO_JSON(FactorCode, factorCode_);
                DARABONBA_PTR_TO_JSON(Max, max_);
                DARABONBA_PTR_TO_JSON(Min, min_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, RangeList& obj) { 
                DARABONBA_PTR_FROM_JSON(FactorCode, factorCode_);
                DARABONBA_PTR_FROM_JSON(Max, max_);
                DARABONBA_PTR_FROM_JSON(Min, min_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              RangeList() = default ;
              RangeList(const RangeList &) = default ;
              RangeList(RangeList &&) = default ;
              RangeList(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~RangeList() = default ;
              RangeList& operator=(const RangeList &) = default ;
              RangeList& operator=(RangeList &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->factorCode_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->type_ == nullptr; };
              // factorCode Field Functions 
              bool hasFactorCode() const { return this->factorCode_ != nullptr;};
              void deleteFactorCode() { this->factorCode_ = nullptr;};
              inline string getFactorCode() const { DARABONBA_PTR_GET_DEFAULT(factorCode_, "") };
              inline RangeList& setFactorCode(string factorCode) { DARABONBA_PTR_SET_VALUE(factorCode_, factorCode) };


              // max Field Functions 
              bool hasMax() const { return this->max_ != nullptr;};
              void deleteMax() { this->max_ = nullptr;};
              inline string getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, "") };
              inline RangeList& setMax(string max) { DARABONBA_PTR_SET_VALUE(max_, max) };


              // min Field Functions 
              bool hasMin() const { return this->min_ != nullptr;};
              void deleteMin() { this->min_ = nullptr;};
              inline string getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, "") };
              inline RangeList& setMin(string min) { DARABONBA_PTR_SET_VALUE(min_, min) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline RangeList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The code of the pricing factor.
              shared_ptr<string> factorCode_ {};
              // The maximum value.
              shared_ptr<string> max_ {};
              // The minimum value.
              shared_ptr<string> min_ {};
              // The closure type of the interval.
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->cskuCode_ == nullptr
        && this->currency_ == nullptr && this->price_ == nullptr && this->priceMode_ == nullptr && this->priceType_ == nullptr && this->priceUnit_ == nullptr
        && this->rangeList_ == nullptr && this->usageUnit_ == nullptr; };
            // cskuCode Field Functions 
            bool hasCskuCode() const { return this->cskuCode_ != nullptr;};
            void deleteCskuCode() { this->cskuCode_ = nullptr;};
            inline string getCskuCode() const { DARABONBA_PTR_GET_DEFAULT(cskuCode_, "") };
            inline CskuPriceList& setCskuCode(string cskuCode) { DARABONBA_PTR_SET_VALUE(cskuCode_, cskuCode) };


            // currency Field Functions 
            bool hasCurrency() const { return this->currency_ != nullptr;};
            void deleteCurrency() { this->currency_ = nullptr;};
            inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
            inline CskuPriceList& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


            // price Field Functions 
            bool hasPrice() const { return this->price_ != nullptr;};
            void deletePrice() { this->price_ = nullptr;};
            inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
            inline CskuPriceList& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


            // priceMode Field Functions 
            bool hasPriceMode() const { return this->priceMode_ != nullptr;};
            void deletePriceMode() { this->priceMode_ = nullptr;};
            inline string getPriceMode() const { DARABONBA_PTR_GET_DEFAULT(priceMode_, "") };
            inline CskuPriceList& setPriceMode(string priceMode) { DARABONBA_PTR_SET_VALUE(priceMode_, priceMode) };


            // priceType Field Functions 
            bool hasPriceType() const { return this->priceType_ != nullptr;};
            void deletePriceType() { this->priceType_ = nullptr;};
            inline string getPriceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
            inline CskuPriceList& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


            // priceUnit Field Functions 
            bool hasPriceUnit() const { return this->priceUnit_ != nullptr;};
            void deletePriceUnit() { this->priceUnit_ = nullptr;};
            inline string getPriceUnit() const { DARABONBA_PTR_GET_DEFAULT(priceUnit_, "") };
            inline CskuPriceList& setPriceUnit(string priceUnit) { DARABONBA_PTR_SET_VALUE(priceUnit_, priceUnit) };


            // rangeList Field Functions 
            bool hasRangeList() const { return this->rangeList_ != nullptr;};
            void deleteRangeList() { this->rangeList_ = nullptr;};
            inline const vector<CskuPriceList::RangeList> & getRangeList() const { DARABONBA_PTR_GET_CONST(rangeList_, vector<CskuPriceList::RangeList>) };
            inline vector<CskuPriceList::RangeList> getRangeList() { DARABONBA_PTR_GET(rangeList_, vector<CskuPriceList::RangeList>) };
            inline CskuPriceList& setRangeList(const vector<CskuPriceList::RangeList> & rangeList) { DARABONBA_PTR_SET_VALUE(rangeList_, rangeList) };
            inline CskuPriceList& setRangeList(vector<CskuPriceList::RangeList> && rangeList) { DARABONBA_PTR_SET_RVALUE(rangeList_, rangeList) };


            // usageUnit Field Functions 
            bool hasUsageUnit() const { return this->usageUnit_ != nullptr;};
            void deleteUsageUnit() { this->usageUnit_ = nullptr;};
            inline string getUsageUnit() const { DARABONBA_PTR_GET_DEFAULT(usageUnit_, "") };
            inline CskuPriceList& setUsageUnit(string usageUnit) { DARABONBA_PTR_SET_VALUE(usageUnit_, usageUnit) };


          protected:
            // The unique code of the SKU price.
            shared_ptr<string> cskuCode_ {};
            // The currency.
            shared_ptr<string> currency_ {};
            // The price.
            shared_ptr<string> price_ {};
            // The pricing mode.
            shared_ptr<string> priceMode_ {};
            // The pricing type.
            shared_ptr<string> priceType_ {};
            // The unit of the price.
            shared_ptr<string> priceUnit_ {};
            // If the PriceMode parameter is set to STEP_ACCUMULATION or STEP_ARRIVE, the value of this field exists and specifies the range. If the PriceMode parameter is set to NORMAL_PRICE, the value of this field is null.
            shared_ptr<vector<CskuPriceList::RangeList>> rangeList_ {};
            // The usage unit.
            shared_ptr<string> usageUnit_ {};
          };

          virtual bool empty() const override { return this->cskuPriceList_ == nullptr
        && this->skuCode_ == nullptr && this->skuFactorMap_ == nullptr; };
          // cskuPriceList Field Functions 
          bool hasCskuPriceList() const { return this->cskuPriceList_ != nullptr;};
          void deleteCskuPriceList() { this->cskuPriceList_ = nullptr;};
          inline const vector<SkuPriceList::CskuPriceList> & getCskuPriceList() const { DARABONBA_PTR_GET_CONST(cskuPriceList_, vector<SkuPriceList::CskuPriceList>) };
          inline vector<SkuPriceList::CskuPriceList> getCskuPriceList() { DARABONBA_PTR_GET(cskuPriceList_, vector<SkuPriceList::CskuPriceList>) };
          inline SkuPriceList& setCskuPriceList(const vector<SkuPriceList::CskuPriceList> & cskuPriceList) { DARABONBA_PTR_SET_VALUE(cskuPriceList_, cskuPriceList) };
          inline SkuPriceList& setCskuPriceList(vector<SkuPriceList::CskuPriceList> && cskuPriceList) { DARABONBA_PTR_SET_RVALUE(cskuPriceList_, cskuPriceList) };


          // skuCode Field Functions 
          bool hasSkuCode() const { return this->skuCode_ != nullptr;};
          void deleteSkuCode() { this->skuCode_ = nullptr;};
          inline string getSkuCode() const { DARABONBA_PTR_GET_DEFAULT(skuCode_, "") };
          inline SkuPriceList& setSkuCode(string skuCode) { DARABONBA_PTR_SET_VALUE(skuCode_, skuCode) };


          // skuFactorMap Field Functions 
          bool hasSkuFactorMap() const { return this->skuFactorMap_ != nullptr;};
          void deleteSkuFactorMap() { this->skuFactorMap_ = nullptr;};
          inline const map<string, string> & getSkuFactorMap() const { DARABONBA_PTR_GET_CONST(skuFactorMap_, map<string, string>) };
          inline map<string, string> getSkuFactorMap() { DARABONBA_PTR_GET(skuFactorMap_, map<string, string>) };
          inline SkuPriceList& setSkuFactorMap(const map<string, string> & skuFactorMap) { DARABONBA_PTR_SET_VALUE(skuFactorMap_, skuFactorMap) };
          inline SkuPriceList& setSkuFactorMap(map<string, string> && skuFactorMap) { DARABONBA_PTR_SET_RVALUE(skuFactorMap_, skuFactorMap) };


        protected:
          // The prices of the SKUs.
          shared_ptr<vector<SkuPriceList::CskuPriceList>> cskuPriceList_ {};
          // The code of the SKU.
          shared_ptr<string> skuCode_ {};
          // The values of the pricing factors.
          shared_ptr<map<string, string>> skuFactorMap_ {};
        };

        virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && this->skuPriceList_ == nullptr && this->totalCount_ == nullptr; };
        // nextPageToken Field Functions 
        bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
        void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
        inline string getNextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
        inline SkuPricePage& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


        // skuPriceList Field Functions 
        bool hasSkuPriceList() const { return this->skuPriceList_ != nullptr;};
        void deleteSkuPriceList() { this->skuPriceList_ = nullptr;};
        inline const vector<SkuPricePage::SkuPriceList> & getSkuPriceList() const { DARABONBA_PTR_GET_CONST(skuPriceList_, vector<SkuPricePage::SkuPriceList>) };
        inline vector<SkuPricePage::SkuPriceList> getSkuPriceList() { DARABONBA_PTR_GET(skuPriceList_, vector<SkuPricePage::SkuPriceList>) };
        inline SkuPricePage& setSkuPriceList(const vector<SkuPricePage::SkuPriceList> & skuPriceList) { DARABONBA_PTR_SET_VALUE(skuPriceList_, skuPriceList) };
        inline SkuPricePage& setSkuPriceList(vector<SkuPricePage::SkuPriceList> && skuPriceList) { DARABONBA_PTR_SET_RVALUE(skuPriceList_, skuPriceList) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline SkuPricePage& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The token that is used to query the next page.
        shared_ptr<string> nextPageToken_ {};
        // The SKUs.
        shared_ptr<vector<SkuPricePage::SkuPriceList>> skuPriceList_ {};
        // The total number of SKUs.
        shared_ptr<int32_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->skuPricePage_ == nullptr; };
      // skuPricePage Field Functions 
      bool hasSkuPricePage() const { return this->skuPricePage_ != nullptr;};
      void deleteSkuPricePage() { this->skuPricePage_ = nullptr;};
      inline const Data::SkuPricePage & getSkuPricePage() const { DARABONBA_PTR_GET_CONST(skuPricePage_, Data::SkuPricePage) };
      inline Data::SkuPricePage getSkuPricePage() { DARABONBA_PTR_GET(skuPricePage_, Data::SkuPricePage) };
      inline Data& setSkuPricePage(const Data::SkuPricePage & skuPricePage) { DARABONBA_PTR_SET_VALUE(skuPricePage_, skuPricePage) };
      inline Data& setSkuPricePage(Data::SkuPricePage && skuPricePage) { DARABONBA_PTR_SET_RVALUE(skuPricePage_, skuPricePage) };


    protected:
      // The SKUs of the pricing object.
      shared_ptr<Data::SkuPricePage> skuPricePage_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySkuPriceListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySkuPriceListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySkuPriceListResponseBody::Data) };
    inline QuerySkuPriceListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySkuPriceListResponseBody::Data) };
    inline QuerySkuPriceListResponseBody& setData(const QuerySkuPriceListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySkuPriceListResponseBody& setData(QuerySkuPriceListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySkuPriceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySkuPriceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySkuPriceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<string> code_ {};
    // The data that is returned.
    shared_ptr<QuerySkuPriceListResponseBody::Data> data_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
