// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESETSRESPONSEBODYRULESETS_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESETSRESPONSEBODYRULESETS_HPP_
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
  class ListWafRulesetsResponseBodyRulesets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesetsResponseBodyRulesets& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Types, types_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesetsResponseBodyRulesets& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Types, types_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListWafRulesetsResponseBodyRulesets() = default ;
    ListWafRulesetsResponseBodyRulesets(const ListWafRulesetsResponseBodyRulesets &) = default ;
    ListWafRulesetsResponseBodyRulesets(ListWafRulesetsResponseBodyRulesets &&) = default ;
    ListWafRulesetsResponseBodyRulesets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesetsResponseBodyRulesets() = default ;
    ListWafRulesetsResponseBodyRulesets& operator=(const ListWafRulesetsResponseBodyRulesets &) = default ;
    ListWafRulesetsResponseBodyRulesets& operator=(ListWafRulesetsResponseBodyRulesets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fields_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->phase_ == nullptr && return this->status_ == nullptr && return this->target_ == nullptr
        && return this->types_ == nullptr && return this->updateTime_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<string> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
    inline vector<string> fields() { DARABONBA_PTR_GET(fields_, vector<string>) };
    inline ListWafRulesetsResponseBodyRulesets& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline ListWafRulesetsResponseBodyRulesets& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWafRulesetsResponseBodyRulesets& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListWafRulesetsResponseBodyRulesets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline ListWafRulesetsResponseBodyRulesets& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListWafRulesetsResponseBodyRulesets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ListWafRulesetsResponseBodyRulesets& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListWafRulesetsResponseBodyRulesets& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListWafRulesetsResponseBodyRulesets& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListWafRulesetsResponseBodyRulesets& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // List of match objects.
    std::shared_ptr<vector<string>> fields_ = nullptr;
    // ID of the WAF rule set.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Name of the rule set.
    std::shared_ptr<string> name_ = nullptr;
    // WAF operation phase.
    std::shared_ptr<string> phase_ = nullptr;
    // Status of the rule set.
    std::shared_ptr<string> status_ = nullptr;
    // Protection target type in http_bot.
    std::shared_ptr<string> target_ = nullptr;
    // List of rule types.
    std::shared_ptr<vector<string>> types_ = nullptr;
    // Last modification time of the rule set.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
