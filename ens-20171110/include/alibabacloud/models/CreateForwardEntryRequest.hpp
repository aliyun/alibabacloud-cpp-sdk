// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFORWARDENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFORWARDENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateForwardEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateForwardEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(StandbyExternalIp, standbyExternalIp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateForwardEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(StandbyExternalIp, standbyExternalIp_);
    };
    CreateForwardEntryRequest() = default ;
    CreateForwardEntryRequest(const CreateForwardEntryRequest &) = default ;
    CreateForwardEntryRequest(CreateForwardEntryRequest &&) = default ;
    CreateForwardEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateForwardEntryRequest() = default ;
    CreateForwardEntryRequest& operator=(const CreateForwardEntryRequest &) = default ;
    CreateForwardEntryRequest& operator=(CreateForwardEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalIp_ == nullptr
        && this->externalPort_ == nullptr && this->forwardEntryName_ == nullptr && this->healthCheckPort_ == nullptr && this->internalIp_ == nullptr && this->internalPort_ == nullptr
        && this->ipProtocol_ == nullptr && this->natGatewayId_ == nullptr && this->standbyExternalIp_ == nullptr; };
    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string getExternalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline CreateForwardEntryRequest& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string getExternalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline CreateForwardEntryRequest& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardEntryName Field Functions 
    bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
    void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
    inline string getForwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
    inline CreateForwardEntryRequest& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


    // healthCheckPort Field Functions 
    bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
    void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
    inline int32_t getHealthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, 0) };
    inline CreateForwardEntryRequest& setHealthCheckPort(int32_t healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string getInternalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline CreateForwardEntryRequest& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string getInternalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline CreateForwardEntryRequest& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string getIpProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline CreateForwardEntryRequest& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline CreateForwardEntryRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // standbyExternalIp Field Functions 
    bool hasStandbyExternalIp() const { return this->standbyExternalIp_ != nullptr;};
    void deleteStandbyExternalIp() { this->standbyExternalIp_ = nullptr;};
    inline string getStandbyExternalIp() const { DARABONBA_PTR_GET_DEFAULT(standbyExternalIp_, "") };
    inline CreateForwardEntryRequest& setStandbyExternalIp(string standbyExternalIp) { DARABONBA_PTR_SET_VALUE(standbyExternalIp_, standbyExternalIp) };


  protected:
    // The Elastic IP Address (EIP) that provides public network access.
    // 
    // The EIP must not be occupied by an SNAT rule of the same NAT gateway. You can check the IpLists.UsingStatus field returned by DescribeNatGateways to confirm that the EIP is in the Idle state.
    // 
    // This parameter is required.
    shared_ptr<string> externalIp_ {};
    // The external port or port range for port forwarding.
    // - The port range must be within 1 to 65535.
    // - To forward traffic within a port range, separate the start and end ports with a forward slash (/), such as 10/20.
    // - If ExternalPort is set to a port range, InternalPort must also be set to a port range with the same number of ports. For example, if ExternalPort is set to 10/20, InternalPort must be set to 80/90.
    // 
    // This parameter is required.
    shared_ptr<string> externalPort_ {};
    // The name of the DNAT rule. The name must be 2 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> forwardEntryName_ {};
    // The health check port for DNAT. The port must be within the internal port range. Default value: empty.
    shared_ptr<int32_t> healthCheckPort_ {};
    // The private IP address of the instance that communicates with the Internet through the DNAT entry.
    // 
    // This parameter is required.
    shared_ptr<string> internalIp_ {};
    // The internal port or port range for port forwarding.
    // 
    // - The port range must be within 1 to 65535.
    // - To forward traffic within a port range, separate the start and end ports with a forward slash (/), such as 10/20.
    // 
    // This parameter is required.
    shared_ptr<string> internalPort_ {};
    // The protocol type. Valid values: 
    // 
    // - **TCP**: forwards TCP packets.   
    // 
    // - **UDP**: forwards UDP packets.   
    // 
    // - **Any** (default): forwards all packets.
    shared_ptr<string> ipProtocol_ {};
    // The ID of the NAT gateway.
    // 
    // This parameter is required.
    shared_ptr<string> natGatewayId_ {};
    // The standby EIP that provides public network access. The standby EIP must be bound to the NAT gateway. After the DNAT entry is created, the standby EIP takes effect.
    shared_ptr<string> standbyExternalIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
