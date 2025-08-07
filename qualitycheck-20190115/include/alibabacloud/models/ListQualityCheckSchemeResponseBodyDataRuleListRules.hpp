// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATARULELISTRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYCHECKSCHEMERESPONSEBODYDATARULELISTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListQualityCheckSchemeResponseBodyDataRuleListRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityCheckSchemeResponseBodyDataRuleListRules& obj) { 
      DARABONBA_PTR_TO_JSON(CheckType, checkType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityCheckSchemeResponseBodyDataRuleListRules& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckType, checkType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(RuleScoreType, ruleScoreType_);
      DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ListQualityCheckSchemeResponseBodyDataRuleListRules() = default ;
    ListQualityCheckSchemeResponseBodyDataRuleListRules(const ListQualityCheckSchemeResponseBodyDataRuleListRules &) = default ;
    ListQualityCheckSchemeResponseBodyDataRuleListRules(ListQualityCheckSchemeResponseBodyDataRuleListRules &&) = default ;
    ListQualityCheckSchemeResponseBodyDataRuleListRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityCheckSchemeResponseBodyDataRuleListRules() = default ;
    ListQualityCheckSchemeResponseBodyDataRuleListRules& operator=(const ListQualityCheckSchemeResponseBodyDataRuleListRules &) = default ;
    ListQualityCheckSchemeResponseBodyDataRuleListRules& operator=(ListQualityCheckSchemeResponseBodyDataRuleListRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkType_ != nullptr
        && this->name_ != nullptr && this->rid_ != nullptr && this->ruleScoreType_ != nullptr && this->scoreNum_ != nullptr && this->scoreNumType_ != nullptr
        && this->scoreType_ != nullptr && this->targetType_ != nullptr; };
    // checkType Field Functions 
    bool hasCheckType() const { return this->checkType_ != nullptr;};
    void deleteCheckType() { this->checkType_ = nullptr;};
    inline int32_t checkType() const { DARABONBA_PTR_GET_DEFAULT(checkType_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setCheckType(int32_t checkType) { DARABONBA_PTR_SET_VALUE(checkType_, checkType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleScoreType Field Functions 
    bool hasRuleScoreType() const { return this->ruleScoreType_ != nullptr;};
    void deleteRuleScoreType() { this->ruleScoreType_ = nullptr;};
    inline int32_t ruleScoreType() const { DARABONBA_PTR_GET_DEFAULT(ruleScoreType_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setRuleScoreType(int32_t ruleScoreType) { DARABONBA_PTR_SET_VALUE(ruleScoreType_, ruleScoreType) };


    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t scoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreNumType Field Functions 
    bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
    void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
    inline int32_t scoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


    // scoreType Field Functions 
    bool hasScoreType() const { return this->scoreType_ != nullptr;};
    void deleteScoreType() { this->scoreType_ = nullptr;};
    inline int32_t scoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline int32_t targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, 0) };
    inline ListQualityCheckSchemeResponseBodyDataRuleListRules& setTargetType(int32_t targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    std::shared_ptr<int32_t> checkType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<int32_t> ruleScoreType_ = nullptr;
    std::shared_ptr<int32_t> scoreNum_ = nullptr;
    std::shared_ptr<int32_t> scoreNumType_ = nullptr;
    std::shared_ptr<int32_t> scoreType_ = nullptr;
    std::shared_ptr<int32_t> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
