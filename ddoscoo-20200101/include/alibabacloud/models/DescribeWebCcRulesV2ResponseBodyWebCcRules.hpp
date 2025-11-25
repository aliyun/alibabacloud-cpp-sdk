// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBodyWebCCRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBodyWebCCRules& obj) { 
      DARABONBA_PTR_TO_JSON(Expires, expires_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RuleDetail, ruleDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBodyWebCCRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Expires, expires_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RuleDetail, ruleDetail_);
    };
    DescribeWebCCRulesV2ResponseBodyWebCCRules() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRules(const DescribeWebCCRulesV2ResponseBodyWebCCRules &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRules(DescribeWebCCRulesV2ResponseBodyWebCCRules &&) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBodyWebCCRules() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRules& operator=(const DescribeWebCCRulesV2ResponseBodyWebCCRules &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRules& operator=(DescribeWebCCRulesV2ResponseBodyWebCCRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expires_ == nullptr
        && return this->name_ == nullptr && return this->owner_ == nullptr && return this->ruleDetail_ == nullptr; };
    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline int64_t expires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0L) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRules& setExpires(int64_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRules& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // ruleDetail Field Functions 
    bool hasRuleDetail() const { return this->ruleDetail_ != nullptr;};
    void deleteRuleDetail() { this->ruleDetail_ = nullptr;};
    inline const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail & ruleDetail() const { DARABONBA_PTR_GET_CONST(ruleDetail_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail) };
    inline Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail ruleDetail() { DARABONBA_PTR_GET(ruleDetail_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRules& setRuleDetail(const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail & ruleDetail) { DARABONBA_PTR_SET_VALUE(ruleDetail_, ruleDetail) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRules& setRuleDetail(Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail && ruleDetail) { DARABONBA_PTR_SET_RVALUE(ruleDetail_, ruleDetail) };


  protected:
    // The validity period of the rule. Unit: seconds. If the Action parameter is set to block, the system blocks the requests that match the rule within the validity period of the rule. The value 0 indicates that the rule is permanently valid.
    std::shared_ptr<int64_t> expires_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The method used to create the rule. Valid values:
    // 
    // *   **manual** (default): manually created.
    // *   **clover**: automatically created.
    std::shared_ptr<string> owner_ = nullptr;
    // The details of the rule.
    std::shared_ptr<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail> ruleDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
