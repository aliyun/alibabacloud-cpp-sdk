// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETARGETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETARGETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DeleteTargetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTargetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TargetIds, targetIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTargetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIdsShrink_);
    };
    DeleteTargetsShrinkRequest() = default ;
    DeleteTargetsShrinkRequest(const DeleteTargetsShrinkRequest &) = default ;
    DeleteTargetsShrinkRequest(DeleteTargetsShrinkRequest &&) = default ;
    DeleteTargetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTargetsShrinkRequest() = default ;
    DeleteTargetsShrinkRequest& operator=(const DeleteTargetsShrinkRequest &) = default ;
    DeleteTargetsShrinkRequest& operator=(DeleteTargetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->ruleName_ != nullptr && this->targetIdsShrink_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline DeleteTargetsShrinkRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DeleteTargetsShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targetIdsShrink Field Functions 
    bool hasTargetIdsShrink() const { return this->targetIdsShrink_ != nullptr;};
    void deleteTargetIdsShrink() { this->targetIdsShrink_ = nullptr;};
    inline string targetIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetIdsShrink_, "") };
    inline DeleteTargetsShrinkRequest& setTargetIdsShrink(string targetIdsShrink) { DARABONBA_PTR_SET_VALUE(targetIdsShrink_, targetIdsShrink) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The name of the event rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The IDs of the event targets that you want to delete.
    std::shared_ptr<string> targetIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
