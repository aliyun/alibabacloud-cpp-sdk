// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIGACTIONSBYPASS_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIGACTIONSBYPASS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfigActionsBypass : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfigActionsBypass& obj) { 
      DARABONBA_PTR_TO_JSON(CustomRules, customRules_);
      DARABONBA_PTR_TO_JSON(RegularRules, regularRules_);
      DARABONBA_PTR_TO_JSON(RegularTypes, regularTypes_);
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfigActionsBypass& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomRules, customRules_);
      DARABONBA_PTR_FROM_JSON(RegularRules, regularRules_);
      DARABONBA_PTR_FROM_JSON(RegularTypes, regularTypes_);
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    WafRuleConfigActionsBypass() = default ;
    WafRuleConfigActionsBypass(const WafRuleConfigActionsBypass &) = default ;
    WafRuleConfigActionsBypass(WafRuleConfigActionsBypass &&) = default ;
    WafRuleConfigActionsBypass(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfigActionsBypass() = default ;
    WafRuleConfigActionsBypass& operator=(const WafRuleConfigActionsBypass &) = default ;
    WafRuleConfigActionsBypass& operator=(WafRuleConfigActionsBypass &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customRules_ == nullptr
        && return this->regularRules_ == nullptr && return this->regularTypes_ == nullptr && return this->skip_ == nullptr && return this->tags_ == nullptr; };
    // customRules Field Functions 
    bool hasCustomRules() const { return this->customRules_ != nullptr;};
    void deleteCustomRules() { this->customRules_ = nullptr;};
    inline const vector<int64_t> & customRules() const { DARABONBA_PTR_GET_CONST(customRules_, vector<int64_t>) };
    inline vector<int64_t> customRules() { DARABONBA_PTR_GET(customRules_, vector<int64_t>) };
    inline WafRuleConfigActionsBypass& setCustomRules(const vector<int64_t> & customRules) { DARABONBA_PTR_SET_VALUE(customRules_, customRules) };
    inline WafRuleConfigActionsBypass& setCustomRules(vector<int64_t> && customRules) { DARABONBA_PTR_SET_RVALUE(customRules_, customRules) };


    // regularRules Field Functions 
    bool hasRegularRules() const { return this->regularRules_ != nullptr;};
    void deleteRegularRules() { this->regularRules_ = nullptr;};
    inline const vector<int64_t> & regularRules() const { DARABONBA_PTR_GET_CONST(regularRules_, vector<int64_t>) };
    inline vector<int64_t> regularRules() { DARABONBA_PTR_GET(regularRules_, vector<int64_t>) };
    inline WafRuleConfigActionsBypass& setRegularRules(const vector<int64_t> & regularRules) { DARABONBA_PTR_SET_VALUE(regularRules_, regularRules) };
    inline WafRuleConfigActionsBypass& setRegularRules(vector<int64_t> && regularRules) { DARABONBA_PTR_SET_RVALUE(regularRules_, regularRules) };


    // regularTypes Field Functions 
    bool hasRegularTypes() const { return this->regularTypes_ != nullptr;};
    void deleteRegularTypes() { this->regularTypes_ = nullptr;};
    inline const vector<string> & regularTypes() const { DARABONBA_PTR_GET_CONST(regularTypes_, vector<string>) };
    inline vector<string> regularTypes() { DARABONBA_PTR_GET(regularTypes_, vector<string>) };
    inline WafRuleConfigActionsBypass& setRegularTypes(const vector<string> & regularTypes) { DARABONBA_PTR_SET_VALUE(regularTypes_, regularTypes) };
    inline WafRuleConfigActionsBypass& setRegularTypes(vector<string> && regularTypes) { DARABONBA_PTR_SET_RVALUE(regularTypes_, regularTypes) };


    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline string skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, "") };
    inline WafRuleConfigActionsBypass& setSkip(string skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline WafRuleConfigActionsBypass& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline WafRuleConfigActionsBypass& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<vector<int64_t>> customRules_ = nullptr;
    std::shared_ptr<vector<int64_t>> regularRules_ = nullptr;
    std::shared_ptr<vector<string>> regularTypes_ = nullptr;
    std::shared_ptr<string> skip_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
