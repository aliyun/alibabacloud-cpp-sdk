// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODYPEERVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODYPEERVPCLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(PeerVpcs, peerVpcs_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(PeerVpcs, peerVpcs_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList() = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList(const ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList &) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList(ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList &&) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList() = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList& operator=(const ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList &) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList& operator=(ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->peerVpcs_ == nullptr
        && return this->vpcId_ == nullptr; };
    // peerVpcs Field Functions 
    bool hasPeerVpcs() const { return this->peerVpcs_ != nullptr;};
    void deletePeerVpcs() { this->peerVpcs_ = nullptr;};
    inline const vector<Models::ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs> & peerVpcs() const { DARABONBA_PTR_GET_CONST(peerVpcs_, vector<Models::ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs>) };
    inline vector<Models::ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs> peerVpcs() { DARABONBA_PTR_GET(peerVpcs_, vector<Models::ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs>) };
    inline ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList& setPeerVpcs(const vector<Models::ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs> & peerVpcs) { DARABONBA_PTR_SET_VALUE(peerVpcs_, peerVpcs) };
    inline ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList& setPeerVpcs(vector<Models::ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs> && peerVpcs) { DARABONBA_PTR_SET_RVALUE(peerVpcs_, peerVpcs) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The IDs of the VPC peers.
    std::shared_ptr<vector<Models::ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs>> peerVpcs_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
