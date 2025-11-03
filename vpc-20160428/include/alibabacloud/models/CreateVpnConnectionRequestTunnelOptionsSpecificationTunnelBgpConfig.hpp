// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNCONNECTIONREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELBGPCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNCONNECTIONREQUESTTUNNELOPTIONSSPECIFICATIONTUNNELBGPCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_TO_JSON(TunnelCidr, tunnelCidr_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(LocalBgpIp, localBgpIp_);
      DARABONBA_PTR_FROM_JSON(TunnelCidr, tunnelCidr_);
    };
    CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig() = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig(const CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig &) = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig(CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig &&) = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig() = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig& operator=(const CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig &) = default ;
    CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig& operator=(CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localAsn_ == nullptr
        && return this->localBgpIp_ == nullptr && return this->tunnelCidr_ == nullptr; };
    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline int64_t localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, 0L) };
    inline CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig& setLocalAsn(int64_t localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // localBgpIp Field Functions 
    bool hasLocalBgpIp() const { return this->localBgpIp_ != nullptr;};
    void deleteLocalBgpIp() { this->localBgpIp_ = nullptr;};
    inline string localBgpIp() const { DARABONBA_PTR_GET_DEFAULT(localBgpIp_, "") };
    inline CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig& setLocalBgpIp(string localBgpIp) { DARABONBA_PTR_SET_VALUE(localBgpIp_, localBgpIp) };


    // tunnelCidr Field Functions 
    bool hasTunnelCidr() const { return this->tunnelCidr_ != nullptr;};
    void deleteTunnelCidr() { this->tunnelCidr_ = nullptr;};
    inline string tunnelCidr() const { DARABONBA_PTR_GET_DEFAULT(tunnelCidr_, "") };
    inline CreateVpnConnectionRequestTunnelOptionsSpecificationTunnelBgpConfig& setTunnelCidr(string tunnelCidr) { DARABONBA_PTR_SET_VALUE(tunnelCidr_, tunnelCidr) };


  protected:
    // The autonomous system number (ASN) of the tunnel on the Alibaba Cloud side. Valid values: **1** to **4294967295**. Default value: **45104**.
    // 
    // > - If you set **EnableTunnelsBgp** to **true**, you must set this parameter.
    // > - Before you add BGP configurations, we recommend that you learn about how BGP dynamic routing works and the limits. For more information, see [Configure BGP dynamic routing](https://help.aliyun.com/document_detail/2638220.html).
    // > - We recommend that you use a private ASN to establish BGP connections to Alibaba Cloud. For information about the range of private ASNs, see the relevant documentation.
    std::shared_ptr<int64_t> localAsn_ = nullptr;
    // The BGP IP address of the tunnel on the Alibaba Cloud side. The address is an IP address that falls within the BGP CIDR block.
    std::shared_ptr<string> localBgpIp_ = nullptr;
    // The BGP CIDR block of the tunnel. The CIDR block must fall within 169.254.0.0/16 and the mask of the CIDR block must be 30 bits in length. The CIDR block cannot be 169.254.0.0/30, 169.254.1.0/30, 169.254.2.0/30, 169.254.3.0/30, 169.254.4.0/30, 169.254.5.0/30, 169.254.6.0/30, or 169.254.169.252/30.
    // 
    // >  The BGP CIDR block of each tunnel must be unique on a VPN gateway.
    std::shared_ptr<string> tunnelCidr_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
