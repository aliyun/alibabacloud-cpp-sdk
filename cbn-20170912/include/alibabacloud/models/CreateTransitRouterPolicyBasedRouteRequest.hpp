// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERPOLICYBASEDROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERPOLICYBASEDROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterPolicyBasedRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterPolicyBasedRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Dscp, dscp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_TO_JSON(TargetRouteTableId, targetRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterPolicyBasedRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
      DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Dscp, dscp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
      DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
      DARABONBA_PTR_FROM_JSON(TargetRouteTableId, targetRouteTableId_);
    };
    CreateTransitRouterPolicyBasedRouteRequest() = default ;
    CreateTransitRouterPolicyBasedRouteRequest(const CreateTransitRouterPolicyBasedRouteRequest &) = default ;
    CreateTransitRouterPolicyBasedRouteRequest(CreateTransitRouterPolicyBasedRouteRequest &&) = default ;
    CreateTransitRouterPolicyBasedRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterPolicyBasedRouteRequest() = default ;
    CreateTransitRouterPolicyBasedRouteRequest& operator=(const CreateTransitRouterPolicyBasedRouteRequest &) = default ;
    CreateTransitRouterPolicyBasedRouteRequest& operator=(CreateTransitRouterPolicyBasedRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->clientToken_ == nullptr && this->description_ == nullptr && this->destPortRange_ == nullptr && this->destinationCidr_ == nullptr && this->dryRun_ == nullptr
        && this->dscp_ == nullptr && this->name_ == nullptr && this->policyTableId_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr
        && this->sourceCidr_ == nullptr && this->sourcePortRange_ == nullptr && this->targetRouteTableId_ == nullptr; };
    // addressFamily Field Functions 
    bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
    void deleteAddressFamily() { this->addressFamily_ = nullptr;};
    inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destPortRange Field Functions 
    bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
    void deleteDestPortRange() { this->destPortRange_ = nullptr;};
    inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


    // destinationCidr Field Functions 
    bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
    void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
    inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterPolicyBasedRouteRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // dscp Field Functions 
    bool hasDscp() const { return this->dscp_ != nullptr;};
    void deleteDscp() { this->dscp_ = nullptr;};
    inline string getDscp() const { DARABONBA_PTR_GET_DEFAULT(dscp_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setDscp(string dscp) { DARABONBA_PTR_SET_VALUE(dscp_, dscp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policyTableId Field Functions 
    bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
    void deletePolicyTableId() { this->policyTableId_ = nullptr;};
    inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTransitRouterPolicyBasedRouteRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // sourceCidr Field Functions 
    bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
    void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
    inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


    // sourcePortRange Field Functions 
    bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
    void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
    inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


    // targetRouteTableId Field Functions 
    bool hasTargetRouteTableId() const { return this->targetRouteTableId_ != nullptr;};
    void deleteTargetRouteTableId() { this->targetRouteTableId_ = nullptr;};
    inline string getTargetRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(targetRouteTableId_, "") };
    inline CreateTransitRouterPolicyBasedRouteRequest& setTargetRouteTableId(string targetRouteTableId) { DARABONBA_PTR_SET_VALUE(targetRouteTableId_, targetRouteTableId) };


  protected:
    // The address family. Valid values:
    // 
    // - IPv4
    // - IPv6
    shared_ptr<string> addressFamily_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the policy-based routing rule.
    shared_ptr<string> description_ {};
    // The destination port. Valid values: **-1** or **1** to **65535**.
    // 
    // Matches traffic whose port number falls within the destination port range. If this parameter is not specified, traffic to any destination port is matched.
    // 
    // The port range is specified in the following formats:
    // 
    // - 80: specifies port 80.
    // - 80/80: specifies port 80.
    // - 1/200: specifies ports 1 to 200.
    // - -1/-1: specifies all ports.
    shared_ptr<string> destPortRange_ {};
    // The destination CIDR block of the route entry. Both IPv4 and IPv6 addresses are supported.
    shared_ptr<string> destinationCidr_ {};
    // Specifies whether to perform a dry run on the request. Valid values:
    // 
    // - **true**: performs a dry run and does not create the routing rule entry in the policy route table. The system checks whether the required parameters are specified, the request format is valid, and the service limits are met. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): performs a dry run and creates the routing rule entry in the policy route table if the request passes the dry run.
    shared_ptr<bool> dryRun_ {};
    // The Differentiated Services Code Point (DSCP) value of the traffic packet to be matched. Valid values: **0** to **63**.
    // 
    // The DSCP value range is specified in the following formats:
    // 
    // - 1: matches traffic with a DSCP value of 1.
    // - 1/10: matches traffic with a DSCP value from 1 to 10.
    // - -1/-1: matches traffic with any DSCP value.
    shared_ptr<string> dscp_ {};
    // The name of the policy-based routing rule.
    shared_ptr<string> name_ {};
    // The instance ID of the policy-based routing table.
    // 
    // This parameter is required.
    shared_ptr<string> policyTableId_ {};
    // The priority of the policy-based routing rule. Valid values: **1** to **100**.
    // 
    // The priority of each policy-based routing rule in a policy route table of a transit router must be unique. A smaller value indicates a higher priority.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The protocol type of the traffic packet.
    // 
    // Traffic classification rules support matching traffic of various protocol types, such as **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more protocol types, log on to the [Cloud Enterprise Network (CEN) console](https://cen.console.aliyun.com/cen/list).
    shared_ptr<string> protocol_ {};
    // The source CIDR block. The source CIDR block must be in CIDR format. Example: 192.168.1.0/24.
    shared_ptr<string> sourceCidr_ {};
    // The source port. Valid values: **-1** or **1** to **65535**.
    // 
    // Matches traffic whose port number falls within the source port range. If this parameter is not specified, traffic from any source port is matched.
    // 
    // The port range is specified in the following formats:
    // 
    // - 80: specifies port 80.
    // - 80/80: specifies port 80.
    // - 1/200: specifies ports 1 to 200.
    // - -1/-1: specifies all ports.
    shared_ptr<string> sourcePortRange_ {};
    // The destination route table.
    // 
    // This parameter is required.
    shared_ptr<string> targetRouteTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
