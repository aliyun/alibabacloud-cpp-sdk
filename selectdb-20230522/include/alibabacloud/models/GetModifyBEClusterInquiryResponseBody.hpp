// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODIFYBECLUSTERINQUIRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMODIFYBECLUSTERINQUIRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class GetModifyBEClusterInquiryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModifyBEClusterInquiryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetModifyBEClusterInquiryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetModifyBEClusterInquiryResponseBody() = default ;
    GetModifyBEClusterInquiryResponseBody(const GetModifyBEClusterInquiryResponseBody &) = default ;
    GetModifyBEClusterInquiryResponseBody(GetModifyBEClusterInquiryResponseBody &&) = default ;
    GetModifyBEClusterInquiryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModifyBEClusterInquiryResponseBody() = default ;
    GetModifyBEClusterInquiryResponseBody& operator=(const GetModifyBEClusterInquiryResponseBody &) = default ;
    GetModifyBEClusterInquiryResponseBody& operator=(GetModifyBEClusterInquiryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Currency, currency_);
        DARABONBA_PTR_TO_JSON(OptionalPromotions, optionalPromotions_);
        DARABONBA_PTR_TO_JSON(PricingRules, pricingRules_);
        DARABONBA_PTR_TO_JSON(RefundAmount, refundAmount_);
        DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Currency, currency_);
        DARABONBA_PTR_FROM_JSON(OptionalPromotions, optionalPromotions_);
        DARABONBA_PTR_FROM_JSON(PricingRules, pricingRules_);
        DARABONBA_PTR_FROM_JSON(RefundAmount, refundAmount_);
        DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
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
      class OptionalPromotions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OptionalPromotions& obj) { 
          DARABONBA_PTR_TO_JSON(CanPromFee, canPromFee_);
          DARABONBA_PTR_TO_JSON(OptionCode, optionCode_);
          DARABONBA_PTR_TO_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_TO_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
        };
        friend void from_json(const Darabonba::Json& j, OptionalPromotions& obj) { 
          DARABONBA_PTR_FROM_JSON(CanPromFee, canPromFee_);
          DARABONBA_PTR_FROM_JSON(OptionCode, optionCode_);
          DARABONBA_PTR_FROM_JSON(PromotionDesc, promotionDesc_);
          DARABONBA_PTR_FROM_JSON(PromotionName, promotionName_);
          DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
        };
        OptionalPromotions() = default ;
        OptionalPromotions(const OptionalPromotions &) = default ;
        OptionalPromotions(OptionalPromotions &&) = default ;
        OptionalPromotions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OptionalPromotions() = default ;
        OptionalPromotions& operator=(const OptionalPromotions &) = default ;
        OptionalPromotions& operator=(OptionalPromotions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canPromFee_ == nullptr
        && this->optionCode_ == nullptr && this->promotionDesc_ == nullptr && this->promotionName_ == nullptr && this->promotionOptionNo_ == nullptr; };
        // canPromFee Field Functions 
        bool hasCanPromFee() const { return this->canPromFee_ != nullptr;};
        void deleteCanPromFee() { this->canPromFee_ = nullptr;};
        inline string getCanPromFee() const { DARABONBA_PTR_GET_DEFAULT(canPromFee_, "") };
        inline OptionalPromotions& setCanPromFee(string canPromFee) { DARABONBA_PTR_SET_VALUE(canPromFee_, canPromFee) };


        // optionCode Field Functions 
        bool hasOptionCode() const { return this->optionCode_ != nullptr;};
        void deleteOptionCode() { this->optionCode_ = nullptr;};
        inline string getOptionCode() const { DARABONBA_PTR_GET_DEFAULT(optionCode_, "") };
        inline OptionalPromotions& setOptionCode(string optionCode) { DARABONBA_PTR_SET_VALUE(optionCode_, optionCode) };


        // promotionDesc Field Functions 
        bool hasPromotionDesc() const { return this->promotionDesc_ != nullptr;};
        void deletePromotionDesc() { this->promotionDesc_ = nullptr;};
        inline string getPromotionDesc() const { DARABONBA_PTR_GET_DEFAULT(promotionDesc_, "") };
        inline OptionalPromotions& setPromotionDesc(string promotionDesc) { DARABONBA_PTR_SET_VALUE(promotionDesc_, promotionDesc) };


        // promotionName Field Functions 
        bool hasPromotionName() const { return this->promotionName_ != nullptr;};
        void deletePromotionName() { this->promotionName_ = nullptr;};
        inline string getPromotionName() const { DARABONBA_PTR_GET_DEFAULT(promotionName_, "") };
        inline OptionalPromotions& setPromotionName(string promotionName) { DARABONBA_PTR_SET_VALUE(promotionName_, promotionName) };


        // promotionOptionNo Field Functions 
        bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
        void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
        inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
        inline OptionalPromotions& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


      protected:
        shared_ptr<string> canPromFee_ {};
        shared_ptr<string> optionCode_ {};
        shared_ptr<string> promotionDesc_ {};
        shared_ptr<string> promotionName_ {};
        shared_ptr<string> promotionOptionNo_ {};
      };

      virtual bool empty() const override { return this->currency_ == nullptr
        && this->optionalPromotions_ == nullptr && this->pricingRules_ == nullptr && this->refundAmount_ == nullptr && this->tradeAmount_ == nullptr; };
      // currency Field Functions 
      bool hasCurrency() const { return this->currency_ != nullptr;};
      void deleteCurrency() { this->currency_ = nullptr;};
      inline string getCurrency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
      inline Data& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


      // optionalPromotions Field Functions 
      bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
      void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
      inline const vector<Data::OptionalPromotions> & getOptionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, vector<Data::OptionalPromotions>) };
      inline vector<Data::OptionalPromotions> getOptionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, vector<Data::OptionalPromotions>) };
      inline Data& setOptionalPromotions(const vector<Data::OptionalPromotions> & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
      inline Data& setOptionalPromotions(vector<Data::OptionalPromotions> && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


      // pricingRules Field Functions 
      bool hasPricingRules() const { return this->pricingRules_ != nullptr;};
      void deletePricingRules() { this->pricingRules_ = nullptr;};
      inline const map<string, string> & getPricingRules() const { DARABONBA_PTR_GET_CONST(pricingRules_, map<string, string>) };
      inline map<string, string> getPricingRules() { DARABONBA_PTR_GET(pricingRules_, map<string, string>) };
      inline Data& setPricingRules(const map<string, string> & pricingRules) { DARABONBA_PTR_SET_VALUE(pricingRules_, pricingRules) };
      inline Data& setPricingRules(map<string, string> && pricingRules) { DARABONBA_PTR_SET_RVALUE(pricingRules_, pricingRules) };


      // refundAmount Field Functions 
      bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
      void deleteRefundAmount() { this->refundAmount_ = nullptr;};
      inline string getRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, "") };
      inline Data& setRefundAmount(string refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


      // tradeAmount Field Functions 
      bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
      void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
      inline string getTradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
      inline Data& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


    protected:
      // The currency.
      shared_ptr<string> currency_ {};
      shared_ptr<vector<Data::OptionalPromotions>> optionalPromotions_ {};
      shared_ptr<map<string, string>> pricingRules_ {};
      // The estimated refund amount when the subscription cluster of a subscription instance is changed to a pay-as-you-go cluster.
      shared_ptr<string> refundAmount_ {};
      // The amount of money.
      shared_ptr<string> tradeAmount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetModifyBEClusterInquiryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetModifyBEClusterInquiryResponseBody::Data) };
    inline GetModifyBEClusterInquiryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetModifyBEClusterInquiryResponseBody::Data) };
    inline GetModifyBEClusterInquiryResponseBody& setData(const GetModifyBEClusterInquiryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetModifyBEClusterInquiryResponseBody& setData(GetModifyBEClusterInquiryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetModifyBEClusterInquiryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information returned.
    shared_ptr<GetModifyBEClusterInquiryResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
