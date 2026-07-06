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
    virtual bool empty() const override { return this->diskSize_ == nullptr
        && this->eipMax_ == nullptr && this->eipModel_ == nullptr && this->instanceId_ == nullptr && this->ioMax_ == nullptr && this->ioMaxSpec_ == nullptr
        && this->partitionNum_ == nullptr && this->regionId_ == nullptr && this->serverlessConfigShrink_ == nullptr && this->specType_ == nullptr && this->topicQuota_ == nullptr; };
    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // eipModel Field Functions 
    bool hasEipModel() const { return this->eipModel_ != nullptr;};
    void deleteEipModel() { this->eipModel_ = nullptr;};
    inline bool getEipModel() const { DARABONBA_PTR_GET_DEFAULT(eipModel_, false) };
    inline UpgradePostPayOrderShrinkRequest& setEipModel(bool eipModel) { DARABONBA_PTR_SET_VALUE(eipModel_, eipModel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpgradePostPayOrderShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t getIoMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline UpgradePostPayOrderShrinkRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradePostPayOrderShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serverlessConfigShrink Field Functions 
    bool hasServerlessConfigShrink() const { return this->serverlessConfigShrink_ != nullptr;};
    void deleteServerlessConfigShrink() { this->serverlessConfigShrink_ = nullptr;};
    inline string getServerlessConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigShrink_, "") };
    inline UpgradePostPayOrderShrinkRequest& setServerlessConfigShrink(string serverlessConfigShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigShrink_, serverlessConfigShrink) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline UpgradePostPayOrderShrinkRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t getTopicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline UpgradePostPayOrderShrinkRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The disk capacity. Unit: GB.
    // 
    // - The disk capacity that you specify must be greater than or equal to the current disk capacity of the instance.
    // 
    // - For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If the instance is a serverless instance, you do not need to specify this parameter. This parameter is required for pay-as-you-go instances.
    shared_ptr<int32_t> diskSize_ {};
    // The Internet traffic.
    // 
    // - The Internet traffic that you specify must be greater than or equal to the current Internet traffic of the instance.
    // - For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > - If EipModel is set to true, the value of EipMax must be greater than 0.
    // > - If EipModel is set to false, the value of EipMax must be 0.
    // > - If the instance is a serverless instance, you do not need to specify this parameter.
    shared_ptr<int32_t> eipMax_ {};
    // Specifies whether the instance requires Internet access. Valid values:
    // 
    // - true: Internet access is required.
    // 
    // - false: Internet access is not required.
    // > This parameter is optional for pay-as-you-go instances. This parameter is required for serverless instances.
    shared_ptr<bool> eipModel_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The peak traffic (not recommended).
    // 
    // - The peak traffic that you specify must be greater than or equal to the current peak traffic of the instance.
    // 
    // - You must specify either the peak traffic or the traffic specification. If you specify both, the traffic specification takes precedence. Specify only the traffic specification.
    // 
    // - For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // > If the instance is a serverless instance, you do not need to specify this parameter.
    shared_ptr<int32_t> ioMax_ {};
    // The traffic specification (recommended).
    // 
    // - The traffic specification that you specify must be greater than or equal to the current traffic specification of the instance.
    // 
    // - You must specify either the peak traffic or the traffic specification. If you specify both, the traffic specification takes precedence. Specify only the traffic specification.
    // 
    // - For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // > If the instance is a serverless instance, you do not need to specify this parameter. This parameter is required for pay-as-you-go instances.
    shared_ptr<string> ioMaxSpec_ {};
    // The number of partitions (recommended).
    // 
    // * You must specify either the number of partitions or the topic specification. Specify only the number of partitions.
    // 
    // * If you specify both the number of partitions and the topic specification, the system validates whether the number of partitions and the topic specification are equivalent based on the legacy topic sales model. If they are not equivalent, an error is returned. If they are equivalent, the purchase is made based on the number of partitions.
    // 
    // * For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // > If the instance is a serverless instance, you do not need to specify this parameter. This parameter is required for pay-as-you-go instances.
    shared_ptr<int32_t> partitionNum_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The settings of the serverless instance. This parameter is required when you change the specifications of a serverless instance.
    shared_ptr<string> serverlessConfigShrink_ {};
    // The specification type.
    // 
    // If the PaidType of the instance is 1 (pay-as-you-go), valid values:
    // 
    // - normal: Standard Edition (shared throughput)
    // - professional: Professional Edition (shared throughput)
    // - professionalForHighRead: Professional Edition (shared read throughput)
    // 
    // If the PaidType of the instance is 3 (reserved specification pay-as-you-go + serverless elastic scaling pay-as-you-go), valid values:
    // - normal: Serverless Standard Edition
    // 
    // For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<string> specType_ {};
    // The number of topics (not recommended).
    // 
    // - You must specify either the number of partitions or the topic specification. Specify only the number of partitions.
    // 
    // - If you specify both the number of partitions and the topic specification, the system validates whether the number of partitions and the topic specification are equivalent based on the legacy topic sales model. If they are not equivalent, an error is returned. If they are equivalent, the purchase is made based on the number of partitions.
    // 
    // - The default value varies based on the traffic specification. Additional fees are charged if the value exceeds the default value.
    // 
    // - For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // > If the instance is a serverless instance, you do not need to specify this parameter.
    shared_ptr<int32_t> topicQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
