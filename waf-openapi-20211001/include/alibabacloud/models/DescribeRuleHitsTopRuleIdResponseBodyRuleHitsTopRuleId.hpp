// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDRESPONSEBODYRULEHITSTOPRULEID_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDRESPONSEBODYRULEHITSTOPRULEID_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId() = default ;
    DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId(const DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId &) = default ;
    DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId(DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId &&) = default ;
    DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId() = default ;
    DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId& operator=(const DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId &) = default ;
    DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId& operator=(DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->resource_ != nullptr && this->ruleId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeRuleHitsTopRuleIdResponseBodyRuleHitsTopRuleId& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The number of requests that match the rule.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The protected object.
    std::shared_ptr<string> resource_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
