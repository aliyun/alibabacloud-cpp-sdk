// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCSRESPONSEBODYCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCSRESPONSEBODYCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVccsResponseBodyContentDataErInfos.hpp>
#include <alibabacloud/models/ListVccsResponseBodyContentDataTags.hpp>
#include <alibabacloud/models/ListVccsResponseBodyContentDataVpdBaseInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccsResponseBodyContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccsResponseBodyContentData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_TO_JSON(BandwidthStr, bandwidthStr_);
      DARABONBA_PTR_TO_JSON(BgpAsn, bgpAsn_);
      DARABONBA_PTR_TO_JSON(BgpCidr, bgpCidr_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CurrentNode, currentNode_);
      DARABONBA_PTR_TO_JSON(ErInfos, erInfos_);
      DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VccName, vccName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccsResponseBodyContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
      DARABONBA_PTR_FROM_JSON(BandwidthStr, bandwidthStr_);
      DARABONBA_PTR_FROM_JSON(BgpAsn, bgpAsn_);
      DARABONBA_PTR_FROM_JSON(BgpCidr, bgpCidr_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CurrentNode, currentNode_);
      DARABONBA_PTR_FROM_JSON(ErInfos, erInfos_);
      DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VccName, vccName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListVccsResponseBodyContentData() = default ;
    ListVccsResponseBodyContentData(const ListVccsResponseBodyContentData &) = default ;
    ListVccsResponseBodyContentData(ListVccsResponseBodyContentData &&) = default ;
    ListVccsResponseBodyContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccsResponseBodyContentData() = default ;
    ListVccsResponseBodyContentData& operator=(const ListVccsResponseBodyContentData &) = default ;
    ListVccsResponseBodyContentData& operator=(ListVccsResponseBodyContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessPointId_ == nullptr
        && return this->bandwidthStr_ == nullptr && return this->bgpAsn_ == nullptr && return this->bgpCidr_ == nullptr && return this->cenId_ == nullptr && return this->cenOwnerId_ == nullptr
        && return this->commodityCode_ == nullptr && return this->connectionType_ == nullptr && return this->createTime_ == nullptr && return this->currentNode_ == nullptr && return this->erInfos_ == nullptr
        && return this->expirationDate_ == nullptr && return this->gmtModified_ == nullptr && return this->lineOperator_ == nullptr && return this->message_ == nullptr && return this->portType_ == nullptr
        && return this->rate_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->spec_ == nullptr && return this->status_ == nullptr
        && return this->tags_ == nullptr && return this->taskId_ == nullptr && return this->tenantId_ == nullptr && return this->vccId_ == nullptr && return this->vccName_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpdBaseInfo_ == nullptr && return this->vpdId_ == nullptr && return this->zoneId_ == nullptr; };
    // accessPointId Field Functions 
    bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
    void deleteAccessPointId() { this->accessPointId_ = nullptr;};
    inline string accessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
    inline ListVccsResponseBodyContentData& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


    // bandwidthStr Field Functions 
    bool hasBandwidthStr() const { return this->bandwidthStr_ != nullptr;};
    void deleteBandwidthStr() { this->bandwidthStr_ = nullptr;};
    inline string bandwidthStr() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStr_, "") };
    inline ListVccsResponseBodyContentData& setBandwidthStr(string bandwidthStr) { DARABONBA_PTR_SET_VALUE(bandwidthStr_, bandwidthStr) };


    // bgpAsn Field Functions 
    bool hasBgpAsn() const { return this->bgpAsn_ != nullptr;};
    void deleteBgpAsn() { this->bgpAsn_ = nullptr;};
    inline string bgpAsn() const { DARABONBA_PTR_GET_DEFAULT(bgpAsn_, "") };
    inline ListVccsResponseBodyContentData& setBgpAsn(string bgpAsn) { DARABONBA_PTR_SET_VALUE(bgpAsn_, bgpAsn) };


    // bgpCidr Field Functions 
    bool hasBgpCidr() const { return this->bgpCidr_ != nullptr;};
    void deleteBgpCidr() { this->bgpCidr_ = nullptr;};
    inline string bgpCidr() const { DARABONBA_PTR_GET_DEFAULT(bgpCidr_, "") };
    inline ListVccsResponseBodyContentData& setBgpCidr(string bgpCidr) { DARABONBA_PTR_SET_VALUE(bgpCidr_, bgpCidr) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListVccsResponseBodyContentData& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline string cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, "") };
    inline ListVccsResponseBodyContentData& setCenOwnerId(string cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListVccsResponseBodyContentData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline ListVccsResponseBodyContentData& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListVccsResponseBodyContentData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentNode Field Functions 
    bool hasCurrentNode() const { return this->currentNode_ != nullptr;};
    void deleteCurrentNode() { this->currentNode_ = nullptr;};
    inline string currentNode() const { DARABONBA_PTR_GET_DEFAULT(currentNode_, "") };
    inline ListVccsResponseBodyContentData& setCurrentNode(string currentNode) { DARABONBA_PTR_SET_VALUE(currentNode_, currentNode) };


    // erInfos Field Functions 
    bool hasErInfos() const { return this->erInfos_ != nullptr;};
    void deleteErInfos() { this->erInfos_ = nullptr;};
    inline const vector<Models::ListVccsResponseBodyContentDataErInfos> & erInfos() const { DARABONBA_PTR_GET_CONST(erInfos_, vector<Models::ListVccsResponseBodyContentDataErInfos>) };
    inline vector<Models::ListVccsResponseBodyContentDataErInfos> erInfos() { DARABONBA_PTR_GET(erInfos_, vector<Models::ListVccsResponseBodyContentDataErInfos>) };
    inline ListVccsResponseBodyContentData& setErInfos(const vector<Models::ListVccsResponseBodyContentDataErInfos> & erInfos) { DARABONBA_PTR_SET_VALUE(erInfos_, erInfos) };
    inline ListVccsResponseBodyContentData& setErInfos(vector<Models::ListVccsResponseBodyContentDataErInfos> && erInfos) { DARABONBA_PTR_SET_RVALUE(erInfos_, erInfos) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline ListVccsResponseBodyContentData& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListVccsResponseBodyContentData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // lineOperator Field Functions 
    bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
    void deleteLineOperator() { this->lineOperator_ = nullptr;};
    inline string lineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
    inline ListVccsResponseBodyContentData& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVccsResponseBodyContentData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string portType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline ListVccsResponseBodyContentData& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ListVccsResponseBodyContentData& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVccsResponseBodyContentData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVccsResponseBodyContentData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListVccsResponseBodyContentData& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVccsResponseBodyContentData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListVccsResponseBodyContentDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListVccsResponseBodyContentDataTags>) };
    inline vector<Models::ListVccsResponseBodyContentDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListVccsResponseBodyContentDataTags>) };
    inline ListVccsResponseBodyContentData& setTags(const vector<Models::ListVccsResponseBodyContentDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVccsResponseBodyContentData& setTags(vector<Models::ListVccsResponseBodyContentDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListVccsResponseBodyContentData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListVccsResponseBodyContentData& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline ListVccsResponseBodyContentData& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vccName Field Functions 
    bool hasVccName() const { return this->vccName_ != nullptr;};
    void deleteVccName() { this->vccName_ = nullptr;};
    inline string vccName() const { DARABONBA_PTR_GET_DEFAULT(vccName_, "") };
    inline ListVccsResponseBodyContentData& setVccName(string vccName) { DARABONBA_PTR_SET_VALUE(vccName_, vccName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVccsResponseBodyContentData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpdBaseInfo Field Functions 
    bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
    void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
    inline const Models::ListVccsResponseBodyContentDataVpdBaseInfo & vpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Models::ListVccsResponseBodyContentDataVpdBaseInfo) };
    inline Models::ListVccsResponseBodyContentDataVpdBaseInfo vpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Models::ListVccsResponseBodyContentDataVpdBaseInfo) };
    inline ListVccsResponseBodyContentData& setVpdBaseInfo(const Models::ListVccsResponseBodyContentDataVpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
    inline ListVccsResponseBodyContentData& setVpdBaseInfo(Models::ListVccsResponseBodyContentDataVpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline ListVccsResponseBodyContentData& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListVccsResponseBodyContentData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Express Connect circuit access point ID:
    // 
    // *   **ap-cn-wulanchabu-jn-ts-A**: Ulanqab-Jining-A
    // *   **ap-cn-heyuan-yc-ts-SA127**: Heyuan-Yuancheng-A
    std::shared_ptr<string> accessPointId_ = nullptr;
    // The bandwidth of the port.
    std::shared_ptr<string> bandwidthStr_ = nullptr;
    // bgp as number
    std::shared_ptr<string> bgpAsn_ = nullptr;
    // bgp network segment
    std::shared_ptr<string> bgpCidr_ = nullptr;
    // The ID of the CEN instance; [What is the CEN?](https://help.aliyun.com/document_detail/181681.html)
    // 
    // You can call the [DescribeCens](https://help.aliyun.com/document_detail/468215.htm) to query the information of CEN instances under the current Alibaba Cloud account.
    std::shared_ptr<string> cenId_ = nullptr;
    // Account to which cen belongs
    std::shared_ptr<string> cenOwnerId_ = nullptr;
    // Commodity code
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The connection mode. Valid values:
    // 
    // *   **VPC**
    // *   **CENTR**
    std::shared_ptr<string> connectionType_ = nullptr;
    // The time when the data address was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // Current process node
    std::shared_ptr<string> currentNode_ = nullptr;
    // List of bound Lingjun HUB information
    std::shared_ptr<vector<Models::ListVccsResponseBodyContentDataErInfos>> erInfos_ = nullptr;
    // The time when the application expired.
    std::shared_ptr<string> expirationDate_ = nullptr;
    // The time when the cluster was updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The connectivity provider of the Express Connect circuit. Valid values:
    // 
    // *   **CO**: other connectivity providers in the Chinese mainland
    std::shared_ptr<string> lineOperator_ = nullptr;
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    std::shared_ptr<string> message_ = nullptr;
    // The port type of the Express Connect circuit. Valid values:
    // 
    // *   **100GBase-LR**: 100,000 megabytes of single-mode optical port (10 km)
    std::shared_ptr<string> portType_ = nullptr;
    // Process progress; value returns 0 to 1; not started is null
    std::shared_ptr<double> rate_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of your Alibaba Cloud resource group.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The compute specification.
    std::shared_ptr<string> spec_ = nullptr;
    // The state of the rule.
    std::shared_ptr<string> status_ = nullptr;
    // The tag information.
    // 
    // You can specify up to 20 tags.
    std::shared_ptr<vector<Models::ListVccsResponseBodyContentDataTags>> tags_ = nullptr;
    // The job ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The ID of the Lingjun connection instance.
    std::shared_ptr<string> vccId_ = nullptr;
    // The name of the Lingjun connection instance.
    std::shared_ptr<string> vccName_ = nullptr;
    // Virtual Private Cloud IDs; [What is Virtual Private Cloud](https://help.aliyun.com/document_detail/34217.html)
    // 
    // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html#demo-0) operation to query the specified VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Lingjun network segment information (applicable to the scene where the old version of Lingjun connection is directly bound to Lingjun network segment)
    std::shared_ptr<Models::ListVccsResponseBodyContentDataVpdBaseInfo> vpdBaseInfo_ = nullptr;
    // Lingjun CIDR block instance ID
    std::shared_ptr<string> vpdId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
