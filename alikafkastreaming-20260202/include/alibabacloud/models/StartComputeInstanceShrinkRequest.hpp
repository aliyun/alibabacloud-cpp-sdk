// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCOMPUTEINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCOMPUTEINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class StartComputeInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartComputeInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, StartComputeInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    StartComputeInstanceShrinkRequest() = default ;
    StartComputeInstanceShrinkRequest(const StartComputeInstanceShrinkRequest &) = default ;
    StartComputeInstanceShrinkRequest(StartComputeInstanceShrinkRequest &&) = default ;
    StartComputeInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartComputeInstanceShrinkRequest() = default ;
    StartComputeInstanceShrinkRequest& operator=(const StartComputeInstanceShrinkRequest &) = default ;
    StartComputeInstanceShrinkRequest& operator=(StartComputeInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->regionId_ == nullptr && this->vSwitchIdsShrink_ == nullptr && this->vpcId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartComputeInstanceShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline StartComputeInstanceShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartComputeInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitchIdsShrink Field Functions 
    bool hasVSwitchIdsShrink() const { return this->vSwitchIdsShrink_ != nullptr;};
    void deleteVSwitchIdsShrink() { this->vSwitchIdsShrink_ = nullptr;};
    inline string getVSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIdsShrink_, "") };
    inline StartComputeInstanceShrinkRequest& setVSwitchIdsShrink(string vSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(vSwitchIdsShrink_, vSwitchIdsShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline StartComputeInstanceShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> vSwitchIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
