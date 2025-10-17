// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYVPCATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODYVPCATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceAttributeResponseBodyVpcAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBodyVpcAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(NatIpAddress, natIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBodyVpcAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(NatIpAddress, natIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeInstanceAttributeResponseBodyVpcAttributes() = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributes(const DescribeInstanceAttributeResponseBodyVpcAttributes &) = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributes(DescribeInstanceAttributeResponseBodyVpcAttributes &&) = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBodyVpcAttributes() = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributes& operator=(const DescribeInstanceAttributeResponseBodyVpcAttributes &) = default ;
    DescribeInstanceAttributeResponseBodyVpcAttributes& operator=(DescribeInstanceAttributeResponseBodyVpcAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->natIpAddress_ == nullptr
        && return this->privateIpAddress_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr; };
    // natIpAddress Field Functions 
    bool hasNatIpAddress() const { return this->natIpAddress_ != nullptr;};
    void deleteNatIpAddress() { this->natIpAddress_ = nullptr;};
    inline string natIpAddress() const { DARABONBA_PTR_GET_DEFAULT(natIpAddress_, "") };
    inline DescribeInstanceAttributeResponseBodyVpcAttributes& setNatIpAddress(string natIpAddress) { DARABONBA_PTR_SET_VALUE(natIpAddress_, natIpAddress) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const Models::DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress & privateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, Models::DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress) };
    inline Models::DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress privateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, Models::DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress) };
    inline DescribeInstanceAttributeResponseBodyVpcAttributes& setPrivateIpAddress(const Models::DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline DescribeInstanceAttributeResponseBodyVpcAttributes& setPrivateIpAddress(Models::DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeInstanceAttributeResponseBodyVpcAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInstanceAttributeResponseBodyVpcAttributes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The NAT IP address of the instance. It is used by ECS instances in different VPCs for communication.
    std::shared_ptr<string> natIpAddress_ = nullptr;
    // The private IP address of the instance.
    std::shared_ptr<Models::DescribeInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress> privateIpAddress_ = nullptr;
    // The ID of the vSwitch to which the instance is connected.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
