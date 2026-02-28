// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEELASTICNETWORKINTERFACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEELASTICNETWORKINTERFACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateElasticNetworkInterfaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateElasticNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateElasticNetworkInterfaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateElasticNetworkInterfaceRequest() = default ;
    CreateElasticNetworkInterfaceRequest(const CreateElasticNetworkInterfaceRequest &) = default ;
    CreateElasticNetworkInterfaceRequest(CreateElasticNetworkInterfaceRequest &&) = default ;
    CreateElasticNetworkInterfaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateElasticNetworkInterfaceRequest() = default ;
    CreateElasticNetworkInterfaceRequest& operator=(const CreateElasticNetworkInterfaceRequest &) = default ;
    CreateElasticNetworkInterfaceRequest& operator=(CreateElasticNetworkInterfaceRequest &&) = default ;
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
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->enableJumboFrame_ == nullptr && this->nodeId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityGroupId_ == nullptr && this->tag_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateElasticNetworkInterfaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateElasticNetworkInterfaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline CreateElasticNetworkInterfaceRequest& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateElasticNetworkInterfaceRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateElasticNetworkInterfaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateElasticNetworkInterfaceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateElasticNetworkInterfaceRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateElasticNetworkInterfaceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateElasticNetworkInterfaceRequest::Tag>) };
    inline vector<CreateElasticNetworkInterfaceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateElasticNetworkInterfaceRequest::Tag>) };
    inline CreateElasticNetworkInterfaceRequest& setTag(const vector<CreateElasticNetworkInterfaceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateElasticNetworkInterfaceRequest& setTag(vector<CreateElasticNetworkInterfaceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateElasticNetworkInterfaceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateElasticNetworkInterfaceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateElasticNetworkInterfaceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The POP API is not ignored by default and is used for idempotence.
    shared_ptr<string> clientToken_ {};
    // The description of the response code.
    shared_ptr<string> description_ {};
    // Whether to enable the jumbo frame capability
    shared_ptr<bool> enableJumboFrame_ {};
    // The ID of the Lingjun node.
    shared_ptr<string> nodeId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The Resource GroupId.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the security group.
    shared_ptr<string> securityGroupId_ {};
    // The resource tags.
    shared_ptr<vector<CreateElasticNetworkInterfaceRequest::Tag>> tag_ {};
    // The ID of the vSwitch.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the VPC.
    // 
    // >  If the NodeId parameter is empty, the VpcId parameter is required. If the NodeId parameter is not empty, the VpcId parameter is optional.
    shared_ptr<string> vpcId_ {};
    // The zone ID.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
