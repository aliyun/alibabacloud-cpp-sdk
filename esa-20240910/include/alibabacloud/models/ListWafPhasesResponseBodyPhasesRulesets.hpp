// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODYPHASESRULESETS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFPHASESRESPONSEBODYPHASESRULESETS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfig.hpp>
#include <alibabacloud/models/WafBatchRuleShared.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafPhasesResponseBodyPhasesRulesets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafPhasesResponseBodyPhasesRulesets& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafPhasesResponseBodyPhasesRulesets& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
    };
    ListWafPhasesResponseBodyPhasesRulesets() = default ;
    ListWafPhasesResponseBodyPhasesRulesets(const ListWafPhasesResponseBodyPhasesRulesets &) = default ;
    ListWafPhasesResponseBodyPhasesRulesets(ListWafPhasesResponseBodyPhasesRulesets &&) = default ;
    ListWafPhasesResponseBodyPhasesRulesets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafPhasesResponseBodyPhasesRulesets() = default ;
    ListWafPhasesResponseBodyPhasesRulesets& operator=(const ListWafPhasesResponseBodyPhasesRulesets &) = default ;
    ListWafPhasesResponseBodyPhasesRulesets& operator=(ListWafPhasesResponseBodyPhasesRulesets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->rules_ != nullptr && this->shared_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWafPhasesResponseBodyPhasesRulesets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWafPhasesResponseBodyPhasesRulesets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::WafRuleConfig> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::WafRuleConfig>) };
    inline vector<Models::WafRuleConfig> rules() { DARABONBA_PTR_GET(rules_, vector<Models::WafRuleConfig>) };
    inline ListWafPhasesResponseBodyPhasesRulesets& setRules(const vector<Models::WafRuleConfig> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListWafPhasesResponseBodyPhasesRulesets& setRules(vector<Models::WafRuleConfig> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline const Models::WafBatchRuleShared & shared() const { DARABONBA_PTR_GET_CONST(shared_, Models::WafBatchRuleShared) };
    inline Models::WafBatchRuleShared shared() { DARABONBA_PTR_GET(shared_, Models::WafBatchRuleShared) };
    inline ListWafPhasesResponseBodyPhasesRulesets& setShared(const Models::WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
    inline ListWafPhasesResponseBodyPhasesRulesets& setShared(Models::WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


  protected:
    // ID of the WAF ruleset.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name of the WAF ruleset.
    std::shared_ptr<string> name_ = nullptr;
    // List of rule configurations in the WAF ruleset.
    std::shared_ptr<vector<Models::WafRuleConfig>> rules_ = nullptr;
    // Shared configuration for rules in the WAF ruleset.
    std::shared_ptr<Models::WafBatchRuleShared> shared_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
