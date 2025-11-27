// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOWNGRADEPREPAYORDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DOWNGRADEPREPAYORDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DowngradePrePayOrderRequestConfluentConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class DowngradePrePayOrderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DowngradePrePayOrderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfig_);
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
    friend void from_json(const Darabonba::Json& j, DowngradePrePayOrderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfig_);
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
    DowngradePrePayOrderRequest() = default ;
    DowngradePrePayOrderRequest(const DowngradePrePayOrderRequest &) = default ;
    DowngradePrePayOrderRequest(DowngradePrePayOrderRequest &&) = default ;
    DowngradePrePayOrderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DowngradePrePayOrderRequest() = default ;
    DowngradePrePayOrderRequest& operator=(const DowngradePrePayOrderRequest &) = default ;
    DowngradePrePayOrderRequest& operator=(DowngradePrePayOrderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confluentConfig_ == nullptr
        && return this->diskSize_ == nullptr && return this->eipMax_ == nullptr && return this->eipModel_ == nullptr && return this->instanceId_ == nullptr && return this->ioMax_ == nullptr
        && return this->ioMaxSpec_ == nullptr && return this->paidType_ == nullptr && return this->partitionNum_ == nullptr && return this->regionId_ == nullptr && return this->specType_ == nullptr
        && return this->topicQuota_ == nullptr; };
    // confluentConfig Field Functions 
    bool hasConfluentConfig() const { return this->confluentConfig_ != nullptr;};
    void deleteConfluentConfig() { this->confluentConfig_ = nullptr;};
    inline const DowngradePrePayOrderRequestConfluentConfig & confluentConfig() const { DARABONBA_PTR_GET_CONST(confluentConfig_, DowngradePrePayOrderRequestConfluentConfig) };
    inline DowngradePrePayOrderRequestConfluentConfig confluentConfig() { DARABONBA_PTR_GET(confluentConfig_, DowngradePrePayOrderRequestConfluentConfig) };
    inline DowngradePrePayOrderRequest& setConfluentConfig(const DowngradePrePayOrderRequestConfluentConfig & confluentConfig) { DARABONBA_PTR_SET_VALUE(confluentConfig_, confluentConfig) };
    inline DowngradePrePayOrderRequest& setConfluentConfig(DowngradePrePayOrderRequestConfluentConfig && confluentConfig) { DARABONBA_PTR_SET_RVALUE(confluentConfig_, confluentConfig) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DowngradePrePayOrderRequest& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t eipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline DowngradePrePayOrderRequest& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // eipModel Field Functions 
    bool hasEipModel() const { return this->eipModel_ != nullptr;};
    void deleteEipModel() { this->eipModel_ = nullptr;};
    inline bool eipModel() const { DARABONBA_PTR_GET_DEFAULT(eipModel_, false) };
    inline DowngradePrePayOrderRequest& setEipModel(bool eipModel) { DARABONBA_PTR_SET_VALUE(eipModel_, eipModel) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DowngradePrePayOrderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t ioMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline DowngradePrePayOrderRequest& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string ioMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline DowngradePrePayOrderRequest& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t paidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline DowngradePrePayOrderRequest& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline DowngradePrePayOrderRequest& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DowngradePrePayOrderRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline DowngradePrePayOrderRequest& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // topicQuota Field Functions 
    bool hasTopicQuota() const { return this->topicQuota_ != nullptr;};
    void deleteTopicQuota() { this->topicQuota_ = nullptr;};
    inline int32_t topicQuota() const { DARABONBA_PTR_GET_DEFAULT(topicQuota_, 0) };
    inline DowngradePrePayOrderRequest& setTopicQuota(int32_t topicQuota) { DARABONBA_PTR_SET_VALUE(topicQuota_, topicQuota) };


  protected:
    std::shared_ptr<DowngradePrePayOrderRequestConfluentConfig> confluentConfig_ = nullptr;
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    std::shared_ptr<int32_t> eipMax_ = nullptr;
    std::shared_ptr<bool> eipModel_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> ioMax_ = nullptr;
    std::shared_ptr<string> ioMaxSpec_ = nullptr;
    std::shared_ptr<int32_t> paidType_ = nullptr;
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> specType_ = nullptr;
    std::shared_ptr<int32_t> topicQuota_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
