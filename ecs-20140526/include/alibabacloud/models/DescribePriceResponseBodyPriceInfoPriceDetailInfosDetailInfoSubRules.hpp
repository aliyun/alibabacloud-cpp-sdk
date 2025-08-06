// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFOSUBRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFOSUBRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules() = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules(const DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules(DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &&) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules() = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& operator=(const DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &) = default ;
    DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& operator=(DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rule_ != nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule>) };
    inline vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule>) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& setRule(const vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& setRule(vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribePriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
