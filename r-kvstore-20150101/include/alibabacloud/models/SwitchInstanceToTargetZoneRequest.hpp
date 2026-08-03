// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SWITCHINSTANCETOTARGETZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SWITCHINSTANCETOTARGETZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class SwitchInstanceToTargetZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SwitchInstanceToTargetZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(SwitchType, switchType_);
      DARABONBA_PTR_TO_JSON(TargetZoneId, targetZoneId_);
    };
    friend void from_json(const Darabonba::Json& j, SwitchInstanceToTargetZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(SwitchType, switchType_);
      DARABONBA_PTR_FROM_JSON(TargetZoneId, targetZoneId_);
    };
    SwitchInstanceToTargetZoneRequest() = default ;
    SwitchInstanceToTargetZoneRequest(const SwitchInstanceToTargetZoneRequest &) = default ;
    SwitchInstanceToTargetZoneRequest(SwitchInstanceToTargetZoneRequest &&) = default ;
    SwitchInstanceToTargetZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SwitchInstanceToTargetZoneRequest() = default ;
    SwitchInstanceToTargetZoneRequest& operator=(const SwitchInstanceToTargetZoneRequest &) = default ;
    SwitchInstanceToTargetZoneRequest& operator=(SwitchInstanceToTargetZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr && this->switchType_ == nullptr && this->targetZoneId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SwitchInstanceToTargetZoneRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline SwitchInstanceToTargetZoneRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // switchType Field Functions 
    bool hasSwitchType() const { return this->switchType_ != nullptr;};
    void deleteSwitchType() { this->switchType_ = nullptr;};
    inline string getSwitchType() const { DARABONBA_PTR_GET_DEFAULT(switchType_, "") };
    inline SwitchInstanceToTargetZoneRequest& setSwitchType(string switchType) { DARABONBA_PTR_SET_VALUE(switchType_, switchType) };


    // targetZoneId Field Functions 
    bool hasTargetZoneId() const { return this->targetZoneId_ != nullptr;};
    void deleteTargetZoneId() { this->targetZoneId_ = nullptr;};
    inline string getTargetZoneId() const { DARABONBA_PTR_GET_DEFAULT(targetZoneId_, "") };
    inline SwitchInstanceToTargetZoneRequest& setTargetZoneId(string targetZoneId) { DARABONBA_PTR_SET_VALUE(targetZoneId_, targetZoneId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> nodeId_ {};
    shared_ptr<string> switchType_ {};
    // This parameter is required.
    shared_ptr<string> targetZoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
