// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATENETWORKCIDRBLOCKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATENETWORKCIDRBLOCKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class AssociateNetworkCidrBlockRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateNetworkCidrBlockRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateNetworkCidrBlockRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Ipv6Isp, ipv6Isp_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(SecondaryCidrBlock, secondaryCidrBlock_);
    };
    AssociateNetworkCidrBlockRequest() = default ;
    AssociateNetworkCidrBlockRequest(const AssociateNetworkCidrBlockRequest &) = default ;
    AssociateNetworkCidrBlockRequest(AssociateNetworkCidrBlockRequest &&) = default ;
    AssociateNetworkCidrBlockRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateNetworkCidrBlockRequest() = default ;
    AssociateNetworkCidrBlockRequest& operator=(const AssociateNetworkCidrBlockRequest &) = default ;
    AssociateNetworkCidrBlockRequest& operator=(AssociateNetworkCidrBlockRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipVersion_ == nullptr
        && this->ipv6Isp_ == nullptr && this->networkId_ == nullptr && this->secondaryCidrBlock_ == nullptr; };
    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline AssociateNetworkCidrBlockRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ipv6Isp Field Functions 
    bool hasIpv6Isp() const { return this->ipv6Isp_ != nullptr;};
    void deleteIpv6Isp() { this->ipv6Isp_ = nullptr;};
    inline string getIpv6Isp() const { DARABONBA_PTR_GET_DEFAULT(ipv6Isp_, "") };
    inline AssociateNetworkCidrBlockRequest& setIpv6Isp(string ipv6Isp) { DARABONBA_PTR_SET_VALUE(ipv6Isp_, ipv6Isp) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline AssociateNetworkCidrBlockRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // secondaryCidrBlock Field Functions 
    bool hasSecondaryCidrBlock() const { return this->secondaryCidrBlock_ != nullptr;};
    void deleteSecondaryCidrBlock() { this->secondaryCidrBlock_ = nullptr;};
    inline string getSecondaryCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(secondaryCidrBlock_, "") };
    inline AssociateNetworkCidrBlockRequest& setSecondaryCidrBlock(string secondaryCidrBlock) { DARABONBA_PTR_SET_VALUE(secondaryCidrBlock_, secondaryCidrBlock) };


  protected:
    // The IP address version. Valid values:
    // - IPV4: IPv4 address.
    // - IPV6: IPv6 address.
    shared_ptr<string> ipVersion_ {};
    // The ISP of the IPv6 CIDR block. Valid values:
    // - cmcc
    // - unicom
    // - telecom
    shared_ptr<string> ipv6Isp_ {};
    // The network ID.
    // 
    // This parameter is required.
    shared_ptr<string> networkId_ {};
    // The secondary IPv4 CIDR block to be added. The CIDR block must meet the following requirements:
    // - The CIDR block must be within the 10.0.0.0/8, 172.16.0.0/12, or 192.168.0.0/16 range.
    // - The secondary CIDR block must not overlap with the primary CIDR block or existing secondary CIDR blocks of the network.
    shared_ptr<string> secondaryCidrBlock_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
