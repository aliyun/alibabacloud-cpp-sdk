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
        && return this->privateIpAddress_ == nullptr && return this->vSwitchId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceNetworkAttributeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline ModifyInstanceNetworkAttributeRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyInstanceNetworkAttributeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
