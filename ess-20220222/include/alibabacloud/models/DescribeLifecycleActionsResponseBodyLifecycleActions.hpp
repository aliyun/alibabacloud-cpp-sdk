// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEACTIONSRESPONSEBODYLIFECYCLEACTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEACTIONSRESPONSEBODYLIFECYCLEACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeLifecycleActionsResponseBodyLifecycleActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecycleActionsResponseBodyLifecycleActions& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(LifecycleActionResult, lifecycleActionResult_);
      DARABONBA_PTR_TO_JSON(LifecycleActionStatus, lifecycleActionStatus_);
      DARABONBA_PTR_TO_JSON(LifecycleActionToken, lifecycleActionToken_);
      DARABONBA_PTR_TO_JSON(LifecycleHookId, lifecycleHookId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecycleActionsResponseBodyLifecycleActions& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(LifecycleActionResult, lifecycleActionResult_);
      DARABONBA_PTR_FROM_JSON(LifecycleActionStatus, lifecycleActionStatus_);
      DARABONBA_PTR_FROM_JSON(LifecycleActionToken, lifecycleActionToken_);
      DARABONBA_PTR_FROM_JSON(LifecycleHookId, lifecycleHookId_);
    };
    DescribeLifecycleActionsResponseBodyLifecycleActions() = default ;
    DescribeLifecycleActionsResponseBodyLifecycleActions(const DescribeLifecycleActionsResponseBodyLifecycleActions &) = default ;
    DescribeLifecycleActionsResponseBodyLifecycleActions(DescribeLifecycleActionsResponseBodyLifecycleActions &&) = default ;
    DescribeLifecycleActionsResponseBodyLifecycleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecycleActionsResponseBodyLifecycleActions() = default ;
    DescribeLifecycleActionsResponseBodyLifecycleActions& operator=(const DescribeLifecycleActionsResponseBodyLifecycleActions &) = default ;
    DescribeLifecycleActionsResponseBodyLifecycleActions& operator=(DescribeLifecycleActionsResponseBodyLifecycleActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceIds_ != nullptr
        && this->lifecycleActionResult_ != nullptr && this->lifecycleActionStatus_ != nullptr && this->lifecycleActionToken_ != nullptr && this->lifecycleHookId_ != nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeLifecycleActionsResponseBodyLifecycleActions& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeLifecycleActionsResponseBodyLifecycleActions& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // lifecycleActionResult Field Functions 
    bool hasLifecycleActionResult() const { return this->lifecycleActionResult_ != nullptr;};
    void deleteLifecycleActionResult() { this->lifecycleActionResult_ = nullptr;};
    inline string lifecycleActionResult() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionResult_, "") };
    inline DescribeLifecycleActionsResponseBodyLifecycleActions& setLifecycleActionResult(string lifecycleActionResult) { DARABONBA_PTR_SET_VALUE(lifecycleActionResult_, lifecycleActionResult) };


    // lifecycleActionStatus Field Functions 
    bool hasLifecycleActionStatus() const { return this->lifecycleActionStatus_ != nullptr;};
    void deleteLifecycleActionStatus() { this->lifecycleActionStatus_ = nullptr;};
    inline string lifecycleActionStatus() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionStatus_, "") };
    inline DescribeLifecycleActionsResponseBodyLifecycleActions& setLifecycleActionStatus(string lifecycleActionStatus) { DARABONBA_PTR_SET_VALUE(lifecycleActionStatus_, lifecycleActionStatus) };


    // lifecycleActionToken Field Functions 
    bool hasLifecycleActionToken() const { return this->lifecycleActionToken_ != nullptr;};
    void deleteLifecycleActionToken() { this->lifecycleActionToken_ = nullptr;};
    inline string lifecycleActionToken() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionToken_, "") };
    inline DescribeLifecycleActionsResponseBodyLifecycleActions& setLifecycleActionToken(string lifecycleActionToken) { DARABONBA_PTR_SET_VALUE(lifecycleActionToken_, lifecycleActionToken) };


    // lifecycleHookId Field Functions 
    bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
    void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
    inline string lifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
    inline DescribeLifecycleActionsResponseBodyLifecycleActions& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


  protected:
    // The IDs of the ECS instances on which the lifecycle hook takes effect
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The subsequent action that Auto Scaling performs after the lifecycle hook times out. Valid values:
    // 
    // *   CONTINUE: Auto Scaling continues to respond to a scale-in or scale-out request.
    // *   ABANDON: Auto Scaling releases ECS instances that are created during scale-out events, or removes ECS instances from the scaling group during scale-in events.
    std::shared_ptr<string> lifecycleActionResult_ = nullptr;
    // The status of the lifecycle hook action.
    std::shared_ptr<string> lifecycleActionStatus_ = nullptr;
    // The token of the lifecycle hook action.
    std::shared_ptr<string> lifecycleActionToken_ = nullptr;
    // The ID of the lifecycle hook.
    std::shared_ptr<string> lifecycleHookId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
