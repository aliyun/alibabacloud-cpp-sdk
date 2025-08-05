// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTTARGETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTTARGETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class PutTargetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutTargetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Targets, targetsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PutTargetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Targets, targetsShrink_);
    };
    PutTargetsShrinkRequest() = default ;
    PutTargetsShrinkRequest(const PutTargetsShrinkRequest &) = default ;
    PutTargetsShrinkRequest(PutTargetsShrinkRequest &&) = default ;
    PutTargetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutTargetsShrinkRequest() = default ;
    PutTargetsShrinkRequest& operator=(const PutTargetsShrinkRequest &) = default ;
    PutTargetsShrinkRequest& operator=(PutTargetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->ruleName_ != nullptr && this->targetsShrink_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline PutTargetsShrinkRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutTargetsShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targetsShrink Field Functions 
    bool hasTargetsShrink() const { return this->targetsShrink_ != nullptr;};
    void deleteTargetsShrink() { this->targetsShrink_ = nullptr;};
    inline string targetsShrink() const { DARABONBA_PTR_GET_DEFAULT(targetsShrink_, "") };
    inline PutTargetsShrinkRequest& setTargetsShrink(string targetsShrink) { DARABONBA_PTR_SET_VALUE(targetsShrink_, targetsShrink) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The name of the event rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The event targets to be created or updated. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> targetsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
