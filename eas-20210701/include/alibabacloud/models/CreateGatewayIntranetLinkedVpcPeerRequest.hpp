// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYINTRANETLINKEDVPCPEERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYINTRANETLINKEDVPCPEERREQUEST_HPP_
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
  class CreateGatewayIntranetLinkedVpcPeerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayIntranetLinkedVpcPeerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PeerVpcs, peerVpcs_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayIntranetLinkedVpcPeerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PeerVpcs, peerVpcs_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateGatewayIntranetLinkedVpcPeerRequest() = default ;
    CreateGatewayIntranetLinkedVpcPeerRequest(const CreateGatewayIntranetLinkedVpcPeerRequest &) = default ;
    CreateGatewayIntranetLinkedVpcPeerRequest(CreateGatewayIntranetLinkedVpcPeerRequest &&) = default ;
    CreateGatewayIntranetLinkedVpcPeerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayIntranetLinkedVpcPeerRequest() = default ;
    CreateGatewayIntranetLinkedVpcPeerRequest& operator=(const CreateGatewayIntranetLinkedVpcPeerRequest &) = default ;
    CreateGatewayIntranetLinkedVpcPeerRequest& operator=(CreateGatewayIntranetLinkedVpcPeerRequest &&) = default ;
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
      // The ID of the VPC peer. To obtain the VPC ID, see [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html).
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->peerVpcs_ == nullptr
        && this->vpcId_ == nullptr; };
    // peerVpcs Field Functions 
    bool hasPeerVpcs() const { return this->peerVpcs_ != nullptr;};
    void deletePeerVpcs() { this->peerVpcs_ = nullptr;};
    inline const vector<CreateGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> & getPeerVpcs() const { DARABONBA_PTR_GET_CONST(peerVpcs_, vector<CreateGatewayIntranetLinkedVpcPeerRequest::PeerVpcs>) };
    inline vector<CreateGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> getPeerVpcs() { DARABONBA_PTR_GET(peerVpcs_, vector<CreateGatewayIntranetLinkedVpcPeerRequest::PeerVpcs>) };
    inline CreateGatewayIntranetLinkedVpcPeerRequest& setPeerVpcs(const vector<CreateGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> & peerVpcs) { DARABONBA_PTR_SET_VALUE(peerVpcs_, peerVpcs) };
    inline CreateGatewayIntranetLinkedVpcPeerRequest& setPeerVpcs(vector<CreateGatewayIntranetLinkedVpcPeerRequest::PeerVpcs> && peerVpcs) { DARABONBA_PTR_SET_RVALUE(peerVpcs_, peerVpcs) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateGatewayIntranetLinkedVpcPeerRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The list of VPC peers.
    shared_ptr<vector<CreateGatewayIntranetLinkedVpcPeerRequest::PeerVpcs>> peerVpcs_ {};
    // The VPC ID. To obtain the VPC ID, see [ListGatewayIntranetLinkedVpc](https://help.aliyun.com/document_detail/2621223.html).
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
