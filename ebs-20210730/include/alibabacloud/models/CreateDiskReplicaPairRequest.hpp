// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDISKREPLICAPAIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDISKREPLICAPAIRREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDiskReplicaPairRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class CreateDiskReplicaPairRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiskReplicaPairRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationDiskId, destinationDiskId_);
      DARABONBA_PTR_TO_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_TO_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_TO_JSON(PairName, pairName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RPO, RPO_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiskReplicaPairRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationDiskId, destinationDiskId_);
      DARABONBA_PTR_FROM_JSON(DestinationRegionId, destinationRegionId_);
      DARABONBA_PTR_FROM_JSON(DestinationZoneId, destinationZoneId_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(EnableRtc, enableRtc_);
      DARABONBA_PTR_FROM_JSON(PairName, pairName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RPO, RPO_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SourceZoneId, sourceZoneId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateDiskReplicaPairRequest() = default ;
    CreateDiskReplicaPairRequest(const CreateDiskReplicaPairRequest &) = default ;
    CreateDiskReplicaPairRequest(CreateDiskReplicaPairRequest &&) = default ;
    CreateDiskReplicaPairRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiskReplicaPairRequest() = default ;
    CreateDiskReplicaPairRequest& operator=(const CreateDiskReplicaPairRequest &) = default ;
    CreateDiskReplicaPairRequest& operator=(CreateDiskReplicaPairRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->chargeType_ == nullptr && return this->clientToken_ == nullptr && return this->description_ == nullptr && return this->destinationDiskId_ == nullptr && return this->destinationRegionId_ == nullptr
        && return this->destinationZoneId_ == nullptr && return this->diskId_ == nullptr && return this->enableRtc_ == nullptr && return this->pairName_ == nullptr && return this->period_ == nullptr
        && return this->periodUnit_ == nullptr && return this->RPO_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sourceZoneId_ == nullptr
        && return this->tag_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int64_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0L) };
    inline CreateDiskReplicaPairRequest& setBandwidth(int64_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateDiskReplicaPairRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDiskReplicaPairRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDiskReplicaPairRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationDiskId Field Functions 
    bool hasDestinationDiskId() const { return this->destinationDiskId_ != nullptr;};
    void deleteDestinationDiskId() { this->destinationDiskId_ = nullptr;};
    inline string destinationDiskId() const { DARABONBA_PTR_GET_DEFAULT(destinationDiskId_, "") };
    inline CreateDiskReplicaPairRequest& setDestinationDiskId(string destinationDiskId) { DARABONBA_PTR_SET_VALUE(destinationDiskId_, destinationDiskId) };


    // destinationRegionId Field Functions 
    bool hasDestinationRegionId() const { return this->destinationRegionId_ != nullptr;};
    void deleteDestinationRegionId() { this->destinationRegionId_ = nullptr;};
    inline string destinationRegionId() const { DARABONBA_PTR_GET_DEFAULT(destinationRegionId_, "") };
    inline CreateDiskReplicaPairRequest& setDestinationRegionId(string destinationRegionId) { DARABONBA_PTR_SET_VALUE(destinationRegionId_, destinationRegionId) };


    // destinationZoneId Field Functions 
    bool hasDestinationZoneId() const { return this->destinationZoneId_ != nullptr;};
    void deleteDestinationZoneId() { this->destinationZoneId_ = nullptr;};
    inline string destinationZoneId() const { DARABONBA_PTR_GET_DEFAULT(destinationZoneId_, "") };
    inline CreateDiskReplicaPairRequest& setDestinationZoneId(string destinationZoneId) { DARABONBA_PTR_SET_VALUE(destinationZoneId_, destinationZoneId) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline CreateDiskReplicaPairRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // enableRtc Field Functions 
    bool hasEnableRtc() const { return this->enableRtc_ != nullptr;};
    void deleteEnableRtc() { this->enableRtc_ = nullptr;};
    inline bool enableRtc() const { DARABONBA_PTR_GET_DEFAULT(enableRtc_, false) };
    inline CreateDiskReplicaPairRequest& setEnableRtc(bool enableRtc) { DARABONBA_PTR_SET_VALUE(enableRtc_, enableRtc) };


    // pairName Field Functions 
    bool hasPairName() const { return this->pairName_ != nullptr;};
    void deletePairName() { this->pairName_ = nullptr;};
    inline string pairName() const { DARABONBA_PTR_GET_DEFAULT(pairName_, "") };
    inline CreateDiskReplicaPairRequest& setPairName(string pairName) { DARABONBA_PTR_SET_VALUE(pairName_, pairName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline CreateDiskReplicaPairRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateDiskReplicaPairRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // RPO Field Functions 
    bool hasRPO() const { return this->RPO_ != nullptr;};
    void deleteRPO() { this->RPO_ = nullptr;};
    inline int64_t RPO() const { DARABONBA_PTR_GET_DEFAULT(RPO_, 0L) };
    inline CreateDiskReplicaPairRequest& setRPO(int64_t RPO) { DARABONBA_PTR_SET_VALUE(RPO_, RPO) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDiskReplicaPairRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDiskReplicaPairRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sourceZoneId Field Functions 
    bool hasSourceZoneId() const { return this->sourceZoneId_ != nullptr;};
    void deleteSourceZoneId() { this->sourceZoneId_ = nullptr;};
    inline string sourceZoneId() const { DARABONBA_PTR_GET_DEFAULT(sourceZoneId_, "") };
    inline CreateDiskReplicaPairRequest& setSourceZoneId(string sourceZoneId) { DARABONBA_PTR_SET_VALUE(sourceZoneId_, sourceZoneId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateDiskReplicaPairRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateDiskReplicaPairRequestTag>) };
    inline vector<CreateDiskReplicaPairRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateDiskReplicaPairRequestTag>) };
    inline CreateDiskReplicaPairRequest& setTag(const vector<CreateDiskReplicaPairRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateDiskReplicaPairRequest& setTag(vector<CreateDiskReplicaPairRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The bandwidth to use to asynchronously replicate data from the primary disk to the secondary disk. Unit: Kbit/s. Valid values:
    // 
    // *   10240
    // *   20480
    // *   51200
    // *   102400
    // 
    // Default value: 10240. When you set the ChargeType parameter to POSTPAY, the Bandwidth parameter is automatically set to 0 and cannot be modified. The value 0 indicates that bandwidth is dynamically allocated based on the volume of data that is asynchronously replicated from the primary disk to the secondary disk.
    std::shared_ptr<int64_t> bandwidth_ = nullptr;
    // The billing method of the replication pair. Valid values:
    // 
    // *   PREPAY: subscription
    // *   POSTPAY: pay-as-you-go
    // 
    // Default value: POSTPAY.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The client token to ensure the idempotency of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the replication pair. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the secondary disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationDiskId_ = nullptr;
    // The region ID of the secondary disk. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which async replication is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationRegionId_ = nullptr;
    // The zone ID of the secondary disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> destinationZoneId_ = nullptr;
    // The ID of the primary disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> diskId_ = nullptr;
    // Whether to enable replication time control. By default, this parameter is disabled.
    std::shared_ptr<bool> enableRtc_ = nullptr;
    // The name of the replication pair. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    std::shared_ptr<string> pairName_ = nullptr;
    // The subscription duration of the replication pair. When `ChargeType` is set to PREPAY, this parameter must be specified. Valid values: 1, 2, 3, 6, 12, 24, 36, and 60. The subscription duration unit is specified by `PeriodUnit`.
    std::shared_ptr<int64_t> period_ = nullptr;
    // The unit of the subscription duration of the replication pair. Set the value to Month. Valid value: Month
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The recovery point objective (RPO) of the replication pair. Unit: seconds. Valid value: 900.
    std::shared_ptr<int64_t> RPO_ = nullptr;
    // The ID of the region in which to create the replication pair.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the replication pair belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The zone ID of the primary disk.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceZoneId_ = nullptr;
    // The tags to add to the replication pair-consistent group. You can specify up to 20 tags.
    std::shared_ptr<vector<CreateDiskReplicaPairRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
