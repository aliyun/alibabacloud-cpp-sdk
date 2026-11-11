// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYBASEDROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTERPOLICYBASEDROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeTransitRouterPolicyBasedRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouterPolicyBasedRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyBasedRoutes, policyBasedRoutes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouterPolicyBasedRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyBasedRoutes, policyBasedRoutes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTransitRouterPolicyBasedRoutesResponseBody() = default ;
    DescribeTransitRouterPolicyBasedRoutesResponseBody(const DescribeTransitRouterPolicyBasedRoutesResponseBody &) = default ;
    DescribeTransitRouterPolicyBasedRoutesResponseBody(DescribeTransitRouterPolicyBasedRoutesResponseBody &&) = default ;
    DescribeTransitRouterPolicyBasedRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouterPolicyBasedRoutesResponseBody() = default ;
    DescribeTransitRouterPolicyBasedRoutesResponseBody& operator=(const DescribeTransitRouterPolicyBasedRoutesResponseBody &) = default ;
    DescribeTransitRouterPolicyBasedRoutesResponseBody& operator=(DescribeTransitRouterPolicyBasedRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PolicyBasedRoutes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PolicyBasedRoutes& obj) { 
        DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestPortRange, destPortRange_);
        DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_TO_JSON(Dscp, dscp_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PolicyBasedRouteId, policyBasedRouteId_);
        DARABONBA_PTR_TO_JSON(PolicyTableId, policyTableId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_TO_JSON(SourcePortRange, sourcePortRange_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TargetRouteTableId, targetRouteTableId_);
      };
      friend void from_json(const Darabonba::Json& j, PolicyBasedRoutes& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestPortRange, destPortRange_);
        DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
        DARABONBA_PTR_FROM_JSON(Dscp, dscp_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PolicyBasedRouteId, policyBasedRouteId_);
        DARABONBA_PTR_FROM_JSON(PolicyTableId, policyTableId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(SourceCidr, sourceCidr_);
        DARABONBA_PTR_FROM_JSON(SourcePortRange, sourcePortRange_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TargetRouteTableId, targetRouteTableId_);
      };
      PolicyBasedRoutes() = default ;
      PolicyBasedRoutes(const PolicyBasedRoutes &) = default ;
      PolicyBasedRoutes(PolicyBasedRoutes &&) = default ;
      PolicyBasedRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PolicyBasedRoutes() = default ;
      PolicyBasedRoutes& operator=(const PolicyBasedRoutes &) = default ;
      PolicyBasedRoutes& operator=(PolicyBasedRoutes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->description_ == nullptr && this->destPortRange_ == nullptr && this->destinationCidr_ == nullptr && this->dscp_ == nullptr && this->name_ == nullptr
        && this->policyBasedRouteId_ == nullptr && this->policyTableId_ == nullptr && this->priority_ == nullptr && this->protocol_ == nullptr && this->sourceCidr_ == nullptr
        && this->sourcePortRange_ == nullptr && this->status_ == nullptr && this->targetRouteTableId_ == nullptr; };
      // addressFamily Field Functions 
      bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
      void deleteAddressFamily() { this->addressFamily_ = nullptr;};
      inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
      inline PolicyBasedRoutes& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PolicyBasedRoutes& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destPortRange Field Functions 
      bool hasDestPortRange() const { return this->destPortRange_ != nullptr;};
      void deleteDestPortRange() { this->destPortRange_ = nullptr;};
      inline string getDestPortRange() const { DARABONBA_PTR_GET_DEFAULT(destPortRange_, "") };
      inline PolicyBasedRoutes& setDestPortRange(string destPortRange) { DARABONBA_PTR_SET_VALUE(destPortRange_, destPortRange) };


      // destinationCidr Field Functions 
      bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
      void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
      inline string getDestinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
      inline PolicyBasedRoutes& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


      // dscp Field Functions 
      bool hasDscp() const { return this->dscp_ != nullptr;};
      void deleteDscp() { this->dscp_ = nullptr;};
      inline string getDscp() const { DARABONBA_PTR_GET_DEFAULT(dscp_, "") };
      inline PolicyBasedRoutes& setDscp(string dscp) { DARABONBA_PTR_SET_VALUE(dscp_, dscp) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PolicyBasedRoutes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // policyBasedRouteId Field Functions 
      bool hasPolicyBasedRouteId() const { return this->policyBasedRouteId_ != nullptr;};
      void deletePolicyBasedRouteId() { this->policyBasedRouteId_ = nullptr;};
      inline string getPolicyBasedRouteId() const { DARABONBA_PTR_GET_DEFAULT(policyBasedRouteId_, "") };
      inline PolicyBasedRoutes& setPolicyBasedRouteId(string policyBasedRouteId) { DARABONBA_PTR_SET_VALUE(policyBasedRouteId_, policyBasedRouteId) };


      // policyTableId Field Functions 
      bool hasPolicyTableId() const { return this->policyTableId_ != nullptr;};
      void deletePolicyTableId() { this->policyTableId_ = nullptr;};
      inline string getPolicyTableId() const { DARABONBA_PTR_GET_DEFAULT(policyTableId_, "") };
      inline PolicyBasedRoutes& setPolicyTableId(string policyTableId) { DARABONBA_PTR_SET_VALUE(policyTableId_, policyTableId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline PolicyBasedRoutes& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline PolicyBasedRoutes& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // sourceCidr Field Functions 
      bool hasSourceCidr() const { return this->sourceCidr_ != nullptr;};
      void deleteSourceCidr() { this->sourceCidr_ = nullptr;};
      inline string getSourceCidr() const { DARABONBA_PTR_GET_DEFAULT(sourceCidr_, "") };
      inline PolicyBasedRoutes& setSourceCidr(string sourceCidr) { DARABONBA_PTR_SET_VALUE(sourceCidr_, sourceCidr) };


      // sourcePortRange Field Functions 
      bool hasSourcePortRange() const { return this->sourcePortRange_ != nullptr;};
      void deleteSourcePortRange() { this->sourcePortRange_ = nullptr;};
      inline string getSourcePortRange() const { DARABONBA_PTR_GET_DEFAULT(sourcePortRange_, "") };
      inline PolicyBasedRoutes& setSourcePortRange(string sourcePortRange) { DARABONBA_PTR_SET_VALUE(sourcePortRange_, sourcePortRange) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PolicyBasedRoutes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // targetRouteTableId Field Functions 
      bool hasTargetRouteTableId() const { return this->targetRouteTableId_ != nullptr;};
      void deleteTargetRouteTableId() { this->targetRouteTableId_ = nullptr;};
      inline string getTargetRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(targetRouteTableId_, "") };
      inline PolicyBasedRoutes& setTargetRouteTableId(string targetRouteTableId) { DARABONBA_PTR_SET_VALUE(targetRouteTableId_, targetRouteTableId) };


    protected:
      // The address family. Valid values:
      // 
      // - IPv4
      // - IPv6
      shared_ptr<string> addressFamily_ {};
      // The description of the policy-based route table.
      shared_ptr<string> description_ {};
      // The destination port. Valid values: **-1** or **1** to **65535**.
      // 
      // Matches traffic whose port numbers fall within the destination port range. If this parameter is not specified, traffic to any destination port is matched.
      // 
      // The port range format is described as follows:
      // 
      // - 80: port 80.
      // - 80/80: port 80.
      // - 1/200: ports 1 to 200.
      // - -1/-1: all ports.
      shared_ptr<string> destPortRange_ {};
      // The destination CIDR block.
      shared_ptr<string> destinationCidr_ {};
      // The Differentiated Services Code Point (DSCP) value of the traffic packets to match. Valid values: **0** to **63**.
      // 
      // The DSCP value format is described as follows:
      // 
      // - 1: matches traffic with a DSCP value of 1.
      // - 1/10: matches traffic with DSCP values from 1 to 10.
      // - -1/-1: matches traffic with any DSCP value.
      shared_ptr<string> dscp_ {};
      // The name of the policy-based route rule.
      // 
      // The name can be empty or 1 to 128 characters in length. It cannot start with http:// or https://.
      shared_ptr<string> name_ {};
      // The instance ID of the policy-based routing rule.
      shared_ptr<string> policyBasedRouteId_ {};
      // The instance ID of the policy-based routing table.
      shared_ptr<string> policyTableId_ {};
      // The priority of the policy-based route. Valid values: **1** to **100**.
      // 
      // The priority of each policy-based route in a policy-based route table of a transit router must be unique. A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The protocol type of the traffic packets.
      // 
      // Traffic classification rules support matching traffic of various protocol types, such as **HTTP**, **HTTPS**, **TCP**, **UDP**, **SSH**, and **Telnet**. For more protocol types, log on to the [Cloud Enterprise Network (CEN) console](https://cen.console.aliyun.com/cen/list).
      shared_ptr<string> protocol_ {};
      // The source CIDR block.
      shared_ptr<string> sourceCidr_ {};
      // The source port. Valid values: **-1** or **1** to **65535**.
      // 
      // Matches traffic whose port numbers fall within the source port range. If this parameter is not specified, traffic from any source port is matched.
      // 
      // The port range format is described as follows:
      // 
      // - 80: port 80.
      // - 80/80: port 80.
      // - 1/200: ports 1 to 200.
      // - -1/-1: all ports.
      shared_ptr<string> sourcePortRange_ {};
      // The status of the policy-based route. Valid values:
      // 
      // - **Creating**: The policy-based route is being created.
      // - **Active**: The policy-based route is available.
      // - **Deleting**: The policy-based route is being deleted.
      shared_ptr<string> status_ {};
      // The destination route table.
      shared_ptr<string> targetRouteTableId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->policyBasedRoutes_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeTransitRouterPolicyBasedRoutesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTransitRouterPolicyBasedRoutesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyBasedRoutes Field Functions 
    bool hasPolicyBasedRoutes() const { return this->policyBasedRoutes_ != nullptr;};
    void deletePolicyBasedRoutes() { this->policyBasedRoutes_ = nullptr;};
    inline const vector<DescribeTransitRouterPolicyBasedRoutesResponseBody::PolicyBasedRoutes> & getPolicyBasedRoutes() const { DARABONBA_PTR_GET_CONST(policyBasedRoutes_, vector<DescribeTransitRouterPolicyBasedRoutesResponseBody::PolicyBasedRoutes>) };
    inline vector<DescribeTransitRouterPolicyBasedRoutesResponseBody::PolicyBasedRoutes> getPolicyBasedRoutes() { DARABONBA_PTR_GET(policyBasedRoutes_, vector<DescribeTransitRouterPolicyBasedRoutesResponseBody::PolicyBasedRoutes>) };
    inline DescribeTransitRouterPolicyBasedRoutesResponseBody& setPolicyBasedRoutes(const vector<DescribeTransitRouterPolicyBasedRoutesResponseBody::PolicyBasedRoutes> & policyBasedRoutes) { DARABONBA_PTR_SET_VALUE(policyBasedRoutes_, policyBasedRoutes) };
    inline DescribeTransitRouterPolicyBasedRoutesResponseBody& setPolicyBasedRoutes(vector<DescribeTransitRouterPolicyBasedRoutesResponseBody::PolicyBasedRoutes> && policyBasedRoutes) { DARABONBA_PTR_SET_RVALUE(policyBasedRoutes_, policyBasedRoutes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTransitRouterPolicyBasedRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTransitRouterPolicyBasedRoutesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned per page. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If **NextToken** is empty, no next query is available.
    // - If **NextToken** returns a value, the value is the token used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The list of policy-based route rules.
    shared_ptr<vector<DescribeTransitRouterPolicyBasedRoutesResponseBody::PolicyBasedRoutes>> policyBasedRoutes_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
