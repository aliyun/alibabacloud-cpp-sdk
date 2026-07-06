// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETOPICCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETOPICCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpdateTopicConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTopicConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTopicConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    UpdateTopicConfigRequest() = default ;
    UpdateTopicConfigRequest(const UpdateTopicConfigRequest &) = default ;
    UpdateTopicConfigRequest(UpdateTopicConfigRequest &&) = default ;
    UpdateTopicConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTopicConfigRequest() = default ;
    UpdateTopicConfigRequest& operator=(const UpdateTopicConfigRequest &) = default ;
    UpdateTopicConfigRequest& operator=(UpdateTopicConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->topic_ == nullptr && this->value_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateTopicConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateTopicConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTopicConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateTopicConfigRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline UpdateTopicConfigRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the topic configuration.
    // 
    // - You can modify the configurations only for topics that use the local storage engine on reserved instances. You cannot modify the configurations for topics that use the cloud storage engine.
    // 
    // - You can modify the configurations of topics for Serverless instances.
    // 
    // - For `local topics` on reserved instances, the supported keys are \\`retention.ms\\`, \\`max.message.bytes\\`, \\`message.timestamp.type\\`, and \\`message.timestamp.difference.max.ms\\`.
    // 
    // - For Serverless instances, the supported keys are \\`retention.hours\\`, \\`max.message.bytes\\`, \\`message.timestamp.type\\`, and \\`message.timestamp.difference.max.ms\\`.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The topic name.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
    // The value of the topic configuration.
    // 
    // - The following configurations are supported for Serverless instances:
    // 
    //   - `retention.hours` specifies the message retention period. The value must be a string. The value must be in the range of 24 to 8,760.
    // 
    //   - `max.message.bytes` specifies the maximum message size. The value must be a string. The value must be in the range of 1,048,576 to 10,485,760.
    // 
    //   - `message.timestamp.type` specifies the message timestamp type. \\`CreateTime\\` indicates the timestamp that is specified by the producer when the message is sent. If no timestamp is specified, the time when the message is created on the client is used. \\`LogAppendTime\\` indicates the time when the message is stored on the server. Valid values: \\`CreateTime\\` and \\`LogAppendTime\\`.
    // 
    //   - `message.timestamp.difference.max.ms` specifies the maximum allowed difference between the timestamp of the server that receives the message and the timestamp specified in the message. If \\`message.timestamp.type\\` is set to \\`CreateTime\\` and the time difference exceeds this threshold, **the message is rejected**. This configuration does not take effect if \\`message.timestamp.type\\` is set to \\`LogAppendTime\\`.
    // 
    // - The following configurations are supported for reserved instances:
    // 
    //   - `retention.ms` specifies the message retention period. The value must be a string. The value must be in the range of 3,600,000 to 31,536,000,000.
    // 
    //   - `max.message.bytes` specifies the maximum message size. The value must be a string. The value must be in the range of 1,048,576 to 10,485,760.
    // 
    //   - `message.timestamp.type` specifies the message timestamp type. \\`CreateTime\\` indicates the timestamp that is specified by the producer when the message is sent. If no timestamp is specified, the time when the message is created on the client is used. \\`LogAppendTime\\` indicates the time when the message is stored on the server. Valid values: \\`CreateTime\\` and \\`LogAppendTime\\`.
    // 
    //   - `message.timestamp.difference.max.ms` specifies the maximum allowed difference between the timestamp of the server that receives the message and the timestamp specified in the message. If \\`message.timestamp.type\\` is set to \\`CreateTime\\` and the time difference exceeds this threshold, **the message is rejected**. This configuration does not take effect if \\`message.timestamp.type\\` is set to \\`LogAppendTime\\`.
    // 
    // This parameter is required.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
