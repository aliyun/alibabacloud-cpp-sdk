// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODIFYBECLUSTERINQUIRYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMODIFYBECLUSTERINQUIRYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class GetModifyBEClusterInquiryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModifyBEClusterInquiryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(OptionalPromotions, optionalPromotions_);
      DARABONBA_PTR_TO_JSON(PricingRules, pricingRules_);
      DARABONBA_PTR_TO_JSON(RefundAmount, refundAmount_);
      DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetModifyBEClusterInquiryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(OptionalPromotions, optionalPromotions_);
      DARABONBA_PTR_FROM_JSON(PricingRules, pricingRules_);
      DARABONBA_PTR_FROM_JSON(RefundAmount, refundAmount_);
      DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
    };
    GetModifyBEClusterInquiryResponseBodyData() = default ;
    GetModifyBEClusterInquiryResponseBodyData(const GetModifyBEClusterInquiryResponseBodyData &) = default ;
    GetModifyBEClusterInquiryResponseBodyData(GetModifyBEClusterInquiryResponseBodyData &&) = default ;
    GetModifyBEClusterInquiryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModifyBEClusterInquiryResponseBodyData() = default ;
    GetModifyBEClusterInquiryResponseBodyData& operator=(const GetModifyBEClusterInquiryResponseBodyData &) = default ;
    GetModifyBEClusterInquiryResponseBodyData& operator=(GetModifyBEClusterInquiryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->optionalPromotions_ != nullptr && this->pricingRules_ != nullptr && this->refundAmount_ != nullptr && this->tradeAmount_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetModifyBEClusterInquiryResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // optionalPromotions Field Functions 
    bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
    void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
    inline const vector<Models::GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions> & optionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, vector<Models::GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions>) };
    inline vector<Models::GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions> optionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, vector<Models::GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions>) };
    inline GetModifyBEClusterInquiryResponseBodyData& setOptionalPromotions(const vector<Models::GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions> & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
    inline GetModifyBEClusterInquiryResponseBodyData& setOptionalPromotions(vector<Models::GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions> && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


    // pricingRules Field Functions 
    bool hasPricingRules() const { return this->pricingRules_ != nullptr;};
    void deletePricingRules() { this->pricingRules_ = nullptr;};
    inline const map<string, string> & pricingRules() const { DARABONBA_PTR_GET_CONST(pricingRules_, map<string, string>) };
    inline map<string, string> pricingRules() { DARABONBA_PTR_GET(pricingRules_, map<string, string>) };
    inline GetModifyBEClusterInquiryResponseBodyData& setPricingRules(const map<string, string> & pricingRules) { DARABONBA_PTR_SET_VALUE(pricingRules_, pricingRules) };
    inline GetModifyBEClusterInquiryResponseBodyData& setPricingRules(map<string, string> && pricingRules) { DARABONBA_PTR_SET_RVALUE(pricingRules_, pricingRules) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline string refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, "") };
    inline GetModifyBEClusterInquiryResponseBodyData& setRefundAmount(string refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline string tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, "") };
    inline GetModifyBEClusterInquiryResponseBodyData& setTradeAmount(string tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    // The currency.
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<vector<Models::GetModifyBEClusterInquiryResponseBodyDataOptionalPromotions>> optionalPromotions_ = nullptr;
    std::shared_ptr<map<string, string>> pricingRules_ = nullptr;
    // The estimated refund amount when the subscription cluster of a subscription instance is changed to a pay-as-you-go cluster.
    std::shared_ptr<string> refundAmount_ = nullptr;
    // The amount of money.
    std::shared_ptr<string> tradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
