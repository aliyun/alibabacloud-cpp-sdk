// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERSAICINSTANCESNETWORKATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERSAICINSTANCESNETWORKATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes() = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes(const DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes &) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes(DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes &&) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes() = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes& operator=(const DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes &) = default ;
    DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes& operator=(DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipAddress_ != nullptr
        && this->networkId_ != nullptr && this->vSwitchId_ != nullptr; };
    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeARMServerInstancesResponseBodyServersAICInstancesNetworkAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IP address of the AIC instance.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The network ID of the AIC instance.
    std::shared_ptr<string> networkId_ = nullptr;
    // The vSwitch ID of the AIC instance.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
