// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODYPEERVPCLISTPEERVPCS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYINTRANETLINKEDVPCPEERRESPONSEBODYPEERVPCLISTPEERVPCS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs& obj) { 
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs& obj) { 
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs() = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs(const ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs &) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs(ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs &&) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs() = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs& operator=(const ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs &) = default ;
    ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs& operator=(ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->region_ != nullptr
        && this->status_ != nullptr && this->vpcId_ != nullptr; };
    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGatewayIntranetLinkedVpcPeerResponseBodyPeerVpcListPeerVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The region where the VPC peer resides.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the VPC peer.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
