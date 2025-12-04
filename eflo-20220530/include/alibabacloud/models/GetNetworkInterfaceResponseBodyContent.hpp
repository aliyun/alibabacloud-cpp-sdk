// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKINTERFACERESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKINTERFACERESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup.hpp>
#include <alibabacloud/models/GetNetworkInterfaceResponseBodyContentSubnetBaseInfo.hpp>
#include <alibabacloud/models/GetNetworkInterfaceResponseBodyContentTags.hpp>
#include <alibabacloud/models/GetNetworkInterfaceResponseBodyContentVpdBaseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetNetworkInterfaceResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkInterfaceResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Ethernet, ethernet_);
      DARABONBA_PTR_TO_JSON(Gateway, gateway_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NcType, ncType_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddressMacGroup, privateIpAddressMacGroup_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServiceMac, serviceMac_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetBaseInfo, subnetBaseInfo_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkInterfaceResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Ethernet, ethernet_);
      DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NcType, ncType_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddressMacGroup, privateIpAddressMacGroup_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServiceMac, serviceMac_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetBaseInfo, subnetBaseInfo_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetNetworkInterfaceResponseBodyContent() = default ;
    GetNetworkInterfaceResponseBodyContent(const GetNetworkInterfaceResponseBodyContent &) = default ;
    GetNetworkInterfaceResponseBodyContent(GetNetworkInterfaceResponseBodyContent &&) = default ;
    GetNetworkInterfaceResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkInterfaceResponseBodyContent() = default ;
    GetNetworkInterfaceResponseBodyContent& operator=(const GetNetworkInterfaceResponseBodyContent &) = default ;
    GetNetworkInterfaceResponseBodyContent& operator=(GetNetworkInterfaceResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->ethernet_ == nullptr && return this->gateway_ == nullptr && return this->ip_ == nullptr && return this->ncType_ == nullptr && return this->networkInterfaceId_ == nullptr
        && return this->networkInterfaceName_ == nullptr && return this->nodeId_ == nullptr && return this->privateIpAddressMacGroup_ == nullptr && return this->quota_ == nullptr && return this->regionId_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->serviceMac_ == nullptr && return this->status_ == nullptr && return this->subnetBaseInfo_ == nullptr && return this->tags_ == nullptr
        && return this->tenantId_ == nullptr && return this->vpdBaseInfo_ == nullptr && return this->zoneId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ethernet Field Functions 
    bool hasEthernet() const { return this->ethernet_ != nullptr;};
    void deleteEthernet() { this->ethernet_ = nullptr;};
    inline const vector<string> & ethernet() const { DARABONBA_PTR_GET_CONST(ethernet_, vector<string>) };
    inline vector<string> ethernet() { DARABONBA_PTR_GET(ethernet_, vector<string>) };
    inline GetNetworkInterfaceResponseBodyContent& setEthernet(const vector<string> & ethernet) { DARABONBA_PTR_SET_VALUE(ethernet_, ethernet) };
    inline GetNetworkInterfaceResponseBodyContent& setEthernet(vector<string> && ethernet) { DARABONBA_PTR_SET_RVALUE(ethernet_, ethernet) };


    // gateway Field Functions 
    bool hasGateway() const { return this->gateway_ != nullptr;};
    void deleteGateway() { this->gateway_ = nullptr;};
    inline string gateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ncType Field Functions 
    bool hasNcType() const { return this->ncType_ != nullptr;};
    void deleteNcType() { this->ncType_ = nullptr;};
    inline string ncType() const { DARABONBA_PTR_GET_DEFAULT(ncType_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setNcType(string ncType) { DARABONBA_PTR_SET_VALUE(ncType_, ncType) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // networkInterfaceName Field Functions 
    bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
    void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
    inline string networkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // privateIpAddressMacGroup Field Functions 
    bool hasPrivateIpAddressMacGroup() const { return this->privateIpAddressMacGroup_ != nullptr;};
    void deletePrivateIpAddressMacGroup() { this->privateIpAddressMacGroup_ = nullptr;};
    inline const vector<Models::GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup> & privateIpAddressMacGroup() const { DARABONBA_PTR_GET_CONST(privateIpAddressMacGroup_, vector<Models::GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup>) };
    inline vector<Models::GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup> privateIpAddressMacGroup() { DARABONBA_PTR_GET(privateIpAddressMacGroup_, vector<Models::GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup>) };
    inline GetNetworkInterfaceResponseBodyContent& setPrivateIpAddressMacGroup(const vector<Models::GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup> & privateIpAddressMacGroup) { DARABONBA_PTR_SET_VALUE(privateIpAddressMacGroup_, privateIpAddressMacGroup) };
    inline GetNetworkInterfaceResponseBodyContent& setPrivateIpAddressMacGroup(vector<Models::GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup> && privateIpAddressMacGroup) { DARABONBA_PTR_SET_RVALUE(privateIpAddressMacGroup_, privateIpAddressMacGroup) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t quota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline GetNetworkInterfaceResponseBodyContent& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serviceMac Field Functions 
    bool hasServiceMac() const { return this->serviceMac_ != nullptr;};
    void deleteServiceMac() { this->serviceMac_ = nullptr;};
    inline string serviceMac() const { DARABONBA_PTR_GET_DEFAULT(serviceMac_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setServiceMac(string serviceMac) { DARABONBA_PTR_SET_VALUE(serviceMac_, serviceMac) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetBaseInfo Field Functions 
    bool hasSubnetBaseInfo() const { return this->subnetBaseInfo_ != nullptr;};
    void deleteSubnetBaseInfo() { this->subnetBaseInfo_ = nullptr;};
    inline const Models::GetNetworkInterfaceResponseBodyContentSubnetBaseInfo & subnetBaseInfo() const { DARABONBA_PTR_GET_CONST(subnetBaseInfo_, Models::GetNetworkInterfaceResponseBodyContentSubnetBaseInfo) };
    inline Models::GetNetworkInterfaceResponseBodyContentSubnetBaseInfo subnetBaseInfo() { DARABONBA_PTR_GET(subnetBaseInfo_, Models::GetNetworkInterfaceResponseBodyContentSubnetBaseInfo) };
    inline GetNetworkInterfaceResponseBodyContent& setSubnetBaseInfo(const Models::GetNetworkInterfaceResponseBodyContentSubnetBaseInfo & subnetBaseInfo) { DARABONBA_PTR_SET_VALUE(subnetBaseInfo_, subnetBaseInfo) };
    inline GetNetworkInterfaceResponseBodyContent& setSubnetBaseInfo(Models::GetNetworkInterfaceResponseBodyContentSubnetBaseInfo && subnetBaseInfo) { DARABONBA_PTR_SET_RVALUE(subnetBaseInfo_, subnetBaseInfo) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetNetworkInterfaceResponseBodyContentTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetNetworkInterfaceResponseBodyContentTags>) };
    inline vector<Models::GetNetworkInterfaceResponseBodyContentTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetNetworkInterfaceResponseBodyContentTags>) };
    inline GetNetworkInterfaceResponseBodyContent& setTags(const vector<Models::GetNetworkInterfaceResponseBodyContentTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetNetworkInterfaceResponseBodyContent& setTags(vector<Models::GetNetworkInterfaceResponseBodyContentTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vpdBaseInfo Field Functions 
    bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
    void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
    inline const Models::GetNetworkInterfaceResponseBodyContentVpdBaseInfo & vpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Models::GetNetworkInterfaceResponseBodyContentVpdBaseInfo) };
    inline Models::GetNetworkInterfaceResponseBodyContentVpdBaseInfo vpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Models::GetNetworkInterfaceResponseBodyContentVpdBaseInfo) };
    inline GetNetworkInterfaceResponseBodyContent& setVpdBaseInfo(const Models::GetNetworkInterfaceResponseBodyContentVpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
    inline GetNetworkInterfaceResponseBodyContent& setVpdBaseInfo(Models::GetNetworkInterfaceResponseBodyContentVpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetNetworkInterfaceResponseBodyContent& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Port
    std::shared_ptr<vector<string>> ethernet_ = nullptr;
    // Gateway
    std::shared_ptr<string> gateway_ = nullptr;
    // The IP address of the BE cluster.
    std::shared_ptr<string> ip_ = nullptr;
    // NC Type
    // 
    // Valid value:
    // 
    // *   CUSTOM_LNI_INTEGRATION: two-network one-in-one architecture Lingjun hosting network interface controller.
    // *   CPU: CPU machine.
    // *   ELASTIC_6.2: Machine
    // *   GPU: GPU machine.
    // *   DEFAULT: the old CPU machine.
    // *   CUSTOM_LNI: two network separation architecture Lingjun hosting network interface controller.
    std::shared_ptr<string> ncType_ = nullptr;
    // Lingjun network interface controller ID
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // ENI Name
    std::shared_ptr<string> networkInterfaceName_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> nodeId_ = nullptr;
    // Secondary Private IP\\&MAC Address Collection
    std::shared_ptr<vector<Models::GetNetworkInterfaceResponseBodyContentPrivateIpAddressMacGroup>> privateIpAddressMacGroup_ = nullptr;
    // network interface controller private secondary IP limit
    std::shared_ptr<int32_t> quota_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Resource group instance ID
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Service network interface controller address
    std::shared_ptr<string> serviceMac_ = nullptr;
    // The status of the intervention entry. Valid value:
    std::shared_ptr<string> status_ = nullptr;
    // Lingjun subnet (Subnet) basic information
    std::shared_ptr<Models::GetNetworkInterfaceResponseBodyContentSubnetBaseInfo> subnetBaseInfo_ = nullptr;
    // The details of the resource tags.
    std::shared_ptr<vector<Models::GetNetworkInterfaceResponseBodyContentTags>> tags_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Basic information of Lingjun network segment (VPD)
    std::shared_ptr<Models::GetNetworkInterfaceResponseBodyContentVpdBaseInfo> vpdBaseInfo_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
