// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKPATHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKPATHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkPathRequestTag.hpp>
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
    virtual bool empty() const override { return this->networkPathDescription_ == nullptr
        && return this->networkPathName_ == nullptr && return this->protocol_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sourceId_ == nullptr
        && return this->sourceIpAddress_ == nullptr && return this->sourcePort_ == nullptr && return this->sourceType_ == nullptr && return this->tag_ == nullptr && return this->targetId_ == nullptr
        && return this->targetIpAddress_ == nullptr && return this->targetPort_ == nullptr && return this->targetType_ == nullptr; };
    // networkPathDescription Field Functions 
    bool hasNetworkPathDescription() const { return this->networkPathDescription_ != nullptr;};
    void deleteNetworkPathDescription() { this->networkPathDescription_ = nullptr;};
    inline string networkPathDescription() const { DARABONBA_PTR_GET_DEFAULT(networkPathDescription_, "") };
    inline CreateNetworkPathRequest& setNetworkPathDescription(string networkPathDescription) { DARABONBA_PTR_SET_VALUE(networkPathDescription_, networkPathDescription) };


    // networkPathName Field Functions 
    bool hasNetworkPathName() const { return this->networkPathName_ != nullptr;};
    void deleteNetworkPathName() { this->networkPathName_ = nullptr;};
    inline string networkPathName() const { DARABONBA_PTR_GET_DEFAULT(networkPathName_, "") };
    inline CreateNetworkPathRequest& setNetworkPathName(string networkPathName) { DARABONBA_PTR_SET_VALUE(networkPathName_, networkPathName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateNetworkPathRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkPathRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateNetworkPathRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline CreateNetworkPathRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceIpAddress Field Functions 
    bool hasSourceIpAddress() const { return this->sourceIpAddress_ != nullptr;};
    void deleteSourceIpAddress() { this->sourceIpAddress_ = nullptr;};
    inline string sourceIpAddress() const { DARABONBA_PTR_GET_DEFAULT(sourceIpAddress_, "") };
    inline CreateNetworkPathRequest& setSourceIpAddress(string sourceIpAddress) { DARABONBA_PTR_SET_VALUE(sourceIpAddress_, sourceIpAddress) };


    // sourcePort Field Functions 
    bool hasSourcePort() const { return this->sourcePort_ != nullptr;};
    void deleteSourcePort() { this->sourcePort_ = nullptr;};
    inline int32_t sourcePort() const { DARABONBA_PTR_GET_DEFAULT(sourcePort_, 0) };
    inline CreateNetworkPathRequest& setSourcePort(int32_t sourcePort) { DARABONBA_PTR_SET_VALUE(sourcePort_, sourcePort) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateNetworkPathRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateNetworkPathRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateNetworkPathRequestTag>) };
    inline vector<CreateNetworkPathRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateNetworkPathRequestTag>) };
    inline CreateNetworkPathRequest& setTag(const vector<CreateNetworkPathRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateNetworkPathRequest& setTag(vector<CreateNetworkPathRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline CreateNetworkPathRequest& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetIpAddress Field Functions 
    bool hasTargetIpAddress() const { return this->targetIpAddress_ != nullptr;};
    void deleteTargetIpAddress() { this->targetIpAddress_ = nullptr;};
    inline string targetIpAddress() const { DARABONBA_PTR_GET_DEFAULT(targetIpAddress_, "") };
    inline CreateNetworkPathRequest& setTargetIpAddress(string targetIpAddress) { DARABONBA_PTR_SET_VALUE(targetIpAddress_, targetIpAddress) };


    // targetPort Field Functions 
    bool hasTargetPort() const { return this->targetPort_ != nullptr;};
    void deleteTargetPort() { this->targetPort_ = nullptr;};
    inline int32_t targetPort() const { DARABONBA_PTR_GET_DEFAULT(targetPort_, 0) };
    inline CreateNetworkPathRequest& setTargetPort(int32_t targetPort) { DARABONBA_PTR_SET_VALUE(targetPort_, targetPort) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateNetworkPathRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The description of the network path.
    std::shared_ptr<string> networkPathDescription_ = nullptr;
    // The name of the network path.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkPathName_ = nullptr;
    // The protocol type. Valid values:
    // 
    // *   **tcp**: Transmission Control Protocol (TCP)
    // *   **udp**: User Datagram Protocol (UDP)
    // *   **icmp**: Internet Control Message Protocol (ICMP)
    std::shared_ptr<string> protocol_ = nullptr;
    // The region ID of the network path that you want to create.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the source resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceId_ = nullptr;
    // The source IP address.
    std::shared_ptr<string> sourceIpAddress_ = nullptr;
    // The source port.
    std::shared_ptr<int32_t> sourcePort_ = nullptr;
    // The type of the source resource. Valid values:
    // 
    // *   **ecs**: the Elastic Compute Service (ECS) instance
    // *   **internetIp**: the public IP address
    // *   **vsw**: the vSwitch
    // *   **vpn**: the VPN gateway
    // *   **vbr**: the virtual border router (VBR)
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The tags to add to the resource.
    std::shared_ptr<vector<CreateNetworkPathRequestTag>> tag_ = nullptr;
    // The ID of the destination resource.
    std::shared_ptr<string> targetId_ = nullptr;
    // The destination IP address.
    std::shared_ptr<string> targetIpAddress_ = nullptr;
    // The destination port.
    std::shared_ptr<int32_t> targetPort_ = nullptr;
    // The type of the destination resource. Valid values:
    // 
    // *   **ecs**: the ECS instance
    // *   **internetIp**: the public IP address
    // *   **vsw**: the vSwitch
    // *   **vpn**: the VPN gateway
    // *   **vbr**: the VBR
    // *   **clb**: the Classic Load Balancer (CLB) instance
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
