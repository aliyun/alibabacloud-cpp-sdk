// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYINTRANETLINKEDVPCPEERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYINTRANETLINKEDVPCPEERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteGatewayIntranetLinkedVpcPeerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayIntranetLinkedVpcPeerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PeerVpcs, peerVpcs_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayIntranetLinkedVpcPeerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PeerVpcs, peerVpcs_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DeleteGatewayIntranetLinkedVpcPeerRequest() = default ;
    DeleteGatewayIntranetLinkedVpcPeerRequest(const DeleteGatewayIntranetLinkedVpcPeerRequest &) = default ;
    DeleteGatewayIntranetLinkedVpcPeerRequest(DeleteGatewayIntranetLinkedVpcPeerRequest &&) = default ;
    DeleteGatewayIntranetLinkedVpcPeerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayIntranetLinkedVpcPeerRequest() = default ;
    DeleteGatewayIntranetLinkedVpcPeerRequest& operator=(const DeleteGatewayIntranetLinkedVpcPeerRequest &) = default ;
    DeleteGatewayIntranetLinkedVpcPeerRequest& operator=(DeleteGatewayIntranetLinkedVpcPeerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PeerVpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PeerVpcs& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, PeerVpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      PeerVpcs() = default ;
      PeerVpcs(const PeerVpcs &) = default ;
      PeerVpcs(PeerVpcs &&) = default ;
      PeerVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PeerVpcs() = default ;
      PeerVpcs& operator=(const PeerVpcs &) = default ;
      PeerVpcs& operator=(PeerVpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->region_ == nullptr
        && this->vpcId_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline PeerVpcs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline PeerVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The region where the VPC peer resides.
      shared_ptr<string> region_ {};
      // The ID of the VPC peer.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->peerVpcs_ == nullptr
        && this->vpcId_ == nullptr; };
    // peerVpcs Field Functions 
    bool hasPeerVpcs() const { return this->peerVpcs_ != nullptr;};
    void deletePeerVpcs() { this->peerVpcs_ = nullptr;};
    inline const vector<DeleteGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> & getPeerVpcs() const { DARABONBA_PTR_GET_CONST(peerVpcs_, vector<DeleteGatewayIntranetLinkedVpcPeerRequest::PeerVpcs>) };
    inline vector<DeleteGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> getPeerVpcs() { DARABONBA_PTR_GET(peerVpcs_, vector<DeleteGatewayIntranetLinkedVpcPeerRequest::PeerVpcs>) };
    inline DeleteGatewayIntranetLinkedVpcPeerRequest& setPeerVpcs(const vector<DeleteGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> & peerVpcs) { DARABONBA_PTR_SET_VALUE(peerVpcs_, peerVpcs) };
    inline DeleteGatewayIntranetLinkedVpcPeerRequest& setPeerVpcs(vector<DeleteGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> && peerVpcs) { DARABONBA_PTR_SET_RVALUE(peerVpcs_, peerVpcs) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DeleteGatewayIntranetLinkedVpcPeerRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The VPC peer.
    shared_ptr<vector<DeleteGatewayIntranetLinkedVpcPeerRequest::PeerVpcs>> peerVpcs_ {};
    // The ID of the associated VPC. To obtain the VPC ID, see [ListGatewayIntranetLinkedVpc](https://help.aliyun.com/document_detail/2621223.html).
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
