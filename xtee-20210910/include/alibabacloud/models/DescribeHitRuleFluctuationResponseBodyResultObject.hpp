// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHITRULEFLUCTUATIONRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHITRULEFLUCTUATIONRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeHitRuleFluctuationResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHitRuleFluctuationResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(todayNum, todayNum_);
      DARABONBA_PTR_TO_JSON(withinSevenDayNum, withinSevenDayNum_);
      DARABONBA_PTR_TO_JSON(withinThirtyDayNum, withinThirtyDayNum_);
      DARABONBA_PTR_TO_JSON(withinThreeDayNum, withinThreeDayNum_);
      DARABONBA_PTR_TO_JSON(yesterdayNum, yesterdayNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHitRuleFluctuationResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(todayNum, todayNum_);
      DARABONBA_PTR_FROM_JSON(withinSevenDayNum, withinSevenDayNum_);
      DARABONBA_PTR_FROM_JSON(withinThirtyDayNum, withinThirtyDayNum_);
      DARABONBA_PTR_FROM_JSON(withinThreeDayNum, withinThreeDayNum_);
      DARABONBA_PTR_FROM_JSON(yesterdayNum, yesterdayNum_);
    };
    DescribeHitRuleFluctuationResponseBodyResultObject() = default ;
    DescribeHitRuleFluctuationResponseBodyResultObject(const DescribeHitRuleFluctuationResponseBodyResultObject &) = default ;
    DescribeHitRuleFluctuationResponseBodyResultObject(DescribeHitRuleFluctuationResponseBodyResultObject &&) = default ;
    DescribeHitRuleFluctuationResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHitRuleFluctuationResponseBodyResultObject() = default ;
    DescribeHitRuleFluctuationResponseBodyResultObject& operator=(const DescribeHitRuleFluctuationResponseBodyResultObject &) = default ;
    DescribeHitRuleFluctuationResponseBodyResultObject& operator=(DescribeHitRuleFluctuationResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr && return this->todayNum_ == nullptr && return this->withinSevenDayNum_ == nullptr && return this->withinThirtyDayNum_ == nullptr && return this->withinThreeDayNum_ == nullptr
        && return this->yesterdayNum_ == nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeHitRuleFluctuationResponseBodyResultObject& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeHitRuleFluctuationResponseBodyResultObject& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // todayNum Field Functions 
    bool hasTodayNum() const { return this->todayNum_ != nullptr;};
    void deleteTodayNum() { this->todayNum_ = nullptr;};
    inline int64_t todayNum() const { DARABONBA_PTR_GET_DEFAULT(todayNum_, 0L) };
    inline DescribeHitRuleFluctuationResponseBodyResultObject& setTodayNum(int64_t todayNum) { DARABONBA_PTR_SET_VALUE(todayNum_, todayNum) };


    // withinSevenDayNum Field Functions 
    bool hasWithinSevenDayNum() const { return this->withinSevenDayNum_ != nullptr;};
    void deleteWithinSevenDayNum() { this->withinSevenDayNum_ = nullptr;};
    inline string withinSevenDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinSevenDayNum_, "") };
    inline DescribeHitRuleFluctuationResponseBodyResultObject& setWithinSevenDayNum(string withinSevenDayNum) { DARABONBA_PTR_SET_VALUE(withinSevenDayNum_, withinSevenDayNum) };


    // withinThirtyDayNum Field Functions 
    bool hasWithinThirtyDayNum() const { return this->withinThirtyDayNum_ != nullptr;};
    void deleteWithinThirtyDayNum() { this->withinThirtyDayNum_ = nullptr;};
    inline string withinThirtyDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThirtyDayNum_, "") };
    inline DescribeHitRuleFluctuationResponseBodyResultObject& setWithinThirtyDayNum(string withinThirtyDayNum) { DARABONBA_PTR_SET_VALUE(withinThirtyDayNum_, withinThirtyDayNum) };


    // withinThreeDayNum Field Functions 
    bool hasWithinThreeDayNum() const { return this->withinThreeDayNum_ != nullptr;};
    void deleteWithinThreeDayNum() { this->withinThreeDayNum_ = nullptr;};
    inline string withinThreeDayNum() const { DARABONBA_PTR_GET_DEFAULT(withinThreeDayNum_, "") };
    inline DescribeHitRuleFluctuationResponseBodyResultObject& setWithinThreeDayNum(string withinThreeDayNum) { DARABONBA_PTR_SET_VALUE(withinThreeDayNum_, withinThreeDayNum) };


    // yesterdayNum Field Functions 
    bool hasYesterdayNum() const { return this->yesterdayNum_ != nullptr;};
    void deleteYesterdayNum() { this->yesterdayNum_ = nullptr;};
    inline int64_t yesterdayNum() const { DARABONBA_PTR_GET_DEFAULT(yesterdayNum_, 0L) };
    inline DescribeHitRuleFluctuationResponseBodyResultObject& setYesterdayNum(int64_t yesterdayNum) { DARABONBA_PTR_SET_VALUE(yesterdayNum_, yesterdayNum) };


  protected:
    // Policy ID
    std::shared_ptr<string> ruleId_ = nullptr;
    // Policy name
    std::shared_ptr<string> ruleName_ = nullptr;
    // Today\\"s count
    std::shared_ptr<int64_t> todayNum_ = nullptr;
    // Count within seven days
    std::shared_ptr<string> withinSevenDayNum_ = nullptr;
    // Count within thirty days
    std::shared_ptr<string> withinThirtyDayNum_ = nullptr;
    // Count within three days
    std::shared_ptr<string> withinThreeDayNum_ = nullptr;
    // Yesterday\\"s count
    std::shared_ptr<int64_t> yesterdayNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
