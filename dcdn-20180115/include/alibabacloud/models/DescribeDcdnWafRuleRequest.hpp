// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DescribeDcdnWafRuleRequest() = default ;
    DescribeDcdnWafRuleRequest(const DescribeDcdnWafRuleRequest &) = default ;
    DescribeDcdnWafRuleRequest(DescribeDcdnWafRuleRequest &&) = default ;
    DescribeDcdnWafRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafRuleRequest() = default ;
    DescribeDcdnWafRuleRequest& operator=(const DescribeDcdnWafRuleRequest &) = default ;
    DescribeDcdnWafRuleRequest& operator=(DescribeDcdnWafRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DescribeDcdnWafRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The ID of the protection rule. You can specify only one ID in each request.
    // 
    // This parameter is required.
    shared_ptr<int64_t> ruleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
