// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYVPCATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYVPCATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceAttributeResponseBodyVpcAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBodyVpcAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(NatIpAddress, natIpAddress_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBodyVpcAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(NatIpAddress, natIpAddress_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeRCInstanceAttributeResponseBodyVpcAttributes() = default ;
    DescribeRCInstanceAttributeResponseBodyVpcAttributes(const DescribeRCInstanceAttributeResponseBodyVpcAttributes &) = default ;
    DescribeRCInstanceAttributeResponseBodyVpcAttributes(DescribeRCInstanceAttributeResponseBodyVpcAttributes &&) = default ;
    DescribeRCInstanceAttributeResponseBodyVpcAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBodyVpcAttributes() = default ;
    DescribeRCInstanceAttributeResponseBodyVpcAttributes& operator=(const DescribeRCInstanceAttributeResponseBodyVpcAttributes &) = default ;
    DescribeRCInstanceAttributeResponseBodyVpcAttributes& operator=(DescribeRCInstanceAttributeResponseBodyVpcAttributes &&) = default ;
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
    inline DescribeRCInstanceAttributeResponseBodyVpcAttributes& setNatIpAddress(string natIpAddress) { DARABONBA_PTR_SET_VALUE(natIpAddress_, natIpAddress) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const Models::DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress & privateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, Models::DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress) };
    inline Models::DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress privateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, Models::DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress) };
    inline DescribeRCInstanceAttributeResponseBodyVpcAttributes& setPrivateIpAddress(const Models::DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline DescribeRCInstanceAttributeResponseBodyVpcAttributes& setPrivateIpAddress(Models::DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeRCInstanceAttributeResponseBodyVpcAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRCInstanceAttributeResponseBodyVpcAttributes& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The network address translation (NAT) IP address of the instance. The NAT IP address is used by instances in different VPCs for communication.
    std::shared_ptr<string> natIpAddress_ = nullptr;
    // The private IP addresses of the instance.
    std::shared_ptr<Models::DescribeRCInstanceAttributeResponseBodyVpcAttributesPrivateIpAddress> privateIpAddress_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
