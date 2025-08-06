// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFOSUBRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERENEWALPRICERESPONSEBODYPRICEINFOPRICEDETAILINFOSDETAILINFOSUBRULES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules(const DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules(DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &&) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules() = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& operator=(const DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &) = default ;
    DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& operator=(DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rule_ != nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> & rule() const { DARABONBA_PTR_GET_CONST(rule_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule>) };
    inline vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> rule() { DARABONBA_PTR_GET(rule_, vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule>) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& setRule(const vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRules& setRule(vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule> && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    std::shared_ptr<vector<Models::DescribeRenewalPriceResponseBodyPriceInfoPriceDetailInfosDetailInfoSubRulesRule>> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
