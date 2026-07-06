// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREPAYORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREPAYORDERSHRINKREQUEST_HPP_
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
  class CreatePrePayOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrePayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfigShrink_);
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
    friend void from_json(const Darabonba::Json& j, CreatePrePayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfigShrink_);
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
    CreatePrePayOrderShrinkRequest() = default ;
    CreatePrePayOrderShrinkRequest(const CreatePrePayOrderShrinkRequest &) = default ;
    CreatePrePayOrderShrinkRequest(CreatePrePayOrderShrinkRequest &&) = default ;
    CreatePrePayOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrePayOrderShrinkRequest() = default ;
    CreatePrePayOrderShrinkRequest& operator=(const CreatePrePayOrderShrinkRequest &) = default ;
    CreatePrePayOrderShrinkRequest& operator=(CreatePrePayOrderShrinkRequest &&) = default ;
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
      // 
      // - N ranges from 1 to 20.
      // 
      // - If this parameter is empty, all tag keys are matched.
      // 
      // - The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http\\:// or https\\://.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // 
      // - N ranges from 1 to 20.
      // 
      // - This parameter can be empty.
      // 
      // - The tag value can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http\\:// or https\\://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->confluentConfigShrink_ == nullptr
        && this->deployType_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->duration_ == nullptr && this->eipMax_ == nullptr
        && this->ioMax_ == nullptr && this->ioMaxSpec_ == nullptr && this->paidType_ == nullptr && this->partitionNum_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->specType_ == nullptr && this->tag_ == nullptr && this->topicQuota_ == nullptr; };
    // confluentConfigShrink Field Functions 
    bool hasConfluentConfigShrink() const { return this->confluentConfigShrink_ != nullptr;};
    void deleteConfluentConfigShrink() { this->confluentConfigShrink_ = nullptr;};
    inline string getConfluentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(confluentConfigShrink_, "") };
    inline CreatePrePayOrderShrinkRequest& setConfluentConfigShrink(string confluentConfigShrink) { DARABONBA_PTR_SET_VALUE(confluentConfigShrink_, confluentConfigShrink) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline CreatePrePayOrderShrinkRequest& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreatePrePayOrderShrinkRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreatePrePayOrderShrinkRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreatePrePayOrderShrinkRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline CreatePrePayOrderShrinkRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t getIoMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline CreatePrePayOrderShrinkRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline CreatePrePayOrderShrinkRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline CreatePrePayOrderShrinkRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline CreatePrePayOrderShrinkRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrePayOrderShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePrePayOrderShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreatePrePayOrderShrinkRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePrePayOrderShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePrePayOrderShrinkRequest::Tag>) };
    inline vector<CreatePrePayOrderShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePrePayOrderShrinkRequest::Tag>) };
    inline CreatePrePayOrderShrinkRequest& setTag(const vector<CreatePrePayOrderShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePrePayOrderShrinkRequest& setTag(vector<CreatePrePayOrderShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t getTopicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline CreatePrePayOrderShrinkRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The configuration of Confluent components.
    // 
    // > This parameter is required when you create a Confluent series instance.
    shared_ptr<string> confluentConfigShrink_ {};
    // The deployment type. Valid values:
    // 
    // - **4**: Internet/VPC instance
    // 
    // - **5**: VPC instance
    // 
    // > If you are creating a Confluent series instance, you cannot select the deployment type. You can only set the value to 5. After the purchase, you can adjust whether each component is open to the Internet.
    shared_ptr<int32_t> deployType_ {};
    // The disk capacity. Unit: GB.
    // 
    // For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you are creating a Confluent series instance, you do not need to pass this parameter.
    shared_ptr<int32_t> diskSize_ {};
    // The disk type. Valid values:
    // 
    // - **0**: ultra disk
    // 
    // - **1**: SSD
    // 
    // > If you are creating a Confluent series instance, you do not need to pass this parameter.
    shared_ptr<string> diskType_ {};
    // The subscription duration. Unit: month. Default value: 1. Valid values:
    // 
    // - **Confluent instances: 1 or 12**
    // 
    // - **Kafka instances: 1**
    shared_ptr<int32_t> duration_ {};
    // The Internet traffic.
    // 
    // - If **DeployType** is set to **4**, you must specify this parameter.
    // 
    // - For the valid values, see [pay-as-you-go](https://help.aliyun.com/document_detail/72142.html).
    // 
    // > If you are creating a Confluent series instance, you do not need to pass this parameter.
    shared_ptr<int32_t> eipMax_ {};
    // The traffic peak (not recommended).
    // 
    // - You must specify either **IoMax** or **IoMaxSpec**. If you specify both parameters, **IoMaxSpec** takes precedence. We recommend that you specify only **IoMaxSpec**.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you are creating a Confluent series instance, you do not need to pass this parameter.
    shared_ptr<int32_t> ioMax_ {};
    // The traffic specification (recommended).
    // 
    // - You must specify either **IoMax** or **IoMaxSpec**. If you specify both parameters, **IoMaxSpec** takes precedence. We recommend that you specify only **IoMaxSpec**.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you are creating a Confluent series instance, you do not need to pass this parameter.
    shared_ptr<string> ioMaxSpec_ {};
    // The billing method. Valid values:
    // 
    // - **0**: subscription
    // 
    // - **4**: Confluent series subscription
    shared_ptr<int32_t> paidType_ {};
    // The number of partitions (recommended).
    // 
    // - You must specify either the number of partitions or the topic specification. We recommend that you specify only the number of partitions.
    // 
    // - If you specify both the number of partitions and the topic specification, the system verifies whether the number of partitions is equivalent to the topic specification based on the old topic sales model. If they are not equivalent, the system returns a failure. If they are equivalent, the system makes the purchase based on the number of partitions.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you are creating a Confluent series instance, you do not need to pass this parameter.
    shared_ptr<int32_t> partitionNum_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // If you do not specify this parameter, the instance is added to the default resource group. You can view the resource group ID in the Resource Group console.
    shared_ptr<string> resourceGroupId_ {};
    // The specification type.
    // 
    // Valid values for Kafka instances:
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
    // For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<string> specType_ {};
    // The list of tags.
    shared_ptr<vector<CreatePrePayOrderShrinkRequest::Tag>> tag_ {};
    // The number of topics (not recommended).
    // 
    // - You must specify either the number of partitions or the topic specification. We recommend that you specify only the number of partitions.
    // 
    // - If you specify both the number of partitions and the topic specification, the system verifies whether the number of partitions is equivalent to the topic specification based on the old topic sales model. If they are not equivalent, the system returns a failure. If they are equivalent, the system makes the purchase based on the number of partitions.
    // 
    // - The default value varies based on the traffic specification. Additional fees are charged if the value exceeds the default value.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > If you are creating a Confluent series instance, you do not need to pass this parameter.
    shared_ptr<int32_t> topicQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
