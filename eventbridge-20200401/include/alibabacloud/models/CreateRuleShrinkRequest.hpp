// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventTargets, eventTargetsShrink_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventTargets, eventTargetsShrink_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    CreateRuleShrinkRequest() = default ;
    CreateRuleShrinkRequest(const CreateRuleShrinkRequest &) = default ;
    CreateRuleShrinkRequest(CreateRuleShrinkRequest &&) = default ;
    CreateRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleShrinkRequest() = default ;
    CreateRuleShrinkRequest& operator=(const CreateRuleShrinkRequest &) = default ;
    CreateRuleShrinkRequest& operator=(CreateRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->eventBusName_ != nullptr && this->eventTargetsShrink_ != nullptr && this->filterPattern_ != nullptr && this->ruleName_ != nullptr && this->status_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline CreateRuleShrinkRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventTargetsShrink Field Functions 
    bool hasEventTargetsShrink() const { return this->eventTargetsShrink_ != nullptr;};
    void deleteEventTargetsShrink() { this->eventTargetsShrink_ = nullptr;};
    inline string eventTargetsShrink() const { DARABONBA_PTR_GET_DEFAULT(eventTargetsShrink_, "") };
    inline CreateRuleShrinkRequest& setEventTargetsShrink(string eventTargetsShrink) { DARABONBA_PTR_SET_VALUE(eventTargetsShrink_, eventTargetsShrink) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string filterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline CreateRuleShrinkRequest& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateRuleShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The description of the event bus.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The event targets.
    std::shared_ptr<string> eventTargetsShrink_ = nullptr;
    // The event pattern, in JSON format. Valid values: stringEqual and stringExpression. You can specify up to five expressions in the map data structure in each field.
    // 
    // You can specify up to five expressions in the map data structure in each field.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterPattern_ = nullptr;
    // The name of the event rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the event rule. Valid values: ENABLE: enables the event rule. It is the default status of the event rule. DISABLE: disables the event rule.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
