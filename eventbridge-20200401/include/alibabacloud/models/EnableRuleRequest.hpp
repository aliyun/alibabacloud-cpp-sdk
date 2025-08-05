// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EnableRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, EnableRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    EnableRuleRequest() = default ;
    EnableRuleRequest(const EnableRuleRequest &) = default ;
    EnableRuleRequest(EnableRuleRequest &&) = default ;
    EnableRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableRuleRequest() = default ;
    EnableRuleRequest& operator=(const EnableRuleRequest &) = default ;
    EnableRuleRequest& operator=(EnableRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->ruleName_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline EnableRuleRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline EnableRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The name of the event rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
