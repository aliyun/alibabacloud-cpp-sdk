// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource.
      // - N ranges from 1 to 20.
      // - If this parameter is left empty, all tag keys are matched.
      // - The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // - N ranges from 1 to 20.
      // - If the tag key is left empty, this parameter must also be left empty. If this parameter is left empty, all tag values are matched.
      // - The tag value can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    class ServerlessConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServerlessConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
        DARABONBA_PTR_TO_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, ServerlessConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
        DARABONBA_PTR_FROM_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
      };
      ServerlessConfig() = default ;
      ServerlessConfig(const ServerlessConfig &) = default ;
      ServerlessConfig(ServerlessConfig &&) = default ;
      ServerlessConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServerlessConfig() = default ;
      ServerlessConfig& operator=(const ServerlessConfig &) = default ;
      ServerlessConfig& operator=(ServerlessConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reservedPublishCapacity_ == nullptr
        && this->reservedSubscribeCapacity_ == nullptr; };
      // reservedPublishCapacity Field Functions 
      bool hasReservedPublishCapacity() const { return this->reservedPublishCapacity_ != nullptr;};
      void deleteReservedPublishCapacity() { this->reservedPublishCapacity_ = nullptr;};
      inline int64_t getReservedPublishCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedPublishCapacity_, 0L) };
      inline ServerlessConfig& setReservedPublishCapacity(int64_t reservedPublishCapacity) { DARABONBA_PTR_SET_VALUE(reservedPublishCapacity_, reservedPublishCapacity) };


      // reservedSubscribeCapacity Field Functions 
      bool hasReservedSubscribeCapacity() const { return this->reservedSubscribeCapacity_ != nullptr;};
      void deleteReservedSubscribeCapacity() { this->reservedSubscribeCapacity_ = nullptr;};
      inline int64_t getReservedSubscribeCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedSubscribeCapacity_, 0L) };
      inline ServerlessConfig& setReservedSubscribeCapacity(int64_t reservedSubscribeCapacity) { DARABONBA_PTR_SET_VALUE(reservedSubscribeCapacity_, reservedSubscribeCapacity) };


    protected:
      // The reserved publish traffic specification value. Only integers are supported. The minimum value is 60. This parameter is required for serverless instances.
      // 
      // 
      // > The actual upper limit depends on the inventory in the current region. Refer to the purchase page for the available range.
      shared_ptr<int64_t> reservedPublishCapacity_ {};
      // The reserved subscribe traffic specification value. Only integers are supported. The minimum value is 20. This parameter is required for serverless instances.
      // 
      // > The actual upper limit depends on the inventory in the current region. Refer to the purchase page for the available range.
      shared_ptr<int64_t> reservedSubscribeCapacity_ {};
    };

    virtual bool empty() const override { return this->deployType_ == nullptr
        && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->eipMax_ == nullptr && this->ioMax_ == nullptr && this->ioMaxSpec_ == nullptr
        && this->paidType_ == nullptr && this->partitionNum_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->serverlessConfig_ == nullptr
        && this->specType_ == nullptr && this->tag_ == nullptr && this->topicQuota_ == nullptr; };
    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline CreatePostPayOrderRequest& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreatePostPayOrderRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreatePostPayOrderRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline CreatePostPayOrderRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t getIoMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline CreatePostPayOrderRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline CreatePostPayOrderRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline CreatePostPayOrderRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline CreatePostPayOrderRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePostPayOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePostPayOrderRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverlessConfig Field Functions 
    bool hasServerlessConfig() const { return this->serverlessConfig_ != nullptr;};
    void deleteServerlessConfig() { this->serverlessConfig_ = nullptr;};
    inline const CreatePostPayOrderRequest::ServerlessConfig & getServerlessConfig() const { DARABONBA_PTR_GET_CONST(serverlessConfig_, CreatePostPayOrderRequest::ServerlessConfig) };
    inline CreatePostPayOrderRequest::ServerlessConfig getServerlessConfig() { DARABONBA_PTR_GET(serverlessConfig_, CreatePostPayOrderRequest::ServerlessConfig) };
    inline CreatePostPayOrderRequest& setServerlessConfig(const CreatePostPayOrderRequest::ServerlessConfig & serverlessConfig) { DARABONBA_PTR_SET_VALUE(serverlessConfig_, serverlessConfig) };
    inline CreatePostPayOrderRequest& setServerlessConfig(CreatePostPayOrderRequest::ServerlessConfig && serverlessConfig) { DARABONBA_PTR_SET_RVALUE(serverlessConfig_, serverlessConfig) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreatePostPayOrderRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePostPayOrderRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePostPayOrderRequest::Tag>) };
    inline vector<CreatePostPayOrderRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePostPayOrderRequest::Tag>) };
    inline CreatePostPayOrderRequest& setTag(const vector<CreatePostPayOrderRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePostPayOrderRequest& setTag(vector<CreatePostPayOrderRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t getTopicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline CreatePostPayOrderRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The deployment type. Valid values:
    // 
    // - **4**: Internet- and VPC-connected instance
    // 
    // - **5**: VPC-connected instance
    // 
    // This parameter is required.
    shared_ptr<int32_t> deployType_ {};
    // The disk capacity.
    // 
    // For the value range, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
    // > If you create a serverless instance, you do not need to set this parameter.
    shared_ptr<int32_t> diskSize_ {};
    // The disk type. Valid values:
    // 
    // - **0**: premium cloud disk
    // 
    // - **1**: SSD
    // > If you create a serverless instance, you do not need to set this parameter.
    shared_ptr<string> diskType_ {};
    // The Internet traffic.
    // 
    // - If **DeployType** is set to **4**, this parameter is required.
    // 
    // - For the value range, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you create a serverless instance, you do not need to set this parameter.
    shared_ptr<int32_t> eipMax_ {};
    // The maximum traffic (not recommended).
    // 
    // - You must specify one of IoMax and IoMaxSpec. If both parameters are specified, the value of IoMaxSpec takes precedence. Specify only IoMaxSpec.
    // 
    // - For the value range, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you create a serverless instance, you do not need to set this parameter.
    shared_ptr<int32_t> ioMax_ {};
    // The traffic specification (recommended).
    // 
    // - You must specify one of IoMax and IoMaxSpec. If both parameters are specified, the value of IoMaxSpec takes precedence. Specify only IoMaxSpec.
    // 
    // - For the value range, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you create a serverless instance, you do not need to set this parameter.
    shared_ptr<string> ioMaxSpec_ {};
    // The billing type. Valid values:
    // 
    // - 1 (default): reserved instance with pay-as-you-go billing.
    // - 3: serverless instance with reserved specification pay-as-you-go billing + serverless elastic scaling pay-as-you-go billing.
    shared_ptr<int32_t> paidType_ {};
    // The number of partitions (recommended).
    // 
    // * You must specify one of PartitionNum and TopicQuota. Specify only PartitionNum.
    // 
    // * If both PartitionNum and TopicQuota are specified, the system verifies whether the values are equivalent based on the legacy topic sales model. If the values are not equivalent, the request fails. If the values are equivalent, the purchase is made based on the number of partitions.
    // 
    // * For the value range, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you create a serverless instance, you do not need to set this parameter.
    shared_ptr<int32_t> partitionNum_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // If this parameter is not specified, the instance is placed in the default resource group. You can view the resource group ID in the Resource Management console.
    shared_ptr<string> resourceGroupId_ {};
    // The settings of the serverless instance. This parameter is required when you create a serverless instance.
    shared_ptr<CreatePostPayOrderRequest::ServerlessConfig> serverlessConfig_ {};
    // The specification type.
    // 
    // Valid values when PaidType is set to 1 (reserved instance with pay-as-you-go billing):
    // 
    // - normal: Standard Edition (shared throughput for writes)
    // - professional: Professional Edition (shared throughput for writes)
    // - professionalForHighRead: Professional Edition (shared throughput for reads)
    // 
    // Valid values when PaidType is set to 3 (serverless instance with reserved specification pay-as-you-go billing + serverless elastic scaling pay-as-you-go billing):
    // 
    // - basic: Serverless Basic Edition
    // - normal: Serverless Standard Edition
    // - professional: Serverless Professional Edition
    // 
    // For more information about these specification types, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<string> specType_ {};
    // The list of tags.
    shared_ptr<vector<CreatePostPayOrderRequest::Tag>> tag_ {};
    // The number of topics (not recommended).
    // 
    // - You must specify one of PartitionNum and TopicQuota. Specify only PartitionNum.
    // 
    // - If both PartitionNum and TopicQuota are specified, the system verifies whether the values are equivalent based on the legacy topic sales model. If the values are not equivalent, the request fails. If the values are equivalent, the purchase is made based on the number of partitions.
    // 
    // - The default value varies based on the traffic specification. If the value exceeds the default value, additional fees are charged.
    // 
    // - For the value range, see [Billing overview](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you create a serverless instance, you do not need to set this parameter.
    shared_ptr<int32_t> topicQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
