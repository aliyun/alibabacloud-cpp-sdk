// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODYVPCPEERCONNECTSVPC_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODYVPCPEERCONNECTSVPC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4Cidrs, ipv4Cidrs_);
      DARABONBA_PTR_TO_JSON(Ipv6Cidrs, ipv6Cidrs_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4Cidrs, ipv4Cidrs_);
      DARABONBA_PTR_FROM_JSON(Ipv6Cidrs, ipv6Cidrs_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc() = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc(const ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc &) = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc(ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc &&) = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc() = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& operator=(const ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc &) = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& operator=(ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv4Cidrs_ != nullptr
        && this->ipv6Cidrs_ != nullptr && this->vpcId_ != nullptr; };
    // ipv4Cidrs Field Functions 
    bool hasIpv4Cidrs() const { return this->ipv4Cidrs_ != nullptr;};
    void deleteIpv4Cidrs() { this->ipv4Cidrs_ = nullptr;};
    inline const vector<string> & ipv4Cidrs() const { DARABONBA_PTR_GET_CONST(ipv4Cidrs_, vector<string>) };
    inline vector<string> ipv4Cidrs() { DARABONBA_PTR_GET(ipv4Cidrs_, vector<string>) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& setIpv4Cidrs(const vector<string> & ipv4Cidrs) { DARABONBA_PTR_SET_VALUE(ipv4Cidrs_, ipv4Cidrs) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& setIpv4Cidrs(vector<string> && ipv4Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv4Cidrs_, ipv4Cidrs) };


    // ipv6Cidrs Field Functions 
    bool hasIpv6Cidrs() const { return this->ipv6Cidrs_ != nullptr;};
    void deleteIpv6Cidrs() { this->ipv6Cidrs_ = nullptr;};
    inline const vector<string> & ipv6Cidrs() const { DARABONBA_PTR_GET_CONST(ipv6Cidrs_, vector<string>) };
    inline vector<string> ipv6Cidrs() { DARABONBA_PTR_GET(ipv6Cidrs_, vector<string>) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& setIpv6Cidrs(const vector<string> & ipv6Cidrs) { DARABONBA_PTR_SET_VALUE(ipv6Cidrs_, ipv6Cidrs) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& setIpv6Cidrs(vector<string> && ipv6Cidrs) { DARABONBA_PTR_SET_RVALUE(ipv6Cidrs_, ipv6Cidrs) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The CIDR block of the requester VPC.
    std::shared_ptr<vector<string>> ipv4Cidrs_ = nullptr;
    // The IPv6 CIDR block of the requester VPC.
    std::shared_ptr<vector<string>> ipv6Cidrs_ = nullptr;
    // The ID of the requester VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
