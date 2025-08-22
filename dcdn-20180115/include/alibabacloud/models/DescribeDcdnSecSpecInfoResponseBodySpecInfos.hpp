// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODYSPECINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNSECSPECINFORESPONSEBODYSPECINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnSecSpecInfoResponseBodySpecInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnSecSpecInfoResponseBodySpecInfos& obj) { 
      DARABONBA_PTR_TO_JSON(RuleCode, ruleCode_);
      DARABONBA_PTR_TO_JSON(RuleConfigs, ruleConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnSecSpecInfoResponseBodySpecInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleCode, ruleCode_);
      DARABONBA_PTR_FROM_JSON(RuleConfigs, ruleConfigs_);
    };
    DescribeDcdnSecSpecInfoResponseBodySpecInfos() = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfos(const DescribeDcdnSecSpecInfoResponseBodySpecInfos &) = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfos(DescribeDcdnSecSpecInfoResponseBodySpecInfos &&) = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnSecSpecInfoResponseBodySpecInfos() = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfos& operator=(const DescribeDcdnSecSpecInfoResponseBodySpecInfos &) = default ;
    DescribeDcdnSecSpecInfoResponseBodySpecInfos& operator=(DescribeDcdnSecSpecInfoResponseBodySpecInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleCode_ != nullptr
        && this->ruleConfigs_ != nullptr; };
    // ruleCode Field Functions 
    bool hasRuleCode() const { return this->ruleCode_ != nullptr;};
    void deleteRuleCode() { this->ruleCode_ = nullptr;};
    inline string ruleCode() const { DARABONBA_PTR_GET_DEFAULT(ruleCode_, "") };
    inline DescribeDcdnSecSpecInfoResponseBodySpecInfos& setRuleCode(string ruleCode) { DARABONBA_PTR_SET_VALUE(ruleCode_, ruleCode) };


    // ruleConfigs Field Functions 
    bool hasRuleConfigs() const { return this->ruleConfigs_ != nullptr;};
    void deleteRuleConfigs() { this->ruleConfigs_ = nullptr;};
    inline const vector<Models::DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs> & ruleConfigs() const { DARABONBA_PTR_GET_CONST(ruleConfigs_, vector<Models::DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs>) };
    inline vector<Models::DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs> ruleConfigs() { DARABONBA_PTR_GET(ruleConfigs_, vector<Models::DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs>) };
    inline DescribeDcdnSecSpecInfoResponseBodySpecInfos& setRuleConfigs(const vector<Models::DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs> & ruleConfigs) { DARABONBA_PTR_SET_VALUE(ruleConfigs_, ruleConfigs) };
    inline DescribeDcdnSecSpecInfoResponseBodySpecInfos& setRuleConfigs(vector<Models::DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs> && ruleConfigs) { DARABONBA_PTR_SET_RVALUE(ruleConfigs_, ruleConfigs) };


  protected:
    // The code of the security rule.
    std::shared_ptr<string> ruleCode_ = nullptr;
    // The configurations of the security rule.
    std::shared_ptr<vector<Models::DescribeDcdnSecSpecInfoResponseBodySpecInfosRuleConfigs>> ruleConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
