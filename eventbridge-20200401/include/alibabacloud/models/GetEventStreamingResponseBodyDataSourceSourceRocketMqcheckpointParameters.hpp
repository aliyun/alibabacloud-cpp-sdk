// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEROCKETMQCHECKPOINTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTSTREAMINGRESPONSEBODYDATASOURCESOURCEROCKETMQCHECKPOINTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
    };
    GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters(const GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters(GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters &&) = default ;
    GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters() = default ;
    GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& operator=(const GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters &) = default ;
    GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& operator=(GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceType_ != nullptr && this->regionId_ != nullptr && this->topics_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<string> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
    inline vector<string> topics() { DARABONBA_PTR_GET(topics_, vector<string>) };
    inline GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline GetEventStreamingResponseBodyDataSourceSourceRocketMQCheckpointParameters& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<vector<string>> topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
