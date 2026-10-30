// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCENETWORKATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCENETWORKATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifyInstanceNetworkAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceNetworkAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceNetworkAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ModifyInstanceNetworkAttributeRequest() = default ;
    ModifyInstanceNetworkAttributeRequest(const ModifyInstanceNetworkAttributeRequest &) = default ;
    ModifyInstanceNetworkAttributeRequest(ModifyInstanceNetworkAttributeRequest &&) = default ;
    ModifyInstanceNetworkAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceNetworkAttributeRequest() = default ;
    ModifyInstanceNetworkAttributeRequest& operator=(const ModifyInstanceNetworkAttributeRequest &) = default ;
    ModifyInstanceNetworkAttributeRequest& operator=(ModifyInstanceNetworkAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->privateIpAddress_ == nullptr && this->vSwitchId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceNetworkAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline ModifyInstanceNetworkAttributeRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyInstanceNetworkAttributeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ENS instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The new private IP address.
    // Default value: If this parameter is not specified, an IP address is randomly assigned from the CIDR block of the vSwitch.
    shared_ptr<string> privateIpAddress_ {};
    // The vSwitch ID.
    // - If the specified ID is the current vSwitch of the instance, the vSwitch of the instance remains unchanged.
    // - If the specified ID is a new vSwitch, the new and old vSwitches must belong to the same edge zone.
    // - If this parameter is not specified, a value is randomly assigned from the CIDR block of the original vSwitch.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
