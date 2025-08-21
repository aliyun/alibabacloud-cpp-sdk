// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESNATENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESNATENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateSnatEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSnatEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_TO_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_TO_JSON(IspAffinity, ispAffinity_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_TO_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_TO_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_TO_JSON(SourceNetworkId, sourceNetworkId_);
      DARABONBA_PTR_TO_JSON(SourceVSwitchId, sourceVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbySnatIp, standbySnatIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSnatEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAffinity, eipAffinity_);
      DARABONBA_PTR_FROM_JSON(IdleTimeout, idleTimeout_);
      DARABONBA_PTR_FROM_JSON(IspAffinity, ispAffinity_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(SnatEntryName, snatEntryName_);
      DARABONBA_PTR_FROM_JSON(SnatIp, snatIp_);
      DARABONBA_PTR_FROM_JSON(SourceCIDR, sourceCIDR_);
      DARABONBA_PTR_FROM_JSON(SourceNetworkId, sourceNetworkId_);
      DARABONBA_PTR_FROM_JSON(SourceVSwitchId, sourceVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbySnatIp, standbySnatIp_);
    };
    CreateSnatEntryRequest() = default ;
    CreateSnatEntryRequest(const CreateSnatEntryRequest &) = default ;
    CreateSnatEntryRequest(CreateSnatEntryRequest &&) = default ;
    CreateSnatEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSnatEntryRequest() = default ;
    CreateSnatEntryRequest& operator=(const CreateSnatEntryRequest &) = default ;
    CreateSnatEntryRequest& operator=(CreateSnatEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eipAffinity_ != nullptr
        && this->idleTimeout_ != nullptr && this->ispAffinity_ != nullptr && this->natGatewayId_ != nullptr && this->snatEntryName_ != nullptr && this->snatIp_ != nullptr
        && this->sourceCIDR_ != nullptr && this->sourceNetworkId_ != nullptr && this->sourceVSwitchId_ != nullptr && this->standbySnatIp_ != nullptr; };
    // eipAffinity Field Functions 
    bool hasEipAffinity() const { return this->eipAffinity_ != nullptr;};
    void deleteEipAffinity() { this->eipAffinity_ = nullptr;};
    inline bool eipAffinity() const { DARABONBA_PTR_GET_DEFAULT(eipAffinity_, false) };
    inline CreateSnatEntryRequest& setEipAffinity(bool eipAffinity) { DARABONBA_PTR_SET_VALUE(eipAffinity_, eipAffinity) };


    // idleTimeout Field Functions 
    bool hasIdleTimeout() const { return this->idleTimeout_ != nullptr;};
    void deleteIdleTimeout() { this->idleTimeout_ = nullptr;};
    inline int32_t idleTimeout() const { DARABONBA_PTR_GET_DEFAULT(idleTimeout_, 0) };
    inline CreateSnatEntryRequest& setIdleTimeout(int32_t idleTimeout) { DARABONBA_PTR_SET_VALUE(idleTimeout_, idleTimeout) };


    // ispAffinity Field Functions 
    bool hasIspAffinity() const { return this->ispAffinity_ != nullptr;};
    void deleteIspAffinity() { this->ispAffinity_ = nullptr;};
    inline bool ispAffinity() const { DARABONBA_PTR_GET_DEFAULT(ispAffinity_, false) };
    inline CreateSnatEntryRequest& setIspAffinity(bool ispAffinity) { DARABONBA_PTR_SET_VALUE(ispAffinity_, ispAffinity) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateSnatEntryRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // snatEntryName Field Functions 
    bool hasSnatEntryName() const { return this->snatEntryName_ != nullptr;};
    void deleteSnatEntryName() { this->snatEntryName_ = nullptr;};
    inline string snatEntryName() const { DARABONBA_PTR_GET_DEFAULT(snatEntryName_, "") };
    inline CreateSnatEntryRequest& setSnatEntryName(string snatEntryName) { DARABONBA_PTR_SET_VALUE(snatEntryName_, snatEntryName) };


    // snatIp Field Functions 
    bool hasSnatIp() const { return this->snatIp_ != nullptr;};
    void deleteSnatIp() { this->snatIp_ = nullptr;};
    inline string snatIp() const { DARABONBA_PTR_GET_DEFAULT(snatIp_, "") };
    inline CreateSnatEntryRequest& setSnatIp(string snatIp) { DARABONBA_PTR_SET_VALUE(snatIp_, snatIp) };


    // sourceCIDR Field Functions 
    bool hasSourceCIDR() const { return this->sourceCIDR_ != nullptr;};
    void deleteSourceCIDR() { this->sourceCIDR_ = nullptr;};
    inline string sourceCIDR() const { DARABONBA_PTR_GET_DEFAULT(sourceCIDR_, "") };
    inline CreateSnatEntryRequest& setSourceCIDR(string sourceCIDR) { DARABONBA_PTR_SET_VALUE(sourceCIDR_, sourceCIDR) };


    // sourceNetworkId Field Functions 
    bool hasSourceNetworkId() const { return this->sourceNetworkId_ != nullptr;};
    void deleteSourceNetworkId() { this->sourceNetworkId_ = nullptr;};
    inline string sourceNetworkId() const { DARABONBA_PTR_GET_DEFAULT(sourceNetworkId_, "") };
    inline CreateSnatEntryRequest& setSourceNetworkId(string sourceNetworkId) { DARABONBA_PTR_SET_VALUE(sourceNetworkId_, sourceNetworkId) };


    // sourceVSwitchId Field Functions 
    bool hasSourceVSwitchId() const { return this->sourceVSwitchId_ != nullptr;};
    void deleteSourceVSwitchId() { this->sourceVSwitchId_ = nullptr;};
    inline string sourceVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(sourceVSwitchId_, "") };
    inline CreateSnatEntryRequest& setSourceVSwitchId(string sourceVSwitchId) { DARABONBA_PTR_SET_VALUE(sourceVSwitchId_, sourceVSwitchId) };


    // standbySnatIp Field Functions 
    bool hasStandbySnatIp() const { return this->standbySnatIp_ != nullptr;};
    void deleteStandbySnatIp() { this->standbySnatIp_ = nullptr;};
    inline string standbySnatIp() const { DARABONBA_PTR_GET_DEFAULT(standbySnatIp_, "") };
    inline CreateSnatEntryRequest& setStandbySnatIp(string standbySnatIp) { DARABONBA_PTR_SET_VALUE(standbySnatIp_, standbySnatIp) };


  protected:
    // Specifies whether to enable IP affinity. If you do not specify this parameter, IP affinity is enabled by default. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // >  After you enable IP affinity, if multiple EIPs are associated with an SNAT entry, one client uses the same EIP to for communication. If IP affinity is disabled, the client uses a random EIP for communication.
    std::shared_ptr<bool> eipAffinity_ = nullptr;
    // The timeout period for idle connections. Valid values: **1** to **86400**. Unit: seconds.
    std::shared_ptr<int32_t> idleTimeout_ = nullptr;
    // Whether to enable operator affinity. Value taking:
    // 
    // - false:Do not open.
    // - true:Open.
    std::shared_ptr<bool> ispAffinity_ = nullptr;
    // The ID of the Network Address Translation (NAT) gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The name of the SNAT entry. The name must be 1 to 128 characters in length. The name cannot start with `http://` or `https://`.
    std::shared_ptr<string> snatEntryName_ = nullptr;
    // The elastic IP address (EIP) in the SNAT entry. Separate multiple EIPs with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> snatIp_ = nullptr;
    // The CIDR block. You can specify the CIDR block of a network, a vSwitch, or an instance. You can also specify a custom CIDR block. All instances within the CIDR block can access the Internet or external networks by using SNAT.
    // 
    // >  If you specify **SourceVSwitchId** and **SourceCIDR**, **SourceVSwitchId** does not take effect. The value that you specified for **SourceCIDR** takes precedence.
    std::shared_ptr<string> sourceCIDR_ = nullptr;
    // The ID of the network. This parameter specifies that all ENS instances in the network can use the SNAT entry to access the Internet.
    // 
    // >  If you specify **SourceNetworkId** and **SourceVSwitchId** or **SourceCIDR**, **SourceNetworkId** does not take effect. The value that you specified for **SourceCIDR** takes precedence. Priority: **SourceCIDR** > **SourceVSwitchId** > **SourceNetworkId**.
    std::shared_ptr<string> sourceNetworkId_ = nullptr;
    // The ID of the vSwitch that you need to access over the Internet. This parameter specifies that Edge Node Service (ENS) instances in the vSwitch can use the SNAT entry to access the Internet.
    // 
    // >  If you specify **SourceVSwitchId** and **SourceCIDR**, **SourceVSwitchId** does not take effect. The value that you specified for **SourceCIDR** takes precedence.
    std::shared_ptr<string> sourceVSwitchId_ = nullptr;
    // The secondary EIP in the SNAT entry. Separate multiple secondary EIPs with commas (,).
    std::shared_ptr<string> standbySnatIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
