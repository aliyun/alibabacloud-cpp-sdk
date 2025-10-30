// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHITRULELISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHITRULELISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHitRuleListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHitRuleListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(hitCount, hitCount_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHitRuleListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(hitCount, hitCount_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
    };
    DescribeHitRuleListResponseBodyResultObject() = default ;
    DescribeHitRuleListResponseBodyResultObject(const DescribeHitRuleListResponseBodyResultObject &) = default ;
    DescribeHitRuleListResponseBodyResultObject(DescribeHitRuleListResponseBodyResultObject &&) = default ;
    DescribeHitRuleListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHitRuleListResponseBodyResultObject() = default ;
    DescribeHitRuleListResponseBodyResultObject& operator=(const DescribeHitRuleListResponseBodyResultObject &) = default ;
    DescribeHitRuleListResponseBodyResultObject& operator=(DescribeHitRuleListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hitCount_ == nullptr
        && return this->ruleName_ == nullptr; };
    // hitCount Field Functions 
    bool hasHitCount() const { return this->hitCount_ != nullptr;};
    void deleteHitCount() { this->hitCount_ = nullptr;};
    inline int32_t hitCount() const { DARABONBA_PTR_GET_DEFAULT(hitCount_, 0) };
    inline DescribeHitRuleListResponseBodyResultObject& setHitCount(int32_t hitCount) { DARABONBA_PTR_SET_VALUE(hitCount_, hitCount) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeHitRuleListResponseBodyResultObject& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // Number of hits.
    std::shared_ptr<int32_t> hitCount_ = nullptr;
    // Strategy name
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
