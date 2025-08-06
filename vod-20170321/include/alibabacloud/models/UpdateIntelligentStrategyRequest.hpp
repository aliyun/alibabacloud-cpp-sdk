// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTELLIGENTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTELLIGENTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateIntelligentStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(ExecuteParams, executeParams_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(ExecuteParams, executeParams_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    UpdateIntelligentStrategyRequest() = default ;
    UpdateIntelligentStrategyRequest(const UpdateIntelligentStrategyRequest &) = default ;
    UpdateIntelligentStrategyRequest(UpdateIntelligentStrategyRequest &&) = default ;
    UpdateIntelligentStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntelligentStrategyRequest() = default ;
    UpdateIntelligentStrategyRequest& operator=(const UpdateIntelligentStrategyRequest &) = default ;
    UpdateIntelligentStrategyRequest& operator=(UpdateIntelligentStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->executeParams_ != nullptr && this->name_ != nullptr && this->priority_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr
        && this->strategyId_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline UpdateIntelligentStrategyRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // executeParams Field Functions 
    bool hasExecuteParams() const { return this->executeParams_ != nullptr;};
    void deleteExecuteParams() { this->executeParams_ = nullptr;};
    inline string executeParams() const { DARABONBA_PTR_GET_DEFAULT(executeParams_, "") };
    inline UpdateIntelligentStrategyRequest& setExecuteParams(string executeParams) { DARABONBA_PTR_SET_VALUE(executeParams_, executeParams) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateIntelligentStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateIntelligentStrategyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateIntelligentStrategyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateIntelligentStrategyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline UpdateIntelligentStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    std::shared_ptr<string> conditions_ = nullptr;
    std::shared_ptr<string> executeParams_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
