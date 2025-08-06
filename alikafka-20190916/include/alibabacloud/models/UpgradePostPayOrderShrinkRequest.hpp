// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEPOSTPAYORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEPOSTPAYORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpgradePostPayOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradePostPayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
      DARABONBA_PTR_TO_JSON(EipModel, eipModel_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IoMax, ioMax_);
      DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradePostPayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
      DARABONBA_PTR_FROM_JSON(EipModel, eipModel_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IoMax, ioMax_);
      DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
    };
    UpgradePostPayOrderShrinkRequest() = default ;
    UpgradePostPayOrderShrinkRequest(const UpgradePostPayOrderShrinkRequest &) = default ;
    UpgradePostPayOrderShrinkRequest(UpgradePostPayOrderShrinkRequest &&) = default ;
    UpgradePostPayOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradePostPayOrderShrinkRequest() = default ;
    UpgradePostPayOrderShrinkRequest& operator=(const UpgradePostPayOrderShrinkRequest &) = default ;
    UpgradePostPayOrderShrinkRequest& operator=(UpgradePostPayOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskSize_ != nullptr
        && this->eipMax_ != nullptr && this->eipModel_ != nullptr && this->instanceId_ != nullptr && this->ioMax_ != nullptr && this->ioMaxSpec_ != nullptr
        && this->partitionNum_ != nullptr && this->regionId_ != nullptr && this->serverlessConfigShrink_ != nullptr && this->specType_ != nullptr && this->topicQuota_ != nullptr; };
    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t eipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // eipModel Field Functions 
    bool hasEipModel() const { return this->eipModel_ != nullptr;};
    void deleteEipModel() { this->eipModel_ = nullptr;};
    inline bool eipModel() const { DARABONBA_PTR_GET_DEFAULT(eipModel_, false) };
    inline UpgradePostPayOrderShrinkRequest& setEipModel(bool eipModel) { DARABONBA_PTR_SET_VALUE(eipModel_, eipModel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradePostPayOrderShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t ioMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string ioMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline UpgradePostPayOrderShrinkRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradePostPayOrderShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serverlessConfigShrink Field Functions 
    bool hasServerlessConfigShrink() const { return this->serverlessConfigShrink_ != nullptr;};
    void deleteServerlessConfigShrink() { this->serverlessConfigShrink_ = nullptr;};
    inline string serverlessConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigShrink_, "") };
    inline UpgradePostPayOrderShrinkRequest& setServerlessConfigShrink(string serverlessConfigShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigShrink_, serverlessConfigShrink) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline UpgradePostPayOrderShrinkRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t topicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The disk size. Unit: GB.
    // 
    // *   The disk size that you specify must be greater than or equal to the current disk size of the instance.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If the instance is a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The maximum Internet traffic of the instance.
    // 
    // *   The Internet traffic that you specify must be greater than or equal to the current Internet traffic of the instance.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > 
    // 
    // *   If you set **EipModel** to **true**, set **EipMax** to a value that is greater than 0.
    // 
    // *   If you set **EipModel** to **false**, set **EipMax** to **0**.
    // 
    // *   If the instance is a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> eipMax_ = nullptr;
    // Specifies whether to enable Internet access for the instance. Valid values:
    // 
    // *   true: enables Internet access.
    // *   false: disables Internet access.
    std::shared_ptr<bool> eipModel_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum traffic of the instance. We recommend that you do not configure this parameter.
    // 
    // *   The maximum traffic that you specify must be greater than or equal to the current maximum traffic of the instance.
    // *   You must configure at least one of IoMax and IoMaxSpec. If you configure both parameters, the value of IoMaxSpec takes effect. We recommend that you configure only IoMaxSpec.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If the instance is a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> ioMax_ = nullptr;
    // The traffic specification of the instance. We recommend that you configure this parameter.
    // 
    // *   The traffic specification that you specify must be greater than or equal to the current traffic specification of the instance.
    // *   You must configure at least one of IoMax and IoMaxSpec. If you configure both parameters, the value of IoMaxSpec takes effect. We recommend that you configure only IoMaxSpec.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If the instance is a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<string> ioMaxSpec_ = nullptr;
    // The number of partitions. We recommend that you configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only PartitionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If the instance is a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The parameters that are configured for the serverless instance. These parameters are required only when you create a serverless instance.
    std::shared_ptr<string> serverlessConfigShrink_ = nullptr;
    // The instance edition.
    // 
    // Valid values for this parameter if you set PaidType to 1:
    // 
    // *   normal: Standard Edition (High Write)
    // *   professional: Professional Edition (High Write)
    // *   professionalForHighRead: Professional Edition (High Read)
    // 
    // Valid values for this parameter if you set PaidType to 3:
    // 
    // *   normal: Serverless Standard Edition
    // 
    // For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    std::shared_ptr<string> specType_ = nullptr;
    // The number of topics. We recommend that you do not configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only PartitionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   The default value of TopicQuota varies based on the value of IoMaxSpec. If the number of topics that you use exceeds the default value, you are charged additional fees.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If the instance is a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> topicQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
