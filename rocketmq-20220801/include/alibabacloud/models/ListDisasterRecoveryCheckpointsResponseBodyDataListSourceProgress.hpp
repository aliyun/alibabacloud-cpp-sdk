// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODYDATALISTSOURCEPROGRESS_HPP_
#define ALIBABACLOUD_MODELS_LISTDISASTERRECOVERYCHECKPOINTSRESPONSEBODYDATALISTSOURCEPROGRESS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& obj) { 
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(lastFetchTime, lastFetchTime_);
      DARABONBA_PTR_TO_JSON(progressData, progressData_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(lastFetchTime, lastFetchTime_);
      DARABONBA_PTR_FROM_JSON(progressData, progressData_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress() = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress(const ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress &) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress(ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress &&) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress() = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& operator=(const ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress &) = default ;
    ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& operator=(ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->lastFetchTime_ == nullptr && return this->progressData_ == nullptr && return this->regionId_ == nullptr
        && return this->topicName_ == nullptr; };
    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // lastFetchTime Field Functions 
    bool hasLastFetchTime() const { return this->lastFetchTime_ != nullptr;};
    void deleteLastFetchTime() { this->lastFetchTime_ = nullptr;};
    inline int64_t lastFetchTime() const { DARABONBA_PTR_GET_DEFAULT(lastFetchTime_, 0L) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setLastFetchTime(int64_t lastFetchTime) { DARABONBA_PTR_SET_VALUE(lastFetchTime_, lastFetchTime) };


    // progressData Field Functions 
    bool hasProgressData() const { return this->progressData_ != nullptr;};
    void deleteProgressData() { this->progressData_ = nullptr;};
    inline const Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData & progressData() const { DARABONBA_PTR_GET_CONST(progressData_, Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData) };
    inline Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData progressData() { DARABONBA_PTR_GET(progressData_, Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setProgressData(const Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData & progressData) { DARABONBA_PTR_SET_VALUE(progressData_, progressData) };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setProgressData(Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData && progressData) { DARABONBA_PTR_SET_RVALUE(progressData_, progressData) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgress& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // Consumer Group ID
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // Instance ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // Instance type
    //   - ALIYUN_ROCKETMQ: Alibaba Cloud instance
    //   - EXTERNAL_ROCKETMQ: External instance, open-source instance, open-source cluster
    std::shared_ptr<string> instanceType_ = nullptr;
    // Last fetch time
    std::shared_ptr<int64_t> lastFetchTime_ = nullptr;
    // Consumption progress data
    std::shared_ptr<Models::ListDisasterRecoveryCheckpointsResponseBodyDataListSourceProgressProgressData> progressData_ = nullptr;
    // Region ID
    std::shared_ptr<string> regionId_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
