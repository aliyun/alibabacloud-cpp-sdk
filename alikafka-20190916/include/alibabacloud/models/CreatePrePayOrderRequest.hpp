// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREPAYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREPAYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePrePayOrderRequestConfluentConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreatePrePayOrderRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreatePrePayOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrePayOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfig_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
      DARABONBA_PTR_TO_JSON(IoMax, ioMax_);
      DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_TO_JSON(PaidType, paidType_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrePayOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfig_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
      DARABONBA_PTR_FROM_JSON(IoMax, ioMax_);
      DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
    };
    CreatePrePayOrderRequest() = default ;
    CreatePrePayOrderRequest(const CreatePrePayOrderRequest &) = default ;
    CreatePrePayOrderRequest(CreatePrePayOrderRequest &&) = default ;
    CreatePrePayOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrePayOrderRequest() = default ;
    CreatePrePayOrderRequest& operator=(const CreatePrePayOrderRequest &) = default ;
    CreatePrePayOrderRequest& operator=(CreatePrePayOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->confluentConfig_ != nullptr
        && this->deployType_ != nullptr && this->diskSize_ != nullptr && this->diskType_ != nullptr && this->duration_ != nullptr && this->eipMax_ != nullptr
        && this->ioMax_ != nullptr && this->ioMaxSpec_ != nullptr && this->paidType_ != nullptr && this->partitionNum_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->specType_ != nullptr && this->tag_ != nullptr && this->topicQuota_ != nullptr; };
    // confluentConfig Field Functions 
    bool hasConfluentConfig() const { return this->confluentConfig_ != nullptr;};
    void deleteConfluentConfig() { this->confluentConfig_ = nullptr;};
    inline const CreatePrePayOrderRequestConfluentConfig & confluentConfig() const { DARABONBA_PTR_GET_CONST(confluentConfig_, CreatePrePayOrderRequestConfluentConfig) };
    inline CreatePrePayOrderRequestConfluentConfig confluentConfig() { DARABONBA_PTR_GET(confluentConfig_, CreatePrePayOrderRequestConfluentConfig) };
    inline CreatePrePayOrderRequest& setConfluentConfig(const CreatePrePayOrderRequestConfluentConfig & confluentConfig) { DARABONBA_PTR_SET_VALUE(confluentConfig_, confluentConfig) };
    inline CreatePrePayOrderRequest& setConfluentConfig(CreatePrePayOrderRequestConfluentConfig && confluentConfig) { DARABONBA_PTR_SET_RVALUE(confluentConfig_, confluentConfig) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline CreatePrePayOrderRequest& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreatePrePayOrderRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreatePrePayOrderRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreatePrePayOrderRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t eipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline CreatePrePayOrderRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t ioMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline CreatePrePayOrderRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string ioMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline CreatePrePayOrderRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t paidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline CreatePrePayOrderRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline CreatePrePayOrderRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrePayOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePrePayOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreatePrePayOrderRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePrePayOrderRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePrePayOrderRequestTag>) };
    inline vector<CreatePrePayOrderRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreatePrePayOrderRequestTag>) };
    inline CreatePrePayOrderRequest& setTag(const vector<CreatePrePayOrderRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePrePayOrderRequest& setTag(vector<CreatePrePayOrderRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t topicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline CreatePrePayOrderRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The configurations of Confluent.
    // 
    // >  When you create an ApsaraMQ for Confluent instance, you must configure this parameter.
    std::shared_ptr<CreatePrePayOrderRequestConfluentConfig> confluentConfig_ = nullptr;
    // The type of the network in which the instance is deployed. Valid values:
    // 
    // *   **4**: Internet and virtual private cloud (VPC)
    // *   **5**: VPC
    // 
    // >  If you create an ApsaraMQ for Confluent instance, set the value to 5. After the instance is created, you can specify whether to enable each component.
    std::shared_ptr<int32_t> deployType_ = nullptr;
    // The disk size. Unit: GB
    // 
    // For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The disk type. Valid values:
    // 
    // *   **0**: ultra disk
    // *   **1**: standard SSD
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<string> diskType_ = nullptr;
    // The subscription duration. Unit: months. Default value: 1. Valid values:
    // 
    // *   **1 to 12**
    std::shared_ptr<int32_t> duration_ = nullptr;
    // The maximum Internet traffic in the instance.
    // 
    // *   If you set **DeployType** to **4**, you must configure this parameter.
    // *   For information about the valid values, see [Pay-as-you-go](https://help.aliyun.com/document_detail/72142.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> eipMax_ = nullptr;
    // The maximum traffic in the instance. We recommend that you do not configure this parameter.
    // 
    // *   You must set one of **IoMax** and **IoMaxSpec**. If both parameters are configured, the value of **IoMaxSpec** is used. We recommend that you configure only **IoMaxSpec**.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> ioMax_ = nullptr;
    // The traffic specification of the instance. We recommend that you configure this parameter.
    // 
    // *   You must configure one of **IoMax** and **IoMaxSpec**. If both parameters are configured, the value of **IoMaxSpec** is used. We recommend that you configure only **IoMaxSpec**.
    // *   For more information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<string> ioMaxSpec_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **0**: the subscription billing method
    // *   **4**: the subscription billing method for ApsaraMQ for Confluent instances
    std::shared_ptr<int32_t> paidType_ = nullptr;
    // The number of partitions. We recommend that you configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only PartitionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    // 
    // If this parameter is left empty, the default resource group is used. You can view the resource group ID on the Resource Group page in the Resource Management console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The instance edition. Valid values:
    // 
    // *   **normal**: Standard Edition (High Write)
    // *   **professional**: Professional Edition (High Write)
    // *   **professionalForHighRead**: Professional Edition (High Read)
    // 
    // For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<string> specType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreatePrePayOrderRequestTag>> tag_ = nullptr;
    // The number of topics. We recommend that you do not configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only PartitionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   The default value of TopicQuota varies based on the value of IoMaxSpec. If the number of topics that you use exceeds the default value, you are charged additional fees.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create an ApsaraMQ for Confluent instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> topicQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
