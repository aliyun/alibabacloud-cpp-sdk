// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEGATEWAYINTRANETLINKEDVPCPEERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEGATEWAYINTRANETLINKEDVPCPEERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DeleteGatewayIntranetLinkedVpcPeerShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteGatewayIntranetLinkedVpcPeerShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PeerVpcs, peerVpcsShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteGatewayIntranetLinkedVpcPeerShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PeerVpcs, peerVpcsShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DeleteGatewayIntranetLinkedVpcPeerShrinkRequest() = default ;
    DeleteGatewayIntranetLinkedVpcPeerShrinkRequest(const DeleteGatewayIntranetLinkedVpcPeerShrinkRequest &) = default ;
    DeleteGatewayIntranetLinkedVpcPeerShrinkRequest(DeleteGatewayIntranetLinkedVpcPeerShrinkRequest &&) = default ;
    DeleteGatewayIntranetLinkedVpcPeerShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteGatewayIntranetLinkedVpcPeerShrinkRequest() = default ;
    DeleteGatewayIntranetLinkedVpcPeerShrinkRequest& operator=(const DeleteGatewayIntranetLinkedVpcPeerShrinkRequest &) = default ;
    DeleteGatewayIntranetLinkedVpcPeerShrinkRequest& operator=(DeleteGatewayIntranetLinkedVpcPeerShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->peerVpcsShrink_ != nullptr
        && this->vpcId_ != nullptr; };
    // peerVpcsShrink Field Functions 
    bool hasPeerVpcsShrink() const { return this->peerVpcsShrink_ != nullptr;};
    void deletePeerVpcsShrink() { this->peerVpcsShrink_ = nullptr;};
    inline string peerVpcsShrink() const { DARABONBA_PTR_GET_DEFAULT(peerVpcsShrink_, "") };
    inline DeleteGatewayIntranetLinkedVpcPeerShrinkRequest& setPeerVpcsShrink(string peerVpcsShrink) { DARABONBA_PTR_SET_VALUE(peerVpcsShrink_, peerVpcsShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DeleteGatewayIntranetLinkedVpcPeerShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The VPC peer.
    std::shared_ptr<string> peerVpcsShrink_ = nullptr;
    // The ID of the associated VPC. To obtain the VPC ID, see [ListGatewayIntranetLinkedVpc](https://help.aliyun.com/document_detail/2621223.html).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
