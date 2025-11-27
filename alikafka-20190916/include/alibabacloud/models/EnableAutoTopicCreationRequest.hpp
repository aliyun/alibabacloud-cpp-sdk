// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEAUTOTOPICCREATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEAUTOTOPICCREATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class EnableAutoTopicCreationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableAutoTopicCreationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UpdatePartition, updatePartition_);
    };
    friend void from_json(const Darabonba::Json& j, EnableAutoTopicCreationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UpdatePartition, updatePartition_);
    };
    EnableAutoTopicCreationRequest() = default ;
    EnableAutoTopicCreationRequest(const EnableAutoTopicCreationRequest &) = default ;
    EnableAutoTopicCreationRequest(EnableAutoTopicCreationRequest &&) = default ;
    EnableAutoTopicCreationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableAutoTopicCreationRequest() = default ;
    EnableAutoTopicCreationRequest& operator=(const EnableAutoTopicCreationRequest &) = default ;
    EnableAutoTopicCreationRequest& operator=(EnableAutoTopicCreationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->operate_ == nullptr && return this->partitionNum_ == nullptr && return this->regionId_ == nullptr && return this->updatePartition_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableAutoTopicCreationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string operate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline EnableAutoTopicCreationRequest& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int64_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0L) };
    inline EnableAutoTopicCreationRequest& setPartitionNum(int64_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableAutoTopicCreationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // updatePartition Field Functions 
    bool hasUpdatePartition() const { return this->updatePartition_ != nullptr;};
    void deleteUpdatePartition() { this->updatePartition_ = nullptr;};
    inline bool updatePartition() const { DARABONBA_PTR_GET_DEFAULT(updatePartition_, false) };
    inline EnableAutoTopicCreationRequest& setUpdatePartition(bool updatePartition) { DARABONBA_PTR_SET_VALUE(updatePartition_, updatePartition) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The operation that you want to perform. Valid values:
    // 
    // *   enable: enables the automatic topic creation feature.
    // *   disable: disables the automatic topic creation feature.
    // *   updatePartition: changes the number of partitions in topics that are automatically created.
    std::shared_ptr<string> operate_ = nullptr;
    // The changed number of partitions in topics that are automatically created.
    // 
    // This parameter takes effect only if you set Operate to updatePartition.
    std::shared_ptr<int64_t> partitionNum_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> updatePartition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
