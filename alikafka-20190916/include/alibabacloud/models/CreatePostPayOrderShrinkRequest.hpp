// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPOSTPAYORDERSHRINKREQUEST_HPP_
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
  class CreatePostPayOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePostPayOrderShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TopicQuota, topicQuota_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePostPayOrderShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ServerlessConfig, serverlessConfigShrink_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TopicQuota, topicQuota_);
    };
    CreatePostPayOrderShrinkRequest() = default ;
    CreatePostPayOrderShrinkRequest(const CreatePostPayOrderShrinkRequest &) = default ;
    CreatePostPayOrderShrinkRequest(CreatePostPayOrderShrinkRequest &&) = default ;
    CreatePostPayOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePostPayOrderShrinkRequest() = default ;
    CreatePostPayOrderShrinkRequest& operator=(const CreatePostPayOrderShrinkRequest &) = default ;
    CreatePostPayOrderShrinkRequest& operator=(CreatePostPayOrderShrinkRequest &&) = default ;
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
      // The tag key.
      // 
      // - N can be an integer from 1 to 20.
      // 
      // - If this parameter is empty, all tag keys are matched.
      // 
      // - The tag key can be up to 128 characters in length. It cannot start with \\`aliyun\\` or \\`acs:\\` and cannot contain \\`http\\://\\` or \\`https\\://\\`.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // - N can be an integer from 1 to 20.
      // 
      // - This parameter must be empty if the tag key is empty. If this parameter is empty, all tag values are matched.
      // 
      // - The tag value can be up to 128 characters in length. It cannot start with \\`aliyun\\` or \\`acs:\\` and cannot contain \\`http\\://\\` or \\`https\\://\\`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->deployType_ == nullptr
        && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->eipMax_ == nullptr && this->ioMax_ == nullptr && this->ioMaxSpec_ == nullptr
        && this->paidType_ == nullptr && this->partitionNum_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->serverlessConfigShrink_ == nullptr
        && this->specType_ == nullptr && this->tag_ == nullptr && this->topicQuota_ == nullptr; };
    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline CreatePostPayOrderShrinkRequest& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline CreatePostPayOrderShrinkRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline CreatePostPayOrderShrinkRequest& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline CreatePostPayOrderShrinkRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t getIoMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline CreatePostPayOrderShrinkRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline CreatePostPayOrderShrinkRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline CreatePostPayOrderShrinkRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline CreatePostPayOrderShrinkRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePostPayOrderShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePostPayOrderShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // serverlessConfigShrink Field Functions 
    bool hasServerlessConfigShrink() const { return this->serverlessConfigShrink_ != nullptr;};
    void deleteServerlessConfigShrink() { this->serverlessConfigShrink_ = nullptr;};
    inline string getServerlessConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(serverlessConfigShrink_, "") };
    inline CreatePostPayOrderShrinkRequest& setServerlessConfigShrink(string serverlessConfigShrink) { DARABONBA_PTR_SET_VALUE(serverlessConfigShrink_, serverlessConfigShrink) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline CreatePostPayOrderShrinkRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePostPayOrderShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePostPayOrderShrinkRequest::Tag>) };
    inline vector<CreatePostPayOrderShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreatePostPayOrderShrinkRequest::Tag>) };
    inline CreatePostPayOrderShrinkRequest& setTag(const vector<CreatePostPayOrderShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePostPayOrderShrinkRequest& setTag(vector<CreatePostPayOrderShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t getTopicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline CreatePostPayOrderShrinkRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    // The deployment type. Valid values:
    // 
    // - **4**: An instance that is accessible from the Internet and a VPC.
    // 
    // - **5**: An instance that is accessible only from a VPC.
    // 
    // This parameter is required.
    shared_ptr<int32_t> deployType_ {};
    // The disk capacity.
    // 
    // For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > Do not specify this parameter if you create a Serverless instance.
    shared_ptr<int32_t> diskSize_ {};
    // The disk type. Valid values:
    // 
    // - **0**: Ultra disk
    // 
    // - **1**: SSD
    // 
    // > Do not specify this parameter if you create a Serverless instance.
    shared_ptr<string> diskType_ {};
    // The Internet traffic.
    // 
    // - This parameter is required if you set **DeployType** to **4**.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > Do not specify this parameter if you create a Serverless instance.
    shared_ptr<int32_t> eipMax_ {};
    // The peak traffic. This parameter is not recommended.
    // 
    // - You must specify this parameter or \\`IoMaxSpec\\`. If you specify both parameters, the value of \\`IoMaxSpec\\` takes precedence. We recommend that you specify only \\`IoMaxSpec\\`.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > Do not specify this parameter if you create a Serverless instance.
    shared_ptr<int32_t> ioMax_ {};
    // The traffic specification. This parameter is recommended.
    // 
    // - You must specify this parameter or \\`IoMax\\`. If you specify both parameters, the value of this parameter takes precedence. We recommend that you specify only this parameter.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > Do not specify this parameter if you create a Serverless instance.
    shared_ptr<string> ioMaxSpec_ {};
    // The billing method. Valid values:
    // 
    // - 1 (default): Pay-as-you-go for a reserved instance.
    // 
    // - 3: Pay-as-you-go for a reserved Serverless instance and pay-as-you-go for elastic scaling of a Serverless instance.
    shared_ptr<int32_t> paidType_ {};
    // The number of partitions. This parameter is recommended.
    // 
    // - You must specify this parameter or \\`TopicQuota\\`. We recommend that you specify only this parameter.
    // 
    // - If you specify both this parameter and \\`TopicQuota\\`, the system verifies whether the values of the two parameters are equivalent based on the previous topic-based sales model. If the values are not equivalent, the system returns a failure. If the values are equivalent, the purchase is made based on the number of partitions.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > Do not specify this parameter if you create a Serverless instance.
    shared_ptr<int32_t> partitionNum_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    // 
    // If you do not set this parameter, the instance is added to the default resource group. You can view the resource group ID in the Resource Group console.
    shared_ptr<string> resourceGroupId_ {};
    // The settings of the Serverless instance. This parameter is required if you create a Serverless instance.
    shared_ptr<string> serverlessConfigShrink_ {};
    // The specification type.
    // 
    // If you set \\`PaidType\\` to 1 (pay-as-you-go for a reserved instance), valid values are:
    // 
    // - normal: Standard Edition (High-write)
    // 
    // - professional: Professional Edition (High-write)
    // 
    // - professionalForHighRead: Professional Edition (High-read)
    // 
    // If you set \\`PaidType\\` to 3 (pay-as-you-go for a reserved Serverless instance and pay-as-you-go for elastic scaling of a Serverless instance), valid values are:
    // 
    // - basic: Serverless Basic Edition
    // 
    // - normal: Serverless Standard Edition
    // 
    // - professional: Serverless Professional Edition
    // 
    // For more information about these specification types, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    shared_ptr<string> specType_ {};
    // The tags.
    shared_ptr<vector<CreatePostPayOrderShrinkRequest::Tag>> tag_ {};
    // The number of topics. This parameter is not recommended.
    // 
    // - You must specify this parameter or \\`PartitionNum\\`. We recommend that you specify only \\`PartitionNum\\`.
    // 
    // - If you specify both this parameter and \\`PartitionNum\\`, the system verifies whether the values of the two parameters are equivalent based on the previous topic-based sales model. If the values are not equivalent, the system returns a failure. If the values are equivalent, the purchase is made based on the number of partitions.
    // 
    // - The default value of this parameter varies based on the traffic specification. You are charged for the extra topics that exceed the default value.
    // 
    // - For the valid values, see [Billing](https://help.aliyun.com/document_detail/84737.html).
    // 
    // > Do not specify this parameter if you create a Serverless instance.
    shared_ptr<int32_t> topicQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
