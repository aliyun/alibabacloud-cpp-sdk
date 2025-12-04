// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELASTICNETWORKINTERFACERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETELASTICNETWORKINTERFACERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses.hpp>
#include <alibabacloud/models/GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses.hpp>
#include <alibabacloud/models/GetElasticNetworkInterfaceResponseBodyContentTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetElasticNetworkInterfaceResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElasticNetworkInterfaceResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddresses, privateIpAddresses_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetElasticNetworkInterfaceResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Ipv6Addresses, ipv6Addresses_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddresses, privateIpAddresses_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetElasticNetworkInterfaceResponseBodyContent() = default ;
    GetElasticNetworkInterfaceResponseBodyContent(const GetElasticNetworkInterfaceResponseBodyContent &) = default ;
    GetElasticNetworkInterfaceResponseBodyContent(GetElasticNetworkInterfaceResponseBodyContent &&) = default ;
    GetElasticNetworkInterfaceResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElasticNetworkInterfaceResponseBodyContent() = default ;
    GetElasticNetworkInterfaceResponseBodyContent& operator=(const GetElasticNetworkInterfaceResponseBodyContent &) = default ;
    GetElasticNetworkInterfaceResponseBodyContent& operator=(GetElasticNetworkInterfaceResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->elasticNetworkInterfaceId_ == nullptr && return this->enableJumboFrame_ == nullptr && return this->gateway_ == nullptr && return this->gmtModified_ == nullptr
        && return this->ip_ == nullptr && return this->ipv6Addresses_ == nullptr && return this->mac_ == nullptr && return this->mask_ == nullptr && return this->message_ == nullptr
        && return this->nodeId_ == nullptr && return this->privateIpAddresses_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->securityGroupId_ == nullptr
        && return this->status_ == nullptr && return this->tags_ == nullptr && return this->type_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticNetworkInterfaceId Field Functions 
    bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
    void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
    inline string elasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool enableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline GetElasticNetworkInterfaceResponseBodyContent& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string gateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipv6Addresses Field Functions 
    bool hasIpv6Addresses() const { return this->ipv6Addresses_ != nullptr;};
    void deleteIpv6Addresses() { this->ipv6Addresses_ = nullptr;};
    inline const vector<Models::GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses> & ipv6Addresses() const { DARABONBA_PTR_GET_CONST(ipv6Addresses_, vector<Models::GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses>) };
    inline vector<Models::GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses> ipv6Addresses() { DARABONBA_PTR_GET(ipv6Addresses_, vector<Models::GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses>) };
    inline GetElasticNetworkInterfaceResponseBodyContent& setIpv6Addresses(const vector<Models::GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses> & ipv6Addresses) { DARABONBA_PTR_SET_VALUE(ipv6Addresses_, ipv6Addresses) };
    inline GetElasticNetworkInterfaceResponseBodyContent& setIpv6Addresses(vector<Models::GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses> && ipv6Addresses) { DARABONBA_PTR_SET_RVALUE(ipv6Addresses_, ipv6Addresses) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string mask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // privateIpAddresses Field Functions 
    bool hasPrivateIpAddresses() const { return this->privateIpAddresses_ != nullptr;};
    void deletePrivateIpAddresses() { this->privateIpAddresses_ = nullptr;};
    inline const vector<Models::GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses> & privateIpAddresses() const { DARABONBA_PTR_GET_CONST(privateIpAddresses_, vector<Models::GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses>) };
    inline vector<Models::GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses> privateIpAddresses() { DARABONBA_PTR_GET(privateIpAddresses_, vector<Models::GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses>) };
    inline GetElasticNetworkInterfaceResponseBodyContent& setPrivateIpAddresses(const vector<Models::GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses> & privateIpAddresses) { DARABONBA_PTR_SET_VALUE(privateIpAddresses_, privateIpAddresses) };
    inline GetElasticNetworkInterfaceResponseBodyContent& setPrivateIpAddresses(vector<Models::GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses> && privateIpAddresses) { DARABONBA_PTR_SET_RVALUE(privateIpAddresses_, privateIpAddresses) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetElasticNetworkInterfaceResponseBodyContentTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetElasticNetworkInterfaceResponseBodyContentTags>) };
    inline vector<Models::GetElasticNetworkInterfaceResponseBodyContentTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetElasticNetworkInterfaceResponseBodyContentTags>) };
    inline GetElasticNetworkInterfaceResponseBodyContent& setTags(const vector<Models::GetElasticNetworkInterfaceResponseBodyContentTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetElasticNetworkInterfaceResponseBodyContent& setTags(vector<Models::GetElasticNetworkInterfaceResponseBodyContentTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetElasticNetworkInterfaceResponseBodyContent& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The instance description.
    std::shared_ptr<string> description_ = nullptr;
    // Lingjun Elastic Network Interface ID
    std::shared_ptr<string> elasticNetworkInterfaceId_ = nullptr;
    // Whether to enable the jumboFrame capability
    std::shared_ptr<bool> enableJumboFrame_ = nullptr;
    // vswitch gateway address
    std::shared_ptr<string> gateway_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Elastic Network Interface IP
    std::shared_ptr<string> ip_ = nullptr;
    // IPV6 address
    std::shared_ptr<vector<Models::GetElasticNetworkInterfaceResponseBodyContentIpv6Addresses>> ipv6Addresses_ = nullptr;
    // mac address
    std::shared_ptr<string> mac_ = nullptr;
    // vswitch mask bits
    std::shared_ptr<string> mask_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // Lingjun Node ID
    std::shared_ptr<string> nodeId_ = nullptr;
    // Secondary private IP address
    std::shared_ptr<vector<Models::GetElasticNetworkInterfaceResponseBodyContentPrivateIpAddresses>> privateIpAddresses_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // 资源组实例ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The state of the private gateway.
    // 
    // Valid value:
    // 
    // *   Create Failed: the creation failure.
    // *   Delete Failed: the that failed to be deleted.
    // *   Executing
    // *   Available
    // *   Deleting
    std::shared_ptr<string> status_ = nullptr;
    // The details of the resource tags.
    std::shared_ptr<vector<Models::GetElasticNetworkInterfaceResponseBodyContentTags>> tags_ = nullptr;
    // NIC Type
    // 
    // Valid value:
    // 
    // *   CUSTOM: custom type.
    // *   DEFAULT: system type.
    std::shared_ptr<string> type_ = nullptr;
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // VPC ID
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
