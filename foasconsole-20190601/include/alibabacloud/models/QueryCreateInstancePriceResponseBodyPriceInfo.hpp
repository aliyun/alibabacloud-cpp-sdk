// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICERESPONSEBODYPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_QUERYCREATEINSTANCEPRICERESPONSEBODYPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo.hpp>
#include <vector>
#include <alibabacloud/models/QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions.hpp>
#include <alibabacloud/models/QueryCreateInstancePriceResponseBodyPriceInfoRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class QueryCreateInstancePriceResponseBodyPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCreateInstancePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(DepreciateInfo, depreciateInfo_);
      DARABONBA_PTR_TO_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_TO_JSON(IsContractActivity, isContractActivity_);
      DARABONBA_PTR_TO_JSON(LxRequestId, lxRequestId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(OptionalPromotions, optionalPromotions_);
      DARABONBA_PTR_TO_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(StandDiscountPrice, standDiscountPrice_);
      DARABONBA_PTR_TO_JSON(StandPrice, standPrice_);
      DARABONBA_PTR_TO_JSON(TradeAmount, tradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCreateInstancePriceResponseBodyPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(DepreciateInfo, depreciateInfo_);
      DARABONBA_PTR_FROM_JSON(DiscountAmount, discountAmount_);
      DARABONBA_PTR_FROM_JSON(IsContractActivity, isContractActivity_);
      DARABONBA_PTR_FROM_JSON(LxRequestId, lxRequestId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(OptionalPromotions, optionalPromotions_);
      DARABONBA_PTR_FROM_JSON(OriginalAmount, originalAmount_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(StandDiscountPrice, standDiscountPrice_);
      DARABONBA_PTR_FROM_JSON(StandPrice, standPrice_);
      DARABONBA_PTR_FROM_JSON(TradeAmount, tradeAmount_);
    };
    QueryCreateInstancePriceResponseBodyPriceInfo() = default ;
    QueryCreateInstancePriceResponseBodyPriceInfo(const QueryCreateInstancePriceResponseBodyPriceInfo &) = default ;
    QueryCreateInstancePriceResponseBodyPriceInfo(QueryCreateInstancePriceResponseBodyPriceInfo &&) = default ;
    QueryCreateInstancePriceResponseBodyPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCreateInstancePriceResponseBodyPriceInfo() = default ;
    QueryCreateInstancePriceResponseBodyPriceInfo& operator=(const QueryCreateInstancePriceResponseBodyPriceInfo &) = default ;
    QueryCreateInstancePriceResponseBodyPriceInfo& operator=(QueryCreateInstancePriceResponseBodyPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->currency_ == nullptr && return this->depreciateInfo_ == nullptr && return this->discountAmount_ == nullptr && return this->isContractActivity_ == nullptr && return this->lxRequestId_ == nullptr
        && return this->message_ == nullptr && return this->optionalPromotions_ == nullptr && return this->originalAmount_ == nullptr && return this->rules_ == nullptr && return this->standDiscountPrice_ == nullptr
        && return this->standPrice_ == nullptr && return this->tradeAmount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // depreciateInfo Field Functions 
    bool hasDepreciateInfo() const { return this->depreciateInfo_ != nullptr;};
    void deleteDepreciateInfo() { this->depreciateInfo_ = nullptr;};
    inline const Models::QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo & depreciateInfo() const { DARABONBA_PTR_GET_CONST(depreciateInfo_, Models::QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo) };
    inline Models::QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo depreciateInfo() { DARABONBA_PTR_GET(depreciateInfo_, Models::QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setDepreciateInfo(const Models::QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo & depreciateInfo) { DARABONBA_PTR_SET_VALUE(depreciateInfo_, depreciateInfo) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setDepreciateInfo(Models::QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo && depreciateInfo) { DARABONBA_PTR_SET_RVALUE(depreciateInfo_, depreciateInfo) };


    // discountAmount Field Functions 
    bool hasDiscountAmount() const { return this->discountAmount_ != nullptr;};
    void deleteDiscountAmount() { this->discountAmount_ = nullptr;};
    inline float discountAmount() const { DARABONBA_PTR_GET_DEFAULT(discountAmount_, 0.0) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setDiscountAmount(float discountAmount) { DARABONBA_PTR_SET_VALUE(discountAmount_, discountAmount) };


    // isContractActivity Field Functions 
    bool hasIsContractActivity() const { return this->isContractActivity_ != nullptr;};
    void deleteIsContractActivity() { this->isContractActivity_ = nullptr;};
    inline bool isContractActivity() const { DARABONBA_PTR_GET_DEFAULT(isContractActivity_, false) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setIsContractActivity(bool isContractActivity) { DARABONBA_PTR_SET_VALUE(isContractActivity_, isContractActivity) };


    // lxRequestId Field Functions 
    bool hasLxRequestId() const { return this->lxRequestId_ != nullptr;};
    void deleteLxRequestId() { this->lxRequestId_ = nullptr;};
    inline string lxRequestId() const { DARABONBA_PTR_GET_DEFAULT(lxRequestId_, "") };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setLxRequestId(string lxRequestId) { DARABONBA_PTR_SET_VALUE(lxRequestId_, lxRequestId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // optionalPromotions Field Functions 
    bool hasOptionalPromotions() const { return this->optionalPromotions_ != nullptr;};
    void deleteOptionalPromotions() { this->optionalPromotions_ = nullptr;};
    inline const vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions> & optionalPromotions() const { DARABONBA_PTR_GET_CONST(optionalPromotions_, vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions>) };
    inline vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions> optionalPromotions() { DARABONBA_PTR_GET(optionalPromotions_, vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions>) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setOptionalPromotions(const vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions> & optionalPromotions) { DARABONBA_PTR_SET_VALUE(optionalPromotions_, optionalPromotions) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setOptionalPromotions(vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions> && optionalPromotions) { DARABONBA_PTR_SET_RVALUE(optionalPromotions_, optionalPromotions) };


    // originalAmount Field Functions 
    bool hasOriginalAmount() const { return this->originalAmount_ != nullptr;};
    void deleteOriginalAmount() { this->originalAmount_ = nullptr;};
    inline float originalAmount() const { DARABONBA_PTR_GET_DEFAULT(originalAmount_, 0.0) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setOriginalAmount(float originalAmount) { DARABONBA_PTR_SET_VALUE(originalAmount_, originalAmount) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoRules>) };
    inline vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoRules>) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setRules(const vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setRules(vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // standDiscountPrice Field Functions 
    bool hasStandDiscountPrice() const { return this->standDiscountPrice_ != nullptr;};
    void deleteStandDiscountPrice() { this->standDiscountPrice_ = nullptr;};
    inline string standDiscountPrice() const { DARABONBA_PTR_GET_DEFAULT(standDiscountPrice_, "") };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setStandDiscountPrice(string standDiscountPrice) { DARABONBA_PTR_SET_VALUE(standDiscountPrice_, standDiscountPrice) };


    // standPrice Field Functions 
    bool hasStandPrice() const { return this->standPrice_ != nullptr;};
    void deleteStandPrice() { this->standPrice_ = nullptr;};
    inline string standPrice() const { DARABONBA_PTR_GET_DEFAULT(standPrice_, "") };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setStandPrice(string standPrice) { DARABONBA_PTR_SET_VALUE(standPrice_, standPrice) };


    // tradeAmount Field Functions 
    bool hasTradeAmount() const { return this->tradeAmount_ != nullptr;};
    void deleteTradeAmount() { this->tradeAmount_ = nullptr;};
    inline float tradeAmount() const { DARABONBA_PTR_GET_DEFAULT(tradeAmount_, 0.0) };
    inline QueryCreateInstancePriceResponseBodyPriceInfo& setTradeAmount(float tradeAmount) { DARABONBA_PTR_SET_VALUE(tradeAmount_, tradeAmount) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<Models::QueryCreateInstancePriceResponseBodyPriceInfoDepreciateInfo> depreciateInfo_ = nullptr;
    std::shared_ptr<float> discountAmount_ = nullptr;
    std::shared_ptr<bool> isContractActivity_ = nullptr;
    std::shared_ptr<string> lxRequestId_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoOptionalPromotions>> optionalPromotions_ = nullptr;
    std::shared_ptr<float> originalAmount_ = nullptr;
    std::shared_ptr<vector<Models::QueryCreateInstancePriceResponseBodyPriceInfoRules>> rules_ = nullptr;
    std::shared_ptr<string> standDiscountPrice_ = nullptr;
    std::shared_ptr<string> standPrice_ = nullptr;
    std::shared_ptr<float> tradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
