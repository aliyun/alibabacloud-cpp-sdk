// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEPREPAYORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEPREPAYORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpgradePrePayOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradePrePayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfigShrink_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
      DARABONBA_PTR_TO_JSON(EipModel, eipModel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IoMax, ioMax_);
      DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_TO_JSON(PaidType, paidType_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradePrePayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
      DARABONBA_PTR_FROM_JSON(EipModel, eipModel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IoMax, ioMax_);
      DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
    };
    UpgradePrePayOrderShrinkRequest() = default ;
    UpgradePrePayOrderShrinkRequest(const UpgradePrePayOrderShrinkRequest &) = default ;
    UpgradePrePayOrderShrinkRequest(UpgradePrePayOrderShrinkRequest &&) = default ;
    UpgradePrePayOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradePrePayOrderShrinkRequest() = default ;
    UpgradePrePayOrderShrinkRequest& operator=(const UpgradePrePayOrderShrinkRequest &) = default ;
    UpgradePrePayOrderShrinkRequest& operator=(UpgradePrePayOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confluentConfigShrink_ == nullptr
        && this->diskSize_ == nullptr && this->eipMax_ == nullptr && this->eipModel_ == nullptr && this->instanceId_ == nullptr && this->ioMax_ == nullptr
        && this->ioMaxSpec_ == nullptr && this->paidType_ == nullptr && this->partitionNum_ == nullptr && this->regionId_ == nullptr && this->specType_ == nullptr
        && this->topicQuota_ == nullptr; };
    // confluentConfigShrink Field Functions 
    bool hasConfluentConfigShrink() const { return this->confluentConfigShrink_ != nullptr;};
    void deleteConfluentConfigShrink() { this->confluentConfigShrink_ = nullptr;};
    inline string getConfluentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(confluentConfigShrink_, "") };
    inline UpgradePrePayOrderShrinkRequest& setConfluentConfigShrink(string confluentConfigShrink) { DARABONBA_PTR_SET_VALUE(confluentConfigShrink_, confluentConfigShrink) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline UpgradePrePayOrderShrinkRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline UpgradePrePayOrderShrinkRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // eipModel Field Functions 
    bool hasEipModel() const { return this->eipModel_ != nullptr;};
    void deleteEipModel() { this->eipModel_ = nullptr;};
    inline bool getEipModel() const { DARABONBA_PTR_GET_DEFAULT(eipModel_, false) };
    inline UpgradePrePayOrderShrinkRequest& setEipModel(bool eipModel) { DARABONBA_PTR_SET_VALUE(eipModel_, eipModel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradePrePayOrderShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t getIoMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline UpgradePrePayOrderShrinkRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline UpgradePrePayOrderShrinkRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline UpgradePrePayOrderShrinkRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline UpgradePrePayOrderShrinkRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradePrePayOrderShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline UpgradePrePayOrderShrinkRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t getTopicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline UpgradePrePayOrderShrinkRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // Configurations for the Confluent components.
    shared_ptr<string> confluentConfigShrink_ {};
    // The disk capacity.
    // 
    // - The specified disk capacity must be greater than or equal to the current disk capacity of the instance.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > This parameter is required for subscription instances but not for Confluent-series instances.
    shared_ptr<int32_t> diskSize_ {};
    // The maximum Internet traffic bandwidth.
    // 
    // - The specified Internet traffic bandwidth must be greater than or equal to the current Internet traffic bandwidth of the instance.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > * If **EipModel** is set to **true**, **EipMax** must be greater than 0.
    // >
    // > * If **EipModel** is set to **false**, **EipMax** must be set to **0**.
    shared_ptr<int32_t> eipMax_ {};
    // Specifies whether to enable Internet access. Valid values:
    // 
    // - `true`: enables Internet access.
    // 
    // - `false`: disables Internet access.
    // 
    // > This parameter is required for subscription instances but not for Confluent-series instances.
    shared_ptr<bool> eipModel_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The traffic peak (not recommended).
    // 
    // - The specified traffic peak must be greater than or equal to the current traffic peak of the instance.
    // 
    // - You must specify either this parameter or `IoMaxSpec`. If you specify both, `IoMaxSpec` takes precedence. We recommend that you specify only `IoMaxSpec`.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<int32_t> ioMax_ {};
    // The traffic specification (recommended).
    // 
    // - The specified traffic specification must be greater than or equal to the current traffic specification of the instance.
    // 
    // - You must specify either this parameter or `IoMax`. If you specify both, this parameter takes precedence. We recommend that you specify only this parameter.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > This parameter is required for subscription instances but not for Confluent-series instances.
    shared_ptr<string> ioMaxSpec_ {};
    // The billing method. Valid values:
    // 
    // - **0**: subscription
    // 
    // - **4**: subscription for Confluent instances
    shared_ptr<int32_t> paidType_ {};
    // The number of partitions (recommended).
    // 
    // - You must specify either this parameter or `TopicQuota`. We recommend that you specify only this parameter.
    // 
    // - If you specify both `PartitionNum` and `TopicQuota`, the system checks if their values are equivalent under the previous topic pricing model. A mismatch causes the request to fail. If they match, the system uses `PartitionNum` to process the purchase.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > This parameter is required for subscription instances but not for Confluent-series instances.
    shared_ptr<int32_t> partitionNum_ {};
    // The ID of the region where the instance is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The specification type.
    // 
    // Valid values for ApsaraMQ for Kafka instances:
    // 
    // - **normal**: Standard Edition (high write)
    // 
    // - **professional**: Professional Edition (high write)
    // 
    // - **professionalForHighRead**: Professional Edition (high read)
    // 
    // Valid values for Confluent instances:
    // 
    // - **professional**: Professional Edition
    // 
    // - **enterprise**: Enterprise Edition
    // 
    // You cannot downgrade an instance from Professional Edition to Standard Edition. For more information about these specification types, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<string> specType_ {};
    // The number of topics (not recommended).
    // 
    // - You must specify either this parameter or `PartitionNum`. We recommend that you specify only `PartitionNum`.
    // 
    // - If you specify both `TopicQuota` and `PartitionNum`, the system checks if their values are equivalent under the previous topic pricing model. A mismatch causes the request to fail. If they match, the system uses `PartitionNum` to process the purchase.
    // 
    // - The default value of this parameter varies based on the traffic specification. You are charged additional fees if the specified value exceeds the default value.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<int32_t> topicQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
