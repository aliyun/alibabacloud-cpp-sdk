// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLSRESPONSEBODYPUBLICIPADDRESSPOOLLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPUBLICIPADDRESSPOOLSRESPONSEBODYPUBLICIPADDRESSPOOLLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpAddressRemaining, ipAddressRemaining_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_TO_JSON(ShareType, shareType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalIpNum, totalIpNum_);
      DARABONBA_PTR_TO_JSON(UsedIpNum, usedIpNum_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpAddressRemaining, ipAddressRemaining_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PublicIpAddressPoolId, publicIpAddressPoolId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_FROM_JSON(ShareType, shareType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalIpNum, totalIpNum_);
      DARABONBA_PTR_FROM_JSON(UsedIpNum, usedIpNum_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList() = default ;
    ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList(const ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList &) = default ;
    ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList(ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList &&) = default ;
    ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList() = default ;
    ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& operator=(const ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList &) = default ;
    ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& operator=(ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->businessStatus_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->ipAddressRemaining_ != nullptr && this->isp_ != nullptr
        && this->name_ != nullptr && this->ownerId_ != nullptr && this->publicIpAddressPoolId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->securityProtectionTypes_ != nullptr && this->shareType_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr && this->totalIpNum_ != nullptr
        && this->usedIpNum_ != nullptr && this->userType_ != nullptr && this->zones_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipAddressRemaining Field Functions 
    bool hasIpAddressRemaining() const { return this->ipAddressRemaining_ != nullptr;};
    void deleteIpAddressRemaining() { this->ipAddressRemaining_ = nullptr;};
    inline bool ipAddressRemaining() const { DARABONBA_PTR_GET_DEFAULT(ipAddressRemaining_, false) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setIpAddressRemaining(bool ipAddressRemaining) { DARABONBA_PTR_SET_VALUE(ipAddressRemaining_, ipAddressRemaining) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // publicIpAddressPoolId Field Functions 
    bool hasPublicIpAddressPoolId() const { return this->publicIpAddressPoolId_ != nullptr;};
    void deletePublicIpAddressPoolId() { this->publicIpAddressPoolId_ = nullptr;};
    inline string publicIpAddressPoolId() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddressPoolId_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setPublicIpAddressPoolId(string publicIpAddressPoolId) { DARABONBA_PTR_SET_VALUE(publicIpAddressPoolId_, publicIpAddressPoolId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityProtectionTypes Field Functions 
    bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
    void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
    inline const vector<string> & securityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, vector<string>) };
    inline vector<string> securityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, vector<string>) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setSecurityProtectionTypes(const vector<string> & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setSecurityProtectionTypes(vector<string> && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


    // shareType Field Functions 
    bool hasShareType() const { return this->shareType_ != nullptr;};
    void deleteShareType() { this->shareType_ = nullptr;};
    inline string shareType() const { DARABONBA_PTR_GET_DEFAULT(shareType_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setShareType(string shareType) { DARABONBA_PTR_SET_VALUE(shareType_, shareType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags>) };
    inline vector<Models::ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags>) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setTags(const vector<Models::ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setTags(vector<Models::ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalIpNum Field Functions 
    bool hasTotalIpNum() const { return this->totalIpNum_ != nullptr;};
    void deleteTotalIpNum() { this->totalIpNum_ = nullptr;};
    inline int32_t totalIpNum() const { DARABONBA_PTR_GET_DEFAULT(totalIpNum_, 0) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setTotalIpNum(int32_t totalIpNum) { DARABONBA_PTR_SET_VALUE(totalIpNum_, totalIpNum) };


    // usedIpNum Field Functions 
    bool hasUsedIpNum() const { return this->usedIpNum_ != nullptr;};
    void deleteUsedIpNum() { this->usedIpNum_ = nullptr;};
    inline int32_t usedIpNum() const { DARABONBA_PTR_GET_DEFAULT(usedIpNum_, 0) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setUsedIpNum(int32_t usedIpNum) { DARABONBA_PTR_SET_VALUE(usedIpNum_, usedIpNum) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> zones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolList& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The service type of the IP address pool.
    // 
    // *   **CloudBox** Only cloud box users can select this type.
    // *   **Default** (default)
    std::shared_ptr<string> bizType_ = nullptr;
    // The status of the IP address pool.
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The time when the IP address pool was created. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the IP address pool.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether idle IP addresses exist.
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> ipAddressRemaining_ = nullptr;
    // The line type.
    // 
    // *   **BGP**: BGP (Multi-ISP)
    // *   **BGP_PRO**: BGP (Multi-ISP) Pro
    // 
    // For more information about BGP (Multi-ISP) and BGP (Multi-ISP) Pro, see [EIP line types](https://help.aliyun.com/document_detail/32321.html).
    // 
    // If you are allowed to use single-ISP bandwidth, one of the following values may be returned:
    // 
    // *   **ChinaTelecom**
    // *   **ChinaUnicom**
    // *   **ChinaMobile**
    // *   **ChinaTelecom_L2**
    // *   **ChinaUnicom_L2**
    // *   **ChinaMobile_L2**
    // 
    // If your services are deployed in China East 1 Finance, **BGP_FinanceCloud** is returned.
    std::shared_ptr<string> isp_ = nullptr;
    // The name of the IP address pool.
    std::shared_ptr<string> name_ = nullptr;
    // The Alibaba Cloud account to which the IP address pool belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the IP address pool.
    std::shared_ptr<string> publicIpAddressPoolId_ = nullptr;
    // The region ID of the IP address pool.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the IP address pool belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The edition of Anti-DDoS.
    // 
    // *   If you do not set this parameter, Anti-DDoS Origin Basic is used.
    // *   If the value is set to **AntiDDoS_Enhanced**, Anti-DDoS Pro/Premium is used.
    std::shared_ptr<vector<string>> securityProtectionTypes_ = nullptr;
    // The sharing type of the IP address pool.
    // 
    // *   If **Shared** is returned, the IP address pool is shared.
    // *   If an empty value is returned, the IP address pool is not shared.
    std::shared_ptr<string> shareType_ = nullptr;
    // The status of the IP address pool.
    // 
    // *   **Created**
    // *   **Deleting**
    // *   **Modifying**
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListPublicIpAddressPoolsResponseBodyPublicIpAddressPoolListTags>> tags_ = nullptr;
    // The total number of available IP addresses in the public IP address pool.
    std::shared_ptr<int32_t> totalIpNum_ = nullptr;
    // The number of used IP addresses in the public IP address pool.
    std::shared_ptr<int32_t> usedIpNum_ = nullptr;
    // The user type. Valid values:
    // 
    // *   **admin**: An administrator can delete, modify, and query IP address pools, and can assign elastic IP addresses (EIPs) to the pool.
    // *   **user**: A user can only assign EIPs to the IP address pool and query the IP address pool, but cannot modify or delete the IP address pool.
    std::shared_ptr<string> userType_ = nullptr;
    // The zone of the IP address pool. This parameter is returned only when the service type of the IP address pool is CloudBox.
    std::shared_ptr<vector<string>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
