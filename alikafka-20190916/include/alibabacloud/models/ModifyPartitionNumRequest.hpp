// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPARTITIONNUMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPARTITIONNUMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class ModifyPartitionNumRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPartitionNumRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddPartitionNum, addPartitionNum_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPartitionNumRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddPartitionNum, addPartitionNum_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    ModifyPartitionNumRequest() = default ;
    ModifyPartitionNumRequest(const ModifyPartitionNumRequest &) = default ;
    ModifyPartitionNumRequest(ModifyPartitionNumRequest &&) = default ;
    ModifyPartitionNumRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPartitionNumRequest() = default ;
    ModifyPartitionNumRequest& operator=(const ModifyPartitionNumRequest &) = default ;
    ModifyPartitionNumRequest& operator=(ModifyPartitionNumRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addPartitionNum_ == nullptr
        && return this->instanceId_ == nullptr && return this->regionId_ == nullptr && return this->topic_ == nullptr; };
    // addPartitionNum Field Functions 
    bool hasAddPartitionNum() const { return this->addPartitionNum_ != nullptr;};
    void deleteAddPartitionNum() { this->addPartitionNum_ = nullptr;};
    inline int32_t addPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(addPartitionNum_, 0) };
    inline ModifyPartitionNumRequest& setAddPartitionNum(int32_t addPartitionNum) { DARABONBA_PTR_SET_VALUE(addPartitionNum_, addPartitionNum) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPartitionNumRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyPartitionNumRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ModifyPartitionNumRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The number of partitions that you want to add to the topic.
    // 
    // *   The value must be an integer that is greater than 0.
    // *   To reduce the risk of data skew, we recommend that you set the value to a multiple of 6.
    // *   The number of total partitions ranges from 1 to 360.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> addPartitionNum_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The topic name.
    // 
    // This parameter is required.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
