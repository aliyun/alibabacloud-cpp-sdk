// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETLISTRESPONSEBODYASSETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETLISTRESPONSEBODYASSETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetListResponseBodyAssets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetListResponseBodyAssets& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_TO_JSON(BindInstanceName, bindInstanceName_);
      DARABONBA_PTR_TO_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_TO_JSON(InternetAddress, internetAddress_);
      DARABONBA_PTR_TO_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Last7DayOutTrafficBytes, last7DayOutTrafficBytes_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NewResourceTag, newResourceTag_);
      DARABONBA_PTR_TO_JSON(Note, note_);
      DARABONBA_PTR_TO_JSON(ProtectStatus, protectStatus_);
      DARABONBA_PTR_TO_JSON(RegionID, regionID_);
      DARABONBA_PTR_TO_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SensitiveDataStatus, sensitiveDataStatus_);
      DARABONBA_PTR_TO_JSON(SgStatus, sgStatus_);
      DARABONBA_PTR_TO_JSON(SgStatusTime, sgStatusTime_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetListResponseBodyAssets& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(BindInstanceId, bindInstanceId_);
      DARABONBA_PTR_FROM_JSON(BindInstanceName, bindInstanceName_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStamp, createTimeStamp_);
      DARABONBA_PTR_FROM_JSON(InternetAddress, internetAddress_);
      DARABONBA_PTR_FROM_JSON(IntranetAddress, intranetAddress_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Last7DayOutTrafficBytes, last7DayOutTrafficBytes_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NewResourceTag, newResourceTag_);
      DARABONBA_PTR_FROM_JSON(Note, note_);
      DARABONBA_PTR_FROM_JSON(ProtectStatus, protectStatus_);
      DARABONBA_PTR_FROM_JSON(RegionID, regionID_);
      DARABONBA_PTR_FROM_JSON(RegionStatus, regionStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceId, resourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SensitiveDataStatus, sensitiveDataStatus_);
      DARABONBA_PTR_FROM_JSON(SgStatus, sgStatus_);
      DARABONBA_PTR_FROM_JSON(SgStatusTime, sgStatusTime_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeAssetListResponseBodyAssets() = default ;
    DescribeAssetListResponseBodyAssets(const DescribeAssetListResponseBodyAssets &) = default ;
    DescribeAssetListResponseBodyAssets(DescribeAssetListResponseBodyAssets &&) = default ;
    DescribeAssetListResponseBodyAssets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetListResponseBodyAssets() = default ;
    DescribeAssetListResponseBodyAssets& operator=(const DescribeAssetListResponseBodyAssets &) = default ;
    DescribeAssetListResponseBodyAssets& operator=(DescribeAssetListResponseBodyAssets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->bindInstanceId_ != nullptr && this->bindInstanceName_ != nullptr && this->createTimeStamp_ != nullptr && this->internetAddress_ != nullptr && this->intranetAddress_ != nullptr
        && this->ipVersion_ != nullptr && this->last7DayOutTrafficBytes_ != nullptr && this->memberUid_ != nullptr && this->name_ != nullptr && this->newResourceTag_ != nullptr
        && this->note_ != nullptr && this->protectStatus_ != nullptr && this->regionID_ != nullptr && this->regionStatus_ != nullptr && this->resourceInstanceId_ != nullptr
        && this->resourceType_ != nullptr && this->riskLevel_ != nullptr && this->sensitiveDataStatus_ != nullptr && this->sgStatus_ != nullptr && this->sgStatusTime_ != nullptr
        && this->syncStatus_ != nullptr && this->type_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeAssetListResponseBodyAssets& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // bindInstanceId Field Functions 
    bool hasBindInstanceId() const { return this->bindInstanceId_ != nullptr;};
    void deleteBindInstanceId() { this->bindInstanceId_ = nullptr;};
    inline string bindInstanceId() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceId_, "") };
    inline DescribeAssetListResponseBodyAssets& setBindInstanceId(string bindInstanceId) { DARABONBA_PTR_SET_VALUE(bindInstanceId_, bindInstanceId) };


    // bindInstanceName Field Functions 
    bool hasBindInstanceName() const { return this->bindInstanceName_ != nullptr;};
    void deleteBindInstanceName() { this->bindInstanceName_ = nullptr;};
    inline string bindInstanceName() const { DARABONBA_PTR_GET_DEFAULT(bindInstanceName_, "") };
    inline DescribeAssetListResponseBodyAssets& setBindInstanceName(string bindInstanceName) { DARABONBA_PTR_SET_VALUE(bindInstanceName_, bindInstanceName) };


    // createTimeStamp Field Functions 
    bool hasCreateTimeStamp() const { return this->createTimeStamp_ != nullptr;};
    void deleteCreateTimeStamp() { this->createTimeStamp_ = nullptr;};
    inline string createTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(createTimeStamp_, "") };
    inline DescribeAssetListResponseBodyAssets& setCreateTimeStamp(string createTimeStamp) { DARABONBA_PTR_SET_VALUE(createTimeStamp_, createTimeStamp) };


    // internetAddress Field Functions 
    bool hasInternetAddress() const { return this->internetAddress_ != nullptr;};
    void deleteInternetAddress() { this->internetAddress_ = nullptr;};
    inline string internetAddress() const { DARABONBA_PTR_GET_DEFAULT(internetAddress_, "") };
    inline DescribeAssetListResponseBodyAssets& setInternetAddress(string internetAddress) { DARABONBA_PTR_SET_VALUE(internetAddress_, internetAddress) };


    // intranetAddress Field Functions 
    bool hasIntranetAddress() const { return this->intranetAddress_ != nullptr;};
    void deleteIntranetAddress() { this->intranetAddress_ = nullptr;};
    inline string intranetAddress() const { DARABONBA_PTR_GET_DEFAULT(intranetAddress_, "") };
    inline DescribeAssetListResponseBodyAssets& setIntranetAddress(string intranetAddress) { DARABONBA_PTR_SET_VALUE(intranetAddress_, intranetAddress) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline DescribeAssetListResponseBodyAssets& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // last7DayOutTrafficBytes Field Functions 
    bool hasLast7DayOutTrafficBytes() const { return this->last7DayOutTrafficBytes_ != nullptr;};
    void deleteLast7DayOutTrafficBytes() { this->last7DayOutTrafficBytes_ = nullptr;};
    inline int64_t last7DayOutTrafficBytes() const { DARABONBA_PTR_GET_DEFAULT(last7DayOutTrafficBytes_, 0L) };
    inline DescribeAssetListResponseBodyAssets& setLast7DayOutTrafficBytes(int64_t last7DayOutTrafficBytes) { DARABONBA_PTR_SET_VALUE(last7DayOutTrafficBytes_, last7DayOutTrafficBytes) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeAssetListResponseBodyAssets& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAssetListResponseBodyAssets& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // newResourceTag Field Functions 
    bool hasNewResourceTag() const { return this->newResourceTag_ != nullptr;};
    void deleteNewResourceTag() { this->newResourceTag_ = nullptr;};
    inline string newResourceTag() const { DARABONBA_PTR_GET_DEFAULT(newResourceTag_, "") };
    inline DescribeAssetListResponseBodyAssets& setNewResourceTag(string newResourceTag) { DARABONBA_PTR_SET_VALUE(newResourceTag_, newResourceTag) };


    // note Field Functions 
    bool hasNote() const { return this->note_ != nullptr;};
    void deleteNote() { this->note_ = nullptr;};
    inline string note() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
    inline DescribeAssetListResponseBodyAssets& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


    // protectStatus Field Functions 
    bool hasProtectStatus() const { return this->protectStatus_ != nullptr;};
    void deleteProtectStatus() { this->protectStatus_ = nullptr;};
    inline string protectStatus() const { DARABONBA_PTR_GET_DEFAULT(protectStatus_, "") };
    inline DescribeAssetListResponseBodyAssets& setProtectStatus(string protectStatus) { DARABONBA_PTR_SET_VALUE(protectStatus_, protectStatus) };


    // regionID Field Functions 
    bool hasRegionID() const { return this->regionID_ != nullptr;};
    void deleteRegionID() { this->regionID_ = nullptr;};
    inline string regionID() const { DARABONBA_PTR_GET_DEFAULT(regionID_, "") };
    inline DescribeAssetListResponseBodyAssets& setRegionID(string regionID) { DARABONBA_PTR_SET_VALUE(regionID_, regionID) };


    // regionStatus Field Functions 
    bool hasRegionStatus() const { return this->regionStatus_ != nullptr;};
    void deleteRegionStatus() { this->regionStatus_ = nullptr;};
    inline string regionStatus() const { DARABONBA_PTR_GET_DEFAULT(regionStatus_, "") };
    inline DescribeAssetListResponseBodyAssets& setRegionStatus(string regionStatus) { DARABONBA_PTR_SET_VALUE(regionStatus_, regionStatus) };


    // resourceInstanceId Field Functions 
    bool hasResourceInstanceId() const { return this->resourceInstanceId_ != nullptr;};
    void deleteResourceInstanceId() { this->resourceInstanceId_ = nullptr;};
    inline string resourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceId_, "") };
    inline DescribeAssetListResponseBodyAssets& setResourceInstanceId(string resourceInstanceId) { DARABONBA_PTR_SET_VALUE(resourceInstanceId_, resourceInstanceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeAssetListResponseBodyAssets& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeAssetListResponseBodyAssets& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sensitiveDataStatus Field Functions 
    bool hasSensitiveDataStatus() const { return this->sensitiveDataStatus_ != nullptr;};
    void deleteSensitiveDataStatus() { this->sensitiveDataStatus_ = nullptr;};
    inline string sensitiveDataStatus() const { DARABONBA_PTR_GET_DEFAULT(sensitiveDataStatus_, "") };
    inline DescribeAssetListResponseBodyAssets& setSensitiveDataStatus(string sensitiveDataStatus) { DARABONBA_PTR_SET_VALUE(sensitiveDataStatus_, sensitiveDataStatus) };


    // sgStatus Field Functions 
    bool hasSgStatus() const { return this->sgStatus_ != nullptr;};
    void deleteSgStatus() { this->sgStatus_ = nullptr;};
    inline string sgStatus() const { DARABONBA_PTR_GET_DEFAULT(sgStatus_, "") };
    inline DescribeAssetListResponseBodyAssets& setSgStatus(string sgStatus) { DARABONBA_PTR_SET_VALUE(sgStatus_, sgStatus) };


    // sgStatusTime Field Functions 
    bool hasSgStatusTime() const { return this->sgStatusTime_ != nullptr;};
    void deleteSgStatusTime() { this->sgStatusTime_ = nullptr;};
    inline int64_t sgStatusTime() const { DARABONBA_PTR_GET_DEFAULT(sgStatusTime_, 0L) };
    inline DescribeAssetListResponseBodyAssets& setSgStatusTime(int64_t sgStatusTime) { DARABONBA_PTR_SET_VALUE(sgStatusTime_, sgStatusTime) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string syncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline DescribeAssetListResponseBodyAssets& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAssetListResponseBodyAssets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The UID of the Alibaba Cloud account.
    // 
    // >  The value of this parameter indicates the management account to which the member is added.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The ID of the cloud resource with which the asset is associated.
    std::shared_ptr<string> bindInstanceId_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> bindInstanceName_ = nullptr;
    // The timestamp when the asset is added to Cloud Firewall.
    std::shared_ptr<string> createTimeStamp_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetAddress_ = nullptr;
    // The internal IP address of the server.
    std::shared_ptr<string> intranetAddress_ = nullptr;
    // The IP version of the asset that is protected by Cloud Firewall.
    // 
    // Valid values:
    // 
    // *   **4**: IPv4
    // *   **6**: IPv6
    std::shared_ptr<int32_t> ipVersion_ = nullptr;
    // Outbound traffic in the last 7 days.
    std::shared_ptr<int64_t> last7DayOutTrafficBytes_ = nullptr;
    // The UID of the member.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    // The instance name of the asset that is protected by Cloud Firewall.
    std::shared_ptr<string> name_ = nullptr;
    // The time when the asset was added. Valid values:
    // 
    // *   **discovered in 1 hour**: within one hour.
    // *   **discovered in 1 day**: within one day.
    // *   **discovered in 7 days**: within seven days.
    std::shared_ptr<string> newResourceTag_ = nullptr;
    // The remarks of the asset. Valid values:
    // 
    // *   **REGION_NOT_SUPPORT**: The region is not supported.
    // *   **NETWORK_NOT_SUPPORT**: The network is not supported.
    std::shared_ptr<string> note_ = nullptr;
    // The status of the firewall. Valid values:
    // 
    // *   **open**: enabled.
    // *   **opening**: being enabled.
    // *   **closed**: disabled.
    // *   **closing**: being disabled.
    std::shared_ptr<string> protectStatus_ = nullptr;
    // The ID of the region in which the asset resides.
    std::shared_ptr<string> regionID_ = nullptr;
    // Indicates whether the firewall is supported in the region in which the asset resides. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    std::shared_ptr<string> regionStatus_ = nullptr;
    // The instance ID of the asset.
    std::shared_ptr<string> resourceInstanceId_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **BastionHostEgressIP**: the egress IP address of a bastion host
    // *   **BastionHostIngressIP**: the ingress IP address of a bastion host
    // *   **EcsEIP**: the elastic IP address (EIP) of an Elastic Compute Service (ECS) instance
    // *   **EcsPublicIP**: the public IP address of an ECS instance
    // *   **EIP**: the EIP
    // *   **EniEIP**: the EIP of an elastic network interface (ENI)
    // *   **NatEIP**: the EIP of a NAT gateway
    // *   **SlbEIP**: the EIP of a Server Load Balancer (SLB) instance
    // *   **SlbPublicIP**: the public IP address of an SLB instance
    // *   **NatPublicIP**: the public IP address of a NAT gateway
    // *   **HAVIP**: the high-availability virtual IP address (HAVIP)
    std::shared_ptr<string> resourceType_ = nullptr;
    // The risk level of the asset. Valid values:
    // 
    // *   **low**: low
    // *   **middle**: medium
    // *   **hight**: high
    // 
    // >  The value of this parameter is returned only when the UserType parameter is set to free.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // Data leakage detection enabled status.
    std::shared_ptr<string> sensitiveDataStatus_ = nullptr;
    // The status of the security group policy. Valid values:
    // 
    // *   **pass**: applied
    // *   **block**: not applied
    // *   **unsupport**: unsupported
    std::shared_ptr<string> sgStatus_ = nullptr;
    // The time when the status of the security group was last checked. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> sgStatusTime_ = nullptr;
    // Indicates whether traffic redirection is supported for the asset. Valid values:
    // 
    // *   **enable**: yes
    // *   **disable**: no
    std::shared_ptr<string> syncStatus_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
