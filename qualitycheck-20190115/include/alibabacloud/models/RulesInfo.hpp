// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULESINFO_HPP_
#define ALIBABACLOUD_MODELS_RULESINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConditionBasicInfo.hpp>
#include <alibabacloud/models/RuleTestDialogue.hpp>
#include <alibabacloud/models/RuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class RulesInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RulesInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, RulesInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Dialogues, dialogues_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    RulesInfo() = default ;
    RulesInfo(const RulesInfo &) = default ;
    RulesInfo(RulesInfo &&) = default ;
    RulesInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RulesInfo() = default ;
    RulesInfo& operator=(const RulesInfo &) = default ;
    RulesInfo& operator=(RulesInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conditions_ == nullptr
        && return this->count_ == nullptr && return this->dialogues_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->rules_ == nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<ConditionBasicInfo> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<ConditionBasicInfo>) };
    inline vector<ConditionBasicInfo> conditions() { DARABONBA_PTR_GET(conditions_, vector<ConditionBasicInfo>) };
    inline RulesInfo& setConditions(const vector<ConditionBasicInfo> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline RulesInfo& setConditions(vector<ConditionBasicInfo> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline RulesInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // dialogues Field Functions 
    bool hasDialogues() const { return this->dialogues_ != nullptr;};
    void deleteDialogues() { this->dialogues_ = nullptr;};
    inline const vector<RuleTestDialogue> & dialogues() const { DARABONBA_PTR_GET_CONST(dialogues_, vector<RuleTestDialogue>) };
    inline vector<RuleTestDialogue> dialogues() { DARABONBA_PTR_GET(dialogues_, vector<RuleTestDialogue>) };
    inline RulesInfo& setDialogues(const vector<RuleTestDialogue> & dialogues) { DARABONBA_PTR_SET_VALUE(dialogues_, dialogues) };
    inline RulesInfo& setDialogues(vector<RuleTestDialogue> && dialogues) { DARABONBA_PTR_SET_RVALUE(dialogues_, dialogues) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline RulesInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline RulesInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<RuleInfo> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<RuleInfo>) };
    inline vector<RuleInfo> rules() { DARABONBA_PTR_GET(rules_, vector<RuleInfo>) };
    inline RulesInfo& setRules(const vector<RuleInfo> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline RulesInfo& setRules(vector<RuleInfo> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<vector<ConditionBasicInfo>> conditions_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<vector<RuleTestDialogue>> dialogues_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<vector<RuleInfo>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
