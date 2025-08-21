// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCENETWORKATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes() = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes(const DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes(DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes() = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& operator=(const DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& operator=(DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkId_ != nullptr
        && this->privateIpAddress_ != nullptr && this->vSwitchId_ != nullptr; };
    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress & privateIpAddress() const { DARABONBA_PTR_GET_CONST(privateIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress) };
    inline Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress privateIpAddress() { DARABONBA_PTR_GET(privateIpAddress_, Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& setPrivateIpAddress(const Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress & privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& setPrivateIpAddress(Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress && privateIpAddress) { DARABONBA_PTR_SET_RVALUE(privateIpAddress_, privateIpAddress) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceNetworkAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The ID of the network.
    std::shared_ptr<string> networkId_ = nullptr;
    // Details of the private IP addresses.
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesInstanceNetworkAttributesPrivateIpAddress> privateIpAddress_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
