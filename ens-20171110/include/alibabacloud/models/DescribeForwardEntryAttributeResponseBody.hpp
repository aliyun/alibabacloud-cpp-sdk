// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDENTRYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDENTRYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeForwardEntryAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardEntryAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_TO_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StandbyExternalIp, standbyExternalIp_);
      DARABONBA_PTR_TO_JSON(StandbyStatus, standbyStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardEntryAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_FROM_JSON(HealthCheckPort, healthCheckPort_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StandbyExternalIp, standbyExternalIp_);
      DARABONBA_PTR_FROM_JSON(StandbyStatus, standbyStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeForwardEntryAttributeResponseBody() = default ;
    DescribeForwardEntryAttributeResponseBody(const DescribeForwardEntryAttributeResponseBody &) = default ;
    DescribeForwardEntryAttributeResponseBody(DescribeForwardEntryAttributeResponseBody &&) = default ;
    DescribeForwardEntryAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardEntryAttributeResponseBody() = default ;
    DescribeForwardEntryAttributeResponseBody& operator=(const DescribeForwardEntryAttributeResponseBody &) = default ;
    DescribeForwardEntryAttributeResponseBody& operator=(DescribeForwardEntryAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->externalIp_ == nullptr && return this->externalPort_ == nullptr && return this->forwardEntryId_ == nullptr && return this->forwardEntryName_ == nullptr && return this->healthCheckPort_ == nullptr
        && return this->internalIp_ == nullptr && return this->internalPort_ == nullptr && return this->ipProtocol_ == nullptr && return this->natGatewayId_ == nullptr && return this->requestId_ == nullptr
        && return this->standbyExternalIp_ == nullptr && return this->standbyStatus_ == nullptr && return this->status_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string externalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string externalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardEntryId Field Functions 
    bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
    void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
    inline string forwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


    // forwardEntryName Field Functions 
    bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
    void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
    inline string forwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


    // healthCheckPort Field Functions 
    bool hasHealthCheckPort() const { return this->healthCheckPort_ != nullptr;};
    void deleteHealthCheckPort() { this->healthCheckPort_ = nullptr;};
    inline string healthCheckPort() const { DARABONBA_PTR_GET_DEFAULT(healthCheckPort_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setHealthCheckPort(string healthCheckPort) { DARABONBA_PTR_SET_VALUE(healthCheckPort_, healthCheckPort) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string internalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string internalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // standbyExternalIp Field Functions 
    bool hasStandbyExternalIp() const { return this->standbyExternalIp_ != nullptr;};
    void deleteStandbyExternalIp() { this->standbyExternalIp_ = nullptr;};
    inline string standbyExternalIp() const { DARABONBA_PTR_GET_DEFAULT(standbyExternalIp_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setStandbyExternalIp(string standbyExternalIp) { DARABONBA_PTR_SET_VALUE(standbyExternalIp_, standbyExternalIp) };


    // standbyStatus Field Functions 
    bool hasStandbyStatus() const { return this->standbyStatus_ != nullptr;};
    void deleteStandbyStatus() { this->standbyStatus_ = nullptr;};
    inline string standbyStatus() const { DARABONBA_PTR_GET_DEFAULT(standbyStatus_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setStandbyStatus(string standbyStatus) { DARABONBA_PTR_SET_VALUE(standbyStatus_, standbyStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeForwardEntryAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The creation time. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The EIP in the DNAT entry. The public IP address is used to access the Internet.
    std::shared_ptr<string> externalIp_ = nullptr;
    // The external port or port range that is used for port forwarding.
    // 
    // *   Valid values: 1 to 65535.
    // *   To specify a port range, separate the first port and the last port with a forward slash (/), such as 10/20.
    std::shared_ptr<string> externalPort_ = nullptr;
    // The ID of the DNAT entry.
    std::shared_ptr<string> forwardEntryId_ = nullptr;
    // The name of the DNAT entry.
    std::shared_ptr<string> forwardEntryName_ = nullptr;
    // The DNAT probe port. The port must be within the internal port range. By default, this parameter is empty.
    std::shared_ptr<string> healthCheckPort_ = nullptr;
    // The private IP address of the instance that uses the DNAT entry for Internet communication.
    std::shared_ptr<string> internalIp_ = nullptr;
    // The internal port or port range that is used for port forwarding.
    // 
    // *   Valid values: 1 to 65535.
    // *   To specify a port range, separate the first port and the last port with a forward slash (/), such as 10/20.
    std::shared_ptr<string> internalPort_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   **TCP**: forwards TCP packets.
    // *   **UDP**: forwards UDP packets.
    // *   **Any**: forwards all packets.
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The secondary EIP that is used to access the Internet. You need to select a secondary EIP that is bound to NAT. After the DNAT entry is created, the secondary EIP takes effect.
    std::shared_ptr<string> standbyExternalIp_ = nullptr;
    // The status of the secondary EIP.
    // 
    // *   Running
    // *   Stopping
    // *   Stopped
    // *   Starting
    std::shared_ptr<string> standbyStatus_ = nullptr;
    // The status of the DNAT entry.
    // 
    // *   Pending: The DNAT entry is being created or modified.
    // *   Available: The DNAT entry is available.
    // *   Deleting: The DNAT entry is being deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
