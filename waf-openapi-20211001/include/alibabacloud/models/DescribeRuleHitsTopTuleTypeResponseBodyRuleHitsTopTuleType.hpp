// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPTULETYPERESPONSEBODYRULEHITSTOPTULETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPTULETYPERESPONSEBODYRULEHITSTOPTULETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType() = default ;
    DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType(const DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType &) = default ;
    DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType(DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType &&) = default ;
    DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType() = default ;
    DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType& operator=(const DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType &) = default ;
    DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType& operator=(DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->ruleType_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline DescribeRuleHitsTopTuleTypeResponseBodyRuleHitsTopTuleType& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The number of requests that match protection rules.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The type of rule that is matched. By default, this parameter is not returned. This indicates that all types of rules that are matched are returned.
    // 
    // *   **waf:** basic protection rules.
    // *   **blacklist:** IP address blacklist rules.
    // *   **custom:** custom rules.
    // *   **antiscan:** scan protection rules.
    // *   **cc_system:** HTTP flood protection rules.
    // *   **region_block:** region blacklist rules.
    // *   **scene:** bot management rules.
    // *   **dlp:** data leakage prevention rules.
    std::shared_ptr<string> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
