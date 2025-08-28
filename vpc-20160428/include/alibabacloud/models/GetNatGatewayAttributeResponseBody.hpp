// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNATGATEWAYATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyAccessMode.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyBillingConfig.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyDeletionProtectionInfo.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyForwardTable.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyFullNatTable.hpp>
#include <vector>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyIpList.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyLogDelivery.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodyPrivateInfo.hpp>
#include <alibabacloud/models/GetNatGatewayAttributeResponseBodySnatTable.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class GetNatGatewayAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNatGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_TO_JSON(BillingConfig, billingConfig_);
      DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DeletionProtectionInfo, deletionProtectionInfo_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsMetricEnabled, ecsMetricEnabled_);
      DARABONBA_PTR_TO_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(ForwardTable, forwardTable_);
      DARABONBA_PTR_TO_JSON(FullNatTable, fullNatTable_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(LogDelivery, logDelivery_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_TO_JSON(NatType, natType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PrivateInfo, privateInfo_);
      DARABONBA_PTR_TO_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_TO_JSON(PrivateLinkMode, privateLinkMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SnatTable, snatTable_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNatGatewayAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
      DARABONBA_PTR_FROM_JSON(BillingConfig, billingConfig_);
      DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DeletionProtectionInfo, deletionProtectionInfo_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsMetricEnabled, ecsMetricEnabled_);
      DARABONBA_PTR_FROM_JSON(EnableSessionLog, enableSessionLog_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(ForwardTable, forwardTable_);
      DARABONBA_PTR_FROM_JSON(FullNatTable, fullNatTable_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(LogDelivery, logDelivery_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
      DARABONBA_PTR_FROM_JSON(NatType, natType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PrivateInfo, privateInfo_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkEnabled, privateLinkEnabled_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkMode, privateLinkMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SnatTable, snatTable_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetNatGatewayAttributeResponseBody() = default ;
    GetNatGatewayAttributeResponseBody(const GetNatGatewayAttributeResponseBody &) = default ;
    GetNatGatewayAttributeResponseBody(GetNatGatewayAttributeResponseBody &&) = default ;
    GetNatGatewayAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNatGatewayAttributeResponseBody() = default ;
    GetNatGatewayAttributeResponseBody& operator=(const GetNatGatewayAttributeResponseBody &) = default ;
    GetNatGatewayAttributeResponseBody& operator=(GetNatGatewayAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessMode_ != nullptr
        && this->billingConfig_ != nullptr && this->businessStatus_ != nullptr && this->creationTime_ != nullptr && this->deletionProtectionInfo_ != nullptr && this->description_ != nullptr
        && this->ecsMetricEnabled_ != nullptr && this->enableSessionLog_ != nullptr && this->expiredTime_ != nullptr && this->forwardTable_ != nullptr && this->fullNatTable_ != nullptr
        && this->ipList_ != nullptr && this->logDelivery_ != nullptr && this->name_ != nullptr && this->natGatewayId_ != nullptr && this->natType_ != nullptr
        && this->networkType_ != nullptr && this->privateInfo_ != nullptr && this->privateLinkEnabled_ != nullptr && this->privateLinkMode_ != nullptr && this->regionId_ != nullptr
        && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr && this->snatTable_ != nullptr && this->status_ != nullptr && this->vpcId_ != nullptr; };
    // accessMode Field Functions 
    bool hasAccessMode() const { return this->accessMode_ != nullptr;};
    void deleteAccessMode() { this->accessMode_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodyAccessMode & accessMode() const { DARABONBA_PTR_GET_CONST(accessMode_, GetNatGatewayAttributeResponseBodyAccessMode) };
    inline GetNatGatewayAttributeResponseBodyAccessMode accessMode() { DARABONBA_PTR_GET(accessMode_, GetNatGatewayAttributeResponseBodyAccessMode) };
    inline GetNatGatewayAttributeResponseBody& setAccessMode(const GetNatGatewayAttributeResponseBodyAccessMode & accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };
    inline GetNatGatewayAttributeResponseBody& setAccessMode(GetNatGatewayAttributeResponseBodyAccessMode && accessMode) { DARABONBA_PTR_SET_RVALUE(accessMode_, accessMode) };


    // billingConfig Field Functions 
    bool hasBillingConfig() const { return this->billingConfig_ != nullptr;};
    void deleteBillingConfig() { this->billingConfig_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodyBillingConfig & billingConfig() const { DARABONBA_PTR_GET_CONST(billingConfig_, GetNatGatewayAttributeResponseBodyBillingConfig) };
    inline GetNatGatewayAttributeResponseBodyBillingConfig billingConfig() { DARABONBA_PTR_GET(billingConfig_, GetNatGatewayAttributeResponseBodyBillingConfig) };
    inline GetNatGatewayAttributeResponseBody& setBillingConfig(const GetNatGatewayAttributeResponseBodyBillingConfig & billingConfig) { DARABONBA_PTR_SET_VALUE(billingConfig_, billingConfig) };
    inline GetNatGatewayAttributeResponseBody& setBillingConfig(GetNatGatewayAttributeResponseBodyBillingConfig && billingConfig) { DARABONBA_PTR_SET_RVALUE(billingConfig_, billingConfig) };


    // businessStatus Field Functions 
    bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
    void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
    inline string businessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
    inline GetNatGatewayAttributeResponseBody& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetNatGatewayAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // deletionProtectionInfo Field Functions 
    bool hasDeletionProtectionInfo() const { return this->deletionProtectionInfo_ != nullptr;};
    void deleteDeletionProtectionInfo() { this->deletionProtectionInfo_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodyDeletionProtectionInfo & deletionProtectionInfo() const { DARABONBA_PTR_GET_CONST(deletionProtectionInfo_, GetNatGatewayAttributeResponseBodyDeletionProtectionInfo) };
    inline GetNatGatewayAttributeResponseBodyDeletionProtectionInfo deletionProtectionInfo() { DARABONBA_PTR_GET(deletionProtectionInfo_, GetNatGatewayAttributeResponseBodyDeletionProtectionInfo) };
    inline GetNatGatewayAttributeResponseBody& setDeletionProtectionInfo(const GetNatGatewayAttributeResponseBodyDeletionProtectionInfo & deletionProtectionInfo) { DARABONBA_PTR_SET_VALUE(deletionProtectionInfo_, deletionProtectionInfo) };
    inline GetNatGatewayAttributeResponseBody& setDeletionProtectionInfo(GetNatGatewayAttributeResponseBodyDeletionProtectionInfo && deletionProtectionInfo) { DARABONBA_PTR_SET_RVALUE(deletionProtectionInfo_, deletionProtectionInfo) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetNatGatewayAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsMetricEnabled Field Functions 
    bool hasEcsMetricEnabled() const { return this->ecsMetricEnabled_ != nullptr;};
    void deleteEcsMetricEnabled() { this->ecsMetricEnabled_ = nullptr;};
    inline bool ecsMetricEnabled() const { DARABONBA_PTR_GET_DEFAULT(ecsMetricEnabled_, false) };
    inline GetNatGatewayAttributeResponseBody& setEcsMetricEnabled(bool ecsMetricEnabled) { DARABONBA_PTR_SET_VALUE(ecsMetricEnabled_, ecsMetricEnabled) };


    // enableSessionLog Field Functions 
    bool hasEnableSessionLog() const { return this->enableSessionLog_ != nullptr;};
    void deleteEnableSessionLog() { this->enableSessionLog_ = nullptr;};
    inline bool enableSessionLog() const { DARABONBA_PTR_GET_DEFAULT(enableSessionLog_, false) };
    inline GetNatGatewayAttributeResponseBody& setEnableSessionLog(bool enableSessionLog) { DARABONBA_PTR_SET_VALUE(enableSessionLog_, enableSessionLog) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline GetNatGatewayAttributeResponseBody& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // forwardTable Field Functions 
    bool hasForwardTable() const { return this->forwardTable_ != nullptr;};
    void deleteForwardTable() { this->forwardTable_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodyForwardTable & forwardTable() const { DARABONBA_PTR_GET_CONST(forwardTable_, GetNatGatewayAttributeResponseBodyForwardTable) };
    inline GetNatGatewayAttributeResponseBodyForwardTable forwardTable() { DARABONBA_PTR_GET(forwardTable_, GetNatGatewayAttributeResponseBodyForwardTable) };
    inline GetNatGatewayAttributeResponseBody& setForwardTable(const GetNatGatewayAttributeResponseBodyForwardTable & forwardTable) { DARABONBA_PTR_SET_VALUE(forwardTable_, forwardTable) };
    inline GetNatGatewayAttributeResponseBody& setForwardTable(GetNatGatewayAttributeResponseBodyForwardTable && forwardTable) { DARABONBA_PTR_SET_RVALUE(forwardTable_, forwardTable) };


    // fullNatTable Field Functions 
    bool hasFullNatTable() const { return this->fullNatTable_ != nullptr;};
    void deleteFullNatTable() { this->fullNatTable_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodyFullNatTable & fullNatTable() const { DARABONBA_PTR_GET_CONST(fullNatTable_, GetNatGatewayAttributeResponseBodyFullNatTable) };
    inline GetNatGatewayAttributeResponseBodyFullNatTable fullNatTable() { DARABONBA_PTR_GET(fullNatTable_, GetNatGatewayAttributeResponseBodyFullNatTable) };
    inline GetNatGatewayAttributeResponseBody& setFullNatTable(const GetNatGatewayAttributeResponseBodyFullNatTable & fullNatTable) { DARABONBA_PTR_SET_VALUE(fullNatTable_, fullNatTable) };
    inline GetNatGatewayAttributeResponseBody& setFullNatTable(GetNatGatewayAttributeResponseBodyFullNatTable && fullNatTable) { DARABONBA_PTR_SET_RVALUE(fullNatTable_, fullNatTable) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline const vector<GetNatGatewayAttributeResponseBodyIpList> & ipList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<GetNatGatewayAttributeResponseBodyIpList>) };
    inline vector<GetNatGatewayAttributeResponseBodyIpList> ipList() { DARABONBA_PTR_GET(ipList_, vector<GetNatGatewayAttributeResponseBodyIpList>) };
    inline GetNatGatewayAttributeResponseBody& setIpList(const vector<GetNatGatewayAttributeResponseBodyIpList> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
    inline GetNatGatewayAttributeResponseBody& setIpList(vector<GetNatGatewayAttributeResponseBodyIpList> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


    // logDelivery Field Functions 
    bool hasLogDelivery() const { return this->logDelivery_ != nullptr;};
    void deleteLogDelivery() { this->logDelivery_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodyLogDelivery & logDelivery() const { DARABONBA_PTR_GET_CONST(logDelivery_, GetNatGatewayAttributeResponseBodyLogDelivery) };
    inline GetNatGatewayAttributeResponseBodyLogDelivery logDelivery() { DARABONBA_PTR_GET(logDelivery_, GetNatGatewayAttributeResponseBodyLogDelivery) };
    inline GetNatGatewayAttributeResponseBody& setLogDelivery(const GetNatGatewayAttributeResponseBodyLogDelivery & logDelivery) { DARABONBA_PTR_SET_VALUE(logDelivery_, logDelivery) };
    inline GetNatGatewayAttributeResponseBody& setLogDelivery(GetNatGatewayAttributeResponseBodyLogDelivery && logDelivery) { DARABONBA_PTR_SET_RVALUE(logDelivery_, logDelivery) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetNatGatewayAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline GetNatGatewayAttributeResponseBody& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


    // natType Field Functions 
    bool hasNatType() const { return this->natType_ != nullptr;};
    void deleteNatType() { this->natType_ = nullptr;};
    inline string natType() const { DARABONBA_PTR_GET_DEFAULT(natType_, "") };
    inline GetNatGatewayAttributeResponseBody& setNatType(string natType) { DARABONBA_PTR_SET_VALUE(natType_, natType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline GetNatGatewayAttributeResponseBody& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // privateInfo Field Functions 
    bool hasPrivateInfo() const { return this->privateInfo_ != nullptr;};
    void deletePrivateInfo() { this->privateInfo_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodyPrivateInfo & privateInfo() const { DARABONBA_PTR_GET_CONST(privateInfo_, GetNatGatewayAttributeResponseBodyPrivateInfo) };
    inline GetNatGatewayAttributeResponseBodyPrivateInfo privateInfo() { DARABONBA_PTR_GET(privateInfo_, GetNatGatewayAttributeResponseBodyPrivateInfo) };
    inline GetNatGatewayAttributeResponseBody& setPrivateInfo(const GetNatGatewayAttributeResponseBodyPrivateInfo & privateInfo) { DARABONBA_PTR_SET_VALUE(privateInfo_, privateInfo) };
    inline GetNatGatewayAttributeResponseBody& setPrivateInfo(GetNatGatewayAttributeResponseBodyPrivateInfo && privateInfo) { DARABONBA_PTR_SET_RVALUE(privateInfo_, privateInfo) };


    // privateLinkEnabled Field Functions 
    bool hasPrivateLinkEnabled() const { return this->privateLinkEnabled_ != nullptr;};
    void deletePrivateLinkEnabled() { this->privateLinkEnabled_ = nullptr;};
    inline bool privateLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEnabled_, false) };
    inline GetNatGatewayAttributeResponseBody& setPrivateLinkEnabled(bool privateLinkEnabled) { DARABONBA_PTR_SET_VALUE(privateLinkEnabled_, privateLinkEnabled) };


    // privateLinkMode Field Functions 
    bool hasPrivateLinkMode() const { return this->privateLinkMode_ != nullptr;};
    void deletePrivateLinkMode() { this->privateLinkMode_ = nullptr;};
    inline string privateLinkMode() const { DARABONBA_PTR_GET_DEFAULT(privateLinkMode_, "") };
    inline GetNatGatewayAttributeResponseBody& setPrivateLinkMode(string privateLinkMode) { DARABONBA_PTR_SET_VALUE(privateLinkMode_, privateLinkMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetNatGatewayAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNatGatewayAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetNatGatewayAttributeResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // snatTable Field Functions 
    bool hasSnatTable() const { return this->snatTable_ != nullptr;};
    void deleteSnatTable() { this->snatTable_ = nullptr;};
    inline const GetNatGatewayAttributeResponseBodySnatTable & snatTable() const { DARABONBA_PTR_GET_CONST(snatTable_, GetNatGatewayAttributeResponseBodySnatTable) };
    inline GetNatGatewayAttributeResponseBodySnatTable snatTable() { DARABONBA_PTR_GET(snatTable_, GetNatGatewayAttributeResponseBodySnatTable) };
    inline GetNatGatewayAttributeResponseBody& setSnatTable(const GetNatGatewayAttributeResponseBodySnatTable & snatTable) { DARABONBA_PTR_SET_VALUE(snatTable_, snatTable) };
    inline GetNatGatewayAttributeResponseBody& setSnatTable(GetNatGatewayAttributeResponseBodySnatTable && snatTable) { DARABONBA_PTR_SET_RVALUE(snatTable_, snatTable) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetNatGatewayAttributeResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetNatGatewayAttributeResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<GetNatGatewayAttributeResponseBodyAccessMode> accessMode_ = nullptr;
    // The billing information.
    std::shared_ptr<GetNatGatewayAttributeResponseBodyBillingConfig> billingConfig_ = nullptr;
    // The service status of the NAT gateway. Valid values:
    // 
    // *   **Normal**: normal
    // *   **FinancialLocked**: locked due to overdue payments
    std::shared_ptr<string> businessStatus_ = nullptr;
    // The time when the NAT gateway was created. Format: YYYY-MM-DDThh:mm:ssZ.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The information about the deletion protection feature.
    std::shared_ptr<GetNatGatewayAttributeResponseBodyDeletionProtectionInfo> deletionProtectionInfo_ = nullptr;
    // The description of the NAT gateway.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the traffic monitoring feature is enabled. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> ecsMetricEnabled_ = nullptr;
    std::shared_ptr<bool> enableSessionLog_ = nullptr;
    // The time when the NAT gateway expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The information about the DNAT table.
    std::shared_ptr<GetNatGatewayAttributeResponseBodyForwardTable> forwardTable_ = nullptr;
    // The information about the FULLNAT table.
    std::shared_ptr<GetNatGatewayAttributeResponseBodyFullNatTable> fullNatTable_ = nullptr;
    // The elastic IP addresses (EIPs) that are associated with the Internet NAT gateway.
    std::shared_ptr<vector<GetNatGatewayAttributeResponseBodyIpList>> ipList_ = nullptr;
    std::shared_ptr<GetNatGatewayAttributeResponseBodyLogDelivery> logDelivery_ = nullptr;
    // The name of the NAT gateway.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the NAT gateway.
    std::shared_ptr<string> natGatewayId_ = nullptr;
    // The type of the Internet NAT gateway. Only **Enhanced** is returned, which indicates an enhanced Internet NAT gateway.
    std::shared_ptr<string> natType_ = nullptr;
    // The type of the NAT gateway. Valid values:
    // 
    // *   **internet**: an Internet NAT gateway
    // *   **intranet**: a VPC NAT gateway
    std::shared_ptr<string> networkType_ = nullptr;
    // The private network information about the NAT gateway.
    std::shared_ptr<GetNatGatewayAttributeResponseBodyPrivateInfo> privateInfo_ = nullptr;
    // Indicates whether the NAT gateway supports PrivateLink. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> privateLinkEnabled_ = nullptr;
    // The mode that is used by PrivateLink. Valid values:
    // 
    // *   **FullNat**: the FULLNAT mode
    // *   **Geneve**: the GENEVE mode
    std::shared_ptr<string> privateLinkMode_ = nullptr;
    // The ID of the region where the NAT gateway is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The information about the SNAT table.
    std::shared_ptr<GetNatGatewayAttributeResponseBodySnatTable> snatTable_ = nullptr;
    // The status of the NAT gateway. Valid values:
    // 
    // *   **Creating**: being created. The operation to create a NAT gateway is asynchronous. The NAT gateway remains in the **Creating** state until it is created.
    // *   **Available**: available. After a NAT gateway is created, it remains in a stable state.
    // *   **Modifying**: being modified. The operation to upgrade or downgrade a NAT gateway is asynchronous. The NAT gateway remains in the **Modifying** state until it is upgraded or downgraded.
    // *   **Deleting**: being deleted. The operation to delete a NAT gateway is asynchronous. The NAT gateway remains in the **Deleting** state until it is deleted.
    // *   **Converting**: being converted. The operation to convert a standard NAT gateway to an enhanced NAT gateway is asynchronous. The NAT gateway remains in the **Converting** state until it is converted.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the VPC to which the NAT gateway belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
