// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTELLIGENTSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTELLIGENTSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class CreateIntelligentStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(ExecuteParams, executeParams_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntelligentStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(ExecuteParams, executeParams_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateIntelligentStrategyRequest() = default ;
    CreateIntelligentStrategyRequest(const CreateIntelligentStrategyRequest &) = default ;
    CreateIntelligentStrategyRequest(CreateIntelligentStrategyRequest &&) = default ;
    CreateIntelligentStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntelligentStrategyRequest() = default ;
    CreateIntelligentStrategyRequest& operator=(const CreateIntelligentStrategyRequest &) = default ;
    CreateIntelligentStrategyRequest& operator=(CreateIntelligentStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->executeParams_ != nullptr && this->name_ != nullptr && this->priority_ != nullptr && this->startTime_ != nullptr && this->state_ != nullptr
        && this->type_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string conditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline CreateIntelligentStrategyRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // executeParams Field Functions 
    bool hasExecuteParams() const { return this->executeParams_ != nullptr;};
    void deleteExecuteParams() { this->executeParams_ = nullptr;};
    inline string executeParams() const { DARABONBA_PTR_GET_DEFAULT(executeParams_, "") };
    inline CreateIntelligentStrategyRequest& setExecuteParams(string executeParams) { DARABONBA_PTR_SET_VALUE(executeParams_, executeParams) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateIntelligentStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateIntelligentStrategyRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CreateIntelligentStrategyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateIntelligentStrategyRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateIntelligentStrategyRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> conditions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> executeParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
