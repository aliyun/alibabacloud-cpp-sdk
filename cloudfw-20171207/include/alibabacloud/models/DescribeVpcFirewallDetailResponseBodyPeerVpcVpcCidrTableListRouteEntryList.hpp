// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODYPEERVPCVPCCIDRTABLELISTROUTEENTRYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDETAILRESPONSEBODYPEERVPCVPCCIDRTABLELISTROUTEENTRYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidr, destinationCidr_);
      DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
    };
    DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList() = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList(const DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList &) = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList(DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList &&) = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList() = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList& operator=(const DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList &) = default ;
    DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList& operator=(DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationCidr_ != nullptr
        && this->nextHopInstanceId_ != nullptr; };
    // destinationCidr Field Functions 
    bool hasDestinationCidr() const { return this->destinationCidr_ != nullptr;};
    void deleteDestinationCidr() { this->destinationCidr_ = nullptr;};
    inline string destinationCidr() const { DARABONBA_PTR_GET_DEFAULT(destinationCidr_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList& setDestinationCidr(string destinationCidr) { DARABONBA_PTR_SET_VALUE(destinationCidr_, destinationCidr) };


    // nextHopInstanceId Field Functions 
    bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
    void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
    inline string nextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
    inline DescribeVpcFirewallDetailResponseBodyPeerVpcVpcCidrTableListRouteEntryList& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


  protected:
    // The destination CIDR block of the peer VPC.
    std::shared_ptr<string> destinationCidr_ = nullptr;
    // The instance ID of the next hop for the peer VPC.
    std::shared_ptr<string> nextHopInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
