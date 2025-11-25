// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCdnLinkageRulesResponseBodySchedulerRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnLinkageRulesResponseBodySchedulerRules& obj) { 
      DARABONBA_PTR_TO_JSON(CdnLinkageEnable, cdnLinkageEnable_);
      DARABONBA_PTR_TO_JSON(CdnLinkageRule, cdnLinkageRule_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnLinkageRulesResponseBodySchedulerRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnLinkageEnable, cdnLinkageEnable_);
      DARABONBA_PTR_FROM_JSON(CdnLinkageRule, cdnLinkageRule_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeCdnLinkageRulesResponseBodySchedulerRules() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRules(const DescribeCdnLinkageRulesResponseBodySchedulerRules &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRules(DescribeCdnLinkageRulesResponseBodySchedulerRules &&) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnLinkageRulesResponseBodySchedulerRules() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRules& operator=(const DescribeCdnLinkageRulesResponseBodySchedulerRules &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRules& operator=(DescribeCdnLinkageRulesResponseBodySchedulerRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnLinkageEnable_ == nullptr
        && return this->cdnLinkageRule_ == nullptr && return this->domain_ == nullptr; };
    // cdnLinkageEnable Field Functions 
    bool hasCdnLinkageEnable() const { return this->cdnLinkageEnable_ != nullptr;};
    void deleteCdnLinkageEnable() { this->cdnLinkageEnable_ = nullptr;};
    inline int32_t cdnLinkageEnable() const { DARABONBA_PTR_GET_DEFAULT(cdnLinkageEnable_, 0) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRules& setCdnLinkageEnable(int32_t cdnLinkageEnable) { DARABONBA_PTR_SET_VALUE(cdnLinkageEnable_, cdnLinkageEnable) };


    // cdnLinkageRule Field Functions 
    bool hasCdnLinkageRule() const { return this->cdnLinkageRule_ != nullptr;};
    void deleteCdnLinkageRule() { this->cdnLinkageRule_ = nullptr;};
    inline const Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule & cdnLinkageRule() const { DARABONBA_PTR_GET_CONST(cdnLinkageRule_, Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule) };
    inline Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule cdnLinkageRule() { DARABONBA_PTR_GET(cdnLinkageRule_, Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRules& setCdnLinkageRule(const Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule & cdnLinkageRule) { DARABONBA_PTR_SET_VALUE(cdnLinkageRule_, cdnLinkageRule) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRules& setCdnLinkageRule(Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule && cdnLinkageRule) { DARABONBA_PTR_SET_RVALUE(cdnLinkageRule_, cdnLinkageRule) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRules& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    std::shared_ptr<int32_t> cdnLinkageEnable_ = nullptr;
    std::shared_ptr<Models::DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRule> cdnLinkageRule_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
