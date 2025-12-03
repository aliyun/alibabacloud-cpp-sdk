// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPIGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApiGroupResponseBodyCustomDomains.hpp>
#include <alibabacloud/models/DescribeApiGroupResponseBodyStageItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeApiGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApiGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BasePath, basePath_);
      DARABONBA_PTR_TO_JSON(BillingStatus, billingStatus_);
      DARABONBA_PTR_TO_JSON(CloudMarketCommodity, cloudMarketCommodity_);
      DARABONBA_PTR_TO_JSON(CmsMonitorGroup, cmsMonitorGroup_);
      DARABONBA_PTR_TO_JSON(CompatibleFlags, compatibleFlags_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CustomAppCodeConfig, customAppCodeConfig_);
      DARABONBA_PTR_TO_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(CustomTraceConfig, customTraceConfig_);
      DARABONBA_PTR_TO_JSON(CustomerConfigs, customerConfigs_);
      DARABONBA_PTR_TO_JSON(DedicatedInstanceType, dedicatedInstanceType_);
      DARABONBA_PTR_TO_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DisableInnerDomain, disableInnerDomain_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_TO_JSON(IllegalStatus, illegalStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Ipv6Status, ipv6Status_);
      DARABONBA_PTR_TO_JSON(MigrationError, migrationError_);
      DARABONBA_PTR_TO_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PassthroughHeaders, passthroughHeaders_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StageItems, stageItems_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(TrafficLimit, trafficLimit_);
      DARABONBA_PTR_TO_JSON(UserLogConfig, userLogConfig_);
      DARABONBA_PTR_TO_JSON(VpcDomain, vpcDomain_);
      DARABONBA_PTR_TO_JSON(VpcSlbIntranetDomain, vpcSlbIntranetDomain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApiGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BasePath, basePath_);
      DARABONBA_PTR_FROM_JSON(BillingStatus, billingStatus_);
      DARABONBA_PTR_FROM_JSON(CloudMarketCommodity, cloudMarketCommodity_);
      DARABONBA_PTR_FROM_JSON(CmsMonitorGroup, cmsMonitorGroup_);
      DARABONBA_PTR_FROM_JSON(CompatibleFlags, compatibleFlags_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CustomAppCodeConfig, customAppCodeConfig_);
      DARABONBA_PTR_FROM_JSON(CustomDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(CustomTraceConfig, customTraceConfig_);
      DARABONBA_PTR_FROM_JSON(CustomerConfigs, customerConfigs_);
      DARABONBA_PTR_FROM_JSON(DedicatedInstanceType, dedicatedInstanceType_);
      DARABONBA_PTR_FROM_JSON(DefaultDomain, defaultDomain_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DisableInnerDomain, disableInnerDomain_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HttpsPolicy, httpsPolicy_);
      DARABONBA_PTR_FROM_JSON(IllegalStatus, illegalStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Ipv6Status, ipv6Status_);
      DARABONBA_PTR_FROM_JSON(MigrationError, migrationError_);
      DARABONBA_PTR_FROM_JSON(MigrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PassthroughHeaders, passthroughHeaders_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StageItems, stageItems_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(TrafficLimit, trafficLimit_);
      DARABONBA_PTR_FROM_JSON(UserLogConfig, userLogConfig_);
      DARABONBA_PTR_FROM_JSON(VpcDomain, vpcDomain_);
      DARABONBA_PTR_FROM_JSON(VpcSlbIntranetDomain, vpcSlbIntranetDomain_);
    };
    DescribeApiGroupResponseBody() = default ;
    DescribeApiGroupResponseBody(const DescribeApiGroupResponseBody &) = default ;
    DescribeApiGroupResponseBody(DescribeApiGroupResponseBody &&) = default ;
    DescribeApiGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApiGroupResponseBody() = default ;
    DescribeApiGroupResponseBody& operator=(const DescribeApiGroupResponseBody &) = default ;
    DescribeApiGroupResponseBody& operator=(DescribeApiGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basePath_ == nullptr
        && return this->billingStatus_ == nullptr && return this->cloudMarketCommodity_ == nullptr && return this->cmsMonitorGroup_ == nullptr && return this->compatibleFlags_ == nullptr && return this->createdTime_ == nullptr
        && return this->customAppCodeConfig_ == nullptr && return this->customDomains_ == nullptr && return this->customTraceConfig_ == nullptr && return this->customerConfigs_ == nullptr && return this->dedicatedInstanceType_ == nullptr
        && return this->defaultDomain_ == nullptr && return this->description_ == nullptr && return this->disableInnerDomain_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr
        && return this->httpsPolicy_ == nullptr && return this->illegalStatus_ == nullptr && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->ipv6Status_ == nullptr
        && return this->migrationError_ == nullptr && return this->migrationStatus_ == nullptr && return this->modifiedTime_ == nullptr && return this->passthroughHeaders_ == nullptr && return this->regionId_ == nullptr
        && return this->requestId_ == nullptr && return this->stageItems_ == nullptr && return this->status_ == nullptr && return this->subDomain_ == nullptr && return this->trafficLimit_ == nullptr
        && return this->userLogConfig_ == nullptr && return this->vpcDomain_ == nullptr && return this->vpcSlbIntranetDomain_ == nullptr; };
    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline DescribeApiGroupResponseBody& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // billingStatus Field Functions 
    bool hasBillingStatus() const { return this->billingStatus_ != nullptr;};
    void deleteBillingStatus() { this->billingStatus_ = nullptr;};
    inline string billingStatus() const { DARABONBA_PTR_GET_DEFAULT(billingStatus_, "") };
    inline DescribeApiGroupResponseBody& setBillingStatus(string billingStatus) { DARABONBA_PTR_SET_VALUE(billingStatus_, billingStatus) };


    // cloudMarketCommodity Field Functions 
    bool hasCloudMarketCommodity() const { return this->cloudMarketCommodity_ != nullptr;};
    void deleteCloudMarketCommodity() { this->cloudMarketCommodity_ = nullptr;};
    inline bool cloudMarketCommodity() const { DARABONBA_PTR_GET_DEFAULT(cloudMarketCommodity_, false) };
    inline DescribeApiGroupResponseBody& setCloudMarketCommodity(bool cloudMarketCommodity) { DARABONBA_PTR_SET_VALUE(cloudMarketCommodity_, cloudMarketCommodity) };


    // cmsMonitorGroup Field Functions 
    bool hasCmsMonitorGroup() const { return this->cmsMonitorGroup_ != nullptr;};
    void deleteCmsMonitorGroup() { this->cmsMonitorGroup_ = nullptr;};
    inline string cmsMonitorGroup() const { DARABONBA_PTR_GET_DEFAULT(cmsMonitorGroup_, "") };
    inline DescribeApiGroupResponseBody& setCmsMonitorGroup(string cmsMonitorGroup) { DARABONBA_PTR_SET_VALUE(cmsMonitorGroup_, cmsMonitorGroup) };


    // compatibleFlags Field Functions 
    bool hasCompatibleFlags() const { return this->compatibleFlags_ != nullptr;};
    void deleteCompatibleFlags() { this->compatibleFlags_ = nullptr;};
    inline string compatibleFlags() const { DARABONBA_PTR_GET_DEFAULT(compatibleFlags_, "") };
    inline DescribeApiGroupResponseBody& setCompatibleFlags(string compatibleFlags) { DARABONBA_PTR_SET_VALUE(compatibleFlags_, compatibleFlags) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline DescribeApiGroupResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // customAppCodeConfig Field Functions 
    bool hasCustomAppCodeConfig() const { return this->customAppCodeConfig_ != nullptr;};
    void deleteCustomAppCodeConfig() { this->customAppCodeConfig_ = nullptr;};
    inline string customAppCodeConfig() const { DARABONBA_PTR_GET_DEFAULT(customAppCodeConfig_, "") };
    inline DescribeApiGroupResponseBody& setCustomAppCodeConfig(string customAppCodeConfig) { DARABONBA_PTR_SET_VALUE(customAppCodeConfig_, customAppCodeConfig) };


    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const DescribeApiGroupResponseBodyCustomDomains & customDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, DescribeApiGroupResponseBodyCustomDomains) };
    inline DescribeApiGroupResponseBodyCustomDomains customDomains() { DARABONBA_PTR_GET(customDomains_, DescribeApiGroupResponseBodyCustomDomains) };
    inline DescribeApiGroupResponseBody& setCustomDomains(const DescribeApiGroupResponseBodyCustomDomains & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline DescribeApiGroupResponseBody& setCustomDomains(DescribeApiGroupResponseBodyCustomDomains && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // customTraceConfig Field Functions 
    bool hasCustomTraceConfig() const { return this->customTraceConfig_ != nullptr;};
    void deleteCustomTraceConfig() { this->customTraceConfig_ = nullptr;};
    inline string customTraceConfig() const { DARABONBA_PTR_GET_DEFAULT(customTraceConfig_, "") };
    inline DescribeApiGroupResponseBody& setCustomTraceConfig(string customTraceConfig) { DARABONBA_PTR_SET_VALUE(customTraceConfig_, customTraceConfig) };


    // customerConfigs Field Functions 
    bool hasCustomerConfigs() const { return this->customerConfigs_ != nullptr;};
    void deleteCustomerConfigs() { this->customerConfigs_ = nullptr;};
    inline string customerConfigs() const { DARABONBA_PTR_GET_DEFAULT(customerConfigs_, "") };
    inline DescribeApiGroupResponseBody& setCustomerConfigs(string customerConfigs) { DARABONBA_PTR_SET_VALUE(customerConfigs_, customerConfigs) };


    // dedicatedInstanceType Field Functions 
    bool hasDedicatedInstanceType() const { return this->dedicatedInstanceType_ != nullptr;};
    void deleteDedicatedInstanceType() { this->dedicatedInstanceType_ = nullptr;};
    inline string dedicatedInstanceType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedInstanceType_, "") };
    inline DescribeApiGroupResponseBody& setDedicatedInstanceType(string dedicatedInstanceType) { DARABONBA_PTR_SET_VALUE(dedicatedInstanceType_, dedicatedInstanceType) };


    // defaultDomain Field Functions 
    bool hasDefaultDomain() const { return this->defaultDomain_ != nullptr;};
    void deleteDefaultDomain() { this->defaultDomain_ = nullptr;};
    inline string defaultDomain() const { DARABONBA_PTR_GET_DEFAULT(defaultDomain_, "") };
    inline DescribeApiGroupResponseBody& setDefaultDomain(string defaultDomain) { DARABONBA_PTR_SET_VALUE(defaultDomain_, defaultDomain) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeApiGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // disableInnerDomain Field Functions 
    bool hasDisableInnerDomain() const { return this->disableInnerDomain_ != nullptr;};
    void deleteDisableInnerDomain() { this->disableInnerDomain_ = nullptr;};
    inline bool disableInnerDomain() const { DARABONBA_PTR_GET_DEFAULT(disableInnerDomain_, false) };
    inline DescribeApiGroupResponseBody& setDisableInnerDomain(bool disableInnerDomain) { DARABONBA_PTR_SET_VALUE(disableInnerDomain_, disableInnerDomain) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeApiGroupResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeApiGroupResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // httpsPolicy Field Functions 
    bool hasHttpsPolicy() const { return this->httpsPolicy_ != nullptr;};
    void deleteHttpsPolicy() { this->httpsPolicy_ = nullptr;};
    inline string httpsPolicy() const { DARABONBA_PTR_GET_DEFAULT(httpsPolicy_, "") };
    inline DescribeApiGroupResponseBody& setHttpsPolicy(string httpsPolicy) { DARABONBA_PTR_SET_VALUE(httpsPolicy_, httpsPolicy) };


    // illegalStatus Field Functions 
    bool hasIllegalStatus() const { return this->illegalStatus_ != nullptr;};
    void deleteIllegalStatus() { this->illegalStatus_ = nullptr;};
    inline string illegalStatus() const { DARABONBA_PTR_GET_DEFAULT(illegalStatus_, "") };
    inline DescribeApiGroupResponseBody& setIllegalStatus(string illegalStatus) { DARABONBA_PTR_SET_VALUE(illegalStatus_, illegalStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApiGroupResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeApiGroupResponseBody& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipv6Status Field Functions 
    bool hasIpv6Status() const { return this->ipv6Status_ != nullptr;};
    void deleteIpv6Status() { this->ipv6Status_ = nullptr;};
    inline string ipv6Status() const { DARABONBA_PTR_GET_DEFAULT(ipv6Status_, "") };
    inline DescribeApiGroupResponseBody& setIpv6Status(string ipv6Status) { DARABONBA_PTR_SET_VALUE(ipv6Status_, ipv6Status) };


    // migrationError Field Functions 
    bool hasMigrationError() const { return this->migrationError_ != nullptr;};
    void deleteMigrationError() { this->migrationError_ = nullptr;};
    inline string migrationError() const { DARABONBA_PTR_GET_DEFAULT(migrationError_, "") };
    inline DescribeApiGroupResponseBody& setMigrationError(string migrationError) { DARABONBA_PTR_SET_VALUE(migrationError_, migrationError) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline string migrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
    inline DescribeApiGroupResponseBody& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline DescribeApiGroupResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // passthroughHeaders Field Functions 
    bool hasPassthroughHeaders() const { return this->passthroughHeaders_ != nullptr;};
    void deletePassthroughHeaders() { this->passthroughHeaders_ = nullptr;};
    inline string passthroughHeaders() const { DARABONBA_PTR_GET_DEFAULT(passthroughHeaders_, "") };
    inline DescribeApiGroupResponseBody& setPassthroughHeaders(string passthroughHeaders) { DARABONBA_PTR_SET_VALUE(passthroughHeaders_, passthroughHeaders) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeApiGroupResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApiGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stageItems Field Functions 
    bool hasStageItems() const { return this->stageItems_ != nullptr;};
    void deleteStageItems() { this->stageItems_ = nullptr;};
    inline const DescribeApiGroupResponseBodyStageItems & stageItems() const { DARABONBA_PTR_GET_CONST(stageItems_, DescribeApiGroupResponseBodyStageItems) };
    inline DescribeApiGroupResponseBodyStageItems stageItems() { DARABONBA_PTR_GET(stageItems_, DescribeApiGroupResponseBodyStageItems) };
    inline DescribeApiGroupResponseBody& setStageItems(const DescribeApiGroupResponseBodyStageItems & stageItems) { DARABONBA_PTR_SET_VALUE(stageItems_, stageItems) };
    inline DescribeApiGroupResponseBody& setStageItems(DescribeApiGroupResponseBodyStageItems && stageItems) { DARABONBA_PTR_SET_RVALUE(stageItems_, stageItems) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApiGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribeApiGroupResponseBody& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // trafficLimit Field Functions 
    bool hasTrafficLimit() const { return this->trafficLimit_ != nullptr;};
    void deleteTrafficLimit() { this->trafficLimit_ = nullptr;};
    inline int32_t trafficLimit() const { DARABONBA_PTR_GET_DEFAULT(trafficLimit_, 0) };
    inline DescribeApiGroupResponseBody& setTrafficLimit(int32_t trafficLimit) { DARABONBA_PTR_SET_VALUE(trafficLimit_, trafficLimit) };


    // userLogConfig Field Functions 
    bool hasUserLogConfig() const { return this->userLogConfig_ != nullptr;};
    void deleteUserLogConfig() { this->userLogConfig_ = nullptr;};
    inline string userLogConfig() const { DARABONBA_PTR_GET_DEFAULT(userLogConfig_, "") };
    inline DescribeApiGroupResponseBody& setUserLogConfig(string userLogConfig) { DARABONBA_PTR_SET_VALUE(userLogConfig_, userLogConfig) };


    // vpcDomain Field Functions 
    bool hasVpcDomain() const { return this->vpcDomain_ != nullptr;};
    void deleteVpcDomain() { this->vpcDomain_ = nullptr;};
    inline string vpcDomain() const { DARABONBA_PTR_GET_DEFAULT(vpcDomain_, "") };
    inline DescribeApiGroupResponseBody& setVpcDomain(string vpcDomain) { DARABONBA_PTR_SET_VALUE(vpcDomain_, vpcDomain) };


    // vpcSlbIntranetDomain Field Functions 
    bool hasVpcSlbIntranetDomain() const { return this->vpcSlbIntranetDomain_ != nullptr;};
    void deleteVpcSlbIntranetDomain() { this->vpcSlbIntranetDomain_ = nullptr;};
    inline string vpcSlbIntranetDomain() const { DARABONBA_PTR_GET_DEFAULT(vpcSlbIntranetDomain_, "") };
    inline DescribeApiGroupResponseBody& setVpcSlbIntranetDomain(string vpcSlbIntranetDomain) { DARABONBA_PTR_SET_VALUE(vpcSlbIntranetDomain_, vpcSlbIntranetDomain) };


  protected:
    // The root path of the API.
    std::shared_ptr<string> basePath_ = nullptr;
    // The billing status of the API group.
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **LOCKED**: The API group is locked due to overdue payments.
    std::shared_ptr<string> billingStatus_ = nullptr;
    // The products on Alibaba Cloud Marketplace.
    std::shared_ptr<bool> cloudMarketCommodity_ = nullptr;
    // The CloudMonitor application group.
    std::shared_ptr<string> cmsMonitorGroup_ = nullptr;
    // The list of associated tags. Separate multiple tags with commas (,).
    std::shared_ptr<string> compatibleFlags_ = nullptr;
    // The creation time (UTC) of the API group.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The custom appcode configuration.
    std::shared_ptr<string> customAppCodeConfig_ = nullptr;
    // The details about the custom domain name.
    std::shared_ptr<DescribeApiGroupResponseBodyCustomDomains> customDomains_ = nullptr;
    // The custom trace configuration.
    std::shared_ptr<string> customTraceConfig_ = nullptr;
    // The list of custom configuration items.
    std::shared_ptr<string> customerConfigs_ = nullptr;
    // The type of exclusive instance where the group is located
    // 
    // - VPC fusion type exclusive instance: vpc_connect
    // - Traditional type exclusive instance: normal
    std::shared_ptr<string> dedicatedInstanceType_ = nullptr;
    // The default domain name.
    std::shared_ptr<string> defaultDomain_ = nullptr;
    // The description of the API group.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether access over the public second-level domain name is enabled. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> disableInnerDomain_ = nullptr;
    // The ID of the API group. This ID is generated by the system and globally unique.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the group to which the API belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // The HTTPS policy.
    std::shared_ptr<string> httpsPolicy_ = nullptr;
    // The validity status of the API group. Valid values:
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **LOCKED**: The API group is locked because it is not valid.
    std::shared_ptr<string> illegalStatus_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the instance.
    // 
    // *   CLASSIC_SHARED: shared instance that uses the classic network configuration
    // *   VPC_SHARED: shared instance that uses VPC
    // *   VPC_DEDICATED: dedicated instance that uses VPC
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IPv6 status.
    std::shared_ptr<string> ipv6Status_ = nullptr;
    // The reason for the failure of the group migration instance task. When the value of the MigrationStatus parameter is Failed, it is not empty.
    std::shared_ptr<string> migrationError_ = nullptr;
    // Group migration instance task status
    // 
    // - Running
    // - Success
    // - Failed
    std::shared_ptr<string> migrationStatus_ = nullptr;
    // The last modification time (UTC) of the API group.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // Specifies whether to pass headers.
    std::shared_ptr<string> passthroughHeaders_ = nullptr;
    // The region to which the API group belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The runtime environment information.
    std::shared_ptr<DescribeApiGroupResponseBodyStageItems> stageItems_ = nullptr;
    // The status of the API group.
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **DELETE**: The API group is deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The second-level domain name automatically assigned to the API group.
    std::shared_ptr<string> subDomain_ = nullptr;
    // The upper QPS limit of the API group. The default value is 500. You can increase the upper limit by submitting an application.
    std::shared_ptr<int32_t> trafficLimit_ = nullptr;
    // The user log settings.
    std::shared_ptr<string> userLogConfig_ = nullptr;
    // The VPC domain name.
    std::shared_ptr<string> vpcDomain_ = nullptr;
    // The VPC SLB domain name.
    std::shared_ptr<string> vpcSlbIntranetDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
