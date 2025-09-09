// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCPEERCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCPEERCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVpcPeerConnectionRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class CreateVpcPeerConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptingAliUid, acceptingAliUid_);
      DARABONBA_PTR_TO_JSON(AcceptingRegionId, acceptingRegionId_);
      DARABONBA_PTR_TO_JSON(AcceptingVpcId, acceptingVpcId_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(LinkType, linkType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcPeerConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptingAliUid, acceptingAliUid_);
      DARABONBA_PTR_FROM_JSON(AcceptingRegionId, acceptingRegionId_);
      DARABONBA_PTR_FROM_JSON(AcceptingVpcId, acceptingVpcId_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(LinkType, linkType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateVpcPeerConnectionRequest() = default ;
    CreateVpcPeerConnectionRequest(const CreateVpcPeerConnectionRequest &) = default ;
    CreateVpcPeerConnectionRequest(CreateVpcPeerConnectionRequest &&) = default ;
    CreateVpcPeerConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcPeerConnectionRequest() = default ;
    CreateVpcPeerConnectionRequest& operator=(const CreateVpcPeerConnectionRequest &) = default ;
    CreateVpcPeerConnectionRequest& operator=(CreateVpcPeerConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptingAliUid_ != nullptr
        && this->acceptingRegionId_ != nullptr && this->acceptingVpcId_ != nullptr && this->bandwidth_ != nullptr && this->clientToken_ != nullptr && this->description_ != nullptr
        && this->dryRun_ != nullptr && this->linkType_ != nullptr && this->name_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->tag_ != nullptr && this->vpcId_ != nullptr; };
    // acceptingAliUid Field Functions 
    bool hasAcceptingAliUid() const { return this->acceptingAliUid_ != nullptr;};
    void deleteAcceptingAliUid() { this->acceptingAliUid_ = nullptr;};
    inline int64_t acceptingAliUid() const { DARABONBA_PTR_GET_DEFAULT(acceptingAliUid_, 0L) };
    inline CreateVpcPeerConnectionRequest& setAcceptingAliUid(int64_t acceptingAliUid) { DARABONBA_PTR_SET_VALUE(acceptingAliUid_, acceptingAliUid) };


    // acceptingRegionId Field Functions 
    bool hasAcceptingRegionId() const { return this->acceptingRegionId_ != nullptr;};
    void deleteAcceptingRegionId() { this->acceptingRegionId_ = nullptr;};
    inline string acceptingRegionId() const { DARABONBA_PTR_GET_DEFAULT(acceptingRegionId_, "") };
    inline CreateVpcPeerConnectionRequest& setAcceptingRegionId(string acceptingRegionId) { DARABONBA_PTR_SET_VALUE(acceptingRegionId_, acceptingRegionId) };


    // acceptingVpcId Field Functions 
    bool hasAcceptingVpcId() const { return this->acceptingVpcId_ != nullptr;};
    void deleteAcceptingVpcId() { this->acceptingVpcId_ = nullptr;};
    inline string acceptingVpcId() const { DARABONBA_PTR_GET_DEFAULT(acceptingVpcId_, "") };
    inline CreateVpcPeerConnectionRequest& setAcceptingVpcId(string acceptingVpcId) { DARABONBA_PTR_SET_VALUE(acceptingVpcId_, acceptingVpcId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateVpcPeerConnectionRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpcPeerConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVpcPeerConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpcPeerConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // linkType Field Functions 
    bool hasLinkType() const { return this->linkType_ != nullptr;};
    void deleteLinkType() { this->linkType_ = nullptr;};
    inline string linkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, "") };
    inline CreateVpcPeerConnectionRequest& setLinkType(string linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVpcPeerConnectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpcPeerConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcPeerConnectionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpcPeerConnectionRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpcPeerConnectionRequestTag>) };
    inline vector<CreateVpcPeerConnectionRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateVpcPeerConnectionRequestTag>) };
    inline CreateVpcPeerConnectionRequest& setTag(const vector<CreateVpcPeerConnectionRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpcPeerConnectionRequest& setTag(vector<CreateVpcPeerConnectionRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVpcPeerConnectionRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the Alibaba Cloud account to which the accepter VPC belongs.
    // 
    // *   To create a VPC peering connection within your Alibaba Cloud account, enter the ID of your Alibaba Cloud account.
    // *   To create a VPC peering connection between your Alibaba Cloud account and another Alibaba Cloud account, enter the ID of the peer Alibaba Cloud account.
    // 
    // >  If the accepter is a RAM user, set **AcceptingAliUid** to the ID of the Alibaba Cloud account that created the RAM user.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> acceptingAliUid_ = nullptr;
    // The region ID of the accepter VPC of the VPC peering connection that you want to create.
    // 
    // *   To create an intra-region VPC peering connection, enter a region ID that is the same as that of the requester VPC.
    // *   To create an inter-region VPC peering connection, enter a region ID that is different from that of the requester VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> acceptingRegionId_ = nullptr;
    // The ID of the accepter VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> acceptingVpcId_ = nullptr;
    // The bandwidth of the VPC peering connection. Unit: Mbit/s. The value must be an integer greater than 0. Before you specify this parameter, make sure that you create an inter-region VPC peering connection.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the VPC peering connection.
    // 
    // The description must be 2 to 256 characters in length. The description must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The link type of the VPC peering connection that you want to create. Valid values:
    // 
    // - Platinum.
    // 
    // - Gold: default value.
    // 
    // > 
    // > - If you need to specify this parameter, ensure that the VPC peering connection is an inter-region connection.
    std::shared_ptr<string> linkType_ = nullptr;
    // The name of the VPC peering connection.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, underscores (_), and hyphens (-). It must start with a letter.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the region where you want to create a VPC peering connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.html).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateVpcPeerConnectionRequestTag>> tag_ = nullptr;
    // The ID of the requester VPC.
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
