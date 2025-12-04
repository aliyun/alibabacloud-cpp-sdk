// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVccResponseBodyContentAliyunRouterInfo.hpp>
#include <alibabacloud/models/GetVccResponseBodyContentCisRouterInfo.hpp>
#include <alibabacloud/models/GetVccResponseBodyContentErInfos.hpp>
#include <alibabacloud/models/GetVccResponseBodyContentTags.hpp>
#include <alibabacloud/models/GetVccResponseBodyContentVbrInfos.hpp>
#include <alibabacloud/models/GetVccResponseBodyContentVpdBaseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetVccResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(AliyunRouterInfo, aliyunRouterInfo_);
      DARABONBA_PTR_TO_JSON(AttachErStatus, attachErStatus_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BandwidthStr, bandwidthStr_);
      DARABONBA_PTR_TO_JSON(BgpAsn, bgpAsn_);
      DARABONBA_PTR_TO_JSON(BgpCidr, bgpCidr_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(CisRouterInfo, cisRouterInfo_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CurrentNode, currentNode_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ErInfos, erInfos_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VbrInfos, vbrInfos_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VccName, vccName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(AliyunRouterInfo, aliyunRouterInfo_);
      DARABONBA_PTR_FROM_JSON(AttachErStatus, attachErStatus_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BandwidthStr, bandwidthStr_);
      DARABONBA_PTR_FROM_JSON(BgpAsn, bgpAsn_);
      DARABONBA_PTR_FROM_JSON(BgpCidr, bgpCidr_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(CisRouterInfo, cisRouterInfo_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CurrentNode, currentNode_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ErInfos, erInfos_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VbrInfos, vbrInfos_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VccName, vccName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetVccResponseBodyContent() = default ;
    GetVccResponseBodyContent(const GetVccResponseBodyContent &) = default ;
    GetVccResponseBodyContent(GetVccResponseBodyContent &&) = default ;
    GetVccResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBodyContent() = default ;
    GetVccResponseBodyContent& operator=(const GetVccResponseBodyContent &) = default ;
    GetVccResponseBodyContent& operator=(GetVccResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && return this->aliyunRouterInfo_ == nullptr && return this->attachErStatus_ == nullptr && return this->bandwidth_ == nullptr && return this->bandwidthStr_ == nullptr && return this->bgpAsn_ == nullptr
        && return this->bgpCidr_ == nullptr && return this->cenId_ == nullptr && return this->cenOwnerId_ == nullptr && return this->cisRouterInfo_ == nullptr && return this->commodityCode_ == nullptr
        && return this->connectionType_ == nullptr && return this->createTime_ == nullptr && return this->currentNode_ == nullptr && return this->duration_ == nullptr && return this->erInfos_ == nullptr
        && return this->expirationDate_ == nullptr && return this->gmtModified_ == nullptr && return this->internetChargeType_ == nullptr && return this->lineOperator_ == nullptr && return this->message_ == nullptr
        && return this->payType_ == nullptr && return this->portType_ == nullptr && return this->pricingCycle_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->spec_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->tenantId_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vbrInfos_ == nullptr && return this->vccId_ == nullptr && return this->vccName_ == nullptr && return this->vpcId_ == nullptr && return this->vpdBaseInfo_ == nullptr
        && return this->vpdId_ == nullptr && return this->zoneId_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline GetVccResponseBodyContent& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // aliyunRouterInfo Field Functions 
    bool hasAliyunRouterInfo() const { return this->aliyunRouterInfo_ != nullptr;};
    void deleteAliyunRouterInfo() { this->aliyunRouterInfo_ = nullptr;};
    inline const vector<Models::GetVccResponseBodyContentAliyunRouterInfo> & aliyunRouterInfo() const { DARABONBA_PTR_GET_CONST(aliyunRouterInfo_, vector<Models::GetVccResponseBodyContentAliyunRouterInfo>) };
    inline vector<Models::GetVccResponseBodyContentAliyunRouterInfo> aliyunRouterInfo() { DARABONBA_PTR_GET(aliyunRouterInfo_, vector<Models::GetVccResponseBodyContentAliyunRouterInfo>) };
    inline GetVccResponseBodyContent& setAliyunRouterInfo(const vector<Models::GetVccResponseBodyContentAliyunRouterInfo> & aliyunRouterInfo) { DARABONBA_PTR_SET_VALUE(aliyunRouterInfo_, aliyunRouterInfo) };
    inline GetVccResponseBodyContent& setAliyunRouterInfo(vector<Models::GetVccResponseBodyContentAliyunRouterInfo> && aliyunRouterInfo) { DARABONBA_PTR_SET_RVALUE(aliyunRouterInfo_, aliyunRouterInfo) };


    // attachErStatus Field Functions 
    bool hasAttachErStatus() const { return this->attachErStatus_ != nullptr;};
    void deleteAttachErStatus() { this->attachErStatus_ = nullptr;};
    inline bool attachErStatus() const { DARABONBA_PTR_GET_DEFAULT(attachErStatus_, false) };
    inline GetVccResponseBodyContent& setAttachErStatus(bool attachErStatus) { DARABONBA_PTR_SET_VALUE(attachErStatus_, attachErStatus) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline GetVccResponseBodyContent& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bandwidthStr Field Functions 
    bool hasBandwidthStr() const { return this->bandwidthStr_ != nullptr;};
    void deleteBandwidthStr() { this->bandwidthStr_ = nullptr;};
    inline string bandwidthStr() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStr_, "") };
    inline GetVccResponseBodyContent& setBandwidthStr(string bandwidthStr) { DARABONBA_PTR_SET_VALUE(bandwidthStr_, bandwidthStr) };


    // bgpAsn Field Functions 
    bool hasBgpAsn() const { return this->bgpAsn_ != nullptr;};
    void deleteBgpAsn() { this->bgpAsn_ = nullptr;};
    inline string bgpAsn() const { DARABONBA_PTR_GET_DEFAULT(bgpAsn_, "") };
    inline GetVccResponseBodyContent& setBgpAsn(string bgpAsn) { DARABONBA_PTR_SET_VALUE(bgpAsn_, bgpAsn) };


    // bgpCidr Field Functions 
    bool hasBgpCidr() const { return this->bgpCidr_ != nullptr;};
    void deleteBgpCidr() { this->bgpCidr_ = nullptr;};
    inline string bgpCidr() const { DARABONBA_PTR_GET_DEFAULT(bgpCidr_, "") };
    inline GetVccResponseBodyContent& setBgpCidr(string bgpCidr) { DARABONBA_PTR_SET_VALUE(bgpCidr_, bgpCidr) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline GetVccResponseBodyContent& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline string cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, "") };
    inline GetVccResponseBodyContent& setCenOwnerId(string cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // cisRouterInfo Field Functions 
    bool hasCisRouterInfo() const { return this->cisRouterInfo_ != nullptr;};
    void deleteCisRouterInfo() { this->cisRouterInfo_ = nullptr;};
    inline const vector<Models::GetVccResponseBodyContentCisRouterInfo> & cisRouterInfo() const { DARABONBA_PTR_GET_CONST(cisRouterInfo_, vector<Models::GetVccResponseBodyContentCisRouterInfo>) };
    inline vector<Models::GetVccResponseBodyContentCisRouterInfo> cisRouterInfo() { DARABONBA_PTR_GET(cisRouterInfo_, vector<Models::GetVccResponseBodyContentCisRouterInfo>) };
    inline GetVccResponseBodyContent& setCisRouterInfo(const vector<Models::GetVccResponseBodyContentCisRouterInfo> & cisRouterInfo) { DARABONBA_PTR_SET_VALUE(cisRouterInfo_, cisRouterInfo) };
    inline GetVccResponseBodyContent& setCisRouterInfo(vector<Models::GetVccResponseBodyContentCisRouterInfo> && cisRouterInfo) { DARABONBA_PTR_SET_RVALUE(cisRouterInfo_, cisRouterInfo) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetVccResponseBodyContent& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline GetVccResponseBodyContent& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetVccResponseBodyContent& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentNode Field Functions 
    bool hasCurrentNode() const { return this->currentNode_ != nullptr;};
    void deleteCurrentNode() { this->currentNode_ = nullptr;};
    inline string currentNode() const { DARABONBA_PTR_GET_DEFAULT(currentNode_, "") };
    inline GetVccResponseBodyContent& setCurrentNode(string currentNode) { DARABONBA_PTR_SET_VALUE(currentNode_, currentNode) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetVccResponseBodyContent& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // erInfos Field Functions 
    bool hasErInfos() const { return this->erInfos_ != nullptr;};
    void deleteErInfos() { this->erInfos_ = nullptr;};
    inline const vector<Models::GetVccResponseBodyContentErInfos> & erInfos() const { DARABONBA_PTR_GET_CONST(erInfos_, vector<Models::GetVccResponseBodyContentErInfos>) };
    inline vector<Models::GetVccResponseBodyContentErInfos> erInfos() { DARABONBA_PTR_GET(erInfos_, vector<Models::GetVccResponseBodyContentErInfos>) };
    inline GetVccResponseBodyContent& setErInfos(const vector<Models::GetVccResponseBodyContentErInfos> & erInfos) { DARABONBA_PTR_SET_VALUE(erInfos_, erInfos) };
    inline GetVccResponseBodyContent& setErInfos(vector<Models::GetVccResponseBodyContentErInfos> && erInfos) { DARABONBA_PTR_SET_RVALUE(erInfos_, erInfos) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline GetVccResponseBodyContent& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetVccResponseBodyContent& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline GetVccResponseBodyContent& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string lineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline GetVccResponseBodyContent& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVccResponseBodyContent& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline GetVccResponseBodyContent& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string portType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline GetVccResponseBodyContent& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline GetVccResponseBodyContent& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetVccResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetVccResponseBodyContent& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline GetVccResponseBodyContent& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVccResponseBodyContent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetVccResponseBodyContentTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetVccResponseBodyContentTags>) };
    inline vector<Models::GetVccResponseBodyContentTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetVccResponseBodyContentTags>) };
    inline GetVccResponseBodyContent& setTags(const vector<Models::GetVccResponseBodyContentTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetVccResponseBodyContent& setTags(vector<Models::GetVccResponseBodyContentTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetVccResponseBodyContent& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetVccResponseBodyContent& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vbrInfos Field Functions 
    bool hasVbrInfos() const { return this->vbrInfos_ != nullptr;};
    void deleteVbrInfos() { this->vbrInfos_ = nullptr;};
    inline const vector<Models::GetVccResponseBodyContentVbrInfos> & vbrInfos() const { DARABONBA_PTR_GET_CONST(vbrInfos_, vector<Models::GetVccResponseBodyContentVbrInfos>) };
    inline vector<Models::GetVccResponseBodyContentVbrInfos> vbrInfos() { DARABONBA_PTR_GET(vbrInfos_, vector<Models::GetVccResponseBodyContentVbrInfos>) };
    inline GetVccResponseBodyContent& setVbrInfos(const vector<Models::GetVccResponseBodyContentVbrInfos> & vbrInfos) { DARABONBA_PTR_SET_VALUE(vbrInfos_, vbrInfos) };
    inline GetVccResponseBodyContent& setVbrInfos(vector<Models::GetVccResponseBodyContentVbrInfos> && vbrInfos) { DARABONBA_PTR_SET_RVALUE(vbrInfos_, vbrInfos) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline GetVccResponseBodyContent& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vccName Field Functions 
    bool hasVccName() const { return this->vccName_ != nullptr;};
    void deleteVccName() { this->vccName_ = nullptr;};
    inline string vccName() const { DARABONBA_PTR_GET_DEFAULT(vccName_, "") };
    inline GetVccResponseBodyContent& setVccName(string vccName) { DARABONBA_PTR_SET_VALUE(vccName_, vccName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetVccResponseBodyContent& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpdBaseInfo Field Functions 
    bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
    void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
    inline const Models::GetVccResponseBodyContentVpdBaseInfo & vpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Models::GetVccResponseBodyContentVpdBaseInfo) };
    inline Models::GetVccResponseBodyContentVpdBaseInfo vpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Models::GetVccResponseBodyContentVpdBaseInfo) };
    inline GetVccResponseBodyContent& setVpdBaseInfo(const Models::GetVccResponseBodyContentVpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
    inline GetVccResponseBodyContent& setVpdBaseInfo(Models::GetVccResponseBodyContentVpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetVccResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetVccResponseBodyContent& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Express Connect circuit access point ID:
    // 
    // *   **ap-cn-wulanchabu-jn-ts-A**: Ulanqab-Jining-A
    // *   **ap-cn-heyuan-yc-ts-SA127**: Heyuan-Yuancheng-A
    std::shared_ptr<string> accessPointId_ = nullptr;
    // Alibaba Cloud route information list
    std::shared_ptr<vector<Models::GetVccResponseBodyContentAliyunRouterInfo>> aliyunRouterInfo_ = nullptr;
    // Whether Lingjun HUB has been bound to a network instance
    // 
    // *   **true**: Bound
    // *   **false**: unbound
    std::shared_ptr<bool> attachErStatus_ = nullptr;
    // bandwidth
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The bandwidth of the port.
    std::shared_ptr<string> bandwidthStr_ = nullptr;
    // BGP AS number
    std::shared_ptr<string> bgpAsn_ = nullptr;
    // BGP CIDR block
    std::shared_ptr<string> bgpCidr_ = nullptr;
    // The ID of the CEN instance; [What is the CEN?](https://help.aliyun.com/document_detail/181681.html)
    // 
    // You can call the [DescribeCens](https://help.aliyun.com/document_detail/468215.htm) to query the information of CEN instances under the current Alibaba Cloud account.
    std::shared_ptr<string> cenId_ = nullptr;
    // Account to which the CEN belongs
    std::shared_ptr<string> cenOwnerId_ = nullptr;
    // Lingjun Network Routing Information List
    std::shared_ptr<vector<Models::GetVccResponseBodyContentCisRouterInfo>> cisRouterInfo_ = nullptr;
    // Commodity code
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The connection mode. Valid values:
    // 
    // *   **VPC**
    // *   **CENTR**
    std::shared_ptr<string> connectionType_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Current Node
    std::shared_ptr<string> currentNode_ = nullptr;
    // Cycle
    std::shared_ptr<string> duration_ = nullptr;
    // List of bound Lingjun HUB information
    std::shared_ptr<vector<Models::GetVccResponseBodyContentErInfos>> erInfos_ = nullptr;
    // The time when the application expired.
    std::shared_ptr<string> expirationDate_ = nullptr;
    // The time when the agent was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The billing method for network usage.
    // 
    // *   **PayByTraffic**: pay-by-traffic
    // *   **PayByBandwidth**: pay-by-bandwidth
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The connectivity provider of the Express Connect circuit. Valid values:
    // 
    // *   **CO**: other connectivity providers in the Chinese mainland
    std::shared_ptr<string> lineOperator_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **PREPAY**: subscription
    // *   **POSTPAY**: pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // The port type of the Express Connect circuit. Valid values:
    // 
    // *   **100GBase-LR**: 100,000 megabytes of single-mode optical port (10 km)
    std::shared_ptr<string> portType_ = nullptr;
    // The billing cycle. Valid values:
    // 
    // *   **Month**: Billed on a monthly basis
    // *   **Year**: Billed on an annual basis
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of your Alibaba Cloud resource group.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specification; value:
    // 
    // *   **Large**: Large
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the cache reserve instance. Valid values:
    // 
    // *   **Available**: Normal.
    // *   **Not Available**: Not available.
    // *   **Executing**: The task is being executed.
    // *   **Deleting**: The account is being deleted
    std::shared_ptr<string> status_ = nullptr;
    // The tag information.
    // 
    // You can specify up to 20 tags.
    std::shared_ptr<vector<Models::GetVccResponseBodyContentTags>> tags_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The ID of the vSwitch. [Virtual Private Cloud VSwitch](https://help.aliyun.com/document_detail/100380.html).
    // 
    // You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query created vSwitches.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // Information list of border routers
    std::shared_ptr<vector<Models::GetVccResponseBodyContentVbrInfos>> vbrInfos_ = nullptr;
    // The ID of the Lingjun connection instance.
    std::shared_ptr<string> vccId_ = nullptr;
    // The name of the Lingjun connection instance.
    std::shared_ptr<string> vccName_ = nullptr;
    // Virtual Private Cloud IDs; [What is Virtual Private Cloud](https://help.aliyun.com/document_detail/34217.html)
    // 
    // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html#demo-0) operation to query the specified VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Lingjun network segment information (applicable to the scene where the old version of Lingjun connection is directly bound to Lingjun network segment)
    std::shared_ptr<Models::GetVccResponseBodyContentVpdBaseInfo> vpdBaseInfo_ = nullptr;
    // Lingjun CIDR block instance ID
    std::shared_ptr<string> vpdId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
