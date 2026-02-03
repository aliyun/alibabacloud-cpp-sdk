// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class CreateNetworkPathRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkPathRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkPathDescription, networkPathDescription_);
      DARABONBA_PTR_TO_JSON(NetworkPathName, networkPathName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_TO_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TargetId, targetId_);
      DARABONBA_PTR_TO_JSON(TargetIpAddress, targetIpAddress_);
      DARABONBA_PTR_TO_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkPathRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkPathDescription, networkPathDescription_);
      DARABONBA_PTR_FROM_JSON(NetworkPathName, networkPathName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceIpAddress, sourceIpAddress_);
      DARABONBA_PTR_FROM_JSON(SourcePort, sourcePort_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
      DARABONBA_PTR_FROM_JSON(TargetIpAddress, targetIpAddress_);
      DARABONBA_PTR_FROM_JSON(TargetPort, targetPort_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    CreateNetworkPathRequest() = default ;
    CreateNetworkPathRequest(const CreateNetworkPathRequest &) = default ;
    CreateNetworkPathRequest(CreateNetworkPathRequest &&) = default ;
    CreateNetworkPathRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkPathRequest() = default ;
    CreateNetworkPathRequest& operator=(const CreateNetworkPathRequest &) = default ;
    CreateNetworkPathRequest& operator=(CreateNetworkPathRequest &&) = default ;
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
      // The key of tag N to add to the resource. The tag key can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
      // 
      // You can add up to 20 tags in each call.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the resource. You can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`. The tag value cannot start with `aliyun` or `acs:`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->networkPathDescription_ == nullptr
        && this->networkPathName_ == nullptr && this->protocol_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->sourceId_ == nullptr
        && this->sourceIpAddress_ == nullptr && this->sourcePort_ == nullptr && this->sourceType_ == nullptr && this->tag_ == nullptr && this->targetId_ == nullptr
        && this->targetIpAddress_ == nullptr && this->targetPort_ == nullptr && this->targetType_ == nullptr; };
    // networkPathDescription Field Functions 
    bool hasNetworkPathDescription() const { return this->networkPathDescription_ != nullptr;};
    void deleteNetworkPathDescription() { this->networkPathDescription_ = nullptr;};
    inline string getNetworkPathDescription() const { DARABONBA_PTR_GET_DEFAULT(networkPathDescription_, "") };
    inline CreateNetworkPathRequest& setNetworkPathDescription(string networkPathDescription) { DARABONBA_PTR_SET_VALUE(networkPathDescription_, networkPathDescription) };


    // networkPathName Field Functions 
    bool hasNetworkPathName() const { return this->networkPathName_ != nullptr;};
    void deleteNetworkPathName() { this->networkPathName_ = nullptr;};
    inline string getNetworkPathName() const { DARABONBA_PTR_GET_DEFAULT(networkPathName_, "") };
    inline CreateNetworkPathRequest& setNetworkPathName(string networkPathName) { DARABONBA_PTR_SET_VALUE(networkPathName_, networkPathName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateNetworkPathRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkPathRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateNetworkPathRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateNetworkPathRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string getSourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline CreateNetworkPathRequest& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int32_t getSourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0) };
    inline CreateNetworkPathRequest& setSourcePort(int32_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateNetworkPathRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkPathRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkPathRequest::Tag>) };
    inline vector<CreateNetworkPathRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkPathRequest::Tag>) };
    inline CreateNetworkPathRequest& setTag(const vector<CreateNetworkPathRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkPathRequest& setTag(vector<CreateNetworkPathRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateNetworkPathRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetIpAddress Field Functions 
    bool hasTargetIpAddress() const { return this->targetIpAddress_ != nullptr;};
    void deleteTargetIpAddress() { this->targetIpAddress_ = nullptr;};
    inline string getTargetIpAddress() const { DARABONBA_PTR_GET_DEFAULT(targetIpAddress_, "") };
    inline CreateNetworkPathRequest& setTargetIpAddress(string targetIpAddress) { DARABONBA_PTR_SET_VALUE(targetIpAddress_, targetIpAddress) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t getTargetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline CreateNetworkPathRequest& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateNetworkPathRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The description of the network path.
    shared_ptr<string> networkPathDescription_ {};
    // The name of the network path.
    // 
    // This parameter is required.
    shared_ptr<string> networkPathName_ {};
    // The protocol type. Valid values:
    // 
    // *   **tcp**: Transmission Control Protocol (TCP)
    // *   **udp**: User Datagram Protocol (UDP)
    // *   **icmp**: Internet Control Message Protocol (ICMP)
    shared_ptr<string> protocol_ {};
    // The region ID of the network path that you want to create.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the source resource.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The source IP address.
    shared_ptr<string> sourceIpAddress_ {};
    // The source port.
    shared_ptr<int32_t> sourcePort_ {};
    // The type of the source resource. Valid values:
    // 
    // *   **ecs**: the Elastic Compute Service (ECS) instance
    // *   **internetIp**: the public IP address
    // *   **vsw**: the vSwitch
    // *   **vpn**: the VPN gateway
    // *   **vbr**: the virtual border router (VBR)
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The tags to add to the resource.
    shared_ptr<vector<CreateNetworkPathRequest::Tag>> tag_ {};
    // The ID of the destination resource.
    shared_ptr<string> targetId_ {};
    // The destination IP address.
    shared_ptr<string> targetIpAddress_ {};
    // The destination port.
    shared_ptr<int32_t> targetPort_ {};
    // The type of the destination resource. Valid values:
    // 
    // *   **ecs**: the ECS instance
    // *   **internetIp**: the public IP address
    // *   **vsw**: the vSwitch
    // *   **vpn**: the VPN gateway
    // *   **vbr**: the VBR
    // *   **clb**: the Classic Load Balancer (CLB) instance
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
