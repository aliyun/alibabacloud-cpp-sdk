// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REWRITECONFIG_HPP_
#define ALIBABACLOUD_MODELS_REWRITECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EqualRule.hpp>
#include <alibabacloud/models/RegexRule.hpp>
#include <alibabacloud/models/WildcardRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class RewriteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RewriteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(equalRules, equalRules_);
      DARABONBA_PTR_TO_JSON(regexRules, regexRules_);
      DARABONBA_PTR_TO_JSON(wildcardRules, wildcardRules_);
    };
    friend void from_json(const Darabonba::Json& j, RewriteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(equalRules, equalRules_);
      DARABONBA_PTR_FROM_JSON(regexRules, regexRules_);
      DARABONBA_PTR_FROM_JSON(wildcardRules, wildcardRules_);
    };
    RewriteConfig() = default ;
    RewriteConfig(const RewriteConfig &) = default ;
    RewriteConfig(RewriteConfig &&) = default ;
    RewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RewriteConfig() = default ;
    RewriteConfig& operator=(const RewriteConfig &) = default ;
    RewriteConfig& operator=(RewriteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->equalRules_ == nullptr
        && this->regexRules_ == nullptr && this->wildcardRules_ == nullptr; };
    // equalRules Field Functions 
    bool hasEqualRules() const { return this->equalRules_ != nullptr;};
    void deleteEqualRules() { this->equalRules_ = nullptr;};
    inline const vector<EqualRule> & getEqualRules() const { DARABONBA_PTR_GET_CONST(equalRules_, vector<EqualRule>) };
    inline vector<EqualRule> getEqualRules() { DARABONBA_PTR_GET(equalRules_, vector<EqualRule>) };
    inline RewriteConfig& setEqualRules(const vector<EqualRule> & equalRules) { DARABONBA_PTR_SET_VALUE(equalRules_, equalRules) };
    inline RewriteConfig& setEqualRules(vector<EqualRule> && equalRules) { DARABONBA_PTR_SET_RVALUE(equalRules_, equalRules) };


    // regexRules Field Functions 
    bool hasRegexRules() const { return this->regexRules_ != nullptr;};
    void deleteRegexRules() { this->regexRules_ = nullptr;};
    inline const vector<RegexRule> & getRegexRules() const { DARABONBA_PTR_GET_CONST(regexRules_, vector<RegexRule>) };
    inline vector<RegexRule> getRegexRules() { DARABONBA_PTR_GET(regexRules_, vector<RegexRule>) };
    inline RewriteConfig& setRegexRules(const vector<RegexRule> & regexRules) { DARABONBA_PTR_SET_VALUE(regexRules_, regexRules) };
    inline RewriteConfig& setRegexRules(vector<RegexRule> && regexRules) { DARABONBA_PTR_SET_RVALUE(regexRules_, regexRules) };


    // wildcardRules Field Functions 
    bool hasWildcardRules() const { return this->wildcardRules_ != nullptr;};
    void deleteWildcardRules() { this->wildcardRules_ = nullptr;};
    inline const vector<WildcardRule> & getWildcardRules() const { DARABONBA_PTR_GET_CONST(wildcardRules_, vector<WildcardRule>) };
    inline vector<WildcardRule> getWildcardRules() { DARABONBA_PTR_GET(wildcardRules_, vector<WildcardRule>) };
    inline RewriteConfig& setWildcardRules(const vector<WildcardRule> & wildcardRules) { DARABONBA_PTR_SET_VALUE(wildcardRules_, wildcardRules) };
    inline RewriteConfig& setWildcardRules(vector<WildcardRule> && wildcardRules) { DARABONBA_PTR_SET_RVALUE(wildcardRules_, wildcardRules) };


  protected:
    shared_ptr<vector<EqualRule>> equalRules_ {};
    shared_ptr<vector<RegexRule>> regexRules_ {};
    shared_ptr<vector<WildcardRule>> wildcardRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
