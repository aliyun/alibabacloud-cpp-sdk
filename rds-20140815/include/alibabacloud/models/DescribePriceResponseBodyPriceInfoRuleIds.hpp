// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORULEIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICERESPONSEBODYPRICEINFORULEIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribePriceResponseBodyPriceInfoRuleIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceResponseBodyPriceInfoRuleIds& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceResponseBodyPriceInfoRuleIds& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribePriceResponseBodyPriceInfoRuleIds() = default ;
    DescribePriceResponseBodyPriceInfoRuleIds(const DescribePriceResponseBodyPriceInfoRuleIds &) = default ;
    DescribePriceResponseBodyPriceInfoRuleIds(DescribePriceResponseBodyPriceInfoRuleIds &&) = default ;
    DescribePriceResponseBodyPriceInfoRuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceResponseBodyPriceInfoRuleIds() = default ;
    DescribePriceResponseBodyPriceInfoRuleIds& operator=(const DescribePriceResponseBodyPriceInfoRuleIds &) = default ;
    DescribePriceResponseBodyPriceInfoRuleIds& operator=(DescribePriceResponseBodyPriceInfoRuleIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline const vector<string> & ruleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
    inline vector<string> ruleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
    inline DescribePriceResponseBodyPriceInfoRuleIds& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
    inline DescribePriceResponseBodyPriceInfoRuleIds& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<vector<string>> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
