// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODYRULESET_HPP_
#define ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODYRULESET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetUserWafRulesetResponseBodyRulesetRules.hpp>
#include <alibabacloud/models/WafBatchRuleShared.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserWafRulesetResponseBodyRuleset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserWafRulesetResponseBodyRuleset& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Shared, shared_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserWafRulesetResponseBodyRuleset& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Shared, shared_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetUserWafRulesetResponseBodyRuleset() = default ;
    GetUserWafRulesetResponseBodyRuleset(const GetUserWafRulesetResponseBodyRuleset &) = default ;
    GetUserWafRulesetResponseBodyRuleset(GetUserWafRulesetResponseBodyRuleset &&) = default ;
    GetUserWafRulesetResponseBodyRuleset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserWafRulesetResponseBodyRuleset() = default ;
    GetUserWafRulesetResponseBodyRuleset& operator=(const GetUserWafRulesetResponseBodyRuleset &) = default ;
    GetUserWafRulesetResponseBodyRuleset& operator=(GetUserWafRulesetResponseBodyRuleset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->expression_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->phase_ == nullptr && return this->position_ == nullptr
        && return this->rules_ == nullptr && return this->shared_ == nullptr && return this->status_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetUserWafRulesetResponseBodyRuleset& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline GetUserWafRulesetResponseBodyRuleset& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetUserWafRulesetResponseBodyRuleset& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserWafRulesetResponseBodyRuleset& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline GetUserWafRulesetResponseBodyRuleset& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int64_t position() const { DARABONBA_PTR_GET_DEFAULT(position_, 0L) };
    inline GetUserWafRulesetResponseBodyRuleset& setPosition(int64_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::GetUserWafRulesetResponseBodyRulesetRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::GetUserWafRulesetResponseBodyRulesetRules>) };
    inline vector<Models::GetUserWafRulesetResponseBodyRulesetRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::GetUserWafRulesetResponseBodyRulesetRules>) };
    inline GetUserWafRulesetResponseBodyRuleset& setRules(const vector<Models::GetUserWafRulesetResponseBodyRulesetRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline GetUserWafRulesetResponseBodyRuleset& setRules(vector<Models::GetUserWafRulesetResponseBodyRulesetRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // shared Field Functions 
    bool hasShared() const { return this->shared_ != nullptr;};
    void deleteShared() { this->shared_ = nullptr;};
    inline const Models::WafBatchRuleShared & shared() const { DARABONBA_PTR_GET_CONST(shared_, Models::WafBatchRuleShared) };
    inline Models::WafBatchRuleShared shared() { DARABONBA_PTR_GET(shared_, Models::WafBatchRuleShared) };
    inline GetUserWafRulesetResponseBodyRuleset& setShared(const Models::WafBatchRuleShared & shared) { DARABONBA_PTR_SET_VALUE(shared_, shared) };
    inline GetUserWafRulesetResponseBodyRuleset& setShared(Models::WafBatchRuleShared && shared) { DARABONBA_PTR_SET_RVALUE(shared_, shared) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetUserWafRulesetResponseBodyRuleset& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<int64_t> position_ = nullptr;
    std::shared_ptr<vector<Models::GetUserWafRulesetResponseBodyRulesetRules>> rules_ = nullptr;
    std::shared_ptr<Models::WafBatchRuleShared> shared_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
