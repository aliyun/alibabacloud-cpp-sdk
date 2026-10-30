// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCPEERCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCPEERCONNECTIONREQUEST_HPP_
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
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
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
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource. You must specify at least one tag key and can specify up to 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. You must specify at least one tag value and can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->acceptingAliUid_ == nullptr
        && this->acceptingRegionId_ == nullptr && this->acceptingVpcId_ == nullptr && this->bandwidth_ == nullptr && this->clientToken_ == nullptr && this->description_ == nullptr
        && this->dryRun_ == nullptr && this->enableJumboFrame_ == nullptr && this->linkType_ == nullptr && this->name_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->tag_ == nullptr && this->vpcId_ == nullptr; };
    // acceptingAliUid Field Functions 
    bool hasAcceptingAliUid() const { return this->acceptingAliUid_ != nullptr;};
    void deleteAcceptingAliUid() { this->acceptingAliUid_ = nullptr;};
    inline int64_t getAcceptingAliUid() const { DARABONBA_PTR_GET_DEFAULT(acceptingAliUid_, 0L) };
    inline CreateVpcPeerConnectionRequest& setAcceptingAliUid(int64_t acceptingAliUid) { DARABONBA_PTR_SET_VALUE(acceptingAliUid_, acceptingAliUid) };


    // acceptingRegionId Field Functions 
    bool hasAcceptingRegionId() const { return this->acceptingRegionId_ != nullptr;};
    void deleteAcceptingRegionId() { this->acceptingRegionId_ = nullptr;};
    inline string getAcceptingRegionId() const { DARABONBA_PTR_GET_DEFAULT(acceptingRegionId_, "") };
    inline CreateVpcPeerConnectionRequest& setAcceptingRegionId(string acceptingRegionId) { DARABONBA_PTR_SET_VALUE(acceptingRegionId_, acceptingRegionId) };


    // acceptingVpcId Field Functions 
    bool hasAcceptingVpcId() const { return this->acceptingVpcId_ != nullptr;};
    void deleteAcceptingVpcId() { this->acceptingVpcId_ = nullptr;};
    inline string getAcceptingVpcId() const { DARABONBA_PTR_GET_DEFAULT(acceptingVpcId_, "") };
    inline CreateVpcPeerConnectionRequest& setAcceptingVpcId(string acceptingVpcId) { DARABONBA_PTR_SET_VALUE(acceptingVpcId_, acceptingVpcId) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateVpcPeerConnectionRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVpcPeerConnectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVpcPeerConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpcPeerConnectionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline CreateVpcPeerConnectionRequest& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // linkType Field Functions 
    bool hasLinkType() const { return this->linkType_ != nullptr;};
    void deleteLinkType() { this->linkType_ = nullptr;};
    inline string getLinkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, "") };
    inline CreateVpcPeerConnectionRequest& setLinkType(string linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateVpcPeerConnectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpcPeerConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVpcPeerConnectionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVpcPeerConnectionRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVpcPeerConnectionRequest::Tag>) };
    inline vector<CreateVpcPeerConnectionRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVpcPeerConnectionRequest::Tag>) };
    inline CreateVpcPeerConnectionRequest& setTag(const vector<CreateVpcPeerConnectionRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVpcPeerConnectionRequest& setTag(vector<CreateVpcPeerConnectionRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVpcPeerConnectionRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the Alibaba Cloud account to which the acceptor of the VPC peering connection belongs.
    // 
    // - If you enter your own Alibaba Cloud account ID, a same-account VPC peering connection is created.
    // 
    // - If you enter the ID of another Alibaba Cloud account, a cross-account VPC peering connection is created.
    //    
    // > If the acceptor account is a Resource Access Management (RAM) user, you must enter the ID of the Alibaba Cloud account to which the RAM user belongs in **AcceptingAliUid**.
    // 
    // This parameter is required.
    shared_ptr<int64_t> acceptingAliUid_ {};
    // The ID of the region where the acceptor of the VPC peering connection is deployed.
    // 
    // - To create an intra-region VPC peering connection, enter the same region ID as the initiator.
    // 
    // - To create an inter-region VPC peering connection, enter a region ID different from that of the initiator.
    // 
    // This parameter is required.
    shared_ptr<string> acceptingRegionId_ {};
    // The ID of the VPC that acts as the acceptor of the VPC peering connection.
    // 
    // This parameter is required.
    shared_ptr<string> acceptingVpcId_ {};
    // The bandwidth of the VPC peering connection. Unit: Mbit/s. The value must be a positive integer.
    // > If you want to specify this parameter, make sure that you are creating an inter-region peering connection.
    shared_ptr<int32_t> bandwidth_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the VPC peering connection. The description must be 2 to 256 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to perform only a dry run for this request. Valid values:
    // 
    // - **true**: performs a dry run and does not create a VPC peering connection. The system checks whether required parameters are specified, the request format, and service limits. If the request fails the dry run, the corresponding error is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // - **false** (default): sends a Normal request. If the request passes the dry run, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable the jumbo frame feature for the VPC peering connection. Valid values:
    // - true: enabled.
    // - false: disabled.
    // > Note: If you want to specify this parameter, make sure that you are creating an inter-region peering connection.
    shared_ptr<bool> enableJumboFrame_ {};
    // The link type.
    // 
    // Valid values: Platinum and Gold. Default value: Gold.
    // 
    // > If you want to specify this parameter, make sure that you are creating an inter-region peering connection.
    shared_ptr<string> linkType_ {};
    // The name of the VPC peering connection. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and can contain digits, underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The ID of the region where you want to create a VPC peering connection. 
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    // 
    // For more information about resource groups, see [What is a resource group?](https://help.aliyun.com/document_detail/94475.html).
    shared_ptr<string> resourceGroupId_ {};
    // The tag information.
    shared_ptr<vector<CreateVpcPeerConnectionRequest::Tag>> tag_ {};
    // The ID create a VPC that acts as the initiator create a VPC peering connection.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
