// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVCCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVCCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateVccRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class CreateVccRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVccRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessCouldService, accessCouldService_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BgpAsn, bgpAsn_);
      DARABONBA_PTR_TO_JSON(BgpCidr, bgpCidr_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VccName, vccName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVccRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessCouldService, accessCouldService_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BgpAsn, bgpAsn_);
      DARABONBA_PTR_FROM_JSON(BgpCidr, bgpCidr_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VccName, vccName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateVccRequest() = default ;
    CreateVccRequest(const CreateVccRequest &) = default ;
    CreateVccRequest(CreateVccRequest &&) = default ;
    CreateVccRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVccRequest() = default ;
    CreateVccRequest& operator=(const CreateVccRequest &) = default ;
    CreateVccRequest& operator=(CreateVccRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessCouldService_ == nullptr
        && return this->bandwidth_ == nullptr && return this->bgpAsn_ == nullptr && return this->bgpCidr_ == nullptr && return this->cenId_ == nullptr && return this->cenOwnerId_ == nullptr
        && return this->connectionType_ == nullptr && return this->description_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tag_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->vccId_ == nullptr && return this->vccName_ == nullptr && return this->vpcId_ == nullptr && return this->vpdId_ == nullptr
        && return this->zoneId_ == nullptr; };
    // accessCouldService Field Functions 
    bool hasAccessCouldService() const { return this->accessCouldService_ != nullptr;};
    void deleteAccessCouldService() { this->accessCouldService_ = nullptr;};
    inline bool accessCouldService() const { DARABONBA_PTR_GET_DEFAULT(accessCouldService_, false) };
    inline CreateVccRequest& setAccessCouldService(bool accessCouldService) { DARABONBA_PTR_SET_VALUE(accessCouldService_, accessCouldService) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateVccRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bgpAsn Field Functions 
    bool hasBgpAsn() const { return this->bgpAsn_ != nullptr;};
    void deleteBgpAsn() { this->bgpAsn_ = nullptr;};
    inline int64_t bgpAsn() const { DARABONBA_PTR_GET_DEFAULT(bgpAsn_, 0L) };
    inline CreateVccRequest& setBgpAsn(int64_t bgpAsn) { DARABONBA_PTR_SET_VALUE(bgpAsn_, bgpAsn) };


    // bgpCidr Field Functions 
    bool hasBgpCidr() const { return this->bgpCidr_ != nullptr;};
    void deleteBgpCidr() { this->bgpCidr_ = nullptr;};
    inline string bgpCidr() const { DARABONBA_PTR_GET_DEFAULT(bgpCidr_, "") };
    inline CreateVccRequest& setBgpCidr(string bgpCidr) { DARABONBA_PTR_SET_VALUE(bgpCidr_, bgpCidr) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateVccRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline string cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, "") };
    inline CreateVccRequest& setCenOwnerId(string cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // connectionType Field Functions 
    bool hasConnectionType() const { return this->connectionType_ != nullptr;};
    void deleteConnectionType() { this->connectionType_ = nullptr;};
    inline string connectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
    inline CreateVccRequest& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVccRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVccRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateVccRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVccRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVccRequestTag>) };
    inline vector<CreateVccRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateVccRequestTag>) };
    inline CreateVccRequest& setTag(const vector<CreateVccRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVccRequest& setTag(vector<CreateVccRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateVccRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string vccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline CreateVccRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vccName Field Functions 
    bool hasVccName() const { return this->vccName_ != nullptr;};
    void deleteVccName() { this->vccName_ = nullptr;};
    inline string vccName() const { DARABONBA_PTR_GET_DEFAULT(vccName_, "") };
    inline CreateVccRequest& setVccName(string vccName) { DARABONBA_PTR_SET_VALUE(vccName_, vccName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateVccRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline CreateVccRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateVccRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Enabled access to cloud services. Optional values:
    // 
    // *   **true**: Enable access to cloud services
    // *   **false**: Do not enable access to cloud services
    std::shared_ptr<bool> accessCouldService_ = nullptr;
    // The bandwidth. Unit: Mbit /s. The minimum value is 1000, representing 1Gbps bandwidth; the maximum value is 400000, representing 400Gbps bandwidth.
    // 
    // >  1Gbps = 1000Mbps
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // bgp as number
    std::shared_ptr<int64_t> bgpAsn_ = nullptr;
    // Internet segment, on-premises input, off-premises default
    std::shared_ptr<string> bgpCidr_ = nullptr;
    // CEN Instance ID
    std::shared_ptr<string> cenId_ = nullptr;
    // Account to which cen belongs
    std::shared_ptr<string> cenOwnerId_ = nullptr;
    // The connection mode. Valid values:
    // 
    // *   **VPC**
    // *   **CEN (CENTR)**
    std::shared_ptr<string> connectionType_ = nullptr;
    // The description of the document.
    std::shared_ptr<string> description_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag information.
    // 
    // You can specify up to 20 tags.
    std::shared_ptr<vector<CreateVccRequestTag>> tag_ = nullptr;
    // The ID of the vSwitch. [Virtual Private Cloud VSwitch](https://help.aliyun.com/document_detail/100380.html).
    // 
    // You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query created vSwitches.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the Lingjun connection instance.
    std::shared_ptr<string> vccId_ = nullptr;
    // Lingjun Connection Name
    std::shared_ptr<string> vccName_ = nullptr;
    // Virtual Private Cloud IDs; [What is Virtual Private Cloud](https://help.aliyun.com/document_detail/34217.html)
    // 
    // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html#demo-0) operation to query the specified VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // Lingjun CIDR block instance ID
    std::shared_ptr<string> vpdId_ = nullptr;
    // The zone ID of the disk.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
