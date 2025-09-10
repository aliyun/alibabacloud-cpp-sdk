// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetLinkedVpcPeerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetLinkedVpcPeerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetLinkedVpcPeerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListGatewayIntranetLinkedVpcPeerRequest() = default ;
    ListGatewayIntranetLinkedVpcPeerRequest(const ListGatewayIntranetLinkedVpcPeerRequest &) = default ;
    ListGatewayIntranetLinkedVpcPeerRequest(ListGatewayIntranetLinkedVpcPeerRequest &&) = default ;
    ListGatewayIntranetLinkedVpcPeerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetLinkedVpcPeerRequest() = default ;
    ListGatewayIntranetLinkedVpcPeerRequest& operator=(const ListGatewayIntranetLinkedVpcPeerRequest &) = default ;
    ListGatewayIntranetLinkedVpcPeerRequest& operator=(ListGatewayIntranetLinkedVpcPeerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vpcId_ != nullptr; };
    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGatewayIntranetLinkedVpcPeerRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the associated VPC. To obtain the VPC ID, see [ListGatewayIntranetLinkedVpc](https://help.aliyun.com/document_detail/2621223.html).
    // 
    // *   If you specify a VPC ID, only VPC peers corresponding to the ID are queried.
    // *   Otherwise, all VPC peers are queried.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
