// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODYFORWARDTABLEENTRIESFORWARDTABLEENTRY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODYFORWARDTABLEENTRIESFORWARDTABLEENTRY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_TO_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_TO_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_TO_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_TO_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalIp, externalIp_);
      DARABONBA_PTR_FROM_JSON(ExternalPort, externalPort_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryId, forwardEntryId_);
      DARABONBA_PTR_FROM_JSON(ForwardEntryName, forwardEntryName_);
      DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(InternalPort, internalPort_);
      DARABONBA_PTR_FROM_JSON(IpProtocol, ipProtocol_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry() = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry(const DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry &) = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry(DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry &&) = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry() = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& operator=(const DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry &) = default ;
    DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& operator=(DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalIp_ != nullptr
        && this->externalPort_ != nullptr && this->forwardEntryId_ != nullptr && this->forwardEntryName_ != nullptr && this->forwardTableId_ != nullptr && this->internalIp_ != nullptr
        && this->internalPort_ != nullptr && this->ipProtocol_ != nullptr && this->natGatewayId_ != nullptr && this->status_ != nullptr; };
    // externalIp Field Functions 
    bool hasExternalIp() const { return this->externalIp_ != nullptr;};
    void deleteExternalIp() { this->externalIp_ = nullptr;};
    inline string externalIp() const { DARABONBA_PTR_GET_DEFAULT(externalIp_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setExternalIp(string externalIp) { DARABONBA_PTR_SET_VALUE(externalIp_, externalIp) };


    // externalPort Field Functions 
    bool hasExternalPort() const { return this->externalPort_ != nullptr;};
    void deleteExternalPort() { this->externalPort_ = nullptr;};
    inline string externalPort() const { DARABONBA_PTR_GET_DEFAULT(externalPort_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setExternalPort(string externalPort) { DARABONBA_PTR_SET_VALUE(externalPort_, externalPort) };


    // forwardEntryId Field Functions 
    bool hasForwardEntryId() const { return this->forwardEntryId_ != nullptr;};
    void deleteForwardEntryId() { this->forwardEntryId_ = nullptr;};
    inline string forwardEntryId() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryId_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setForwardEntryId(string forwardEntryId) { DARABONBA_PTR_SET_VALUE(forwardEntryId_, forwardEntryId) };


    // forwardEntryName Field Functions 
    bool hasForwardEntryName() const { return this->forwardEntryName_ != nullptr;};
    void deleteForwardEntryName() { this->forwardEntryName_ = nullptr;};
    inline string forwardEntryName() const { DARABONBA_PTR_GET_DEFAULT(forwardEntryName_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setForwardEntryName(string forwardEntryName) { DARABONBA_PTR_SET_VALUE(forwardEntryName_, forwardEntryName) };


    // forwardTableId Field Functions 
    bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
    void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
    inline string forwardTableId() const { DARABONBA_PTR_GET_DEFAULT(forwardTableId_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setForwardTableId(string forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string internalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // internalPort Field Functions 
    bool hasInternalPort() const { return this->internalPort_ != nullptr;};
    void deleteInternalPort() { this->internalPort_ = nullptr;};
    inline string internalPort() const { DARABONBA_PTR_GET_DEFAULT(internalPort_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setInternalPort(string internalPort) { DARABONBA_PTR_SET_VALUE(internalPort_, internalPort) };


    // ipProtocol Field Functions 
    bool hasIpProtocol() const { return this->ipProtocol_ != nullptr;};
    void deleteIpProtocol() { this->ipProtocol_ = nullptr;};
    inline string ipProtocol() const { DARABONBA_PTR_GET_DEFAULT(ipProtocol_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setIpProtocol(string ipProtocol) { DARABONBA_PTR_SET_VALUE(ipProtocol_, ipProtocol) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeForwardTableEntriesResponseBodyForwardTableEntriesForwardTableEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // *   The EIPs that can be accessed over the Internet when you query DNAT entries of Internet NAT gateways.
    // *   The NAT IP addresses that can be accessed by external networks when you query DNAT entries of VPC NAT gateways.
    std::shared_ptr<string> externalIp_ = nullptr;
    // *   The external port or port range that is used for port forwarding when you query DNAT entries of Internet NAT gateways.
    // *   The port that is used when the NAT IP address can be accessed by external networks when you query DNAT entries of VPC NAT gateways.
    std::shared_ptr<string> externalPort_ = nullptr;
    // The ID of the DNAT entry.
    std::shared_ptr<string> forwardEntryId_ = nullptr;
    // The name of the DNAT entry.
    std::shared_ptr<string> forwardEntryName_ = nullptr;
    // The ID of the DNAT table to which the DNAT entry belongs.
    std::shared_ptr<string> forwardTableId_ = nullptr;
    // The private IP address.
    // 
    // *   The private IP address of the ECS instance that uses DNAT entries to communicate with the Internet when you query DNAT entries of Internet NAT gateways.
    // *   The private IP address that uses DNAT entries when you query DNAT entries of VPC NAT gateways.
    std::shared_ptr<string> internalIp_ = nullptr;
    // *   The internal port or port range that is used for port forwarding when you query DNAT entries of Internet NAT gateways.
    // *   The destination ECS instance port to be mapped when you query DNAT entries of VPC NAT gateways.
    std::shared_ptr<string> internalPort_ = nullptr;
    // The protocol. Valid values:
    // 
    // *   **TCP**
    // *   **UDP**
    // *   **Any**
    std::shared_ptr<string> ipProtocol_ = nullptr;
    // The ID of the NAT gateway to which the DNAT entry belongs.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The status of the DNAT entry. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Deleting**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
