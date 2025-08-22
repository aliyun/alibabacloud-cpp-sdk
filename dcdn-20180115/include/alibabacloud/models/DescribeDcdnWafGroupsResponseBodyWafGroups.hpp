// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODYWAFGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFGROUPSRESPONSEBODYWAFGROUPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafGroupsResponseBodyWafGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafGroupsResponseBodyWafGroups& obj) { 
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_TO_JSON(Subscribe, subscribe_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafGroupsResponseBodyWafGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RuleCount, ruleCount_);
      DARABONBA_PTR_FROM_JSON(Subscribe, subscribe_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeDcdnWafGroupsResponseBodyWafGroups() = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroups(const DescribeDcdnWafGroupsResponseBodyWafGroups &) = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroups(DescribeDcdnWafGroupsResponseBodyWafGroups &&) = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafGroupsResponseBodyWafGroups() = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroups& operator=(const DescribeDcdnWafGroupsResponseBodyWafGroups &) = default ;
    DescribeDcdnWafGroupsResponseBodyWafGroups& operator=(DescribeDcdnWafGroupsResponseBodyWafGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->policies_ != nullptr && this->ruleCount_ != nullptr && this->subscribe_ != nullptr
        && this->templateId_ != nullptr; };
    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<Models::DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Models::DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies>) };
    inline vector<Models::DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<Models::DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies>) };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setPolicies(const vector<Models::DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setPolicies(vector<Models::DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // ruleCount Field Functions 
    bool hasRuleCount() const { return this->ruleCount_ != nullptr;};
    void deleteRuleCount() { this->ruleCount_ = nullptr;};
    inline int32_t ruleCount() const { DARABONBA_PTR_GET_DEFAULT(ruleCount_, 0) };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setRuleCount(int32_t ruleCount) { DARABONBA_PTR_SET_VALUE(ruleCount_, ruleCount) };


    // subscribe Field Functions 
    bool hasSubscribe() const { return this->subscribe_ != nullptr;};
    void deleteSubscribe() { this->subscribe_ = nullptr;};
    inline string subscribe() const { DARABONBA_PTR_GET_DEFAULT(subscribe_, "") };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setSubscribe(string subscribe) { DARABONBA_PTR_SET_VALUE(subscribe_, subscribe) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline DescribeDcdnWafGroupsResponseBodyWafGroups& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The time when the WAF rule group was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the custom WAF rule group.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the WAF rule.
    std::shared_ptr<string> name_ = nullptr;
    // The policy that is associated with the WAF rule group.
    std::shared_ptr<vector<Models::DescribeDcdnWafGroupsResponseBodyWafGroupsPolicies>> policies_ = nullptr;
    // The number of WAF rules.
    std::shared_ptr<int32_t> ruleCount_ = nullptr;
    // Indicates whether to enable subscription. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> subscribe_ = nullptr;
    // The ID of the template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
