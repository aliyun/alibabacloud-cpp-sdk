// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNATIPSRESPONSEBODYNATIPS_HPP_
#define ALIBABACLOUD_MODELS_LISTNATIPSRESPONSEBODYNATIPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListNatIpsResponseBodyNatIps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNatIpsResponseBodyNatIps& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatIp, natIp_);
      DARABONBA_PTR_TO_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_TO_JSON(NatIpDescription, natIpDescription_);
      DARABONBA_PTR_TO_JSON(NatIpId, natIpId_);
      DARABONBA_PTR_TO_JSON(NatIpName, natIpName_);
      DARABONBA_PTR_TO_JSON(NatIpStatus, natIpStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListNatIpsResponseBodyNatIps& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4Prefix, ipv4Prefix_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatIp, natIp_);
      DARABONBA_PTR_FROM_JSON(NatIpCidr, natIpCidr_);
      DARABONBA_PTR_FROM_JSON(NatIpDescription, natIpDescription_);
      DARABONBA_PTR_FROM_JSON(NatIpId, natIpId_);
      DARABONBA_PTR_FROM_JSON(NatIpName, natIpName_);
      DARABONBA_PTR_FROM_JSON(NatIpStatus, natIpStatus_);
    };
    ListNatIpsResponseBodyNatIps() = default ;
    ListNatIpsResponseBodyNatIps(const ListNatIpsResponseBodyNatIps &) = default ;
    ListNatIpsResponseBodyNatIps(ListNatIpsResponseBodyNatIps &&) = default ;
    ListNatIpsResponseBodyNatIps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNatIpsResponseBodyNatIps() = default ;
    ListNatIpsResponseBodyNatIps& operator=(const ListNatIpsResponseBodyNatIps &) = default ;
    ListNatIpsResponseBodyNatIps& operator=(ListNatIpsResponseBodyNatIps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipv4Prefix_ == nullptr
        && return this->isDefault_ == nullptr && return this->natGatewayId_ == nullptr && return this->natIp_ == nullptr && return this->natIpCidr_ == nullptr && return this->natIpDescription_ == nullptr
        && return this->natIpId_ == nullptr && return this->natIpName_ == nullptr && return this->natIpStatus_ == nullptr; };
    // ipv4Prefix Field Functions 
    bool hasIpv4Prefix() const { return this->ipv4Prefix_ != nullptr;};
    void deleteIpv4Prefix() { this->ipv4Prefix_ = nullptr;};
    inline string ipv4Prefix() const { DARABONBA_PTR_GET_DEFAULT(ipv4Prefix_, "") };
    inline ListNatIpsResponseBodyNatIps& setIpv4Prefix(string ipv4Prefix) { DARABONBA_PTR_SET_VALUE(ipv4Prefix_, ipv4Prefix) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListNatIpsResponseBodyNatIps& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ListNatIpsResponseBodyNatIps& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natIp Field Functions 
    bool hasNatIp() const { return this->natIp_ != nullptr;};
    void deleteNatIp() { this->natIp_ = nullptr;};
    inline string natIp() const { DARABONBA_PTR_GET_DEFAULT(natIp_, "") };
    inline ListNatIpsResponseBodyNatIps& setNatIp(string natIp) { DARABONBA_PTR_SET_VALUE(natIp_, natIp) };


    // natIpCidr Field Functions 
    bool hasNatIpCidr() const { return this->natIpCidr_ != nullptr;};
    void deleteNatIpCidr() { this->natIpCidr_ = nullptr;};
    inline string natIpCidr() const { DARABONBA_PTR_GET_DEFAULT(natIpCidr_, "") };
    inline ListNatIpsResponseBodyNatIps& setNatIpCidr(string natIpCidr) { DARABONBA_PTR_SET_VALUE(natIpCidr_, natIpCidr) };


    // natIpDescription Field Functions 
    bool hasNatIpDescription() const { return this->natIpDescription_ != nullptr;};
    void deleteNatIpDescription() { this->natIpDescription_ = nullptr;};
    inline string natIpDescription() const { DARABONBA_PTR_GET_DEFAULT(natIpDescription_, "") };
    inline ListNatIpsResponseBodyNatIps& setNatIpDescription(string natIpDescription) { DARABONBA_PTR_SET_VALUE(natIpDescription_, natIpDescription) };


    // natIpId Field Functions 
    bool hasNatIpId() const { return this->natIpId_ != nullptr;};
    void deleteNatIpId() { this->natIpId_ = nullptr;};
    inline string natIpId() const { DARABONBA_PTR_GET_DEFAULT(natIpId_, "") };
    inline ListNatIpsResponseBodyNatIps& setNatIpId(string natIpId) { DARABONBA_PTR_SET_VALUE(natIpId_, natIpId) };


    // natIpName Field Functions 
    bool hasNatIpName() const { return this->natIpName_ != nullptr;};
    void deleteNatIpName() { this->natIpName_ = nullptr;};
    inline string natIpName() const { DARABONBA_PTR_GET_DEFAULT(natIpName_, "") };
    inline ListNatIpsResponseBodyNatIps& setNatIpName(string natIpName) { DARABONBA_PTR_SET_VALUE(natIpName_, natIpName) };


    // natIpStatus Field Functions 
    bool hasNatIpStatus() const { return this->natIpStatus_ != nullptr;};
    void deleteNatIpStatus() { this->natIpStatus_ = nullptr;};
    inline string natIpStatus() const { DARABONBA_PTR_GET_DEFAULT(natIpStatus_, "") };
    inline ListNatIpsResponseBodyNatIps& setNatIpStatus(string natIpStatus) { DARABONBA_PTR_SET_VALUE(natIpStatus_, natIpStatus) };


  protected:
    std::shared_ptr<string> ipv4Prefix_ = nullptr;
    // Indicates whether the IP address is the default IP address of the NAT gateway. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> isDefault_ = nullptr;
    // The ID of the Virtual Private Cloud (VPC) NAT gateway to which the IP address is assigned.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The IP address.
    std::shared_ptr<string> natIp_ = nullptr;
    // The CIDR block to which the IP address belongs.
    std::shared_ptr<string> natIpCidr_ = nullptr;
    // The description of the IP address.
    std::shared_ptr<string> natIpDescription_ = nullptr;
    // The ID of the IP address.
    std::shared_ptr<string> natIpId_ = nullptr;
    // The name of the IP address.
    std::shared_ptr<string> natIpName_ = nullptr;
    // The status of the IP address. Valid values:
    // 
    // *   **Available**: available
    // *   **Deleted**: deleted
    // *   **Deleting**: deleting
    // *   **Creating**: creating
    // *   **Associated**: specified in an SNAT or DNAT entry
    // *   **Associating**: being specified in an SNAT or DNAT entry
    std::shared_ptr<string> natIpStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
