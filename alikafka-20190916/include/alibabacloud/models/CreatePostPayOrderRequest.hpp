// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreatePostPayOrderRequestServerlessConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreatePostPayOrderRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreatePostPayOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePostPayOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
      DARABONBA_PTR_TO_JSON(IoMax, ioMax_);
      DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_TO_JSON(PaidType, paidType_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfig_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePostPayOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
      DARABONBA_PTR_FROM_JSON(IoMax, ioMax_);
      DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfig_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
    };
    CreatePostPayOrderRequest() = default ;
    CreatePostPayOrderRequest(const CreatePostPayOrderRequest &) = default ;
    CreatePostPayOrderRequest(CreatePostPayOrderRequest &&) = default ;
    CreatePostPayOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePostPayOrderRequest() = default ;
    CreatePostPayOrderRequest& operator=(const CreatePostPayOrderRequest &) = default ;
    CreatePostPayOrderRequest& operator=(CreatePostPayOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deployType_ == nullptr
        && return this->diskSize_ == nullptr && return this->diskType_ == nullptr && return this->eipMax_ == nullptr && return this->ioMax_ == nullptr && return this->ioMaxSpec_ == nullptr
        && return this->paidType_ == nullptr && return this->partitionNum_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->serverlessConfig_ == nullptr
        && return this->specType_ == nullptr && return this->tag_ == nullptr && return this->topicQuota_ == nullptr; };
    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline CreatePostPayOrderRequest& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreatePostPayOrderRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreatePostPayOrderRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t eipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline CreatePostPayOrderRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t ioMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline CreatePostPayOrderRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string ioMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline CreatePostPayOrderRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t paidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline CreatePostPayOrderRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline CreatePostPayOrderRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePostPayOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePostPayOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverlessConfig Field Functions 
    bool hasServerlessConfig() const { return this->serverlessConfig_ != nullptr;};
    void deleteServerlessConfig() { this->serverlessConfig_ = nullptr;};
    inline const CreatePostPayOrderRequestServerlessConfig & serverlessConfig() const { DARABONBA_PTR_GET_CONST(serverlessConfig_, CreatePostPayOrderRequestServerlessConfig) };
    inline CreatePostPayOrderRequestServerlessConfig serverlessConfig() { DARABONBA_PTR_GET(serverlessConfig_, CreatePostPayOrderRequestServerlessConfig) };
    inline CreatePostPayOrderRequest& setServerlessConfig(const CreatePostPayOrderRequestServerlessConfig & serverlessConfig) { DARABONBA_PTR_SET_VALUE(serverlessConfig_, serverlessConfig) };
    inline CreatePostPayOrderRequest& setServerlessConfig(CreatePostPayOrderRequestServerlessConfig && serverlessConfig) { DARABONBA_PTR_SET_RVALUE(serverlessConfig_, serverlessConfig) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreatePostPayOrderRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePostPayOrderRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePostPayOrderRequestTag>) };
    inline vector<CreatePostPayOrderRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreatePostPayOrderRequestTag>) };
    inline CreatePostPayOrderRequest& setTag(const vector<CreatePostPayOrderRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePostPayOrderRequest& setTag(vector<CreatePostPayOrderRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t topicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline CreatePostPayOrderRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The deployment mode of the instance. Valid values:
    // 
    // *   **4**: deploys the instance that allows access from the Internet and a VPC.
    // *   **5**: deploys the instance that allows access only from a VPC.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> deployType_ = nullptr;
    // The disk size.
    // 
    // For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The disk type of the instance. Valid values:
    // 
    // *   **0**: ultra disk
    // *   **1**: standard SSD
    // 
    // >  If you create a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<string> diskType_ = nullptr;
    // The Internet traffic.
    // 
    // *   If you set **DeployType** to **4**, you must configure this parameter.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> eipMax_ = nullptr;
    // The maximum traffic in the instance. We recommend that you do not configure this parameter.
    // 
    // *   You must configure at least one of IoMax and IoMaxSpec. If you configure both parameters, the value of IoMaxSpec takes effect. We recommend that you configure only IoMaxSpec.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> ioMax_ = nullptr;
    // The traffic specification of the instance. We recommend that you configure this parameter.
    // 
    // *   You must configure at least one of IoMax and IoMaxSpec. If you configure both parameters, the value of IoMaxSpec takes effect. We recommend that you configure only IoMaxSpec.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<string> ioMaxSpec_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   1: pay-as-you-go (reserved capacity).
    // *   3: pay-as-you-go (reserved capacity) + pay-as-you-go (on-demand capacity)
    std::shared_ptr<int32_t> paidType_ = nullptr;
    // The number of partitions. We recommend that you configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only ParittionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    // 
    // If this parameter is left empty, the default resource group is used. You can view the resource group ID on the Resource Group page in the Resource Management console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The parameters configured for the serverless ApsaraMQ for Kafka instance. These parameters are required only when you create a serverless instance.
    std::shared_ptr<CreatePostPayOrderRequestServerlessConfig> serverlessConfig_ = nullptr;
    // The instance edition.
    // 
    // Valid values if you set PaidType to 1:
    // 
    // *   normal: Standard Edition (High Write)
    // *   professional: Professional Edition (High Write)
    // *   professionalForHighRead: Professional Edition (High Read)
    // 
    // Valid values if you set PaidType to 3:
    // 
    // *   normal: Serverless Standard Edition
    // 
    // For more information about the instance editions, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    std::shared_ptr<string> specType_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreatePostPayOrderRequestTag>> tag_ = nullptr;
    // The number of topics. We recommend that you do not configure this parameter.
    // 
    // *   You must configure one of PartitionNum and TopicQuota. We recommend that you configure only ParittionNum.
    // *   If you configure PartitionNum and TopicQuota at the same time, the system verifies whether the price of the partitions equals the price of the topics based on the previous topic-based selling mode. If the price of the partitions does not equal the price of the topics, an error is returned. If the price of the partitions equals the price of the topics, the instance is purchased based on the partition number.
    // *   The default value of TopicQuota varies based on the value of IoMaxSpec. If the number of topics that you consume exceeds the default value, you are charged additional fees.
    // *   For information about the valid values of this parameter, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // >  If you create a serverless ApsaraMQ for Kafka instance, you do not need to configure this parameter.
    std::shared_ptr<int32_t> topicQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
