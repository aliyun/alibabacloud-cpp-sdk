// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBNETRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETSUBNETRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSubnetResponseBodyContentTags.hpp>
#include <alibabacloud/models/GetSubnetResponseBodyContentVpdBaseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetSubnetResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubnetResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableIps, availableIps_);
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LbCount, lbCount_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NcCount, ncCount_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceCount, networkInterfaceCount_);
      DARABONBA_PTR_TO_JSON(PrivateIpCount, privateIpCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubnetResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableIps, availableIps_);
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LbCount, lbCount_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NcCount, ncCount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceCount, networkInterfaceCount_);
      DARABONBA_PTR_FROM_JSON(PrivateIpCount, privateIpCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetSubnetResponseBodyContent() = default ;
    GetSubnetResponseBodyContent(const GetSubnetResponseBodyContent &) = default ;
    GetSubnetResponseBodyContent(GetSubnetResponseBodyContent &&) = default ;
    GetSubnetResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubnetResponseBodyContent() = default ;
    GetSubnetResponseBodyContent& operator=(const GetSubnetResponseBodyContent &) = default ;
    GetSubnetResponseBodyContent& operator=(GetSubnetResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableIps_ == nullptr
        && return this->cidr_ == nullptr && return this->createTime_ == nullptr && return this->gmtModified_ == nullptr && return this->lbCount_ == nullptr && return this->message_ == nullptr
        && return this->ncCount_ == nullptr && return this->networkInterfaceCount_ == nullptr && return this->privateIpCount_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->status_ == nullptr && return this->subnetId_ == nullptr && return this->subnetName_ == nullptr && return this->tags_ == nullptr && return this->tenantId_ == nullptr
        && return this->type_ == nullptr && return this->vpdBaseInfo_ == nullptr && return this->vpdId_ == nullptr && return this->zoneId_ == nullptr; };
    // availableIps Field Functions 
    bool hasAvailableIps() const { return this->availableIps_ != nullptr;};
    void deleteAvailableIps() { this->availableIps_ = nullptr;};
    inline int32_t availableIps() const { DARABONBA_PTR_GET_DEFAULT(availableIps_, 0) };
    inline GetSubnetResponseBodyContent& setAvailableIps(int32_t availableIps) { DARABONBA_PTR_SET_VALUE(availableIps_, availableIps) };


    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline GetSubnetResponseBodyContent& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetSubnetResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetSubnetResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lbCount Field Functions 
    bool hasLbCount() const { return this->lbCount_ != nullptr;};
    void deleteLbCount() { this->lbCount_ = nullptr;};
    inline int64_t lbCount() const { DARABONBA_PTR_GET_DEFAULT(lbCount_, 0L) };
    inline GetSubnetResponseBodyContent& setLbCount(int64_t lbCount) { DARABONBA_PTR_SET_VALUE(lbCount_, lbCount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubnetResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ncCount Field Functions 
    bool hasNcCount() const { return this->ncCount_ != nullptr;};
    void deleteNcCount() { this->ncCount_ = nullptr;};
    inline int32_t ncCount() const { DARABONBA_PTR_GET_DEFAULT(ncCount_, 0) };
    inline GetSubnetResponseBodyContent& setNcCount(int32_t ncCount) { DARABONBA_PTR_SET_VALUE(ncCount_, ncCount) };


    // networkInterfaceCount Field Functions 
    bool hasNetworkInterfaceCount() const { return this->networkInterfaceCount_ != nullptr;};
    void deleteNetworkInterfaceCount() { this->networkInterfaceCount_ = nullptr;};
    inline int32_t networkInterfaceCount() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceCount_, 0) };
    inline GetSubnetResponseBodyContent& setNetworkInterfaceCount(int32_t networkInterfaceCount) { DARABONBA_PTR_SET_VALUE(networkInterfaceCount_, networkInterfaceCount) };


    // privateIpCount Field Functions 
    bool hasPrivateIpCount() const { return this->privateIpCount_ != nullptr;};
    void deletePrivateIpCount() { this->privateIpCount_ = nullptr;};
    inline int64_t privateIpCount() const { DARABONBA_PTR_GET_DEFAULT(privateIpCount_, 0L) };
    inline GetSubnetResponseBodyContent& setPrivateIpCount(int64_t privateIpCount) { DARABONBA_PTR_SET_VALUE(privateIpCount_, privateIpCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetSubnetResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetSubnetResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetSubnetResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline GetSubnetResponseBodyContent& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // subnetName Field Functions 
    bool hasSubnetName() const { return this->subnetName_ != nullptr;};
    void deleteSubnetName() { this->subnetName_ = nullptr;};
    inline string subnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
    inline GetSubnetResponseBodyContent& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetSubnetResponseBodyContentTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetSubnetResponseBodyContentTags>) };
    inline vector<Models::GetSubnetResponseBodyContentTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetSubnetResponseBodyContentTags>) };
    inline GetSubnetResponseBodyContent& setTags(const vector<Models::GetSubnetResponseBodyContentTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetSubnetResponseBodyContent& setTags(vector<Models::GetSubnetResponseBodyContentTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetSubnetResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetSubnetResponseBodyContent& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpdBaseInfo Field Functions 
    bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
    void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
    inline const Models::GetSubnetResponseBodyContentVpdBaseInfo & vpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Models::GetSubnetResponseBodyContentVpdBaseInfo) };
    inline Models::GetSubnetResponseBodyContentVpdBaseInfo vpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Models::GetSubnetResponseBodyContentVpdBaseInfo) };
    inline GetSubnetResponseBodyContent& setVpdBaseInfo(const Models::GetSubnetResponseBodyContentVpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
    inline GetSubnetResponseBodyContent& setVpdBaseInfo(Models::GetSubnetResponseBodyContentVpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetSubnetResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetSubnetResponseBodyContent& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of available IP addresses.
    std::shared_ptr<int32_t> availableIps_ = nullptr;
    // The CIDR block of the Subnet.
    // 
    // *   The network segment of the subnet must be a proper subset of the network segment of Lingjun to which it belongs, and the mask must be between 16 bits and 29 bits, which can provide 8 to 65536 addresses. For example, the CIDR block of the Lingjun CIDR block is 192.168.0.0/16, and the CIDR blocks of the subnets under the Lingjun CIDR block are 192.168.0.0/17 to 192.168.0.0/29.
    // *   The first and last three IP addresses of each subnet segment are reserved by the system. For example, the CIDR blocks of the subnet are 192.168.1.0/24,192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
    std::shared_ptr<string> cidr_ = nullptr;
    // The time when the activation code was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the O\\&M task was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The number of SLB.
    std::shared_ptr<int64_t> lbCount_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // The number of NCs.
    std::shared_ptr<int32_t> ncCount_ = nullptr;
    // Number of Lingjun network interface controller
    std::shared_ptr<int32_t> networkInterfaceCount_ = nullptr;
    // The total number of secondary private IP addresses.
    std::shared_ptr<int64_t> privateIpCount_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of your Alibaba Cloud resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the cache reserve instance.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the Lingjun subnet instance.
    std::shared_ptr<string> subnetId_ = nullptr;
    // The name of the Lingjun subnet instance.
    std::shared_ptr<string> subnetName_ = nullptr;
    // The tag information.
    // 
    // You can specify up to 20 tags.
    std::shared_ptr<vector<Models::GetSubnetResponseBodyContentTags>> tags_ = nullptr;
    // The tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // Lingjun Subnet Usage Type; optional; optional. Valid values:
    // 
    // *   **Empty for common data types**
    // *   **OOB** :OOB type
    // *   **LB**: LB type
    std::shared_ptr<string> type_ = nullptr;
    // The information about the network segment of Lingjun.
    std::shared_ptr<Models::GetSubnetResponseBodyContentVpdBaseInfo> vpdBaseInfo_ = nullptr;
    // The ID of the Lingjun CIDR block.
    std::shared_ptr<string> vpdId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
