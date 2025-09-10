// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGATEWAYINTRANETLINKEDVPCPEERREQUESTPEERVPCS_HPP_
#define ALIBABACLOUD_MODELS_CREATEGATEWAYINTRANETLINKEDVPCPEERREQUESTPEERVPCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs() = default ;
    CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs(const CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs &) = default ;
    CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs(CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs &&) = default ;
    CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs() = default ;
    CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs& operator=(const CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs &) = default ;
    CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs& operator=(CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr
        && this->vpcId_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateGatewayIntranetLinkedVpcPeerRequestPeerVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The region where the VPC peer resides.
    std::shared_ptr<string> region_ = nullptr;
    // The ID of the VPC peer. To obtain the VPC ID, see [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
