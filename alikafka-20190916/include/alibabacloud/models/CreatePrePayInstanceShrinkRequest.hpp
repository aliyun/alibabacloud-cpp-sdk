// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPREPAYINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPREPAYINSTANCESHRINKREQUEST_HPP_
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
  class CreatePrePayInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrePayInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfigShrink_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
      DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_TO_JSON(PaidType, paidType_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrePayInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
      DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreatePrePayInstanceShrinkRequest() = default ;
    CreatePrePayInstanceShrinkRequest(const CreatePrePayInstanceShrinkRequest &) = default ;
    CreatePrePayInstanceShrinkRequest(CreatePrePayInstanceShrinkRequest &&) = default ;
    CreatePrePayInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrePayInstanceShrinkRequest() = default ;
    CreatePrePayInstanceShrinkRequest& operator=(const CreatePrePayInstanceShrinkRequest &) = default ;
    CreatePrePayInstanceShrinkRequest& operator=(CreatePrePayInstanceShrinkRequest &&) = default ;
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
      // - If this parameter is left empty, all tag keys are matched.
      // 
      // - The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // 
      // - N ranges from 1 to 20.
      // 
      // - This parameter can be left empty.
      // 
      // - The tag value can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->confluentConfigShrink_ == nullptr
        && this->deployType_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->duration_ == nullptr && this->eipMax_ == nullptr
        && this->ioMaxSpec_ == nullptr && this->paidType_ == nullptr && this->partitionNum_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->specType_ == nullptr && this->tag_ == nullptr; };
    // confluentConfigShrink Field Functions 
    bool hasConfluentConfigShrink() const { return this->confluentConfigShrink_ != nullptr;};
    void deleteConfluentConfigShrink() { this->confluentConfigShrink_ = nullptr;};
    inline string getConfluentConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(confluentConfigShrink_, "") };
    inline CreatePrePayInstanceShrinkRequest& setConfluentConfigShrink(string confluentConfigShrink) { DARABONBA_PTR_SET_VALUE(confluentConfigShrink_, confluentConfigShrink) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline CreatePrePayInstanceShrinkRequest& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreatePrePayInstanceShrinkRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreatePrePayInstanceShrinkRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreatePrePayInstanceShrinkRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline CreatePrePayInstanceShrinkRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline CreatePrePayInstanceShrinkRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline CreatePrePayInstanceShrinkRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline CreatePrePayInstanceShrinkRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrePayInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePrePayInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreatePrePayInstanceShrinkRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePrePayInstanceShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePrePayInstanceShrinkRequest::Tag>) };
    inline vector<CreatePrePayInstanceShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePrePayInstanceShrinkRequest::Tag>) };
    inline CreatePrePayInstanceShrinkRequest& setTag(const vector<CreatePrePayInstanceShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePrePayInstanceShrinkRequest& setTag(vector<CreatePrePayInstanceShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The Confluent component configurations.
    // 
    // 
    // > This parameter is required when you create a Confluent instance.
    shared_ptr<string> confluentConfigShrink_ {};
    // The deployment type. Valid values:
    // 
    // - **4**: Internet- and VPC-connected instance
    // 
    // - **5**: VPC-connected instance
    // 
    // 
    // > When you create a Confluent instance, you cannot select the deployment type. Only the value 5 is allowed. After the purchase, you can configure whether to enable public access for each component.
    shared_ptr<int32_t> deployType_ {};
    // The disk capacity. Unit: GB.
    // 
    // For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > This parameter is not required when you create a Confluent instance.
    shared_ptr<int32_t> diskSize_ {};
    // The disk type. Valid values:
    // 
    // - **0**: ultra cloud disk
    // 
    // - **1**: SSD
    // 
    // > This parameter is not required when you create a Confluent instance.
    shared_ptr<string> diskType_ {};
    // The subscription duration. Unit: months. Default value: 1. Valid values:
    // 
    // - **Confluent instances: 1 or 12**
    // - **ApsaraMQ for Kafka instances: 1**
    shared_ptr<int32_t> duration_ {};
    // The Internet traffic.
    // 
    // - This parameter is required if **DeployType** is set to **4**.
    // 
    // - For the value range, see [Pay-as-you-go billing method](https://help.aliyun.com/document_detail/72142.html).
    // 
    // 
    // > This parameter is not required when you create a Confluent instance.
    shared_ptr<int32_t> eipMax_ {};
    // The traffic specification.
    //  
    // 
    // - For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // > This parameter is not required when you create a Confluent instance.
    shared_ptr<string> ioMaxSpec_ {};
    // The billing type. Valid values:
    // 
    // - **0**: subscription
    // 
    // - **4**: Confluent subscription
    shared_ptr<int32_t> paidType_ {};
    // The number of partitions to purchase.
    // 
    // * For the value range, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // > This parameter is not required when you create a Confluent instance.
    shared_ptr<int32_t> partitionNum_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // If you do not specify this parameter, the instance is placed in the default resource group. You can view the resource group ID in the Resource Management console.
    shared_ptr<string> resourceGroupId_ {};
    // The edition type.
    // 
    // Valid values for ApsaraMQ for Kafka instances:
    // 
    // - **normal**: Standard Edition (shared throughput for writes)
    // 
    // - **professional**: Professional Edition (shared throughput for writes)
    // 
    // - **professionalForHighRead**: Professional Edition (shared throughput for reads)
    // 
    // Valid values for Confluent instances:
    // 
    // - **professional**: Professional Edition
    // 
    // - **enterprise**: Enterprise Edition
    // 
    // For more information, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<string> specType_ {};
    // The tags.
    shared_ptr<vector<CreatePrePayInstanceShrinkRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
