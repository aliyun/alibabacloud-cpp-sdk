// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETESCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class DeleteScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleId, scalingRuleId_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleId, scalingRuleId_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
    };
    DeleteScalingRuleRequest() = default ;
    DeleteScalingRuleRequest(const DeleteScalingRuleRequest &) = default ;
    DeleteScalingRuleRequest(DeleteScalingRuleRequest &&) = default ;
    DeleteScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteScalingRuleRequest() = default ;
    DeleteScalingRuleRequest& operator=(const DeleteScalingRuleRequest &) = default ;
    DeleteScalingRuleRequest& operator=(DeleteScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroupId_ == nullptr
        && this->scalingRuleId_ == nullptr && this->triggerType_ == nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline DeleteScalingRuleRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // scalingRuleId Field Functions 
    bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
    void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
    inline string getScalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
    inline DeleteScalingRuleRequest& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline DeleteScalingRuleRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


  protected:
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // This parameter is required.
    shared_ptr<string> scalingRuleId_ {};
    // This parameter is required.
    shared_ptr<string> triggerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
