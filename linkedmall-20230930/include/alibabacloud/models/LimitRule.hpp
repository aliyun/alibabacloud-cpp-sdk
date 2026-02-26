// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIMITRULE_HPP_
#define ALIBABACLOUD_MODELS_LIMITRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class LimitRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LimitRule& obj) { 
      DARABONBA_PTR_TO_JSON(beginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(condcase, condcase_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(limitNum, limitNum_);
      DARABONBA_PTR_TO_JSON(ruleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, LimitRule& obj) { 
      DARABONBA_PTR_FROM_JSON(beginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(condcase, condcase_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(limitNum, limitNum_);
      DARABONBA_PTR_FROM_JSON(ruleType, ruleType_);
    };
    LimitRule() = default ;
    LimitRule(const LimitRule &) = default ;
    LimitRule(LimitRule &&) = default ;
    LimitRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LimitRule() = default ;
    LimitRule& operator=(const LimitRule &) = default ;
    LimitRule& operator=(LimitRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->condcase_ == nullptr && this->endTime_ == nullptr && this->limitNum_ == nullptr && this->ruleType_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline LimitRule& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // condcase Field Functions 
    bool hasCondcase() const { return this->condcase_ != nullptr;};
    void deleteCondcase() { this->condcase_ = nullptr;};
    inline string getCondcase() const { DARABONBA_PTR_GET_DEFAULT(condcase_, "") };
    inline LimitRule& setCondcase(string condcase) { DARABONBA_PTR_SET_VALUE(condcase_, condcase) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline LimitRule& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // limitNum Field Functions 
    bool hasLimitNum() const { return this->limitNum_ != nullptr;};
    void deleteLimitNum() { this->limitNum_ = nullptr;};
    inline int32_t getLimitNum() const { DARABONBA_PTR_GET_DEFAULT(limitNum_, 0) };
    inline LimitRule& setLimitNum(int32_t limitNum) { DARABONBA_PTR_SET_VALUE(limitNum_, limitNum) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline LimitRule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    shared_ptr<int64_t> beginTime_ {};
    shared_ptr<string> condcase_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<int32_t> limitNum_ {};
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
