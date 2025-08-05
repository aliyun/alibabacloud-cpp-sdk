// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DeleteTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(TargetIds, targetIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(TargetIds, targetIds_);
    };
    DeleteTargetsRequest() = default ;
    DeleteTargetsRequest(const DeleteTargetsRequest &) = default ;
    DeleteTargetsRequest(DeleteTargetsRequest &&) = default ;
    DeleteTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTargetsRequest() = default ;
    DeleteTargetsRequest& operator=(const DeleteTargetsRequest &) = default ;
    DeleteTargetsRequest& operator=(DeleteTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->ruleName_ != nullptr && this->targetIds_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline DeleteTargetsRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DeleteTargetsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targetIds Field Functions 
    bool hasTargetIds() const { return this->targetIds_ != nullptr;};
    void deleteTargetIds() { this->targetIds_ = nullptr;};
    inline const vector<string> & targetIds() const { DARABONBA_PTR_GET_CONST(targetIds_, vector<string>) };
    inline vector<string> targetIds() { DARABONBA_PTR_GET(targetIds_, vector<string>) };
    inline DeleteTargetsRequest& setTargetIds(const vector<string> & targetIds) { DARABONBA_PTR_SET_VALUE(targetIds_, targetIds) };
    inline DeleteTargetsRequest& setTargetIds(vector<string> && targetIds) { DARABONBA_PTR_SET_RVALUE(targetIds_, targetIds) };


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
    std::shared_ptr<vector<string>> targetIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
