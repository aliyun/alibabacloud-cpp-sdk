// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSUBSCRIPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBPLANSUBSCRIPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobPlanSubscriptionsConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobPlanSubscriptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobPlanSubscriptions& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StrategyUuid, strategyUuid_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobPlanSubscriptions& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StrategyUuid, strategyUuid_);
    };
    MigrationJobPlanSubscriptions() = default ;
    MigrationJobPlanSubscriptions(const MigrationJobPlanSubscriptions &) = default ;
    MigrationJobPlanSubscriptions(MigrationJobPlanSubscriptions &&) = default ;
    MigrationJobPlanSubscriptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobPlanSubscriptions() = default ;
    MigrationJobPlanSubscriptions& operator=(const MigrationJobPlanSubscriptions &) = default ;
    MigrationJobPlanSubscriptions& operator=(MigrationJobPlanSubscriptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->name_ != nullptr && this->strategyUuid_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::MigrationJobPlanSubscriptionsConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::MigrationJobPlanSubscriptionsConditions>) };
    inline vector<Models::MigrationJobPlanSubscriptionsConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::MigrationJobPlanSubscriptionsConditions>) };
    inline MigrationJobPlanSubscriptions& setConditions(const vector<Models::MigrationJobPlanSubscriptionsConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline MigrationJobPlanSubscriptions& setConditions(vector<Models::MigrationJobPlanSubscriptionsConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MigrationJobPlanSubscriptions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // strategyUuid Field Functions 
    bool hasStrategyUuid() const { return this->strategyUuid_ != nullptr;};
    void deleteStrategyUuid() { this->strategyUuid_ = nullptr;};
    inline string strategyUuid() const { DARABONBA_PTR_GET_DEFAULT(strategyUuid_, "") };
    inline MigrationJobPlanSubscriptions& setStrategyUuid(string strategyUuid) { DARABONBA_PTR_SET_VALUE(strategyUuid_, strategyUuid) };


  protected:
    std::shared_ptr<vector<Models::MigrationJobPlanSubscriptionsConditions>> conditions_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> strategyUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
