// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEMQTTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEMQTTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSourceSourceMQTTParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSourceSourceMQTTParameters& obj) { 
      DARABONBA_PTR_TO_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSourceSourceMQTTParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyDataType, bodyDataType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    UpdateEventStreamingRequestSourceSourceMQTTParameters() = default ;
    UpdateEventStreamingRequestSourceSourceMQTTParameters(const UpdateEventStreamingRequestSourceSourceMQTTParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceMQTTParameters(UpdateEventStreamingRequestSourceSourceMQTTParameters &&) = default ;
    UpdateEventStreamingRequestSourceSourceMQTTParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSourceSourceMQTTParameters() = default ;
    UpdateEventStreamingRequestSourceSourceMQTTParameters& operator=(const UpdateEventStreamingRequestSourceSourceMQTTParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceMQTTParameters& operator=(UpdateEventStreamingRequestSourceSourceMQTTParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bodyDataType_ != nullptr
        && this->instanceId_ != nullptr && this->regionId_ != nullptr && this->topic_ != nullptr; };
    // bodyDataType Field Functions 
    bool hasBodyDataType() const { return this->bodyDataType_ != nullptr;};
    void deleteBodyDataType() { this->bodyDataType_ = nullptr;};
    inline string bodyDataType() const { DARABONBA_PTR_GET_DEFAULT(bodyDataType_, "") };
    inline UpdateEventStreamingRequestSourceSourceMQTTParameters& setBodyDataType(string bodyDataType) { DARABONBA_PTR_SET_VALUE(bodyDataType_, bodyDataType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateEventStreamingRequestSourceSourceMQTTParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateEventStreamingRequestSourceSourceMQTTParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateEventStreamingRequestSourceSourceMQTTParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> bodyDataType_ = nullptr;
    // The ID of the ApsaraMQ for MQTT instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the region where the ApsaraMQ for MQTT instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the topic on the ApsaraMQ for MQTT instance.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
