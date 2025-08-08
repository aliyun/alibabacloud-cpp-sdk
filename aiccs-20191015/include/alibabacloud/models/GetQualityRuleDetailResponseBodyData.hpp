// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUALITYRULEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUALITYRULEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetQualityRuleDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQualityRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleCreateTime, ruleCreateTime_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
    };
    friend void from_json(const Darabonba::Json& j, GetQualityRuleDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyWords, keyWords_);
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleCreateTime, ruleCreateTime_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
    };
    GetQualityRuleDetailResponseBodyData() = default ;
    GetQualityRuleDetailResponseBodyData(const GetQualityRuleDetailResponseBodyData &) = default ;
    GetQualityRuleDetailResponseBodyData(GetQualityRuleDetailResponseBodyData &&) = default ;
    GetQualityRuleDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQualityRuleDetailResponseBodyData() = default ;
    GetQualityRuleDetailResponseBodyData& operator=(const GetQualityRuleDetailResponseBodyData &) = default ;
    GetQualityRuleDetailResponseBodyData& operator=(GetQualityRuleDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyWords_ != nullptr
        && this->matchType_ != nullptr && this->name_ != nullptr && this->ruleCreateTime_ != nullptr && this->ruleId_ != nullptr && this->ruleTag_ != nullptr; };
    // keyWords Field Functions 
    bool hasKeyWords() const { return this->keyWords_ != nullptr;};
    void deleteKeyWords() { this->keyWords_ = nullptr;};
    inline const vector<string> & keyWords() const { DARABONBA_PTR_GET_CONST(keyWords_, vector<string>) };
    inline vector<string> keyWords() { DARABONBA_PTR_GET(keyWords_, vector<string>) };
    inline GetQualityRuleDetailResponseBodyData& setKeyWords(const vector<string> & keyWords) { DARABONBA_PTR_SET_VALUE(keyWords_, keyWords) };
    inline GetQualityRuleDetailResponseBodyData& setKeyWords(vector<string> && keyWords) { DARABONBA_PTR_SET_RVALUE(keyWords_, keyWords) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline int32_t matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, 0) };
    inline GetQualityRuleDetailResponseBodyData& setMatchType(int32_t matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetQualityRuleDetailResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleCreateTime Field Functions 
    bool hasRuleCreateTime() const { return this->ruleCreateTime_ != nullptr;};
    void deleteRuleCreateTime() { this->ruleCreateTime_ = nullptr;};
    inline string ruleCreateTime() const { DARABONBA_PTR_GET_DEFAULT(ruleCreateTime_, "") };
    inline GetQualityRuleDetailResponseBodyData& setRuleCreateTime(string ruleCreateTime) { DARABONBA_PTR_SET_VALUE(ruleCreateTime_, ruleCreateTime) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetQualityRuleDetailResponseBodyData& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleTag Field Functions 
    bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
    void deleteRuleTag() { this->ruleTag_ = nullptr;};
    inline int32_t ruleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, 0) };
    inline GetQualityRuleDetailResponseBodyData& setRuleTag(int32_t ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


  protected:
    std::shared_ptr<vector<string>> keyWords_ = nullptr;
    std::shared_ptr<int32_t> matchType_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ruleCreateTime_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    std::shared_ptr<int32_t> ruleTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
