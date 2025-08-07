// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULESRULEINFOBASE_HPP_
#define ALIBABACLOUD_MODELS_SYNCQUALITYCHECKRESPONSEBODYDATARULESRULEINFOBASE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class SyncQualityCheckResponseBodyDataRulesRuleInfoBase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncQualityCheckResponseBodyDataRulesRuleInfoBase& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(RuleCategoryName, ruleCategoryName_);
      DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_TO_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SyncQualityCheckResponseBodyDataRulesRuleInfoBase& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(RuleCategoryName, ruleCategoryName_);
      DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_FROM_JSON(ScoreNumType, scoreNumType_);
      DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SyncQualityCheckResponseBodyDataRulesRuleInfoBase() = default ;
    SyncQualityCheckResponseBodyDataRulesRuleInfoBase(const SyncQualityCheckResponseBodyDataRulesRuleInfoBase &) = default ;
    SyncQualityCheckResponseBodyDataRulesRuleInfoBase(SyncQualityCheckResponseBodyDataRulesRuleInfoBase &&) = default ;
    SyncQualityCheckResponseBodyDataRulesRuleInfoBase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncQualityCheckResponseBodyDataRulesRuleInfoBase() = default ;
    SyncQualityCheckResponseBodyDataRulesRuleInfoBase& operator=(const SyncQualityCheckResponseBodyDataRulesRuleInfoBase &) = default ;
    SyncQualityCheckResponseBodyDataRulesRuleInfoBase& operator=(SyncQualityCheckResponseBodyDataRulesRuleInfoBase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->level_ != nullptr && this->ruleCategoryName_ != nullptr && this->scoreNum_ != nullptr && this->scoreNumType_ != nullptr && this->scoreType_ != nullptr
        && this->type_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline SyncQualityCheckResponseBodyDataRulesRuleInfoBase& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesRuleInfoBase& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // ruleCategoryName Field Functions 
    bool hasRuleCategoryName() const { return this->ruleCategoryName_ != nullptr;};
    void deleteRuleCategoryName() { this->ruleCategoryName_ = nullptr;};
    inline string ruleCategoryName() const { DARABONBA_PTR_GET_DEFAULT(ruleCategoryName_, "") };
    inline SyncQualityCheckResponseBodyDataRulesRuleInfoBase& setRuleCategoryName(string ruleCategoryName) { DARABONBA_PTR_SET_VALUE(ruleCategoryName_, ruleCategoryName) };


    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t scoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesRuleInfoBase& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreNumType Field Functions 
    bool hasScoreNumType() const { return this->scoreNumType_ != nullptr;};
    void deleteScoreNumType() { this->scoreNumType_ = nullptr;};
    inline int32_t scoreNumType() const { DARABONBA_PTR_GET_DEFAULT(scoreNumType_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesRuleInfoBase& setScoreNumType(int32_t scoreNumType) { DARABONBA_PTR_SET_VALUE(scoreNumType_, scoreNumType) };


    // scoreType Field Functions 
    bool hasScoreType() const { return this->scoreType_ != nullptr;};
    void deleteScoreType() { this->scoreType_ = nullptr;};
    inline int32_t scoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesRuleInfoBase& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline SyncQualityCheckResponseBodyDataRulesRuleInfoBase& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> comments_ = nullptr;
    std::shared_ptr<int32_t> level_ = nullptr;
    std::shared_ptr<string> ruleCategoryName_ = nullptr;
    std::shared_ptr<int32_t> scoreNum_ = nullptr;
    std::shared_ptr<int32_t> scoreNumType_ = nullptr;
    std::shared_ptr<int32_t> scoreType_ = nullptr;
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
