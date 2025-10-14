// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCE_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationJobSourceRule.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobSourceTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobSource& obj) { 
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    MigrationJobSource() = default ;
    MigrationJobSource(const MigrationJobSource &) = default ;
    MigrationJobSource(MigrationJobSource &&) = default ;
    MigrationJobSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobSource() = default ;
    MigrationJobSource& operator=(const MigrationJobSource &) = default ;
    MigrationJobSource& operator=(MigrationJobSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rule_ == nullptr
        && return this->targets_ == nullptr; };
    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const Models::MigrationJobSourceRule & rule() const { DARABONBA_PTR_GET_CONST(rule_, Models::MigrationJobSourceRule) };
    inline Models::MigrationJobSourceRule rule() { DARABONBA_PTR_GET(rule_, Models::MigrationJobSourceRule) };
    inline MigrationJobSource& setRule(const Models::MigrationJobSourceRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline MigrationJobSource& setRule(Models::MigrationJobSourceRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<Models::MigrationJobSourceTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<Models::MigrationJobSourceTargets>) };
    inline vector<Models::MigrationJobSourceTargets> targets() { DARABONBA_PTR_GET(targets_, vector<Models::MigrationJobSourceTargets>) };
    inline MigrationJobSource& setTargets(const vector<Models::MigrationJobSourceTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline MigrationJobSource& setTargets(vector<Models::MigrationJobSourceTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    std::shared_ptr<Models::MigrationJobSourceRule> rule_ = nullptr;
    std::shared_ptr<vector<Models::MigrationJobSourceTargets>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
